// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"

namespace sf::reconstructed {

// 0x180131080 Features_WorldTint_WorldTintFeature_vfunc07
// source: re/dump/decompile/0x180131080_Features_WorldTint_WorldTintFeature_vfunc07.c
// size: 348 bytes; thunk: false
// body sha256: f4d5dac11900c6d76f17fcd9179b18133e8f2ab9bfb88e255d35560bc3cecc07
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180131080{
    "0x180131080",
    "Features_WorldTint_WorldTintFeature_vfunc07",
    R"F180131080S(undefined Features_WorldTint_WorldTintFeature_vfunc07())F180131080S",
    R"B180131080(// 0x180131080  Features_WorldTint_WorldTintFeature_vfunc07
// size=348 thunk=false
// signature: undefined Features_WorldTint_WorldTintFeature_vfunc07()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_WorldTint_WorldTintFeature_vfunc07(void)

{
  char cVar1;
  longlong *plVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  char local_48;
  char local_47;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if (DAT_1803fa46f == '\0') {
    local_18 = 0x2910e3a0aaac7743;
    local_20 = 0x93fd561a96ab0c67;
    plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_40,&local_20);
    plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_30,&local_18);
    piVar3 = (int *)FUN_1802029c0(*plVar2 + 0x28);
    if (((*piVar3 != 0) && (FUN_180024720(&local_48), local_48 == '\0')) && (local_47 != '\0')) {
      local_18 = 0x93fd561a96ab0c67;
      local_20 = 0x33ebf49592e8d668;
      plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_30,&local_18);
      plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_40,&local_20);
      pcVar4 = (char *)FUN_1801fcfc0(*plVar2 + 0x28);
      local_20 = 0x33ebf49592e8d668;
      local_18 = 0x93fd561a96ab0c67;
      cVar1 = *pcVar4;
      plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_30,&local_18);
      plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_40,&local_20);
      uVar5 = FUN_1801fcfc0(*plVar2 + 0x28);
      *(bool *)uVar5 = cVar1 == '\0';
    }
  }
  return;
}


)B180131080",
    "f4d5dac11900c6d76f17fcd9179b18133e8f2ab9bfb88e255d35560bc3cecc07",
    R"F180131080C(FUN_180024720
FUN_1801fcfc0
FUN_1802029c0
FUN_180241a30)F180131080C",
    R"F180131080D(DAT_1803da4c0
DAT_1803fa46f
DAT_1803fadf0)F180131080D",
    R"F180131080T()F180131080T",
    R"F180131080F(27: if (DAT_1803fa46f == '\0') {
33: if (((*piVar3 != 0) && (FUN_180024720(&local_48), local_48 == '\0')) && (local_47 != '\0')) {
48: return;)F180131080F",
    R"F180131080U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa46f.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.)F180131080U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180131080() noexcept {
    return kFunction_0x180131080;
}

// 0x1801311e0 FUN_1801311e0
// source: re/dump/decompile/0x1801311e0_FUN_1801311e0.c
// size: 143 bytes; thunk: false
// body sha256: cd3092df259375a83dd90adf3a8bcb375f3ce45404c19bd710e457b42c32c08f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801311e0{
    "0x1801311e0",
    "FUN_1801311e0",
    R"F1801311e0S(undefined FUN_1801311e0())F1801311e0S",
    R"B1801311e0(// 0x1801311e0  FUN_1801311e0
// size=143 thunk=false
// signature: undefined FUN_1801311e0()
// status: ok


ulonglong FUN_1801311e0(HMODULE param_1)

{
  HMODULE pHVar1;
  HMODULE pHVar2;
  
  pHVar1 = DAT_180423b78;
  pHVar2 = DAT_180425fd8;
  if (DAT_180425fd8 == (HMODULE)0x0) {
    pHVar1 = DAT_1803fea40;
    if (DAT_1803fea40 == (HMODULE)0x0) {
      pHVar1 = GetModuleHandleA("steamclient64.dll");
      pHVar2 = (HMODULE)0x0;
      if (pHVar1 == (HMODULE)0x0) goto LAB_180131267;
    }
    DAT_1803fea40 = pHVar1;
    pHVar2 = (HMODULE)0x5a4d;
    if ((((short)DAT_1803fea40->unused != 0x5a4d) ||
        (pHVar2 = (HMODULE)(longlong)DAT_1803fea40[0xf].unused,
        *(int *)((longlong)&DAT_1803fea40->unused + (longlong)&pHVar2->unused) != 0x4550)) ||
       (pHVar2 = (HMODULE)(ulonglong)
                          *(uint *)((longlong)&DAT_1803fea40->unused +
                                   (longlong)&pHVar2[0x14].unused), pHVar1 = DAT_1803fea40,
       pHVar2 == (HMODULE)0x0)) goto LAB_180131267;
  }
  DAT_180425fd8 = pHVar2;
  DAT_180423b78 = pHVar1;
  pHVar2 = DAT_180425fd8;
  if ((DAT_180423b78 <= param_1) &&
     (pHVar2 = (HMODULE)((longlong)&DAT_180423b78->unused + (longlong)&DAT_180425fd8->unused),
     param_1 < pHVar2)) {
    return CONCAT71((int7)((ulonglong)pHVar2 >> 8),1);
  }
LAB_180131267:
  return (ulonglong)pHVar2 & 0xffffffffffffff00;
}


)B1801311e0",
    "cd3092df259375a83dd90adf3a8bcb375f3ce45404c19bd710e457b42c32c08f",
    R"F1801311e0C()F1801311e0C",
    R"F1801311e0D(LAB_180131267
DAT_1803fea40
DAT_180423b78
DAT_180425fd8)F1801311e0D",
    R"F1801311e0T("steamclient64.dll")F1801311e0T",
    R"F1801311e0F(15: if (DAT_180425fd8 == (HMODULE)0x0) {
17: if (DAT_1803fea40 == (HMODULE)0x0) {
20: if (pHVar1 == (HMODULE)0x0) goto LAB_180131267;
24: if ((((short)DAT_1803fea40->unused != 0x5a4d) ||
35: if ((DAT_180423b78 <= param_1) &&
38: return CONCAT71((int7)((ulonglong)pHVar2 >> 8),1);
40: LAB_180131267:
41: return (ulonglong)pHVar2 & 0xffffffffffffff00;)F1801311e0F",
    R"F1801311e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180131267.
TODO: recover the declaration, type and value for global/data reference DAT_1803fea40.
TODO: recover the declaration, type and value for global/data reference DAT_180423b78.
TODO: recover the declaration, type and value for global/data reference DAT_180425fd8.)F1801311e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801311e0() noexcept {
    return kFunction_0x1801311e0;
}

// 0x180131270 FUN_180131270
// source: re/dump/decompile/0x180131270_FUN_180131270.c
// size: 285 bytes; thunk: false
// body sha256: 862ca455bd89c8997bed6a828496026ccde62f46e16620379d1fd21eecdd5d3e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180131270{
    "0x180131270",
    "FUN_180131270",
    R"F180131270S(undefined FUN_180131270())F180131270S",
    R"B180131270(// 0x180131270  FUN_180131270
// size=285 thunk=false
// signature: undefined FUN_180131270()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180131270(void)

{
  HMODULE pHVar1;
  
  if ((DAT_1803fedb8 == '\0') &&
     ((pHVar1 = DAT_1803fea40, DAT_1803fea40 != (HMODULE)0x0 ||
      (pHVar1 = GetModuleHandleA("steamclient64.dll"), pHVar1 != (HMODULE)0x0)))) {
    DAT_1803fea40 = pHVar1;
    pHVar1 = DAT_1803fea40;
    DAT_1803fed88 = GetProcAddress(DAT_1803fea40,"CreateInterface");
    DAT_1803fed90 = GetProcAddress(pHVar1,"Steam_CreateLocalUser");
    DAT_1803fed98 = GetProcAddress(pHVar1,"Steam_ReleaseUser");
    DAT_1803feda0 = GetProcAddress(pHVar1,"Steam_BGetCallback");
    DAT_1803feda8 = GetProcAddress(pHVar1,"Steam_FreeLastCallback");
    _DAT_1803fedb0 = GetProcAddress(pHVar1,"Steam_BReleaseSteamPipe");
    if ((DAT_1803fed88 == (FARPROC)0x0) ||
       ((((DAT_1803fed90 == (FARPROC)0x0 || (DAT_1803fed98 == (FARPROC)0x0)) ||
         (DAT_1803feda0 == (FARPROC)0x0)) || (DAT_1803fedb8 = '\x01', DAT_1803feda8 == (FARPROC)0x0)
        ))) {
      DAT_1803fedb8 = '\0';
    }
  }
  return &DAT_1803fed88;
}


)B180131270",
    "862ca455bd89c8997bed6a828496026ccde62f46e16620379d1fd21eecdd5d3e",
    R"F180131270C()F180131270C",
    R"F180131270D(DAT_1803fea40
DAT_1803fed88
DAT_1803fed90
DAT_1803fed98
DAT_1803feda0
DAT_1803feda8
DAT_1803fedb8)F180131270D",
    R"F180131270T("CreateInterface"
"Steam_ReleaseUser"
"steamclient64.dll"
"Steam_BGetCallback"
"Steam_CreateLocalUser"
"Steam_FreeLastCallback"
"Steam_BReleaseSteamPipe")F180131270T",
    R"F180131270F(14: if ((DAT_1803fedb8 == '\0') &&
25: if ((DAT_1803fed88 == (FARPROC)0x0) ||
32: return &DAT_1803fed88;)F180131270F",
    R"F180131270U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fea40.
TODO: recover the declaration, type and value for global/data reference DAT_1803fed88.
TODO: recover the declaration, type and value for global/data reference DAT_1803fed90.
TODO: recover the declaration, type and value for global/data reference DAT_1803fed98.
TODO: recover the declaration, type and value for global/data reference DAT_1803feda0.
TODO: recover the declaration, type and value for global/data reference DAT_1803feda8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fedb8.)F180131270U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180131270() noexcept {
    return kFunction_0x180131270;
}

// 0x180131390 FUN_180131390
// source: re/dump/decompile/0x180131390_FUN_180131390.c
// size: 65 bytes; thunk: false
// body sha256: eb780228d3ee7f92acb14fc3d9c81f3417751ee3be53c6e4a210d16cacbdfbf7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180131390{
    "0x180131390",
    "FUN_180131390",
    R"F180131390S(undefined FUN_180131390())F180131390S",
    R"B180131390(// 0x180131390  FUN_180131390
// size=65 thunk=false
// signature: undefined FUN_180131390()
// status: ok


bool FUN_180131390(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_1801311e0();
  if (cVar1 == '\0') {
    return false;
  }
  iVar2 = strcmp(param_1,param_2);
  return iVar2 == 0;
}


)B180131390",
    "eb780228d3ee7f92acb14fc3d9c81f3417751ee3be53c6e4a210d16cacbdfbf7",
    R"F180131390C(FUN_1801311e0)F180131390C",
    R"F180131390D()F180131390D",
    R"F180131390T()F180131390T",
    R"F180131390F(14: if (cVar1 == '\0') {
15: return false;
18: return iVar2 == 0;)F180131390F",
    R"F180131390U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180131390U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180131390() noexcept {
    return kFunction_0x180131390;
}

// 0x1801313e0 FUN_1801313e0
// source: re/dump/decompile/0x1801313e0_FUN_1801313e0.c
// size: 269 bytes; thunk: false
// body sha256: dadb7a5d95c279cb3076c696edffe4214f3fdfc32f2390f8d02c158be19757b2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801313e0{
    "0x1801313e0",
    "FUN_1801313e0",
    R"F1801313e0S(undefined FUN_1801313e0())F1801313e0S",
    R"B1801313e0(// 0x1801313e0  FUN_1801313e0
// size=269 thunk=false
// signature: undefined FUN_1801313e0()
// status: ok


undefined8 FUN_1801313e0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar1;
  HMODULE pHVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  pHVar2 = DAT_180423b78;
  uVar4 = DAT_180425fd8;
  if (DAT_180425fd8 == 0) {
    pHVar2 = DAT_1803fea40;
    if ((DAT_1803fea40 == (HMODULE)0x0) &&
       (pHVar2 = GetModuleHandleA("steamclient64.dll"), pHVar2 == (HMODULE)0x0)) {
      return 0;
    }
    DAT_1803fea40 = pHVar2;
    if ((short)DAT_1803fea40->unused != 0x5a4d) {
      return 0;
    }
    if (*(int *)((longlong)&DAT_1803fea40->unused + (longlong)DAT_1803fea40[0xf].unused) != 0x4550)
    {
      return 0;
    }
    uVar4 = (ulonglong)
            *(uint *)((longlong)&DAT_1803fea40[0x14].unused + (longlong)DAT_1803fea40[0xf].unused);
    pHVar2 = DAT_1803fea40;
    if (uVar4 == 0) {
      return 0;
    }
  }
  DAT_180425fd8 = uVar4;
  DAT_180423b78 = pHVar2;
  uVar4 = DAT_180425fd8;
  pHVar2 = DAT_180423b78;
  cVar1 = FUN_1801311e0(param_1);
  if (cVar1 != '\0') {
    uVar4 = (uVar4 - param_1) + (longlong)pHVar2;
    if (uVar4 < param_3) {
      param_3 = uVar4;
    }
    lVar3 = 0;
    if (6 < param_3) {
      do {
        if (((((byte)(*(char *)(param_1 + lVar3) + 0xb8U) < 8) &&
             (*(char *)(param_1 + 1 + lVar3) == -0x73)) &&
            ((*(byte *)(param_1 + 2 + lVar3) & 199) == 5)) &&
           (cVar1 = FUN_180131390((longlong)*(int *)(param_1 + 3 + lVar3) + 7 + lVar3 + param_1,
                                  param_2), cVar1 != '\0')) {
          return 1;
        }
        uVar4 = lVar3 + 8;
        lVar3 = lVar3 + 1;
      } while (uVar4 <= param_3);
    }
  }
  return 0;
}


)B1801313e0",
    "dadb7a5d95c279cb3076c696edffe4214f3fdfc32f2390f8d02c158be19757b2",
    R"F1801313e0C(FUN_1801311e0
FUN_180131390)F1801313e0C",
    R"F1801313e0D(DAT_1803fea40
DAT_180423b78
DAT_180425fd8)F1801313e0D",
    R"F1801313e0T("steamclient64.dll")F1801313e0T",
    R"F1801313e0F(17: if (DAT_180425fd8 == 0) {
19: if ((DAT_1803fea40 == (HMODULE)0x0) &&
21: return 0;
24: if ((short)DAT_1803fea40->unused != 0x5a4d) {
25: return 0;
27: if (*(int *)((longlong)&DAT_1803fea40->unused + (longlong)DAT_1803fea40[0xf].unused) != 0x4550)
29: return 0;
34: if (uVar4 == 0) {
35: return 0;
43: if (cVar1 != '\0') {
45: if (uVar4 < param_3) {
49: if (6 < param_3) {
50: do {
51: if (((((byte)(*(char *)(param_1 + lVar3) + 0xb8U) < 8) &&
56: return 1;
63: return 0;)F1801313e0F",
    R"F1801313e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fea40.
TODO: recover the declaration, type and value for global/data reference DAT_180423b78.
TODO: recover the declaration, type and value for global/data reference DAT_180425fd8.)F1801313e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801313e0() noexcept {
    return kFunction_0x1801313e0;
}

// 0x1801314f0 FUN_1801314f0
// source: re/dump/decompile/0x1801314f0_FUN_1801314f0.c
// size: 91 bytes; thunk: false
// body sha256: 4856c6c2f85ea8f9b7ed7b225a18081dad996b2e397c3db19885248908d5f2b5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801314f0{
    "0x1801314f0",
    "FUN_1801314f0",
    R"F1801314f0S(undefined FUN_1801314f0())F1801314f0S",
    R"B1801314f0(// 0x1801314f0  FUN_1801314f0
// size=91 thunk=false
// signature: undefined FUN_1801314f0()
// status: ok


ulonglong FUN_1801314f0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1801311e0();
  if ((char)uVar1 == '\0') {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    uVar1 = 0;
    while ((uVar1 + 1 < 0x80 && (*(char *)(uVar1 + param_1) != '\0'))) {
      *(char *)(uVar1 + param_2) = *(char *)(uVar1 + param_1);
      uVar1 = uVar1 + 1;
    }
    *(undefined1 *)(uVar1 + param_2) = 0;
    uVar1 = CONCAT71((int7)(uVar1 >> 8),uVar1 != 0);
  }
  return uVar1;
}


)B1801314f0",
    "4856c6c2f85ea8f9b7ed7b225a18081dad996b2e397c3db19885248908d5f2b5",
    R"F1801314f0C(FUN_1801311e0)F1801314f0C",
    R"F1801314f0D()F1801314f0D",
    R"F1801314f0T()F1801314f0T",
    R"F1801314f0F(13: if ((char)uVar1 == '\0') {
16: else {
18: while ((uVar1 + 1 < 0x80 && (*(char *)(uVar1 + param_1) != '\0'))) {
25: return uVar1;)F1801314f0F",
    R"F1801314f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1801314f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801314f0() noexcept {
    return kFunction_0x1801314f0;
}

// 0x180131550 FUN_180131550
// source: re/dump/decompile/0x180131550_FUN_180131550.c
// size: 535 bytes; thunk: false
// body sha256: a0934fd351e562859b640433dda02e2f876e224e4ccaeb523e4cbc5376baba2f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180131550{
    "0x180131550",
    "FUN_180131550",
    R"F180131550S(undefined FUN_180131550())F180131550S",
    R"B180131550(// 0x180131550  FUN_180131550
// size=535 thunk=false
// signature: undefined FUN_180131550()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180131550(longlong param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                       ulonglong param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  HMODULE pHVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte *pbVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_d8 [32];
  byte local_b8;
  byte local_b7 [127];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  pHVar7 = DAT_180423b78;
  uVar9 = DAT_180425fd8;
  if (DAT_180425fd8 == 0) {
    pHVar7 = DAT_1803fea40;
    if (DAT_1803fea40 == (HMODULE)0x0) {
      pHVar7 = GetModuleHandleA("steamclient64.dll");
      uVar8 = 0;
      if (pHVar7 == (HMODULE)0x0) goto LAB_180131748;
    }
    DAT_1803fea40 = pHVar7;
    uVar8 = 0x5a4d;
    if ((((short)DAT_1803fea40->unused != 0x5a4d) ||
        (uVar8 = (ulonglong)DAT_1803fea40[0xf].unused,
        *(int *)((longlong)&DAT_1803fea40->unused + uVar8) != 0x4550)) ||
       (uVar9 = (ulonglong)*(uint *)((longlong)&DAT_1803fea40[0x14].unused + uVar8),
       pHVar7 = DAT_1803fea40, uVar9 == 0)) goto LAB_180131748;
  }
  DAT_180425fd8 = uVar9;
  DAT_180423b78 = pHVar7;
  uVar9 = DAT_180425fd8;
  pHVar7 = DAT_180423b78;
  uVar8 = FUN_1801311e0(param_1);
  if ((char)uVar8 != '\0') {
    uVar9 = (uVar9 - param_1) + (longlong)pHVar7;
    if (uVar9 < param_5) {
      param_5 = uVar9;
    }
    bVar2 = false;
    bVar3 = false;
    *param_3 = '\0';
    lVar11 = 0;
    if (6 < param_5) {
      do {
        if ((((byte)(*(char *)(param_1 + lVar11) + 0xb8U) < 8) &&
            (*(char *)(param_1 + 1 + lVar11) == -0x73)) &&
           (((*(byte *)(param_1 + 2 + lVar11) & 199) == 5 &&
            (cVar5 = FUN_1801314f0((longlong)*(int *)(param_1 + 3 + lVar11) + 7 + lVar11 + param_1,
                                   &local_b8), cVar5 != '\0')))) {
          iVar6 = strcmp((char *)&local_b8,"IClientUser");
          if (iVar6 == 0) {
            bVar3 = true;
          }
          else if ((!bVar2) && (local_b8 != 0)) {
            pbVar10 = &local_b8;
            lVar4 = 0;
            bVar1 = local_b8;
            do {
              lVar12 = lVar4;
              if (((0x2f < (byte)(bVar1 - 0x30)) ||
                  ((0x87fffffe03ffU >> ((ulonglong)(bVar1 - 0x30) & 0x3f) & 1) == 0)) &&
                 (0x19 < (byte)(bVar1 + 0x9f))) goto LAB_18013170e;
              bVar1 = pbVar10[1];
              pbVar10 = pbVar10 + 1;
              lVar4 = lVar12 + 1;
            } while (bVar1 != 0);
            if (lVar12 - 1U < 0x3e) {
              strncpy_s(param_3,0x80,(char *)&local_b8,0xffffffffffffffff);
              bVar2 = true;
            }
          }
        }
LAB_18013170e:
        uVar9 = lVar11 + 8;
        lVar11 = lVar11 + 1;
      } while (uVar9 <= param_5);
      if ((bVar2) && (bVar3)) {
        return CONCAT71((int7)(uVar9 >> 8),1);
      }
    }
    return uVar9 & 0xffffffffffffff00;
  }
LAB_180131748:
  return uVar8 & 0xffffffffffffff00;
}


)B180131550",
    "a0934fd351e562859b640433dda02e2f876e224e4ccaeb523e4cbc5376baba2f",
    R"F180131550C(FUN_1801311e0
FUN_1801314f0)F180131550C",
    R"F180131550D(LAB_18013170e
LAB_180131748
DAT_1803da4c0
DAT_1803fea40
DAT_180423b78
DAT_180425fd8)F180131550D",
    R"F180131550T("IClientUser"
"steamclient64.dll")F180131550T",
    R"F180131550F(33: if (DAT_180425fd8 == 0) {
35: if (DAT_1803fea40 == (HMODULE)0x0) {
38: if (pHVar7 == (HMODULE)0x0) goto LAB_180131748;
42: if ((((short)DAT_1803fea40->unused != 0x5a4d) ||
53: if ((char)uVar8 != '\0') {
55: if (uVar9 < param_5) {
62: if (6 < param_5) {
63: do {
64: if ((((byte)(*(char *)(param_1 + lVar11) + 0xb8U) < 8) &&
70: if (iVar6 == 0) {
73: else if ((!bVar2) && (local_b8 != 0)) {
77: do {
79: if (((0x2f < (byte)(bVar1 - 0x30)) ||
86: if (lVar12 - 1U < 0x3e) {
92: LAB_18013170e:
96: if ((bVar2) && (bVar3)) {
97: return CONCAT71((int7)(uVar9 >> 8),1);
100: return uVar9 & 0xffffffffffffff00;
102: LAB_180131748:
103: return uVar8 & 0xffffffffffffff00;)F180131550F",
    R"F180131550U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18013170e.
TODO: recover the declaration, type and value for global/data reference LAB_180131748.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fea40.
TODO: recover the declaration, type and value for global/data reference DAT_180423b78.
TODO: recover the declaration, type and value for global/data reference DAT_180425fd8.)F180131550U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180131550() noexcept {
    return kFunction_0x180131550;
}

// 0x180131770 FUN_180131770
// source: re/dump/decompile/0x180131770_FUN_180131770.c
// size: 257 bytes; thunk: false
// body sha256: 73f3140786df634dbd91a9bdd7521e850f0c40b4e5a46490b7135fb9f7e14381
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180131770{
    "0x180131770",
    "FUN_180131770",
    R"F180131770S(undefined FUN_180131770())F180131770S",
    R"B180131770(// 0x180131770  FUN_180131770
// size=257 thunk=false
// signature: undefined FUN_180131770()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180131770(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  longlong lVar12;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auVar13 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar1 = *(ulonglong *)(param_1 + (longlong)param_3 * 8);
  uVar5 = uVar1 + 0x400;
  auVar9._8_8_ = uVar1;
  auVar9._0_8_ = uVar1;
  if (0 < (int)param_2) {
    iVar6 = 0;
    if ((3 < param_2) && (5 < DAT_1803da510)) {
      auVar18._8_8_ = uVar5;
      auVar18._0_8_ = uVar5;
      auVar19 = auVar18;
      do {
        lVar4 = (longlong)iVar6;
        iVar6 = iVar6 + 4;
        auVar8 = *(undefined1 (*) [16])(param_1 + lVar4 * 8);
        auVar7 = vpminuq_avx512vl(auVar8,auVar9);
        lVar12 = -(ulonglong)(auVar7._0_8_ == auVar8._0_8_);
        lVar16 = -(ulonglong)(auVar7._8_8_ == auVar8._8_8_);
        uVar11 = ~(uint)lVar12 & _DAT_180381830;
        uVar14 = ~(uint)((ulonglong)lVar12 >> 0x20) & _UNK_180381834;
        uVar15 = ~(uint)lVar16 & _UNK_180381838;
        uVar17 = ~(uint)((ulonglong)lVar16 >> 0x20) & _UNK_18038183c;
        auVar8 = vpminuq_avx512vl(auVar18,auVar8);
        auVar7._0_4_ = auVar8._0_4_ & uVar11;
        auVar7._4_4_ = auVar8._4_4_ & uVar14;
        auVar7._8_4_ = auVar8._8_4_ & uVar15;
        auVar7._12_4_ = auVar8._12_4_ & uVar17;
        auVar8._0_4_ = ~uVar11 & auVar18._0_4_;
        auVar8._4_4_ = ~uVar14 & auVar18._4_4_;
        auVar8._8_4_ = ~uVar15 & auVar18._8_4_;
        auVar8._12_4_ = ~uVar17 & auVar18._12_4_;
        auVar18 = auVar7 | auVar8;
        auVar8 = *(undefined1 (*) [16])(param_1 + 0x10 + lVar4 * 8);
        auVar7 = vpminuq_avx512vl(auVar8,auVar9);
        lVar4 = -(ulonglong)(auVar7._0_8_ == auVar8._0_8_);
        lVar12 = -(ulonglong)(auVar7._8_8_ == auVar8._8_8_);
        uVar11 = ~(uint)lVar4 & _DAT_180381830;
        uVar14 = ~(uint)((ulonglong)lVar4 >> 0x20) & _UNK_180381834;
        uVar15 = ~(uint)lVar12 & _UNK_180381838;
        uVar17 = ~(uint)((ulonglong)lVar12 >> 0x20) & _UNK_18038183c;
        auVar8 = vpminuq_avx512vl(auVar19,auVar8);
        auVar10._0_4_ = auVar8._0_4_ & uVar11;
        auVar10._4_4_ = auVar8._4_4_ & uVar14;
        auVar10._8_4_ = auVar8._8_4_ & uVar15;
        auVar10._12_4_ = auVar8._12_4_ & uVar17;
        auVar13._0_4_ = ~uVar11 & auVar19._0_4_;
        auVar13._4_4_ = ~uVar14 & auVar19._4_4_;
        auVar13._8_4_ = ~uVar15 & auVar19._8_4_;
        auVar13._12_4_ = ~uVar17 & auVar19._12_4_;
        auVar19 = auVar10 | auVar13;
      } while (iVar6 < (int)(param_2 & 0xfffffffc));
      auVar9 = vpminuq_avx512vl(auVar18,auVar19);
      auVar9 = vpminuq_avx512vl(auVar9,auVar9 >> 0x40);
      uVar5 = auVar9._0_8_;
      if ((int)param_2 <= iVar6) goto LAB_18013186d;
    }
    do {
      uVar2 = *(ulonglong *)(param_1 + (longlong)iVar6 * 8);
      uVar3 = uVar5;
      if ((uVar1 < uVar2) && (uVar3 = uVar2, uVar5 <= uVar2)) {
        uVar3 = uVar5;
      }
      uVar5 = uVar3;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)param_2);
  }
LAB_18013186d:
  return uVar5 - uVar1;
}


)B180131770",
    "73f3140786df634dbd91a9bdd7521e850f0c40b4e5a46490b7135fb9f7e14381",
    R"F180131770C()F180131770C",
    R"F180131770D(LAB_18013186d
DAT_1803da510)F180131770D",
    R"F180131770T()F180131770T",
    R"F180131770F(36: if (0 < (int)param_2) {
38: if ((3 < param_2) && (5 < DAT_1803da510)) {
42: do {
85: if ((int)param_2 <= iVar6) goto LAB_18013186d;
87: do {
90: if ((uVar1 < uVar2) && (uVar3 = uVar2, uVar5 <= uVar2)) {
97: LAB_18013186d:
98: return uVar5 - uVar1;)F180131770F",
    R"F180131770U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18013186d.
TODO: recover the declaration, type and value for global/data reference DAT_1803da510.)F180131770U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180131770() noexcept {
    return kFunction_0x180131770;
}

// 0x180131880 FUN_180131880
// source: re/dump/decompile/0x180131880_FUN_180131880.c
// size: 52 bytes; thunk: false
// body sha256: c8e3dc88c3fc6a53deb91321b8e42eac14c3df2e3aede7333f56e8a1e14504fb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180131880{
    "0x180131880",
    "FUN_180131880",
    R"F180131880S(undefined FUN_180131880())F180131880S",
    R"B180131880(// 0x180131880  FUN_180131880
// size=52 thunk=false
// signature: undefined FUN_180131880()
// status: ok


undefined8 FUN_180131880(undefined8 *param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  uVar1 = *param_1;
  cVar2 = FUN_1801311e0(uVar1);
  uVar3 = 0;
  if (cVar2 != '\0') {
    uVar3 = uVar1;
  }
  return uVar3;
}


)B180131880",
    "c8e3dc88c3fc6a53deb91321b8e42eac14c3df2e3aede7333f56e8a1e14504fb",
    R"F180131880C(FUN_1801311e0)F180131880C",
    R"F180131880D()F180131880D",
    R"F180131880T()F180131880T",
    R"F180131880F(14: if (param_1 == (undefined8 *)0x0) {
15: return 0;
20: if (cVar2 != '\0') {
23: return uVar3;)F180131880F",
    R"F180131880U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180131880U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180131880() noexcept {
    return kFunction_0x180131880;
}

// 0x1801318c0 FUN_1801318c0
// source: re/dump/decompile/0x1801318c0_FUN_1801318c0.c
// size: 862 bytes; thunk: false
// body sha256: 7f55b68c9bc713f4383cd02a3323cb94d4294fe9cb6f60bfd2db20c61c1cb7ab
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801318c0{
    "0x1801318c0",
    "FUN_1801318c0",
    R"F1801318c0S(undefined FUN_1801318c0())F1801318c0S",
    R"B1801318c0(// 0x1801318c0  FUN_1801318c0
// size=862 thunk=false
// signature: undefined FUN_1801318c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1801318c0(undefined8 param_1,undefined8 param_2,char *param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  size_t sVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 ******ppppppuVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  char *local_1e0;
  char *local_1d8;
  undefined *local_1c8 [2];
  undefined *local_1b8;
  undefined1 local_1b0 [16];
  undefined8 *****local_1a0;
  undefined8 uStack_198;
  ulonglong local_190;
  ulonglong local_188;
  char local_178 [128];
  char local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_208;
  lVar4 = FUN_180131880();
  if (lVar4 == 0) {
    return 0xffffffffffffffff;
  }
  uVar9 = 0;
  if ((DAT_18042f180 & 1) == 0) {
    DAT_18042f180 = DAT_18042f180 | 1;
    _DAT_1804277d8 = 0;
    _DAT_1804277e0 = 0;
    uRam00000001804277e8 = 0;
    _DAT_1804277f0 = 0;
    _DAT_1804277f8 = 0;
    local_1c8[0] = (undefined *)((ulonglong)local_1c8[0] & 0xffffffff00000000);
    _DAT_1804277c0 = 0;
    DAT_1804277c8 = 0;
    _DAT_1804277d0 = 0;
    DAT_1804277c8 = FUN_1802d8350(0x38);
    *(longlong *)DAT_1804277c8 = DAT_1804277c8;
    *(longlong *)(DAT_1804277c8 + 8) = DAT_1804277c8;
    _DAT_1804277d8 = 0;
    _DAT_1804277e0 = 0;
    uRam00000001804277e8 = 0;
    _DAT_1804277f0 = 7;
    _DAT_1804277f8 = 8;
    _DAT_1804277c0 = CONCAT44(DAT_1804277c0_4,0x3f800000);
    FUN_18022c1b0(&DAT_1804277d8,0x10,DAT_1804277c8);
    atexit(FUN_18030a2a0);
  }
  local_1e0 = "IClientUser";
  uVar13 = 0xffffffffffffffff;
  local_1e8 = lVar4;
  local_1d8 = param_3;
  FUN_180012b20(local_f8,0xc0,0xffffffffffffffff,"%p|%s|%s");
  local_1a0 = (undefined8 ******)0x0;
  uStack_198 = 0;
  local_190 = 0;
  local_188 = 0;
  sVar5 = strlen(local_f8);
  FUN_18001d080(&local_1a0,local_f8,sVar5);
  local_1b8 = &DAT_1803e7430;
  iVar3 = _Mtx_lock(&DAT_1803e7430);
  if (iVar3 != 0) {
LAB_180131c12:
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar9 = (*pcVar1)();
    return uVar9;
  }
  uVar14 = uVar13;
  if (DAT_1803e747c == 0x7fffffff) {
LAB_180131bc7:
    DAT_1803e747c = DAT_1803e747c + -1;
    std::_Throw_Cpp_error(6);
  }
  else {
    ppppppuVar11 = &local_1a0;
    if (0xf < local_188) {
      ppppppuVar11 = (undefined8 ******)local_1a0;
    }
    uVar16 = 0xcbf29ce484222325;
    uVar10 = uVar9;
    if (local_190 != 0) {
      do {
        uVar16 = (uVar16 ^ *(byte *)((longlong)ppppppuVar11 + uVar10)) * 0x100000001b3;
        uVar10 = uVar10 + 1;
      } while (uVar10 < local_190);
    }
    lVar6 = FUN_180229bd0(&DAT_1804277c0,local_1c8,&local_1a0,uVar16);
    lVar7 = DAT_1804277c8;
    if (*(longlong *)(lVar6 + 8) != 0) {
      lVar7 = *(longlong *)(lVar6 + 8);
    }
    if (lVar7 != DAT_1804277c8) {
      uVar14 = (ulonglong)*(uint *)(lVar7 + 0x30);
      goto LAB_180131bf7;
    }
    _Mtx_unlock(&DAT_1803e7430);
    lVar7 = FUN_180131880(param_1);
    uVar10 = uVar9;
    if (lVar7 != 0) {
      do {
        uVar12 = (uint)uVar10;
        cVar2 = FUN_1801311e0(*(undefined8 *)(lVar7 + uVar10 * 8));
        if (cVar2 == '\0') break;
        uVar12 = uVar12 + 1;
        uVar10 = (ulonglong)uVar12;
      } while ((int)uVar12 < 0x200);
      if (uVar12 != 0) {
        do {
          local_1e8 = FUN_180131770(lVar4,uVar12,uVar9);
          cVar2 = FUN_180131550(*(undefined8 *)(lVar4 + (longlong)(int)uVar9 * 8));
          if ((cVar2 != '\0') && (iVar3 = strcmp(local_178,param_3), uVar14 = uVar9, iVar3 == 0))
          break;
          uVar15 = (int)uVar9 + 1;
          uVar9 = (ulonglong)uVar15;
          uVar14 = uVar13;
        } while ((int)uVar15 < (int)uVar12);
      }
    }
    local_1c8[0] = &DAT_1803e7430;
    iVar3 = _Mtx_lock(&DAT_1803e7430);
    if (iVar3 != 0) goto LAB_180131c12;
    if (DAT_1803e747c == 0x7fffffff) goto LAB_180131bc7;
  }
  plVar8 = (longlong *)FUN_180219900(&DAT_1804277c0,local_1b0,&local_1a0);
  *(int *)(*plVar8 + 0x30) = (int)uVar14;
LAB_180131bf7:
  _Mtx_unlock(&DAT_1803e7430);
  FUN_18020e450(&local_1a0);
  return uVar14 & 0xffffffff;
}


)B1801318c0",
    "7f55b68c9bc713f4383cd02a3323cb94d4294fe9cb6f60bfd2db20c61c1cb7ab",
    R"F1801318c0C(FUN_180012b20
FUN_18001d080
FUN_1801311e0
FUN_180131550
FUN_180131770
FUN_180131880
FUN_18020e450
FUN_180219900
FUN_180229bd0
FUN_18022c1b0
FUN_1802d8350
FUN_18030a2a0)F1801318c0C",
    R"F1801318c0D(LAB_180131bc7
LAB_180131bf7
LAB_180131c12
DAT_1803da4c0
DAT_1803e7430
DAT_1803e747c
DAT_1804277c0
DAT_1804277c8
DAT_1804277d8
DAT_18042f180)F1801318c0D",
    R"F1801318c0T("%p|%s|%s"
"IClientUser")F1801318c0T",
    R"F1801318c0F(46: if (lVar4 == 0) {
47: return 0xffffffffffffffff;
50: if ((DAT_18042f180 & 1) == 0) {
86: if (iVar3 != 0) {
87: LAB_180131c12:
91: return uVar9;
94: if (DAT_1803e747c == 0x7fffffff) {
95: LAB_180131bc7:
99: else {
101: if (0xf < local_188) {
106: if (local_190 != 0) {
107: do {
114: if (*(longlong *)(lVar6 + 8) != 0) {
117: if (lVar7 != DAT_1804277c8) {
119: goto LAB_180131bf7;
124: if (lVar7 != 0) {
125: do {
128: if (cVar2 == '\0') break;
132: if (uVar12 != 0) {
133: do {
136: if ((cVar2 != '\0') && (iVar3 = strcmp(local_178,param_3), uVar14 = uVar9, iVar3 == 0))
137: break;
146: if (iVar3 != 0) goto LAB_180131c12;
147: if (DAT_1803e747c == 0x7fffffff) goto LAB_180131bc7;
151: LAB_180131bf7:
154: return uVar14 & 0xffffffff;)F1801318c0F",
    R"F1801318c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180131bc7.
TODO: recover the declaration, type and value for global/data reference LAB_180131bf7.
TODO: recover the declaration, type and value for global/data reference LAB_180131c12.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7430.
TODO: recover the declaration, type and value for global/data reference DAT_1803e747c.
TODO: recover the declaration, type and value for global/data reference DAT_1804277c0.
TODO: recover the declaration, type and value for global/data reference DAT_1804277c8.
TODO: recover the declaration, type and value for global/data reference DAT_1804277d8.
TODO: recover the declaration, type and value for global/data reference DAT_18042f180.
TODO: resolve the indirect call in body 89: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 90: uVar9 = (*pcVar1)();.)F1801318c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801318c0() noexcept {
    return kFunction_0x1801318c0;
}

// 0x180131c20 FUN_180131c20
// source: re/dump/decompile/0x180131c20_FUN_180131c20.c
// size: 233 bytes; thunk: false
// body sha256: 1bd0d8b31a08302fa2381c37527e101ec50ad6f3947563adc55003e10e14b333
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180131c20{
    "0x180131c20",
    "FUN_180131c20",
    R"F180131c20S(undefined FUN_180131c20())F180131c20S",
    R"B180131c20(// 0x180131c20  FUN_180131c20
// size=233 thunk=false
// signature: undefined FUN_180131c20()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180131c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  char local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  lVar3 = FUN_180131880();
  if ((lVar3 != 0) && (lVar4 = FUN_180131880(param_1), lVar4 != 0)) {
    uVar6 = 0;
    do {
      cVar1 = FUN_1801311e0(*(undefined8 *)(lVar4 + uVar6 * 8));
      if (cVar1 == '\0') break;
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < 0x200);
    iVar7 = 0;
    iVar8 = 0;
    if ((int)uVar6 != 0) {
      do {
        local_b8 = FUN_180131770(lVar3,uVar6,iVar8);
        cVar1 = FUN_180131550(*(undefined8 *)(lVar3 + (longlong)iVar8 * 8));
        if ((cVar1 != '\0') && (iVar2 = strcmp(local_a8,"GetAccountName"), iVar2 == 0)) {
          if (iVar7 == param_4) {
            return iVar8;
          }
          iVar7 = iVar7 + 1;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)uVar6);
    }
  }
  return -1;
}


)B180131c20",
    "1bd0d8b31a08302fa2381c37527e101ec50ad6f3947563adc55003e10e14b333",
    R"F180131c20C(FUN_1801311e0
FUN_180131550
FUN_180131770
FUN_180131880)F180131c20C",
    R"F180131c20D(DAT_1803da4c0)F180131c20D",
    R"F180131c20T("GetAccountName")F180131c20T",
    R"F180131c20F(27: if ((lVar3 != 0) && (lVar4 = FUN_180131880(param_1), lVar4 != 0)) {
29: do {
31: if (cVar1 == '\0') break;
37: if ((int)uVar6 != 0) {
38: do {
41: if ((cVar1 != '\0') && (iVar2 = strcmp(local_a8,"GetAccountName"), iVar2 == 0)) {
42: if (iVar7 == param_4) {
43: return iVar8;
51: return -1;)F180131c20F",
    R"F180131c20U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180131c20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180131c20() noexcept {
    return kFunction_0x180131c20;
}

// 0x180131d10 FUN_180131d10
// source: re/dump/decompile/0x180131d10_FUN_180131d10.c
// size: 104 bytes; thunk: false
// body sha256: 648e1f783f71c3a6c6b66bd79eeee0d690eb092789ec3914dd1cff9296392077
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180131d10{
    "0x180131d10",
    "FUN_180131d10",
    R"F180131d10S(undefined FUN_180131d10())F180131d10S",
    R"B180131d10(// 0x180131d10  FUN_180131d10
// size=104 thunk=false
// signature: undefined FUN_180131d10()
// status: ok


longlong FUN_180131d10(void)

{
  HMODULE pHVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = DAT_180426138;
  if (DAT_180426138 == 0) {
    pHVar1 = DAT_1803fea40;
    if (((DAT_1803fea40 == (HMODULE)0x0) &&
        (pHVar1 = GetModuleHandleA("steamclient64.dll"), pHVar1 == (HMODULE)0x0)) ||
       (DAT_1803fea40 = pHVar1, lVar2 = FUN_180131270(), *(char *)(lVar2 + 0x30) == '\0')) {
      return 0;
    }
    puVar3 = (undefined8 *)FUN_180131270();
    lVar2 = (*(code *)*puVar3)("CLIENTENGINE_INTERFACE_VERSION005",0);
    if (lVar2 != 0) {
      DAT_180426138 = lVar2;
    }
  }
  return lVar2;
}


)B180131d10",
    "648e1f783f71c3a6c6b66bd79eeee0d690eb092789ec3914dd1cff9296392077",
    R"F180131d10C(FUN_180131270)F180131d10C",
    R"F180131d10D(DAT_1803fea40
DAT_180426138)F180131d10D",
    R"F180131d10T("steamclient64.dll"
"CLIENTENGINE_INTERFACE_VERSION005")F180131d10T",
    R"F180131d10F(15: if (DAT_180426138 == 0) {
17: if (((DAT_1803fea40 == (HMODULE)0x0) &&
20: return 0;
24: if (lVar2 != 0) {
28: return lVar2;)F180131d10F",
    R"F180131d10U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fea40.
TODO: recover the declaration, type and value for global/data reference DAT_180426138.
TODO: resolve the indirect call in body 23: lVar2 = (*(code *)*puVar3)("CLIENTENGINE_INTERFACE_VERSION005",0);.)F180131d10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180131d10() noexcept {
    return kFunction_0x180131d10;
}

// 0x180131d80 FUN_180131d80
// source: re/dump/decompile/0x180131d80_FUN_180131d80.c
// size: 165 bytes; thunk: false
// body sha256: d4e4af6e47b52cacdf04757b6a1ac8eff15afa6f53f9b871d7bb153649307a10
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180131d80{
    "0x180131d80",
    "FUN_180131d80",
    R"F180131d80S(undefined FUN_180131d80())F180131d80S",
    R"B180131d80(// 0x180131d80  FUN_180131d80
// size=165 thunk=false
// signature: undefined FUN_180131d80()
// status: ok


undefined1 FUN_180131d80(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  lVar2 = FUN_180131880();
  if (lVar2 != 0) {
    lVar3 = FUN_180131880(param_1);
    if (lVar3 != 0) {
      uVar5 = 0;
      do {
        cVar1 = FUN_1801311e0(*(undefined8 *)(lVar3 + uVar5 * 8));
        if (cVar1 == '\0') break;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
      } while ((int)uVar4 < 0x200);
      if (0xf < (uint)uVar5) {
        cVar1 = FUN_1801313e0(*(undefined8 *)(lVar2 + 0x10),"CSteamClient::CreateGlobalUser",0x600);
        if (cVar1 != '\0') {
          cVar1 = FUN_1801313e0(*(undefined8 *)(lVar2 + 0x28),"CreatePipeToLocalUser obsolete",0x200
                               );
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


)B180131d80",
    "d4e4af6e47b52cacdf04757b6a1ac8eff15afa6f53f9b871d7bb153649307a10",
    R"F180131d80C(FUN_1801311e0
FUN_1801313e0
FUN_180131880)F180131d80C",
    R"F180131d80D()F180131d80D",
    R"F180131d80T("CSteamClient::CreateGlobalUser"
"CreatePipeToLocalUser obsolete")F180131d80T",
    R"F180131d80F(17: if (lVar2 != 0) {
19: if (lVar3 != 0) {
21: do {
23: if (cVar1 == '\0') break;
27: if (0xf < (uint)uVar5) {
29: if (cVar1 != '\0') {
32: if (cVar1 != '\0') {
33: return 1;
39: return 0;)F180131d80F",
    R"F180131d80U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180131d80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180131d80() noexcept {
    return kFunction_0x180131d80;
}

// 0x180131e30 FUN_180131e30
// source: re/dump/decompile/0x180131e30_FUN_180131e30.c
// size: 182 bytes; thunk: false
// body sha256: c3cc8cbee9d0175963d9477c6e0d05548ad8f5b359eda0535bf8138c28759915
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180131e30{
    "0x180131e30",
    "FUN_180131e30",
    R"F180131e30S(undefined FUN_180131e30())F180131e30S",
    R"B180131e30(// 0x180131e30  FUN_180131e30
// size=182 thunk=false
// signature: undefined FUN_180131e30()
// status: ok


/* WARNING: Removing unreachable block (ram,0x000180131ec0) */

longlong FUN_180131e30(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar1 = FUN_180131d80();
  if (cVar1 != '\0') {
    lVar3 = (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3);
    lVar4 = FUN_180131880();
    if (lVar4 != 0) {
      if (((lVar3 != 0) && (iVar2 = FUN_1801318c0(), -1 < iVar2)) &&
         (iVar2 = FUN_1801318c0(), -1 < iVar2)) {
        return lVar3;
      }
      return 0;
    }
  }
  return 0;
}


)B180131e30",
    "c3cc8cbee9d0175963d9477c6e0d05548ad8f5b359eda0535bf8138c28759915",
    R"F180131e30C(FUN_180131880
FUN_1801318c0
FUN_180131d80)F180131e30C",
    R"F180131e30D()F180131e30D",
    R"F180131e30T()F180131e30T",
    R"F180131e30F(18: if (cVar1 != '\0') {
21: if (lVar4 != 0) {
22: if (((lVar3 != 0) && (iVar2 = FUN_1801318c0(), -1 < iVar2)) &&
24: return lVar3;
26: return 0;
29: return 0;)F180131e30F",
    R"F180131e30U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 19: lVar3 = (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3);.)F180131e30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180131e30() noexcept {
    return kFunction_0x180131e30;
}

// 0x180131ef0 FUN_180131ef0
// source: re/dump/decompile/0x180131ef0_FUN_180131ef0.c
// size: 98 bytes; thunk: false
// body sha256: 86d465ffb1c7c253f9e6db1a04f68450c6d056757fba76edfa56cb8011ccf2de
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180131ef0{
    "0x180131ef0",
    "FUN_180131ef0",
    R"F180131ef0S(undefined FUN_180131ef0())F180131ef0S",
    R"B180131ef0(// 0x180131ef0  FUN_180131ef0
// size=98 thunk=false
// signature: undefined FUN_180131ef0()
// status: ok


ulonglong FUN_180131ef0(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_180131c20();
  if ((int)uVar1 < 0) {
    uVar1 = FUN_1801318c0(param_1);
    if ((int)uVar1 < 0) {
      return uVar1 & 0xffffffffffffff00;
    }
  }
  uVar1 = (**(code **)(*param_1 + (longlong)(int)uVar1 * 8))(param_1,param_2,0x80);
  return uVar1;
}


)B180131ef0",
    "86d465ffb1c7c253f9e6db1a04f68450c6d056757fba76edfa56cb8011ccf2de",
    R"F180131ef0C(FUN_1801318c0
FUN_180131c20)F180131ef0C",
    R"F180131ef0D()F180131ef0D",
    R"F180131ef0T()F180131ef0T",
    R"F180131ef0F(13: if ((int)uVar1 < 0) {
15: if ((int)uVar1 < 0) {
16: return uVar1 & 0xffffffffffffff00;
20: return uVar1;)F180131ef0F",
    R"F180131ef0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 19: uVar1 = (**(code **)(*param_1 + (longlong)(int)uVar1 * 8))(param_1,param_2,0x80);.)F180131ef0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180131ef0() noexcept {
    return kFunction_0x180131ef0;
}

// 0x180131f60 FUN_180131f60
// source: re/dump/decompile/0x180131f60_FUN_180131f60.c
// size: 216 bytes; thunk: false
// body sha256: 3862fb22c7d5c8b18c3e94e690806e1a4124f2ada775b7383d2cb243a0f4e7eb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180131f60{
    "0x180131f60",
    "FUN_180131f60",
    R"F180131f60S(undefined FUN_180131f60())F180131f60S",
    R"B180131f60(// 0x180131f60  FUN_180131f60
// size=216 thunk=false
// signature: undefined FUN_180131f60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180131f60(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  size_t sVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  char local_98 [120];
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  local_98[0] = '\0';
  local_98[1] = '\0';
  local_98[2] = '\0';
  local_98[3] = '\0';
  local_98[4] = '\0';
  local_98[5] = '\0';
  local_98[6] = '\0';
  local_98[7] = '\0';
  local_98[8] = '\0';
  local_98[9] = '\0';
  local_98[10] = '\0';
  local_98[0xb] = '\0';
  local_98[0xc] = '\0';
  local_98[0xd] = '\0';
  local_98[0xe] = '\0';
  local_98[0xf] = '\0';
  local_98[0x10] = '\0';
  local_98[0x11] = '\0';
  local_98[0x12] = '\0';
  local_98[0x13] = '\0';
  local_98[0x14] = '\0';
  local_98[0x15] = '\0';
  local_98[0x16] = '\0';
  local_98[0x17] = '\0';
  local_98[0x18] = '\0';
  local_98[0x19] = '\0';
  local_98[0x1a] = '\0';
  local_98[0x1b] = '\0';
  local_98[0x1c] = '\0';
  local_98[0x1d] = '\0';
  local_98[0x1e] = '\0';
  local_98[0x1f] = '\0';
  local_98[0x20] = '\0';
  local_98[0x21] = '\0';
  local_98[0x22] = '\0';
  local_98[0x23] = '\0';
  local_98[0x24] = '\0';
  local_98[0x25] = '\0';
  local_98[0x26] = '\0';
  local_98[0x27] = '\0';
  local_98[0x28] = '\0';
  local_98[0x29] = '\0';
  local_98[0x2a] = '\0';
  local_98[0x2b] = '\0';
  local_98[0x2c] = '\0';
  local_98[0x2d] = '\0';
  local_98[0x2e] = '\0';
  local_98[0x2f] = '\0';
  local_98[0x30] = '\0';
  local_98[0x31] = '\0';
  local_98[0x32] = '\0';
  local_98[0x33] = '\0';
  local_98[0x34] = '\0';
  local_98[0x35] = '\0';
  local_98[0x36] = '\0';
  local_98[0x37] = '\0';
  local_98[0x38] = '\0';
  local_98[0x39] = '\0';
  local_98[0x3a] = '\0';
  local_98[0x3b] = '\0';
  local_98[0x3c] = '\0';
  local_98[0x3d] = '\0';
  local_98[0x3e] = '\0';
  local_98[0x3f] = '\0';
  local_98[0x40] = '\0';
  local_98[0x41] = '\0';
  local_98[0x42] = '\0';
  local_98[0x43] = '\0';
  local_98[0x44] = '\0';
  local_98[0x45] = '\0';
  local_98[0x46] = '\0';
  local_98[0x47] = '\0';
  local_98[0x48] = '\0';
  local_98[0x49] = '\0';
  local_98[0x4a] = '\0';
  local_98[0x4b] = '\0';
  local_98[0x4c] = '\0';
  local_98[0x4d] = '\0';
  local_98[0x4e] = '\0';
  local_98[0x4f] = '\0';
  local_98[0x50] = '\0';
  local_98[0x51] = '\0';
  local_98[0x52] = '\0';
  local_98[0x53] = '\0';
  local_98[0x54] = '\0';
  local_98[0x55] = '\0';
  local_98[0x56] = '\0';
  local_98[0x57] = '\0';
  local_98[0x58] = '\0';
  local_98[0x59] = '\0';
  local_98[0x5a] = '\0';
  local_98[0x5b] = '\0';
  local_98[0x5c] = '\0';
  local_98[0x5d] = '\0';
  local_98[0x5e] = '\0';
  local_98[0x5f] = '\0';
  local_98[0x60] = '\0';
  local_98[0x61] = '\0';
  local_98[0x62] = '\0';
  local_98[99] = '\0';
  local_98[100] = '\0';
  local_98[0x65] = '\0';
  local_98[0x66] = '\0';
  local_98[0x67] = '\0';
  local_98[0x68] = '\0';
  local_98[0x69] = '\0';
  local_98[0x6a] = '\0';
  local_98[0x6b] = '\0';
  local_98[0x6c] = '\0';
  local_98[0x6d] = '\0';
  local_98[0x6e] = '\0';
  local_98[0x6f] = '\0';
  local_98[0x70] = '\0';
  local_98[0x71] = '\0';
  local_98[0x72] = '\0';
  local_98[0x73] = '\0';
  local_98[0x74] = '\0';
  local_98[0x75] = '\0';
  local_98[0x76] = '\0';
  local_98[0x77] = '\0';
  uStack_20 = 0;
  local_a0 = param_1;
  cVar1 = FUN_180131ef0(param_2,local_98);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (cVar1 == '\0') {
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    uStack_20 = uStack_20 & 0xffffffffffffff;
    param_1[3] = 0;
    sVar2 = strlen(local_98);
    FUN_18001d080(param_1,local_98,sVar2);
  }
  return param_1;
}


)B180131f60",
    "3862fb22c7d5c8b18c3e94e690806e1a4124f2ada775b7383d2cb243a0f4e7eb",
    R"F180131f60C(FUN_18001d080
FUN_180131ef0)F180131f60C",
    R"F180131f60D(DAT_1803da4c0)F180131f60D",
    R"F180131f60T()F180131f60T",
    R"F180131f60F(149: if (cVar1 == '\0') {
153: else {
159: return param_1;)F180131f60F",
    R"F180131f60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180131f60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180131f60() noexcept {
    return kFunction_0x180131f60;
}

// 0x180132040 FUN_180132040
// source: re/dump/decompile/0x180132040_FUN_180132040.c
// size: 271 bytes; thunk: false
// body sha256: 530733c398bbf11ea23f97a0bbebe2fc95ad316b310ce34de27c0d844e04e835
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180132040{
    "0x180132040",
    "FUN_180132040",
    R"F180132040S(undefined FUN_180132040())F180132040S",
    R"B180132040(// 0x180132040  FUN_180132040
// size=271 thunk=false
// signature: undefined FUN_180132040()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180132040(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_438 [32];
  undefined8 local_418;
  int aiStack_410 [254];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_438;
  iVar3 = FUN_1801318c0(param_1,param_2,"GetAppOwnershipTicketLength");
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(*param_1 + (longlong)iVar3 * 8))(param_1);
  }
  if ((iVar3 - 0x19U < 1000) && (iVar4 = FUN_1801318c0(param_1), -1 < iVar4)) {
    memset(&local_418,0,0x400);
    iVar4 = FUN_1801318c0(param_1);
    (**(code **)(*param_1 + (longlong)iVar4 * 8))(param_1,4000,&local_418,iVar3);
    iVar4 = 0;
    do {
      if (0x18 < iVar4) {
        return 0;
      }
      uVar2 = *(undefined8 *)((longlong)&local_418 + (longlong)iVar4);
      if (((int)((ulonglong)uVar2 >> 0x20) == 0x1100001) &&
         (*(int *)((longlong)aiStack_410 + (longlong)iVar4) == 4000)) {
        return uVar2;
      }
      iVar1 = iVar4 + 0x10;
      iVar4 = iVar4 + 4;
    } while (iVar1 <= iVar3);
  }
  return 0;
}


)B180132040",
    "530733c398bbf11ea23f97a0bbebe2fc95ad316b310ce34de27c0d844e04e835",
    R"F180132040C(FUN_1801318c0)F180132040C",
    R"F180132040D(DAT_1803da4c0)F180132040D",
    R"F180132040T("GetAppOwnershipTicketLength")F180132040T",
    R"F180132040F(23: if (iVar3 < 0) {
26: else {
29: if ((iVar3 - 0x19U < 1000) && (iVar4 = FUN_1801318c0(param_1), -1 < iVar4)) {
34: do {
35: if (0x18 < iVar4) {
36: return 0;
39: if (((int)((ulonglong)uVar2 >> 0x20) == 0x1100001) &&
41: return uVar2;
47: return 0;)F180132040F",
    R"F180132040U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 27: iVar3 = (**(code **)(*param_1 + (longlong)iVar3 * 8))(param_1);.
TODO: resolve the indirect call in body 32: (**(code **)(*param_1 + (longlong)iVar4 * 8))(param_1,4000,&local_418,iVar3);.)F180132040U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180132040() noexcept {
    return kFunction_0x180132040;
}

// 0x180132160 FUN_180132160
// source: re/dump/decompile/0x180132160_FUN_180132160.c
// size: 115 bytes; thunk: false
// body sha256: 0185252e8963c92eee4ea4f7f7d08d2aef4c14e657852a014483c0916f39e855
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180132160{
    "0x180132160",
    "FUN_180132160",
    R"F180132160S(undefined FUN_180132160())F180132160S",
    R"B180132160(// 0x180132160  FUN_180132160
// size=115 thunk=false
// signature: undefined FUN_180132160()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180132160(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  iVar1 = FUN_1801318c0(param_1,param_2,"GetSteamID");
  if (iVar1 < 0) {
    return 0;
  }
  local_18 = 0;
  (**(code **)(*param_1 + (longlong)iVar1 * 8))(param_1,&local_18);
  return local_18;
}


)B180132160",
    "0185252e8963c92eee4ea4f7f7d08d2aef4c14e657852a014483c0916f39e855",
    R"F180132160C(FUN_1801318c0)F180132160C",
    R"F180132160D(DAT_1803da4c0)F180132160D",
    R"F180132160T("GetSteamID")F180132160T",
    R"F180132160F(19: if (iVar1 < 0) {
20: return 0;
24: return local_18;)F180132160F",
    R"F180132160U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 23: (**(code **)(*param_1 + (longlong)iVar1 * 8))(param_1,&local_18);.)F180132160U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180132160() noexcept {
    return kFunction_0x180132160;
}

// 0x1801321e0 FUN_1801321e0
// source: re/dump/decompile/0x1801321e0_FUN_1801321e0.c
// size: 266 bytes; thunk: false
// body sha256: c95c25c7976ec25bcabcdae9ea6e8e642712c9bcdc4946ca3f81cd9e75847c5f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801321e0{
    "0x1801321e0",
    "FUN_1801321e0",
    R"F1801321e0S(undefined FUN_1801321e0())F1801321e0S",
    R"B1801321e0(// 0x1801321e0  FUN_1801321e0
// size=266 thunk=false
// signature: undefined FUN_1801321e0()
// status: ok


INT_PTR FUN_1801321e0(void)

{
  HMODULE pHVar1;
  FARPROC pFVar2;
  INT_PTR IVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  FARPROC pFVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  INT_PTR IVar9;
  undefined **ppuVar10;
  
  pHVar1 = DAT_180423ae0;
  if ((DAT_180423ae0 != (HMODULE)0x0) ||
     (pHVar1 = GetModuleHandleA("steam_api64.dll"), pHVar1 != (HMODULE)0x0)) {
    DAT_180423ae0 = pHVar1;
    pHVar1 = DAT_180423ae0;
    pFVar2 = GetProcAddress(DAT_180423ae0,"SteamAPI_SteamUser_v023");
    if ((pFVar2 != (FARPROC)0x0) && (IVar3 = (*pFVar2)(), IVar3 != 0)) {
      return IVar3;
    }
    pFVar2 = GetProcAddress(pHVar1,"SteamAPI_GetHSteamUser");
    pFVar4 = GetProcAddress(pHVar1,"SteamAPI_GetHSteamPipe");
    pFVar5 = GetProcAddress(pHVar1,"SteamClient");
    pFVar6 = GetProcAddress(pHVar1,"SteamAPI_ISteamClient_GetISteamUser");
    if ((((pFVar2 != (FARPROC)0x0) && (pFVar4 != (FARPROC)0x0)) && (pFVar5 != (FARPROC)0x0)) &&
       ((pFVar6 != (FARPROC)0x0 && (IVar3 = (*pFVar5)(), IVar3 != 0)))) {
      uVar7 = (*pFVar2)();
      uVar8 = (*pFVar4)();
      ppuVar10 = &PTR_s_SteamUser023_1803e9258;
      do {
        IVar9 = (*pFVar6)(IVar3,uVar7 & 0xffffffff,uVar8 & 0xffffffff,*ppuVar10);
        if (IVar9 != 0) {
          return IVar9;
        }
        ppuVar10 = ppuVar10 + 1;
      } while (ppuVar10 != (undefined **)&DAT_1803e9290);
    }
  }
  return 0;
}


)B1801321e0",
    "c95c25c7976ec25bcabcdae9ea6e8e642712c9bcdc4946ca3f81cd9e75847c5f",
    R"F1801321e0C()F1801321e0C",
    R"F1801321e0D(DAT_1803e9290
DAT_180423ae0)F1801321e0D",
    R"F1801321e0T("SteamClient"
"steam_api64.dll"
"SteamAPI_GetHSteamPipe"
"SteamAPI_GetHSteamUser"
"SteamAPI_SteamUser_v023"
"SteamAPI_ISteamClient_GetISteamUser")F1801321e0T",
    R"F1801321e0F(22: if ((DAT_180423ae0 != (HMODULE)0x0) ||
27: if ((pFVar2 != (FARPROC)0x0) && (IVar3 = (*pFVar2)(), IVar3 != 0)) {
28: return IVar3;
34: if ((((pFVar2 != (FARPROC)0x0) && (pFVar4 != (FARPROC)0x0)) && (pFVar5 != (FARPROC)0x0)) &&
39: do {
41: if (IVar9 != 0) {
42: return IVar9;
48: return 0;)F1801321e0F",
    R"F1801321e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9290.
TODO: recover the declaration, type and value for global/data reference DAT_180423ae0.
TODO: resolve the indirect call in body 27: if ((pFVar2 != (FARPROC)0x0) && (IVar3 = (*pFVar2)(), IVar3 != 0)) {.
TODO: resolve the indirect call in body 35: ((pFVar6 != (FARPROC)0x0 && (IVar3 = (*pFVar5)(), IVar3 != 0)))) {.
TODO: resolve the indirect call in body 36: uVar7 = (*pFVar2)();.
TODO: resolve the indirect call in body 37: uVar8 = (*pFVar4)();.
TODO: resolve the indirect call in body 40: IVar9 = (*pFVar6)(IVar3,uVar7 & 0xffffffff,uVar8 & 0xffffffff,*ppuVar10);.)F1801321e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801321e0() noexcept {
    return kFunction_0x1801321e0;
}

// 0x1801322f0 FUN_1801322f0
// source: re/dump/decompile/0x1801322f0_FUN_1801322f0.c
// size: 116 bytes; thunk: false
// body sha256: 7da70b2b63f2ff27b89d206559544dcdc03530a2d75b2775446ba7fa0bda83cd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801322f0{
    "0x1801322f0",
    "FUN_1801322f0",
    R"F1801322f0S(undefined FUN_1801322f0())F1801322f0S",
    R"B1801322f0(// 0x1801322f0  FUN_1801322f0
// size=116 thunk=false
// signature: undefined FUN_1801322f0()
// status: ok


undefined8 FUN_1801322f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if ((param_1 != (longlong *)0x0) && (lVar2 = FUN_180131880(), lVar2 != 0)) {
    uVar5 = 0;
    do {
      cVar1 = FUN_1801311e0(*(undefined8 *)(lVar2 + uVar5 * 8));
      if (cVar1 == '\0') break;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < 0x200);
    if (0xd < (uint)uVar5) {
      uVar3 = (**(code **)(*param_1 + 0x68))(param_1,&DAT_1805c3110,0x800,param_4,0);
      return uVar3;
    }
  }
  return 0;
}


)B1801322f0",
    "7da70b2b63f2ff27b89d206559544dcdc03530a2d75b2775446ba7fa0bda83cd",
    R"F1801322f0C(FUN_1801311e0
FUN_180131880)F1801322f0C",
    R"F1801322f0D(DAT_1805c3110)F1801322f0D",
    R"F1801322f0T()F1801322f0T",
    R"F1801322f0F(16: if ((param_1 != (longlong *)0x0) && (lVar2 = FUN_180131880(), lVar2 != 0)) {
18: do {
20: if (cVar1 == '\0') break;
24: if (0xd < (uint)uVar5) {
26: return uVar3;
29: return 0;)F1801322f0F",
    R"F1801322f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1805c3110.
TODO: resolve the indirect call in body 25: uVar3 = (**(code **)(*param_1 + 0x68))(param_1,&DAT_1805c3110,0x800,param_4,0);.)F1801322f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801322f0() noexcept {
    return kFunction_0x1801322f0;
}

// 0x180132370 FUN_180132370
// source: re/dump/decompile/0x180132370_FUN_180132370.c
// size: 98 bytes; thunk: false
// body sha256: e3bc8dca804d3e35fdb83ff7a59f2e607a75d0f10587279c4dcdd6e516cb82c2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180132370{
    "0x180132370",
    "FUN_180132370",
    R"F180132370S(undefined FUN_180132370())F180132370S",
    R"B180132370(// 0x180132370  FUN_180132370
// size=98 thunk=false
// signature: undefined FUN_180132370()
// status: ok


void FUN_180132370(longlong *param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (((param_1 != (longlong *)0x0) && (param_2 != 0)) && (lVar2 = FUN_180131880(), lVar2 != 0)) {
    uVar4 = 0;
    do {
      cVar1 = FUN_1801311e0(*(undefined8 *)(lVar2 + uVar4 * 8));
      if (cVar1 == '\0') break;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < 0x200);
    if (0x11 < (uint)uVar4) {
      (**(code **)(*param_1 + 0x88))(param_1,param_2);
    }
  }
  return;
}


)B180132370",
    "e3bc8dca804d3e35fdb83ff7a59f2e607a75d0f10587279c4dcdd6e516cb82c2",
    R"F180132370C(FUN_1801311e0
FUN_180131880)F180132370C",
    R"F180132370D()F180132370D",
    R"F180132370T()F180132370T",
    R"F180132370F(15: if (((param_1 != (longlong *)0x0) && (param_2 != 0)) && (lVar2 = FUN_180131880(), lVar2 != 0)) {
17: do {
19: if (cVar1 == '\0') break;
23: if (0x11 < (uint)uVar4) {
27: return;)F180132370F",
    R"F180132370U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 24: (**(code **)(*param_1 + 0x88))(param_1,param_2);.)F180132370U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180132370() noexcept {
    return kFunction_0x180132370;
}

// 0x1801323e0 FUN_1801323e0
// source: re/dump/decompile/0x1801323e0_FUN_1801323e0.c
// size: 139 bytes; thunk: false
// body sha256: ef0bf0db0a681da2880f6a9f8314601ea8cbb779aace7f133d593fa71eba9b41
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801323e0{
    "0x1801323e0",
    "FUN_1801323e0",
    R"F1801323e0S(undefined FUN_1801323e0())F1801323e0S",
    R"B1801323e0(// 0x1801323e0  FUN_1801323e0
// size=139 thunk=false
// signature: undefined FUN_1801323e0()
// status: ok


/* WARNING: Removing unreachable block (ram,0x00018013244f) */

longlong * FUN_1801323e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 == 0) || (lVar2 = FUN_180131880(), lVar2 == 0)) {
    return (longlong *)0x0;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (((lVar2 != 0) &&
      (lVar3 = lVar2, iVar1 = FUN_1801318c0(lVar2,param_2,"LogOn",param_4,lVar2), -1 < iVar1)) &&
     (iVar1 = FUN_1801318c0(lVar2,param_2,"SetLoginInformation",param_4,lVar3), -1 < iVar1)) {
    return (longlong *)(param_1 + 8);
  }
  return (longlong *)0x0;
}


)B1801323e0",
    "ef0bf0db0a681da2880f6a9f8314601ea8cbb779aace7f133d593fa71eba9b41",
    R"F1801323e0C(FUN_180131880
FUN_1801318c0)F1801323e0C",
    R"F1801323e0D()F1801323e0D",
    R"F1801323e0T("LogOn"
"SetLoginInformation")F1801323e0T",
    R"F1801323e0F(16: if ((param_1 == 0) || (lVar2 = FUN_180131880(), lVar2 == 0)) {
17: return (longlong *)0x0;
20: if (((lVar2 != 0) &&
23: return (longlong *)(param_1 + 8);
25: return (longlong *)0x0;)F1801323e0F",
    R"F1801323e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1801323e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801323e0() noexcept {
    return kFunction_0x1801323e0;
}

// 0x180132470 FUN_180132470
// source: re/dump/decompile/0x180132470_FUN_180132470.c
// size: 225 bytes; thunk: false
// body sha256: 5be2b3032d25057687dda544e5afe0d6caff83a675b5fbac34e437111f9bd328
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180132470{
    "0x180132470",
    "FUN_180132470",
    R"F180132470S(undefined FUN_180132470())F180132470S",
    R"B180132470(// 0x180132470  FUN_180132470
// size=225 thunk=false
// signature: undefined FUN_180132470()
// status: ok


char * FUN_180132470(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return "OK";
  case 2:
    return "generic failure";
  case 3:
    return "no connection to Steam";
  default:
    return "unknown result";
  case 5:
    return "invalid password";
  case 6:
    return "logged in elsewhere";
  case 8:
    return "invalid parameter";
  case 10:
    return "Steam is busy";
  case 0x10:
    return "timed out";
  case 0x11:
    return "account banned";
  case 0x12:
    return "account not found";
  case 0x14:
    return "Steam service unavailable";
  case 0x15:
    return "not logged on";
  case 0x19:
    return "rate limited - wait a few minutes";
  case 0x3f:
    return "Steam Guard e-mail code required";
  case 0x41:
    return "wrong Steam Guard e-mail code";
  case 0x42:
    return "Steam Guard code required (no mail on file)";
  case 0x47:
    return "IP banned";
  case 0x4a:
    return "account locked down";
  case 0x4b:
    return "verified e-mail required";
  case 0x55:
    return "mobile authenticator code required";
  case 0x58:
    return "wrong mobile authenticator code";
  case 0x59:
    return "wrong activation code";
  }
}


)B180132470",
    "5be2b3032d25057687dda544e5afe0d6caff83a675b5fbac34e437111f9bd328",
    R"F180132470C()F180132470C",
    R"F180132470D()F180132470D",
    R"F180132470T("OK"
"IP banned"
"timed out"
"Steam is busy"
"not logged on"
"account banned"
"unknown result"
"generic failure"
"invalid password"
"account not found"
"invalid parameter"
"account locked down"
"logged in elsewhere"
"wrong activation code"
"no connection to Steam"
"verified e-mail required"
"Steam service unavailable"
"wrong Steam Guard e-mail code"
"wrong mobile authenticator code"
"Steam Guard e-mail code required"
"rate limited - wait a few minutes"
"mobile authenticator code required"
"Steam Guard code required (no mail on file)")F180132470T",
    R"F180132470F(10: switch(param_1) {
11: case 1:
12: return "OK";
13: case 2:
14: return "generic failure";
15: case 3:
16: return "no connection to Steam";
18: return "unknown result";
19: case 5:
20: return "invalid password";
21: case 6:
22: return "logged in elsewhere";
23: case 8:
24: return "invalid parameter";
25: case 10:
26: return "Steam is busy";
27: case 0x10:
28: return "timed out";
29: case 0x11:
30: return "account banned";
31: case 0x12:
32: return "account not found";
33: case 0x14:
34: return "Steam service unavailable";
35: case 0x15:
36: return "not logged on";
37: case 0x19:
38: return "rate limited - wait a few minutes";
39: case 0x3f:
40: return "Steam Guard e-mail code required";
41: case 0x41:
42: return "wrong Steam Guard e-mail code";
43: case 0x42:
44: return "Steam Guard code required (no mail on file)";
45: case 0x47:
46: return "IP banned";
47: case 0x4a:
48: return "account locked down";
49: case 0x4b:
50: return "verified e-mail required";
51: case 0x55:
52: return "mobile authenticator code required";
53: case 0x58:
54: return "wrong mobile authenticator code";
55: case 0x59:
56: return "wrong activation code";)F180132470F",
    R"F180132470U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180132470U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180132470() noexcept {
    return kFunction_0x180132470;
}

// 0x180132610 FUN_180132610
// source: re/dump/decompile/0x180132610_FUN_180132610.c
// size: 277 bytes; thunk: false
// body sha256: 64d885bbd24e2691b8aa491261716f0abbf75c89faa6a04345b133b01737939e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180132610{
    "0x180132610",
    "FUN_180132610",
    R"F180132610S(undefined FUN_180132610())F180132610S",
    R"B180132610(// 0x180132610  FUN_180132610
// size=277 thunk=false
// signature: undefined FUN_180132610()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_180132610(ulonglong *param_1,BYTE *param_2,DWORD param_3,BYTE *param_4)

{
  DWORD *pDVar1;
  BOOL BVar2;
  DATA_BLOB *pOptionalEntropy;
  undefined1 auStackY_c8 [32];
  DATA_BLOB local_78;
  DATA_BLOB local_68;
  DATA_BLOB local_58;
  ulonglong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStackY_c8;
  pDVar1 = (DWORD *)(param_4 + 0x10);
  local_68.cbData = *pDVar1;
  if (0xf < *(ulonglong *)(param_4 + 0x18)) {
    param_4 = *(BYTE **)param_4;
  }
  local_78.cbData = 0;
  local_78.pbData = (BYTE *)0x0;
  pOptionalEntropy = &local_68;
  if (*(longlong *)pDVar1 == 0) {
    pOptionalEntropy = (DATA_BLOB *)0x0;
  }
  local_68.pbData = param_4;
  local_58.cbData = param_3;
  local_58.pbData = param_2;
  BVar2 = CryptUnprotectData(&local_58,(LPWSTR *)0x0,pOptionalEntropy,(PVOID)0x0,
                             (CRYPTPROTECT_PROMPTSTRUCT *)0x0,0,&local_78);
  if (BVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    uStack_30 = 0;
    FUN_18001d080(&local_48,local_78.pbData,local_78.cbData);
    if (local_78.pbData != (BYTE *)0x0) {
      LocalFree(local_78.pbData);
    }
    *param_1 = local_48;
    param_1[1] = uStack_40;
    *(undefined4 *)(param_1 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)param_1 + 0x14) = local_38._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_30._4_4_;
    local_38 = _DAT_1803814b0;
    uStack_30 = _UNK_1803814b8;
    local_48 = local_48 & 0xffffffffffffff00;
    FUN_18020e450(&local_48);
  }
  return param_1;
}


)B180132610",
    "64d885bbd24e2691b8aa491261716f0abbf75c89faa6a04345b133b01737939e",
    R"F180132610C(FUN_18001d080
FUN_18020e450)F180132610C",
    R"F180132610D(DAT_1803da4c0)F180132610D",
    R"F180132610T()F180132610T",
    R"F180132610F(29: if (0xf < *(ulonglong *)(param_4 + 0x18)) {
35: if (*(longlong *)pDVar1 == 0) {
43: if (BVar2 == 0) {
50: else {
56: if (local_78.pbData != (BYTE *)0x0) {
70: return param_1;)F180132610F",
    R"F180132610U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180132610U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180132610() noexcept {
    return kFunction_0x180132610;
}

// 0x180132730 FUN_180132730
// source: re/dump/decompile/0x180132730_FUN_180132730.c
// size: 247 bytes; thunk: false
// body sha256: 37ed8c73e63fabb393bca8e2cedfe40fa7b0955f297f4a9c20002eab39c38468
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180132730{
    "0x180132730",
    "FUN_180132730",
    R"F180132730S(undefined FUN_180132730())F180132730S",
    R"B180132730(// 0x180132730  FUN_180132730
// size=247 thunk=false
// signature: undefined FUN_180132730()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180132730(undefined8 *param_1)

{
  LSTATUS LVar1;
  size_t sVar2;
  undefined1 auStackY_188 [32];
  DWORD local_138 [4];
  char local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStackY_188;
  memset(local_128,0,0x104);
  local_138[0] = 0x104;
  LVar1 = RegGetValueA((HKEY)0xffffffff80000001,"Software\\Valve\\Steam","SteamPath",2,(LPDWORD)0x0,
                       local_128,local_138);
  if ((LVar1 == 0) && (local_128[0] != '\0')) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    sVar2 = strlen(local_128);
    FUN_18001d080(param_1,local_128,sVar2);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  return param_1;
}


)B180132730",
    "37ed8c73e63fabb393bca8e2cedfe40fa7b0955f297f4a9c20002eab39c38468",
    R"F180132730C(FUN_18001d080)F180132730C",
    R"F180132730D(DAT_1803da4c0)F180132730D",
    R"F180132730T("SteamPath"
"Software\\\\Valve\\\\Steam")F180132730T",
    R"F180132730F(24: if ((LVar1 == 0) && (local_128[0] != '\0')) {
32: else {
39: return param_1;)F180132730F",
    R"F180132730U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180132730U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180132730() noexcept {
    return kFunction_0x180132730;
}

// 0x180132830 FUN_180132830
// source: re/dump/decompile/0x180132830_FUN_180132830.c
// size: 851 bytes; thunk: false
// body sha256: 0587d0f11625200cb2b3347b439c23a54b7260204840bf70353183da3990b0b7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180132830{
    "0x180132830",
    "FUN_180132830",
    R"F180132830S(undefined FUN_180132830())F180132830S",
    R"B180132830(// 0x180132830  FUN_180132830
// size=851 thunk=false
// signature: undefined FUN_180132830()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180132830(undefined8 *param_1)

{
  DWORD DVar1;
  size_t sVar2;
  undefined4 *puVar3;
  undefined1 auStack_248 [32];
  longlong local_228;
  char *local_220;
  undefined8 local_218;
  undefined4 local_208;
  undefined1 local_200 [32];
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 *local_160;
  undefined1 local_158 [16];
  longlong local_148;
  CHAR local_138 [272];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_248;
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_208 = 1;
  local_160 = param_1;
  FUN_180132730(local_158);
  if (local_148 != 0) {
    if (0x7fffffffffffffffU - local_148 < 0x11) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    local_218 = 0x11;
    local_220 = "\\config\\local.vdf";
    local_228 = local_148;
    FUN_18020e930(local_200);
    local_208 = 3;
    FUN_180214300(param_1,local_200);
    local_208 = 1;
    FUN_18020e450(local_200);
    if (0x7fffffffffffffffU - local_148 < 10) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    local_218 = 10;
    local_220 = "\\local.vdf";
    local_228 = local_148;
    FUN_18020e930(local_200);
    local_208 = 5;
    FUN_180214300(param_1,local_200);
    local_208 = 1;
    FUN_18020e450(local_200);
    if (0x7fffffffffffffffU - local_148 < 0x12) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    local_218 = 0x12;
    local_220 = "\\config\\config.vdf";
    local_228 = local_148;
    FUN_18020e930(local_200);
    local_208 = 9;
    FUN_180214300(param_1);
    local_208 = 1;
    FUN_18020e450(local_200);
  }
  memset(local_138,0,0x104);
  DVar1 = GetEnvironmentVariableA("LOCALAPPDATA",local_138,0x104);
  if (DVar1 != 0) {
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_1b0 = 0;
    uStack_1a8 = 0;
    sVar2 = strlen(local_138);
    FUN_18001d080(&local_1c0,local_138,sVar2);
    puVar3 = (undefined4 *)FUN_18021aef0(&local_1c0,"\\Steam\\local.vdf",0x10);
    local_1e0 = *puVar3;
    uStack_1dc = puVar3[1];
    uStack_1d8 = puVar3[2];
    uStack_1d4 = puVar3[3];
    local_1d0 = *(undefined8 *)(puVar3 + 4);
    uStack_1c8 = *(undefined8 *)(puVar3 + 6);
    *(undefined8 *)(puVar3 + 6) = 0xf;
    *(undefined1 *)puVar3 = 0;
    *(undefined8 *)(puVar3 + 4) = 0;
    local_208 = 0x11;
    FUN_180214300(param_1,&local_1e0);
    local_208 = 1;
    FUN_18020e450(&local_1e0);
    FUN_18020e450(&local_1c0);
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    uStack_168 = 0;
    sVar2 = strlen(local_138);
    FUN_18001d080(&local_180,local_138,sVar2);
    puVar3 = (undefined4 *)FUN_18021aef0(&local_180,"\\Steam\\config\\local.vdf",0x17);
    local_1a0 = *puVar3;
    uStack_19c = puVar3[1];
    uStack_198 = puVar3[2];
    uStack_194 = puVar3[3];
    local_190 = *(undefined8 *)(puVar3 + 4);
    uStack_188 = *(undefined8 *)(puVar3 + 6);
    *(undefined1 *)puVar3 = 0;
    *(undefined8 *)(puVar3 + 4) = 0;
    *(undefined8 *)(puVar3 + 6) = 0xf;
    local_208 = 0x21;
    FUN_180214300(param_1,&local_1a0);
    local_208 = 1;
    FUN_18020e450(&local_1a0);
    FUN_18020e450(&local_180);
  }
  FUN_18020e450(local_158);
  return param_1;
}


)B180132830",
    "0587d0f11625200cb2b3347b439c23a54b7260204840bf70353183da3990b0b7",
    R"F180132830C(FUN_1800130a0
FUN_18001d080
FUN_180132730
FUN_18020e450
FUN_18020e930
FUN_180214300
FUN_18021aef0)F180132830C",
    R"F180132830D(DAT_1803da4c0)F180132830D",
    R"F180132830T("\\\\local.vdf"
"LOCALAPPDATA"
"\\\\Steam\\\\local.vdf"
"\\\\config\\\\local.vdf"
"\\\\config\\\\config.vdf"
"\\\\Steam\\\\config\\\\local.vdf")F180132830T",
    R"F180132830F(56: if (local_148 != 0) {
57: if (0x7fffffffffffffffU - local_148 < 0x11) {
69: if (0x7fffffffffffffffU - local_148 < 10) {
81: if (0x7fffffffffffffffU - local_148 < 0x12) {
96: if (DVar1 != 0) {
141: return param_1;)F180132830F",
    R"F180132830U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180132830U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180132830() noexcept {
    return kFunction_0x180132830;
}

// 0x180132b90 FUN_180132b90
// source: re/dump/decompile/0x180132b90_FUN_180132b90.c
// size: 499 bytes; thunk: false
// body sha256: c829e660892299c09fb7f04cdd56ce3a41d3c4cd93f9b0c4ec31cf727482f8a9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180132b90{
    "0x180132b90",
    "FUN_180132b90",
    R"F180132b90S(undefined FUN_180132b90())F180132b90S",
    R"B180132b90(// 0x180132b90  FUN_180132b90
// size=499 thunk=false
// signature: undefined FUN_180132b90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180132b90(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_198 [48];
  undefined4 local_168;
  longlong local_158;
  undefined1 local_150;
  undefined1 local_14f;
  undefined4 local_14e;
  undefined2 local_14a;
  undefined8 local_148;
  undefined2 local_140;
  undefined4 local_13e;
  undefined2 local_13a;
  basic_ios<char,std::char_traits<char>_> *local_138;
  undefined8 local_130;
  longlong local_128 [2];
  int local_118 [2];
  basic_istream<char,std::char_traits<char>_> local_110 [48];
  longlong alStack_e0 [13];
  basic_ios<char,std::char_traits<char>_> local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_198;
  local_168 = 0;
  local_130 = param_1;
  memset(local_128,0,0x110);
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_18021e730(local_128,param_2);
  *(undefined ***)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4)) =
       vftable_std_std_D_DU__char_traits___basic_ifstream;
  *(int *)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4) + -4) =
       *(int *)(local_128[0] + 4) + -0xb0;
  if (*(int *)((longlong)local_118 + (longlong)*(int *)(local_128[0] + 4)) == 0) {
    local_158 = *(longlong *)((longlong)alStack_e0 + (longlong)*(int *)(local_128[0] + 4));
    local_148 = 0;
    local_140 = 1;
    local_13e = local_14e;
    local_13a = local_14a;
    local_150 = local_158 == 0;
    local_14f = 0;
    FUN_180202170(param_1,&local_158,&local_148);
    local_168 = 1;
    local_138 = local_78;
    *(undefined ***)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4)) =
         vftable_std_std_D_DU__char_traits___basic_ifstream;
    *(int *)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4) + -4) =
         *(int *)(local_128[0] + 4) + -0xb0;
    FUN_18020f850(local_118);
    *(code **)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4)) = _vftable__exref;
    *(int *)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4) + -4) =
         *(int *)(local_128[0] + 4) + -0x18;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    local_168 = 1;
    local_138 = local_78;
    *(undefined ***)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4)) =
         vftable_std_std_D_DU__char_traits___basic_ifstream;
    *(int *)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4) + -4) =
         *(int *)(local_128[0] + 4) + -0xb0;
    FUN_18020f850(local_118);
    std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
              (local_110);
  }
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_78);
  return param_1;
}


)B180132b90",
    "c829e660892299c09fb7f04cdd56ce3a41d3c4cd93f9b0c4ec31cf727482f8a9",
    R"F180132b90C(FUN_180202170
FUN_18020f850
FUN_18021e730)F180132b90C",
    R"F180132b90D(DAT_1803da4c0)F180132b90D",
    R"F180132b90T()F180132b90T",
    R"F180132b90F(36: if (0xf < (ulonglong)param_2[3]) {
44: if (*(int *)((longlong)local_118 + (longlong)*(int *)(local_128[0] + 4)) == 0) {
64: else {
81: return param_1;)F180132b90F",
    R"F180132b90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 60: *(code **)((longlong)local_128 + (longlong)*(int *)(local_128[0] + 4)) = _vftable__exref;.)F180132b90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180132b90() noexcept {
    return kFunction_0x180132b90;
}

// 0x180132d90 FUN_180132d90
// source: re/dump/decompile/0x180132d90_FUN_180132d90.c
// size: 1120 bytes; thunk: false
// body sha256: 55f1f51630667639bd1488da40522a84d16878431bf1ec39197b0871330fcb65
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180132d90{
    "0x180132d90",
    "FUN_180132d90",
    R"F180132d90S(undefined FUN_180132d90())F180132d90S",
    R"B180132d90(// 0x180132d90  FUN_180132d90
// size=1120 thunk=false
// signature: undefined FUN_180132d90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180132d90(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  byte *****pppppbVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte *****pppppbVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [24];
  undefined4 local_98;
  ulonglong *local_90;
  void **local_88;
  undefined8 *local_80;
  void *local_78;
  void *pvStack_70;
  longlong local_68;
  byte ****local_60 [2];
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  uVar11 = 0;
  local_98 = 0;
  uVar3 = param_2[2];
  puVar10 = auStack_b8;
  uVar14 = uVar11;
  local_90 = param_3;
  local_80 = param_1;
  if (uVar3 != 0) {
    do {
      puVar5 = param_2;
      if (0xf < (ulonglong)param_2[3]) {
        puVar5 = (undefined8 *)*param_2;
      }
      cVar1 = *(char *)((longlong)puVar5 + uVar14);
      iVar6 = (int)cVar1;
      if ((byte)(cVar1 - 0x30U) < 10) {
        iVar6 = iVar6 + -0x30;
LAB_180132e1b:
        if (iVar6 < 0) goto LAB_180133123;
        uVar15 = uVar14;
        if (uVar14 < uVar3) {
          do {
            puVar5 = param_2;
            if (0xf < (ulonglong)param_2[3]) {
              puVar5 = (undefined8 *)*param_2;
            }
            cVar1 = *(char *)((longlong)puVar5 + uVar15);
            iVar6 = (int)cVar1;
            if ((byte)(cVar1 - 0x30U) < 10) {
              iVar6 = iVar6 + -0x30;
            }
            else if ((byte)(cVar1 + 0x9fU) < 6) {
              iVar6 = iVar6 + -0x57;
            }
            else {
              if (5 < (byte)(cVar1 + 0xbfU)) break;
              iVar6 = iVar6 + -0x37;
            }
            if ((iVar6 < 0) || (uVar15 = uVar15 + 1, uVar3 <= uVar15)) break;
          } while( true );
        }
        uVar11 = uVar15 - uVar14;
        if ((0x3f < uVar11) && ((uVar11 & 1) == 0)) {
          uVar11 = uVar11 >> 1;
          local_78 = (void *)0x0;
          pvStack_70 = (void *)0x0;
          local_68 = 0;
          if (uVar11 != 0) {
            FUN_180238590(&local_78);
            local_88 = &local_78;
            pvVar7 = (void *)((longlong)local_78 + uVar11);
            memset(local_78,0,uVar11);
            local_88 = (void **)0x0;
            pvStack_70 = pvVar7;
          }
          uVar11 = 0;
          uVar12 = uVar11;
          if (pvStack_70 != local_78) {
            do {
              puVar5 = param_2;
              if (0xf < (ulonglong)param_2[3]) {
                puVar5 = (undefined8 *)*param_2;
              }
              cVar1 = *(char *)((longlong)puVar5 + uVar14 + uVar12 * 2);
              iVar6 = (int)cVar1;
              if ((byte)(cVar1 - 0x30U) < 10) {
                iVar6 = iVar6 + -0x30;
              }
              else if ((byte)(cVar1 + 0x9fU) < 6) {
                iVar6 = iVar6 + -0x57;
              }
              else if ((byte)(cVar1 + 0xbfU) < 6) {
                iVar6 = iVar6 + -0x37;
              }
              else {
                iVar6 = -1;
              }
              puVar5 = param_2;
              if (0xf < (ulonglong)param_2[3]) {
                puVar5 = (undefined8 *)*param_2;
              }
              cVar1 = *(char *)((longlong)puVar5 + uVar12 * 2 + uVar14 + 1);
              iVar8 = (int)cVar1;
              if ((byte)(cVar1 - 0x30U) < 10) {
                iVar8 = iVar8 + -0x30;
              }
              else if ((byte)(cVar1 + 0x9fU) < 6) {
                iVar8 = iVar8 + -0x57;
              }
              else {
                iVar8 = iVar8 + -0x37;
                if (5 < (byte)(cVar1 + 0xbfU)) {
                  iVar8 = -1;
                }
              }
              if ((iVar6 < 0) || (iVar8 < 0)) {
                if (local_78 == (void *)0x0) goto LAB_18013312a;
                pvVar7 = local_78;
                if ((0xfff < (ulonglong)(local_68 - (longlong)local_78)) &&
                   (pvVar7 = *(void **)((longlong)local_78 + -8),
                   0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pvVar7))))
                goto LAB_18013319f;
                free(pvVar7);
                goto LAB_18013312a;
              }
              *(byte *)((longlong)local_78 + uVar12) = (char)iVar6 << 4 | (byte)iVar8;
              uVar12 = uVar12 + 1;
            } while (uVar12 < (ulonglong)((longlong)pvStack_70 - (longlong)local_78));
          }
          uVar14 = local_90[1];
          for (uVar11 = *local_90; uVar11 != uVar14; uVar11 = uVar11 + 0x20) {
            FUN_180132610(local_60,local_78,(longlong)pvStack_70 - (longlong)local_78,uVar11);
            if (0x27 < local_50) {
              pppppbVar9 = local_60;
              if (0xf < local_48) {
                pppppbVar9 = (byte *****)local_60[0];
              }
              if (*(byte *)pppppbVar9 == 0x65) {
                pppppbVar9 = local_60;
                if (0xf < local_48) {
                  pppppbVar9 = (byte *****)local_60[0];
                }
                if (*(byte *)((longlong)pppppbVar9 + 1) == 0x79) {
                  iVar6 = 0;
                  pppppbVar9 = local_60;
                  if (0xf < local_48) {
                    pppppbVar9 = (byte *****)local_60[0];
                  }
                  pppppbVar13 = (byte *****)((longlong)pppppbVar9 + local_50);
                  for (; pppppbVar9 != pppppbVar13;
                      pppppbVar9 = (byte *****)((longlong)pppppbVar9 + 1)) {
                    bVar2 = *(byte *)pppppbVar9;
                    if (bVar2 == 0x2e) {
                      iVar6 = iVar6 + 1;
                    }
                    else if (((0x32 < (byte)(bVar2 - 0x2d)) ||
                             ((0x43ffffff01ff9U >> ((ulonglong)(bVar2 - 0x2d) & 0x3f) & 1) == 0)) &&
                            (0x19 < (byte)(bVar2 + 0x9f))) goto LAB_1801330b8;
                  }
                  if (1 < iVar6) {
                    FUN_18016d4c0(param_1,local_60);
                    local_98 = 1;
                    FUN_18020e450(local_60);
                    puVar10 = auStack_b8;
                    if (local_78 == (void *)0x0) goto LAB_1801331c6;
                    pvVar7 = local_78;
                    if ((0xfff < (ulonglong)(local_68 - (longlong)local_78)) &&
                       (pvVar7 = *(void **)((longlong)local_78 + -8),
                       0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pvVar7))))
                    goto LAB_18013319f;
                    free(pvVar7);
                    puVar10 = auStack_b8;
                    goto LAB_1801331c6;
                  }
                }
              }
            }
LAB_1801330b8:
            FUN_18020e450(local_60);
          }
          if (local_78 != (void *)0x0) {
            pvVar7 = local_78;
            if ((0xfff < (ulonglong)(local_68 - (longlong)local_78)) &&
               (pvVar7 = *(void **)((longlong)local_78 + -8),
               0x1f < (ulonglong)((longlong)local_78 + (-8 - (longlong)pvVar7)))) {
LAB_18013319f:
              pcVar4 = (code *)swi(0x29);
              (*pcVar4)(5);
              puVar10 = auStack_b0;
              break;
            }
            free(pvVar7);
          }
        }
      }
      else {
        if ((byte)(cVar1 + 0x9fU) < 6) {
          iVar6 = iVar6 + -0x57;
          goto LAB_180132e1b;
        }
        if ((byte)(cVar1 + 0xbfU) < 6) {
          iVar6 = iVar6 + -0x37;
          goto LAB_180132e1b;
        }
LAB_180133123:
        uVar15 = uVar14 + 1;
      }
LAB_18013312a:
      uVar11 = 0;
      puVar10 = auStack_b8;
      uVar14 = uVar15;
    } while (uVar15 < uVar3);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar11;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
LAB_1801331c6:
  *(undefined8 *)(puVar10 + -8) = 0x1801331d5;
  return param_1;
}


)B180132d90",
    "55f1f51630667639bd1488da40522a84d16878431bf1ec39197b0871330fcb65",
    R"F180132d90C(FUN_180132610
FUN_18016d4c0
FUN_18020e450
FUN_180238590)F180132d90C",
    R"F180132d90D(LAB_180132e1b
LAB_1801330b8
LAB_180133123
LAB_18013312a
LAB_18013319f
LAB_1801331c6
DAT_1803da4c0)F180132d90D",
    R"F180132d90T()F180132d90T",
    R"F180132d90F(49: if (uVar3 != 0) {
50: do {
52: if (0xf < (ulonglong)param_2[3]) {
57: if ((byte)(cVar1 - 0x30U) < 10) {
59: LAB_180132e1b:
60: if (iVar6 < 0) goto LAB_180133123;
62: if (uVar14 < uVar3) {
63: do {
65: if (0xf < (ulonglong)param_2[3]) {
70: if ((byte)(cVar1 - 0x30U) < 10) {
73: else if ((byte)(cVar1 + 0x9fU) < 6) {
76: else {
77: if (5 < (byte)(cVar1 + 0xbfU)) break;
80: if ((iVar6 < 0) || (uVar15 = uVar15 + 1, uVar3 <= uVar15)) break;
84: if ((0x3f < uVar11) && ((uVar11 & 1) == 0)) {
89: if (uVar11 != 0) {
99: if (pvStack_70 != local_78) {
100: do {
102: if (0xf < (ulonglong)param_2[3]) {
107: if ((byte)(cVar1 - 0x30U) < 10) {
110: else if ((byte)(cVar1 + 0x9fU) < 6) {
113: else if ((byte)(cVar1 + 0xbfU) < 6) {
116: else {
120: if (0xf < (ulonglong)param_2[3]) {
125: if ((byte)(cVar1 - 0x30U) < 10) {
128: else if ((byte)(cVar1 + 0x9fU) < 6) {
131: else {
133: if (5 < (byte)(cVar1 + 0xbfU)) {
137: if ((iVar6 < 0) || (iVar8 < 0)) {
138: if (local_78 == (void *)0x0) goto LAB_18013312a;
140: if ((0xfff < (ulonglong)(local_68 - (longlong)local_78)) &&
143: goto LAB_18013319f;
145: goto LAB_18013312a;
152: for (uVar11 = *local_90; uVar11 != uVar14; uVar11 = uVar11 + 0x20) {
154: if (0x27 < local_50) {
156: if (0xf < local_48) {
159: if (*(byte *)pppppbVar9 == 0x65) {
161: if (0xf < local_48) {
164: if (*(byte *)((longlong)pppppbVar9 + 1) == 0x79) {
167: if (0xf < local_48) {
171: for (; pppppbVar9 != pppppbVar13;
174: if (bVar2 == 0x2e) {
177: else if (((0x32 < (byte)(bVar2 - 0x2d)) ||
181: if (1 < iVar6) {
186: if (local_78 == (void *)0x0) goto LAB_1801331c6;
188: if ((0xfff < (ulonglong)(local_68 - (longlong)local_78)) &&
191: goto LAB_18013319f;
194: goto LAB_1801331c6;
199: LAB_1801330b8:
202: if (local_78 != (void *)0x0) {
204: if ((0xfff < (ulonglong)(local_68 - (longlong)local_78)) &&
207: LAB_18013319f:
211: break;
217: else {
218: if ((byte)(cVar1 + 0x9fU) < 6) {
220: goto LAB_180132e1b;
222: if ((byte)(cVar1 + 0xbfU) < 6) {
224: goto LAB_180132e1b;
226: LAB_180133123:
229: LAB_18013312a:
240: LAB_1801331c6:
242: return param_1;)F180132d90F",
    R"F180132d90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180132e1b.
TODO: recover the declaration, type and value for global/data reference LAB_1801330b8.
TODO: recover the declaration, type and value for global/data reference LAB_180133123.
TODO: recover the declaration, type and value for global/data reference LAB_18013312a.
TODO: recover the declaration, type and value for global/data reference LAB_18013319f.
TODO: recover the declaration, type and value for global/data reference LAB_1801331c6.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 208: pcVar4 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 209: (*pcVar4)(5);.)F180132d90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180132d90() noexcept {
    return kFunction_0x180132d90;
}

// 0x180133200 FUN_180133200
// source: re/dump/decompile/0x180133200_FUN_180133200.c
// size: 1077 bytes; thunk: false
// body sha256: aab7bc478dbc1e2f663d55836acec4450362a5114319fbeecaa676ad6843fc9c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180133200{
    "0x180133200",
    "FUN_180133200",
    R"F180133200S(undefined FUN_180133200())F180133200S",
    R"B180133200(// 0x180133200  FUN_180133200
// size=1077 thunk=false
// signature: undefined FUN_180133200()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

longlong FUN_180133200(undefined8 *param_1)

{
  longlong lVar1;
  char *pcVar2;
  BOOL BVar3;
  longlong lVar4;
  longlong lVar5;
  char *******pppppppcVar6;
  ulonglong uVar7;
  BYTE *******pppppppBVar8;
  void *_Dst;
  longlong lVar9;
  ulonglong _Size;
  char *******pppppppcVar10;
  undefined8 *puVar11;
  undefined1 auStackY_b8 [32];
  DWORD local_74;
  BYTE *******local_70 [2];
  ulonglong local_60;
  ulonglong local_58;
  char *******local_50 [2];
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStackY_b8;
  lVar9 = 0;
  puVar11 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar11 = (undefined8 *)*param_1;
  }
  if (((param_1[2] != 0) &&
      (lVar1 = (longlong)puVar11 + param_1[2], lVar4 = thunk_FUN_1802d5c20(puVar11,lVar1,0x2e),
      lVar4 != lVar1)) && (lVar4 = lVar4 - (longlong)puVar11, lVar4 != -1)) {
    uVar7 = lVar4 + 1;
    puVar11 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar11 = (undefined8 *)*param_1;
    }
    if (((uVar7 < (ulonglong)param_1[2]) &&
        (lVar1 = (longlong)puVar11 + param_1[2],
        lVar5 = thunk_FUN_1802d5c20(uVar7 + (longlong)puVar11,lVar1,0x2e), lVar5 != lVar1)) &&
       (lVar5 - (longlong)puVar11 != -1)) {
      FUN_18020e670(param_1,local_50,uVar7,((lVar5 - (longlong)puVar11) - lVar4) + -1);
      if ((local_40 != 0) && (local_40 < 0x1001)) {
        pppppppcVar6 = local_50[0];
        if (local_38 < 0x10) {
          pppppppcVar6 = (char *******)local_50;
        }
        pppppppcVar10 = (char *******)((longlong)pppppppcVar6 + local_40);
        for (; pppppppcVar6 != pppppppcVar10;
            pppppppcVar6 = (char *******)((longlong)pppppppcVar6 + 1)) {
          if (*(char *)pppppppcVar6 == '-') {
            *(char *)pppppppcVar6 = '+';
          }
          else if (*(char *)pppppppcVar6 == '_') {
            *(char *)pppppppcVar6 = '/';
          }
        }
        while ((local_40 & 3) != 0) {
          if (local_40 < local_38) {
            pppppppcVar6 = (char *******)local_50;
            if (0xf < local_38) {
              pppppppcVar6 = local_50[0];
            }
            pcVar2 = (char *)((longlong)pppppppcVar6 + local_40);
            local_40 = local_40 + 1;
            pcVar2[0] = '=';
            pcVar2[1] = '\0';
          }
          else {
            FUN_18021abd0(local_50,local_40,local_38,0x3d);
          }
        }
        local_74 = 0;
        pppppppcVar6 = (char *******)local_50;
        if (0xf < local_38) {
          pppppppcVar6 = local_50[0];
        }
        BVar3 = CryptStringToBinaryA
                          ((LPCSTR)pppppppcVar6,(DWORD)local_40,1,(BYTE *)0x0,&local_74,(DWORD *)0x0
                           ,(DWORD *)0x0);
        if ((BVar3 != 0) && (local_74 != 0)) {
          FUN_18020ea80(local_70,local_74,0);
          pppppppBVar8 = (BYTE *******)local_70;
          if (0xf < local_58) {
            pppppppBVar8 = local_70[0];
          }
          pppppppcVar6 = (char *******)local_50;
          if (0xf < local_38) {
            pppppppcVar6 = local_50[0];
          }
          BVar3 = CryptStringToBinaryA
                            ((LPCSTR)pppppppcVar6,(DWORD)local_40,1,(BYTE *)pppppppBVar8,&local_74,
                             (DWORD *)0x0,(DWORD *)0x0);
          if (BVar3 != 0) {
            uVar7 = (ulonglong)local_74;
            if (local_60 < uVar7) {
              _Size = uVar7 - local_60;
              if (local_58 - local_60 < _Size) {
                FUN_18022a720(local_70,_Size,local_58,_Size);
              }
              else {
                pppppppBVar8 = (BYTE *******)local_70;
                if (0xf < local_58) {
                  pppppppBVar8 = local_70[0];
                }
                _Dst = (void *)((longlong)pppppppBVar8 + local_60);
                local_60 = uVar7;
                memset(_Dst,0,_Size);
                *(undefined1 *)((longlong)_Dst + _Size) = 0;
              }
            }
            else {
              pppppppBVar8 = (BYTE *******)local_70;
              if (0xf < local_58) {
                pppppppBVar8 = local_70[0];
              }
              local_60 = uVar7;
              *(undefined1 *)((longlong)pppppppBVar8 + uVar7) = 0;
            }
            pppppppBVar8 = (BYTE *******)local_70;
            if (0xf < local_58) {
              pppppppBVar8 = local_70[0];
            }
            if (((4 < local_60) &&
                (lVar1 = (longlong)pppppppBVar8 + local_60,
                lVar4 = thunk_FUN_1802d6b60(pppppppBVar8,lVar1,"\"sub\"",5), lVar4 != lVar1)) &&
               (uVar7 = lVar4 - (longlong)pppppppBVar8, uVar7 != 0xffffffffffffffff)) {
              pppppppBVar8 = (BYTE *******)local_70;
              if (0xf < local_58) {
                pppppppBVar8 = local_70[0];
              }
              if (((uVar7 < local_60) &&
                  (lVar1 = (longlong)pppppppBVar8 + local_60,
                  lVar4 = thunk_FUN_1802d5c20((longlong)pppppppBVar8 + uVar7,lVar1,0x3a),
                  lVar4 != lVar1)) &&
                 (uVar7 = lVar4 - (longlong)pppppppBVar8, uVar7 != 0xffffffffffffffff)) {
                for (; uVar7 < local_60; uVar7 = uVar7 + 1) {
                  pppppppBVar8 = (BYTE *******)local_70;
                  if (0xf < local_58) {
                    pppppppBVar8 = local_70[0];
                  }
                  if (*(char *)((longlong)pppppppBVar8 + uVar7) != ':') {
                    pppppppBVar8 = (BYTE *******)local_70;
                    if (0xf < local_58) {
                      pppppppBVar8 = local_70[0];
                    }
                    if (*(char *)((longlong)pppppppBVar8 + uVar7) != ' ') {
                      pppppppBVar8 = (BYTE *******)local_70;
                      if (0xf < local_58) {
                        pppppppBVar8 = local_70[0];
                      }
                      if (*(char *)((longlong)pppppppBVar8 + uVar7) != '\"') break;
                    }
                  }
                }
                do {
                  if (local_60 <= uVar7) goto LAB_1801335ef;
                  pppppppBVar8 = (BYTE *******)local_70;
                  if (0xf < local_58) {
                    pppppppBVar8 = local_70[0];
                  }
                  if (*(char *)((longlong)pppppppBVar8 + uVar7) < '0') goto LAB_1801335ef;
                  pppppppBVar8 = (BYTE *******)local_70;
                  if (0xf < local_58) {
                    pppppppBVar8 = local_70[0];
                  }
                  if ('9' < *(char *)((longlong)pppppppBVar8 + uVar7)) goto LAB_1801335ef;
                  pppppppBVar8 = (BYTE *******)local_70;
                  if (0xf < local_58) {
                    pppppppBVar8 = local_70[0];
                  }
                  lVar9 = (longlong)(*(char *)((longlong)pppppppBVar8 + uVar7) + -0x30) + lVar9 * 10
                  ;
                  uVar7 = uVar7 + 1;
                } while( true );
              }
            }
          }
          lVar9 = 0;
LAB_1801335ef:
          FUN_18020e450(local_70);
        }
      }
      FUN_18020e450(local_50);
      return lVar9;
    }
  }
  return 0;
}


)B180133200",
    "aab7bc478dbc1e2f663d55836acec4450362a5114319fbeecaa676ad6843fc9c",
    R"F180133200C(FUN_18020e450
FUN_18020e670
FUN_18020ea80
FUN_18021abd0
FUN_18022a720)F180133200C",
    R"F180133200D(LAB_1801335ef
DAT_1803da4c0)F180133200D",
    R"F180133200T("\\\"sub\\\"")F180133200T",
    R"F180133200F(39: if (0xf < (ulonglong)param_1[3]) {
42: if (((param_1[2] != 0) &&
47: if (0xf < (ulonglong)param_1[3]) {
50: if (((uVar7 < (ulonglong)param_1[2]) &&
55: if ((local_40 != 0) && (local_40 < 0x1001)) {
57: if (local_38 < 0x10) {
61: for (; pppppppcVar6 != pppppppcVar10;
63: if (*(char *)pppppppcVar6 == '-') {
66: else if (*(char *)pppppppcVar6 == '_') {
70: while ((local_40 & 3) != 0) {
71: if (local_40 < local_38) {
73: if (0xf < local_38) {
81: else {
87: if (0xf < local_38) {
93: if ((BVar3 != 0) && (local_74 != 0)) {
96: if (0xf < local_58) {
100: if (0xf < local_38) {
106: if (BVar3 != 0) {
108: if (local_60 < uVar7) {
110: if (local_58 - local_60 < _Size) {
113: else {
115: if (0xf < local_58) {
124: else {
126: if (0xf < local_58) {
133: if (0xf < local_58) {
136: if (((4 < local_60) &&
141: if (0xf < local_58) {
144: if (((uVar7 < local_60) &&
149: for (; uVar7 < local_60; uVar7 = uVar7 + 1) {
151: if (0xf < local_58) {
154: if (*(char *)((longlong)pppppppBVar8 + uVar7) != ':') {
156: if (0xf < local_58) {
159: if (*(char *)((longlong)pppppppBVar8 + uVar7) != ' ') {
161: if (0xf < local_58) {
164: if (*(char *)((longlong)pppppppBVar8 + uVar7) != '\"') break;
168: do {
169: if (local_60 <= uVar7) goto LAB_1801335ef;
171: if (0xf < local_58) {
174: if (*(char *)((longlong)pppppppBVar8 + uVar7) < '0') goto LAB_1801335ef;
176: if (0xf < local_58) {
179: if ('9' < *(char *)((longlong)pppppppBVar8 + uVar7)) goto LAB_1801335ef;
181: if (0xf < local_58) {
192: LAB_1801335ef:
197: return lVar9;
200: return 0;)F180133200F",
    R"F180133200U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1801335ef.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180133200U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180133200() noexcept {
    return kFunction_0x180133200;
}

// 0x180133640 FUN_180133640
// source: re/dump/decompile/0x180133640_FUN_180133640.c
// size: 165 bytes; thunk: false
// body sha256: 1145891a5cfbc67f87be5530e90bb812c167d277de07015167c010d0381de8cd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180133640{
    "0x180133640",
    "FUN_180133640",
    R"F180133640S(undefined FUN_180133640())F180133640S",
    R"B180133640(// 0x180133640  FUN_180133640
// size=165 thunk=false
// signature: undefined FUN_180133640()
// status: ok


ulonglong FUN_180133640(undefined8 *param_1,char *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  size_t sVar2;
  longlong lVar3;
  
  sVar2 = strlen(param_2);
  uVar1 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if ((sVar2 <= uVar1) && (param_3 <= uVar1 - sVar2)) {
    if (sVar2 == 0) {
      return param_3;
    }
    lVar3 = thunk_FUN_1802d6b60((longlong)param_1 + param_3,uVar1 + (longlong)param_1,param_2,sVar2)
    ;
    if (lVar3 != uVar1 + (longlong)param_1) {
      return lVar3 - (longlong)param_1;
    }
  }
  return 0xffffffffffffffff;
}


)B180133640",
    "1145891a5cfbc67f87be5530e90bb812c167d277de07015167c010d0381de8cd",
    R"F180133640C()F180133640C",
    R"F180133640D()F180133640D",
    R"F180133640T()F180133640T",
    R"F180133640F(16: if (0xf < (ulonglong)param_1[3]) {
19: if ((sVar2 <= uVar1) && (param_3 <= uVar1 - sVar2)) {
20: if (sVar2 == 0) {
21: return param_3;
25: if (lVar3 != uVar1 + (longlong)param_1) {
26: return lVar3 - (longlong)param_1;
29: return 0xffffffffffffffff;)F180133640F",
    R"F180133640U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180133640U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180133640() noexcept {
    return kFunction_0x180133640;
}

// 0x1801336f0 FUN_1801336f0
// source: re/dump/decompile/0x1801336f0_FUN_1801336f0.c
// size: 461 bytes; thunk: false
// body sha256: 3b97a5910226e7bb581651ef1199c87c423c8c58ea03f60edc18e49d5df3dcaf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801336f0{
    "0x1801336f0",
    "FUN_1801336f0",
    R"F1801336f0S(undefined FUN_1801336f0())F1801336f0S",
    R"B1801336f0(// 0x1801336f0  FUN_1801336f0
// size=461 thunk=false
// signature: undefined FUN_1801336f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1801336f0(undefined8 *param_1,longlong param_2,longlong param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_128 [32];
  longlong local_108;
  uint local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 *local_d0;
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  char local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_f8 = 1;
  local_d0 = param_1;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_18020d6f0();
  }
  if (param_3 != 0) {
    local_108 = param_3;
    FUN_180012b20(local_48,0x20,0xffffffffffffffff,&DAT_18033f580);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    sVar1 = strlen(local_48);
    FUN_18001d080(&local_68,local_48,sVar1);
    if (local_58 < 7) {
      uVar2 = FUN_18016d4c0(local_88,&local_68);
      uVar4 = 3;
    }
    else {
      uVar2 = FUN_18020e670(&local_68,local_a8,local_58 - 6,0xffffffffffffffff);
      uVar4 = 5;
    }
    local_f8 = uVar4;
    FUN_18016d4c0(local_c8,uVar2);
    uVar5 = uVar4 | 8;
    local_f8 = uVar5;
    if ((uVar4 & 4) != 0) {
      uVar5 = uVar4 & 0xfffffffb | 8;
      local_f8 = uVar5;
      FUN_18020e450(local_a8);
    }
    if ((uVar5 & 2) != 0) {
      uVar5 = uVar5 & 0xfffffffd;
      local_f8 = uVar5;
      FUN_18020e450(local_88);
    }
    FUN_18020e450(&local_68);
    puVar3 = (undefined4 *)FUN_18022a630(local_c8);
    local_f0 = *puVar3;
    uStack_ec = puVar3[1];
    uStack_e8 = puVar3[2];
    uStack_e4 = puVar3[3];
    local_e0 = *(undefined8 *)(puVar3 + 4);
    uStack_d8 = *(undefined8 *)(puVar3 + 6);
    *(undefined1 *)puVar3 = 0;
    *(undefined8 *)(puVar3 + 4) = 0;
    *(undefined8 *)(puVar3 + 6) = 0xf;
    local_f8 = uVar5 | 0x20;
    FUN_180214300(param_1,&local_f0);
    local_f8 = uVar5;
    FUN_18020e450(&local_f0);
    local_f8 = uVar5 & 0xffffffd7;
    FUN_18020e450(local_c8);
  }
  return param_1;
}


)B1801336f0",
    "3b97a5910226e7bb581651ef1199c87c423c8c58ea03f60edc18e49d5df3dcaf",
    R"F1801336f0C(FUN_180012b20
FUN_18001d080
FUN_18016d4c0
FUN_18020d6f0
FUN_18020e450
FUN_18020e670
FUN_180214300
FUN_18022a630)F1801336f0C",
    R"F1801336f0D(DAT_18033f580
DAT_1803da4c0)F1801336f0D",
    R"F1801336f0T()F1801336f0T",
    R"F1801336f0F(45: if (*(longlong *)(param_2 + 0x10) != 0) {
48: if (param_3 != 0) {
57: if (local_58 < 7) {
61: else {
69: if ((uVar4 & 4) != 0) {
74: if ((uVar5 & 2) != 0) {
97: return param_1;)F1801336f0F",
    R"F1801336f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033f580.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F1801336f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801336f0() noexcept {
    return kFunction_0x1801336f0;
}

// 0x1801338c0 FUN_1801338c0
// source: re/dump/decompile/0x1801338c0_FUN_1801338c0.c
// size: 322 bytes; thunk: false
// body sha256: f36059a67c9b08614505b92f5bca5f5e08840c5311f03596357a20d513ad18da
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801338c0{
    "0x1801338c0",
    "FUN_1801338c0",
    R"F1801338c0S(undefined FUN_1801338c0())F1801338c0S",
    R"B1801338c0(// 0x1801338c0  FUN_1801338c0
// size=322 thunk=false
// signature: undefined FUN_1801338c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1801338c0(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80 [16];
  longlong local_70;
  undefined1 local_60 [16];
  longlong local_50;
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_a0 = param_1;
  FUN_1801336f0(&local_98);
  plVar2 = (longlong *)FUN_180132830(local_40);
  lVar3 = *plVar2;
  lVar1 = plVar2[1];
  do {
    if (lVar3 == lVar1) {
      FUN_18020d5c0(local_40);
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
      local_a8 = 1;
LAB_1801339a0:
      FUN_18020d5c0(&local_98);
      return param_1;
    }
    FUN_180132b90(local_60,lVar3);
    if (local_50 != 0) {
      FUN_180132d90(local_80,local_60,&local_98);
      if (local_70 != 0) {
        FUN_18016d4c0(param_1,local_80);
        local_a8 = 1;
        FUN_18020e450(local_80);
        FUN_18020e450(local_60);
        FUN_18020d5c0(local_40);
        goto LAB_1801339a0;
      }
      FUN_18020e450(local_80);
    }
    FUN_18020e450(local_60);
    lVar3 = lVar3 + 0x20;
  } while( true );
}


)B1801338c0",
    "f36059a67c9b08614505b92f5bca5f5e08840c5311f03596357a20d513ad18da",
    R"F1801338c0C(FUN_180132830
FUN_180132b90
FUN_180132d90
FUN_1801336f0
FUN_18016d4c0
FUN_18020d5c0
FUN_18020e450)F1801338c0C",
    R"F1801338c0D(LAB_1801339a0
DAT_1803da4c0)F1801338c0D",
    R"F1801338c0T()F1801338c0T",
    R"F1801338c0F(38: do {
39: if (lVar3 == lVar1) {
47: LAB_1801339a0:
49: return param_1;
52: if (local_50 != 0) {
54: if (local_70 != 0) {
60: goto LAB_1801339a0;)F1801338c0F",
    R"F1801338c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1801339a0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F1801338c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801338c0() noexcept {
    return kFunction_0x1801338c0;
}

// 0x180133a10 FUN_180133a10
// source: re/dump/decompile/0x180133a10_FUN_180133a10.c
// size: 222 bytes; thunk: false
// body sha256: c0cb923cb7aefcb09754f256850c8c38572bc4ad94be396de2e125356d2b83d6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180133a10{
    "0x180133a10",
    "FUN_180133a10",
    R"F180133a10S(undefined FUN_180133a10())F180133a10S",
    R"B180133a10(// 0x180133a10  FUN_180133a10
// size=222 thunk=false
// signature: undefined FUN_180133a10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180133a10(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  char cVar7;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined8 *local_20;
  char *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
    pcVar6 = param_2 + *(longlong *)(param_2 + 0x10);
    pcVar1 = param_2;
    pcVar5 = param_2;
  }
  else {
    pcVar1 = *(char **)param_2;
    pcVar6 = pcVar1 + *(longlong *)(param_2 + 0x10);
    pcVar5 = pcVar1;
  }
  for (; pcVar5 != pcVar6; pcVar5 = pcVar5 + 1) {
    cVar7 = *pcVar5;
    if ((byte)(cVar7 + 0xbfU) < 0x1a) {
      cVar7 = cVar7 + ' ';
    }
    *pcVar1 = cVar7;
    pcVar1 = pcVar1 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = *(undefined4 *)(param_2 + 4);
  uVar3 = *(undefined4 *)(param_2 + 8);
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *param_2 = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x18] = '\x0f';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  param_2[0x1c] = '\0';
  param_2[0x1d] = '\0';
  param_2[0x1e] = '\0';
  param_2[0x1f] = '\0';
  local_28 = 1;
  local_20 = param_1;
  local_18 = param_2;
  FUN_18020e450(param_2);
  return param_1;
}


)B180133a10",
    "c0cb923cb7aefcb09754f256850c8c38572bc4ad94be396de2e125356d2b83d6",
    R"F180133a10C(FUN_18020e450)F180133a10C",
    R"F180133a10D(DAT_1803da4c0)F180133a10D",
    R"F180133a10T()F180133a10T",
    R"F180133a10F(26: if (*(ulonglong *)(param_2 + 0x18) < 0x10) {
31: else {
36: for (; pcVar5 != pcVar6; pcVar5 = pcVar5 + 1) {
38: if ((byte)(cVar7 + 0xbfU) < 0x1a) {
83: return param_1;)F180133a10F",
    R"F180133a10U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180133a10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180133a10() noexcept {
    return kFunction_0x180133a10;
}

// 0x180133af0 FUN_180133af0
// source: re/dump/decompile/0x180133af0_FUN_180133af0.c
// size: 249 bytes; thunk: false
// body sha256: 4ee2415beff63d44637d31cfb1b11547365e7de6c637c2b5fa94a3bab370f969
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180133af0{
    "0x180133af0",
    "FUN_180133af0",
    R"F180133af0S(undefined FUN_180133af0())F180133af0S",
    R"B180133af0(// 0x180133af0  FUN_180133af0
// size=249 thunk=false
// signature: undefined FUN_180133af0()
// status: ok


ulonglong FUN_180133af0(undefined8 *param_1,ulonglong *param_2)

{
  char cVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  int iVar3;
  int iVar5;
  ulonglong uVar6;
  undefined8 *puVar4;
  
  uVar2 = param_1[2];
  if ((uVar2 != 0) && ((uVar2 & 1) == 0)) {
    FUN_180218360(param_2,uVar2 >> 1);
    uVar2 = param_2[1];
    uVar6 = 0;
    if (uVar2 != *param_2) {
      do {
        puVar4 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar4 = (undefined8 *)*param_1;
        }
        cVar1 = *(char *)((longlong)puVar4 + uVar6 * 2);
        iVar3 = (int)cVar1;
        if ((byte)(cVar1 - 0x30U) < 10) {
          iVar3 = iVar3 + -0x30;
        }
        else if ((byte)(cVar1 + 0x9fU) < 6) {
          iVar3 = iVar3 + -0x57;
        }
        else if ((byte)(cVar1 + 0xbfU) < 6) {
          iVar3 = iVar3 + -0x37;
        }
        else {
          iVar3 = -1;
        }
        puVar4 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar4 = (undefined8 *)*param_1;
        }
        cVar1 = *(char *)((longlong)puVar4 + uVar6 * 2 + 1);
        iVar5 = (int)cVar1;
        if ((byte)(cVar1 - 0x30U) < 10) {
          in_RAX = (ulonglong)(iVar5 - 0x30);
        }
        else if ((byte)(cVar1 + 0x9fU) < 6) {
          in_RAX = (ulonglong)(iVar5 - 0x57);
        }
        else {
          in_RAX = (ulonglong)(iVar5 - 0x37);
          if (5 < (byte)(cVar1 + 0xbfU)) {
            in_RAX = 0xffffffff;
          }
        }
        if ((iVar3 < 0) || ((int)in_RAX < 0)) goto LAB_180133bdc;
        *(byte *)(uVar6 + *param_2) = (char)iVar3 << 4 | (byte)in_RAX;
        uVar6 = uVar6 + 1;
        uVar2 = param_2[1] - *param_2;
      } while (uVar6 < uVar2);
    }
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
LAB_180133bdc:
  return in_RAX & 0xffffffffffffff00;
}


)B180133af0",
    "4ee2415beff63d44637d31cfb1b11547365e7de6c637c2b5fa94a3bab370f969",
    R"F180133af0C(FUN_180218360)F180133af0C",
    R"F180133af0D(LAB_180133bdc)F180133af0D",
    R"F180133af0T()F180133af0T",
    R"F180133af0F(19: if ((uVar2 != 0) && ((uVar2 & 1) == 0)) {
23: if (uVar2 != *param_2) {
24: do {
26: if (0xf < (ulonglong)param_1[3]) {
31: if ((byte)(cVar1 - 0x30U) < 10) {
34: else if ((byte)(cVar1 + 0x9fU) < 6) {
37: else if ((byte)(cVar1 + 0xbfU) < 6) {
40: else {
44: if (0xf < (ulonglong)param_1[3]) {
49: if ((byte)(cVar1 - 0x30U) < 10) {
52: else if ((byte)(cVar1 + 0x9fU) < 6) {
55: else {
57: if (5 < (byte)(cVar1 + 0xbfU)) {
61: if ((iVar3 < 0) || ((int)in_RAX < 0)) goto LAB_180133bdc;
67: return CONCAT71((int7)(uVar2 >> 8),1);
69: LAB_180133bdc:
70: return in_RAX & 0xffffffffffffff00;)F180133af0F",
    R"F180133af0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180133bdc.)F180133af0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180133af0() noexcept {
    return kFunction_0x180133af0;
}

// 0x180133bf0 FUN_180133bf0
// source: re/dump/decompile/0x180133bf0_FUN_180133bf0.c
// size: 1751 bytes; thunk: false
// body sha256: 04cc627d00cee1d253a29205dba508608758dea39527524cd8d7d2b13d05a787
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180133bf0{
    "0x180133bf0",
    "FUN_180133bf0",
    R"F180133bf0S(undefined FUN_180133bf0())F180133bf0S",
    R"B180133bf0(// 0x180133bf0  FUN_180133bf0
// size=1751 thunk=false
// signature: undefined FUN_180133bf0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180133bf0(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  size_t sVar4;
  void **ppvVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined1 auStack_688 [8];
  undefined1 auStack_680 [24];
  wchar_t *local_668;
  undefined4 local_658;
  undefined8 *local_650;
  undefined **local_648;
  undefined8 *local_640;
  undefined8 *local_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined1 local_528 [32];
  undefined1 local_508 [32];
  undefined1 local_4e8 [32];
  undefined1 local_4c8 [32];
  undefined1 local_4a8 [32];
  undefined1 local_488 [32];
  void *local_468;
  void *pvStack_460;
  void *local_458;
  void *pvStack_450;
  wchar_t local_448 [264];
  WCHAR local_238 [264];
  ulonglong local_28;
  
  puVar9 = auStack_688;
  puVar10 = auStack_688;
  puVar11 = auStack_688;
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_688;
  local_658 = 0;
  local_530 = param_1;
  memset(local_448,0,0x208);
  pvStack_460 = (void *)0x0;
  local_458 = (void *)0x0;
  pvStack_450 = (void *)0x7;
  local_468 = (void *)0x0;
  local_668 = local_448;
  iVar2 = SHGetFolderPathW(0,0x8005,0,0);
  if (iVar2 < 0) {
    memset(local_238,0,0x208);
    DVar3 = GetEnvironmentVariableW(L"USERPROFILE",local_238,0x104);
    if (DVar3 == 0) {
      local_650 = &local_590;
      local_590 = 0;
      uStack_588 = 0;
      local_580 = 0;
      local_578 = 0;
      FUN_180211510(&local_590,L"mayrrX64",8);
      local_658 = 0;
      local_650 = (undefined8 *)0x0;
      local_648 = &PTR_vftable_std__System_error_category_1803e9500;
      uVar13 = FUN_180067fd0(local_528,&local_650);
      local_658 = 0x20000;
      if ((int)local_650 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1800670a0(uVar13,&local_650);
      }
      ppvVar5 = (void **)FUN_180066720(local_4a8,local_528,&local_590);
      puVar12 = auStack_688;
      if (&local_468 != ppvVar5) {
        if ((void *)0x7 < pvStack_450) {
          pvVar7 = local_468;
          puVar11 = auStack_688;
          if ((0xfff < (longlong)pvStack_450 * 2 + 2U) &&
             (pvVar7 = *(void **)((longlong)local_468 + -8), puVar11 = auStack_688,
             0x1f < (ulonglong)((longlong)local_468 + (-8 - (longlong)pvVar7)))) {
            pvVar7 = (void *)0x5;
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)();
            puVar11 = auStack_680;
          }
          *(undefined8 *)(puVar11 + -8) = 0x18013413e;
          free(pvVar7);
        }
        local_468 = *ppvVar5;
        pvStack_460 = ppvVar5[1];
        local_458 = ppvVar5[2];
        pvStack_450 = ppvVar5[3];
        ppvVar5[2] = (void *)0x0;
        ppvVar5[3] = (void *)0x7;
        *(undefined2 *)ppvVar5 = 0;
        puVar12 = puVar11;
      }
      *(undefined8 *)(puVar12 + -8) = 0x180134189;
      FUN_18021e290(local_4a8);
      *(undefined4 *)(puVar12 + 0x30) = 0;
      *(undefined8 *)(puVar12 + -8) = 0x18013419a;
      FUN_18021e290(local_528);
      puVar8 = &local_590;
    }
    else {
      local_640 = &local_5b0;
      local_5b0 = 0;
      uStack_5a8 = 0;
      local_5a0 = 0;
      local_598 = 0;
      FUN_180211510(&local_5b0,L"mayrrX64",8);
      local_658 = 0;
      local_638 = &local_5d0;
      local_5d0 = 0;
      uStack_5c8 = 0;
      local_5c0 = 0;
      local_5b8 = 0;
      FUN_180211510(&local_5d0,L"Documents",9);
      local_658 = 0;
      local_650 = &local_5f0;
      sVar4 = wcslen(local_238);
      local_5f0 = 0;
      uStack_5e8 = 0;
      local_5e0 = 0;
      local_5d8 = 0;
      FUN_180211510(&local_5f0,local_238,sVar4);
      local_658 = 0;
      uVar6 = FUN_180066720(local_4c8,&local_5f0,&local_5d0);
      ppvVar5 = (void **)FUN_180066720(local_4e8,uVar6,&local_5b0);
      puVar12 = auStack_688;
      if (&local_468 != ppvVar5) {
        if ((void *)0x7 < pvStack_450) {
          pvVar7 = local_468;
          puVar10 = auStack_688;
          if ((0xfff < (longlong)pvStack_450 * 2 + 2U) &&
             (pvVar7 = *(void **)((longlong)local_468 + -8), puVar10 = auStack_688,
             0x1f < (ulonglong)((longlong)local_468 + (-8 - (longlong)pvVar7)))) {
            pvVar7 = (void *)0x5;
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)();
            puVar10 = auStack_680;
          }
          *(undefined8 *)(puVar10 + -8) = 0x180133fd2;
          free(pvVar7);
        }
        local_468 = *ppvVar5;
        pvStack_460 = ppvVar5[1];
        local_458 = ppvVar5[2];
        pvStack_450 = ppvVar5[3];
        ppvVar5[2] = (void *)0x0;
        ppvVar5[3] = (void *)0x7;
        *(undefined2 *)ppvVar5 = 0;
        puVar12 = puVar10;
      }
      *(undefined8 *)(puVar12 + -8) = 0x18013401d;
      FUN_18021e290(local_4e8);
      *(undefined8 *)(puVar12 + -8) = 0x18013402a;
      FUN_18021e290(local_4c8);
      *(undefined8 *)(puVar12 + -8) = 0x180134034;
      FUN_18021e290(&local_5f0);
      *(undefined8 *)(puVar12 + -8) = 0x18013403e;
      FUN_18021e290(&local_5d0);
      puVar8 = &local_5b0;
    }
  }
  else {
    local_638 = &local_610;
    local_610 = 0;
    uStack_608 = 0;
    local_600 = 0;
    local_5f8 = 0;
    FUN_180211510(&local_610,L"mayrrX64",8);
    local_658 = 0;
    local_640 = &local_630;
    sVar4 = wcslen(local_448);
    local_630 = 0;
    uStack_628 = 0;
    local_620 = 0;
    local_618 = 0;
    FUN_180211510(&local_630,local_448,sVar4);
    local_658 = 0;
    ppvVar5 = (void **)FUN_180066720(local_508,&local_630,&local_610);
    puVar12 = auStack_688;
    if (&local_468 != ppvVar5) {
      if ((void *)0x7 < pvStack_450) {
        pvVar7 = local_468;
        puVar9 = auStack_688;
        if ((0xfff < (longlong)pvStack_450 * 2 + 2U) &&
           (pvVar7 = *(void **)((longlong)local_468 + -8), puVar9 = auStack_688,
           0x1f < (ulonglong)((longlong)local_468 + (-8 - (longlong)pvVar7)))) {
          pvVar7 = (void *)0x5;
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)();
          puVar9 = auStack_680;
        }
        *(undefined8 *)(puVar9 + -8) = 0x180133dbd;
        free(pvVar7);
      }
      local_468 = *ppvVar5;
      pvStack_460 = ppvVar5[1];
      local_458 = ppvVar5[2];
      pvStack_450 = ppvVar5[3];
      ppvVar5[2] = (void *)0x0;
      ppvVar5[3] = (void *)0x7;
      *(undefined2 *)ppvVar5 = 0;
      puVar12 = puVar9;
    }
    *(undefined8 *)(puVar12 + -8) = 0x180133e08;
    FUN_18021e290(local_508);
    *(undefined8 *)(puVar12 + -8) = 0x180133e13;
    FUN_18021e290(puVar12 + 0x58);
    puVar8 = (undefined8 *)(puVar12 + 0x78);
  }
  *(undefined8 *)(puVar12 + -8) = 0x1801341a4;
  FUN_18021e290(puVar8);
  *(undefined8 **)(puVar12 + 0x38) = &local_550;
  local_550 = 0;
  uStack_548 = 0;
  local_540 = 0;
  local_538 = 0;
  *(undefined8 *)(puVar12 + -8) = 0x1801341d2;
  FUN_180211510(&local_550,L"tokens.dat",10);
  *(undefined4 *)(puVar12 + 0x30) = 4;
  *(undefined4 *)(puVar12 + 0x30) = 0;
  *(undefined4 *)(puVar12 + 0x30) = 2;
  *(undefined4 *)(puVar12 + 0x30) = 0;
  *(undefined8 **)(puVar12 + 0x48) = &local_570;
  local_570 = 0;
  uStack_568 = 0;
  local_560 = 0;
  local_558 = 0;
  *(undefined8 *)(puVar12 + -8) = 0x18013421c;
  FUN_180211510(&local_570,L"settings",8);
  *(undefined4 *)(puVar12 + 0x30) = 0x10;
  *(undefined4 *)(puVar12 + 0x30) = 0;
  *(undefined4 *)(puVar12 + 0x30) = 8;
  *(undefined4 *)(puVar12 + 0x30) = 0;
  *(undefined8 *)(puVar12 + -8) = 0x18013424f;
  uVar6 = FUN_180066720(local_488,&local_468,&local_570);
  *(undefined8 *)(puVar12 + -8) = 0x18013425f;
  FUN_180066720(param_1,uVar6,&local_550);
  *(undefined4 *)(puVar12 + 0x30) = 1;
  *(undefined8 *)(puVar12 + -8) = 0x180134272;
  FUN_18021e290(local_488);
  *(undefined8 *)(puVar12 + -8) = 0x18013427c;
  FUN_18021e290(&local_570);
  *(undefined8 *)(puVar12 + -8) = 0x180134286;
  FUN_18021e290(&local_550);
  *(undefined8 *)(puVar12 + -8) = 0x180134293;
  FUN_18021e290(&local_468);
  *(undefined8 *)(puVar12 + -8) = 0x1801342a5;
  return param_1;
}


)B180133bf0",
    "04cc627d00cee1d253a29205dba508608758dea39527524cd8d7d2b13d05a787",
    R"F180133bf0C(FUN_180066720
FUN_1800670a0
FUN_180067fd0
FUN_180211510
FUN_18021e290)F180133bf0C",
    R"F180133bf0D(DAT_1803da4c0)F180133bf0D",
    R"F180133bf0T("mayrrX64"
"settings"
"Documents"
"tokens.dat"
"USERPROFILE")F180133bf0T",
    R"F180133bf0F(93: if (iVar2 < 0) {
96: if (DVar3 == 0) {
108: if ((int)local_650 != 0) {
114: if (&local_468 != ppvVar5) {
115: if ((void *)0x7 < pvStack_450) {
118: if ((0xfff < (longlong)pvStack_450 * 2 + 2U) &&
145: else {
171: if (&local_468 != ppvVar5) {
172: if ((void *)0x7 < pvStack_450) {
175: if ((0xfff < (longlong)pvStack_450 * 2 + 2U) &&
206: else {
224: if (&local_468 != ppvVar5) {
225: if ((void *)0x7 < pvStack_450) {
228: if ((0xfff < (longlong)pvStack_450 * 2 + 2U) &&
292: return param_1;)F180133bf0F",
    R"F180133bf0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 122: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 123: (*pcVar1)();.
TODO: resolve the indirect call in body 179: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 180: (*pcVar1)();.
TODO: resolve the indirect call in body 232: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 233: (*pcVar1)();.)F180133bf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180133bf0() noexcept {
    return kFunction_0x180133bf0;
}

// 0x1801342d0 FUN_1801342d0
// source: re/dump/decompile/0x1801342d0_FUN_1801342d0.c
// size: 1372 bytes; thunk: false
// body sha256: e509fd109a22be48cae1b7fbe0cfd9ac31989fb20ac8f48c7ab3cabf823b80c9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801342d0{
    "0x1801342d0",
    "FUN_1801342d0",
    R"F1801342d0S(undefined FUN_1801342d0())F1801342d0S",
    R"B1801342d0(// 0x1801342d0  FUN_1801342d0
// size=1372 thunk=false
// signature: undefined FUN_1801342d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1801342d0(undefined8 *param_1)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char ****ppppcVar6;
  char *pcVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_2a8 [48];
  undefined4 local_278;
  ulonglong local_270;
  undefined8 uStack_268;
  longlong local_260;
  undefined8 local_258;
  char ***local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  ulonglong local_238;
  basic_ios<char,std::char_traits<char>_> *local_230;
  undefined8 *local_228;
  undefined1 *local_220;
  undefined1 local_218 [32];
  undefined1 local_1f8 [28];
  int iStack_1dc;
  longlong local_1d8 [2];
  int local_1c8 [2];
  basic_istream<char,std::char_traits<char>_> local_1c0 [152];
  basic_ios<char,std::char_traits<char>_> local_128 [96];
  char ***local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 local_90;
  ulonglong local_88;
  ulonglong local_80;
  undefined8 uStack_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_2a8;
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_278 = 1;
  local_228 = param_1;
  memset(local_1d8,0,0x110);
  uVar4 = FUN_180133bf0(&local_250);
  FUN_180202040(local_1d8,uVar4,1);
  FUN_18021e290(&local_250);
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0xf;
  local_c8 = (char ***)0x0;
  iVar2 = *(int *)((longlong)local_1c8 + (longlong)*(int *)(local_1d8[0] + 4));
  while (iVar2 == 0) {
    cVar3 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)local_1d8 + (longlong)*(int *)(local_1d8[0] + 4)),'\n');
    plVar5 = (longlong *)FUN_180210550(local_1d8,&local_c8,cVar3);
    if ((*(byte *)((longlong)*(int *)(*plVar5 + 4) + 0x10 + (longlong)plVar5) & 6) != 0) break;
    if (local_b8 != 0) {
      ppppcVar6 = &local_c8;
      if (0xf < local_b0) {
        ppppcVar6 = (char ****)local_c8;
      }
      if (*(char *)ppppcVar6 != '#') {
        ppppcVar6 = &local_c8;
        if (0xf < local_b0) {
          ppppcVar6 = (char ****)local_c8;
        }
        if (local_b8 != 0) {
          pcVar1 = (char *)((longlong)ppppcVar6 + local_b8);
          pcVar7 = (char *)thunk_FUN_1802d5c20(ppppcVar6,pcVar1,9);
          if ((pcVar7 != pcVar1) && (lVar10 = (longlong)pcVar7 - (longlong)ppppcVar6, lVar10 != -1))
          {
            uVar13 = lVar10 + 1;
            ppppcVar6 = &local_c8;
            if (0xf < local_b0) {
              ppppcVar6 = (char ****)local_c8;
            }
            if (((uVar13 < local_b8) &&
                (pcVar1 = (char *)((longlong)ppppcVar6 + local_b8),
                pcVar7 = (char *)thunk_FUN_1802d5c20((char *)((longlong)ppppcVar6 + uVar13),pcVar1,9
                                                    ), pcVar7 != pcVar1)) &&
               (lVar12 = (longlong)pcVar7 - (longlong)ppppcVar6, lVar12 != -1)) {
              uStack_a0 = 0;
              lVar8 = 0;
              local_98 = 0;
              local_90 = 0xf;
              local_a8 = 0;
              local_88 = 0;
              uStack_78 = 0;
              local_70 = 0;
              local_68 = 0xf;
              local_80 = 0;
              local_220 = local_218;
              uVar4 = FUN_18020e670(&local_c8,local_218,0,lVar10);
              puVar9 = (undefined8 *)FUN_180133a10(local_1f8,uVar4);
              if (&local_a8 != puVar9) {
                local_a8 = *puVar9;
                uStack_a0 = puVar9[1];
                lVar8 = puVar9[2];
                local_90 = puVar9[3];
                puVar9[2] = 0;
                puVar9[3] = 0xf;
                *(undefined1 *)puVar9 = 0;
                local_98 = lVar8;
              }
              FUN_18020e450(local_1f8);
              local_250 = (char ***)0x0;
              uStack_248 = 0;
              local_240 = 0;
              local_238 = 0;
              if (local_b8 < uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_18022ec00();
              }
              uVar11 = (lVar12 - lVar10) - 1;
              if (local_b8 - uVar13 < uVar11) {
                uVar11 = local_b8 - uVar13;
              }
              ppppcVar6 = &local_c8;
              if (0xf < local_b0) {
                ppppcVar6 = (char ****)local_c8;
              }
              FUN_18001d080(&local_250,(char *)((longlong)ppppcVar6 + uVar13),uVar11);
              local_278 = 5;
              ppppcVar6 = &local_250;
              if (0xf < local_238) {
                ppppcVar6 = (char ****)local_250;
              }
              local_88 = _strtoui64((char *)ppppcVar6,(char **)0x0,10);
              local_278 = 1;
              FUN_18020e450(&local_250);
              uVar13 = lVar12 + 1;
              local_270 = 0;
              uStack_268 = 0;
              local_260 = 0;
              local_258 = 0;
              if (local_b8 < uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_18022ec00();
              }
              lVar10 = -1;
              if (local_b8 - uVar13 != -1) {
                lVar10 = local_b8 - uVar13;
              }
              ppppcVar6 = &local_c8;
              if (0xf < local_b0) {
                ppppcVar6 = (char ****)local_c8;
              }
              FUN_18001d080(&local_270,(char *)((longlong)ppppcVar6 + uVar13),lVar10);
              lVar10 = local_260;
              local_80 = local_270;
              uStack_78 = uStack_268;
              local_70 = local_260;
              local_68 = local_258;
              local_260 = 0;
              local_258 = 0xf;
              local_270 = local_270 & 0xffffffffffffff00;
              local_278 = 1;
              FUN_18020e450(&local_270);
              if ((lVar8 != 0) && (lVar10 != 0)) {
                lVar10 = param_1[1];
                if (lVar10 == param_1[2]) {
                  FUN_180224fe0(param_1,lVar10,&local_a8);
                }
                else {
                  local_230 = (basic_ios<char,std::char_traits<char>_> *)lVar10;
                  FUN_18016d4c0(lVar10,&local_a8);
                  *(ulonglong *)(lVar10 + 0x20) = local_88;
                  FUN_18016d4c0(lVar10 + 0x28,&local_80);
                  param_1[1] = param_1[1] + 0x48;
                }
              }
              FUN_18020e450(&local_80);
              FUN_18020e450(&local_a8);
            }
          }
        }
      }
    }
    iVar2 = *(int *)((longlong)local_1c8 + (longlong)*(int *)(local_1d8[0] + 4));
  }
  FUN_18020e450(&local_c8);
  local_230 = local_128;
  *(undefined ***)((longlong)local_1d8 + (longlong)*(int *)(local_1d8[0] + 4)) =
       vftable_std_std_D_DU__char_traits___basic_ifstream;
  *(int *)((longlong)&iStack_1dc + (longlong)*(int *)(local_1d8[0] + 4)) =
       *(int *)(local_1d8[0] + 4) + -0xb0;
  FUN_18020f850(local_1c8);
  std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
            (local_1c0);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_128);
  return param_1;
}


)B1801342d0",
    "e509fd109a22be48cae1b7fbe0cfd9ac31989fb20ac8f48c7ab3cabf823b80c9",
    R"F1801342d0C(FUN_18001d080
FUN_180133a10
FUN_180133bf0
FUN_18016d4c0
FUN_180202040
FUN_18020e450
FUN_18020e670
FUN_18020f850
FUN_180210550
FUN_18021e290
FUN_180224fe0
FUN_18022ec00)F1801342d0C",
    R"F1801342d0D(DAT_1803da4c0)F1801342d0D",
    R"F1801342d0T()F1801342d0T",
    R"F1801342d0F(77: while (iVar2 == 0) {
82: if ((*(byte *)((longlong)*(int *)(*plVar5 + 4) + 0x10 + (longlong)plVar5) & 6) != 0) break;
83: if (local_b8 != 0) {
85: if (0xf < local_b0) {
88: if (*(char *)ppppcVar6 != '#') {
90: if (0xf < local_b0) {
93: if (local_b8 != 0) {
96: if ((pcVar7 != pcVar1) && (lVar10 = (longlong)pcVar7 - (longlong)ppppcVar6, lVar10 != -1))
100: if (0xf < local_b0) {
103: if (((uVar13 < local_b8) &&
121: if (&local_a8 != puVar9) {
136: if (local_b8 < uVar13) {
141: if (local_b8 - uVar13 < uVar11) {
145: if (0xf < local_b0) {
151: if (0xf < local_238) {
162: if (local_b8 < uVar13) {
167: if (local_b8 - uVar13 != -1) {
171: if (0xf < local_b0) {
185: if ((lVar8 != 0) && (lVar10 != 0)) {
187: if (lVar10 == param_1[2]) {
190: else {
217: return param_1;)F1801342d0F",
    R"F1801342d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F1801342d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801342d0() noexcept {
    return kFunction_0x1801342d0;
}

// 0x180134830 FUN_180134830
// source: re/dump/decompile/0x180134830_FUN_180134830.c
// size: 458 bytes; thunk: false
// body sha256: 2543973d9e69f68cceb7409b90c2b4dc390698bb2bc94628448d04318afa86cc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180134830{
    "0x180134830",
    "FUN_180134830",
    R"F180134830S(undefined FUN_180134830())F180134830S",
    R"B180134830(// 0x180134830  FUN_180134830
// size=458 thunk=false
// signature: undefined FUN_180134830()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180134830(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_1a8 [48];
  basic_ios<char,std::char_traits<char>_> *local_178;
  undefined **local_170;
  undefined1 local_168 [28];
  int iStack_14c;
  longlong local_148;
  undefined1 local_140 [8];
  basic_ostream<char,std::char_traits<char>_> local_138 [152];
  basic_ios<char,std::char_traits<char>_> local_a0 [104];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_1a8;
  FUN_180133bf0(local_38);
  local_178 = (basic_ios<char,std::char_traits<char>_> *)0x0;
  local_170 = &PTR_vftable_std__System_error_category_1803e9500;
  uVar2 = FUN_180065cd0(local_38,local_168);
  FUN_180067d80(uVar2);
  FUN_18021e290(local_168);
  memset(&local_148,0,0x108);
  FUN_1802022a0(&local_148,local_38,0x10);
  if (*(int *)(local_138 + *(int *)(local_148 + 4)) == 0) {
    FUN_1801fc280(&local_148,
                  "# mayrrX64 Steam refresh tokens - account<TAB>steamid64<TAB>DPAPI blob (hex)\n");
    FUN_1801fc280(&local_148,
                  "# encrypted for THIS Windows user on THIS machine; worthless if copied elsewhere\n"
                 );
    puVar1 = (undefined8 *)param_1[1];
    for (param_1 = (undefined8 *)*param_1; param_1 != puVar1; param_1 = param_1 + 9) {
      puVar4 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar4 = (undefined8 *)*param_1;
      }
      uVar2 = FUN_180210c60(&local_148,puVar4,param_1[2]);
      this = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc450(uVar2,9);
      pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,param_1[4]);
      uVar2 = FUN_1801fc450(pbVar3,9);
      plVar5 = param_1 + 5;
      if (0xf < (ulonglong)param_1[8]) {
        plVar5 = (longlong *)*plVar5;
      }
      uVar2 = FUN_180210c60(uVar2,plVar5,param_1[7]);
      FUN_1801fc450(uVar2,10);
    }
  }
  local_178 = local_a0;
  *(undefined ***)(local_140 + (longlong)*(int *)(local_148 + 4) + -8) =
       vftable_std_std_D_DU__char_traits___basic_ofstream;
  *(int *)((longlong)&iStack_14c + (longlong)*(int *)(local_148 + 4)) =
       *(int *)(local_148 + 4) + -0xa8;
  FUN_18020f850(local_140);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (local_138);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_a0);
  FUN_18021e290(local_38);
  return;
}


)B180134830",
    "2543973d9e69f68cceb7409b90c2b4dc390698bb2bc94628448d04318afa86cc",
    R"F180134830C(FUN_180065cd0
FUN_180067d80
FUN_180133bf0
FUN_1801fc280
FUN_1801fc450
FUN_1802022a0
FUN_18020f850
FUN_180210c60
FUN_18021e290)F180134830C",
    R"F180134830D(DAT_1803da4c0)F180134830D",
    R"F180134830T("# mayrrX64 Steam refresh tokens - account<TAB>steamid64<TAB>DPAPI blob (hex)\\n"
"# encrypted for THIS Windows user on THIS machine; worthless if copied elsewhere\\n")F180134830T",
    R"F180134830F(39: if (*(int *)(local_138 + *(int *)(local_148 + 4)) == 0) {
46: for (param_1 = (undefined8 *)*param_1; param_1 != puVar1; param_1 = param_1 + 9) {
48: if (0xf < (ulonglong)param_1[3]) {
56: if (0xf < (ulonglong)param_1[8]) {
73: return;)F180134830F",
    R"F180134830U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180134830U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180134830() noexcept {
    return kFunction_0x180134830;
}

// 0x180134a00 FUN_180134a00
// source: re/dump/decompile/0x180134a00_FUN_180134a00.c
// size: 1291 bytes; thunk: false
// body sha256: ab39710c76e0eb2e2acfe5d2519312901742824f88224b87256c15741eb2d515
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180134a00{
    "0x180134a00",
    "FUN_180134a00",
    R"F180134a00S(undefined FUN_180134a00())F180134a00S",
    R"B180134a00(// 0x180134a00  FUN_180134a00
// size=1291 thunk=false
// signature: undefined FUN_180134a00()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180134a00(longlong param_1,longlong param_2,BYTE *param_3)

{
  char *pcVar1;
  byte bVar2;
  size_t _Size;
  code *pcVar3;
  bool bVar4;
  byte *pbVar5;
  undefined8 ****ppppuVar6;
  size_t sVar7;
  BOOL BVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *****pppppuVar12;
  byte *pbVar13;
  ulonglong uVar14;
  DATA_BLOB *_Buf1;
  DATA_BLOB *pDVar15;
  undefined1 *puVar16;
  DATA_BLOB *pDVar17;
  undefined1 auStackY_1f8 [8];
  undefined1 auStackY_1f0 [24];
  undefined8 ****local_1b0;
  undefined8 uStack_1a8;
  ulonglong local_1a0;
  ulonglong local_198;
  BYTE ****local_190;
  longlong lStack_188;
  longlong local_180;
  ulonglong uStack_178;
  longlong local_170;
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  DATA_BLOB *local_128;
  BYTE *local_120;
  DATA_BLOB local_118;
  DATA_BLOB local_108 [2];
  DATA_BLOB *local_e8;
  DATA_BLOB *pDStack_e0;
  DATA_BLOB *local_d8;
  byte *local_d0;
  byte *pbStack_c8;
  longlong local_c0;
  undefined8 ****local_b8 [2];
  size_t local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  puVar16 = auStackY_1f8;
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStackY_1f8;
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_3 + 0x10) == 0)) {
    uVar14 = local_48 & 0xffffffffffffff00;
    puVar16 = auStackY_1f8;
    goto LAB_180134ee1;
  }
  local_d0 = (byte *)0x0;
  pbStack_c8 = (byte *)0x0;
  local_c0 = 0;
  local_128 = (DATA_BLOB *)local_168;
  local_170 = param_2;
  uVar10 = FUN_18016d4c0(local_168,param_1);
  uVar10 = FUN_180133a10(local_148,uVar10);
  plVar11 = (longlong *)FUN_18022a630(uVar10);
  local_190 = (BYTE ****)*plVar11;
  lStack_188 = plVar11[1];
  local_180 = plVar11[2];
  uStack_178 = plVar11[3];
  plVar11[2] = 0;
  plVar11[3] = 0xf;
  *(undefined1 *)plVar11 = 0;
  FUN_18020e450(local_148);
  local_108[0].cbData = *(DWORD *)(param_3 + 0x10);
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    param_3 = *(BYTE **)param_3;
  }
  local_118.cbData = (DWORD)local_180;
  local_118.pbData = (BYTE *)&local_190;
  if (0xf < uStack_178) {
    local_118.pbData = (BYTE *)local_190;
  }
  local_128 = (DATA_BLOB *)((ulonglong)local_128 & 0xffffffff00000000);
  local_120 = (BYTE *)0x0;
  pDVar17 = &local_118;
  if (local_180 == 0) {
    pDVar17 = (DATA_BLOB *)0x0;
  }
  local_108[0].pbData = param_3;
  BVar8 = CryptProtectData(local_108,L"mayrrX64 Steam token",pDVar17,(PVOID)0x0,
                           (CRYPTPROTECT_PROMPTSTRUCT *)0x0,0,(DATA_BLOB *)&local_128);
  if (BVar8 == 0) {
    bVar4 = true;
  }
  else {
    FUN_1802133e0(&local_d0,local_120,(ulonglong)local_128 & 0xffffffff);
    if (local_120 != (BYTE *)0x0) {
      LocalFree(local_120);
    }
    bVar4 = false;
  }
  FUN_18020e450(&local_190);
  if (bVar4) {
    uVar14 = 0;
  }
  else {
    local_128 = local_108;
    uVar10 = FUN_18016d4c0(local_108,param_1);
    FUN_180133a10(local_b8,uVar10);
    local_e8 = (DATA_BLOB *)0x0;
    pDStack_e0 = (DATA_BLOB *)0x0;
    local_d8 = (DATA_BLOB *)0x0;
    FUN_1801342d0(&local_e8);
    uVar14 = local_a0;
    sVar7 = local_a8;
    ppppuVar6 = local_b8[0];
    pDVar17 = pDStack_e0;
    pDVar15 = local_e8;
    if (local_e8 == pDStack_e0) {
LAB_180134c5b:
      uStack_90 = 0;
      local_88 = 0;
      local_80 = 0xf;
      local_98 = 0;
      local_78 = 0;
      uStack_68 = 0;
      local_60 = 0;
      local_58 = 0xf;
      local_70 = 0;
      pppppuVar12 = local_b8;
      if (0xf < local_a0) {
        pppppuVar12 = (undefined8 *****)local_b8[0];
      }
      FUN_180212700(&local_98,pppppuVar12,local_a8);
      pDVar17 = pDStack_e0;
      if (pDStack_e0 == local_d8) {
        FUN_180224fe0(&local_e8,pDStack_e0,&local_98);
      }
      else {
        local_128 = pDStack_e0;
        FUN_18016d4c0(pDStack_e0,&local_98);
        *(undefined8 *)(pDVar17 + 2) = local_78;
        FUN_18016d4c0(&pDVar17[2].pbData,&local_70);
        pDStack_e0 = (DATA_BLOB *)&pDStack_e0[4].pbData;
      }
      pDVar15 = (DATA_BLOB *)&pDStack_e0[-5].pbData;
      FUN_18020e450(&local_70);
      FUN_18020e450(&local_98);
    }
    else {
      do {
        pppppuVar12 = local_b8;
        if (0xf < uVar14) {
          pppppuVar12 = (undefined8 *****)ppppuVar6;
        }
        _Size = *(size_t *)(pDVar15 + 1);
        _Buf1 = pDVar15;
        if ((BYTE *)0xf < pDVar15[1].pbData) {
          _Buf1 = *(DATA_BLOB **)pDVar15;
        }
      } while (((_Size != sVar7) ||
               ((_Size != 0 && (iVar9 = memcmp(_Buf1,pppppuVar12,_Size), iVar9 != 0)))) &&
              (pDVar15 = (DATA_BLOB *)&pDVar15[4].pbData, pDVar15 != pDVar17));
      param_2 = local_170;
      if (pDVar15 == pDVar17) goto LAB_180134c5b;
    }
    if (param_2 != 0) {
      *(longlong *)(pDVar15 + 2) = param_2;
    }
    uStack_1a8 = 0;
    local_1a0 = 0;
    local_198 = 0xf;
    local_1b0 = (undefined8 *****)0x0;
    if (0xf < (ulonglong)(((longlong)pbStack_c8 - (longlong)local_d0) * 2)) {
      FUN_18021aa80(&local_1b0);
    }
    pbVar5 = pbStack_c8;
    local_1a0 = 0;
    uVar14 = local_1a0;
    for (pbVar13 = local_d0; local_1a0 = uVar14, pbVar13 != pbVar5; pbVar13 = pbVar13 + 1) {
      bVar2 = *pbVar13;
      if (uVar14 < local_198) {
        local_1a0 = uVar14 + 1;
        pppppuVar12 = &local_1b0;
        if (0xf < local_198) {
          pppppuVar12 = (undefined8 *****)local_1b0;
        }
        *(char *)((longlong)pppppuVar12 + uVar14) = "0123456789abcdef"[bVar2 >> 4];
        *(undefined1 *)((longlong)pppppuVar12 + uVar14 + 1) = 0;
      }
      else {
        FUN_18021abd0(&local_1b0);
      }
      uVar14 = local_1a0;
      if (local_1a0 < local_198) {
        pppppuVar12 = &local_1b0;
        if (0xf < local_198) {
          pppppuVar12 = (undefined8 *****)local_1b0;
        }
        pcVar1 = (char *)((longlong)pppppuVar12 + local_1a0);
        local_1a0 = local_1a0 + 1;
        *pcVar1 = "0123456789abcdef"[bVar2 & 0xf];
        *(undefined1 *)((longlong)pppppuVar12 + uVar14 + 1) = 0;
      }
      else {
        FUN_18021abd0(&local_1b0);
      }
      uVar14 = local_1a0;
    }
    FUN_18020e8a0(&pDVar15[2].pbData,&local_1b0);
    FUN_18020e450(&local_1b0);
    FUN_180134830(&local_e8);
    uVar14 = 1;
    FUN_18020ad50(&local_e8);
    FUN_18020e450(local_b8);
  }
  if (local_d0 != (byte *)0x0) {
    pbVar13 = local_d0;
    puVar16 = auStackY_1f8;
    if ((0xfff < (ulonglong)(local_c0 - (longlong)local_d0)) &&
       (pbVar13 = *(byte **)(local_d0 + -8), puVar16 = auStackY_1f8,
       (byte *)0x1f < local_d0 + (-8 - (longlong)pbVar13))) {
      pcVar3 = (code *)swi(0x29);
      pbVar13 = (byte *)(*pcVar3)(5);
      puVar16 = auStackY_1f0;
    }
    *(undefined8 *)(puVar16 + -8) = 0x180134ece;
    free(pbVar13);
  }
LAB_180134ee1:
  *(undefined8 *)(puVar16 + -8) = 0x180134ef0;
  return uVar14;
}


)B180134a00",
    "ab39710c76e0eb2e2acfe5d2519312901742824f88224b87256c15741eb2d515",
    R"F180134a00C(FUN_180133a10
FUN_1801342d0
FUN_180134830
FUN_18016d4c0
FUN_18020ad50
FUN_18020e450
FUN_18020e8a0
FUN_180212700
FUN_1802133e0
FUN_18021aa80
FUN_18021abd0
FUN_180224fe0
FUN_18022a630)F180134a00C",
    R"F180134a00D(LAB_180134c5b
LAB_180134ee1
DAT_1803da4c0)F180134a00D",
    R"F180134a00T("0123456789abcdef"
"mayrrX64 Steam token")F180134a00T",
    R"F180134a00F(70: if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_3 + 0x10) == 0)) {
73: goto LAB_180134ee1;
92: if (0xf < *(ulonglong *)(param_3 + 0x18)) {
97: if (0xf < uStack_178) {
103: if (local_180 == 0) {
109: if (BVar8 == 0) {
112: else {
114: if (local_120 != (BYTE *)0x0) {
120: if (bVar4) {
123: else {
136: if (local_e8 == pDStack_e0) {
137: LAB_180134c5b:
148: if (0xf < local_a0) {
153: if (pDStack_e0 == local_d8) {
156: else {
167: else {
168: do {
170: if (0xf < uVar14) {
175: if ((BYTE *)0xf < pDVar15[1].pbData) {
182: if (pDVar15 == pDVar17) goto LAB_180134c5b;
184: if (param_2 != 0) {
191: if (0xf < (ulonglong)(((longlong)pbStack_c8 - (longlong)local_d0) * 2)) {
197: for (pbVar13 = local_d0; local_1a0 = uVar14, pbVar13 != pbVar5; pbVar13 = pbVar13 + 1) {
199: if (uVar14 < local_198) {
202: if (0xf < local_198) {
208: else {
212: if (local_1a0 < local_198) {
214: if (0xf < local_198) {
222: else {
234: if (local_d0 != (byte *)0x0) {
237: if ((0xfff < (ulonglong)(local_c0 - (longlong)local_d0)) &&
247: LAB_180134ee1:
249: return uVar14;)F180134a00F",
    R"F180134a00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180134c5b.
TODO: recover the declaration, type and value for global/data reference LAB_180134ee1.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 240: pcVar3 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 241: pbVar13 = (byte *)(*pcVar3)(5);.)F180134a00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180134a00() noexcept {
    return kFunction_0x180134a00;
}

// 0x180134f10 FUN_180134f10
// source: re/dump/decompile/0x180134f10_FUN_180134f10.c
// size: 496 bytes; thunk: false
// body sha256: fcff5240c1089e710ef2a7e7cb7a3cf8947d1946db87fc82d2295508b8602a24
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180134f10{
    "0x180134f10",
    "FUN_180134f10",
    R"F180134f10S(undefined FUN_180134f10())F180134f10S",
    R"B180134f10(// 0x180134f10  FUN_180134f10
// size=496 thunk=false
// signature: undefined FUN_180134f10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180134f10(undefined8 param_1)

{
  size_t sVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 ******ppppppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 ******ppppppuVar11;
  undefined8 *puVar12;
  size_t sVar13;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 local_b0 [4];
  undefined8 *local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 *****local_78 [2];
  size_t local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  local_b8 = local_b0;
  uVar4 = FUN_18016d4c0(local_b0,param_1);
  FUN_180133a10(local_78,uVar4);
  local_90 = (undefined8 *)0x0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  FUN_1801342d0(&local_90);
  uVar10 = local_60;
  sVar13 = local_68;
  ppppppuVar11 = (undefined8 ******)local_78[0];
  puVar9 = puStack_88;
  for (puVar8 = local_90; puVar8 != puVar9; puVar8 = puVar8 + 9) {
    ppppppuVar7 = local_78;
    if (0xf < uVar10) {
      ppppppuVar7 = ppppppuVar11;
    }
    sVar1 = puVar8[2];
    puVar5 = puVar8;
    if (0xf < (ulonglong)puVar8[3]) {
      puVar5 = (undefined8 *)*puVar8;
    }
    if ((sVar1 == sVar13) &&
       ((sVar1 == 0 || (iVar3 = memcmp(puVar5,ppppppuVar7,sVar1), iVar3 == 0)))) break;
  }
  puVar5 = puStack_88;
  if (puVar8 != puVar9) {
    puVar5 = puVar8 + 9;
    puVar6 = puVar9;
    puVar12 = puVar9;
    if (puVar5 != puVar9) {
      do {
        ppppppuVar7 = local_78;
        if (0xf < uVar10) {
          ppppppuVar7 = ppppppuVar11;
        }
        sVar1 = puVar5[2];
        puVar6 = puVar5;
        if (0xf < (ulonglong)puVar5[3]) {
          puVar6 = (undefined8 *)*puVar5;
        }
        if ((sVar1 != sVar13) ||
           ((sVar1 != 0 && (iVar3 = memcmp(puVar6,ppppppuVar7,sVar1), iVar3 != 0)))) {
          FUN_18020e8a0(puVar8,puVar5);
          puVar8[4] = puVar5[4];
          FUN_18020e8a0(puVar8 + 5,puVar5 + 5);
          puVar8 = puVar8 + 9;
          uVar10 = local_60;
          ppppppuVar11 = (undefined8 ******)local_78[0];
          sVar13 = local_68;
        }
        puVar5 = puVar5 + 9;
      } while (puVar5 != puVar9);
      puVar5 = puStack_88;
      puVar6 = puStack_88;
      puVar12 = puStack_88;
      if (puVar8 == puVar9) goto LAB_1801350c3;
    }
    for (; puVar2 = puVar8, puVar9 != puVar12; puVar9 = puVar9 + 9) {
      FUN_18020e8a0(puVar8,puVar9);
      puVar8[4] = puVar9[4];
      FUN_18020e8a0(puVar8 + 5,puVar9 + 5);
      puVar8 = puVar8 + 9;
      puVar6 = puStack_88;
    }
    for (; local_b8 = puVar2, puVar5 = puVar8, puVar2 != puVar6; puVar2 = puVar2 + 9) {
      FUN_18020e450(puVar2 + 5);
      FUN_18020e450(puVar2);
    }
  }
LAB_1801350c3:
  puStack_88 = puVar5;
  FUN_180134830(&local_90);
  FUN_18020ad50(&local_90);
  FUN_18020e450(local_78);
  return;
}


)B180134f10",
    "fcff5240c1089e710ef2a7e7cb7a3cf8947d1946db87fc82d2295508b8602a24",
    R"F180134f10C(FUN_180133a10
FUN_1801342d0
FUN_180134830
FUN_18016d4c0
FUN_18020ad50
FUN_18020e450
FUN_18020e8a0)F180134f10C",
    R"F180134f10D(LAB_1801350c3
DAT_1803da4c0)F180134f10D",
    R"F180134f10T()F180134f10T",
    R"F180134f10F(48: for (puVar8 = local_90; puVar8 != puVar9; puVar8 = puVar8 + 9) {
50: if (0xf < uVar10) {
55: if (0xf < (ulonglong)puVar8[3]) {
58: if ((sVar1 == sVar13) &&
62: if (puVar8 != puVar9) {
66: if (puVar5 != puVar9) {
67: do {
69: if (0xf < uVar10) {
74: if (0xf < (ulonglong)puVar5[3]) {
77: if ((sVar1 != sVar13) ||
92: if (puVar8 == puVar9) goto LAB_1801350c3;
94: for (; puVar2 = puVar8, puVar9 != puVar12; puVar9 = puVar9 + 9) {
101: for (; local_b8 = puVar2, puVar5 = puVar8, puVar2 != puVar6; puVar2 = puVar2 + 9) {
106: LAB_1801350c3:
111: return;)F180134f10F",
    R"F180134f10U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1801350c3.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180134f10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180134f10() noexcept {
    return kFunction_0x180134f10;
}

// 0x180135100 FUN_180135100
// source: re/dump/decompile/0x180135100_FUN_180135100.c
// size: 1171 bytes; thunk: false
// body sha256: 7af488fe3c6253884e526c7c27a9130ff6f79dd16529b31615575beb717ecb52
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180135100{
    "0x180135100",
    "FUN_180135100",
    R"F180135100S(undefined FUN_180135100())F180135100S",
    R"B180135100(// 0x180135100  FUN_180135100
// size=1171 thunk=false
// signature: undefined FUN_180135100()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180135100(undefined8 *param_1,undefined8 param_2)

{
  byte *****pppppbVar1;
  byte bVar2;
  undefined8 *puVar3;
  size_t _Size;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  void *pvVar12;
  undefined8 *_Buf1;
  undefined8 *****_Buf2;
  byte *****pppppbVar13;
  uint uVar14;
  uint uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  void *pvVar18;
  undefined8 uStack_190;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  byte ***local_160;
  byte ***pppbStack_158;
  ulonglong local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 *local_f8;
  undefined8 local_f0 [4];
  undefined1 local_d0 [32];
  void *local_b0;
  longlong lStack_a8;
  longlong local_a0;
  byte ****local_98 [2];
  ulonglong local_88;
  ulonglong local_80;
  undefined8 ****local_78 [2];
  size_t local_68;
  ulonglong local_60;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  puVar16 = auStack_188;
  puVar17 = auStack_188;
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  local_168 = 0;
  local_120 = &local_140;
  local_f8 = param_1;
  uVar7 = FUN_18016d4c0(&local_140);
  FUN_180133a10(local_78,uVar7);
  puVar8 = (undefined8 *)FUN_1801342d0(local_58);
  puVar3 = (undefined8 *)puVar8[1];
  for (puVar8 = (undefined8 *)*puVar8; puVar8 != puVar3; puVar8 = puVar8 + 9) {
    _Buf2 = local_78;
    if (0xf < local_60) {
      _Buf2 = (undefined8 *****)local_78[0];
    }
    _Size = puVar8[2];
    _Buf1 = puVar8;
    if (0xf < (ulonglong)puVar8[3]) {
      _Buf1 = (undefined8 *)*puVar8;
    }
    if ((_Size == local_68) && ((_Size == 0 || (iVar6 = memcmp(_Buf1,_Buf2,_Size), iVar6 == 0)))) {
      local_b0 = (void *)0x0;
      lStack_a8 = 0;
      pvVar12 = (void *)0x0;
      local_a0 = 0;
      cVar5 = FUN_180133af0(puVar8 + 5,&local_b0);
      if (cVar5 == '\0') {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0xf;
        *(undefined1 *)param_1 = 0;
        local_168 = 1;
        puVar17 = auStack_188;
        goto LAB_180135530;
      }
      local_120 = local_f0;
      uVar7 = FUN_18016d4c0(local_f0,param_2);
      uVar7 = FUN_180133a10(local_d0,uVar7);
      puVar8 = (undefined8 *)FUN_18022a630(uVar7);
      local_118 = *puVar8;
      uStack_110 = puVar8[1];
      local_108 = puVar8[2];
      uStack_100 = puVar8[3];
      puVar8[2] = 0;
      puVar8[3] = 0xf;
      *(undefined1 *)puVar8 = 0;
      local_168 = 8;
      FUN_18020e450(local_d0);
      FUN_180132610(local_98,local_b0,lStack_a8 - (longlong)local_b0,&local_118);
      local_168 = 0;
      FUN_18020e450(&local_118);
      if (local_88 < 0x28) goto LAB_1801354b8;
      pppppbVar13 = local_98;
      if (0xf < local_80) {
        pppppbVar13 = (byte *****)local_98[0];
      }
      if (*(byte *)pppppbVar13 != 0x65) goto LAB_1801354b8;
      pppppbVar13 = local_98;
      if (0xf < local_80) {
        pppppbVar13 = (byte *****)local_98[0];
      }
      if (*(byte *)((longlong)pppppbVar13 + 1) != 0x79) goto LAB_1801354b8;
      pppppbVar13 = (byte *****)local_98[0];
      if (local_80 < 0x10) {
        pppppbVar13 = local_98;
      }
      pppppbVar1 = (byte *****)((longlong)pppppbVar13 + local_88);
      pvVar18 = pvVar12;
      if (pppppbVar13 == pppppbVar1) goto LAB_1801353be;
      goto LAB_180135390;
    }
  }
  FUN_18020ad50(local_58);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_168 = 1;
  puVar17 = auStack_188;
  goto LAB_1801351e5;
LAB_180135390:
  do {
    bVar2 = *(byte *)pppppbVar13;
    if (bVar2 == 0x2e) {
      pvVar18 = (void *)(ulonglong)((int)pvVar18 + 1);
    }
    else if (((0x32 < (byte)(bVar2 - 0x2d)) ||
             ((0x43ffffff01ff9U >> ((ulonglong)(bVar2 - 0x2d) & 0x3f) & 1) == 0)) &&
            (0x19 < (byte)(bVar2 + 0x9f))) goto LAB_1801354b8;
    pppppbVar13 = (byte *****)((longlong)pppppbVar13 + 1);
  } while (pppppbVar13 != pppppbVar1);
LAB_1801353be:
  if ((int)pvVar18 < 2) {
LAB_1801354b8:
    uStack_138 = 0;
    local_130 = 0;
    local_128 = 0xf;
    local_140 = 0;
    puVar8 = &local_140;
    uVar14 = 4;
  }
  else {
    local_160 = (byte ***)0x0;
    pppbStack_158 = (byte ***)0x0;
    local_150 = 0;
    local_148 = 0;
    pppppbVar13 = local_98;
    if (0xf < local_80) {
      pppppbVar13 = (byte *****)local_98[0];
    }
    if (0x7fffffffffffffff < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    if (local_88 < 0x10) {
      local_150 = local_88;
      local_148 = 0xf;
      local_160 = (byte ***)*pppppbVar13;
      pppbStack_158 = (byte ***)pppppbVar13[1];
      puVar16 = auStack_188;
    }
    else {
      uVar9 = local_88 | 0xf;
      if (uVar9 < 0x8000000000000000) goto LAB_180135448;
      uVar10 = 0x8000000000000027;
      puVar16 = auStack_188;
      uVar9 = 0x7fffffffffffffff;
      while( true ) {
        *(undefined8 *)(puVar16 + -8) = 0x180135439;
        lVar11 = FUN_1802d8350(uVar10);
        if (lVar11 != 0) break;
        pcVar4 = (code *)swi(0x29);
        uVar9 = (*pcVar4)(5);
        puVar16 = puVar16 + 8;
LAB_180135448:
        if (uVar9 < 0x16) {
          uVar9 = 0x16;
        }
        if (uVar9 == 0xffffffffffffffff) goto LAB_180135490;
        if (uVar9 + 1 < 0x1000) {
          *(undefined8 *)(puVar16 + -8) = 0x180135490;
          pvVar12 = (void *)FUN_1802d8350();
          goto LAB_180135490;
        }
        uVar10 = uVar9 + 0x28;
        if (uVar10 <= uVar9 + 1) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar16 + -8) = &UNK_180135594;
          FUN_180012fe0();
        }
      }
      pvVar12 = (void *)(lVar11 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)pvVar12 - 8) = lVar11;
LAB_180135490:
      *(void **)(puVar16 + 0x28) = pvVar12;
      *(ulonglong *)(puVar16 + 0x38) = local_88;
      *(ulonglong *)(puVar16 + 0x40) = uVar9;
      *(undefined8 *)(puVar16 + -8) = 0x1801354ae;
      memcpy(pvVar12,pppppbVar13,local_88 + 1);
    }
    puVar8 = (undefined8 *)(puVar16 + 0x28);
    uVar14 = 2;
    puVar17 = puVar16;
  }
  *(uint *)(puVar17 + 0x20) = uVar14;
  *(undefined8 *)(puVar17 + -8) = 0x1801354f1;
  FUN_18016d4c0(param_1,puVar8);
  uVar15 = uVar14 | 1;
  *(uint *)(puVar17 + 0x20) = uVar15;
  if ((uVar14 & 4) != 0) {
    uVar15 = uVar14 & 0xfffffffb | 1;
    *(uint *)(puVar17 + 0x20) = uVar15;
    *(undefined8 *)(puVar17 + -8) = 0x18013550e;
    FUN_18020e450(puVar17 + 0x48);
  }
  if ((uVar15 & 2) != 0) {
    *(uint *)(puVar17 + 0x20) = uVar15 & 0xfffffffd;
    *(undefined8 *)(puVar17 + -8) = 0x180135525;
    FUN_18020e450(puVar17 + 0x28);
  }
  *(undefined8 *)(puVar17 + -8) = 0x18013552f;
  FUN_18020e450(local_98);
LAB_180135530:
  if (local_b0 != (void *)0x0) {
    pvVar12 = local_b0;
    if ((0xfff < (ulonglong)(local_a0 - (longlong)local_b0)) &&
       (pvVar12 = *(void **)((longlong)local_b0 + -8),
       0x1f < (ulonglong)((longlong)local_b0 + (-8 - (longlong)pvVar12)))) {
      pcVar4 = (code *)swi(0x29);
      pvVar12 = (void *)(*pcVar4)(5);
      puVar17 = puVar17 + 8;
    }
    *(undefined8 *)(puVar17 + -8) = 0x18013556f;
    free(pvVar12);
    local_a0 = 0;
    local_b0 = (void *)0x0;
    lStack_a8 = 0;
  }
  *(undefined8 *)(puVar17 + -8) = 0x180135584;
  FUN_18020ad50(local_58);
LAB_1801351e5:
  *(undefined8 *)(puVar17 + -8) = 0x1801351ee;
  FUN_18020e450(local_78);
  *(undefined8 *)(puVar17 + -8) = 0x1801351fd;
  return param_1;
}


)B180135100",
    "7af488fe3c6253884e526c7c27a9130ff6f79dd16529b31615575beb717ecb52",
    R"F180135100C(FUN_180012fe0
FUN_1800130a0
FUN_180132610
FUN_180133a10
FUN_180133af0
FUN_1801342d0
FUN_18016d4c0
FUN_18020ad50
FUN_18020e450
FUN_18022a630
FUN_1802d8350)F180135100C",
    R"F180135100D(LAB_1801351e5
LAB_180135390
LAB_1801353be
LAB_180135448
LAB_180135490
LAB_1801354b8
LAB_180135530
UNK_180135594
DAT_1803da4c0)F180135100D",
    R"F180135100T()F180135100T",
    R"F180135100F(74: for (puVar8 = (undefined8 *)*puVar8; puVar8 != puVar3; puVar8 = puVar8 + 9) {
76: if (0xf < local_60) {
81: if (0xf < (ulonglong)puVar8[3]) {
84: if ((_Size == local_68) && ((_Size == 0 || (iVar6 = memcmp(_Buf1,_Buf2,_Size), iVar6 == 0)))) {
90: if (cVar5 == '\0') {
98: goto LAB_180135530;
116: if (local_88 < 0x28) goto LAB_1801354b8;
118: if (0xf < local_80) {
121: if (*(byte *)pppppbVar13 != 0x65) goto LAB_1801354b8;
123: if (0xf < local_80) {
126: if (*(byte *)((longlong)pppppbVar13 + 1) != 0x79) goto LAB_1801354b8;
128: if (local_80 < 0x10) {
133: if (pppppbVar13 == pppppbVar1) goto LAB_1801353be;
134: goto LAB_180135390;
145: goto LAB_1801351e5;
146: LAB_180135390:
147: do {
149: if (bVar2 == 0x2e) {
152: else if (((0x32 < (byte)(bVar2 - 0x2d)) ||
157: LAB_1801353be:
158: if ((int)pvVar18 < 2) {
159: LAB_1801354b8:
167: else {
173: if (0xf < local_80) {
176: if (0x7fffffffffffffff < local_88) {
180: if (local_88 < 0x10) {
187: else {
189: if (uVar9 < 0x8000000000000000) goto LAB_180135448;
193: while( true ) {
196: if (lVar11 != 0) break;
200: LAB_180135448:
201: if (uVar9 < 0x16) {
204: if (uVar9 == 0xffffffffffffffff) goto LAB_180135490;
205: if (uVar9 + 1 < 0x1000) {
208: goto LAB_180135490;
211: if (uVar10 <= uVar9 + 1) {
219: LAB_180135490:
235: if ((uVar14 & 4) != 0) {
241: if ((uVar15 & 2) != 0) {
248: LAB_180135530:
249: if (local_b0 != (void *)0x0) {
251: if ((0xfff < (ulonglong)(local_a0 - (longlong)local_b0)) &&
266: LAB_1801351e5:
270: return param_1;)F180135100F",
    R"F180135100U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1801351e5.
TODO: recover the declaration, type and value for global/data reference LAB_180135390.
TODO: recover the declaration, type and value for global/data reference LAB_1801353be.
TODO: recover the declaration, type and value for global/data reference LAB_180135448.
TODO: recover the declaration, type and value for global/data reference LAB_180135490.
TODO: recover the declaration, type and value for global/data reference LAB_1801354b8.
TODO: recover the declaration, type and value for global/data reference LAB_180135530.
TODO: recover the declaration, type and value for global/data reference UNK_180135594.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 197: pcVar4 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 198: uVar9 = (*pcVar4)(5);.
TODO: resolve the indirect call in body 254: pcVar4 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 255: pvVar12 = (void *)(*pcVar4)(5);.)F180135100U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180135100() noexcept {
    return kFunction_0x180135100;
}

// 0x1801355a0 FUN_1801355a0
// source: re/dump/decompile/0x1801355a0_FUN_1801355a0.c
// size: 116 bytes; thunk: false
// body sha256: 1d64d1b4274ea54aaf8415137cea9c95f7c1df606f88a59564ddb44c6f86b28a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801355a0{
    "0x1801355a0",
    "FUN_1801355a0",
    R"F1801355a0S(undefined FUN_1801355a0())F1801355a0S",
    R"B1801355a0(// 0x1801355a0  FUN_1801355a0
// size=116 thunk=false
// signature: undefined FUN_1801355a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1801355a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  FUN_1801338c0(local_38,param_1,param_2);
  if (local_28 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_180134a00(param_1,param_2,local_38);
  }
  FUN_18020e450(local_38);
  return uVar1;
}


)B1801355a0",
    "1d64d1b4274ea54aaf8415137cea9c95f7c1df606f88a59564ddb44c6f86b28a",
    R"F1801355a0C(FUN_1801338c0
FUN_180134a00
FUN_18020e450)F1801355a0C",
    R"F1801355a0D(DAT_1803da4c0)F1801355a0D",
    R"F1801355a0T()F1801355a0T",
    R"F1801355a0F(20: if (local_28 == 0) {
23: else {
27: return uVar1;)F1801355a0F",
    R"F1801355a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F1801355a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801355a0() noexcept {
    return kFunction_0x1801355a0;
}

// 0x180135620 FUN_180135620
// source: re/dump/decompile/0x180135620_FUN_180135620.c
// size: 132 bytes; thunk: false
// body sha256: e89f50d84f66e7f4047d4e4159c15316414974b9c02c45b68edaae5692c5e572
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180135620{
    "0x180135620",
    "FUN_180135620",
    R"F180135620S(undefined FUN_180135620())F180135620S",
    R"B180135620(// 0x180135620  FUN_180135620
// size=132 thunk=false
// signature: undefined FUN_180135620()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180135620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  local_58 = 0;
  local_50 = param_1;
  FUN_180135100(local_48);
  if (local_38 == 0) {
    FUN_1801338c0(param_1,param_2,param_3);
  }
  else {
    FUN_18016d4c0(param_1,local_48);
  }
  local_58 = 1;
  FUN_18020e450(local_48);
  return param_1;
}


)B180135620",
    "e89f50d84f66e7f4047d4e4159c15316414974b9c02c45b68edaae5692c5e572",
    R"F180135620C(FUN_1801338c0
FUN_180135100
FUN_18016d4c0
FUN_18020e450)F180135620C",
    R"F180135620D(DAT_1803da4c0)F180135620D",
    R"F180135620T()F180135620T",
    R"F180135620F(23: if (local_38 == 0) {
26: else {
31: return param_1;)F180135620F",
    R"F180135620U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180135620U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180135620() noexcept {
    return kFunction_0x180135620;
}

// 0x1801356b0 FUN_1801356b0
// source: re/dump/decompile/0x1801356b0_FUN_1801356b0.c
// size: 139 bytes; thunk: false
// body sha256: f946e973c430ffa3a75b49703a2baee4af43409ae46f7d1c351fec37a0c8a236
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801356b0{
    "0x1801356b0",
    "FUN_1801356b0",
    R"F1801356b0S(undefined FUN_1801356b0())F1801356b0S",
    R"B1801356b0(// 0x1801356b0  FUN_1801356b0
// size=139 thunk=false
// signature: undefined FUN_1801356b0()
// status: ok


void FUN_1801356b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  
  iVar3 = _Mtx_lock(&DAT_1803e85c0);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_1803e860c == 0x7fffffff) {
    DAT_1803e860c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  if (param_1 != (undefined8 *)&DAT_1803e9e20) {
    puVar1 = param_1 + 2;
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    FUN_180212700(&DAT_1803e9e20,param_1,*puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000180135734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Mtx_unlock(&DAT_1803e85c0);
  return;
}


)B1801356b0",
    "f946e973c430ffa3a75b49703a2baee4af43409ae46f7d1c351fec37a0c8a236",
    R"F1801356b0C(FUN_180212700)F1801356b0C",
    R"F1801356b0D(DAT_1803e85c0
DAT_1803e860c
DAT_1803e9e20)F1801356b0D",
    R"F1801356b0T()F1801356b0T",
    R"F1801356b0F(15: if (iVar3 != 0) {
19: return;
21: if (DAT_1803e860c == 0x7fffffff) {
25: if (param_1 != (undefined8 *)&DAT_1803e9e20) {
27: if (0xf < (ulonglong)param_1[3]) {
35: return;)F1801356b0F",
    R"F1801356b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e860c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e20.
TODO: resolve the indirect call in body 17: pcVar2 = (code *)swi(3);.
TODO: resolve the indirect call in body 18: (*pcVar2)();.)F1801356b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801356b0() noexcept {
    return kFunction_0x1801356b0;
}

// 0x180135740 FUN_180135740
// source: re/dump/decompile/0x180135740_FUN_180135740.c
// size: 143 bytes; thunk: false
// body sha256: 6596f8a2616c321a07396499f70a8e6cc515ab9be1980e64056054b1d86c7bd2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180135740{
    "0x180135740",
    "FUN_180135740",
    R"F180135740S(undefined FUN_180135740())F180135740S",
    R"B180135740(// 0x180135740  FUN_180135740
// size=143 thunk=false
// signature: undefined FUN_180135740()
// status: ok


undefined8
FUN_180135740(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar2 = _Mtx_lock(&DAT_1803e85c0);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (DAT_1803e860c == 0x7fffffff) {
    DAT_1803e860c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  FUN_18016d4c0(param_1,&DAT_1803e9e20,param_3,param_4,uVar4);
  _Mtx_unlock(&DAT_1803e85c0);
  return param_1;
}


)B180135740",
    "6596f8a2616c321a07396499f70a8e6cc515ab9be1980e64056054b1d86c7bd2",
    R"F180135740C(FUN_18016d4c0)F180135740C",
    R"F180135740D(DAT_1803e85c0
DAT_1803e860c
DAT_1803e9e20)F180135740D",
    R"F180135740T()F180135740T",
    R"F180135740F(18: if (iVar2 != 0) {
22: return uVar3;
24: if (DAT_1803e860c == 0x7fffffff) {
30: return param_1;)F180135740F",
    R"F180135740U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e860c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e20.
TODO: resolve the indirect call in body 20: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 21: uVar3 = (*pcVar1)();.)F180135740U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180135740() noexcept {
    return kFunction_0x180135740;
}

// 0x1801357d0 FUN_1801357d0
// source: re/dump/decompile/0x1801357d0_FUN_1801357d0.c
// size: 143 bytes; thunk: false
// body sha256: 43f1a4926a0313e925b61ada0a6b62391b3ced894fa87cfdef5246b5c45b85be
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801357d0{
    "0x1801357d0",
    "FUN_1801357d0",
    R"F1801357d0S(undefined FUN_1801357d0())F1801357d0S",
    R"B1801357d0(// 0x1801357d0  FUN_1801357d0
// size=143 thunk=false
// signature: undefined FUN_1801357d0()
// status: ok


undefined8
FUN_1801357d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar2 = _Mtx_lock(&DAT_1803e85c0);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (DAT_1803e860c == 0x7fffffff) {
    DAT_1803e860c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  FUN_18016d4c0(param_1,&DAT_1803eb340,param_3,param_4,uVar4);
  _Mtx_unlock(&DAT_1803e85c0);
  return param_1;
}


)B1801357d0",
    "43f1a4926a0313e925b61ada0a6b62391b3ced894fa87cfdef5246b5c45b85be",
    R"F1801357d0C(FUN_18016d4c0)F1801357d0C",
    R"F1801357d0D(DAT_1803e85c0
DAT_1803e860c
DAT_1803eb340)F1801357d0D",
    R"F1801357d0T()F1801357d0T",
    R"F1801357d0F(18: if (iVar2 != 0) {
22: return uVar3;
24: if (DAT_1803e860c == 0x7fffffff) {
30: return param_1;)F1801357d0F",
    R"F1801357d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e860c.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb340.
TODO: resolve the indirect call in body 20: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 21: uVar3 = (*pcVar1)();.)F1801357d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801357d0() noexcept {
    return kFunction_0x1801357d0;
}

// 0x180135860 FUN_180135860
// source: re/dump/decompile/0x180135860_FUN_180135860.c
// size: 1751 bytes; thunk: false
// body sha256: f7499848418ec0be0c481a03de0e1aabea776687cc387d6e77ad87ffa6e246ac
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180135860{
    "0x180135860",
    "FUN_180135860",
    R"F180135860S(undefined FUN_180135860())F180135860S",
    R"B180135860(// 0x180135860  FUN_180135860
// size=1751 thunk=false
// signature: undefined FUN_180135860()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180135860(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  DWORD DVar3;
  size_t sVar4;
  void **ppvVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined1 auStack_688 [8];
  undefined1 auStack_680 [24];
  wchar_t *local_668;
  undefined4 local_658;
  undefined8 *local_650;
  undefined **local_648;
  undefined8 *local_640;
  undefined8 *local_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 local_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined1 local_528 [32];
  undefined1 local_508 [32];
  undefined1 local_4e8 [32];
  undefined1 local_4c8 [32];
  undefined1 local_4a8 [32];
  undefined1 local_488 [32];
  void *local_468;
  void *pvStack_460;
  void *local_458;
  void *pvStack_450;
  wchar_t local_448 [264];
  WCHAR local_238 [264];
  ulonglong local_28;
  
  puVar9 = auStack_688;
  puVar10 = auStack_688;
  puVar11 = auStack_688;
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_688;
  local_658 = 0;
  local_530 = param_1;
  memset(local_448,0,0x208);
  pvStack_460 = (void *)0x0;
  local_458 = (void *)0x0;
  pvStack_450 = (void *)0x7;
  local_468 = (void *)0x0;
  local_668 = local_448;
  iVar2 = SHGetFolderPathW(0,0x8005,0,0);
  if (iVar2 < 0) {
    memset(local_238,0,0x208);
    DVar3 = GetEnvironmentVariableW(L"USERPROFILE",local_238,0x104);
    if (DVar3 == 0) {
      local_650 = &local_590;
      local_590 = 0;
      uStack_588 = 0;
      local_580 = 0;
      local_578 = 0;
      FUN_180211510(&local_590,L"mayrrX64",8);
      local_658 = 0;
      local_650 = (undefined8 *)0x0;
      local_648 = &PTR_vftable_std__System_error_category_1803e9500;
      uVar13 = FUN_180067fd0(local_528,&local_650);
      local_658 = 0x20000;
      if ((int)local_650 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1800670a0(uVar13,&local_650);
      }
      ppvVar5 = (void **)FUN_180066720(local_4a8,local_528,&local_590);
      puVar12 = auStack_688;
      if (&local_468 != ppvVar5) {
        if ((void *)0x7 < pvStack_450) {
          pvVar7 = local_468;
          puVar11 = auStack_688;
          if ((0xfff < (longlong)pvStack_450 * 2 + 2U) &&
             (pvVar7 = *(void **)((longlong)local_468 + -8), puVar11 = auStack_688,
             0x1f < (ulonglong)((longlong)local_468 + (-8 - (longlong)pvVar7)))) {
            pvVar7 = (void *)0x5;
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)();
            puVar11 = auStack_680;
          }
          *(undefined8 *)(puVar11 + -8) = 0x180135dae;
          free(pvVar7);
        }
        local_468 = *ppvVar5;
        pvStack_460 = ppvVar5[1];
        local_458 = ppvVar5[2];
        pvStack_450 = ppvVar5[3];
        ppvVar5[2] = (void *)0x0;
        ppvVar5[3] = (void *)0x7;
        *(undefined2 *)ppvVar5 = 0;
        puVar12 = puVar11;
      }
      *(undefined8 *)(puVar12 + -8) = 0x180135df9;
      FUN_18021e290(local_4a8);
      *(undefined4 *)(puVar12 + 0x30) = 0;
      *(undefined8 *)(puVar12 + -8) = 0x180135e0a;
      FUN_18021e290(local_528);
      puVar8 = &local_590;
    }
    else {
      local_640 = &local_5b0;
      local_5b0 = 0;
      uStack_5a8 = 0;
      local_5a0 = 0;
      local_598 = 0;
      FUN_180211510(&local_5b0,L"mayrrX64",8);
      local_658 = 0;
      local_638 = &local_5d0;
      local_5d0 = 0;
      uStack_5c8 = 0;
      local_5c0 = 0;
      local_5b8 = 0;
      FUN_180211510(&local_5d0,L"Documents",9);
      local_658 = 0;
      local_650 = &local_5f0;
      sVar4 = wcslen(local_238);
      local_5f0 = 0;
      uStack_5e8 = 0;
      local_5e0 = 0;
      local_5d8 = 0;
      FUN_180211510(&local_5f0,local_238,sVar4);
      local_658 = 0;
      uVar6 = FUN_180066720(local_4c8,&local_5f0,&local_5d0);
      ppvVar5 = (void **)FUN_180066720(local_4e8,uVar6,&local_5b0);
      puVar12 = auStack_688;
      if (&local_468 != ppvVar5) {
        if ((void *)0x7 < pvStack_450) {
          pvVar7 = local_468;
          puVar10 = auStack_688;
          if ((0xfff < (longlong)pvStack_450 * 2 + 2U) &&
             (pvVar7 = *(void **)((longlong)local_468 + -8), puVar10 = auStack_688,
             0x1f < (ulonglong)((longlong)local_468 + (-8 - (longlong)pvVar7)))) {
            pvVar7 = (void *)0x5;
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)();
            puVar10 = auStack_680;
          }
          *(undefined8 *)(puVar10 + -8) = 0x180135c42;
          free(pvVar7);
        }
        local_468 = *ppvVar5;
        pvStack_460 = ppvVar5[1];
        local_458 = ppvVar5[2];
        pvStack_450 = ppvVar5[3];
        ppvVar5[2] = (void *)0x0;
        ppvVar5[3] = (void *)0x7;
        *(undefined2 *)ppvVar5 = 0;
        puVar12 = puVar10;
      }
      *(undefined8 *)(puVar12 + -8) = 0x180135c8d;
      FUN_18021e290(local_4e8);
      *(undefined8 *)(puVar12 + -8) = 0x180135c9a;
      FUN_18021e290(local_4c8);
      *(undefined8 *)(puVar12 + -8) = 0x180135ca4;
      FUN_18021e290(&local_5f0);
      *(undefined8 *)(puVar12 + -8) = 0x180135cae;
      FUN_18021e290(&local_5d0);
      puVar8 = &local_5b0;
    }
  }
  else {
    local_638 = &local_610;
    local_610 = 0;
    uStack_608 = 0;
    local_600 = 0;
    local_5f8 = 0;
    FUN_180211510(&local_610,L"mayrrX64",8);
    local_658 = 0;
    local_640 = &local_630;
    sVar4 = wcslen(local_448);
    local_630 = 0;
    uStack_628 = 0;
    local_620 = 0;
    local_618 = 0;
    FUN_180211510(&local_630,local_448,sVar4);
    local_658 = 0;
    ppvVar5 = (void **)FUN_180066720(local_508,&local_630,&local_610);
    puVar12 = auStack_688;
    if (&local_468 != ppvVar5) {
      if ((void *)0x7 < pvStack_450) {
        pvVar7 = local_468;
        puVar9 = auStack_688;
        if ((0xfff < (longlong)pvStack_450 * 2 + 2U) &&
           (pvVar7 = *(void **)((longlong)local_468 + -8), puVar9 = auStack_688,
           0x1f < (ulonglong)((longlong)local_468 + (-8 - (longlong)pvVar7)))) {
          pvVar7 = (void *)0x5;
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)();
          puVar9 = auStack_680;
        }
        *(undefined8 *)(puVar9 + -8) = 0x180135a2d;
        free(pvVar7);
      }
      local_468 = *ppvVar5;
      pvStack_460 = ppvVar5[1];
      local_458 = ppvVar5[2];
      pvStack_450 = ppvVar5[3];
      ppvVar5[2] = (void *)0x0;
      ppvVar5[3] = (void *)0x7;
      *(undefined2 *)ppvVar5 = 0;
      puVar12 = puVar9;
    }
    *(undefined8 *)(puVar12 + -8) = 0x180135a78;
    FUN_18021e290(local_508);
    *(undefined8 *)(puVar12 + -8) = 0x180135a83;
    FUN_18021e290(puVar12 + 0x58);
    puVar8 = (undefined8 *)(puVar12 + 0x78);
  }
  *(undefined8 *)(puVar12 + -8) = 0x180135e14;
  FUN_18021e290(puVar8);
  *(undefined8 **)(puVar12 + 0x38) = &local_550;
  local_550 = 0;
  uStack_548 = 0;
  local_540 = 0;
  local_538 = 0;
  *(undefined8 *)(puVar12 + -8) = 0x180135e42;
  FUN_180211510(&local_550,L"accounts.txt",0xc);
  *(undefined4 *)(puVar12 + 0x30) = 4;
  *(undefined4 *)(puVar12 + 0x30) = 0;
  *(undefined4 *)(puVar12 + 0x30) = 2;
  *(undefined4 *)(puVar12 + 0x30) = 0;
  *(undefined8 **)(puVar12 + 0x48) = &local_570;
  local_570 = 0;
  uStack_568 = 0;
  local_560 = 0;
  local_558 = 0;
  *(undefined8 *)(puVar12 + -8) = 0x180135e8c;
  FUN_180211510(&local_570,L"settings",8);
  *(undefined4 *)(puVar12 + 0x30) = 0x10;
  *(undefined4 *)(puVar12 + 0x30) = 0;
  *(undefined4 *)(puVar12 + 0x30) = 8;
  *(undefined4 *)(puVar12 + 0x30) = 0;
  *(undefined8 *)(puVar12 + -8) = 0x180135ebf;
  uVar6 = FUN_180066720(local_488,&local_468,&local_570);
  *(undefined8 *)(puVar12 + -8) = 0x180135ecf;
  FUN_180066720(param_1,uVar6,&local_550);
  *(undefined4 *)(puVar12 + 0x30) = 1;
  *(undefined8 *)(puVar12 + -8) = 0x180135ee2;
  FUN_18021e290(local_488);
  *(undefined8 *)(puVar12 + -8) = 0x180135eec;
  FUN_18021e290(&local_570);
  *(undefined8 *)(puVar12 + -8) = 0x180135ef6;
  FUN_18021e290(&local_550);
  *(undefined8 *)(puVar12 + -8) = 0x180135f03;
  FUN_18021e290(&local_468);
  *(undefined8 *)(puVar12 + -8) = 0x180135f15;
  return param_1;
}


)B180135860",
    "f7499848418ec0be0c481a03de0e1aabea776687cc387d6e77ad87ffa6e246ac",
    R"F180135860C(FUN_180066720
FUN_1800670a0
FUN_180067fd0
FUN_180211510
FUN_18021e290)F180135860C",
    R"F180135860D(DAT_1803da4c0)F180135860D",
    R"F180135860T("mayrrX64"
"settings"
"Documents"
"USERPROFILE"
"accounts.txt")F180135860T",
    R"F180135860F(93: if (iVar2 < 0) {
96: if (DVar3 == 0) {
108: if ((int)local_650 != 0) {
114: if (&local_468 != ppvVar5) {
115: if ((void *)0x7 < pvStack_450) {
118: if ((0xfff < (longlong)pvStack_450 * 2 + 2U) &&
145: else {
171: if (&local_468 != ppvVar5) {
172: if ((void *)0x7 < pvStack_450) {
175: if ((0xfff < (longlong)pvStack_450 * 2 + 2U) &&
206: else {
224: if (&local_468 != ppvVar5) {
225: if ((void *)0x7 < pvStack_450) {
228: if ((0xfff < (longlong)pvStack_450 * 2 + 2U) &&
292: return param_1;)F180135860F",
    R"F180135860U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 122: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 123: (*pcVar1)();.
TODO: resolve the indirect call in body 179: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 180: (*pcVar1)();.
TODO: resolve the indirect call in body 232: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 233: (*pcVar1)();.)F180135860U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180135860() noexcept {
    return kFunction_0x180135860;
}

// 0x180135f40 FUN_180135f40
// source: re/dump/decompile/0x180135f40_FUN_180135f40.c
// size: 1642 bytes; thunk: false
// body sha256: 0fd473f5e68796afd559898648aef95ee09a19f1de1dfd732a2adc03111d765d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180135f40{
    "0x180135f40",
    "FUN_180135f40",
    R"F180135f40S(undefined FUN_180135f40())F180135f40S",
    R"B180135f40(// 0x180135f40  FUN_180135f40
// size=1642 thunk=false
// signature: undefined FUN_180135f40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018013618b) */
/* WARNING: Removing unreachable block (ram,0x0001801361a0) */
/* WARNING: Removing unreachable block (ram,0x0001801361b5) */
/* WARNING: Removing unreachable block (ram,0x0001801361bc) */

void FUN_180135f40(void)

{
  char *pcVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char ****ppppcVar8;
  char *pcVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_2b8 [8];
  undefined1 auStack_2b0 [40];
  undefined4 local_288;
  undefined *local_280;
  ulonglong local_278;
  undefined8 uStack_270;
  longlong local_268;
  undefined8 local_260;
  ulonglong local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined1 local_238 [28];
  int iStack_21c;
  longlong local_218 [2];
  int local_208 [2];
  basic_istream<char,std::char_traits<char>_> local_200 [152];
  basic_ios<char,std::char_traits<char>_> local_168 [96];
  char ***local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  longlong lStack_e0;
  longlong local_d8;
  ulonglong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  char ***local_78 [3];
  ulonglong local_60;
  ulonglong local_58;
  
  puVar10 = auStack_2b8;
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_2b8;
  local_288 = 0;
  local_e8 = 0;
  lStack_e0 = 0;
  local_d8 = 0;
  memset(local_218,0,0x110);
  uVar6 = FUN_180135860(local_238);
  FUN_180202040(local_218,uVar6,1);
  FUN_18021e290(local_238);
  uStack_100 = 0;
  local_f8 = 0;
  local_f0 = 0xf;
  local_108 = (char ***)0x0;
  iVar5 = *(int *)((longlong)local_208 + (longlong)*(int *)(local_218[0] + 4));
  while (iVar5 == 0) {
    cVar4 = std::basic_ios<char,std::char_traits<char>_>::widen
                      ((basic_ios<char,std::char_traits<char>_> *)
                       ((longlong)local_218 + (longlong)*(int *)(local_218[0] + 4)),'\n');
    plVar7 = (longlong *)FUN_180210550(local_218,&local_108,cVar4);
    if ((*(byte *)((longlong)*(int *)(*plVar7 + 4) + 0x10 + (longlong)plVar7) & 6) != 0) break;
    if (local_f8 != 0) {
      ppppcVar8 = &local_108;
      if (0xf < local_f0) {
        ppppcVar8 = (char ****)local_108;
      }
      if (*(char *)ppppcVar8 != '#') {
        uStack_c0 = 0;
        local_b8 = 0;
        local_b0 = 0xf;
        local_c8 = 0;
        local_a8 = 0;
        uStack_98 = 0;
        local_90 = 0;
        local_88 = 0xf;
        local_a0 = 0;
        ppppcVar8 = &local_108;
        if (0xf < local_f0) {
          ppppcVar8 = (char ****)local_108;
        }
        if (((local_f8 == 0) ||
            (pcVar1 = (char *)((longlong)ppppcVar8 + local_f8),
            pcVar9 = (char *)thunk_FUN_1802d5c20(ppppcVar8,pcVar1,9), pcVar9 == pcVar1)) ||
           (uVar11 = (longlong)pcVar9 - (longlong)ppppcVar8, uVar11 == 0xffffffffffffffff)) {
          FUN_18020e450(&local_a0);
        }
        else {
          local_278 = 0;
          uStack_270 = 0;
          local_268 = 0;
          local_260 = 0;
          uVar13 = uVar11;
          if (local_f8 < uVar11) {
            uVar13 = local_f8;
          }
          ppppcVar8 = &local_108;
          if (0xf < local_f0) {
            ppppcVar8 = (char ****)local_108;
          }
          FUN_18001d080(&local_278,ppppcVar8,uVar13);
          lVar3 = local_268;
          local_c8 = local_278;
          uStack_c0 = uStack_270;
          local_b8 = local_268;
          local_b0 = local_260;
          local_268 = 0;
          local_260 = 0xf;
          local_278 = local_278 & 0xffffffffffffff00;
          local_288 = 0;
          FUN_18020e450(&local_278);
          uVar13 = uVar11 + 1;
          ppppcVar8 = &local_108;
          if (0xf < local_f0) {
            ppppcVar8 = (char ****)local_108;
          }
          if ((uVar13 < local_f8) &&
             (pcVar1 = (char *)((longlong)ppppcVar8 + local_f8),
             pcVar9 = (char *)thunk_FUN_1802d5c20((char *)((longlong)ppppcVar8 + uVar13),pcVar1,9),
             pcVar9 != pcVar1)) {
            uVar12 = (longlong)pcVar9 - (longlong)ppppcVar8;
            uVar15 = local_f8;
            if (uVar12 != 0xffffffffffffffff) {
              uVar15 = uVar12;
            }
          }
          else {
            uVar12 = 0xffffffffffffffff;
            uVar15 = local_f8;
          }
          FUN_18020e670(&local_108,local_78,uVar13,(uVar15 - uVar11) + -1);
          ppppcVar8 = local_78;
          if (0xf < local_60) {
            ppppcVar8 = (char ****)local_78[0];
          }
          local_a8 = _strtoui64((char *)ppppcVar8,(char **)0x0,10);
          if ((int)local_a8 == 0) {
            local_a8 = 0;
          }
          if (uVar12 != 0xffffffffffffffff) {
            uVar12 = uVar12 + 1;
            local_258 = 0;
            uStack_250 = 0;
            local_248 = 0;
            local_240 = 0;
            if (local_f8 < uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_18022ec00();
            }
            lVar14 = -1;
            if (local_f8 - uVar12 != -1) {
              lVar14 = local_f8 - uVar12;
            }
            ppppcVar8 = &local_108;
            if (0xf < local_f0) {
              ppppcVar8 = (char ****)local_108;
            }
            FUN_18001d080(&local_258,(char *)((longlong)ppppcVar8 + uVar12),lVar14);
            local_a0 = local_258;
            uStack_98 = uStack_250;
            local_90 = local_248;
            local_88 = local_240;
            local_248 = 0;
            local_240 = 0xf;
            local_258 = local_258 & 0xffffffffffffff00;
            local_288 = 0;
            FUN_18020e450(&local_258);
          }
          lVar14 = lStack_e0;
          if (lVar3 != 0) {
            if (lStack_e0 == local_d8) {
              FUN_180224fe0(&local_e8,lStack_e0,&local_c8);
            }
            else {
              local_280 = (undefined *)lStack_e0;
              FUN_18016d4c0(lStack_e0,&local_c8);
              *(ulonglong *)(lVar14 + 0x20) = local_a8;
              FUN_18016d4c0(lVar14 + 0x28,&local_a0);
              lStack_e0 = lStack_e0 + 0x48;
            }
          }
          FUN_18020e450(local_78);
          FUN_18020e450(&local_a0);
        }
        FUN_18020e450(&local_c8);
      }
    }
    iVar5 = *(int *)((longlong)local_208 + (longlong)*(int *)(local_218[0] + 4));
  }
  local_280 = &DAT_1803e86b0;
  iVar5 = _Mtx_lock(&DAT_1803e86b0);
  if (iVar5 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(0x29);
    (*pcVar2)(5);
    puVar10 = auStack_2b0;
  }
  if (DAT_1803e86fc == 0x7fffffff) {
    DAT_1803e86fc = 0x7ffffffe;
    *(undefined8 *)(puVar10 + -8) = 0x1801364bc;
    std::_Throw_Cpp_error(6);
  }
  lVar14 = DAT_1803eb7c8;
  lVar3 = DAT_1803eb7c0;
  uVar6 = DAT_1803eb7b8;
  DAT_1803eb7b8 = local_e8;
  local_e8 = uVar6;
  DAT_1803eb7c0 = lStack_e0;
  lStack_e0 = lVar3;
  DAT_1803eb7c8 = local_d8;
  local_d8 = lVar14;
  *(undefined8 *)(puVar10 + -8) = 0x18013651a;
  _Mtx_unlock(&DAT_1803e86b0);
  *(undefined8 *)(puVar10 + -8) = 0x180136527;
  FUN_18020e450(&local_108);
  *(basic_ios<char,std::char_traits<char>_> **)(puVar10 + 0x38) = local_168;
  *(undefined ***)((longlong)local_218 + (longlong)*(int *)(local_218[0] + 4)) =
       vftable_std_std_D_DU__char_traits___basic_ifstream;
  *(int *)((longlong)&iStack_21c + (longlong)*(int *)(local_218[0] + 4)) =
       *(int *)(local_218[0] + 4) + -0xb0;
  *(undefined8 *)(puVar10 + -8) = 0x180136560;
  FUN_18020f850(local_208);
  *(undefined8 *)(puVar10 + -8) = 0x18013656b;
  std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
            (local_200);
  *(undefined8 *)(puVar10 + -8) = 0x180136575;
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_168);
  *(undefined8 *)(puVar10 + -8) = 0x180136582;
  FUN_18020ad50(&local_e8);
  *(undefined8 *)(puVar10 + -8) = 0x180136591;
  return;
}


)B180135f40",
    "0fd473f5e68796afd559898648aef95ee09a19f1de1dfd732a2adc03111d765d",
    R"F180135f40C(FUN_18001d080
FUN_180135860
FUN_18016d4c0
FUN_180202040
FUN_18020ad50
FUN_18020e450
FUN_18020e670
FUN_18020f850
FUN_180210550
FUN_18021e290
FUN_180224fe0
FUN_18022ec00)F180135f40C",
    R"F180135f40D(DAT_1803da4c0
DAT_1803e86b0
DAT_1803e86fc
DAT_1803eb7b8
DAT_1803eb7c0
DAT_1803eb7c8)F180135f40D",
    R"F180135f40T()F180135f40T",
    R"F180135f40F(84: while (iVar5 == 0) {
89: if ((*(byte *)((longlong)*(int *)(*plVar7 + 4) + 0x10 + (longlong)plVar7) & 6) != 0) break;
90: if (local_f8 != 0) {
92: if (0xf < local_f0) {
95: if (*(char *)ppppcVar8 != '#') {
106: if (0xf < local_f0) {
109: if (((local_f8 == 0) ||
115: else {
121: if (local_f8 < uVar11) {
125: if (0xf < local_f0) {
141: if (0xf < local_f0) {
144: if ((uVar13 < local_f8) &&
150: if (uVar12 != 0xffffffffffffffff) {
154: else {
160: if (0xf < local_60) {
164: if ((int)local_a8 == 0) {
167: if (uVar12 != 0xffffffffffffffff) {
173: if (local_f8 < uVar12) {
178: if (local_f8 - uVar12 != -1) {
182: if (0xf < local_f0) {
197: if (lVar3 != 0) {
198: if (lStack_e0 == local_d8) {
201: else {
219: if (iVar5 != 0) {
225: if (DAT_1803e86fc == 0x7fffffff) {
258: return;)F180135f40F",
    R"F180135f40U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e86b0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e86fc.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb7b8.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb7c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb7c8.
TODO: resolve the indirect call in body 221: pcVar2 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 222: (*pcVar2)(5);.)F180135f40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180135f40() noexcept {
    return kFunction_0x180135f40;
}

// 0x1801365b0 FUN_1801365b0
// source: re/dump/decompile/0x1801365b0_FUN_1801365b0.c
// size: 541 bytes; thunk: false
// body sha256: a5aa4524f65882a8580ac9b14754f640cf1dfed1d87eafd80fe7b6b5184dcf01
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801365b0{
    "0x1801365b0",
    "FUN_1801365b0",
    R"F1801365b0S(undefined FUN_1801365b0())F1801365b0S",
    R"B1801365b0(// 0x1801365b0  FUN_1801365b0
// size=541 thunk=false
// signature: undefined FUN_1801365b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801365b0(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_1d8 [48];
  basic_ios<char,std::char_traits<char>_> *local_1a8;
  undefined **local_1a0;
  undefined *local_198;
  undefined1 local_190 [36];
  int iStack_16c;
  longlong local_168;
  undefined1 local_160 [8];
  basic_ostream<char,std::char_traits<char>_> local_158 [152];
  basic_ios<char,std::char_traits<char>_> local_c0 [104];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_1d8;
  FUN_180135860(local_58);
  local_1a8 = (basic_ios<char,std::char_traits<char>_> *)0x0;
  local_1a0 = &PTR_vftable_std__System_error_category_1803e9500;
  uVar6 = FUN_180065cd0(local_58,local_190);
  FUN_180067d80(uVar6);
  FUN_18021e290(local_190);
  memset(&local_168,0,0x108);
  FUN_1802022a0(&local_168,local_58,0x10);
  if (*(int *)(local_158 + *(int *)(local_168 + 4)) == 0) {
    FUN_1801fc280(&local_168,"# mayrrX64 saved Steam accounts - account<TAB>steamid64<TAB>label\n");
    FUN_1801fc280(&local_168,
                  "# passwords are NEVER stored here; passwordless switching uses Steam\'s own credential cache\n"
                 );
    local_198 = &DAT_1803e86b0;
    iVar5 = _Mtx_lock(&DAT_1803e86b0);
    if (iVar5 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar2 = DAT_1803eb7b8;
    puVar3 = DAT_1803eb7c0;
    if (DAT_1803e86fc == 0x7fffffff) {
      DAT_1803e86fc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
      puVar2 = DAT_1803eb7b8;
      puVar3 = DAT_1803eb7c0;
    }
    for (; puVar4 = DAT_1803eb7c0, puVar2 != DAT_1803eb7c0; puVar2 = puVar2 + 9) {
      puVar8 = puVar2;
      if (0xf < (ulonglong)puVar2[3]) {
        puVar8 = (undefined8 *)*puVar2;
      }
      DAT_1803eb7c0 = puVar3;
      uVar6 = FUN_180210c60(&local_168,puVar8,puVar2[2]);
      this = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc450(uVar6,9);
      pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(this,puVar2[4]);
      uVar6 = FUN_1801fc450(pbVar7,9);
      plVar9 = puVar2 + 5;
      if (0xf < (ulonglong)puVar2[8]) {
        plVar9 = (longlong *)*plVar9;
      }
      uVar6 = FUN_180210c60(uVar6,plVar9,puVar2[7]);
      FUN_1801fc450(uVar6,10);
      puVar3 = DAT_1803eb7c0;
      DAT_1803eb7c0 = puVar4;
    }
    DAT_1803eb7c0 = puVar3;
    _Mtx_unlock(&DAT_1803e86b0);
  }
  local_1a8 = local_c0;
  *(undefined ***)(local_160 + (longlong)*(int *)(local_168 + 4) + -8) =
       vftable_std_std_D_DU__char_traits___basic_ofstream;
  *(int *)((longlong)&iStack_16c + (longlong)*(int *)(local_168 + 4)) =
       *(int *)(local_168 + 4) + -0xa8;
  FUN_18020f850(local_160);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (local_158);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_c0);
  FUN_18021e290(local_58);
  return;
}


)B1801365b0",
    "a5aa4524f65882a8580ac9b14754f640cf1dfed1d87eafd80fe7b6b5184dcf01",
    R"F1801365b0C(FUN_180065cd0
FUN_180067d80
FUN_180135860
FUN_1801fc280
FUN_1801fc450
FUN_1802022a0
FUN_18020f850
FUN_180210c60
FUN_18021e290)F1801365b0C",
    R"F1801365b0D(DAT_1803da4c0
DAT_1803e86b0
DAT_1803e86fc
DAT_1803eb7b8
DAT_1803eb7c0)F1801365b0D",
    R"F1801365b0T("# mayrrX64 saved Steam accounts - account<TAB>steamid64<TAB>label\\n"
"# passwords are NEVER stored here; passwordless switching uses Steam\\'s own credential cache\\n")F1801365b0T",
    R"F1801365b0F(44: if (*(int *)(local_158 + *(int *)(local_168 + 4)) == 0) {
51: if (iVar5 != 0) {
55: return;
59: if (DAT_1803e86fc == 0x7fffffff) {
65: for (; puVar4 = DAT_1803eb7c0, puVar2 != DAT_1803eb7c0; puVar2 = puVar2 + 9) {
67: if (0xf < (ulonglong)puVar2[3]) {
76: if (0xf < (ulonglong)puVar2[8]) {
97: return;)F1801365b0F",
    R"F1801365b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e86b0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e86fc.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb7b8.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb7c0.
TODO: resolve the indirect call in body 53: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 54: (*pcVar1)();.)F1801365b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801365b0() noexcept {
    return kFunction_0x1801365b0;
}

// 0x1801367d0 FUN_1801367d0
// source: re/dump/decompile/0x1801367d0_FUN_1801367d0.c
// size: 194 bytes; thunk: false
// body sha256: 028c23cb836194109c2816f05312d27028749ce9c224f4dbf6fbea8e084c8b38
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801367d0{
    "0x1801367d0",
    "FUN_1801367d0",
    R"F1801367d0S(undefined FUN_1801367d0())F1801367d0S",
    R"B1801367d0(// 0x1801367d0  FUN_1801367d0
// size=194 thunk=false
// signature: undefined FUN_1801367d0()
// status: ok


undefined8 * FUN_1801367d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar2 = _Mtx_lock(&DAT_1803e86b0);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined8 *)(*pcVar1)();
    return puVar3;
  }
  if (DAT_1803e86fc == 0x7fffffff) {
    DAT_1803e86fc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1802169c0(param_1,(DAT_1803eb7c0 - DAT_1803eb7b8 >> 3) * -0x71c71c71c71c71c7,param_3,
                &DAT_1803eb7c0,uVar4);
  _Mtx_unlock(&DAT_1803e86b0);
  return param_1;
}


)B1801367d0",
    "028c23cb836194109c2816f05312d27028749ce9c224f4dbf6fbea8e084c8b38",
    R"F1801367d0C(FUN_1802169c0)F1801367d0C",
    R"F1801367d0D(DAT_1803e86b0
DAT_1803e86fc
DAT_1803eb7b8
DAT_1803eb7c0)F1801367d0D",
    R"F1801367d0T()F1801367d0T",
    R"F1801367d0F(17: if (iVar2 != 0) {
21: return puVar3;
23: if (DAT_1803e86fc == 0x7fffffff) {
33: return param_1;)F1801367d0F",
    R"F1801367d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e86b0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e86fc.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb7b8.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb7c0.
TODO: resolve the indirect call in body 19: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 20: puVar3 = (undefined8 *)(*pcVar1)();.)F1801367d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801367d0() noexcept {
    return kFunction_0x1801367d0;
}

// 0x1801368a0 FUN_1801368a0
// source: re/dump/decompile/0x1801368a0_FUN_1801368a0.c
// size: 522 bytes; thunk: false
// body sha256: 2285954c877b32588a33caa6c171ef7a7d9cc8e3eb5534c4dc38a397e3443bad
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801368a0{
    "0x1801368a0",
    "FUN_1801368a0",
    R"F1801368a0S(undefined FUN_1801368a0())F1801368a0S",
    R"B1801368a0(// 0x1801368a0  FUN_1801368a0
// size=522 thunk=false
// signature: undefined FUN_1801368a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801368a0(char *param_1,longlong param_2)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  char *_Str1;
  char *_Str2;
  char *pcVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined *local_98;
  char *local_90;
  char local_88 [16];
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  lVar5 = 0;
  if ((int)param_2 != 0) {
    lVar5 = param_2;
  }
  local_98 = &DAT_1803e86b0;
  iVar3 = _Mtx_lock(&DAT_1803e86b0);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_1803e86fc == 0x7fffffff) {
    DAT_1803e86fc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  pcVar1 = DAT_1803eb7c0;
  pcVar4 = DAT_1803eb7b8;
  if (DAT_1803eb7b8 != DAT_1803eb7c0) {
    do {
      _Str2 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        _Str2 = *(char **)param_1;
      }
      _Str1 = pcVar4;
      if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
        _Str1 = *(char **)pcVar4;
      }
      iVar3 = _stricmp(_Str1,_Str2);
    } while ((iVar3 != 0) && (pcVar4 = pcVar4 + 0x48, pcVar4 != pcVar1));
    if (pcVar4 != DAT_1803eb7c0) {
      if (lVar5 != 0) {
        *(longlong *)(pcVar4 + 0x20) = lVar5;
      }
      goto LAB_180136a75;
    }
  }
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_78 = _DAT_1803814b0;
  uStack_70 = _UNK_1803814b8;
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_68 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0xf;
  local_60 = 0;
  if (local_88 != param_1) {
    pcVar1 = param_1 + 0x10;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(char **)param_1;
    }
    FUN_180212700(local_88,param_1,*(undefined8 *)pcVar1);
  }
  pcVar1 = DAT_1803eb7c0;
  local_68 = lVar5;
  if (DAT_1803eb7c0 == DAT_1803eb7c8) {
    FUN_180224fe0(&DAT_1803eb7b8,DAT_1803eb7c0,local_88);
  }
  else {
    local_90 = DAT_1803eb7c0;
    FUN_18016d4c0(DAT_1803eb7c0,local_88);
    *(longlong *)(pcVar1 + 0x20) = local_68;
    FUN_18016d4c0(pcVar1 + 0x28,&local_60);
    DAT_1803eb7c0 = DAT_1803eb7c0 + 0x48;
  }
  FUN_18020e450(&local_60);
  FUN_18020e450(local_88);
LAB_180136a75:
  _Mtx_unlock(&DAT_1803e86b0);
  FUN_1801365b0();
  return;
}


)B1801368a0",
    "2285954c877b32588a33caa6c171ef7a7d9cc8e3eb5534c4dc38a397e3443bad",
    R"F1801368a0C(FUN_1801365b0
FUN_18016d4c0
FUN_18020e450
FUN_180212700
FUN_180224fe0)F1801368a0C",
    R"F1801368a0D(LAB_180136a75
DAT_1803da4c0
DAT_1803e86b0
DAT_1803e86fc
DAT_1803eb7b8
DAT_1803eb7c0
DAT_1803eb7c8)F1801368a0D",
    R"F1801368a0T()F1801368a0T",
    R"F1801368a0F(34: if (*(longlong *)(param_1 + 0x10) == 0) {
35: return;
38: if ((int)param_2 != 0) {
43: if (iVar3 != 0) {
47: return;
49: if (DAT_1803e86fc == 0x7fffffff) {
55: if (DAT_1803eb7b8 != DAT_1803eb7c0) {
56: do {
58: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
62: if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
67: if (pcVar4 != DAT_1803eb7c0) {
68: if (lVar5 != 0) {
71: goto LAB_180136a75;
97: if (local_88 != param_1) {
99: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
106: if (DAT_1803eb7c0 == DAT_1803eb7c8) {
109: else {
118: LAB_180136a75:
121: return;)F1801368a0F",
    R"F1801368a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180136a75.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e86b0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e86fc.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb7b8.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb7c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb7c8.
TODO: resolve the indirect call in body 45: pcVar2 = (code *)swi(3);.
TODO: resolve the indirect call in body 46: (*pcVar2)();.)F1801368a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801368a0() noexcept {
    return kFunction_0x1801368a0;
}

// 0x180136ab0 FUN_180136ab0
// source: re/dump/decompile/0x180136ab0_FUN_180136ab0.c
// size: 470 bytes; thunk: false
// body sha256: e3aaf055986df5def8608f41972df72131af19619160387fd09753c3b670c3f6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180136ab0{
    "0x180136ab0",
    "FUN_180136ab0",
    R"F180136ab0S(undefined FUN_180136ab0())F180136ab0S",
    R"B180136ab0(// 0x180136ab0  FUN_180136ab0
// size=470 thunk=false
// signature: undefined FUN_180136ab0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180136ab0(char *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auStack_58 [32];
  char *local_38;
  undefined *local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  FUN_180134f10();
  local_30 = &DAT_1803e86b0;
  iVar3 = _Mtx_lock(&DAT_1803e86b0);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e86fc == 0x7fffffff) {
    DAT_1803e86fc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  pcVar8 = DAT_1803eb7c0;
  pcVar6 = DAT_1803eb7b8;
  pcVar7 = DAT_1803eb7c0;
  if (DAT_1803eb7b8 != DAT_1803eb7c0) {
    do {
      pcVar7 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pcVar7 = *(char **)param_1;
      }
      pcVar4 = pcVar6;
      if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
        pcVar4 = *(char **)pcVar6;
      }
      iVar3 = _stricmp(pcVar4,pcVar7);
    } while ((iVar3 != 0) && (pcVar6 = pcVar6 + 0x48, pcVar6 != pcVar8));
    pcVar7 = DAT_1803eb7c0;
    if (pcVar6 != pcVar8) {
      pcVar7 = pcVar6 + 0x48;
      pcVar4 = DAT_1803eb7c0;
      if (pcVar7 != pcVar8) {
        do {
          pcVar4 = param_1;
          if (0xf < *(ulonglong *)(param_1 + 0x18)) {
            pcVar4 = *(char **)param_1;
          }
          pcVar5 = pcVar7;
          if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
            pcVar5 = *(char **)pcVar7;
          }
          iVar3 = _stricmp(pcVar5,pcVar4);
          if (iVar3 != 0) {
            FUN_18020e8a0(pcVar6,pcVar7);
            *(undefined8 *)(pcVar6 + 0x20) = *(undefined8 *)(pcVar7 + 0x20);
            FUN_18020e8a0(pcVar6 + 0x28,pcVar7 + 0x28);
            pcVar6 = pcVar6 + 0x48;
          }
          pcVar7 = pcVar7 + 0x48;
        } while (pcVar7 != pcVar8);
        pcVar7 = DAT_1803eb7c0;
        pcVar4 = DAT_1803eb7c0;
        if (pcVar6 == pcVar8) goto LAB_180136c58;
      }
      for (; pcVar7 = DAT_1803eb7c0, bVar2 = pcVar8 != DAT_1803eb7c0, pcVar5 = pcVar6,
          DAT_1803eb7c0 = pcVar4, bVar2; pcVar8 = pcVar8 + 0x48) {
        FUN_18020e8a0(pcVar6,pcVar8);
        *(undefined8 *)(pcVar6 + 0x20) = *(undefined8 *)(pcVar8 + 0x20);
        FUN_18020e8a0(pcVar6 + 0x28,pcVar8 + 0x28);
        pcVar6 = pcVar6 + 0x48;
        pcVar4 = DAT_1803eb7c0;
        DAT_1803eb7c0 = pcVar7;
      }
      for (; pcVar7 = pcVar6, local_38 = pcVar5, pcVar5 != pcVar4; pcVar5 = pcVar5 + 0x48) {
        FUN_18020e450(pcVar5 + 0x28);
        FUN_18020e450(pcVar5);
      }
    }
  }
LAB_180136c58:
  DAT_1803eb7c0 = pcVar7;
  _Mtx_unlock(&DAT_1803e86b0);
  FUN_1801365b0();
  return;
}


)B180136ab0",
    "e3aaf055986df5def8608f41972df72131af19619160387fd09753c3b670c3f6",
    R"F180136ab0C(FUN_180134f10
FUN_1801365b0
FUN_18020e450
FUN_18020e8a0)F180136ab0C",
    R"F180136ab0D(LAB_180136c58
DAT_1803da4c0
DAT_1803e86b0
DAT_1803e86fc
DAT_1803eb7b8
DAT_1803eb7c0)F180136ab0D",
    R"F180136ab0T()F180136ab0T",
    R"F180136ab0F(29: if (iVar3 != 0) {
33: return;
35: if (DAT_1803e86fc == 0x7fffffff) {
42: if (DAT_1803eb7b8 != DAT_1803eb7c0) {
43: do {
45: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
49: if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
55: if (pcVar6 != pcVar8) {
58: if (pcVar7 != pcVar8) {
59: do {
61: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
65: if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
69: if (iVar3 != 0) {
79: if (pcVar6 == pcVar8) goto LAB_180136c58;
81: for (; pcVar7 = DAT_1803eb7c0, bVar2 = pcVar8 != DAT_1803eb7c0, pcVar5 = pcVar6,
90: for (; pcVar7 = pcVar6, local_38 = pcVar5, pcVar5 != pcVar4; pcVar5 = pcVar5 + 0x48) {
96: LAB_180136c58:
100: return;)F180136ab0F",
    R"F180136ab0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180136c58.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e86b0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e86fc.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb7b8.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb7c0.
TODO: resolve the indirect call in body 31: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 32: (*pcVar1)();.)F180136ab0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180136ab0() noexcept {
    return kFunction_0x180136ab0;
}

// 0x180136c90 FUN_180136c90
// source: re/dump/decompile/0x180136c90_FUN_180136c90.c
// size: 229 bytes; thunk: false
// body sha256: f85a6d4db97412508ec29360990ef6c7c8bbcbaee0abf2c01f528d2336a2c7c9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180136c90{
    "0x180136c90",
    "FUN_180136c90",
    R"F180136c90S(undefined FUN_180136c90())F180136c90S",
    R"B180136c90(// 0x180136c90  FUN_180136c90
// size=229 thunk=false
// signature: undefined FUN_180136c90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_180136c90(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_868 [32];
  undefined8 *local_848;
  undefined4 local_840;
  undefined2 local_838;
  undefined1 local_830;
  undefined8 local_828 [2];
  undefined1 local_818 [2048];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_868;
  if (param_1 == (longlong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_828[0] = 4000;
    iVar1 = FUN_1801318c0(param_1,param_2,"InitiateGameConnection");
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      local_830 = 1;
      local_838 = 0x6987;
      local_840 = 0x7f000001;
      local_848 = local_828;
      uVar2 = (**(code **)(*param_1 + (longlong)iVar1 * 8))(param_1,local_818,0x800,0);
    }
    iVar1 = FUN_1801318c0(param_1);
    if (-1 < iVar1) {
      (**(code **)(*param_1 + (longlong)iVar1 * 8))(param_1,0x7f000001,0x6987);
    }
  }
  return uVar2;
}


)B180136c90",
    "f85a6d4db97412508ec29360990ef6c7c8bbcbaee0abf2c01f528d2336a2c7c9",
    R"F180136c90C(FUN_1801318c0)F180136c90C",
    R"F180136c90D(DAT_1803da4c0)F180136c90D",
    R"F180136c90T("InitiateGameConnection")F180136c90T",
    R"F180136c90F(24: if (param_1 == (longlong *)0x0) {
27: else {
30: if (iVar1 < 0) {
33: else {
41: if (-1 < iVar1) {
45: return uVar2;)F180136c90F",
    R"F180136c90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 38: uVar2 = (**(code **)(*param_1 + (longlong)iVar1 * 8))(param_1,local_818,0x800,0);.
TODO: resolve the indirect call in body 42: (**(code **)(*param_1 + (longlong)iVar1 * 8))(param_1,0x7f000001,0x6987);.)F180136c90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180136c90() noexcept {
    return kFunction_0x180136c90;
}

// 0x180136d80 FUN_180136d80
// source: re/dump/decompile/0x180136d80_FUN_180136d80.c
// size: 1168 bytes; thunk: false
// body sha256: fe8c0a466bd8464afe38e222295baacb18aa5845f8cb3a7bf13a007f4c02d924
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180136d80{
    "0x180136d80",
    "FUN_180136d80",
    R"F180136d80S(undefined FUN_180136d80())F180136d80S",
    R"B180136d80(// 0x180136d80  FUN_180136d80
// size=1168 thunk=false
// signature: undefined FUN_180136d80()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180136d80(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined1 auStack_148 [32];
  uint local_128;
  uint local_120;
  uint local_118;
  undefined4 local_110;
  uint local_108;
  undefined4 local_100;
  undefined8 local_f8;
  char local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  ulonglong local_d0;
  undefined8 local_c8 [2];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  local_e0 = param_1;
  local_d8 = param_2;
  if (param_2 == (longlong *)0x0) {
    FUN_180014410("[AS] diag %-6s: no IClientUser\n",param_1);
    return;
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_180131ef0(param_2,&local_b8);
  iVar6 = FUN_1801318c0(param_2);
  if (-1 < iVar6) {
    (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2,4000,1);
  }
  local_d0 = FUN_180132160(param_2);
  iVar6 = FUN_1801318c0(param_2);
  if (iVar6 < 0) {
    local_e8 = '\0';
  }
  else {
    local_e8 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);
  }
  iVar6 = FUN_1801318c0(param_2);
  if (iVar6 < 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2,4000);
  }
  iVar6 = FUN_1801318c0(param_2);
  if (iVar6 < 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2,4000);
  }
  uVar11 = 0;
  iVar6 = FUN_1801318c0(param_2);
  if (iVar6 < 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);
  }
  iVar6 = FUN_1801318c0(param_2);
  uVar9 = 0;
  uVar7 = uVar9;
  if (-1 < iVar6) {
    uVar7 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);
  }
  iVar6 = FUN_1801318c0(param_2);
  if (-1 < iVar6) {
    local_c8[0] = 0;
    (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2,local_c8,0);
    uVar11 = local_c8[0];
  }
  uVar1 = local_d0;
  local_108 = (uint)(cVar2 != '\0');
  local_118 = (uint)(cVar5 != '\0');
  local_120 = 4000;
  local_128 = (uint)(local_e8 != '\0');
  local_110 = uVar8;
  local_100 = uVar7;
  local_f8 = uVar11;
  FUN_180014410("[AS] diag %-6s: id=%llu name=\'%s\' loggedOn=%d ownsApp%u=%d ownershipTicket=%d connectTokens=%d gamesRunning=%d runningGameID=%llu\n"
                ,param_1,local_d0,&local_b8);
  uVar10 = FUN_180132040(param_2);
  if (uVar10 != 0) {
    if (uVar10 != uVar1) {
      FUN_180014410("[AS] diag %-6s: LICENCE IS BORROWED - app %u is family-shared from %llu. Servers that ban family sharing will let this account in and then kick it.\n"
                    ,param_1,4000,uVar10);
      goto LAB_180137028;
    }
    if (uVar10 != 0) {
      FUN_180014410("[AS] diag %-6s: licence owner=%llu (this account owns the game)\n",param_1,
                    uVar10);
      goto LAB_180137028;
    }
  }
  FUN_180014410("[AS] diag %-6s: licence owner could not be read out of the ownership ticket (layout unknown) - family sharing not ruled out\n"
                ,param_1);
LAB_180137028:
  iVar6 = FUN_1801318c0(param_2);
  if (iVar6 < 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);
  }
  local_c8[0] = CONCAT44(local_c8[0]._4_4_,(uint)(cVar5 != '\0'));
  iVar6 = FUN_1801318c0(param_2);
  if (iVar6 < 0) {
    local_d0 = local_d0 & 0xffffffff00000000;
  }
  else {
    uVar8 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);
    local_d0 = CONCAT44(local_d0._4_4_,uVar8);
  }
  iVar6 = FUN_1801318c0(param_2);
  if (-1 < iVar6) {
    uVar9 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);
  }
  iVar6 = FUN_1801318c0(param_2);
  if (iVar6 < 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2,4000);
  }
  iVar6 = FUN_1801318c0(param_2);
  if (iVar6 < 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);
  }
  iVar6 = FUN_1801318c0(param_2);
  if (iVar6 < 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);
  }
  iVar6 = FUN_1801318c0(param_2);
  if (iVar6 < 0) {
    cVar4 = '\0';
  }
  else {
    cVar4 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);
  }
  local_108 = (undefined4)local_c8[0];
  local_110 = (undefined4)local_d0;
  local_120 = (uint)(cVar5 != '\0');
  local_128 = (uint)(cVar2 != '\0');
  local_118 = uVar9;
  FUN_180014410("[AS] diag %-6s: limited=%d lockedDown=%d communityBanned=%d vacBanned(app)=%d accountFlags=0x%08X securityPolicy=0x%08X twoFactor=%d\n"
                ,param_1,cVar4 != '\0',cVar3 != '\0');
  local_d0 = local_d0 & 0xffffffff00000000;
  iVar6 = FUN_1801318c0(param_2);
  if (iVar6 < 0) {
    cVar5 = '\0';
  }
  else {
    cVar5 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2,&local_d0);
  }
  FUN_180014410("[AS] diag %-6s: otherSessionPlaying=%d(kind=%u)\n",param_1,cVar5 != '\0',
                local_d0 & 0xffffffff);
  return;
}


)B180136d80",
    "fe8c0a466bd8464afe38e222295baacb18aa5845f8cb3a7bf13a007f4c02d924",
    R"F180136d80C(FUN_180014410
FUN_1801318c0
FUN_180131ef0
FUN_180132040
FUN_180132160)F180136d80C",
    R"F180136d80D(LAB_180137028
DAT_1803da4c0)F180136d80D",
    R"F180136d80T("[AS] diag %-6s: no IClientUser\\n"
"[AS] diag %-6s: otherSessionPlaying=%d(kind=%u)\\n"
"[AS] diag %-6s: licence owner=%llu (this account owns the game)\\n"
"[AS] diag %-6s: licence owner could not be read out of the ownership ticket (layout unknown) - family sharing not ruled out\\n"
"[AS] diag %-6s: id=%llu name=\\'%s\\' loggedOn=%d ownsApp%u=%d ownershipTicket=%d connectTokens=%d gamesRunning=%d runningGameID=%llu\\n"
"[AS] diag %-6s: limited=%d lockedDown=%d communityBanned=%d vacBanned(app)=%d accountFlags=0x%08X securityPolicy=0x%08X twoFactor=%d\\n"
"[AS] diag %-6s: LICENCE IS BORROWED - app %u is family-shared from %llu. Servers that ban family sharing will let this account in and then kick it.\\n")F180136d80T",
    R"F180136d80F(57: if (param_2 == (longlong *)0x0) {
59: return;
79: if (-1 < iVar6) {
84: if (iVar6 < 0) {
87: else {
91: if (iVar6 < 0) {
94: else {
98: if (iVar6 < 0) {
101: else {
106: if (iVar6 < 0) {
109: else {
115: if (-1 < iVar6) {
119: if (-1 < iVar6) {
135: if (uVar10 != 0) {
136: if (uVar10 != uVar1) {
139: goto LAB_180137028;
141: if (uVar10 != 0) {
144: goto LAB_180137028;
149: LAB_180137028:
151: if (iVar6 < 0) {
154: else {
159: if (iVar6 < 0) {
162: else {
167: if (-1 < iVar6) {
171: if (iVar6 < 0) {
174: else {
178: if (iVar6 < 0) {
181: else {
185: if (iVar6 < 0) {
188: else {
192: if (iVar6 < 0) {
195: else {
207: if (iVar6 < 0) {
210: else {
215: return;)F180136d80F",
    R"F180136d80U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180137028.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 80: (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2,4000,1);.
TODO: resolve the indirect call in body 88: local_e8 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);.
TODO: resolve the indirect call in body 95: cVar5 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2,4000);.
TODO: resolve the indirect call in body 102: uVar8 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2,4000);.
TODO: resolve the indirect call in body 110: cVar2 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);.
TODO: resolve the indirect call in body 116: uVar7 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);.
TODO: resolve the indirect call in body 121: (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2,local_c8,0);.
TODO: resolve the indirect call in body 155: cVar5 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);.
TODO: resolve the indirect call in body 163: uVar8 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);.
TODO: resolve the indirect call in body 168: uVar9 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);.
TODO: resolve the indirect call in body 175: cVar5 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2,4000);.
TODO: resolve the indirect call in body 182: cVar2 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);.
TODO: resolve the indirect call in body 189: cVar3 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);.
TODO: resolve the indirect call in body 196: cVar4 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2);.
TODO: resolve the indirect call in body 211: cVar5 = (**(code **)(*param_2 + (longlong)iVar6 * 8))(param_2,&local_d0);.)F180136d80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180136d80() noexcept {
    return kFunction_0x180136d80;
}

// 0x180137260 FUN_180137260
// source: re/dump/decompile/0x180137260_FUN_180137260.c
// size: 253 bytes; thunk: false
// body sha256: 0b47e79a8be3e4cbddfaf661193d7722f80bd621bc16fe3cc5c972ca1e6cea07
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180137260{
    "0x180137260",
    "FUN_180137260",
    R"F180137260S(undefined FUN_180137260())F180137260S",
    R"B180137260(// 0x180137260  FUN_180137260
// size=253 thunk=false
// signature: undefined FUN_180137260()
// status: ok


void FUN_180137260(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  *param_1 = 0;
  *param_4 = 0;
  plVar5 = (longlong *)FUN_1801323e0(param_3);
  if ((plVar5 != (longlong *)0x0) && (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)) {
    uVar6 = FUN_180132160(plVar5);
    *param_4 = uVar6;
    iVar3 = FUN_1801318c0(plVar5);
    if (iVar3 < 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = (**(code **)(*plVar5 + (longlong)iVar3 * 8))(plVar5);
    }
    iVar3 = FUN_1801318c0(plVar5);
    if (iVar3 < 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar5 + (longlong)iVar3 * 8))(plVar5,4000);
    }
    iVar3 = FUN_1801318c0(plVar5);
    if (iVar3 < 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = (**(code **)(*plVar5 + (longlong)iVar3 * 8))(plVar5);
    }
    FUN_180012b20(param_1,0xa0,0xffffffffffffffff," connectTokens=%d ownershipTicket=%d loggedOn=%d"
                  ,cVar2 != '\0',uVar4,cVar1 != '\0');
  }
  return;
}


)B180137260",
    "0b47e79a8be3e4cbddfaf661193d7722f80bd621bc16fe3cc5c972ca1e6cea07",
    R"F180137260C(FUN_180012b20
FUN_1801318c0
FUN_180132160
FUN_1801323e0)F180137260C",
    R"F180137260D()F180137260D",
    R"F180137260T(" connectTokens=%d ownershipTicket=%d loggedOn=%d")F180137260T",
    R"F180137260F(20: if ((plVar5 != (longlong *)0x0) && (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)) {
24: if (iVar3 < 0) {
27: else {
31: if (iVar3 < 0) {
34: else {
38: if (iVar3 < 0) {
41: else {
47: return;)F180137260F",
    R"F180137260U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 28: cVar1 = (**(code **)(*plVar5 + (longlong)iVar3 * 8))(plVar5);.
TODO: resolve the indirect call in body 35: uVar4 = (**(code **)(*plVar5 + (longlong)iVar3 * 8))(plVar5,4000);.
TODO: resolve the indirect call in body 42: cVar2 = (**(code **)(*plVar5 + (longlong)iVar3 * 8))(plVar5);.)F180137260U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180137260() noexcept {
    return kFunction_0x180137260;
}

// 0x180137380 FUN_180137380
// source: re/dump/decompile/0x180137380_FUN_180137380.c
// size: 450 bytes; thunk: false
// body sha256: 0bf376fddd020ba1fbadb63a452062651148c58af4a75a2e88ecdd5e68ad1e54
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180137380{
    "0x180137380",
    "FUN_180137380",
    R"F180137380S(undefined FUN_180137380())F180137380S",
    R"B180137380(// 0x180137380  FUN_180137380
// size=450 thunk=false
// signature: undefined FUN_180137380()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_180137380(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined8 param_5)

{
  ulonglong uVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_1b8 [32];
  undefined1 *local_198;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_178 [160];
  undefined1 local_d8 [160];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_1b8;
  local_188 = 0;
  FUN_180137260(local_d8,param_2,param_1,&local_188);
  DAT_180409c98 = 0;
  local_198 = (undefined1 *)param_5;
  iVar2 = (*DAT_180409c68)(param_1,param_2,param_3,param_4);
  if (param_4 == (undefined4 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *param_4;
  }
  local_180 = 0;
  FUN_180137260(local_178);
  LOCK();
  UNLOCK();
  iVar6 = DAT_180409c5c + 1;
  if (iVar2 == 0) {
    local_198 = local_178;
    DAT_180409c5c = DAT_180409c5c + 1;
    FUN_180014410("[AS] TICKET #%d: REFUSED (handle=0) as %llu\n[AS]   before:%s\n[AS]   after :%s\n"
                  ,iVar6,local_188,local_d8);
  }
  else {
    local_198 = (undefined1 *)local_188;
    DAT_180409c5c = DAT_180409c5c + 1;
    FUN_180014410("[AS] TICKET #%d: handle=%u bytes=%u as %llu\n",iVar6,iVar2,uVar7);
    if ((DAT_180409c29 != '\0') && (DAT_180409c49 != '\0')) {
      DVar3 = GetTickCount();
      iVar6 = (int)(DAT_180409c98 >> 0x20);
      uVar1 = DAT_180409c98;
      while (DAT_180409c98 = uVar1, iVar6 != iVar2) {
        DVar4 = GetTickCount();
        if (2999 < DVar4 - DVar3) {
          FUN_180014410("[AS] ticket %u NOT acknowledged within %u ms - letting the connect go out anyway; a kick with STEAM validation rejected right after the join is explained by this line\n"
                        ,iVar2,3000);
          return iVar2;
        }
        Sleep(10);
        uVar1 = DAT_180409c98;
        iVar6 = (int)(DAT_180409c98 >> 0x20);
      }
      uVar5 = FUN_180132470(uVar1 & 0xffffffff);
      DVar4 = GetTickCount();
      local_198 = (undefined1 *)uVar5;
      FUN_180014410("[AS] ticket %u acknowledged by Steam after %u ms (EResult=%u %s)\n",iVar2,
                    DVar4 - DVar3,uVar1 & 0xffffffff);
    }
  }
  return iVar2;
}


)B180137380",
    "0bf376fddd020ba1fbadb63a452062651148c58af4a75a2e88ecdd5e68ad1e54",
    R"F180137380C(FUN_180014410
FUN_180132470
FUN_180137260)F180137380C",
    R"F180137380D(DAT_1803da4c0
DAT_180409c29
DAT_180409c49
DAT_180409c5c
DAT_180409c68
DAT_180409c98)F180137380D",
    R"F180137380T("[AS] TICKET #%d: handle=%u bytes=%u as %llu\\n"
"[AS] ticket %u acknowledged by Steam after %u ms (EResult=%u %s)\\n"
"[AS] TICKET #%d: REFUSED (handle=0) as %llu\\n[AS]   before:%s\\n[AS]   after :%s\\n"
"[AS] ticket %u NOT acknowledged within %u ms - letting the connect go out anyway; a kick with STEAM validation rejected right after the join is explained by this line\\n")F180137380T",
    R"F180137380F(34: if (param_4 == (undefined4 *)0x0) {
37: else {
45: if (iVar2 == 0) {
51: else {
55: if ((DAT_180409c29 != '\0') && (DAT_180409c49 != '\0')) {
59: while (DAT_180409c98 = uVar1, iVar6 != iVar2) {
61: if (2999 < DVar4 - DVar3) {
64: return iVar2;
77: return iVar2;)F180137380F",
    R"F180137380U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_180409c29.
TODO: recover the declaration, type and value for global/data reference DAT_180409c49.
TODO: recover the declaration, type and value for global/data reference DAT_180409c5c.
TODO: recover the declaration, type and value for global/data reference DAT_180409c68.
TODO: recover the declaration, type and value for global/data reference DAT_180409c98.
TODO: resolve the indirect call in body 33: iVar2 = (*DAT_180409c68)(param_1,param_2,param_3,param_4);.)F180137380U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180137380() noexcept {
    return kFunction_0x180137380;
}

// 0x180137550 FUN_180137550
// source: re/dump/decompile/0x180137550_FUN_180137550.c
// size: 49 bytes; thunk: false
// body sha256: 06338f00947eb2e953b21718e2f975423c2c0a92ed7ba5691c968ca838ac90e8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180137550{
    "0x180137550",
    "FUN_180137550",
    R"F180137550S(undefined FUN_180137550())F180137550S",
    R"B180137550(// 0x180137550  FUN_180137550
// size=49 thunk=false
// signature: undefined FUN_180137550()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180137550(undefined8 param_1,undefined4 param_2)

{
  FUN_180014410(
               "[AS] TICKET cancel: handle=%u (if a server is validating this one, it will kick with STEAM validation rejected)\n"
               );
                    /* WARNING: Could not recover jumptable at 0x00018013757a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_180409c60)(param_1,param_2);
  return;
}


)B180137550",
    "06338f00947eb2e953b21718e2f975423c2c0a92ed7ba5691c968ca838ac90e8",
    R"F180137550C(FUN_180014410)F180137550C",
    R"F180137550D()F180137550D",
    R"F180137550T("[AS] TICKET cancel: handle=%u (if a server is validating this one, it will kick with STEAM validation rejected)\\n")F180137550T",
    R"F180137550F(18: return;)F180137550F",
    R"F180137550U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 17: (*_DAT_180409c60)(param_1,param_2);.)F180137550U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180137550() noexcept {
    return kFunction_0x180137550;
}

// 0x180137590 FUN_180137590
// source: re/dump/decompile/0x180137590_FUN_180137590.c
// size: 170 bytes; thunk: false
// body sha256: ce5d2096200a0e2c8ddac1a84284a1d867c55e6de04ea1c09c1c237bb1f07d08
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180137590{
    "0x180137590",
    "FUN_180137590",
    R"F180137590S(undefined FUN_180137590())F180137590S",
    R"B180137590(// 0x180137590  FUN_180137590
// size=170 thunk=false
// signature: undefined FUN_180137590()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180137590(undefined8 param_1,char *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  plVar1 = DAT_180409c80;
  if (DAT_180409c80 == (longlong *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar3 = FUN_1801318c0(DAT_180409c80,param_2,"BLoggedOn");
    if (iVar3 < 0) {
      uVar4 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + (longlong)iVar3 * 8))(plVar1);
      uVar4 = (uint)(cVar2 != '\0');
    }
  }
  pcVar5 = "(no reason given)";
  if (param_2 != (char *)0x0) {
    pcVar5 = param_2;
  }
  FUN_180014410("[AS] *** SERVER CLOSED THE CONNECTION: \"%s\" [deployed=%d as %llu, our session loggedOn=%d]\n"
                ,pcVar5,DAT_180409c29 != '\0',DAT_180409c30,uVar4);
                    /* WARNING: Could not recover jumptable at 0x000180137633. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_DAT_180409c40)(param_1,param_2);
  return;
}


)B180137590",
    "ce5d2096200a0e2c8ddac1a84284a1d867c55e6de04ea1c09c1c237bb1f07d08",
    R"F180137590C(FUN_180014410
FUN_1801318c0)F180137590C",
    R"F180137590D(DAT_180409c29
DAT_180409c30
DAT_180409c80)F180137590D",
    R"F180137590T("BLoggedOn"
"(no reason given)"
"[AS] *** SERVER CLOSED THE CONNECTION: \\\"%s\\\" [deployed=%d as %llu, our session loggedOn=%d]\\n")F180137590T",
    R"F180137590F(19: if (DAT_180409c80 == (longlong *)0x0) {
22: else {
24: if (iVar3 < 0) {
27: else {
33: if (param_2 != (char *)0x0) {
41: return;)F180137590F",
    R"F180137590U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180409c29.
TODO: recover the declaration, type and value for global/data reference DAT_180409c30.
TODO: recover the declaration, type and value for global/data reference DAT_180409c80.
TODO: resolve the indirect call in body 28: cVar2 = (**(code **)(*plVar1 + (longlong)iVar3 * 8))(plVar1);.
TODO: resolve the indirect call in body 40: (*_DAT_180409c40)(param_1,param_2);.)F180137590U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180137590() noexcept {
    return kFunction_0x180137590;
}

// 0x180137640 FUN_180137640
// source: re/dump/decompile/0x180137640_FUN_180137640.c
// size: 422 bytes; thunk: false
// body sha256: 4be14a744db4d9db0166dcb339cb4036bda350d5f46af6de9d2412cad20a43e6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180137640{
    "0x180137640",
    "FUN_180137640",
    R"F180137640S(undefined FUN_180137640())F180137640S",
    R"B180137640(// 0x180137640  FUN_180137640
// size=422 thunk=false
// signature: undefined FUN_180137640()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_180137640(void)

{
  longlong *plVar1;
  int iVar2;
  HMODULE pHVar3;
  HANDLE pvVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int *piVar8;
  ulonglong uVar9;
  int *piVar10;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  pHVar3 = GetModuleHandleA("engine.dll");
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if (pHVar3 != (HMODULE)0x0) {
    pvVar4 = GetCurrentProcess();
    iVar2 = K32GetModuleInformation(pvVar4,pHVar3,&local_28,0x18);
    if (iVar2 != 0) {
      uVar6 = uStack_20 & 0xffffffff;
      lVar7 = 0;
      if (0x10 < uVar6) {
        do {
          plVar1 = (longlong *)((longlong)&pHVar3->unused + lVar7);
          if ((((*(char *)((longlong)&pHVar3->unused + lVar7) == 'D') &&
               (*plVar1 == s_Disconnect___s__18033ca90._0_8_)) &&
              (plVar1[1] == s_Disconnect___s__18033ca90._8_8_)) &&
             ((char)plVar1[2] == s_Disconnect___s__18033ca90[0x10])) {
            if (plVar1 == (longlong *)0x0) {
              return (int *)0x0;
            }
            lVar7 = 0;
            piVar10 = (int *)0x0;
            uVar9 = 0;
            do {
              if (((*(char *)((longlong)&pHVar3->unused + uVar9) == 'H') &&
                  (*(char *)((longlong)&pHVar3->unused + uVar9 + 1) == -0x73)) &&
                 ((*(char *)((longlong)&pHVar3->unused + uVar9 + 2) == '\r' &&
                  (((longlong *)
                    ((longlong)&pHVar3[1].unused +
                    (longlong)*(int *)((longlong)&pHVar3->unused + uVar9 + 3) + uVar9 + 3) == plVar1
                   && (*(int *)((longlong)&pHVar3[1].unused + uVar9 + 3) == DAT_18030fce0)))))) {
                uVar5 = 8;
                do {
                  if (uVar9 < uVar5) break;
                  piVar8 = (int *)((uVar9 - uVar5) + (longlong)pHVar3);
                  if ((*piVar8 == DAT_18033d5c8) && ((short)piVar8[1] == DAT_18033d5cc)) {
                    lVar7 = lVar7 + 1;
                    piVar10 = piVar8;
                    break;
                  }
                  uVar5 = uVar5 + 1;
                } while (uVar5 < 0x61);
              }
              uVar5 = uVar9 + 0xc;
              uVar9 = uVar9 + 1;
              if (uVar6 < uVar5) {
                if (lVar7 == 1) {
                  FUN_180014410("[AS] ConnectionClosing resolved: %p (engine+0x%llX) - the server\'s own disconnect reason will now be in this log\n"
                                ,piVar10,(longlong)piVar10 - (longlong)pHVar3);
                  return piVar10;
                }
                FUN_180014410("[AS] ConnectionClosing: %zu candidates - not hooking (re-run tools/find_disconnect_reason.py against the new engine.dll)\n"
                              ,lVar7);
                return (int *)0x0;
              }
            } while( true );
          }
          uVar9 = lVar7 + 0x12;
          lVar7 = lVar7 + 1;
        } while (uVar9 <= uVar6);
      }
    }
  }
  return (int *)0x0;
}


)B180137640",
    "4be14a744db4d9db0166dcb339cb4036bda350d5f46af6de9d2412cad20a43e6",
    R"F180137640C(FUN_180014410)F180137640C",
    R"F180137640D(DAT_18030fce0
DAT_18033d5c8
DAT_18033d5cc
DAT_1803da4c0)F180137640D",
    R"F180137640T("engine.dll"
"[AS] ConnectionClosing resolved: %p (engine+0x%llX) - the server\\'s own disconnect reason will now be in this log\\n"
"[AS] ConnectionClosing: %zu candidates - not hooking (re-run tools/find_disconnect_reason.py against the new engine.dll)\\n")F180137640T",
    R"F180137640F(33: if (pHVar3 != (HMODULE)0x0) {
36: if (iVar2 != 0) {
39: if (0x10 < uVar6) {
40: do {
42: if ((((*(char *)((longlong)&pHVar3->unused + lVar7) == 'D') &&
46: if (plVar1 == (longlong *)0x0) {
47: return (int *)0x0;
52: do {
53: if (((*(char *)((longlong)&pHVar3->unused + uVar9) == 'H') &&
61: do {
62: if (uVar9 < uVar5) break;
64: if ((*piVar8 == DAT_18033d5c8) && ((short)piVar8[1] == DAT_18033d5cc)) {
67: break;
74: if (uVar6 < uVar5) {
75: if (lVar7 == 1) {
78: return piVar10;
82: return (int *)0x0;
92: return (int *)0x0;)F180137640F",
    R"F180137640U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18030fce0.
TODO: recover the declaration, type and value for global/data reference DAT_18033d5c8.
TODO: recover the declaration, type and value for global/data reference DAT_18033d5cc.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180137640U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180137640() noexcept {
    return kFunction_0x180137640;
}

// 0x1801377f0 FUN_1801377f0
// source: re/dump/decompile/0x1801377f0_FUN_1801377f0.c
// size: 563 bytes; thunk: false
// body sha256: 649676b7fe12c2ed1405a65119a20b16cd4f7d1cdabf43bdf104f481dac4d2c1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801377f0{
    "0x1801377f0",
    "FUN_1801377f0",
    R"F1801377f0S(undefined FUN_1801377f0())F1801377f0S",
    R"B1801377f0(// 0x1801377f0  FUN_1801377f0
// size=563 thunk=false
// signature: undefined FUN_1801377f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801377f0(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  HMODULE pHVar6;
  HANDLE pvVar7;
  char *pcVar8;
  HMODULE pHVar9;
  undefined1 auStack_108 [32];
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
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  cVar2 = DAT_180409c8c;
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  LOCK();
  DAT_180409c8c = 1;
  UNLOCK();
  if (cVar2 == '\0') {
    local_68 = &local_e8;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    FUN_18001d080(&local_e8,"E8 ? ? ? ? 48 8B C8 44 88 74 24 30 48 8D 44 24 50",0x31);
    local_60 = &local_c8;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    FUN_18001d080(&local_c8,"engine.dll",10);
    lVar4 = FUN_180015f40(&local_c8,&local_e8);
    local_58 = &local_a8;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    FUN_18001d080(&local_a8,"48 8D BB B4 00 00 00 83 3F 00 0F 87",0x23);
    local_50 = &local_88;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_70 = 0;
    FUN_18001d080(&local_88,"engine.dll",10);
    lVar5 = FUN_180015f40(&local_88,&local_a8);
    if ((lVar4 == 0) || (lVar5 == 0)) {
      FUN_180014410("[AS] CSteam3Client: signature miss (callSite=%p gate=%p) - the engine\'s ticket cache will NOT be reset, so only the first account will join\n"
                    ,lVar4,lVar5);
    }
    else {
      pcVar8 = (char *)((longlong)*(int *)(lVar4 + 1) + 5 + lVar4);
      if ((((*pcVar8 == 'H') && (pcVar8[1] == -0x73)) && (pcVar8[2] == '\x05')) &&
         (pcVar8[7] == -0x3d)) {
        pHVar9 = (HMODULE)(pcVar8 + (longlong)*(int *)(pcVar8 + 3) + 7);
        iVar1 = *(int *)(lVar5 + 3);
        pHVar6 = GetModuleHandleA("engine.dll");
        local_48 = 0;
        uStack_40 = 0;
        local_38 = 0;
        if (pHVar6 != (HMODULE)0x0) {
          pvVar7 = GetCurrentProcess();
          iVar3 = K32GetModuleInformation(pvVar7,pHVar6,&local_48,0x18);
          if (((iVar3 != 0) && (pHVar6 <= pHVar9)) &&
             ((pHVar9 < (HMODULE)((longlong)&pHVar6->unused + (uStack_40 & 0xffffffff)) &&
              (iVar1 - 0x40U < 0x3fc1)))) {
            LOCK();
            UNLOCK();
            LOCK();
            UNLOCK();
            DAT_180409c88 = iVar1;
            DAT_180409c90 = pHVar9;
            FUN_180014410("[AS] CSteam3Client resolved: instance=%p m_cubTicket=+0x%X (engine+0x%llX)\n"
                          ,pHVar9,iVar1,(longlong)pHVar9 - (longlong)pHVar6);
            return;
          }
        }
        FUN_180014410("[AS] CSteam3Client: instance %p / m_cubTicket +0x%X failed validation\n",
                      pHVar9,iVar1);
      }
      else {
        FUN_180014410("[AS] CSteam3Client: %p is not the lea/ret accessor - not resolving\n",pcVar8,
                      lVar5);
      }
    }
  }
  return;
}


)B1801377f0",
    "649676b7fe12c2ed1405a65119a20b16cd4f7d1cdabf43bdf104f481dac4d2c1",
    R"F1801377f0C(FUN_180014410
FUN_180015f40
FUN_18001d080)F1801377f0C",
    R"F1801377f0D(DAT_1803da4c0
DAT_180409c88
DAT_180409c8c
DAT_180409c90)F1801377f0D",
    R"F1801377f0T("engine.dll"
"48 8D BB B4 00 00 00 83 3F 00 0F 87"
"E8 ? ? ? ? 48 8B C8 44 88 74 24 30 48 8D 44 24 50"
"[AS] CSteam3Client: %p is not the lea/ret accessor - not resolving\\n"
"[AS] CSteam3Client: instance %p / m_cubTicket +0x%X failed validation\\n"
"[AS] CSteam3Client resolved: instance=%p m_cubTicket=+0x%X (engine+0x%llX)\\n"
"[AS] CSteam3Client: signature miss (callSite=%p gate=%p) - the engine\\'s ticket cache will NOT be reset, so only the first account will join\\n")F1801377f0T",
    R"F1801377f0F(52: if (cVar2 == '\0') {
79: if ((lVar4 == 0) || (lVar5 == 0)) {
83: else {
85: if ((((*pcVar8 == 'H') && (pcVar8[1] == -0x73)) && (pcVar8[2] == '\x05')) &&
93: if (pHVar6 != (HMODULE)0x0) {
96: if (((iVar3 != 0) && (pHVar6 <= pHVar9)) &&
107: return;
113: else {
119: return;)F1801377f0F",
    R"F1801377f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_180409c88.
TODO: recover the declaration, type and value for global/data reference DAT_180409c8c.
TODO: recover the declaration, type and value for global/data reference DAT_180409c90.)F1801377f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801377f0() noexcept {
    return kFunction_0x1801377f0;
}

// 0x180137a30 FUN_180137a30
// source: re/dump/decompile/0x180137a30_FUN_180137a30.c
// size: 74 bytes; thunk: false
// body sha256: 9ae6801e192d3ea624f930257dc88ef53f026e5c8ca50179304be9aaec3e50a3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180137a30{
    "0x180137a30",
    "FUN_180137a30",
    R"F180137a30S(undefined FUN_180137a30())F180137a30S",
    R"B180137a30(// 0x180137a30  FUN_180137a30
// size=74 thunk=false
// signature: undefined FUN_180137a30()
// status: ok


undefined8 FUN_180137a30(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  FUN_1801377f0();
  if ((DAT_180409c90 == 0) || (DAT_180409c88 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined4 *)((ulonglong)DAT_180409c88 + DAT_180409c90);
    *(undefined4 *)((ulonglong)DAT_180409c88 + DAT_180409c90) = 0;
    FUN_180014410("[AS] engine auth-ticket cache cleared (%s): m_cubTicket %u -> 0\n",param_1,uVar1)
    ;
    uVar2 = 1;
  }
  return uVar2;
}


)B180137a30",
    "9ae6801e192d3ea624f930257dc88ef53f026e5c8ca50179304be9aaec3e50a3",
    R"F180137a30C(FUN_180014410
FUN_1801377f0)F180137a30C",
    R"F180137a30D(DAT_180409c88
DAT_180409c90)F180137a30D",
    R"F180137a30T("[AS] engine auth-ticket cache cleared (%s): m_cubTicket %u -> 0\\n")F180137a30T",
    R"F180137a30F(14: if ((DAT_180409c90 == 0) || (DAT_180409c88 == 0)) {
17: else {
24: return uVar2;)F180137a30F",
    R"F180137a30U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180409c88.
TODO: recover the declaration, type and value for global/data reference DAT_180409c90.)F180137a30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180137a30() noexcept {
    return kFunction_0x180137a30;
}

// 0x180137a90 FUN_180137a90
// source: re/dump/decompile/0x180137a90_FUN_180137a90.c
// size: 2266 bytes; thunk: false
// body sha256: 5583594ee14554f36e0a94bf1c452977bb6dac777e580260e70f47ee0c949c98
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180137a90{
    "0x180137a90",
    "FUN_180137a90",
    R"F180137a90S(undefined FUN_180137a90())F180137a90S",
    R"B180137a90(// 0x180137a90  FUN_180137a90
// size=2266 thunk=false
// signature: undefined FUN_180137a90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180137ffc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180137a90(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int extraout_EAX;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 ******ppppppuVar10;
  longlong lVar11;
  size_t sVar12;
  undefined8 *******pppppppuVar13;
  uint uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined1 auStackY_1a8 [32];
  undefined8 *******local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  ulonglong local_160;
  undefined4 local_158;
  undefined8 *local_150;
  char local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStackY_1a8;
  puVar16 = (undefined8 *)0x0;
  local_158 = 0;
  if ((DAT_180409c80 == (longlong *)0x0) || (DAT_180409c24 != 4)) {
    local_178 = (undefined8 *******)0x0;
    uStack_170 = 0;
    local_168 = 0;
    local_160 = 0;
    FUN_18001d080(&local_178,"log an account in first",0x17);
    local_150 = (undefined8 *)&DAT_1803e85c0;
    iVar3 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    pppppppuVar13 = &local_178;
    if (0xf < local_160) {
      pppppppuVar13 = local_178;
    }
    FUN_180212700(&DAT_1803e9e20,pppppppuVar13,local_168);
    _Mtx_unlock(&DAT_1803e85c0);
LAB_180138342:
    FUN_18020e450(&local_178);
    return 0;
  }
  if ((DAT_180409c30 & 0xffffffff) == 0) {
    local_178 = (undefined8 *******)0x0;
    uStack_170 = 0;
    local_168 = 0;
    local_160 = 0;
    FUN_18001d080(&local_178,"this session has no SteamID yet - not deploying it",0x32);
    local_150 = (undefined8 *)&DAT_1803e85c0;
    iVar3 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar3 == 0) {
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      pppppppuVar13 = &local_178;
      if (0xf < local_160) {
        pppppppuVar13 = local_178;
      }
      FUN_180212700(&DAT_1803e9e20,pppppppuVar13,local_168);
      _Mtx_unlock(&DAT_1803e85c0);
      FUN_18020e450(&local_178);
      FUN_180014410("[AS] deploy refused: SteamID is %llu\n",DAT_180409c30);
      return 0;
    }
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  if (DAT_180409c29 != '\0') {
    return 1;
  }
  iVar3 = FUN_1801318c0(DAT_180409c80,param_2,"BGameConnectTokensAvailable");
  plVar15 = DAT_180409c80;
  if ((-1 < iVar3) &&
     ((iVar3 = FUN_1801318c0(DAT_180409c80), iVar3 < 0 ||
      (cVar2 = (**(code **)(*plVar15 + (longlong)iVar3 * 8))(plVar15), cVar2 == '\0')))) {
    local_178 = (undefined8 *******)0x0;
    uStack_170 = 0;
    local_168 = 0;
    local_160 = 0;
    FUN_18001d080(&local_178,
                  "Steam has not handed this account a connect token yet - wait a few seconds and press Deploy again (deploying now would break joining until the game restarts)"
                  ,0x9d);
    local_150 = (undefined8 *)&DAT_1803e85c0;
    iVar3 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar3 == 0) {
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      pppppppuVar13 = &local_178;
      if (0xf < local_160) {
        pppppppuVar13 = local_178;
      }
      FUN_180212700(&DAT_1803e9e20,pppppppuVar13,local_168);
      _Mtx_unlock(&DAT_1803e85c0);
      FUN_18020e450(&local_178);
      FUN_180014410("[AS] deploy refused for %llu: connect-token pool is empty\n",DAT_180409c30);
      return 0;
    }
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  lVar7 = FUN_1801321e0();
  if (lVar7 == 0) {
    local_178 = (undefined8 *******)0x0;
    uStack_170 = 0;
    local_168 = 0;
    local_160 = 0;
    FUN_18001d080(&local_178,"steam_api64 did not hand over ISteamUser",0x28);
    local_150 = (undefined8 *)&DAT_1803e85c0;
    iVar3 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    pppppppuVar13 = &local_178;
    if (0xf < local_160) {
      pppppppuVar13 = local_178;
    }
    FUN_180212700(&DAT_1803e9e20,pppppppuVar13,local_168);
    _Mtx_unlock(&DAT_1803e85c0);
    goto LAB_180138342;
  }
  puVar8 = (undefined8 *)FUN_1801323e0(lVar7);
  if (puVar8 == (undefined8 *)0x0) {
    local_178 = (undefined8 *******)0x0;
    uStack_170 = 0;
    local_168 = 0;
    local_160 = 0;
    FUN_18001d080(&local_178,
                  "ISteamUser adapter layout changed - re-run tools/analyze_steamclient.py",0x47);
    local_150 = (undefined8 *)&DAT_1803e85c0;
    iVar3 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    pppppppuVar13 = &local_178;
    if (0xf < local_160) {
      pppppppuVar13 = local_178;
    }
    FUN_180212700(&DAT_1803e9e20,pppppppuVar13,local_168);
    _Mtx_unlock(&DAT_1803e85c0);
    goto LAB_180138342;
  }
  plVar15 = (longlong *)*puVar8;
  DAT_180409c38 = plVar15;
  DAT_180409c78 = puVar8;
  iVar3 = FUN_1801318c0(plVar15);
  puVar9 = puVar16;
  if (-1 < iVar3) {
    local_150 = (undefined8 *)0x0;
    (**(code **)(*plVar15 + (longlong)iVar3 * 8))(plVar15,&local_150);
    puVar9 = local_150;
  }
  LOCK();
  UNLOCK();
  DAT_180409c50 = puVar9;
  *puVar8 = DAT_180409c80;
  LOCK();
  DAT_180409c29 = '\x01';
  UNLOCK();
  FUN_180014410("[AS] deploy: adapter=%p slot=%p was=%p now=%p (game SteamID -> %llu)\n",lVar7,
                puVar8,DAT_180409c38);
  if (DAT_180409ca0 == '\0') {
    FUN_180138c70();
    local_150 = (undefined8 *)&DAT_1803e8610;
    iVar3 = _Mtx_lock(&DAT_1803e8610);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    if (DAT_1803e865c == 0x7fffffff) {
      DAT_1803e865c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    plVar15 = (longlong *)((DAT_1803e9e50 - DAT_1803e9e48 >> 3) * 0x6db6db6db6db6db7);
    _Mtx_unlock(&DAT_1803e8610);
    if ((DAT_1803e85b4 == -1) && (plVar15 == (longlong *)0x0)) goto LAB_180138019;
    DAT_180409c49 = 1;
    local_150 = (undefined8 *)0x0;
    local_150 = (undefined8 *)FUN_1802d8350(8);
    *local_150 = FUN_180138760;
    local_158 = 1;
    ppppppuVar10 = (undefined8 ******)
                   _beginthreadex((void *)0x0,0,FUN_180220c30,local_150,0,(uint *)&uStack_170);
    uVar14 = uStack_170._4_4_;
    local_178 = (undefined8 *******)ppppppuVar10;
    if (ppppppuVar10 != (undefined8 ******)0x0) {
      local_150 = (undefined8 *)0x0;
      local_158 = 0;
      if (DAT_1805c3920 != 0) {
                    /* WARNING: Subroutine does not return */
        terminate();
      }
      DAT_1805c3920 = (uint)uStack_170;
      local_178 = (undefined8 *******)0x0;
      uStack_170 = 0;
      _DAT_1805c3924 = uVar14;
      _DAT_1805c3918 = ppppppuVar10;
      FUN_180014410("[AS] service loop started - draining %zu pooled pipe(s), active pipe %d\n",
                    plVar15,DAT_1803e85b4);
      goto LAB_180138019;
    }
    uStack_170 = (ulonglong)uStack_170._4_4_ << 0x20;
    std::_Throw_Cpp_error(6);
    iVar3 = extraout_EAX;
  }
  else {
LAB_180138019:
    FUN_180137a30("deploy");
    cVar2 = DAT_180409c70;
    LOCK();
    DAT_180409c70 = '\x01';
    UNLOCK();
    if (((cVar2 == '\0') && (lVar7 = FUN_1801321e0(), lVar7 != 0)) &&
       (lVar11 = FUN_180131880(lVar7), lVar11 != 0)) {
      lVar11 = FUN_180131880(lVar7);
      lVar7 = FUN_180131880(lVar7);
      puVar8 = puVar16;
      if (lVar7 != 0) {
        do {
          uVar14 = (uint)puVar8;
          cVar2 = FUN_1801311e0(*(undefined8 *)(lVar7 + (longlong)puVar8 * 8));
          if (cVar2 == '\0') break;
          uVar14 = uVar14 + 1;
          puVar8 = (undefined8 *)(ulonglong)uVar14;
        } while ((int)uVar14 < 0x200);
        if (0x11 < uVar14) {
          uVar4 = FUN_180242fc0(*(undefined8 *)(lVar11 + 0x68),FUN_180137380,&DAT_180409c68);
          uVar5 = FUN_180242fc0(*(undefined8 *)(lVar11 + 0x88),FUN_180137550,&DAT_180409c60);
          FUN_180243560(*(undefined8 *)(lVar11 + 0x68),1);
          FUN_180243560(*(undefined8 *)(lVar11 + 0x88),1);
          FUN_180014410("[AS] ticket trace installed (GetAuthSessionTicket=%d Cancel=%d) - every ticket the ENGINE asks for is now in the log\n"
                        ,uVar4,uVar5);
        }
      }
    }
    if (((DAT_180409c48 == '\0') && (lVar7 = FUN_180137640(), lVar7 != 0)) &&
       ((iVar3 = FUN_180242fc0(lVar7,FUN_180137590,&DAT_180409c40), iVar3 == 0 &&
        (iVar3 = FUN_180243560(lVar7,1), iVar3 == 0)))) {
      LOCK();
      DAT_180409c48 = '\x01';
      UNLOCK();
    }
    plVar15 = DAT_180409c80;
    iVar3 = FUN_1801318c0(DAT_180409c80);
    if (iVar3 < 0) goto LAB_180138188;
  }
  uVar14 = (**(code **)(*plVar15 + (longlong)iVar3 * 8))(plVar15,4000);
  puVar16 = (undefined8 *)(ulonglong)uVar14;
LAB_180138188:
  plVar15 = DAT_180409c80;
  iVar3 = FUN_1801318c0(DAT_180409c80);
  if (iVar3 < 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = (**(code **)(*plVar15 + (longlong)iVar3 * 8))(plVar15);
  }
  FUN_180014410("[AS] post-deploy: ownershipTicket=%d connectTokens=%d (no ticket probe - a probe spends a connect token, and an empty pool dead-ends the launch)\n"
                ,puVar16,cVar2 != '\0');
  FUN_180012b20(local_148,0x100,0xffffffffffffffff,"deployed - the game now speaks as %llu");
  local_178 = (undefined8 *******)0x0;
  uStack_170 = 0;
  local_168 = 0;
  local_160 = 0;
  sVar12 = strlen(local_148);
  FUN_18001d080(&local_178,local_148,sVar12);
  local_150 = (undefined8 *)&DAT_1803e85c0;
  iVar3 = _Mtx_lock(&DAT_1803e85c0);
  if (iVar3 == 0) {
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    pppppppuVar13 = &local_178;
    if (0xf < local_160) {
      pppppppuVar13 = local_178;
    }
    FUN_180212700(&DAT_1803e9e20,pppppppuVar13,local_168);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_178);
    return 1;
  }
  std::_Throw_Cpp_error(5);
  pcVar1 = (code *)swi(3);
  uVar6 = (*pcVar1)();
  return uVar6;
}


)B180137a90",
    "5583594ee14554f36e0a94bf1c452977bb6dac777e580260e70f47ee0c949c98",
    R"F180137a90C(FUN_180012b20
FUN_180014410
FUN_18001d080
FUN_1801311e0
FUN_180131880
FUN_1801318c0
FUN_1801321e0
FUN_1801323e0
FUN_180137380
FUN_180137550
FUN_180137590
FUN_180137640
FUN_180137a30
FUN_180138760
FUN_180138c70
FUN_18020e450
FUN_180212700
FUN_180220c30
FUN_180242fc0
FUN_180243560
FUN_1802d8350)F180137a90C",
    R"F180137a90D(LAB_180138019
LAB_180138188
LAB_180138342
DAT_1803da4c0
DAT_1803e85b4
DAT_1803e85c0
DAT_1803e860c
DAT_1803e8610
DAT_1803e865c
DAT_1803e9e20
DAT_1803e9e48
DAT_1803e9e50
DAT_180409c24
DAT_180409c29
DAT_180409c30
DAT_180409c38
DAT_180409c40
DAT_180409c48
DAT_180409c49
DAT_180409c50
DAT_180409c60
DAT_180409c68
DAT_180409c70
DAT_180409c78
DAT_180409c80
DAT_180409ca0
DAT_1805c3920)F180137a90D",
    R"F180137a90T("deploy"
"log an account in first"
"BGameConnectTokensAvailable"
"[AS] deploy refused: SteamID is %llu\\n"
"deployed - the game now speaks as %llu"
"steam_api64 did not hand over ISteamUser"
"this session has no SteamID yet - not deploying it"
"[AS] deploy refused for %llu: connect-token pool is empty\\n"
"[AS] deploy: adapter=%p slot=%p was=%p now=%p (game SteamID -> %llu)\\n"
"ISteamUser adapter layout changed - re-run tools/analyze_steamclient.py"
"[AS] service loop started - draining %zu pooled pipe(s), active pipe %d\\n"
"[AS] ticket trace installed (GetAuthSessionTicket=%d Cancel=%d) - every ticket the ENGINE asks for is now in the log\\n"
"[AS] post-deploy: ownershipTicket=%d connectTokens=%d (no ticket probe - a probe spends a connect token, and an empty pool dead-ends the launch)\\n"
"Steam has not handed this account a connect token yet - wait a few seconds and press Deploy again (deploying now would break joining until the game restarts)")F180137a90T",
    R"F180137a90F(45: if ((DAT_180409c80 == (longlong *)0x0) || (DAT_180409c24 != 4)) {
53: if (iVar3 != 0) {
57: return uVar6;
59: if (DAT_1803e860c == 0x7fffffff) {
64: if (0xf < local_160) {
69: LAB_180138342:
71: return 0;
73: if ((DAT_180409c30 & 0xffffffff) == 0) {
81: if (iVar3 == 0) {
82: if (DAT_1803e860c == 0x7fffffff) {
87: if (0xf < local_160) {
94: return 0;
99: return uVar6;
101: if (DAT_180409c29 != '\0') {
102: return 1;
106: if ((-1 < iVar3) &&
118: if (iVar3 == 0) {
119: if (DAT_1803e860c == 0x7fffffff) {
124: if (0xf < local_160) {
131: return 0;
136: return uVar6;
139: if (lVar7 == 0) {
147: if (iVar3 != 0) {
151: return uVar6;
153: if (DAT_1803e860c == 0x7fffffff) {
158: if (0xf < local_160) {
163: goto LAB_180138342;
166: if (puVar8 == (undefined8 *)0x0) {
175: if (iVar3 != 0) {
179: return uVar6;
181: if (DAT_1803e860c == 0x7fffffff) {
186: if (0xf < local_160) {
191: goto LAB_180138342;
198: if (-1 < iVar3) {
212: if (DAT_180409ca0 == '\0') {
216: if (iVar3 != 0) {
220: return uVar6;
222: if (DAT_1803e865c == 0x7fffffff) {
228: if ((DAT_1803e85b4 == -1) && (plVar15 == (longlong *)0x0)) goto LAB_180138019;
238: if (ppppppuVar10 != (undefined8 ******)0x0) {
241: if (DAT_1805c3920 != 0) {
252: goto LAB_180138019;
258: else {
259: LAB_180138019:
265: if (((cVar2 == '\0') && (lVar7 = FUN_1801321e0(), lVar7 != 0)) &&
270: if (lVar7 != 0) {
271: do {
274: if (cVar2 == '\0') break;
278: if (0x11 < uVar14) {
288: if (((DAT_180409c48 == '\0') && (lVar7 = FUN_180137640(), lVar7 != 0)) &&
297: if (iVar3 < 0) goto LAB_180138188;
301: LAB_180138188:
304: if (iVar3 < 0) {
307: else {
321: if (iVar3 == 0) {
322: if (DAT_1803e860c == 0x7fffffff) {
327: if (0xf < local_160) {
333: return 1;
338: return uVar6;)F180137a90F",
    R"F180137a90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180138019.
TODO: recover the declaration, type and value for global/data reference LAB_180138188.
TODO: recover the declaration, type and value for global/data reference LAB_180138342.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85b4.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e860c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8610.
TODO: recover the declaration, type and value for global/data reference DAT_1803e865c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e20.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e48.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e50.
TODO: recover the declaration, type and value for global/data reference DAT_180409c24.
TODO: recover the declaration, type and value for global/data reference DAT_180409c29.
TODO: recover the declaration, type and value for global/data reference DAT_180409c30.
TODO: recover the declaration, type and value for global/data reference DAT_180409c38.
TODO: recover the declaration, type and value for global/data reference DAT_180409c40.
TODO: recover the declaration, type and value for global/data reference DAT_180409c48.
TODO: recover the declaration, type and value for global/data reference DAT_180409c49.
TODO: recover the declaration, type and value for global/data reference DAT_180409c50.
TODO: recover the declaration, type and value for global/data reference DAT_180409c60.
TODO: recover the declaration, type and value for global/data reference DAT_180409c68.
TODO: recover the declaration, type and value for global/data reference DAT_180409c70.
TODO: recover the declaration, type and value for global/data reference DAT_180409c78.
TODO: recover the declaration, type and value for global/data reference DAT_180409c80.
TODO: recover the declaration, type and value for global/data reference DAT_180409ca0.
TODO: recover the declaration, type and value for global/data reference DAT_1805c3920.
TODO: resolve the indirect call in body 55: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 56: uVar6 = (*pcVar1)();.
TODO: resolve the indirect call in body 97: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 98: uVar6 = (*pcVar1)();.
TODO: resolve the indirect call in body 108: (cVar2 = (**(code **)(*plVar15 + (longlong)iVar3 * 8))(plVar15), cVar2 == '\0')))) {.
TODO: resolve the indirect call in body 134: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 135: uVar6 = (*pcVar1)();.
TODO: resolve the indirect call in body 149: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 150: uVar6 = (*pcVar1)();.
TODO: resolve the indirect call in body 177: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 178: uVar6 = (*pcVar1)();.
TODO: resolve the indirect call in body 200: (**(code **)(*plVar15 + (longlong)iVar3 * 8))(plVar15,&local_150);.
TODO: resolve the indirect call in body 218: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 219: uVar6 = (*pcVar1)();.
TODO: resolve the indirect call in body 299: uVar14 = (**(code **)(*plVar15 + (longlong)iVar3 * 8))(plVar15,4000);.
TODO: resolve the indirect call in body 308: cVar2 = (**(code **)(*plVar15 + (longlong)iVar3 * 8))(plVar15);.
TODO: resolve the indirect call in body 336: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 337: uVar6 = (*pcVar1)();.)F180137a90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180137a90() noexcept {
    return kFunction_0x180137a90;
}

// 0x180138370 FUN_180138370
// source: re/dump/decompile/0x180138370_FUN_180138370.c
// size: 266 bytes; thunk: false
// body sha256: bb0d135c74faefafa15fed96f7d97a180908f961a2cf75da8b167cffcfce3daf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180138370{
    "0x180138370",
    "FUN_180138370",
    R"F180138370S(undefined FUN_180138370())F180138370S",
    R"B180138370(// 0x180138370  FUN_180138370
// size=266 thunk=false
// signature: undefined FUN_180138370()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180138370(undefined8 *param_1)

{
  LSTATUS LVar1;
  size_t sVar2;
  undefined1 auStackY_f8 [32];
  DWORD local_a8 [4];
  char local_98 [120];
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStackY_f8;
  local_98[0] = '\0';
  local_98[1] = '\0';
  local_98[2] = '\0';
  local_98[3] = '\0';
  local_98[4] = '\0';
  local_98[5] = '\0';
  local_98[6] = '\0';
  local_98[7] = '\0';
  local_98[8] = '\0';
  local_98[9] = '\0';
  local_98[10] = '\0';
  local_98[0xb] = '\0';
  local_98[0xc] = '\0';
  local_98[0xd] = '\0';
  local_98[0xe] = '\0';
  local_98[0xf] = '\0';
  local_98[0x10] = '\0';
  local_98[0x11] = '\0';
  local_98[0x12] = '\0';
  local_98[0x13] = '\0';
  local_98[0x14] = '\0';
  local_98[0x15] = '\0';
  local_98[0x16] = '\0';
  local_98[0x17] = '\0';
  local_98[0x18] = '\0';
  local_98[0x19] = '\0';
  local_98[0x1a] = '\0';
  local_98[0x1b] = '\0';
  local_98[0x1c] = '\0';
  local_98[0x1d] = '\0';
  local_98[0x1e] = '\0';
  local_98[0x1f] = '\0';
  local_98[0x20] = '\0';
  local_98[0x21] = '\0';
  local_98[0x22] = '\0';
  local_98[0x23] = '\0';
  local_98[0x24] = '\0';
  local_98[0x25] = '\0';
  local_98[0x26] = '\0';
  local_98[0x27] = '\0';
  local_98[0x28] = '\0';
  local_98[0x29] = '\0';
  local_98[0x2a] = '\0';
  local_98[0x2b] = '\0';
  local_98[0x2c] = '\0';
  local_98[0x2d] = '\0';
  local_98[0x2e] = '\0';
  local_98[0x2f] = '\0';
  local_98[0x30] = '\0';
  local_98[0x31] = '\0';
  local_98[0x32] = '\0';
  local_98[0x33] = '\0';
  local_98[0x34] = '\0';
  local_98[0x35] = '\0';
  local_98[0x36] = '\0';
  local_98[0x37] = '\0';
  local_98[0x38] = '\0';
  local_98[0x39] = '\0';
  local_98[0x3a] = '\0';
  local_98[0x3b] = '\0';
  local_98[0x3c] = '\0';
  local_98[0x3d] = '\0';
  local_98[0x3e] = '\0';
  local_98[0x3f] = '\0';
  local_98[0x40] = '\0';
  local_98[0x41] = '\0';
  local_98[0x42] = '\0';
  local_98[0x43] = '\0';
  local_98[0x44] = '\0';
  local_98[0x45] = '\0';
  local_98[0x46] = '\0';
  local_98[0x47] = '\0';
  local_98[0x48] = '\0';
  local_98[0x49] = '\0';
  local_98[0x4a] = '\0';
  local_98[0x4b] = '\0';
  local_98[0x4c] = '\0';
  local_98[0x4d] = '\0';
  local_98[0x4e] = '\0';
  local_98[0x4f] = '\0';
  local_98[0x50] = '\0';
  local_98[0x51] = '\0';
  local_98[0x52] = '\0';
  local_98[0x53] = '\0';
  local_98[0x54] = '\0';
  local_98[0x55] = '\0';
  local_98[0x56] = '\0';
  local_98[0x57] = '\0';
  local_98[0x58] = '\0';
  local_98[0x59] = '\0';
  local_98[0x5a] = '\0';
  local_98[0x5b] = '\0';
  local_98[0x5c] = '\0';
  local_98[0x5d] = '\0';
  local_98[0x5e] = '\0';
  local_98[0x5f] = '\0';
  local_98[0x60] = '\0';
  local_98[0x61] = '\0';
  local_98[0x62] = '\0';
  local_98[99] = '\0';
  local_98[100] = '\0';
  local_98[0x65] = '\0';
  local_98[0x66] = '\0';
  local_98[0x67] = '\0';
  local_98[0x68] = '\0';
  local_98[0x69] = '\0';
  local_98[0x6a] = '\0';
  local_98[0x6b] = '\0';
  local_98[0x6c] = '\0';
  local_98[0x6d] = '\0';
  local_98[0x6e] = '\0';
  local_98[0x6f] = '\0';
  local_98[0x70] = '\0';
  local_98[0x71] = '\0';
  local_98[0x72] = '\0';
  local_98[0x73] = '\0';
  local_98[0x74] = '\0';
  local_98[0x75] = '\0';
  local_98[0x76] = '\0';
  local_98[0x77] = '\0';
  uStack_20 = 0;
  local_a8[0] = 0x80;
  LVar1 = RegGetValueA((HKEY)0xffffffff80000001,"Software\\Valve\\Steam","AutoLoginUser",2,
                       (LPDWORD)0x0,local_98,local_a8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (LVar1 == 0) {
    uStack_20 = uStack_20 & 0xffffffffffffff;
    param_1[3] = 0;
    sVar2 = strlen(local_98);
    FUN_18001d080(param_1,local_98,sVar2);
  }
  else {
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  return param_1;
}


)B180138370",
    "bb0d135c74faefafa15fed96f7d97a180908f961a2cf75da8b167cffcfce3daf",
    R"F180138370C(FUN_18001d080)F180138370C",
    R"F180138370D(DAT_1803da4c0)F180138370D",
    R"F180138370T("AutoLoginUser"
"Software\\\\Valve\\\\Steam")F180138370T",
    R"F180138370F(148: if (LVar1 == 0) {
154: else {
158: return param_1;)F180138370F",
    R"F180138370U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180138370U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180138370() noexcept {
    return kFunction_0x180138370;
}

// 0x180138480 FUN_180138480
// source: re/dump/decompile/0x180138480_FUN_180138480.c
// size: 91 bytes; thunk: false
// body sha256: c78e1341a4b305c8f7ea83bf59adf427f3f7aeb31200644a44833ed432ae8d69
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180138480{
    "0x180138480",
    "FUN_180138480",
    R"F180138480S(undefined FUN_180138480())F180138480S",
    R"B180138480(// 0x180138480  FUN_180138480
// size=91 thunk=false
// signature: undefined FUN_180138480()
// status: ok


ulonglong FUN_180138480(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = DAT_180409c29;
  LOCK();
  DAT_180409c29 = 0;
  uVar2 = (ulonglong)bVar1;
  UNLOCK();
  if (bVar1 != 0) {
    if ((DAT_180409c78 != (longlong *)0x0) && (DAT_180409c38 != 0)) {
      *DAT_180409c78 = DAT_180409c38;
    }
    FUN_180137a30("restore");
    uVar2 = DAT_180409c50;
    DAT_180409c78 = (longlong *)0x0;
    DAT_180409c38 = 0;
    LOCK();
    DAT_180409c50 = 0;
    UNLOCK();
  }
  return uVar2;
}


)B180138480",
    "c78e1341a4b305c8f7ea83bf59adf427f3f7aeb31200644a44833ed432ae8d69",
    R"F180138480C(FUN_180137a30)F180138480C",
    R"F180138480D(DAT_180409c29
DAT_180409c38
DAT_180409c50
DAT_180409c78)F180138480D",
    R"F180138480T("restore")F180138480T",
    R"F180138480F(18: if (bVar1 != 0) {
19: if ((DAT_180409c78 != (longlong *)0x0) && (DAT_180409c38 != 0)) {
30: return uVar2;)F180138480F",
    R"F180138480U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180409c29.
TODO: recover the declaration, type and value for global/data reference DAT_180409c38.
TODO: recover the declaration, type and value for global/data reference DAT_180409c50.
TODO: recover the declaration, type and value for global/data reference DAT_180409c78.)F180138480U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180138480() noexcept {
    return kFunction_0x180138480;
}

// 0x1801384e0 FUN_1801384e0
// source: re/dump/decompile/0x1801384e0_FUN_1801384e0.c
// size: 37 bytes; thunk: false
// body sha256: 67714d4e34620c6513bdcd168faaff0766aea691a1ad7262fba02c995b42bb4a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801384e0{
    "0x1801384e0",
    "FUN_1801384e0",
    R"F1801384e0S(undefined FUN_1801384e0())F1801384e0S",
    R"B1801384e0(// 0x1801384e0  FUN_1801384e0
// size=37 thunk=false
// signature: undefined FUN_1801384e0()
// status: ok


void FUN_1801384e0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_1801321e0();
  puVar2 = (undefined8 *)FUN_1801323e0(uVar1);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_180132160(*puVar2);
  }
  return;
}


)B1801384e0",
    "67714d4e34620c6513bdcd168faaff0766aea691a1ad7262fba02c995b42bb4a",
    R"F1801384e0C(FUN_180132160
FUN_1801321e0
FUN_1801323e0)F1801384e0C",
    R"F1801384e0D()F1801384e0D",
    R"F1801384e0T()F1801384e0T",
    R"F1801384e0F(15: if (puVar2 != (undefined8 *)0x0) {
18: return;)F1801384e0F",
    R"F1801384e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1801384e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801384e0() noexcept {
    return kFunction_0x1801384e0;
}

// 0x180138510 FUN_180138510
// source: re/dump/decompile/0x180138510_FUN_180138510.c
// size: 251 bytes; thunk: false
// body sha256: c1c20a5980ca2e5862ebdc3848692fe4ec900e03dd47ffc493ca7c5b12a10168
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180138510{
    "0x180138510",
    "FUN_180138510",
    R"F180138510S(undefined FUN_180138510())F180138510S",
    R"B180138510(// 0x180138510  FUN_180138510
// size=251 thunk=false
// signature: undefined FUN_180138510()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180138510(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  size_t sVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  char local_98 [120];
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    local_98[0] = '\0';
    local_98[1] = '\0';
    local_98[2] = '\0';
    local_98[3] = '\0';
    local_98[4] = '\0';
    local_98[5] = '\0';
    local_98[6] = '\0';
    local_98[7] = '\0';
    local_98[8] = '\0';
    local_98[9] = '\0';
    local_98[10] = '\0';
    local_98[0xb] = '\0';
    local_98[0xc] = '\0';
    local_98[0xd] = '\0';
    local_98[0xe] = '\0';
    local_98[0xf] = '\0';
    local_98[0x10] = '\0';
    local_98[0x11] = '\0';
    local_98[0x12] = '\0';
    local_98[0x13] = '\0';
    local_98[0x14] = '\0';
    local_98[0x15] = '\0';
    local_98[0x16] = '\0';
    local_98[0x17] = '\0';
    local_98[0x18] = '\0';
    local_98[0x19] = '\0';
    local_98[0x1a] = '\0';
    local_98[0x1b] = '\0';
    local_98[0x1c] = '\0';
    local_98[0x1d] = '\0';
    local_98[0x1e] = '\0';
    local_98[0x1f] = '\0';
    local_98[0x20] = '\0';
    local_98[0x21] = '\0';
    local_98[0x22] = '\0';
    local_98[0x23] = '\0';
    local_98[0x24] = '\0';
    local_98[0x25] = '\0';
    local_98[0x26] = '\0';
    local_98[0x27] = '\0';
    local_98[0x28] = '\0';
    local_98[0x29] = '\0';
    local_98[0x2a] = '\0';
    local_98[0x2b] = '\0';
    local_98[0x2c] = '\0';
    local_98[0x2d] = '\0';
    local_98[0x2e] = '\0';
    local_98[0x2f] = '\0';
    local_98[0x30] = '\0';
    local_98[0x31] = '\0';
    local_98[0x32] = '\0';
    local_98[0x33] = '\0';
    local_98[0x34] = '\0';
    local_98[0x35] = '\0';
    local_98[0x36] = '\0';
    local_98[0x37] = '\0';
    local_98[0x38] = '\0';
    local_98[0x39] = '\0';
    local_98[0x3a] = '\0';
    local_98[0x3b] = '\0';
    local_98[0x3c] = '\0';
    local_98[0x3d] = '\0';
    local_98[0x3e] = '\0';
    local_98[0x3f] = '\0';
    local_98[0x40] = '\0';
    local_98[0x41] = '\0';
    local_98[0x42] = '\0';
    local_98[0x43] = '\0';
    local_98[0x44] = '\0';
    local_98[0x45] = '\0';
    local_98[0x46] = '\0';
    local_98[0x47] = '\0';
    local_98[0x48] = '\0';
    local_98[0x49] = '\0';
    local_98[0x4a] = '\0';
    local_98[0x4b] = '\0';
    local_98[0x4c] = '\0';
    local_98[0x4d] = '\0';
    local_98[0x4e] = '\0';
    local_98[0x4f] = '\0';
    local_98[0x50] = '\0';
    local_98[0x51] = '\0';
    local_98[0x52] = '\0';
    local_98[0x53] = '\0';
    local_98[0x54] = '\0';
    local_98[0x55] = '\0';
    local_98[0x56] = '\0';
    local_98[0x57] = '\0';
    local_98[0x58] = '\0';
    local_98[0x59] = '\0';
    local_98[0x5a] = '\0';
    local_98[0x5b] = '\0';
    local_98[0x5c] = '\0';
    local_98[0x5d] = '\0';
    local_98[0x5e] = '\0';
    local_98[0x5f] = '\0';
    local_98[0x60] = '\0';
    local_98[0x61] = '\0';
    local_98[0x62] = '\0';
    local_98[99] = '\0';
    local_98[100] = '\0';
    local_98[0x65] = '\0';
    local_98[0x66] = '\0';
    local_98[0x67] = '\0';
    local_98[0x68] = '\0';
    local_98[0x69] = '\0';
    local_98[0x6a] = '\0';
    local_98[0x6b] = '\0';
    local_98[0x6c] = '\0';
    local_98[0x6d] = '\0';
    local_98[0x6e] = '\0';
    local_98[0x6f] = '\0';
    local_98[0x70] = '\0';
    local_98[0x71] = '\0';
    local_98[0x72] = '\0';
    local_98[0x73] = '\0';
    local_98[0x74] = '\0';
    local_98[0x75] = '\0';
    local_98[0x76] = '\0';
    local_98[0x77] = '\0';
    uStack_20 = 0;
    local_a0 = param_1;
    cVar1 = FUN_180131ef0(param_2,local_98);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    if (cVar1 == '\0') {
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
    }
    else {
      uStack_20 = uStack_20 & 0xffffffffffffff;
      param_1[3] = 0;
      sVar2 = strlen(local_98);
      FUN_18001d080(param_1,local_98,sVar2);
    }
  }
  return param_1;
}


)B180138510",
    "c1c20a5980ca2e5862ebdc3848692fe4ec900e03dd47ffc493ca7c5b12a10168",
    R"F180138510C(FUN_18001d080
FUN_180131ef0)F180138510C",
    R"F180138510D(DAT_1803da4c0)F180138510D",
    R"F180138510T()F180138510T",
    R"F180138510F(23: if (param_2 == 0) {
30: else {
157: if (cVar1 == '\0') {
161: else {
168: return param_1;)F180138510F",
    R"F180138510U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180138510U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180138510() noexcept {
    return kFunction_0x180138510;
}

// 0x180138610 FUN_180138610
// source: re/dump/decompile/0x180138610_FUN_180138610.c
// size: 95 bytes; thunk: false
// body sha256: 04a4f3d4d742400d8f730884ddf9840aefa786327b226efbe8101c090db216c6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180138610{
    "0x180138610",
    "FUN_180138610",
    R"F180138610S(undefined FUN_180138610())F180138610S",
    R"B180138610(// 0x180138610  FUN_180138610
// size=95 thunk=false
// signature: undefined FUN_180138610()
// status: ok


undefined8
FUN_180138610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if ((DAT_180409c29 == '\0') || (lVar3 = DAT_180409c38, DAT_180409c38 == 0)) {
    uVar1 = FUN_1801321e0();
    plVar2 = (longlong *)FUN_1801323e0(uVar1);
    if (plVar2 == (longlong *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *plVar2;
    }
  }
  FUN_180138510(param_1,lVar3,param_3,param_4,uVar4);
  return param_1;
}


)B180138610",
    "04a4f3d4d742400d8f730884ddf9840aefa786327b226efbe8101c090db216c6",
    R"F180138610C(FUN_1801321e0
FUN_1801323e0
FUN_180138510)F180138610C",
    R"F180138610D(DAT_180409c29
DAT_180409c38)F180138610D",
    R"F180138610T()F180138610T",
    R"F180138610F(17: if ((DAT_180409c29 == '\0') || (lVar3 = DAT_180409c38, DAT_180409c38 == 0)) {
20: if (plVar2 == (longlong *)0x0) {
23: else {
28: return param_1;)F180138610F",
    R"F180138610U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180409c29.
TODO: recover the declaration, type and value for global/data reference DAT_180409c38.)F180138610U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180138610() noexcept {
    return kFunction_0x180138610;
}

// 0x180138670 FUN_180138670
// source: re/dump/decompile/0x180138670_FUN_180138670.c
// size: 128 bytes; thunk: false
// body sha256: 455705ce3937395cfe53f3b015c036d7f9fcb1f8bc68ecacbc56375f90209545
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180138670{
    "0x180138670",
    "FUN_180138670",
    R"F180138670S(undefined FUN_180138670())F180138670S",
    R"B180138670(// 0x180138670  FUN_180138670
// size=128 thunk=false
// signature: undefined FUN_180138670()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180138670(char *param_1)

{
  int iVar1;
  char ***_Str1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  char **local_30 [2];
  longlong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  FUN_180138610(local_30);
  if ((local_20 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(char **)param_1;
    }
    _Str1 = local_30;
    if (0xf < local_18) {
      _Str1 = (char ***)local_30[0];
    }
    iVar1 = _stricmp((char *)_Str1,param_1);
    if (iVar1 == 0) {
      uVar2 = 1;
      goto LAB_1801386d0;
    }
  }
  uVar2 = 0;
LAB_1801386d0:
  FUN_18020e450(local_30);
  return uVar2;
}


)B180138670",
    "455705ce3937395cfe53f3b015c036d7f9fcb1f8bc68ecacbc56375f90209545",
    R"F180138670C(FUN_180138610
FUN_18020e450)F180138670C",
    R"F180138670D(LAB_1801386d0
DAT_1803da4c0)F180138670D",
    R"F180138670T()F180138670T",
    R"F180138670F(23: if ((local_20 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
24: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
28: if (0xf < local_18) {
32: if (iVar1 == 0) {
34: goto LAB_1801386d0;
38: LAB_1801386d0:
40: return uVar2;)F180138670F",
    R"F180138670U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1801386d0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180138670U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180138670() noexcept {
    return kFunction_0x180138670;
}

// 0x1801386f0 FUN_1801386f0
// source: re/dump/decompile/0x1801386f0_FUN_1801386f0.c
// size: 110 bytes; thunk: false
// body sha256: 642d53eb15ebf5b95af1c4e928b702a92496c18fab0e6446b2e19f4cad00b604
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801386f0{
    "0x1801386f0",
    "FUN_1801386f0",
    R"F1801386f0S(undefined FUN_1801386f0())F1801386f0S",
    R"B1801386f0(// 0x1801386f0  FUN_1801386f0
// size=110 thunk=false
// signature: undefined FUN_1801386f0()
// status: ok


ulonglong FUN_1801386f0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  if ((DAT_180409c29 == '\0') || (plVar4 = DAT_180409c38, DAT_180409c38 == (longlong *)0x0)) {
    uVar1 = FUN_1801321e0();
    puVar2 = (undefined8 *)FUN_1801323e0(uVar1);
    if (puVar2 == (undefined8 *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = (longlong *)*puVar2;
    }
    if (plVar4 == (longlong *)0x0) {
      return (ulonglong)puVar2 & 0xffffffffffffff00;
    }
  }
  uVar3 = FUN_1801318c0(plVar4);
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    uVar3 = (**(code **)(*plVar4 + (longlong)(int)uVar3 * 8))(plVar4);
  }
  return uVar3;
}


)B1801386f0",
    "642d53eb15ebf5b95af1c4e928b702a92496c18fab0e6446b2e19f4cad00b604",
    R"F1801386f0C(FUN_1801318c0
FUN_1801321e0
FUN_1801323e0)F1801386f0C",
    R"F1801386f0D(DAT_180409c29
DAT_180409c38)F1801386f0D",
    R"F1801386f0T()F1801386f0T",
    R"F1801386f0F(15: if ((DAT_180409c29 == '\0') || (plVar4 = DAT_180409c38, DAT_180409c38 == (longlong *)0x0)) {
18: if (puVar2 == (undefined8 *)0x0) {
21: else {
24: if (plVar4 == (longlong *)0x0) {
25: return (ulonglong)puVar2 & 0xffffffffffffff00;
29: if ((int)uVar3 < 0) {
32: else {
35: return uVar3;)F1801386f0F",
    R"F1801386f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180409c29.
TODO: recover the declaration, type and value for global/data reference DAT_180409c38.
TODO: resolve the indirect call in body 33: uVar3 = (**(code **)(*plVar4 + (longlong)(int)uVar3 * 8))(plVar4);.)F1801386f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801386f0() noexcept {
    return kFunction_0x1801386f0;
}

// 0x180138760 FUN_180138760
// source: re/dump/decompile/0x180138760_FUN_180138760.c
// size: 1223 bytes; thunk: false
// body sha256: e3c902ea36f30235c81344bac322c9a7649031eb5014b7bb557dfc334be04fa1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180138760{
    "0x180138760",
    "FUN_180138760",
    R"F180138760S(undefined FUN_180138760())F180138760S",
    R"B180138760(// 0x180138760  FUN_180138760
// size=1223 thunk=false
// signature: undefined FUN_180138760()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180138760(void)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  HMODULE pHVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ushort uVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  uint local_e0;
  uint local_d8;
  uint local_d0;
  uint local_c8;
  uint local_c0;
  uint local_b8;
  uint local_b0;
  int local_a8;
  int *local_a0;
  int *local_98;
  undefined *local_90;
  undefined8 local_88;
  uint *puStack_80;
  ulonglong local_78;
  int *local_70;
  int *piStack_68;
  int *local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  local_88 = 0;
  puStack_80 = (uint *)0x0;
  local_78 = 0;
  local_70 = (int *)0x0;
  piStack_68 = (int *)0x0;
  local_60 = (int *)0x0;
  do {
    if ((((DAT_180409c49 == '\0') || (DAT_180409ca0 != '\0')) ||
        ((pHVar7 = DAT_1803fea40, DAT_1803fea40 == (HMODULE)0x0 &&
         (pHVar7 = GetModuleHandleA("steamclient64.dll"), pHVar7 == (HMODULE)0x0)))) ||
       (DAT_1803fea40 = pHVar7, lVar8 = FUN_180131270(), *(char *)(lVar8 + 0x30) == '\0')) {
      FUN_180014410("[AS] service loop stopped\n");
      FUN_18021e060(&local_70);
      return;
    }
    if (local_70 != piStack_68) {
      piStack_68 = local_70;
    }
    local_90 = &DAT_1803e8610;
    iVar6 = _Mtx_lock(&DAT_1803e8610);
    lVar8 = DAT_1803e9e50;
    if (iVar6 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar2 = DAT_1803e9e48;
    if (DAT_1803e865c == 0x7fffffff) {
      DAT_1803e865c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    for (; lVar2 != lVar8; lVar2 = lVar2 + 0x38) {
      if (*(int *)(lVar2 + 0x24) != -1) {
        if (piStack_68 == local_60) {
          FUN_180229d20(&local_70);
        }
        else {
          *piStack_68 = *(int *)(lVar2 + 0x24);
          piStack_68 = piStack_68 + 1;
        }
      }
    }
    _Mtx_unlock(&DAT_1803e8610);
    local_a0 = piStack_68;
    if ((local_70 == piStack_68) && (DAT_1803e85b4 != -1)) {
      if (piStack_68 == local_60) {
        FUN_180229d20(&local_70,piStack_68,&DAT_1803e85b4);
      }
      else {
        *piStack_68 = DAT_1803e85b4;
        piStack_68 = piStack_68 + 1;
      }
    }
    local_98 = local_70;
    local_a0 = piStack_68;
    if (local_70 != piStack_68) {
      do {
        iVar6 = *local_98;
        local_a8 = iVar6;
        lVar8 = FUN_180131270();
        cVar5 = (**(code **)(lVar8 + 0x18))(iVar6,&local_88);
        plVar3 = DAT_180409c80;
        while (DAT_180409c80 = plVar3, cVar5 != '\0') {
          local_88._4_4_ = (int)((ulonglong)local_88 >> 0x20);
          iVar4 = local_88._4_4_;
          if (local_88._4_4_ == 0xa3) {
            uVar9 = 0;
            uVar10 = 0;
            if ((puStack_80 != (uint *)0x0) && (7 < (int)local_78)) {
              uVar9 = *puStack_80;
              uVar10 = (ulonglong)puStack_80[1];
            }
            local_e8 = FUN_180132470(uVar10);
            FUN_180014410("[AS] *** callback 163 GetAuthSessionTicketResponse on pipe %d: handle=%u EResult=%u (%s)\n"
                          ,iVar6,uVar9,uVar10);
            DAT_180409c98 = (ulonglong)uVar9 << 0x20 | uVar10;
          }
          else if (local_88._4_4_ == 0x71) {
            uVar9 = 0;
            uVar14 = 0;
            uVar15 = 0;
            uVar16 = 0;
            uVar12 = 0;
            if ((puStack_80 != (uint *)0x0) && (uVar16 = 0, uVar12 = 0, 0xf < (int)local_78)) {
              uVar9 = *puStack_80;
              uVar16 = puStack_80[1];
              uVar12 = (ushort)puStack_80[2];
              uVar14 = (uint)*(ushort *)((longlong)puStack_80 + 10);
              uVar15 = puStack_80[3];
            }
            if (plVar3 == (longlong *)0x0) {
              uVar11 = 0xffffffff;
LAB_180138a0f:
              local_b8 = 0xffffffff;
            }
            else {
              iVar6 = FUN_1801318c0(plVar3,0x71,"BGameConnectTokensAvailable");
              if (iVar6 < 0) {
                cVar5 = '\0';
              }
              else {
                cVar5 = (**(code **)(*plVar3 + (longlong)iVar6 * 8))(plVar3);
              }
              plVar3 = DAT_180409c80;
              uVar11 = (uint)(cVar5 != '\0');
              if (DAT_180409c80 == (longlong *)0x0) goto LAB_180138a0f;
              iVar6 = FUN_1801318c0(DAT_180409c80);
              if (iVar6 < 0) {
                local_b8 = 0;
              }
              else {
                cVar5 = (**(code **)(*plVar3 + (longlong)iVar6 * 8))(plVar3);
                local_b8 = (uint)(cVar5 != '\0');
              }
            }
            switch(uVar15) {
            case 1:
              pcVar13 = "invalid version";
              break;
            case 2:
              pcVar13 = "generic";
              break;
            case 3:
              pcVar13 = "not logged on - our session lost its Steam connection";
              break;
            case 4:
              pcVar13 = "no licence for the app";
              break;
            case 5:
              pcVar13 = "cheater (VAC)";
              break;
            case 6:
              pcVar13 = "logged in elsewhere - the account signed in somewhere else";
              break;
            case 7:
              pcVar13 = "unknown text";
              break;
            case 8:
              pcVar13 = "incompatible anticheat";
              break;
            case 9:
              pcVar13 = "memory corruption";
              break;
            case 10:
              pcVar13 = "incompatible software";
              break;
            case 0xb:
              pcVar13 = "Steam connection lost";
              break;
            case 0xc:
              pcVar13 = "Steam connection error";
              break;
            case 0xd:
              pcVar13 = "Steam response timed out";
              break;
            case 0xe:
              pcVar13 = "Steam validation stalled";
              break;
            case 0xf:
              pcVar13 = "owner left / guest user";
              break;
            default:
              pcVar13 = "unknown deny reason";
            }
            local_d8 = uVar16 & 0xff;
            local_e0 = uVar16 >> 8 & 0xff;
            local_d0 = (uint)uVar12;
            local_e8 = CONCAT44(local_e8._4_4_,uVar16 >> 0x10) & 0xffffffff000000ff;
            local_c8 = uVar9;
            local_c0 = uVar14;
            local_b0 = uVar11;
            FUN_180014410("[AS] *** callback 113 ClientGameServerDeny: reason=%u (%s) server=%u.%u.%u.%u:%u app=%u secure=%u [our session now: loggedOn=%d connectTokens=%d]\n"
                          ,uVar15,pcVar13,uVar16 >> 0x18);
            iVar6 = local_a8;
          }
          else if (local_88._4_4_ - 0x65U < 3) {
            FUN_180014410("[AS] service: connection callback %d on pipe %d\n",iVar4,iVar6);
          }
          else {
            uVar9 = local_88._4_4_ - 100;
            if ((uVar9 < 0x15) && (uVar9 = 1 << ((byte)uVar9 & 0x1f), (DAT_1804258f0 & uVar9) == 0))
            {
              DAT_1804258f0 = DAT_1804258f0 | uVar9;
              FUN_180014410("[AS] service: first ISteamUser callback %d on pipe %d (%d bytes) - logged once per id\n"
                            ,iVar4,iVar6,local_78 & 0xffffffff);
            }
          }
          lVar8 = FUN_180131270();
          (**(code **)(lVar8 + 0x20))(iVar6);
          lVar8 = FUN_180131270();
          cVar5 = (**(code **)(lVar8 + 0x18))(iVar6,&local_88);
          plVar3 = DAT_180409c80;
        }
        local_98 = local_98 + 1;
      } while (local_98 != local_a0);
    }
    Sleep(0x32);
  } while( true );
}


)B180138760",
    "e3c902ea36f30235c81344bac322c9a7649031eb5014b7bb557dfc334be04fa1",
    R"F180138760C(FUN_180014410
FUN_180131270
FUN_1801318c0
FUN_180132470
FUN_18021e060
FUN_180229d20)F180138760C",
    R"F180138760D(LAB_180138a0f
DAT_1803da4c0
DAT_1803e85b4
DAT_1803e8610
DAT_1803e865c
DAT_1803e9e48
DAT_1803e9e50
DAT_1803fea40
DAT_180409c49
DAT_180409c80
DAT_180409c98
DAT_180409ca0
DAT_1804258f0)F180138760D",
    R"F180138760T("generic"
"unknown text"
"cheater (VAC)"
"invalid version"
"memory corruption"
"steamclient64.dll"
"unknown deny reason"
"Steam connection lost"
"incompatible software"
"Steam connection error"
"incompatible anticheat"
"no licence for the app"
"owner left / guest user"
"Steam response timed out"
"Steam validation stalled"
"BGameConnectTokensAvailable"
"[AS] service loop stopped\\n"
"[AS] service: connection callback %d on pipe %d\\n"
"not logged on - our session lost its Steam connection"
"logged in elsewhere - the account signed in somewhere else"
"[AS] service: first ISteamUser callback %d on pipe %d (%d bytes) - logged once per id\\n"
"[AS] *** callback 163 GetAuthSessionTicketResponse on pipe %d: handle=%u EResult=%u (%s)\\n"
"[AS] *** callback 113 ClientGameServerDeny: reason=%u (%s) server=%u.%u.%u.%u:%u app=%u secure=%u [our session now: loggedOn=%d connectTokens=%d]\\n")F180138760T",
    R"F180138760F(56: do {
57: if ((((DAT_180409c49 == '\0') || (DAT_180409ca0 != '\0')) ||
63: return;
65: if (local_70 != piStack_68) {
71: if (iVar6 != 0) {
75: return;
78: if (DAT_1803e865c == 0x7fffffff) {
83: return;
85: for (; lVar2 != lVar8; lVar2 = lVar2 + 0x38) {
86: if (*(int *)(lVar2 + 0x24) != -1) {
87: if (piStack_68 == local_60) {
90: else {
98: if ((local_70 == piStack_68) && (DAT_1803e85b4 != -1)) {
99: if (piStack_68 == local_60) {
102: else {
109: if (local_70 != piStack_68) {
110: do {
116: while (DAT_180409c80 = plVar3, cVar5 != '\0') {
119: if (local_88._4_4_ == 0xa3) {
122: if ((puStack_80 != (uint *)0x0) && (7 < (int)local_78)) {
131: else if (local_88._4_4_ == 0x71) {
137: if ((puStack_80 != (uint *)0x0) && (uVar16 = 0, uVar12 = 0, 0xf < (int)local_78)) {
144: if (plVar3 == (longlong *)0x0) {
146: LAB_180138a0f:
149: else {
151: if (iVar6 < 0) {
154: else {
159: if (DAT_180409c80 == (longlong *)0x0) goto LAB_180138a0f;
161: if (iVar6 < 0) {
164: else {
169: switch(uVar15) {
170: case 1:
172: break;
173: case 2:
175: break;
176: case 3:
178: break;
179: case 4:
181: break;
182: case 5:
184: break;
185: case 6:
187: break;
188: case 7:
190: break;
191: case 8:
193: break;
194: case 9:
196: break;
197: case 10:
199: break;
200: case 0xb:
202: break;
203: case 0xc:
205: break;
206: case 0xd:
208: break;
209: case 0xe:
211: break;
212: case 0xf:
214: break;
229: else if (local_88._4_4_ - 0x65U < 3) {
232: else {
234: if ((uVar9 < 0x15) && (uVar9 = 1 << ((byte)uVar9 & 0x1f), (DAT_1804258f0 & uVar9) == 0)))F180138760F",
    R"F180138760U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180138a0f.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85b4.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8610.
TODO: recover the declaration, type and value for global/data reference DAT_1803e865c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e48.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e50.
TODO: recover the declaration, type and value for global/data reference DAT_1803fea40.
TODO: recover the declaration, type and value for global/data reference DAT_180409c49.
TODO: recover the declaration, type and value for global/data reference DAT_180409c80.
TODO: recover the declaration, type and value for global/data reference DAT_180409c98.
TODO: recover the declaration, type and value for global/data reference DAT_180409ca0.
TODO: recover the declaration, type and value for global/data reference DAT_1804258f0.
TODO: resolve the indirect call in body 73: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 74: (*pcVar1)();.
TODO: resolve the indirect call in body 81: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 82: (*pcVar1)();.
TODO: resolve the indirect call in body 114: cVar5 = (**(code **)(lVar8 + 0x18))(iVar6,&local_88);.
TODO: resolve the indirect call in body 155: cVar5 = (**(code **)(*plVar3 + (longlong)iVar6 * 8))(plVar3);.
TODO: resolve the indirect call in body 165: cVar5 = (**(code **)(*plVar3 + (longlong)iVar6 * 8))(plVar3);.
TODO: resolve the indirect call in body 242: (**(code **)(lVar8 + 0x20))(iVar6);.
TODO: resolve the indirect call in body 244: cVar5 = (**(code **)(lVar8 + 0x18))(iVar6,&local_88);.)F180138760U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180138760() noexcept {
    return kFunction_0x180138760;
}

// 0x180138c70 FUN_180138c70
// source: re/dump/decompile/0x180138c70_FUN_180138c70.c
// size: 124 bytes; thunk: false
// body sha256: 70f0b06a59e476259a37ef9ed27d51e480424d519ae873df270708a6b75a1c90
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180138c70{
    "0x180138c70",
    "FUN_180138c70",
    R"F180138c70S(undefined FUN_180138c70())F180138c70S",
    R"B180138c70(// 0x180138c70  FUN_180138c70
// size=124 thunk=false
// signature: undefined FUN_180138c70()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180138c70(void)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  DAT_180409c49 = 0;
  if (DAT_1805c3920 != 0) {
    if (DAT_1805c3920 == 0) {
      std::_Throw_Cpp_error(1);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar2 = _Thrd_id();
    if (DAT_1805c3920 == iVar2) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_18 = _DAT_1805c3918;
    uStack_14 = DAT_1805c3918_4;
    iStack_10 = DAT_1805c3920;
    uStack_c = _DAT_1805c3924;
    iVar2 = _Thrd_join(&local_18,0);
    if (iVar2 != 0) {
      std::_Throw_Cpp_error(2);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    _DAT_1805c3918 = 0;
    _DAT_1805c3920 = 0;
  }
  return;
}


)B180138c70",
    "70f0b06a59e476259a37ef9ed27d51e480424d519ae873df270708a6b75a1c90",
    R"F180138c70C()F180138c70C",
    R"F180138c70D(DAT_180409c49
DAT_1805c3920)F180138c70D",
    R"F180138c70T()F180138c70T",
    R"F180138c70F(20: if (DAT_1805c3920 != 0) {
21: if (DAT_1805c3920 == 0) {
25: return;
28: if (DAT_1805c3920 == iVar2) {
32: return;
39: if (iVar2 != 0) {
43: return;
48: return;)F180138c70F",
    R"F180138c70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180409c49.
TODO: recover the declaration, type and value for global/data reference DAT_1805c3920.
TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 24: (*pcVar1)();.
TODO: resolve the indirect call in body 30: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 31: (*pcVar1)();.
TODO: resolve the indirect call in body 41: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 42: (*pcVar1)();.)F180138c70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180138c70() noexcept {
    return kFunction_0x180138c70;
}

// 0x180138cf0 FUN_180138cf0
// source: re/dump/decompile/0x180138cf0_FUN_180138cf0.c
// size: 787 bytes; thunk: false
// body sha256: 4679973d1623d1bca3648593285cb3c40355d526bee0bde83bdb7c66507a9d62
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180138cf0{
    "0x180138cf0",
    "FUN_180138cf0",
    R"F180138cf0S(undefined FUN_180138cf0())F180138cf0S",
    R"B180138cf0(// 0x180138cf0  FUN_180138cf0
// size=787 thunk=false
// signature: undefined FUN_180138cf0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180138cf0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  byte bVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auStack_88 [32];
  int local_68;
  uint local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  plVar1 = DAT_180409c80;
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  if (DAT_180409c80 != (longlong *)0x0) {
    iVar5 = FUN_1801318c0(DAT_180409c80,param_2,"BUpdateAppOwnershipTicket");
    if (-1 < iVar5) {
      (**(code **)(*plVar1 + (longlong)iVar5 * 8))(plVar1,4000,0);
    }
    iVar5 = FUN_1801318c0(DAT_180409c80);
    if (iVar5 < 0) {
      FUN_180014410(
                   "[AS] BGameConnectTokensAvailable did not resolve - the connect-token gate is OFF for this session (a deploy into an empty pool can dead-end the launch)\n"
                   );
    }
    uVar9 = 0;
    iVar12 = 2000;
    do {
      plVar1 = DAT_180409c80;
      if (DAT_180409ca0 != '\0') {
        return 0;
      }
      if (DAT_180409c58 != '\0') {
        return 0;
      }
      if (iVar12 <= (int)uVar9) {
        iVar12 = uVar9 + 2000;
        iVar6 = FUN_1801318c0(DAT_180409c80);
        if (-1 < iVar6) {
          (**(code **)(*plVar1 + (longlong)iVar6 * 8))(plVar1,4000,0);
        }
      }
      plVar1 = DAT_180409c80;
      iVar6 = FUN_1801318c0(DAT_180409c80);
      if (iVar6 < 0) {
        cVar4 = '\0';
      }
      else {
        cVar4 = (**(code **)(*plVar1 + (longlong)iVar6 * 8))(plVar1);
      }
      plVar1 = DAT_180409c80;
      iVar6 = FUN_1801318c0(DAT_180409c80);
      if (iVar6 < 0) {
        cVar2 = '\0';
      }
      else {
        cVar2 = (**(code **)(*plVar1 + (longlong)iVar6 * 8))(plVar1,4000);
      }
      plVar1 = DAT_180409c80;
      iVar6 = FUN_1801318c0(DAT_180409c80);
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (**(code **)(*plVar1 + (longlong)iVar6 * 8))(plVar1,4000);
      }
      plVar1 = DAT_180409c80;
      if ((iVar5 < 0) ||
         ((iVar7 = FUN_1801318c0(DAT_180409c80), -1 < iVar7 &&
          (cVar3 = (**(code **)(*plVar1 + (longlong)iVar7 * 8))(plVar1), cVar3 != '\0')))) {
        bVar10 = 1;
      }
      else {
        bVar10 = 0;
      }
      if ((((cVar4 != '\0') && (cVar2 != '\0')) && (0 < iVar6)) && (bVar10 != 0)) {
        FUN_180014410("[AS] session ready after %d ms (ownershipTicket=%d connectTokens=%d)\n",uVar9
                      ,iVar6,bVar10);
        return 1;
      }
      if ((uVar9 != 0) && (uVar9 == (uVar9 / 2000) * 2000)) {
        local_60 = (uint)bVar10;
        local_68 = iVar6;
        FUN_180014410("[AS] waiting for the account to finish arriving: %d ms (loggedOn=%d ownsApp=%d ownershipTicket=%d connectTokens=%d)\n"
                      ,uVar9,cVar4 != '\0',cVar2 != '\0');
      }
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      while (DAT_1803e85b4 != -1) {
        lVar8 = FUN_180131270();
        cVar4 = (**(code **)(lVar8 + 0x18))(DAT_1803e85b4,&local_58);
        if (cVar4 == '\0') break;
        lVar8 = FUN_180131270();
        (**(code **)(lVar8 + 0x20))(DAT_1803e85b4);
      }
      Sleep(0xfa);
      plVar1 = DAT_180409c80;
      uVar9 = uVar9 + 0xfa;
    } while ((int)uVar9 < 20000);
    if (iVar5 < 0) {
      uVar11 = 0xffffffff;
    }
    else {
      iVar5 = FUN_1801318c0(DAT_180409c80);
      if (iVar5 < 0) {
        uVar11 = 0;
      }
      else {
        cVar4 = (**(code **)(*plVar1 + (longlong)iVar5 * 8))(plVar1);
        uVar11 = (ulonglong)(cVar4 != '\0');
      }
    }
    FUN_180014410("[AS] account did not become join-ready within %d ms (connectTokens=%d) - the deploy will refuse a session with no connect token rather than dead-end the launch\n"
                  ,20000,uVar11);
  }
  return 0;
}


)B180138cf0",
    "4679973d1623d1bca3648593285cb3c40355d526bee0bde83bdb7c66507a9d62",
    R"F180138cf0C(FUN_180014410
FUN_180131270
FUN_1801318c0)F180138cf0C",
    R"F180138cf0D(DAT_1803da4c0
DAT_1803e85b4
DAT_180409c58
DAT_180409c80
DAT_180409ca0)F180138cf0D",
    R"F180138cf0T("BUpdateAppOwnershipTicket"
"[AS] session ready after %d ms (ownershipTicket=%d connectTokens=%d)\\n"
"[AS] waiting for the account to finish arriving: %d ms (loggedOn=%d ownsApp=%d ownershipTicket=%d connectTokens=%d)\\n"
"[AS] BGameConnectTokensAvailable did not resolve - the connect-token gate is OFF for this session (a deploy into an empty pool can dead-end the launch)\\n"
"[AS] account did not become join-ready within %d ms (connectTokens=%d) - the deploy will refuse a session with no connect token rather than dead-end the launch\\n")F180138cf0T",
    R"F180138cf0F(34: if (DAT_180409c80 != (longlong *)0x0) {
36: if (-1 < iVar5) {
40: if (iVar5 < 0) {
47: do {
49: if (DAT_180409ca0 != '\0') {
50: return 0;
52: if (DAT_180409c58 != '\0') {
53: return 0;
55: if (iVar12 <= (int)uVar9) {
58: if (-1 < iVar6) {
64: if (iVar6 < 0) {
67: else {
72: if (iVar6 < 0) {
75: else {
80: if (iVar6 < 0) {
83: else {
87: if ((iVar5 < 0) ||
92: else {
95: if ((((cVar4 != '\0') && (cVar2 != '\0')) && (0 < iVar6)) && (bVar10 != 0)) {
98: return 1;
100: if ((uVar9 != 0) && (uVar9 == (uVar9 / 2000) * 2000)) {
109: while (DAT_1803e85b4 != -1) {
112: if (cVar4 == '\0') break;
120: if (iVar5 < 0) {
123: else {
125: if (iVar5 < 0) {
128: else {
136: return 0;)F180138cf0F",
    R"F180138cf0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85b4.
TODO: recover the declaration, type and value for global/data reference DAT_180409c58.
TODO: recover the declaration, type and value for global/data reference DAT_180409c80.
TODO: recover the declaration, type and value for global/data reference DAT_180409ca0.
TODO: resolve the indirect call in body 37: (**(code **)(*plVar1 + (longlong)iVar5 * 8))(plVar1,4000,0);.
TODO: resolve the indirect call in body 59: (**(code **)(*plVar1 + (longlong)iVar6 * 8))(plVar1,4000,0);.
TODO: resolve the indirect call in body 68: cVar4 = (**(code **)(*plVar1 + (longlong)iVar6 * 8))(plVar1);.
TODO: resolve the indirect call in body 76: cVar2 = (**(code **)(*plVar1 + (longlong)iVar6 * 8))(plVar1,4000);.
TODO: resolve the indirect call in body 84: iVar6 = (**(code **)(*plVar1 + (longlong)iVar6 * 8))(plVar1,4000);.
TODO: resolve the indirect call in body 89: (cVar3 = (**(code **)(*plVar1 + (longlong)iVar7 * 8))(plVar1), cVar3 != '\0')))) {.
TODO: resolve the indirect call in body 111: cVar4 = (**(code **)(lVar8 + 0x18))(DAT_1803e85b4,&local_58);.
TODO: resolve the indirect call in body 114: (**(code **)(lVar8 + 0x20))(DAT_1803e85b4);.
TODO: resolve the indirect call in body 129: cVar4 = (**(code **)(*plVar1 + (longlong)iVar5 * 8))(plVar1);.)F180138cf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180138cf0() noexcept {
    return kFunction_0x180138cf0;
}

// 0x180139010 FUN_180139010
// source: re/dump/decompile/0x180139010_FUN_180139010.c
// size: 959 bytes; thunk: false
// body sha256: ff0670f6bfedba63f0cd96b9c5902f00c413c6a6bab741316f2e42a3e99fe63f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180139010{
    "0x180139010",
    "FUN_180139010",
    R"F180139010S(undefined FUN_180139010())F180139010S",
    R"B180139010(// 0x180139010  FUN_180139010
// size=959 thunk=false
// signature: undefined FUN_180139010()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180139010(void)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 ****ppppuVar7;
  undefined1 auStack_78 [32];
  undefined8 ***local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  if (DAT_180409c80 == (longlong *)0x0) {
    local_58 = (undefined8 ****)0x0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_18001d080(&local_58,"no session to repair - sign an account in first",0x2f);
    local_38 = &DAT_1803e85c0;
    iVar4 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppuVar7 = &local_58;
    if (0xf < local_40) {
      ppppuVar7 = (undefined8 ****)local_58;
    }
    FUN_180212700(&DAT_1803e9e20,ppppuVar7,local_48);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_58);
    uVar5 = 0;
  }
  else {
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    while (DAT_1803e85b4 != -1) {
      lVar6 = FUN_180131270();
      cVar3 = (**(code **)(lVar6 + 0x18))(DAT_1803e85b4,&local_30);
      if (cVar3 == '\0') break;
      lVar6 = FUN_180131270();
      (**(code **)(lVar6 + 0x20))(DAT_1803e85b4);
    }
    iVar4 = FUN_1801318c0(DAT_180409c80);
    plVar2 = DAT_180409c80;
    if ((iVar4 < 0) ||
       ((iVar4 = FUN_1801318c0(DAT_180409c80), -1 < iVar4 &&
        (cVar3 = (**(code **)(*plVar2 + (longlong)iVar4 * 8))(plVar2), cVar3 != '\0')))) {
      cVar3 = FUN_180137a30("repair");
      local_58 = (undefined8 ****)0x0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0;
      if (cVar3 == '\0') {
        FUN_18001d080(&local_58,
                      "the engine\'s ticket cache could not be found - restart the game to clear it"
                      ,0x4b);
        local_38 = &DAT_1803e85c0;
        iVar4 = _Mtx_lock(&DAT_1803e85c0);
        if (iVar4 != 0) {
          std::_Throw_Cpp_error(5);
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return uVar5;
        }
        if (DAT_1803e860c == 0x7fffffff) {
          DAT_1803e860c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
        }
        ppppuVar7 = &local_58;
        if (0xf < local_40) {
          ppppuVar7 = (undefined8 ****)local_58;
        }
        FUN_180212700(&DAT_1803e9e20,ppppuVar7,local_48);
        _Mtx_unlock(&DAT_1803e85c0);
        FUN_18020e450(&local_58);
        FUN_180014410("[AS] repair: CSteam3Client did not resolve, m_cubTicket left alone\n");
        uVar5 = 0;
      }
      else {
        FUN_18001d080(&local_58,
                      "repaired - reconnect to the server and the game will ask Steam for a fresh ticket"
                      ,0x51);
        local_38 = &DAT_1803e85c0;
        iVar4 = _Mtx_lock(&DAT_1803e85c0);
        if (iVar4 != 0) {
          std::_Throw_Cpp_error(5);
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return uVar5;
        }
        if (DAT_1803e860c == 0x7fffffff) {
          DAT_1803e860c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
        }
        ppppuVar7 = &local_58;
        if (0xf < local_40) {
          ppppuVar7 = (undefined8 ****)local_58;
        }
        FUN_180212700(&DAT_1803e9e20,ppppuVar7,local_48);
        _Mtx_unlock(&DAT_1803e85c0);
        FUN_18020e450(&local_58);
        FUN_180014410("[AS] repair: connect tokens are back and the engine ticket cache is cleared (account %llu, deployed=%d)\n"
                      ,DAT_180409c30,DAT_180409c29 != '\0');
        uVar5 = 1;
      }
    }
    else {
      local_58 = (undefined8 ****)0x0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0;
      FUN_18001d080(&local_58,
                    "Steam has not handed this account a connect token back yet - wait a few seconds and press Repair again"
                    ,0x66);
      local_38 = &DAT_1803e85c0;
      iVar4 = _Mtx_lock(&DAT_1803e85c0);
      if (iVar4 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      ppppuVar7 = &local_58;
      if (0xf < local_40) {
        ppppuVar7 = (undefined8 ****)local_58;
      }
      FUN_180212700(&DAT_1803e9e20,ppppuVar7,local_48);
      _Mtx_unlock(&DAT_1803e85c0);
      FUN_18020e450(&local_58);
      FUN_180014410("[AS] repair: connect-token pool still empty for %llu - nothing to repair yet\n"
                    ,DAT_180409c30);
      uVar5 = 0;
    }
  }
  return uVar5;
}


)B180139010",
    "ff0670f6bfedba63f0cd96b9c5902f00c413c6a6bab741316f2e42a3e99fe63f",
    R"F180139010C(FUN_180014410
FUN_18001d080
FUN_180131270
FUN_1801318c0
FUN_180137a30
FUN_18020e450
FUN_180212700)F180139010C",
    R"F180139010D(DAT_1803da4c0
DAT_1803e85b4
DAT_1803e85c0
DAT_1803e860c
DAT_1803e9e20
DAT_180409c29
DAT_180409c30
DAT_180409c80)F180139010D",
    R"F180139010T("repair"
"no session to repair - sign an account in first"
"[AS] repair: CSteam3Client did not resolve, m_cubTicket left alone\\n"
"the engine\\'s ticket cache could not be found - restart the game to clear it"
"[AS] repair: connect-token pool still empty for %llu - nothing to repair yet\\n"
"repaired - reconnect to the server and the game will ask Steam for a fresh ticket"
"Steam has not handed this account a connect token back yet - wait a few seconds and press Repair again"
"[AS] repair: connect tokens are back and the engine ticket cache is cleared (account %llu, deployed=%d)\\n")F180139010T",
    R"F180139010F(31: if (DAT_180409c80 == (longlong *)0x0) {
39: if (iVar4 != 0) {
43: return uVar5;
45: if (DAT_1803e860c == 0x7fffffff) {
50: if (0xf < local_40) {
58: else {
62: while (DAT_1803e85b4 != -1) {
65: if (cVar3 == '\0') break;
71: if ((iVar4 < 0) ||
79: if (cVar3 == '\0') {
85: if (iVar4 != 0) {
89: return uVar5;
91: if (DAT_1803e860c == 0x7fffffff) {
96: if (0xf < local_40) {
105: else {
111: if (iVar4 != 0) {
115: return uVar5;
117: if (DAT_1803e860c == 0x7fffffff) {
122: if (0xf < local_40) {
133: else {
143: if (iVar4 != 0) {
147: return uVar5;
149: if (DAT_1803e860c == 0x7fffffff) {
154: if (0xf < local_40) {
165: return uVar5;)F180139010F",
    R"F180139010U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85b4.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e860c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e20.
TODO: recover the declaration, type and value for global/data reference DAT_180409c29.
TODO: recover the declaration, type and value for global/data reference DAT_180409c30.
TODO: recover the declaration, type and value for global/data reference DAT_180409c80.
TODO: resolve the indirect call in body 41: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 42: uVar5 = (*pcVar1)();.
TODO: resolve the indirect call in body 64: cVar3 = (**(code **)(lVar6 + 0x18))(DAT_1803e85b4,&local_30);.
TODO: resolve the indirect call in body 67: (**(code **)(lVar6 + 0x20))(DAT_1803e85b4);.
TODO: resolve the indirect call in body 73: (cVar3 = (**(code **)(*plVar2 + (longlong)iVar4 * 8))(plVar2), cVar3 != '\0')))) {.
TODO: resolve the indirect call in body 87: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 88: uVar5 = (*pcVar1)();.
TODO: resolve the indirect call in body 113: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 114: uVar5 = (*pcVar1)();.
TODO: resolve the indirect call in body 145: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 146: uVar5 = (*pcVar1)();.)F180139010U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180139010() noexcept {
    return kFunction_0x180139010;
}

// 0x1801393d0 FUN_1801393d0
// source: re/dump/decompile/0x1801393d0_FUN_1801393d0.c
// size: 358 bytes; thunk: false
// body sha256: 95b832b673fd3dabb51023162dc7ada8eb3a2b4cfe5f10d88d32766846c09d9b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801393d0{
    "0x1801393d0",
    "FUN_1801393d0",
    R"F1801393d0S(undefined FUN_1801393d0())F1801393d0S",
    R"B1801393d0(// 0x1801393d0  FUN_1801393d0
// size=358 thunk=false
// signature: undefined FUN_1801393d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801393d0(char param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  FUN_180014410("[AS] ---- diagnostics (app %u) - build %s %s ----\n",4000,"Sep  7 2026","21:33:34")
  ;
  FUN_180136d80(&DAT_18035b304,DAT_180409c80);
  if ((DAT_180409c29 == '\0') || (lVar5 = DAT_180409c38, DAT_180409c38 == 0)) {
    uVar3 = FUN_1801321e0();
    plVar4 = (longlong *)FUN_1801323e0(uVar3);
    if (plVar4 == (longlong *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *plVar4;
    }
  }
  FUN_180136d80(&DAT_1803476ec,lVar5);
  if (param_1 != '\0') {
    if ((DAT_180409c29 == '\0') || (lVar5 = DAT_180409c38, DAT_180409c38 == 0)) {
      uVar3 = FUN_1801321e0();
      plVar4 = (longlong *)FUN_1801323e0(uVar3);
      if (plVar4 == (longlong *)0x0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *plVar4;
      }
    }
    uVar1 = FUN_180136c90(lVar5);
    uVar2 = FUN_180136c90(DAT_180409c80);
    FUN_180014410("[AS] diag blob: ours=%d game=%d (one game connect token each)\n",uVar2,uVar1);
    lVar5 = FUN_1801321e0();
    if (lVar5 == 0) {
      iVar6 = 0;
      uVar1 = 0;
    }
    else {
      local_18 = 0;
      iVar6 = FUN_1801322f0(lVar5);
      uVar1 = local_18;
      if (iVar6 != 0) {
        FUN_180132370(lVar5,iVar6);
        uVar1 = local_18;
      }
    }
    FUN_180014410("[AS] diag ticket: ISteamUser::GetAuthSessionTicket -> handle=%u bytes=%u (0 = refused; NOT proof of a good session - a healthy-looking handle still got rejected by a server on 2026-08-24)\n"
                  ,iVar6,uVar1);
    return;
  }
  FUN_180014410(
               "[AS] diag ticket: skipped - a probe costs one of the 100 auth tickets this user will ever get. Ctrl+click Diagnose to spend one on purpose.\n"
               );
  return;
}


)B1801393d0",
    "95b832b673fd3dabb51023162dc7ada8eb3a2b4cfe5f10d88d32766846c09d9b",
    R"F1801393d0C(FUN_180014410
FUN_1801321e0
FUN_1801322f0
FUN_180132370
FUN_1801323e0
FUN_180136c90
FUN_180136d80)F1801393d0C",
    R"F1801393d0D(DAT_1803476ec
DAT_18035b304
DAT_1803da4c0
DAT_180409c29
DAT_180409c38
DAT_180409c80)F1801393d0D",
    R"F1801393d0T("21:33:34"
"Sep  7 2026"
"[AS] ---- diagnostics (app %u) - build %s %s ----\\n"
"[AS] diag blob: ours=%d game=%d (one game connect token each)\\n"
"[AS] diag ticket: skipped - a probe costs one of the 100 auth tickets this user will ever get. Ctrl+click Diagnose to spend one on purpose.\\n"
"[AS] diag ticket: ISteamUser::GetAuthSessionTicket -> handle=%u bytes=%u (0 = refused; NOT proof of a good session - a healthy-looking handle still got rejected by a server on 2026-08-24)\\n")F1801393d0T",
    R"F1801393d0F(26: if ((DAT_180409c29 == '\0') || (lVar5 = DAT_180409c38, DAT_180409c38 == 0)) {
29: if (plVar4 == (longlong *)0x0) {
32: else {
37: if (param_1 != '\0') {
38: if ((DAT_180409c29 == '\0') || (lVar5 = DAT_180409c38, DAT_180409c38 == 0)) {
41: if (plVar4 == (longlong *)0x0) {
44: else {
52: if (lVar5 == 0) {
56: else {
60: if (iVar6 != 0) {
67: return;
72: return;)F1801393d0F",
    R"F1801393d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803476ec.
TODO: recover the declaration, type and value for global/data reference DAT_18035b304.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_180409c29.
TODO: recover the declaration, type and value for global/data reference DAT_180409c38.
TODO: recover the declaration, type and value for global/data reference DAT_180409c80.)F1801393d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801393d0() noexcept {
    return kFunction_0x1801393d0;
}

// 0x180139540 FUN_180139540
// source: re/dump/decompile/0x180139540_FUN_180139540.c
// size: 256 bytes; thunk: false
// body sha256: 9d7bac73a40a8ecf201a03ea9bc8a39372f3da0aad5333d531f8490a81781ae9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180139540{
    "0x180139540",
    "FUN_180139540",
    R"F180139540S(undefined FUN_180139540())F180139540S",
    R"B180139540(// 0x180139540  FUN_180139540
// size=256 thunk=false
// signature: undefined FUN_180139540()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180139540(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68 [32];
  undefined1 local_48 [16];
  longlong local_38;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  puVar4 = (undefined8 *)FUN_1801367d0(local_28);
  puVar1 = (undefined8 *)puVar4[1];
  for (puVar4 = (undefined8 *)*puVar4; puVar4 != puVar1; puVar4 = puVar4 + 9) {
    lVar5 = FUN_180135100(local_68,puVar4);
    lVar5 = *(longlong *)(lVar5 + 0x10);
    FUN_18020e450(local_68);
    if (lVar5 == 0) {
      uVar2 = puVar4[4];
      FUN_1801338c0(local_48,puVar4,uVar2);
      if (local_38 == 0) {
        FUN_18020e450(local_48);
      }
      else {
        cVar3 = FUN_180134a00(puVar4,uVar2,local_48);
        FUN_18020e450(local_48);
        if (cVar3 != '\0') {
          puVar6 = puVar4;
          if (0xf < (ulonglong)puVar4[3]) {
            puVar6 = (undefined8 *)*puVar4;
          }
          FUN_180014410("[AS] token vault: picked up Steam\'s cached token for \'%s\'\n",puVar6);
        }
      }
    }
  }
  FUN_18020ad50(local_28);
  return;
}


)B180139540",
    "9d7bac73a40a8ecf201a03ea9bc8a39372f3da0aad5333d531f8490a81781ae9",
    R"F180139540C(FUN_180014410
FUN_1801338c0
FUN_180134a00
FUN_180135100
FUN_1801367d0
FUN_18020ad50
FUN_18020e450)F180139540C",
    R"F180139540D(DAT_1803da4c0)F180139540D",
    R"F180139540T("[AS] token vault: picked up Steam\\'s cached token for \\'%s\\'\\n")F180139540T",
    R"F180139540F(28: for (puVar4 = (undefined8 *)*puVar4; puVar4 != puVar1; puVar4 = puVar4 + 9) {
32: if (lVar5 == 0) {
35: if (local_38 == 0) {
38: else {
41: if (cVar3 != '\0') {
43: if (0xf < (ulonglong)puVar4[3]) {
52: return;)F180139540F",
    R"F180139540U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180139540U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180139540() noexcept {
    return kFunction_0x180139540;
}

// 0x180139640 FUN_180139640
// source: re/dump/decompile/0x180139640_FUN_180139640.c
// size: 1604 bytes; thunk: false
// body sha256: dd6109c6f3488295f994d6da6e5069f9dfb6298322079ab7cb668134f560715b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180139640{
    "0x180139640",
    "FUN_180139640",
    R"F180139640S(undefined FUN_180139640())F180139640S",
    R"B180139640(// 0x180139640  FUN_180139640
// size=1604 thunk=false
// signature: undefined FUN_180139640()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180139640(undefined8 *param_1)

{
  char cVar1;
  ulonglong *puVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  undefined8 *******pppppppuVar8;
  byte *******pppppppbVar9;
  char *******pppppppcVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_248 [32];
  longlong local_228;
  char *local_220;
  undefined8 local_218;
  undefined4 local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 *local_158;
  ulonglong *local_150;
  undefined1 local_148 [32];
  byte *******local_128;
  undefined8 uStack_120;
  ulonglong local_118;
  ulonglong local_110;
  char *******local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  ulonglong uStack_f0;
  undefined8 *******local_e8 [2];
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8 [9];
  undefined1 local_80;
  undefined1 local_78 [16];
  longlong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_248;
  *param_1 = 0;
  param_1[1] = 0;
  uVar11 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_208 = 1;
  local_158 = param_1;
  FUN_180132730(local_78);
  if (local_68 == 0) {
    local_208 = 0;
  }
  else {
    if (0x7fffffffffffffffU - local_68 < 0x16) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    local_218 = 0x16;
    local_220 = "\\config\\loginusers.vdf";
    local_228 = local_68;
    FUN_18020e930(local_148);
    local_208 = 3;
    FUN_180132b90(local_e8,local_148);
    local_208 = 1;
    FUN_18020e450(local_148);
    if (local_d8 == 0) {
      local_208 = 0;
    }
    else {
      uStack_100 = 0;
      local_f8 = _DAT_1803814b0;
      uStack_f0 = _UNK_1803814b8;
      local_108 = (char *******)0x0;
      bVar3 = false;
      local_c8[0] = 0;
      local_c8[2] = 0;
      local_c8[3] = 0;
      local_c8[4] = 0xf;
      local_c8[1] = 0;
      local_c8[6] = 0;
      local_c8[7] = 0;
      local_c8[8] = 0xf;
      local_c8[5] = 0;
      local_80 = 0;
      uVar12 = uVar11;
      if (local_d8 != 0) {
        do {
          pppppppuVar8 = local_e8;
          if (0xf < local_d0) {
            pppppppuVar8 = local_e8[0];
          }
          cVar1 = *(char *)((longlong)pppppppuVar8 + uVar11);
          iVar7 = (int)uVar12;
          if (cVar1 == '{') {
            if ((iVar7 == 1) && (bVar3)) {
              local_1f8 = 0;
              local_1e8 = 0;
              uStack_1e0 = 0;
              local_1d8 = 0xf;
              uStack_1f0 = 0;
              local_1c8 = 0;
              uStack_1c0 = 0;
              local_1b8 = 0xf;
              uStack_1d0 = 0;
              uStack_1b0 = 0;
              local_c8[0] = 0;
              FUN_18020e8a0(local_c8 + 1,&uStack_1f0);
              FUN_18020e8a0(local_c8 + 5,&uStack_1d0);
              local_80 = (undefined1)uStack_1b0;
              FUN_18020e450(&uStack_1d0);
              FUN_18020e450(&uStack_1f0);
              pppppppcVar10 = (char *******)&local_108;
              if (0xf < uStack_f0) {
                pppppppcVar10 = local_108;
              }
              local_c8[0] = _strtoui64((char *)pppppppcVar10,(char **)0x0,10);
            }
            bVar3 = false;
            uVar12 = (ulonglong)(iVar7 + 1);
          }
          else if (cVar1 == '}') {
            if (iVar7 == 2) {
              if ((local_c8[0] != 0) && (local_c8[3] != 0)) {
                puVar2 = (ulonglong *)param_1[1];
                if (puVar2 == (ulonglong *)param_1[2]) {
                  FUN_180224d40(param_1,puVar2,local_c8);
                }
                else {
                  *puVar2 = local_c8[0];
                  local_150 = puVar2;
                  FUN_18016d4c0(puVar2 + 1,local_c8 + 1);
                  FUN_18016d4c0(puVar2 + 5,local_c8 + 5);
                  *(undefined1 *)(puVar2 + 9) = local_80;
                  param_1[1] = param_1[1] + 0x50;
                }
              }
              local_1a8 = 0;
              local_198 = 0;
              uStack_190 = 0;
              local_188 = 0xf;
              uStack_1a0 = 0;
              local_178 = 0;
              uStack_170 = 0;
              local_168 = 0xf;
              uStack_180 = 0;
              uStack_160 = 0;
              local_c8[0] = 0;
              FUN_18020e8a0(local_c8 + 1,&uStack_1a0);
              FUN_18020e8a0(local_c8 + 5,&uStack_180);
              local_80 = (undefined1)uStack_160;
              FUN_18020e450(&uStack_180);
              FUN_18020e450(&uStack_1a0);
            }
            bVar3 = false;
            uVar6 = iVar7 - 1;
            if (iVar7 == 0) {
              uVar6 = 0;
            }
            uVar12 = (ulonglong)uVar6;
          }
          else if (cVar1 == '\"') {
            uStack_120 = 0;
            local_118 = 0;
            local_110 = 0xf;
            local_128 = (byte *******)0x0;
            uVar11 = uVar11 + 1;
            if (uVar11 < local_d8) {
              do {
                uVar4 = local_118;
                pppppppuVar8 = local_e8;
                if (0xf < local_d0) {
                  pppppppuVar8 = local_e8[0];
                }
                if (*(char *)((longlong)pppppppuVar8 + uVar11) == '\"') break;
                pppppppuVar8 = local_e8;
                if (0xf < local_d0) {
                  pppppppuVar8 = local_e8[0];
                }
                if ((*(char *)((longlong)pppppppuVar8 + uVar11) == '\\') && (uVar11 + 1 < local_d8))
                {
                  uVar11 = uVar11 + 1;
                }
                pppppppuVar8 = local_e8;
                if (0xf < local_d0) {
                  pppppppuVar8 = local_e8[0];
                }
                if (local_118 < local_110) {
                  local_118 = local_118 + 1;
                  pppppppbVar9 = (byte *******)&local_128;
                  if (0xf < local_110) {
                    pppppppbVar9 = local_128;
                  }
                  *(byte *)((longlong)pppppppbVar9 + uVar4) =
                       *(byte *)((longlong)pppppppuVar8 + uVar11);
                  *(byte *)((longlong)pppppppbVar9 + uVar4 + 1) = 0;
                }
                else {
                  FUN_18021abd0(&local_128);
                }
                uVar11 = uVar11 + 1;
              } while (uVar11 < local_d8);
            }
            uVar5 = local_110;
            uVar4 = local_118;
            if (bVar3) {
              if (iVar7 == 2) {
                pppppppcVar10 = (char *******)&local_108;
                if (0xf < uStack_f0) {
                  pppppppcVar10 = local_108;
                }
                iVar7 = _stricmp((char *)pppppppcVar10,"AccountName");
                if (iVar7 == 0) {
                  pppppppbVar9 = (byte *******)&local_128;
                  if (0xf < uVar5) {
                    pppppppbVar9 = local_128;
                  }
                  FUN_180212700(local_c8 + 1,pppppppbVar9,uVar4);
                }
                else {
                  pppppppcVar10 = (char *******)&local_108;
                  if (0xf < uStack_f0) {
                    pppppppcVar10 = local_108;
                  }
                  iVar7 = _stricmp((char *)pppppppcVar10,"PersonaName");
                  if (iVar7 == 0) {
                    pppppppbVar9 = (byte *******)&local_128;
                    if (0xf < uVar5) {
                      pppppppbVar9 = local_128;
                    }
                    FUN_180212700(local_c8 + 5,pppppppbVar9,uVar4);
                  }
                  else {
                    pppppppcVar10 = (char *******)&local_108;
                    if (0xf < uStack_f0) {
                      pppppppcVar10 = local_108;
                    }
                    iVar7 = _stricmp((char *)pppppppcVar10,"RememberPassword");
                    if (iVar7 == 0) {
                      pppppppbVar9 = (byte *******)&local_128;
                      if (0xf < uVar5) {
                        pppppppbVar9 = local_128;
                      }
                      if (uVar4 == 1) {
                        if (*(byte *)pppppppbVar9 == 0x31) {
                          uVar6 = 0;
                        }
                        else {
                          uVar6 = -(uint)(*(byte *)pppppppbVar9 < 0x31) | 1;
                        }
                        local_80 = uVar6 == 0;
                      }
                      else {
                        local_80 = 0;
                      }
                    }
                  }
                }
              }
              bVar3 = false;
            }
            else {
              pppppppbVar9 = (byte *******)&local_128;
              if (0xf < local_110) {
                pppppppbVar9 = local_128;
              }
              FUN_180212700(&local_108,pppppppbVar9,local_118);
              bVar3 = true;
            }
            FUN_18020e450(&local_128);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < local_d8);
      }
      local_208 = 0;
      FUN_18020e450(local_c8 + 5);
      FUN_18020e450(local_c8 + 1);
      FUN_18020e450(&local_108);
    }
    FUN_18020e450(local_e8);
  }
  FUN_18020e450(local_78);
  return param_1;
}


)B180139640",
    "dd6109c6f3488295f994d6da6e5069f9dfb6298322079ab7cb668134f560715b",
    R"F180139640C(FUN_1800130a0
FUN_180132730
FUN_180132b90
FUN_18016d4c0
FUN_18020e450
FUN_18020e8a0
FUN_18020e930
FUN_180212700
FUN_18021abd0
FUN_180224d40)F180139640C",
    R"F180139640D(DAT_1803da4c0)F180139640D",
    R"F180139640T("\\\\config\\\\loginusers.vdf"
");\n                if (iVar7 == 0) {\n                  pppppppbVar9 = (byte *******)&local_128;\n                  if (0xf < uVar5) {\n                    pppppppbVar9 = local_128;\n                  }\n                  FUN_180212700(local_c8 + 1,pppppppbVar9,uVar4);\n                }\n                else {\n                  pppppppcVar10 = (char *******)&local_108;\n                  if (0xf < uStack_f0) {\n                    pppppppcVar10 = local_108;\n                  }\n                  iVar7 = _stricmp((char *)pppppppcVar10,"
");\n                  if (iVar7 == 0) {\n                    pppppppbVar9 = (byte *******)&local_128;\n                    if (0xf < uVar5) {\n                      pppppppbVar9 = local_128;\n                    }\n                    FUN_180212700(local_c8 + 5,pppppppbVar9,uVar4);\n                  }\n                  else {\n                    pppppppcVar10 = (char *******)&local_108;\n                    if (0xf < uStack_f0) {\n                      pppppppcVar10 = local_108;\n                    }\n                    iVar7 = _stricmp((char *)pppppppcVar10,"
"') {\n            uStack_120 = 0;\n            local_118 = 0;\n            local_110 = 0xf;\n            local_128 = (byte *******)0x0;\n            uVar11 = uVar11 + 1;\n            if (uVar11 < local_d8) {\n              do {\n                uVar4 = local_118;\n                pppppppuVar8 = local_e8;\n                if (0xf < local_d0) {\n                  pppppppuVar8 = local_e8[0];\n                }\n                if (*(char *)((longlong)pppppppuVar8 + uVar11) == '\\\"') break;\n                pppppppuVar8 = local_e8;\n                if (0xf < local_d0) {\n                  pppppppuVar8 = local_e8[0];\n                }\n                if ((*(char *)((longlong)pppppppuVar8 + uVar11) == '\\\\') && (uVar11 + 1 < local_d8))\n                {\n                  uVar11 = uVar11 + 1;\n                }\n                pppppppuVar8 = local_e8;\n                if (0xf < local_d0) {\n                  pppppppuVar8 = local_e8[0];\n                }\n                if (local_118 < local_110) {\n                  local_118 = local_118 + 1;\n                  pppppppbVar9 = (byte *******)&local_128;\n                  if (0xf < local_110) {\n                    pppppppbVar9 = local_128;\n                  }\n                  *(byte *)((longlong)pppppppbVar9 + uVar4) =\n                       *(byte *)((longlong)pppppppuVar8 + uVar11);\n                  *(byte *)((longlong)pppppppbVar9 + uVar4 + 1) = 0;\n                }\n                else {\n                  FUN_18021abd0(&local_128);\n                }\n                uVar11 = uVar11 + 1;\n              } while (uVar11 < local_d8);\n            }\n            uVar5 = local_110;\n            uVar4 = local_118;\n            if (bVar3) {\n              if (iVar7 == 2) {\n                pppppppcVar10 = (char *******)&local_108;\n                if (0xf < uStack_f0) {\n                  pppppppcVar10 = local_108;\n                }\n                iVar7 = _stricmp((char *)pppppppcVar10,")F180139640T",
    R"F180139640F(81: if (local_68 == 0) {
84: else {
85: if (0x7fffffffffffffffU - local_68 < 0x16) {
97: if (local_d8 == 0) {
100: else {
117: if (local_d8 != 0) {
118: do {
120: if (0xf < local_d0) {
125: if (cVar1 == '{') {
126: if ((iVar7 == 1) && (bVar3)) {
144: if (0xf < uStack_f0) {
152: else if (cVar1 == '}') {
153: if (iVar7 == 2) {
154: if ((local_c8[0] != 0) && (local_c8[3] != 0)) {
156: if (puVar2 == (ulonglong *)param_1[2]) {
159: else {
187: if (iVar7 == 0) {
192: else if (cVar1 == '\"') {
198: if (uVar11 < local_d8) {
199: do {
202: if (0xf < local_d0) {
205: if (*(char *)((longlong)pppppppuVar8 + uVar11) == '\"') break;
207: if (0xf < local_d0) {
210: if ((*(char *)((longlong)pppppppuVar8 + uVar11) == '\\') && (uVar11 + 1 < local_d8))
215: if (0xf < local_d0) {
218: if (local_118 < local_110) {
221: if (0xf < local_110) {
228: else {
236: if (bVar3) {
237: if (iVar7 == 2) {
239: if (0xf < uStack_f0) {
243: if (iVar7 == 0) {
245: if (0xf < uVar5) {
250: else {
252: if (0xf < uStack_f0) {
256: if (iVar7 == 0) {
258: if (0xf < uVar5) {
263: else {
265: if (0xf < uStack_f0) {
269: if (iVar7 == 0) {
271: if (0xf < uVar5) {
274: if (uVar4 == 1) {
275: if (*(byte *)pppppppbVar9 == 0x31) {
278: else {
283: else {
292: else {
294: if (0xf < local_110) {
313: return param_1;)F180139640F",
    R"F180139640U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180139640U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180139640() noexcept {
    return kFunction_0x180139640;
}

// 0x180139c90 FUN_180139c90
// source: re/dump/decompile/0x180139c90_FUN_180139c90.c
// size: 1357 bytes; thunk: false
// body sha256: 747c6be28b9844f1924906b2a1b66be822a860659c088ca184eedbb96bed4cc7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180139c90{
    "0x180139c90",
    "FUN_180139c90",
    R"F180139c90S(undefined FUN_180139c90())F180139c90S",
    R"B180139c90(// 0x180139c90  FUN_180139c90
// size=1357 thunk=false
// signature: undefined FUN_180139c90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180139c90(void)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  size_t sVar12;
  char *_Str1;
  ulonglong *puVar13;
  undefined8 ****ppppuVar14;
  char *pcVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  longlong lVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStack_258 [32];
  uint local_238;
  undefined4 local_230;
  uint local_228;
  int local_220;
  uint local_218;
  undefined8 ***local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  ulonglong local_1f8;
  ulonglong *local_1f0;
  char *local_1e8;
  undefined *local_1e0;
  ulonglong *local_1d8;
  ulonglong *puStack_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  longlong lStack_1b8;
  undefined8 local_1b0;
  ulonglong local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  ulonglong local_188;
  ulonglong local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  char local_158 [240];
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_258;
  local_1d8 = (ulonglong *)0x0;
  puStack_1d0 = (ulonglong *)0x0;
  local_1c8 = 0;
  FUN_180139640(&local_1d8);
  if (local_1d8 == puStack_1d0) {
    local_210 = (undefined8 ****)0x0;
    uStack_208 = 0;
    uVar9 = 0;
    local_200 = 0;
    local_1f8 = 0;
    FUN_18001d080(&local_210,
                  "Steam\'s loginusers.vdf could not be read - check that Steam is installed for this user"
                  ,0x56);
    local_1f0 = (ulonglong *)&DAT_1803e85c0;
    iVar7 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar7 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return uVar9;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppuVar14 = &local_210;
    if (0xf < local_1f8) {
      ppppuVar14 = (undefined8 ****)local_210;
    }
    FUN_180212700(&DAT_1803e9e20,ppppuVar14,local_200);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_210);
    puVar10 = (undefined8 *)FUN_180132730(&local_210);
    if (0xf < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_180014410("[AS] import: loginusers.vdf gave nothing (SteamPath=\'%s\')\n",puVar10);
    FUN_18020e450(&local_210);
  }
  else {
    local_1e0 = &DAT_1803e86b0;
    iVar7 = _Mtx_lock(&DAT_1803e86b0);
    if (iVar7 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return uVar9;
    }
    if (DAT_1803e86fc == 0x7fffffff) {
      DAT_1803e86fc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    uVar4 = _UNK_1803814b8;
    uVar3 = _DAT_1803814b0;
    uVar9 = 0;
    uVar19 = 0;
    local_218 = 0;
    local_1f0 = puStack_1d0;
    if (local_1d8 != puStack_1d0) {
      puVar16 = local_1d8 + 5;
      puVar17 = local_1d8;
      uVar20 = uVar9;
      uVar21 = uVar9;
      do {
        pcVar5 = DAT_1803eb7c0;
        pcVar15 = DAT_1803eb7b8;
        if (DAT_1803eb7b8 != DAT_1803eb7c0) {
          do {
            puVar13 = puVar17 + 1;
            if (0xf < puVar17[4]) {
              puVar13 = (ulonglong *)puVar17[1];
            }
            _Str1 = pcVar15;
            if (0xf < *(ulonglong *)(pcVar15 + 0x18)) {
              _Str1 = *(char **)pcVar15;
            }
            iVar7 = _stricmp(_Str1,(char *)puVar13);
          } while ((iVar7 != 0) && (pcVar15 = pcVar15 + 0x48, pcVar15 != pcVar5));
          uVar21 = (ulonglong)local_218;
        }
        if (pcVar15 == DAT_1803eb7c0) {
          uStack_1a0 = 0;
          local_198 = uVar3;
          uStack_190 = uVar4;
          local_1a8 = 0;
          local_188 = 0;
          uStack_178 = 0;
          local_170 = 0;
          local_168 = 0xf;
          local_180 = 0;
          puVar13 = puVar17 + 1;
          if (&local_1a8 != puVar13) {
            if (0xf < puVar17[4]) {
              puVar13 = (ulonglong *)*puVar13;
            }
            FUN_180212700(&local_1a8,puVar13,puVar17[3]);
          }
          local_188 = *puVar17;
          if ((int)*puVar17 == 0) {
            local_188 = uVar9;
          }
          if (&local_180 != puVar17 + 5) {
            puVar13 = puVar16;
            if (0xf < puVar16[3]) {
              puVar13 = (ulonglong *)*puVar16;
            }
            FUN_180212700(&local_180,puVar13,puVar16[2]);
          }
          pcVar5 = DAT_1803eb7c0;
          if (DAT_1803eb7c0 == DAT_1803eb7c8) {
            FUN_180224fe0(&DAT_1803eb7b8,DAT_1803eb7c0,&local_1a8);
          }
          else {
            local_1e8 = DAT_1803eb7c0;
            FUN_18016d4c0(DAT_1803eb7c0,&local_1a8);
            *(ulonglong *)(pcVar5 + 0x20) = local_188;
            FUN_18016d4c0(pcVar5 + 0x28,&local_180);
            DAT_1803eb7c0 = DAT_1803eb7c0 + 0x48;
          }
          local_218 = (int)uVar21 + 1;
          uVar21 = (ulonglong)local_218;
          FUN_18020e450(&local_180);
          FUN_18020e450(&local_1a8);
        }
        else {
          if ((*(longlong *)(pcVar15 + 0x20) == 0) && ((int)*puVar17 != 0)) {
            *(ulonglong *)(pcVar15 + 0x20) = *puVar17;
          }
          puVar13 = (ulonglong *)(pcVar15 + 0x28);
          if ((*(longlong *)(pcVar15 + 0x38) == 0) && (puVar13 != puVar17 + 5)) {
            if (0xf < puVar16[3]) {
              FUN_180212700(puVar13,*puVar16,puVar16[2]);
              uVar20 = (ulonglong)((int)uVar20 + 1);
              goto LAB_180139fe9;
            }
            FUN_180212700(puVar13,puVar16,puVar16[2]);
          }
          uVar20 = (ulonglong)((int)uVar20 + 1);
        }
LAB_180139fe9:
        uVar19 = (undefined4)uVar20;
        puVar17 = puVar17 + 10;
        puVar16 = puVar16 + 10;
      } while (puVar17 != local_1f0);
    }
    _Mtx_unlock(&DAT_1803e86b0);
    FUN_1801365b0();
    FUN_180139540();
    uVar8 = 0;
    local_1c0 = 0;
    lStack_1b8 = 0;
    local_1b0 = 0;
    FUN_1801367d0(&local_1c0);
    lVar6 = lStack_1b8;
    uVar2 = local_218;
    for (lVar18 = local_1c0; local_218 = uVar2, lVar18 != lVar6; lVar18 = lVar18 + 0x48) {
      lVar11 = FUN_180135100(&local_210,lVar18);
      lVar11 = *(longlong *)(lVar11 + 0x10);
      FUN_18020e450(&local_210);
      uVar8 = (uint)uVar9 + 1;
      if (lVar11 == 0) {
        uVar8 = (uint)uVar9;
      }
      uVar9 = (ulonglong)uVar8;
      uVar2 = local_218;
    }
    local_220 = (int)(lStack_1b8 - local_1c0 >> 3) * 0x38e38e39;
    local_238 = uVar2;
    local_230 = uVar19;
    local_228 = uVar8;
    FUN_180012b20(local_158,0xf0,0xffffffffffffffff,
                  "imported %d from Steam (%d already listed) - %d of %d can switch with no password"
                 );
    local_210 = (undefined8 ****)0x0;
    uStack_208 = 0;
    local_200 = 0;
    local_1f8 = 0;
    sVar12 = strlen(local_158);
    FUN_18001d080(&local_210,local_158,sVar12);
    local_1e8 = &DAT_1803e85c0;
    iVar7 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar7 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar9 = (*pcVar1)();
      return uVar9;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppuVar14 = &local_210;
    if (0xf < local_1f8) {
      ppppuVar14 = (undefined8 ****)local_210;
    }
    FUN_180212700(&DAT_1803e9e20,ppppuVar14,local_200);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_210);
    local_238 = uVar8;
    FUN_180014410("[AS] import: %d added, %d already known, %zu in loginusers.vdf, %d have a token\n"
                  ,uVar2,uVar19,
                  ((longlong)puStack_1d0 - (longlong)local_1d8 >> 4) * -0x3333333333333333);
    uVar9 = (ulonglong)uVar2;
    FUN_18020ad50(&local_1c0);
  }
  FUN_18020a5a0(&local_1d8);
  return uVar9;
}


)B180139c90",
    "747c6be28b9844f1924906b2a1b66be822a860659c088ca184eedbb96bed4cc7",
    R"F180139c90C(FUN_180012b20
FUN_180014410
FUN_18001d080
FUN_180132730
FUN_180135100
FUN_1801365b0
FUN_1801367d0
FUN_180139540
FUN_180139640
FUN_18016d4c0
FUN_18020a5a0
FUN_18020ad50
FUN_18020e450
FUN_180212700
FUN_180224fe0)F180139c90C",
    R"F180139c90D(LAB_180139fe9
DAT_1803da4c0
DAT_1803e85c0
DAT_1803e860c
DAT_1803e86b0
DAT_1803e86fc
DAT_1803e9e20
DAT_1803eb7b8
DAT_1803eb7c0
DAT_1803eb7c8)F180139c90D",
    R"F180139c90T("[AS] import: loginusers.vdf gave nothing (SteamPath=\\'%s\\')\\n"
"[AS] import: %d added, %d already known, %zu in loginusers.vdf, %d have a token\\n"
"imported %d from Steam (%d already listed) - %d of %d can switch with no password"
"Steam\\'s loginusers.vdf could not be read - check that Steam is installed for this user")F180139c90T",
    R"F180139c90F(71: if (local_1d8 == puStack_1d0) {
82: if (iVar7 != 0) {
86: return uVar9;
88: if (DAT_1803e860c == 0x7fffffff) {
93: if (0xf < local_1f8) {
100: if (0xf < (ulonglong)puVar10[3]) {
106: else {
109: if (iVar7 != 0) {
113: return uVar9;
115: if (DAT_1803e86fc == 0x7fffffff) {
125: if (local_1d8 != puStack_1d0) {
130: do {
133: if (DAT_1803eb7b8 != DAT_1803eb7c0) {
134: do {
136: if (0xf < puVar17[4]) {
140: if (0xf < *(ulonglong *)(pcVar15 + 0x18)) {
147: if (pcVar15 == DAT_1803eb7c0) {
158: if (&local_1a8 != puVar13) {
159: if (0xf < puVar17[4]) {
165: if ((int)*puVar17 == 0) {
168: if (&local_180 != puVar17 + 5) {
170: if (0xf < puVar16[3]) {
176: if (DAT_1803eb7c0 == DAT_1803eb7c8) {
179: else {
191: else {
192: if ((*(longlong *)(pcVar15 + 0x20) == 0) && ((int)*puVar17 != 0)) {
196: if ((*(longlong *)(pcVar15 + 0x38) == 0) && (puVar13 != puVar17 + 5)) {
197: if (0xf < puVar16[3]) {
200: goto LAB_180139fe9;
206: LAB_180139fe9:
222: for (lVar18 = local_1c0; local_218 = uVar2, lVar18 != lVar6; lVar18 = lVar18 + 0x48) {
227: if (lVar11 == 0) {
248: if (iVar7 != 0) {
252: return uVar9;
254: if (DAT_1803e860c == 0x7fffffff) {
259: if (0xf < local_1f8) {
273: return uVar9;)F180139c90F",
    R"F180139c90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180139fe9.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e860c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e86b0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e86fc.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e20.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb7b8.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb7c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb7c8.
TODO: resolve the indirect call in body 84: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 85: uVar9 = (*pcVar1)();.
TODO: resolve the indirect call in body 111: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 112: uVar9 = (*pcVar1)();.
TODO: resolve the indirect call in body 250: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 251: uVar9 = (*pcVar1)();.)F180139c90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180139c90() noexcept {
    return kFunction_0x180139c90;
}

// 0x18013a1e0 FUN_18013a1e0
// source: re/dump/decompile/0x18013a1e0_FUN_18013a1e0.c
// size: 278 bytes; thunk: false
// body sha256: 7e891fa0ed738d241f8012eb629a6565dc836cc7bb9c43484571e27e9065f0fa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013a1e0{
    "0x18013a1e0",
    "FUN_18013a1e0",
    R"F18013a1e0S(undefined FUN_18013a1e0())F18013a1e0S",
    R"B18013a1e0(// 0x18013a1e0  FUN_18013a1e0
// size=278 thunk=false
// signature: undefined FUN_18013a1e0()
// status: ok


undefined8 FUN_18013a1e0(void)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 in_R9;
  undefined *puVar6;
  
  FUN_180138480();
  plVar3 = DAT_180409c80;
  if (DAT_180409c80 != (longlong *)0x0) {
    iVar4 = FUN_1801318c0(DAT_180409c80);
    if (-1 < iVar4) {
      (**(code **)(*plVar3 + (longlong)iVar4 * 8))(plVar3);
    }
    iVar4 = FUN_1801318c0(plVar3);
    if (-1 < iVar4) {
      (**(code **)(*plVar3 + (longlong)iVar4 * 8))(plVar3);
    }
    puVar6 = &DAT_1803e8610;
    iVar4 = _Mtx_lock(&DAT_1803e8610);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    lVar2 = DAT_1803e9e48;
    if (DAT_1803e865c == 0x7fffffff) {
      DAT_1803e865c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
      lVar2 = DAT_1803e9e48;
    }
    for (; lVar2 != DAT_1803e9e50; lVar2 = lVar2 + 0x38) {
      if (*(longlong **)(lVar2 + 0x28) == plVar3) {
        *(undefined8 *)(lVar2 + 0x30) = 0;
        FUN_180014410("[AS] logon failed - keeping local user %d (pipe %d) for the next attempt; replacing it would cost us the only user Steam will authorise\n"
                      ,*(undefined4 *)(lVar2 + 0x20),*(undefined4 *)(lVar2 + 0x24),in_R9,puVar6);
        break;
      }
    }
    _Mtx_unlock(&DAT_1803e8610);
  }
  uVar5 = DAT_180409c30;
  DAT_180409c80 = (longlong *)0x0;
  DAT_1803e85b4 = 0xffffffff;
  LOCK();
  DAT_180409c30 = 0;
  UNLOCK();
  return uVar5;
}


)B18013a1e0",
    "7e891fa0ed738d241f8012eb629a6565dc836cc7bb9c43484571e27e9065f0fa",
    R"F18013a1e0C(FUN_180014410
FUN_1801318c0
FUN_180138480)F18013a1e0C",
    R"F18013a1e0D(DAT_1803e85b4
DAT_1803e8610
DAT_1803e865c
DAT_1803e9e48
DAT_1803e9e50
DAT_180409c30
DAT_180409c80)F18013a1e0D",
    R"F18013a1e0T("[AS] logon failed - keeping local user %d (pipe %d) for the next attempt; replacing it would cost us the only user Steam will authorise\\n")F18013a1e0T",
    R"F18013a1e0F(20: if (DAT_180409c80 != (longlong *)0x0) {
22: if (-1 < iVar4) {
26: if (-1 < iVar4) {
31: if (iVar4 != 0) {
35: return uVar5;
38: if (DAT_1803e865c == 0x7fffffff) {
43: for (; lVar2 != DAT_1803e9e50; lVar2 = lVar2 + 0x38) {
44: if (*(longlong **)(lVar2 + 0x28) == plVar3) {
48: break;
59: return uVar5;)F18013a1e0F",
    R"F18013a1e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85b4.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8610.
TODO: recover the declaration, type and value for global/data reference DAT_1803e865c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e48.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e50.
TODO: recover the declaration, type and value for global/data reference DAT_180409c30.
TODO: recover the declaration, type and value for global/data reference DAT_180409c80.
TODO: resolve the indirect call in body 23: (**(code **)(*plVar3 + (longlong)iVar4 * 8))(plVar3);.
TODO: resolve the indirect call in body 27: (**(code **)(*plVar3 + (longlong)iVar4 * 8))(plVar3);.
TODO: resolve the indirect call in body 33: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 34: uVar5 = (*pcVar1)();.)F18013a1e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013a1e0() noexcept {
    return kFunction_0x18013a1e0;
}

// 0x18013a300 FUN_18013a300
// source: re/dump/decompile/0x18013a300_FUN_18013a300.c
// size: 594 bytes; thunk: false
// body sha256: 92663092440fca6ffbada46daa8c185d990f32468cd3cff19ea5d5f517ee949a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013a300{
    "0x18013a300",
    "FUN_18013a300",
    R"F18013a300S(undefined FUN_18013a300())F18013a300S",
    R"B18013a300(// 0x18013a300  FUN_18013a300
// size=594 thunk=false
// signature: undefined FUN_18013a300()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18013a300(void)

{
  code *pcVar1;
  int iVar2;
  LPCSTR ***ppppCVar3;
  LPCSTR ***ppppCVar4;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined *local_78;
  LPCSTR **local_70;
  undefined8 uStack_68;
  longlong local_60;
  ulonglong local_58;
  int local_50;
  int iStack_4c;
  LPCSTR *local_48;
  LPCSTR *local_40;
  CHAR local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  uStack_68 = 0;
  local_60 = 0;
  local_58 = 0xf;
  local_70 = (LPCSTR **)0x0;
  local_50 = -1;
  iStack_4c = -1;
  local_48 = (LPCSTR *)0x0;
  local_40 = (LPCSTR *)0x0;
  local_78 = &DAT_1803e8610;
  iVar2 = _Mtx_lock(&DAT_1803e8610);
  if (iVar2 == 0) {
    if (DAT_1803e865c == 0x7fffffff) {
      DAT_1803e865c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppCVar4 = DAT_1803e9e48;
    if (DAT_1803e9e48 == DAT_1803e9e50) {
      SetEnvironmentVariableA("MAYRR_AS_USER",(LPCSTR)0x0);
      SetEnvironmentVariableA("MAYRR_AS_PIPE",(LPCSTR)0x0);
      SetEnvironmentVariableA("MAYRR_AS_ACCOUNT",(LPCSTR)0x0);
      _Mtx_unlock(&DAT_1803e8610);
    }
    else {
      if (&local_70 != DAT_1803e9e48) {
        ppppCVar3 = DAT_1803e9e48;
        if ((LPCSTR **)0xf < DAT_1803e9e48[3]) {
          ppppCVar3 = (LPCSTR ***)*DAT_1803e9e48;
        }
        FUN_180212700(&local_70,ppppCVar3,DAT_1803e9e48[2]);
      }
      local_50 = *(int *)(ppppCVar4 + 4);
      iStack_4c = *(int *)((longlong)ppppCVar4 + 0x24);
      local_48 = (LPCSTR *)ppppCVar4[5];
      local_40 = (LPCSTR *)ppppCVar4[6];
      _Mtx_unlock(&DAT_1803e8610);
      if ((local_50 == -1) || (iStack_4c == -1)) {
        SetEnvironmentVariableA("MAYRR_AS_USER",(LPCSTR)0x0);
        SetEnvironmentVariableA("MAYRR_AS_PIPE",(LPCSTR)0x0);
        SetEnvironmentVariableA("MAYRR_AS_ACCOUNT",(LPCSTR)0x0);
      }
      else {
        local_88 = local_50;
        FUN_180012b20(local_38,0x20,0xffffffffffffffff,&DAT_18033f570);
        SetEnvironmentVariableA("MAYRR_AS_USER",local_38);
        local_88 = iStack_4c;
        FUN_180012b20(local_38,0x20,0xffffffffffffffff,&DAT_18033f570);
        SetEnvironmentVariableA("MAYRR_AS_PIPE",local_38);
        ppppCVar4 = &local_70;
        if (0xf < local_58) {
          ppppCVar4 = (LPCSTR ***)local_70;
        }
        SetEnvironmentVariableA("MAYRR_AS_ACCOUNT",(LPCSTR)ppppCVar4);
        if (local_60 == 0) {
          ppppCVar4 = (LPCSTR ***)&DAT_18033e9cc;
        }
        else {
          ppppCVar4 = &local_70;
          if (0xf < local_58) {
            ppppCVar4 = (LPCSTR ***)local_70;
          }
        }
        FUN_180014410("[AS] unload: leaving local user %d (pipe %d, \'%s\') SIGNED IN for the next load - a replacement would be this process\'s second user and Steam will not authorise one\n"
                      ,local_50,iStack_4c,ppppCVar4);
      }
    }
    FUN_18020e450(&local_70);
    return;
  }
  std::_Throw_Cpp_error(5);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


)B18013a300",
    "92663092440fca6ffbada46daa8c185d990f32468cd3cff19ea5d5f517ee949a",
    R"F18013a300C(FUN_180012b20
FUN_180014410
FUN_18020e450
FUN_180212700)F18013a300C",
    R"F18013a300D(DAT_18033e9cc
DAT_18033f570
DAT_1803da4c0
DAT_1803e8610
DAT_1803e865c
DAT_1803e9e48
DAT_1803e9e50)F18013a300D",
    R"F18013a300T("MAYRR_AS_PIPE"
"MAYRR_AS_USER"
"MAYRR_AS_ACCOUNT"
"[AS] unload: leaving local user %d (pipe %d, \\'%s\\') SIGNED IN for the next load - a replacement would be this process\\'s second user and Steam will not authorise one\\n")F18013a300T",
    R"F18013a300F(41: if (iVar2 == 0) {
42: if (DAT_1803e865c == 0x7fffffff) {
47: if (DAT_1803e9e48 == DAT_1803e9e50) {
53: else {
54: if (&local_70 != DAT_1803e9e48) {
56: if ((LPCSTR **)0xf < DAT_1803e9e48[3]) {
66: if ((local_50 == -1) || (iStack_4c == -1)) {
71: else {
79: if (0xf < local_58) {
83: if (local_60 == 0) {
86: else {
88: if (0xf < local_58) {
97: return;
102: return;)F18013a300F",
    R"F18013a300U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033e9cc.
TODO: recover the declaration, type and value for global/data reference DAT_18033f570.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8610.
TODO: recover the declaration, type and value for global/data reference DAT_1803e865c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e48.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e50.
TODO: resolve the indirect call in body 100: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 101: (*pcVar1)();.)F18013a300U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013a300() noexcept {
    return kFunction_0x18013a300;
}

// 0x18013a560 FUN_18013a560
// source: re/dump/decompile/0x18013a560_FUN_18013a560.c
// size: 1595 bytes; thunk: false
// body sha256: 33cc77a6977a40e4aad4ac046b1af736a66e179c23fe5f0beb8c18374c741f06
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013a560{
    "0x18013a560",
    "FUN_18013a560",
    R"F18013a560S(undefined FUN_18013a560())F18013a560S",
    R"B18013a560(// 0x18013a560  FUN_18013a560
// size=1595 thunk=false
// signature: undefined FUN_18013a560()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18013a560(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 ****ppppuVar4;
  undefined8 ***pppuVar5;
  char cVar6;
  DWORD DVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  HMODULE pHVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *****pppppuVar14;
  size_t sVar15;
  void *pvVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  void *_Dst;
  undefined4 *puVar19;
  undefined8 *****_Memory;
  undefined1 *puVar20;
  uint uVar21;
  void *pvVar22;
  undefined1 *puVar23;
  undefined4 uVar24;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar25;
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [40];
  undefined4 local_208;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined *local_1a0;
  undefined1 local_198 [32];
  undefined8 ****local_178;
  undefined8 ***pppuStack_170;
  undefined8 ***local_168;
  undefined8 ***local_160;
  int local_158;
  int iStack_154;
  longlong *local_150;
  void *local_148;
  void *local_140;
  CHAR local_138 [64];
  char local_f8 [160];
  ulonglong local_58;
  
  puVar20 = auStack_238;
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_238;
  _Dst = (void *)0x0;
  uVar24 = 0;
  local_208 = 0;
  local_138[0] = '\0';
  local_138[1] = '\0';
  local_138[2] = '\0';
  local_138[3] = '\0';
  local_138[4] = '\0';
  local_138[5] = '\0';
  local_138[6] = '\0';
  local_138[7] = '\0';
  local_138[8] = '\0';
  local_138[9] = '\0';
  local_138[10] = '\0';
  local_138[0xb] = '\0';
  local_138[0xc] = '\0';
  local_138[0xd] = '\0';
  local_138[0xe] = '\0';
  local_138[0xf] = '\0';
  local_138[0x10] = '\0';
  local_138[0x11] = '\0';
  local_138[0x12] = '\0';
  local_138[0x13] = '\0';
  local_138[0x14] = '\0';
  local_138[0x15] = '\0';
  local_138[0x16] = '\0';
  local_138[0x17] = '\0';
  local_138[0x18] = '\0';
  local_138[0x19] = '\0';
  local_138[0x1a] = '\0';
  local_138[0x1b] = '\0';
  local_138[0x1c] = '\0';
  local_138[0x1d] = '\0';
  local_138[0x1e] = '\0';
  local_138[0x1f] = '\0';
  local_138[0x20] = '\0';
  local_138[0x21] = '\0';
  local_138[0x22] = '\0';
  local_138[0x23] = '\0';
  local_138[0x24] = '\0';
  local_138[0x25] = '\0';
  local_138[0x26] = '\0';
  local_138[0x27] = '\0';
  local_138[0x28] = '\0';
  local_138[0x29] = '\0';
  local_138[0x2a] = '\0';
  local_138[0x2b] = '\0';
  local_138[0x2c] = '\0';
  local_138[0x2d] = '\0';
  local_138[0x2e] = '\0';
  local_138[0x2f] = '\0';
  local_138[0x30] = '\0';
  local_138[0x31] = '\0';
  local_138[0x32] = '\0';
  local_138[0x33] = '\0';
  local_138[0x34] = '\0';
  local_138[0x35] = '\0';
  local_138[0x36] = '\0';
  local_138[0x37] = '\0';
  local_138[0x38] = '\0';
  local_138[0x39] = '\0';
  local_138[0x3a] = '\0';
  local_138[0x3b] = '\0';
  local_138[0x3c] = '\0';
  local_138[0x3d] = '\0';
  local_138[0x3e] = '\0';
  local_138[0x3f] = '\0';
  memset(local_f8,0,0xa0);
  DVar7 = GetEnvironmentVariableA("MAYRR_AS_USER",local_138,0x20);
  puVar23 = auStack_238;
  if ((((DVar7 == 0) ||
       (DVar7 = GetEnvironmentVariableA("MAYRR_AS_PIPE",local_138 + 0x20,0x20),
       puVar23 = auStack_238, DVar7 == 0)) ||
      ((GetEnvironmentVariableA("MAYRR_AS_ACCOUNT",local_f8,0xa0), pHVar11 = DAT_1803fea40,
       DAT_1803fea40 == (HMODULE)0x0 &&
       (pHVar11 = GetModuleHandleA("steamclient64.dll"), puVar23 = auStack_238,
       pHVar11 == (HMODULE)0x0)))) ||
     (((DAT_1803fea40 = pHVar11, lVar12 = FUN_180131270(), puVar23 = auStack_238,
       *(char *)(lVar12 + 0x30) == '\0' ||
       (lVar12 = FUN_180131d10(), puVar23 = auStack_238, lVar12 == 0)) ||
      (cVar6 = FUN_180131d80(lVar12), puVar23 = auStack_238, cVar6 == '\0')))) goto LAB_18013a6de;
  iVar8 = atoi(local_138);
  iVar9 = atoi(local_138 + 0x20);
  if ((0 < iVar8) && (0 < iVar9)) {
    plVar13 = (longlong *)FUN_180131e30(lVar12,iVar8,iVar9);
    if (plVar13 != (longlong *)0x0) {
      pppuStack_170 = (undefined8 ****)0x0;
      local_168 = (undefined8 ****)0x0;
      local_160 = (undefined8 ****)0xf;
      local_178 = (undefined8 *****)0x0;
      local_148 = (void *)0x0;
      _local_158 = CONCAT44(iVar9,iVar8);
      local_150 = plVar13;
      pppppuVar14 = (undefined8 *****)FUN_180131f60(local_198,plVar13);
      puVar23 = auStack_238;
      if (&local_178 != pppppuVar14) {
        if ((undefined8 ****)0xf < local_160) {
          _Memory = (undefined8 *****)local_178;
          puVar20 = auStack_238;
          if ((0xfff < (longlong)local_160 + 1U) &&
             (_Memory = (undefined8 *****)local_178[-1], puVar20 = auStack_238,
             0x1f < (ulonglong)((longlong)local_178 + (-8 - (longlong)_Memory)))) {
            _Memory = (undefined8 *****)0x5;
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)();
            puVar20 = auStack_230;
          }
          *(undefined8 *)(puVar20 + -8) = 0x18013a79b;
          free(_Memory);
        }
        local_178 = *pppppuVar14;
        pppuStack_170 = pppppuVar14[1];
        local_168 = pppppuVar14[2];
        local_160 = pppppuVar14[3];
        pppppuVar14[2] = (undefined8 ****)0x0;
        pppppuVar14[3] = (undefined8 ****)0xf;
        *(undefined1 *)pppppuVar14 = 0;
        puVar23 = puVar20;
      }
      *(undefined8 *)(puVar23 + -8) = 0x18013a7e2;
      FUN_18020e450(local_198);
      if (((undefined8 ****)local_168 == (undefined8 ****)0x0) && (local_f8[0] != '\0')) {
        *(undefined8 *)(puVar23 + -8) = 0x18013a7f8;
        sVar15 = strlen(local_f8);
        *(undefined8 *)(puVar23 + -8) = 0x18013a808;
        FUN_180212700(&local_178,local_f8,sVar15);
      }
      *(undefined8 *)(puVar23 + -8) = 0x18013a817;
      iVar10 = FUN_1801318c0(plVar13);
      pvVar16 = _Dst;
      if (-1 < iVar10) {
        pcVar1 = *(code **)(*plVar13 + (longlong)iVar10 * 8);
        local_140 = (void *)0x0;
        *(undefined8 *)(puVar23 + -8) = 0x18013a838;
        (*pcVar1)(plVar13,&local_140);
        pvVar16 = local_140;
      }
      local_1a0 = &DAT_1803e8610;
      *(undefined8 *)(puVar23 + -8) = 0x18013a854;
      local_148 = pvVar16;
      iVar10 = _Mtx_lock(&DAT_1803e8610);
      if (iVar10 != 0) {
        *(undefined8 *)(puVar23 + -8) = 0x18013a863;
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar25 = extraout_XMM0_Da;
      if (DAT_1803e865c == 0x7fffffff) {
        DAT_1803e865c = 0x7ffffffe;
        *(undefined8 *)(puVar23 + -8) = 0x18013a884;
        std::_Throw_Cpp_error(6);
        uVar25 = extraout_XMM0_Da_00;
      }
      pvVar16 = DAT_1803e9e50;
      pvVar22 = DAT_1803e9e48;
      if (DAT_1803e9e48 != DAT_1803e9e50) {
        do {
          *(undefined8 *)(puVar23 + -8) = 0x18013a8a8;
          local_140 = pvVar22;
          uVar25 = FUN_18020e450(pvVar22);
          local_140 = (void *)((longlong)pvVar22 + 0x38);
          pvVar22 = local_140;
        } while (local_140 != pvVar16);
        DAT_1803e9e50 = DAT_1803e9e48;
      }
      pvVar16 = DAT_1803e9e50;
      if (DAT_1803e9e50 == DAT_1803e9e58) {
        *(undefined8 *)(puVar23 + -8) = 0x18013a912;
        FUN_180225270(uVar25,DAT_1803e9e50,&local_178);
      }
      else {
        *(undefined8 *)(puVar23 + -8) = 0x18013a8df;
        local_140 = DAT_1803e9e50;
        FUN_18016d4c0(DAT_1803e9e50,&local_178);
        *(int *)((longlong)pvVar16 + 0x20) = local_158;
        *(int *)((longlong)pvVar16 + 0x24) = iStack_154;
        *(longlong **)((longlong)pvVar16 + 0x28) = local_150;
        *(void **)((longlong)pvVar16 + 0x30) = local_148;
        DAT_1803e9e50 = (void *)((longlong)DAT_1803e9e50 + 0x38);
      }
      *(undefined8 *)(puVar23 + -8) = 0x18013a91c;
      _Mtx_unlock(&DAT_1803e8610);
      *(undefined8 *)(puVar23 + -8) = 0x18013a939;
      DAT_1803e85b4 = iVar9;
      DAT_180409c80 = plVar13;
      iVar10 = FUN_1801318c0(plVar13);
      if (iVar10 < 0) {
LAB_18013ab36:
        DAT_180409c80 = (longlong *)0x0;
        DAT_1803e85b4 = -1;
        LOCK();
        DAT_180409c30 = (void *)0x0;
        UNLOCK();
      }
      else {
        pcVar1 = *(code **)(*plVar13 + (longlong)iVar10 * 8);
        *(undefined8 *)(puVar23 + -8) = 0x18013a94d;
        cVar6 = (*pcVar1)(plVar13);
        pppuVar5 = local_168;
        pvVar16 = DAT_180409c30;
        if ((cVar6 == '\0') || ((int)local_148 == 0)) goto LAB_18013ab36;
        LOCK();
        DAT_180409c30 = local_148;
        UNLOCK();
        LOCK();
        DAT_180409c24 = 4;
        UNLOCK();
        uVar24 = 1;
        if ((undefined8 ****)local_168 == (undefined8 ****)0x0) {
          *(undefined8 *)(puVar23 + 0x78) = 0;
          *(undefined8 *)(puVar23 + 0x80) = 0;
          local_1b0 = 0;
          local_1a8 = 0;
          *(undefined8 *)(puVar23 + -8) = 0x18013a9a9;
          FUN_18001d080(puVar23 + 0x78,"signed in",9);
          puVar20 = puVar23 + 0x78;
          uVar21 = 1;
        }
        else {
          *(undefined8 *)(puVar23 + 0x38) = 0;
          *(undefined8 *)(puVar23 + 0x40) = 0;
          *(undefined8 *)(puVar23 + 0x48) = 0;
          *(undefined8 *)(puVar23 + 0x50) = 0;
          pppppuVar14 = &local_178;
          if ((undefined8 ****)0xf < local_160) {
            pppppuVar14 = (undefined8 *****)local_178;
          }
          if ((undefined8 ****)0x7fffffffffffffff < local_168) {
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar23 + -8) = &UNK_18013ab96;
            FUN_1800130a0(pvVar16);
          }
          if (local_168 < (undefined8 ****)0x10) {
            *(undefined8 ****)(puVar23 + 0x48) = local_168;
            *(undefined8 *)(puVar23 + 0x50) = 0xf;
            ppppuVar4 = pppppuVar14[1];
            *(undefined8 *****)(puVar23 + 0x38) = *pppppuVar14;
            *(undefined8 *****)(puVar23 + 0x40) = ppppuVar4;
          }
          else {
            uVar17 = (ulonglong)local_168 | 0xf;
            if (uVar17 < 0x8000000000000000) goto LAB_18013aa34;
            uVar18 = 0x8000000000000027;
            uVar17 = 0x7fffffffffffffff;
            while( true ) {
              *(undefined8 *)(puVar23 + -8) = 0x18013aa25;
              lVar12 = FUN_1802d8350(uVar18);
              if (lVar12 != 0) break;
              pcVar1 = (code *)swi(0x29);
              uVar17 = (*pcVar1)(5);
              puVar23 = puVar23 + 8;
LAB_18013aa34:
              if (uVar17 < 0x16) {
                uVar17 = 0x16;
              }
              if (uVar17 == 0xffffffffffffffff) goto LAB_18013aa7c;
              if (uVar17 + 1 < 0x1000) {
                *(undefined8 *)(puVar23 + -8) = 0x18013aa7c;
                _Dst = (void *)FUN_1802d8350();
                goto LAB_18013aa7c;
              }
              uVar18 = uVar17 + 0x28;
              if (uVar18 <= uVar17 + 1) {
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar23 + -8) = &UNK_18013ab9c;
                FUN_180012fe0();
              }
            }
            _Dst = (void *)(lVar12 + 0x27U & 0xffffffffffffffe0);
            *(longlong *)((longlong)_Dst - 8) = lVar12;
LAB_18013aa7c:
            *(void **)(puVar23 + 0x38) = _Dst;
            *(undefined8 ****)(puVar23 + 0x48) = pppuVar5;
            *(ulonglong *)(puVar23 + 0x50) = uVar17;
            *(undefined8 *)(puVar23 + -8) = 0x18013aa9a;
            memcpy(_Dst,pppppuVar14,(longlong)pppuVar5 + 1);
          }
          puVar20 = puVar23 + 0x38;
          uVar21 = 2;
        }
        *(uint *)(puVar23 + 0x30) = uVar21;
        *(undefined8 *)(puVar23 + -8) = 0x18013aaba;
        puVar19 = (undefined4 *)FUN_18022a630(puVar20);
        *(undefined8 *)(puVar23 + 0x68) = 0;
        *(undefined8 *)(puVar23 + 0x70) = 0;
        uVar25 = puVar19[1];
        uVar2 = puVar19[2];
        uVar3 = puVar19[3];
        *(undefined4 *)(puVar23 + 0x58) = *puVar19;
        *(undefined4 *)(puVar23 + 0x5c) = uVar25;
        *(undefined4 *)(puVar23 + 0x60) = uVar2;
        *(undefined4 *)(puVar23 + 100) = uVar3;
        uVar25 = puVar19[5];
        uVar2 = puVar19[6];
        uVar3 = puVar19[7];
        *(undefined4 *)(puVar23 + 0x68) = puVar19[4];
        *(undefined4 *)(puVar23 + 0x6c) = uVar25;
        *(undefined4 *)(puVar23 + 0x70) = uVar2;
        *(undefined4 *)(puVar23 + 0x74) = uVar3;
        *(undefined8 *)(puVar19 + 4) = 0;
        *(undefined8 *)(puVar19 + 6) = 0xf;
        *(undefined1 *)puVar19 = 0;
        *(uint *)(puVar23 + 0x30) = uVar21 | 8;
        *(undefined8 *)(puVar23 + -8) = 0x18013aaf5;
        FUN_1801356b0(puVar23 + 0x58);
        *(uint *)(puVar23 + 0x30) = uVar21;
        *(undefined8 *)(puVar23 + -8) = 0x18013ab06;
        FUN_18020e450(puVar23 + 0x58);
        if ((uVar21 & 2) != 0) {
          uVar21 = uVar21 & 0xfffffff5;
          *(uint *)(puVar23 + 0x30) = uVar21;
          *(undefined8 *)(puVar23 + -8) = 0x18013ab1d;
          FUN_18020e450(puVar23 + 0x38);
        }
        if ((uVar21 & 1) != 0) {
          *(uint *)(puVar23 + 0x30) = uVar21 & 0xfffffffe;
          *(undefined8 *)(puVar23 + -8) = 0x18013ab34;
          FUN_18020e450(puVar23 + 0x78);
        }
      }
      pppppuVar14 = &local_178;
      if ((undefined8 ****)0xf < local_160) {
        pppppuVar14 = (undefined8 *****)local_178;
      }
      *(undefined4 *)(puVar23 + 0x28) = uVar24;
      *(void **)(puVar23 + 0x20) = local_148;
      *(undefined8 *)(puVar23 + -8) = 0x18013ab82;
      FUN_180014410("[AS] adopted the local user from the previous load: user=%d pipe=%d \'%s\' SteamID=%llu loggedOn=%d\n"
                    ,iVar8,iVar9,pppppuVar14);
      *(undefined8 *)(puVar23 + -8) = 0x18013ab8c;
      FUN_18020e450(&local_178);
      goto LAB_18013a6de;
    }
    FUN_180014410("[AS] the local user left by the previous load (user=%d pipe=%d) is gone - starting fresh\n"
                  ,iVar8,iVar9);
  }
  SetEnvironmentVariableA("MAYRR_AS_USER",(LPCSTR)0x0);
  SetEnvironmentVariableA("MAYRR_AS_PIPE",(LPCSTR)0x0);
  SetEnvironmentVariableA("MAYRR_AS_ACCOUNT",(LPCSTR)0x0);
  puVar23 = auStack_238;
LAB_18013a6de:
  *(undefined8 *)(puVar23 + -8) = 0x18013a6ed;
  return;
}


)B18013a560",
    "33cc77a6977a40e4aad4ac046b1af736a66e179c23fe5f0beb8c18374c741f06",
    R"F18013a560C(FUN_180012fe0
FUN_1800130a0
FUN_180014410
FUN_18001d080
FUN_180131270
FUN_1801318c0
FUN_180131d10
FUN_180131d80
FUN_180131e30
FUN_180131f60
FUN_1801356b0
FUN_18016d4c0
FUN_18020e450
FUN_180212700
FUN_180225270
FUN_18022a630
FUN_1802d8350)F18013a560C",
    R"F18013a560D(LAB_18013a6de
LAB_18013aa34
LAB_18013aa7c
LAB_18013ab36
UNK_18013ab96
UNK_18013ab9c
DAT_1803da4c0
DAT_1803e85b4
DAT_1803e8610
DAT_1803e865c
DAT_1803e9e48
DAT_1803e9e50
DAT_1803e9e58
DAT_1803fea40
DAT_180409c24
DAT_180409c30
DAT_180409c80)F18013a560D",
    R"F18013a560T("signed in"
"MAYRR_AS_PIPE"
"MAYRR_AS_USER"
"MAYRR_AS_ACCOUNT"
"steamclient64.dll"
"[AS] the local user left by the previous load (user=%d pipe=%d) is gone - starting fresh\\n"
"[AS] adopted the local user from the previous load: user=%d pipe=%d \\'%s\\' SteamID=%llu loggedOn=%d\\n")F18013a560T",
    R"F18013a560F(133: if ((((DVar7 == 0) ||
146: if ((0 < iVar8) && (0 < iVar9)) {
148: if (plVar13 != (longlong *)0x0) {
158: if (&local_178 != pppppuVar14) {
159: if ((undefined8 ****)0xf < local_160) {
162: if ((0xfff < (longlong)local_160 + 1U) &&
184: if (((undefined8 ****)local_168 == (undefined8 ****)0x0) && (local_f8[0] != '\0')) {
193: if (-1 < iVar10) {
204: if (iVar10 != 0) {
209: return;
212: if (DAT_1803e865c == 0x7fffffff) {
220: if (DAT_1803e9e48 != DAT_1803e9e50) {
221: do {
231: if (DAT_1803e9e50 == DAT_1803e9e58) {
235: else {
251: if (iVar10 < 0) {
252: LAB_18013ab36:
259: else {
265: if ((cVar6 == '\0') || ((int)local_148 == 0)) goto LAB_18013ab36;
273: if ((undefined8 ****)local_168 == (undefined8 ****)0x0) {
283: else {
289: if ((undefined8 ****)0xf < local_160) {
292: if ((undefined8 ****)0x7fffffffffffffff < local_168) {
297: if (local_168 < (undefined8 ****)0x10) {
304: else {
306: if (uVar17 < 0x8000000000000000) goto LAB_18013aa34;
309: while( true ) {
312: if (lVar12 != 0) break;
316: LAB_18013aa34:
317: if (uVar17 < 0x16) {
320: if (uVar17 == 0xffffffffffffffff) goto LAB_18013aa7c;
321: if (uVar17 + 1 < 0x1000) {
324: goto LAB_18013aa7c;
327: if (uVar18 <= uVar17 + 1) {
335: LAB_18013aa7c:
373: if ((uVar21 & 2) != 0) {
379: if ((uVar21 & 1) != 0) {
386: if ((undefined8 ****)0xf < local_160) {
396: goto LAB_18013a6de;
405: LAB_18013a6de:
407: return;)F18013a560F",
    R"F18013a560U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18013a6de.
TODO: recover the declaration, type and value for global/data reference LAB_18013aa34.
TODO: recover the declaration, type and value for global/data reference LAB_18013aa7c.
TODO: recover the declaration, type and value for global/data reference LAB_18013ab36.
TODO: recover the declaration, type and value for global/data reference UNK_18013ab96.
TODO: recover the declaration, type and value for global/data reference UNK_18013ab9c.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85b4.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8610.
TODO: recover the declaration, type and value for global/data reference DAT_1803e865c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e48.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e50.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e58.
TODO: recover the declaration, type and value for global/data reference DAT_1803fea40.
TODO: recover the declaration, type and value for global/data reference DAT_180409c24.
TODO: recover the declaration, type and value for global/data reference DAT_180409c30.
TODO: recover the declaration, type and value for global/data reference DAT_180409c80.
TODO: resolve the indirect call in body 166: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 167: (*pcVar1)();.
TODO: resolve the indirect call in body 194: pcVar1 = *(code **)(*plVar13 + (longlong)iVar10 * 8);.
TODO: resolve the indirect call in body 197: (*pcVar1)(plVar13,&local_140);.
TODO: resolve the indirect call in body 207: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 208: (*pcVar1)();.
TODO: resolve the indirect call in body 260: pcVar1 = *(code **)(*plVar13 + (longlong)iVar10 * 8);.
TODO: resolve the indirect call in body 262: cVar6 = (*pcVar1)(plVar13);.
TODO: resolve the indirect call in body 313: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 314: uVar17 = (*pcVar1)(5);.)F18013a560U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013a560() noexcept {
    return kFunction_0x18013a560;
}

// 0x18013aba0 FUN_18013aba0
// source: re/dump/decompile/0x18013aba0_FUN_18013aba0.c
// size: 3169 bytes; thunk: false
// body sha256: d9e0ac488edd6422a002a0c8de9d327f7dddc07bffb771b5b11ade818adee3aa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013aba0{
    "0x18013aba0",
    "FUN_18013aba0",
    R"F18013aba0S(undefined FUN_18013aba0())F18013aba0S",
    R"B18013aba0(// 0x18013aba0  FUN_18013aba0
// size=3169 thunk=false
// signature: undefined FUN_18013aba0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18013aba0(undefined8 *******param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  HMODULE pHVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 *******_Str1;
  undefined8 *******_Str2;
  undefined8 *******pppppppuVar17;
  undefined8 *******pppppppuVar18;
  undefined8 *******pppppppuVar19;
  undefined *puVar20;
  uint uVar21;
  undefined8 ******ppppppuVar22;
  undefined *unaff_R15;
  undefined8 uVar23;
  undefined1 auStack_188 [32];
  undefined8 *******local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined4 local_150;
  char local_148;
  undefined *local_140;
  undefined *local_138;
  int local_130 [2];
  undefined8 *******local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 ******local_100;
  undefined8 ******local_f8;
  undefined8 ******local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong uStack_d8;
  undefined8 local_d0;
  undefined8 ******local_c8;
  undefined8 ******local_c0;
  undefined8 ******local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong uStack_a0;
  undefined8 ******local_98;
  undefined8 ******local_90;
  undefined8 ******local_88;
  undefined8 *******local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 *******local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  pHVar14 = DAT_1803fea40;
  if (((DAT_1803fea40 == (HMODULE)0x0) &&
      (pHVar14 = GetModuleHandleA("steamclient64.dll"), pHVar14 == (HMODULE)0x0)) ||
     (DAT_1803fea40 = pHVar14, lVar15 = FUN_180131270(), *(char *)(lVar15 + 0x30) == '\0')) {
    local_80 = (undefined8 *******)0x0;
    uStack_78 = 0;
    local_70 = 0;
    local_68 = 0;
    FUN_18001d080(&local_80,"steamclient64.dll is not loaded in this process",0x2f);
    local_140 = &DAT_1803e85c0;
    iVar4 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar16 = (*pcVar1)();
      return uVar16;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    pppppppuVar18 = &local_80;
    if (0xf < local_68) {
      pppppppuVar18 = local_80;
    }
    FUN_180212700(&DAT_1803e9e20,pppppppuVar18,local_70);
    _Mtx_unlock(&DAT_1803e85c0);
    goto LAB_18013b7d6;
  }
  local_140 = (undefined *)FUN_180131d10();
  if ((local_140 != (undefined *)0x0) && (cVar3 = FUN_180131d80(local_140), cVar3 != '\0')) {
    FUN_180138480();
    uStack_b0 = 0;
    local_a8 = _DAT_1803814b0;
    uStack_a0 = _UNK_1803814b8;
    local_b8 = (undefined8 ******)0x0;
    uVar21 = 0xffffffff;
    local_98 = (undefined8 ******)0xffffffffffffffff;
    puVar20 = (undefined *)0xffffffff;
    pppppppuVar19 = (undefined8 *******)0x0;
    iVar5 = 0;
    local_90 = (undefined8 ******)0x0;
    local_88 = (undefined8 ******)0x0;
    local_138 = &DAT_1803e8610;
    iVar4 = _Mtx_lock(&DAT_1803e8610);
    pppppppuVar18 = DAT_1803e9e50;
    if (iVar4 == 0) {
      if (DAT_1803e865c == 0x7fffffff) {
LAB_18013b3cd:
        DAT_1803e865c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
LAB_18013b3e3:
        uStack_e8 = 0;
        local_e0 = _DAT_1803814b0;
        uStack_d8 = _UNK_1803814b8;
        local_f0 = (undefined8 ******)0x0;
        local_d0 = 0xffffffffffffffff;
        local_c8 = (undefined8 ******)0x0;
        local_c0 = (undefined8 ******)0x0;
        uVar23 = _DAT_1803814b0;
        if (&local_f0 != param_1) {
          pppppppuVar18 = param_1;
          if ((undefined8 ******)0xf < param_1[3]) {
            pppppppuVar18 = (undefined8 *******)*param_1;
          }
          uVar23 = FUN_180212700(&local_f0,pppppppuVar18,param_1[2]);
        }
        pppppppuVar18 = DAT_1803e9e50;
        local_d0 = CONCAT44(local_130[0],iVar5);
        local_c8 = DAT_180409c80;
        if (DAT_1803e9e50 == DAT_1803e9e58) {
          FUN_180225270(uVar23,DAT_1803e9e50,&local_f0);
        }
        else {
          local_60 = DAT_1803e9e50;
          FUN_18016d4c0(DAT_1803e9e50,&local_f0);
          *(undefined4 *)(pppppppuVar18 + 4) = (undefined4)local_d0;
          *(undefined4 *)((longlong)pppppppuVar18 + 0x24) = local_d0._4_4_;
          pppppppuVar18[5] = local_c8;
          pppppppuVar18[6] = local_c0;
          DAT_1803e9e50 = DAT_1803e9e50 + 7;
        }
        lVar15 = (longlong)DAT_1803e9e50 - (longlong)DAT_1803e9e48;
        FUN_18020e450(&local_f0);
        _Mtx_unlock(puVar20);
        if ((undefined8 ******)0xf < param_1[3]) {
          param_1 = (undefined8 *******)*param_1;
        }
        FUN_180014410("[AS] pool: %zu live session(s) after adding \'%s\'\n",
                      (lVar15 >> 3) * 0x6db6db6db6db6db7,param_1);
        local_168 = (undefined8 *******)DAT_180409c80;
        FUN_180014410("[AS] session: engine=%p user=%d pipe=%d IClientUser=%p\n",unaff_R15,iVar5,
                      local_130[0]);
        uVar7 = FUN_1801318c0(DAT_180409c80);
        uVar8 = FUN_1801318c0(DAT_180409c80);
        uVar9 = FUN_1801318c0(DAT_180409c80);
        uVar10 = FUN_1801318c0(DAT_180409c80);
        uVar11 = FUN_1801318c0(DAT_180409c80);
        uVar12 = FUN_1801318c0(DAT_180409c80);
        uVar13 = FUN_1801318c0(DAT_180409c80);
        local_160 = uVar9;
        local_158 = uVar8;
        local_150 = uVar7;
        local_168._0_4_ = uVar10;
        FUN_180014410("[AS] slots: LogOn=%d SetLoginInformation=%d SetTwoFactorCode=%d Set2ndFactorAuthCode=%d GetSteamID=%d GetLogonState=%d BHasCachedCredentials=%d\n"
                      ,uVar13,uVar12,uVar11);
        uVar7 = FUN_1801318c0(DAT_180409c80);
        uVar8 = FUN_1801318c0(DAT_180409c80);
        uVar9 = FUN_1801318c0(DAT_180409c80);
        uVar10 = FUN_180131c20(DAT_180409c80);
        uVar11 = FUN_180131c20(DAT_180409c80);
        uVar12 = FUN_1801318c0(DAT_180409c80);
        local_168 = (undefined8 *******)CONCAT44(local_168._4_4_,uVar9);
        local_160 = uVar8;
        local_158 = uVar7;
        FUN_180014410("[AS] slots: SetLoginToken=%d GetAccountName=%d/%d BUpdateAppOwnershipTicket=%d BGameConnectTokensAvailable=%d BIsOtherSessionPlaying=%d\n"
                      ,uVar12,uVar11,uVar10);
        uVar6 = uVar21;
LAB_18013b715:
        FUN_18020e450(&local_b8);
        return (ulonglong)uVar6;
      }
      local_148 = '\0';
      pppppppuVar17 = DAT_1803e9e48;
      while( true ) {
        iVar4 = -1;
        ppppppuVar22 = (undefined8 ******)0x0;
        if (pppppppuVar17 == pppppppuVar18) break;
        _Str2 = param_1;
        if ((undefined8 ******)0xf < param_1[3]) {
          _Str2 = (undefined8 *******)*param_1;
        }
        _Str1 = pppppppuVar17;
        if ((undefined8 ******)0xf < pppppppuVar17[3]) {
          _Str1 = (undefined8 *******)*pppppppuVar17;
        }
        iVar4 = _stricmp((char *)_Str1,(char *)_Str2);
        if (iVar4 == 0) {
          if (&local_b8 != pppppppuVar17) {
            pppppppuVar18 = pppppppuVar17;
            if ((undefined8 ******)0xf < pppppppuVar17[3]) {
              pppppppuVar18 = (undefined8 *******)*pppppppuVar17;
            }
            FUN_180212700(&local_b8,pppppppuVar18,pppppppuVar17[2]);
          }
          uVar21 = *(uint *)(pppppppuVar17 + 4);
          iVar4 = *(int *)((longlong)pppppppuVar17 + 0x24);
          local_98 = pppppppuVar17[4];
          ppppppuVar22 = pppppppuVar17[5];
          local_88 = pppppppuVar17[6];
          local_148 = '\x01';
          local_90 = ppppppuVar22;
          break;
        }
        pppppppuVar17 = pppppppuVar17 + 7;
      }
      _Mtx_unlock(&DAT_1803e8610);
      if ((local_148 != '\0') && (ppppppuVar22 != (undefined8 ******)0x0)) {
        iVar5 = FUN_1801318c0(ppppppuVar22);
        if ((-1 < iVar5) &&
           ((cVar3 = (*(code *)(*ppppppuVar22)[iVar5])(ppppppuVar22), cVar3 != '\0' &&
            (iVar5 = FUN_1801318c0(ppppppuVar22), -1 < iVar5)))) {
          local_60 = (undefined8 *******)0x0;
          (*(code *)(*ppppppuVar22)[iVar5])(ppppppuVar22,&local_60);
          if ((int)local_60 != 0) {
            DAT_1803e85b4 = iVar4;
            DAT_180409c80 = ppppppuVar22;
            iVar5 = FUN_1801318c0(ppppppuVar22);
            local_168 = pppppppuVar19;
            if (-1 < iVar5) {
              local_60 = (undefined8 *******)0x0;
              (*(code *)(*ppppppuVar22)[iVar5])(ppppppuVar22,&local_60);
              local_168 = local_60;
            }
            LOCK();
            UNLOCK();
            if ((undefined8 ******)0xf < param_1[3]) {
              param_1 = (undefined8 *******)*param_1;
            }
            DAT_180409c30 = local_168;
            FUN_180014410("[AS] reusing the live session for \'%s\' (user=%d pipe=%d, SteamID %llu) - no logon needed\n"
                          ,param_1,uVar21,iVar4);
            uVar6 = 2;
            goto LAB_18013b715;
          }
        }
        pppppppuVar18 = param_1;
        if ((undefined8 ******)0xf < param_1[3]) {
          pppppppuVar18 = (undefined8 *******)*param_1;
        }
        FUN_180014410("[AS] pooled session for \'%s\' is not signed in - re-logging the SAME user (never replacing it: only the first local user of a launch can authorise)\n"
                      ,pppppppuVar18);
      }
      uStack_120 = 0;
      local_118 = _DAT_1803814b0;
      uStack_110 = _UNK_1803814b8;
      local_128 = (undefined8 *******)0x0;
      local_108 = (undefined8 ******)0xffffffffffffffff;
      local_100 = (undefined8 ******)0x0;
      local_f8 = (undefined8 ******)0x0;
      puVar20 = &DAT_1803e8610;
      local_60 = (undefined8 *******)&DAT_1803e8610;
      iVar4 = _Mtx_lock(&DAT_1803e8610);
      pppppppuVar18 = DAT_1803e9e48;
      if (iVar4 == 0) {
        if (DAT_1803e865c == 0x7fffffff) {
LAB_18013b1c7:
          DAT_1803e865c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
LAB_18013b1dd:
          if (DAT_1803e9e48 != DAT_1803e9e50) {
            if (DAT_1803e9e48 != param_1) {
              pppppppuVar18 = param_1 + 2;
              if ((undefined8 ******)0xf < param_1[3]) {
                param_1 = (undefined8 *******)*param_1;
              }
              FUN_180212700(DAT_1803e9e48,param_1,*pppppppuVar18);
            }
            DAT_1803e9e48[6] = (undefined8 ******)0x0;
          }
          _Mtx_unlock(&DAT_1803e8610);
          FUN_18020e450(&local_128);
          uVar6 = 1;
          goto LAB_18013b715;
        }
        bVar2 = false;
        if (DAT_1803e9e48 != DAT_1803e9e50) {
          if (&local_128 != (undefined8 ********)DAT_1803e9e48) {
            pppppppuVar17 = DAT_1803e9e48;
            if ((undefined8 ******)0xf < DAT_1803e9e48[3]) {
              pppppppuVar17 = (undefined8 *******)*DAT_1803e9e48;
            }
            FUN_180212700(&local_128,pppppppuVar17,DAT_1803e9e48[2]);
          }
          local_108 = pppppppuVar18[4];
          local_100 = pppppppuVar18[5];
          local_f8 = pppppppuVar18[6];
          bVar2 = true;
        }
        _Mtx_unlock(&DAT_1803e8610);
        uVar6 = 0;
        if ((bVar2) && (local_100 != (undefined8 ******)0x0)) {
          if ((int)local_108 != -1) {
            local_168 = param_1;
            if ((undefined8 ******)0xf < param_1[3]) {
              local_168 = (undefined8 *******)*param_1;
            }
            pppppppuVar18 = &local_128;
            if (0xf < uStack_110) {
              pppppppuVar18 = local_128;
            }
            FUN_180014410("[AS] re-logging the existing local user (user=%d pipe=%d) from \'%s\' to \'%s\' - Steam only ever authorises the FIRST local user of a game launch\n"
                          ,(ulonglong)local_108 & 0xffffffff,local_108._4_4_,pppppppuVar18);
            ppppppuVar22 = local_100;
            iVar4 = FUN_1801318c0(local_100);
            if (-1 < iVar4) {
              (*(code *)(*ppppppuVar22)[iVar4])(ppppppuVar22);
            }
            ppppppuVar22 = local_100;
            iVar4 = FUN_1801318c0(local_100);
            if (-1 < iVar4) {
              (*(code *)(*ppppppuVar22)[iVar4])(ppppppuVar22);
            }
            do {
              local_80 = (undefined8 *******)0x0;
              uStack_78 = 0;
              local_70 = 0;
              lVar15 = FUN_180131270();
              cVar3 = (**(code **)(lVar15 + 0x18))(local_108._4_4_,&local_80);
              ppppppuVar22 = local_100;
              while (local_100 = ppppppuVar22, cVar3 != '\0') {
                lVar15 = FUN_180131270();
                (**(code **)(lVar15 + 0x20))(local_108._4_4_);
                lVar15 = FUN_180131270();
                cVar3 = (**(code **)(lVar15 + 0x18))(local_108._4_4_,&local_80);
                ppppppuVar22 = local_100;
              }
              iVar4 = FUN_1801318c0(ppppppuVar22);
              if ((((iVar4 < 0) ||
                   (iVar4 = (*(code *)(*ppppppuVar22)[iVar4])(ppppppuVar22), iVar4 == 0)) &&
                  ((ppppppuVar22 = local_100, iVar4 = FUN_1801318c0(local_100), iVar4 < 0 ||
                   (cVar3 = (*(code *)(*ppppppuVar22)[iVar4])(ppppppuVar22), cVar3 == '\0')))) &&
                 ((ppppppuVar22 = local_100, iVar4 = FUN_1801318c0(local_100), iVar4 < 0 ||
                  (cVar3 = (*(code *)(*ppppppuVar22)[iVar4])(ppppppuVar22), cVar3 == '\0')))) break;
              Sleep(0x32);
              uVar21 = (int)pppppppuVar19 + 0x32;
              pppppppuVar19 = (undefined8 *******)(ulonglong)uVar21;
            } while ((int)uVar21 < 5000);
            ppppppuVar22 = local_100;
            iVar4 = FUN_1801318c0(local_100);
            if (iVar4 < 0) {
              cVar3 = '\0';
            }
            else {
              cVar3 = (*(code *)(*ppppppuVar22)[iVar4])(ppppppuVar22);
            }
            ppppppuVar22 = local_100;
            iVar4 = FUN_1801318c0(local_100);
            if (-1 < iVar4) {
              uVar6 = (*(code *)(*ppppppuVar22)[iVar4])(ppppppuVar22);
            }
            FUN_180014410("[AS] log-off settled after %d ms (logonState=%d connected=%d)\n",
                          pppppppuVar19,uVar6,cVar3 != '\0');
            DAT_1803e85b4 = local_108._4_4_;
            DAT_180409c80 = local_100;
            LOCK();
            DAT_180409c30 = (undefined8 *******)0x0;
            UNLOCK();
            local_140 = &DAT_1803e8610;
            iVar4 = _Mtx_lock(&DAT_1803e8610);
            if (iVar4 != 0) goto LAB_18013b726;
            if (DAT_1803e865c == 0x7fffffff) goto LAB_18013b1c7;
            goto LAB_18013b1dd;
          }
        }
        FUN_18020e450(&local_128);
        local_130[0] = -1;
        lVar15 = FUN_180131270();
        uVar21 = 1;
        iVar5 = (**(code **)(lVar15 + 8))(local_130,1);
        unaff_R15 = local_140;
        if ((iVar5 == -1) || (local_130[0] == -1)) {
          local_80 = (undefined8 *******)0x0;
          uStack_78 = 0;
          local_70 = 0;
          local_68 = 0;
          FUN_18001d080(&local_80,"Steam refused to create a local user",0x24);
          local_140 = &DAT_1803e85c0;
          iVar4 = _Mtx_lock(&DAT_1803e85c0);
          if (iVar4 != 0) {
            std::_Throw_Cpp_error(5);
            pcVar1 = (code *)swi(3);
            uVar16 = (*pcVar1)();
            return uVar16;
          }
          if (DAT_1803e860c == 0x7fffffff) {
            DAT_1803e860c = 0x7ffffffe;
            std::_Throw_Cpp_error(6);
          }
          pppppppuVar18 = &local_80;
          if (0xf < local_68) {
            pppppppuVar18 = local_80;
          }
          FUN_180212700(&DAT_1803e9e20,pppppppuVar18,local_70);
          _Mtx_unlock(&DAT_1803e85c0);
          FUN_18020e450(&local_80);
          goto LAB_18013b715;
        }
        DAT_1803e85b4 = local_130[0];
        DAT_180409c80 = (undefined8 ******)FUN_180131e30(local_140,iVar5);
        if (DAT_180409c80 == (undefined8 ******)0x0) {
          local_80 = (undefined8 *******)0x0;
          uStack_78 = 0;
          local_70 = 0;
          local_68 = 0;
          FUN_18001d080(&local_80,
                        "IClientUser did not validate - re-run tools/analyze_steamclient.py",0x42);
          local_140 = &DAT_1803e85c0;
          iVar4 = _Mtx_lock(&DAT_1803e85c0);
          if (iVar4 != 0) {
            std::_Throw_Cpp_error(5);
            pcVar1 = (code *)swi(3);
            uVar16 = (*pcVar1)();
            return uVar16;
          }
          if (DAT_1803e860c == 0x7fffffff) {
            DAT_1803e860c = 0x7ffffffe;
            std::_Throw_Cpp_error(6);
          }
          pppppppuVar18 = &local_80;
          if (0xf < local_68) {
            pppppppuVar18 = local_80;
          }
          FUN_180212700(&DAT_1803e9e20,pppppppuVar18,local_70);
          _Mtx_unlock(&DAT_1803e85c0);
          FUN_18020e450(&local_80);
          FUN_180014410("[AS] GetIClientUser(user=%d, pipe=%d) did not validate\n",iVar5,
                        local_130[0]);
          lVar15 = FUN_180131270();
          if (*(longlong *)(lVar15 + 0x10) != 0) {
            lVar15 = FUN_180131270();
            (**(code **)(lVar15 + 0x10))(local_130[0],iVar5);
          }
          lVar15 = FUN_180131270();
          if (*(longlong *)(lVar15 + 0x28) != 0) {
            lVar15 = FUN_180131270();
            (**(code **)(lVar15 + 0x28))(local_130[0]);
          }
          DAT_180409c80 = (undefined8 ******)0x0;
          DAT_1803e85b4 = -1;
          LOCK();
          DAT_180409c30 = (undefined8 *******)0x0;
          UNLOCK();
          goto LAB_18013b715;
        }
        local_140 = &DAT_1803e8610;
        iVar4 = _Mtx_lock(&DAT_1803e8610);
        if (iVar4 == 0) {
          if (DAT_1803e865c == 0x7fffffff) goto LAB_18013b3cd;
          goto LAB_18013b3e3;
        }
      }
      else {
LAB_18013b726:
        std::_Throw_Cpp_error(5);
      }
    }
    std::_Throw_Cpp_error(5);
  }
  local_80 = (undefined8 *******)0x0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0;
  FUN_18001d080(&local_80,"IClientEngine layout changed - re-run tools/analyze_steamclient.py",0x42)
  ;
  local_140 = &DAT_1803e85c0;
  iVar4 = _Mtx_lock(&DAT_1803e85c0);
  if (iVar4 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar16 = (*pcVar1)();
    return uVar16;
  }
  if (DAT_1803e860c == 0x7fffffff) {
    DAT_1803e860c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  pppppppuVar18 = &local_80;
  if (0xf < local_68) {
    pppppppuVar18 = local_80;
  }
  FUN_180212700(&DAT_1803e9e20,pppppppuVar18,local_70);
  _Mtx_unlock(&DAT_1803e85c0);
LAB_18013b7d6:
  FUN_18020e450(&local_80);
  return 0;
}


)B18013aba0",
    "d9e0ac488edd6422a002a0c8de9d327f7dddc07bffb771b5b11ade818adee3aa",
    R"F18013aba0C(FUN_180014410
FUN_18001d080
FUN_180131270
FUN_1801318c0
FUN_180131c20
FUN_180131d10
FUN_180131d80
FUN_180131e30
FUN_180138480
FUN_18016d4c0
FUN_18020e450
FUN_180212700
FUN_180225270)F18013aba0C",
    R"F18013aba0D(LAB_18013b1c7
LAB_18013b1dd
LAB_18013b3cd
LAB_18013b3e3
LAB_18013b715
LAB_18013b726
LAB_18013b7d6
DAT_1803da4c0
DAT_1803e85b4
DAT_1803e85c0
DAT_1803e860c
DAT_1803e8610
DAT_1803e865c
DAT_1803e9e20
DAT_1803e9e48
DAT_1803e9e50
DAT_1803e9e58
DAT_1803fea40
DAT_180409c30
DAT_180409c80)F18013aba0D",
    R"F18013aba0T("steamclient64.dll"
"Steam refused to create a local user"
"steamclient64.dll is not loaded in this process"
"[AS] pool: %zu live session(s) after adding \\'%s\\'\\n"
"[AS] GetIClientUser(user=%d, pipe=%d) did not validate\\n"
"[AS] session: engine=%p user=%d pipe=%d IClientUser=%p\\n"
"[AS] log-off settled after %d ms (logonState=%d connected=%d)\\n"
"IClientEngine layout changed - re-run tools/analyze_steamclient.py"
"IClientUser did not validate - re-run tools/analyze_steamclient.py"
"[AS] reusing the live session for \\'%s\\' (user=%d pipe=%d, SteamID %llu) - no logon needed\\n"
"[AS] slots: SetLoginToken=%d GetAccountName=%d/%d BUpdateAppOwnershipTicket=%d BGameConnectTokensAvailable=%d BIsOtherSessionPlaying=%d\\n"
"[AS] slots: LogOn=%d SetLoginInformation=%d SetTwoFactorCode=%d Set2ndFactorAuthCode=%d GetSteamID=%d GetLogonState=%d BHasCachedCredentials=%d\\n"
"[AS] re-logging the existing local user (user=%d pipe=%d) from \\'%s\\' to \\'%s\\' - Steam only ever authorises the FIRST local user of a game launch\\n"
"[AS] pooled session for \\'%s\\' is not signed in - re-logging the SAME user (never replacing it: only the first local user of a launch can authorise)\\n")F18013aba0T",
    R"F18013aba0F(79: if (((DAT_1803fea40 == (HMODULE)0x0) &&
89: if (iVar4 != 0) {
93: return uVar16;
95: if (DAT_1803e860c == 0x7fffffff) {
100: if (0xf < local_68) {
105: goto LAB_18013b7d6;
108: if ((local_140 != (undefined *)0x0) && (cVar3 = FUN_180131d80(local_140), cVar3 != '\0')) {
124: if (iVar4 == 0) {
125: if (DAT_1803e865c == 0x7fffffff) {
126: LAB_18013b3cd:
129: LAB_18013b3e3:
138: if (&local_f0 != param_1) {
140: if ((undefined8 ******)0xf < param_1[3]) {
148: if (DAT_1803e9e50 == DAT_1803e9e58) {
151: else {
163: if ((undefined8 ******)0xf < param_1[3]) {
196: LAB_18013b715:
198: return (ulonglong)uVar6;
202: while( true ) {
205: if (pppppppuVar17 == pppppppuVar18) break;
207: if ((undefined8 ******)0xf < param_1[3]) {
211: if ((undefined8 ******)0xf < pppppppuVar17[3]) {
215: if (iVar4 == 0) {
216: if (&local_b8 != pppppppuVar17) {
218: if ((undefined8 ******)0xf < pppppppuVar17[3]) {
230: break;
235: if ((local_148 != '\0') && (ppppppuVar22 != (undefined8 ******)0x0)) {
237: if ((-1 < iVar5) &&
242: if ((int)local_60 != 0) {
247: if (-1 < iVar5) {
254: if ((undefined8 ******)0xf < param_1[3]) {
261: goto LAB_18013b715;
265: if ((undefined8 ******)0xf < param_1[3]) {
282: if (iVar4 == 0) {
283: if (DAT_1803e865c == 0x7fffffff) {
284: LAB_18013b1c7:
287: LAB_18013b1dd:
288: if (DAT_1803e9e48 != DAT_1803e9e50) {
289: if (DAT_1803e9e48 != param_1) {
291: if ((undefined8 ******)0xf < param_1[3]) {
301: goto LAB_18013b715;
304: if (DAT_1803e9e48 != DAT_1803e9e50) {
305: if (&local_128 != (undefined8 ********)DAT_1803e9e48) {
307: if ((undefined8 ******)0xf < DAT_1803e9e48[3]) {
319: if ((bVar2) && (local_100 != (undefined8 ******)0x0)) {
320: if ((int)local_108 != -1) {
322: if ((undefined8 ******)0xf < param_1[3]) {
326: if (0xf < uStack_110) {
333: if (-1 < iVar4) {
338: if (-1 < iVar4) {
341: do {
348: while (local_100 = ppppppuVar22, cVar3 != '\0') {
356: if ((((iVar4 < 0) ||
368: if (iVar4 < 0) {
371: else {
376: if (-1 < iVar4) {
388: if (iVar4 != 0) goto LAB_18013b726;
389: if (DAT_1803e865c == 0x7fffffff) goto LAB_18013b1c7;
390: goto LAB_18013b1dd;
399: if ((iVar5 == -1) || (local_130[0] == -1)) {
407: if (iVar4 != 0) {
411: return uVar16;
413: if (DAT_1803e860c == 0x7fffffff) {
418: if (0xf < local_68) {
424: goto LAB_18013b715;
428: if (DAT_180409c80 == (undefined8 ******)0x0) {
437: if (iVar4 != 0) {
441: return uVar16;
443: if (DAT_1803e860c == 0x7fffffff) {
448: if (0xf < local_68) {
457: if (*(longlong *)(lVar15 + 0x10) != 0) {
462: if (*(longlong *)(lVar15 + 0x28) != 0) {
471: goto LAB_18013b715;
475: if (iVar4 == 0) {
476: if (DAT_1803e865c == 0x7fffffff) goto LAB_18013b3cd;
477: goto LAB_18013b3e3;
480: else {
481: LAB_18013b726:
495: if (iVar4 != 0) {
499: return uVar16;
501: if (DAT_1803e860c == 0x7fffffff) {
506: if (0xf < local_68) {
511: LAB_18013b7d6:
513: return 0;)F18013aba0F",
    R"F18013aba0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18013b1c7.
TODO: recover the declaration, type and value for global/data reference LAB_18013b1dd.
TODO: recover the declaration, type and value for global/data reference LAB_18013b3cd.
TODO: recover the declaration, type and value for global/data reference LAB_18013b3e3.
TODO: recover the declaration, type and value for global/data reference LAB_18013b715.
TODO: recover the declaration, type and value for global/data reference LAB_18013b726.
TODO: recover the declaration, type and value for global/data reference LAB_18013b7d6.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85b4.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e860c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8610.
TODO: recover the declaration, type and value for global/data reference DAT_1803e865c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e20.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e48.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e50.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e58.
TODO: recover the declaration, type and value for global/data reference DAT_1803fea40.
TODO: recover the declaration, type and value for global/data reference DAT_180409c30.
TODO: recover the declaration, type and value for global/data reference DAT_180409c80.
TODO: resolve the indirect call in body 91: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 92: uVar16 = (*pcVar1)();.
TODO: resolve the indirect call in body 238: ((cVar3 = (*(code *)(*ppppppuVar22)[iVar5])(ppppppuVar22), cVar3 != '\0' &&.
TODO: resolve the indirect call in body 241: (*(code *)(*ppppppuVar22)[iVar5])(ppppppuVar22,&local_60);.
TODO: resolve the indirect call in body 249: (*(code *)(*ppppppuVar22)[iVar5])(ppppppuVar22,&local_60);.
TODO: resolve the indirect call in body 334: (*(code *)(*ppppppuVar22)[iVar4])(ppppppuVar22);.
TODO: resolve the indirect call in body 339: (*(code *)(*ppppppuVar22)[iVar4])(ppppppuVar22);.
TODO: resolve the indirect call in body 346: cVar3 = (**(code **)(lVar15 + 0x18))(local_108._4_4_,&local_80);.
TODO: resolve the indirect call in body 350: (**(code **)(lVar15 + 0x20))(local_108._4_4_);.
TODO: resolve the indirect call in body 352: cVar3 = (**(code **)(lVar15 + 0x18))(local_108._4_4_,&local_80);.
TODO: resolve the indirect call in body 357: (iVar4 = (*(code *)(*ppppppuVar22)[iVar4])(ppppppuVar22), iVar4 == 0)) &&.
TODO: resolve the indirect call in body 359: (cVar3 = (*(code *)(*ppppppuVar22)[iVar4])(ppppppuVar22), cVar3 == '\0')))) &&.
TODO: resolve the indirect call in body 361: (cVar3 = (*(code *)(*ppppppuVar22)[iVar4])(ppppppuVar22), cVar3 == '\0')))) break;.
TODO: resolve the indirect call in body 372: cVar3 = (*(code *)(*ppppppuVar22)[iVar4])(ppppppuVar22);.
TODO: resolve the indirect call in body 377: uVar6 = (*(code *)(*ppppppuVar22)[iVar4])(ppppppuVar22);.
TODO: resolve the indirect call in body 397: iVar5 = (**(code **)(lVar15 + 8))(local_130,1);.
TODO: resolve the indirect call in body 409: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 410: uVar16 = (*pcVar1)();.
TODO: resolve the indirect call in body 439: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 440: uVar16 = (*pcVar1)();.
TODO: resolve the indirect call in body 459: (**(code **)(lVar15 + 0x10))(local_130[0],iVar5);.
TODO: resolve the indirect call in body 464: (**(code **)(lVar15 + 0x28))(local_130[0]);.
TODO: resolve the indirect call in body 497: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 498: uVar16 = (*pcVar1)();.)F18013aba0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013aba0() noexcept {
    return kFunction_0x18013aba0;
}

// 0x18013b810 FUN_18013b810
// source: re/dump/decompile/0x18013b810_FUN_18013b810.c
// size: 45 bytes; thunk: false
// body sha256: c95235536db18b148d93b96497373e79ff29ca81f93342874e3ab6c3a6c8d3e7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013b810{
    "0x18013b810",
    "FUN_18013b810",
    R"F18013b810S(undefined FUN_18013b810())F18013b810S",
    R"B18013b810(// 0x18013b810  FUN_18013b810
// size=45 thunk=false
// signature: undefined FUN_18013b810()
// status: ok


void FUN_18013b810(undefined8 param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  *param_2 = 0;
  lVar1 = FUN_180131270();
  (**(code **)(lVar1 + 0x18))(DAT_1803e85b4,param_1);
  return;
}


)B18013b810",
    "c95235536db18b148d93b96497373e79ff29ca81f93342874e3ab6c3a6c8d3e7",
    R"F18013b810C(FUN_180131270)F18013b810C",
    R"F18013b810D(DAT_1803e85b4)F18013b810D",
    R"F18013b810T()F18013b810T",
    R"F18013b810F(15: return;)F18013b810F",
    R"F18013b810U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85b4.
TODO: resolve the indirect call in body 14: (**(code **)(lVar1 + 0x18))(DAT_1803e85b4,param_1);.)F18013b810U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013b810() noexcept {
    return kFunction_0x18013b810;
}

// 0x18013b850 FUN_18013b850
// source: re/dump/decompile/0x18013b850_FUN_18013b850.c
// size: 836 bytes; thunk: false
// body sha256: d2d44e79c7bae9e14ea4a3c3ddf42f464ab1e20235906a0e765339b5c321d29f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013b850{
    "0x18013b850",
    "FUN_18013b850",
    R"F18013b850S(undefined FUN_18013b850())F18013b850S",
    R"B18013b850(// 0x18013b850  FUN_18013b850
// size=836 thunk=false
// signature: undefined FUN_18013b850()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18013b850(void)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 ***pppuVar8;
  char cVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [32];
  undefined8 **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined *local_68;
  undefined *local_60;
  undefined8 **local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0xf;
  local_58 = (undefined8 **)0x0;
  local_60 = &DAT_1803e8660;
  iVar4 = _Mtx_lock(&DAT_1803e8660);
  if (iVar4 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e86ac == 0x7fffffff) {
    DAT_1803e86ac = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  pppuVar8 = _DAT_1803e9e60;
  uVar7 = _DAT_1803e9e68;
  lVar2 = _DAT_1803e9e70;
  uVar10 = _DAT_1803e9e78;
  _DAT_1803e9e60 = (undefined8 ***)local_58;
  _DAT_1803e9e68 = uStack_50;
  _DAT_1803e9e70 = local_48;
  _DAT_1803e9e78 = uStack_40;
  local_58 = pppuVar8;
  uStack_50 = uVar7;
  local_48 = lVar2;
  uStack_40 = uVar10;
  _Mtx_unlock(&DAT_1803e8660);
  plVar3 = DAT_180409c80;
  iVar4 = DAT_180409c24;
  LOCK();
  DAT_180409c28 = 0;
  UNLOCK();
  if ((local_48 == 0) || (DAT_180409c80 == (longlong *)0x0)) goto LAB_18013bb71;
  if (DAT_180409c24 == 3) {
    pppuVar8 = &local_58;
    if (0xf < uStack_40) {
      pppuVar8 = (undefined8 ***)local_58;
    }
    iVar5 = FUN_1801318c0(DAT_180409c80);
    if (-1 < iVar5) {
      (**(code **)(*plVar3 + (longlong)iVar5 * 8))(plVar3,pppuVar8,0);
      goto LAB_18013b9be;
    }
    cVar9 = '\0';
  }
  else {
    pppuVar8 = &local_58;
    if (0xf < uStack_40) {
      pppuVar8 = (undefined8 ***)local_58;
    }
    iVar5 = FUN_1801318c0(DAT_180409c80);
    if (iVar5 < 0) {
      cVar9 = '\0';
    }
    else {
      (**(code **)(*plVar3 + (longlong)iVar5 * 8))(plVar3,pppuVar8);
LAB_18013b9be:
      cVar9 = '\x01';
    }
  }
  FUN_180014410("[AS] code submitted (twoFactor=%d, accepted by interface=%d), retrying LogOn\n",
                iVar4 != 3,cVar9);
  local_78 = 0;
  local_70 = 0;
  local_88 = (undefined8 ***)0x0;
  uStack_80 = 0;
  if (cVar9 == '\0') {
    FUN_18001d080(&local_88,"this build of IClientUser has no code setter",0x2c);
    local_68 = &DAT_1803e85c0;
    iVar4 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    pppuVar8 = &local_88;
    if (0xf < local_70) {
      pppuVar8 = (undefined8 ***)local_88;
    }
    FUN_180212700(&DAT_1803e9e20,pppuVar8,local_78);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_88);
  }
  else {
    FUN_18001d080(&local_88,"checking the code...",0x14);
    local_68 = &DAT_1803e85c0;
    iVar4 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    pppuVar8 = &local_88;
    if (0xf < local_70) {
      pppuVar8 = (undefined8 ***)local_88;
    }
    FUN_180212700(&DAT_1803e9e20,pppuVar8,local_78);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_88);
    plVar3 = DAT_180409c80;
    LOCK();
    DAT_180409c24 = 1;
    UNLOCK();
    iVar4 = FUN_1801318c0(DAT_180409c80);
    if (iVar4 < 0) {
      uVar10 = 2;
    }
    else {
      uVar6 = (**(code **)(*plVar3 + (longlong)iVar4 * 8))(plVar3,0x110000100000000);
      uVar10 = (ulonglong)uVar6;
    }
    uVar7 = FUN_180132470(uVar10);
    FUN_180014410("[AS] LogOn (after code) returned %d (%s)\n",uVar10 & 0xffffffff,uVar7);
  }
LAB_18013bb71:
  FUN_18020e450(&local_58);
  return;
}


)B18013b850",
    "d2d44e79c7bae9e14ea4a3c3ddf42f464ab1e20235906a0e765339b5c321d29f",
    R"F18013b850C(FUN_180014410
FUN_18001d080
FUN_1801318c0
FUN_180132470
FUN_18020e450
FUN_180212700)F18013b850C",
    R"F18013b850D(LAB_18013b9be
LAB_18013bb71
DAT_1803da4c0
DAT_1803e85c0
DAT_1803e860c
DAT_1803e8660
DAT_1803e86ac
DAT_1803e9e20
DAT_180409c24
DAT_180409c28
DAT_180409c80)F18013b850D",
    R"F18013b850T("checking the code..."
"[AS] LogOn (after code) returned %d (%s)\\n"
"this build of IClientUser has no code setter"
"[AS] code submitted (twoFactor=%d, accepted by interface=%d), retrying LogOn\\n")F18013b850T",
    R"F18013b850F(43: if (iVar4 != 0) {
47: return;
49: if (DAT_1803e86ac == 0x7fffffff) {
71: if ((local_48 == 0) || (DAT_180409c80 == (longlong *)0x0)) goto LAB_18013bb71;
72: if (DAT_180409c24 == 3) {
74: if (0xf < uStack_40) {
78: if (-1 < iVar5) {
80: goto LAB_18013b9be;
84: else {
86: if (0xf < uStack_40) {
90: if (iVar5 < 0) {
93: else {
95: LAB_18013b9be:
105: if (cVar9 == '\0') {
109: if (iVar4 != 0) {
113: return;
115: if (DAT_1803e860c == 0x7fffffff) {
120: if (0xf < local_70) {
127: else {
131: if (iVar4 != 0) {
135: return;
137: if (DAT_1803e860c == 0x7fffffff) {
142: if (0xf < local_70) {
153: if (iVar4 < 0) {
156: else {
163: LAB_18013bb71:
165: return;)F18013b850F",
    R"F18013b850U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18013b9be.
TODO: recover the declaration, type and value for global/data reference LAB_18013bb71.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e860c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8660.
TODO: recover the declaration, type and value for global/data reference DAT_1803e86ac.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e20.
TODO: recover the declaration, type and value for global/data reference DAT_180409c24.
TODO: recover the declaration, type and value for global/data reference DAT_180409c28.
TODO: recover the declaration, type and value for global/data reference DAT_180409c80.
TODO: resolve the indirect call in body 45: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 46: (*pcVar1)();.
TODO: resolve the indirect call in body 79: (**(code **)(*plVar3 + (longlong)iVar5 * 8))(plVar3,pppuVar8,0);.
TODO: resolve the indirect call in body 94: (**(code **)(*plVar3 + (longlong)iVar5 * 8))(plVar3,pppuVar8);.
TODO: resolve the indirect call in body 111: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 112: (*pcVar1)();.
TODO: resolve the indirect call in body 133: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 134: (*pcVar1)();.
TODO: resolve the indirect call in body 157: uVar6 = (**(code **)(*plVar3 + (longlong)iVar4 * 8))(plVar3,0x110000100000000);.)F18013b850U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013b850() noexcept {
    return kFunction_0x18013b850;
}

// 0x18013bba0 FUN_18013bba0
// source: re/dump/decompile/0x18013bba0_FUN_18013bba0.c
// size: 1669 bytes; thunk: false
// body sha256: 76fe0e7759e0823fdfc911c4540817550e8c8a949e33ae53e75f70eb813109a5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013bba0{
    "0x18013bba0",
    "FUN_18013bba0",
    R"F18013bba0S(undefined FUN_18013bba0())F18013bba0S",
    R"B18013bba0(// 0x18013bba0  FUN_18013bba0
// size=1669 thunk=false
// signature: undefined FUN_18013bba0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18013bba0(int param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  size_t sVar13;
  ulonglong uVar14;
  char *pcVar15;
  undefined8 *******pppppppuVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 auStack_128 [32];
  uint local_108;
  uint local_100;
  char local_f8;
  char local_f7 [3];
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  undefined8 ******local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  undefined8 ******local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  uint *puStack_88;
  ulonglong local_80;
  undefined8 local_78;
  ulonglong local_70;
  ulonglong local_68;
  
  fVar3 = DAT_180381278;
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  local_90 = 0;
  puStack_88 = (uint *)0x0;
  local_80 = 0;
  iVar9 = 0;
  iVar17 = 0;
  local_f0 = -1000000;
  local_ec = 0;
  iVar18 = -1;
  local_f4 = 0;
  bVar2 = false;
  cVar7 = '\0';
  local_f8 = '\0';
  local_e8 = param_1;
  iVar5 = iVar9;
  iVar19 = iVar9;
  if (0 < param_1) {
    do {
      iVar17 = iVar5;
      uVar14 = 0;
      if (DAT_180409ca0 != '\0') break;
      if (DAT_180409c58 != '\0') {
        FUN_180014410("[AS] wait cancelled by the user after %d ms\n",iVar19);
        return 0xfffffffe;
      }
      if (DAT_180409c28 != '\0') {
        FUN_18013b850();
        bVar2 = false;
        iVar18 = -1;
      }
      local_f7[0] = '\0';
      cVar6 = FUN_18013b810(&local_90,local_f7);
      plVar4 = DAT_180409c80;
      if (local_f7[0] != '\0') goto LAB_18013c1f0;
      if (cVar6 == '\0') {
        if (iVar19 < iVar9) {
          Sleep(0x14);
          iVar19 = iVar19 + 0x14;
        }
        else {
          iVar9 = FUN_1801318c0(DAT_180409c80);
          if (iVar9 < 0) {
LAB_18013bcc4:
            plVar4 = DAT_180409c80;
            uVar10 = (uint)uVar14;
            iVar9 = FUN_1801318c0(DAT_180409c80);
            if ((-1 < iVar9) &&
               (cVar6 = (**(code **)(*plVar4 + (longlong)iVar9 * 8))(plVar4), cVar6 != '\0'))
            goto LAB_18013bcee;
          }
          else {
            uVar10 = (**(code **)(*plVar4 + (longlong)iVar9 * 8))(plVar4);
            uVar14 = (ulonglong)uVar10;
            if (uVar10 != 3) goto LAB_18013bcc4;
LAB_18013bcee:
            plVar4 = DAT_180409c80;
            iVar9 = FUN_1801318c0(DAT_180409c80);
            if (iVar9 < 0) {
              uVar12 = 0;
            }
            else {
              local_78 = 0;
              (**(code **)(*plVar4 + (longlong)iVar9 * 8))(plVar4,&local_78);
              uVar12 = local_78;
              if ((int)local_78 != 0) goto LAB_18013c1a1;
            }
            if (cVar7 == '\0') {
              local_f8 = '\x01';
              FUN_180014410("[AS] connected but pre-authentication (SteamID still %llu) - still waiting\n"
                            ,uVar12);
            }
          }
          if (uVar10 == 2) {
            if (iVar18 < 0) {
              iVar18 = iVar19;
            }
            if ((!bVar2) && (5999 < iVar19 - iVar18)) {
              if (DAT_180409c24 == 1) {
                LOCK();
                UNLOCK();
                DAT_180409c24 = 2;
              }
              local_e0 = (undefined8 *******)0x0;
              uStack_d8 = 0;
              local_d0 = 0;
              local_c8 = 0;
              FUN_18001d080(&local_e0,
                            "Steam Guard: approve the login in the Steam app, or type the code here"
                            ,0x46);
              local_a0 = &DAT_1803e85c0;
              iVar9 = _Mtx_lock(&DAT_1803e85c0);
              if (iVar9 != 0) {
                std::_Throw_Cpp_error(5);
LAB_18013c1a1:
                FUN_180014410(
                             "[AS] logon state says we are on and SteamID is real (%llu) - accepting\n"
                             );
                return 1;
              }
              if (DAT_1803e860c == 0x7fffffff) {
                DAT_1803e860c = 0x7ffffffe;
                std::_Throw_Cpp_error(6);
                pcVar1 = (code *)swi(3);
                uVar14 = (*pcVar1)();
                return uVar14;
              }
              bVar2 = true;
              pppppppuVar16 = &local_e0;
              if (0xf < local_c8) {
                pppppppuVar16 = (undefined8 *******)local_e0;
              }
              FUN_180212700(&DAT_1803e9e20,pppppppuVar16,local_d0);
              _Mtx_unlock(&DAT_1803e85c0);
              FUN_18020e450(&local_e0);
              FUN_180014410("[AS] stuck in LoggingOn for %d ms -> raising the Steam Guard prompt\n",
                            iVar19 - iVar18);
            }
          }
          else {
            iVar18 = -1;
          }
          plVar4 = DAT_180409c80;
          local_f4 = iVar19 + 500;
          if (4999 < iVar19 - local_f0) {
            local_f0 = iVar19;
            iVar9 = FUN_1801318c0(DAT_180409c80);
            if (iVar9 < 0) {
              cVar7 = '\0';
            }
            else {
              cVar7 = (**(code **)(*plVar4 + (longlong)iVar9 * 8))(plVar4);
            }
            plVar4 = DAT_180409c80;
            iVar9 = FUN_1801318c0(DAT_180409c80);
            if (iVar9 < 0) {
              cVar6 = '\0';
            }
            else {
              cVar6 = (**(code **)(*plVar4 + (longlong)iVar9 * 8))(plVar4);
            }
            plVar4 = DAT_180409c80;
            iVar9 = FUN_1801318c0(DAT_180409c80);
            if (iVar9 < 0) {
              cVar8 = '\0';
            }
            else {
              cVar8 = (**(code **)(*plVar4 + (longlong)iVar9 * 8))(plVar4);
            }
            local_100 = (uint)(cVar7 != '\0');
            local_108 = (uint)(cVar6 != '\0');
            FUN_180014410("[AS] waiting %.1fs: logonState=%d loggedOn=%d tryingToLogin=%d connected=%d\n"
                          ,(double)((float)iVar19 / fVar3),uVar10,cVar8 != '\0');
            iVar17 = local_ec;
          }
          iVar9 = local_f4;
          Sleep(0x14);
          iVar19 = iVar19 + 0x14;
          cVar7 = local_f8;
        }
      }
      else {
        iVar17 = iVar17 + 1;
        local_ec = iVar17;
        if (local_90._4_4_ - 0x65U < 3) {
          local_100 = DAT_1803e85b4;
          local_108 = (uint)local_90;
          FUN_180014410("[AS] callback #%d id=%d bytes=%d user=%d (pipe %d)\n",iVar17,local_90._4_4_
                        ,local_80 & 0xffffffff);
        }
        plVar4 = DAT_180409c80;
        if (local_90._4_4_ == 0x65) {
          iVar9 = FUN_1801318c0(DAT_180409c80);
          if (-1 < iVar9) {
            local_70 = 0;
            (**(code **)(*plVar4 + (longlong)iVar9 * 8))(plVar4,&local_70);
            uVar14 = local_70;
            if ((int)local_70 != 0) {
              uVar10 = 1;
              lVar11 = FUN_180131270();
              (**(code **)(lVar11 + 0x20))(DAT_1803e85b4);
              goto LAB_18013c1ca;
            }
          }
          FUN_180014410("[AS] callback 101 with SteamID still %llu - not accepting yet\n",uVar14);
          lVar11 = FUN_180131270();
          (**(code **)(lVar11 + 0x20))(DAT_1803e85b4);
          iVar9 = local_f4;
          goto LAB_18013c135;
        }
        if (((local_90._4_4_ == 0x66) && (puStack_88 != (uint *)0x0)) && (3 < (int)local_80)) {
          uVar10 = *puStack_88;
          uVar12 = FUN_180132470(uVar10);
          pcVar15 = "[AS] connect failure: EResult %d (%s)\n";
LAB_18013c02c:
          FUN_180014410(pcVar15,uVar10,uVar12);
        }
        else {
          uVar10 = 0xffffffff;
          if (((local_90._4_4_ == 0x67) && (puStack_88 != (uint *)0x0)) && (3 < (int)local_80)) {
            uVar10 = *puStack_88;
            uVar12 = FUN_180132470(uVar10);
            pcVar15 = "[AS] disconnected: EResult %d (%s)\n";
            goto LAB_18013c02c;
          }
        }
        lVar11 = FUN_180131270();
        (**(code **)(lVar11 + 0x20))(DAT_1803e85b4);
        cVar7 = local_f8;
        if ((int)uVar10 < 0) goto LAB_18013c135;
        if ((uVar10 == 0x55) || (uVar10 == 0x58)) {
LAB_18013c06e:
          DAT_180409c24 = 2;
          if (uVar10 - 0x41 < 2) goto LAB_18013c07b;
        }
        else {
          if (uVar10 != 0x3f) {
            if (uVar10 == 0x42) goto LAB_18013c06e;
            if (uVar10 != 0x41) {
LAB_18013c1ca:
              return (ulonglong)uVar10;
            }
          }
LAB_18013c07b:
          DAT_180409c24 = 3;
        }
        LOCK();
        UNLOCK();
        pcVar15 = (char *)FUN_180132470(uVar10);
        local_c0 = (undefined8 *******)0x0;
        uStack_b8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        sVar13 = strlen(pcVar15);
        FUN_18001d080(&local_c0,pcVar15,sVar13);
        local_98 = &DAT_1803e85c0;
        iVar9 = _Mtx_lock(&DAT_1803e85c0);
        if (iVar9 != 0) {
          std::_Throw_Cpp_error(5);
LAB_18013c1f0:
          FUN_180014410("[AS] BGetCallback faulted on pipe %d\n",DAT_1803e85b4);
          return 2;
        }
        if (DAT_1803e860c == 0x7fffffff) {
          DAT_1803e860c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
          pcVar1 = (code *)swi(3);
          uVar14 = (*pcVar1)();
          return uVar14;
        }
        pppppppuVar16 = &local_c0;
        if (0xf < local_a8) {
          pppppppuVar16 = (undefined8 *******)local_c0;
        }
        FUN_180212700(&DAT_1803e9e20,pppppppuVar16,local_b0);
        _Mtx_unlock(&DAT_1803e85c0);
        FUN_18020e450(&local_c0);
        FUN_180014410("[AS] second factor needed (EResult %d) - holding the session open\n",uVar10);
        bVar2 = true;
        iVar18 = -1;
        iVar9 = local_f4;
        cVar7 = local_f8;
      }
LAB_18013c135:
      iVar5 = iVar17;
    } while (iVar19 < local_e8);
  }
  FUN_180014410("[AS] pump gave up after %d ms, %d callback(s) seen\n",iVar19,iVar17);
  return 0x10;
}


)B18013bba0",
    "76fe0e7759e0823fdfc911c4540817550e8c8a949e33ae53e75f70eb813109a5",
    R"F18013bba0C(FUN_180014410
FUN_18001d080
FUN_180131270
FUN_1801318c0
FUN_180132470
FUN_18013b810
FUN_18013b850
FUN_18020e450
FUN_180212700)F18013bba0C",
    R"F18013bba0D(LAB_18013bcc4
LAB_18013bcee
LAB_18013c02c
LAB_18013c06e
LAB_18013c07b
LAB_18013c135
LAB_18013c1a1
LAB_18013c1ca
LAB_18013c1f0
DAT_180381278
DAT_1803da4c0
DAT_1803e85b4
DAT_1803e85c0
DAT_1803e860c
DAT_1803e9e20
DAT_180409c24
DAT_180409c28
DAT_180409c58
DAT_180409c80
DAT_180409ca0)F18013bba0D",
    R"F18013bba0T("[AS] disconnected: EResult %d (%s)\\n"
"[AS] BGetCallback faulted on pipe %d\\n"
"[AS] connect failure: EResult %d (%s)\\n"
"[AS] wait cancelled by the user after %d ms\\n"
"[AS] callback #%d id=%d bytes=%d user=%d (pipe %d)\\n"
"[AS] pump gave up after %d ms, %d callback(s) seen\\n"
"[AS] callback 101 with SteamID still %llu - not accepting yet\\n"
"[AS] second factor needed (EResult %d) - holding the session open\\n"
"[AS] stuck in LoggingOn for %d ms -> raising the Steam Guard prompt\\n"
"Steam Guard: approve the login in the Steam app, or type the code here"
"[AS] logon state says we are on and SteamID is real (%llu) - accepting\\n"
"[AS] connected but pre-authentication (SteamID still %llu) - still waiting\\n"
"[AS] waiting %.1fs: logonState=%d loggedOn=%d tryingToLogin=%d connected=%d\\n")F18013bba0T",
    R"F18013bba0F(74: if (0 < param_1) {
75: do {
78: if (DAT_180409ca0 != '\0') break;
79: if (DAT_180409c58 != '\0') {
81: return 0xfffffffe;
83: if (DAT_180409c28 != '\0') {
91: if (local_f7[0] != '\0') goto LAB_18013c1f0;
92: if (cVar6 == '\0') {
93: if (iVar19 < iVar9) {
97: else {
99: if (iVar9 < 0) {
100: LAB_18013bcc4:
104: if ((-1 < iVar9) &&
106: goto LAB_18013bcee;
108: else {
111: if (uVar10 != 3) goto LAB_18013bcc4;
112: LAB_18013bcee:
115: if (iVar9 < 0) {
118: else {
122: if ((int)local_78 != 0) goto LAB_18013c1a1;
124: if (cVar7 == '\0') {
130: if (uVar10 == 2) {
131: if (iVar18 < 0) {
134: if ((!bVar2) && (5999 < iVar19 - iVar18)) {
135: if (DAT_180409c24 == 1) {
149: if (iVar9 != 0) {
151: LAB_18013c1a1:
155: return 1;
157: if (DAT_1803e860c == 0x7fffffff) {
162: return uVar14;
166: if (0xf < local_c8) {
176: else {
181: if (4999 < iVar19 - local_f0) {
184: if (iVar9 < 0) {
187: else {
192: if (iVar9 < 0) {
195: else {
200: if (iVar9 < 0) {
203: else {
218: else {
221: if (local_90._4_4_ - 0x65U < 3) {
228: if (local_90._4_4_ == 0x65) {
230: if (-1 < iVar9) {
234: if ((int)local_70 != 0) {
238: goto LAB_18013c1ca;
245: goto LAB_18013c135;
247: if (((local_90._4_4_ == 0x66) && (puStack_88 != (uint *)0x0)) && (3 < (int)local_80)) {
251: LAB_18013c02c:
254: else {
256: if (((local_90._4_4_ == 0x67) && (puStack_88 != (uint *)0x0)) && (3 < (int)local_80)) {
260: goto LAB_18013c02c;
266: if ((int)uVar10 < 0) goto LAB_18013c135;
267: if ((uVar10 == 0x55) || (uVar10 == 0x58)) {
268: LAB_18013c06e:
270: if (uVar10 - 0x41 < 2) goto LAB_18013c07b;
272: else {
273: if (uVar10 != 0x3f) {
274: if (uVar10 == 0x42) goto LAB_18013c06e;
275: if (uVar10 != 0x41) {
276: LAB_18013c1ca:
277: return (ulonglong)uVar10;
280: LAB_18013c07b:
294: if (iVar9 != 0) {
296: LAB_18013c1f0:
298: return 2;
300: if (DAT_1803e860c == 0x7fffffff) {
305: return uVar14;
308: if (0xf < local_a8) {
320: LAB_18013c135:
325: return 0x10;)F18013bba0F",
    R"F18013bba0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18013bcc4.
TODO: recover the declaration, type and value for global/data reference LAB_18013bcee.
TODO: recover the declaration, type and value for global/data reference LAB_18013c02c.
TODO: recover the declaration, type and value for global/data reference LAB_18013c06e.
TODO: recover the declaration, type and value for global/data reference LAB_18013c07b.
TODO: recover the declaration, type and value for global/data reference LAB_18013c135.
TODO: recover the declaration, type and value for global/data reference LAB_18013c1a1.
TODO: recover the declaration, type and value for global/data reference LAB_18013c1ca.
TODO: recover the declaration, type and value for global/data reference LAB_18013c1f0.
TODO: recover the declaration, type and value for global/data reference DAT_180381278.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85b4.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e860c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e20.
TODO: recover the declaration, type and value for global/data reference DAT_180409c24.
TODO: recover the declaration, type and value for global/data reference DAT_180409c28.
TODO: recover the declaration, type and value for global/data reference DAT_180409c58.
TODO: recover the declaration, type and value for global/data reference DAT_180409c80.
TODO: recover the declaration, type and value for global/data reference DAT_180409ca0.
TODO: resolve the indirect call in body 105: (cVar6 = (**(code **)(*plVar4 + (longlong)iVar9 * 8))(plVar4), cVar6 != '\0')).
TODO: resolve the indirect call in body 109: uVar10 = (**(code **)(*plVar4 + (longlong)iVar9 * 8))(plVar4);.
TODO: resolve the indirect call in body 120: (**(code **)(*plVar4 + (longlong)iVar9 * 8))(plVar4,&local_78);.
TODO: resolve the indirect call in body 160: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 161: uVar14 = (*pcVar1)();.
TODO: resolve the indirect call in body 188: cVar7 = (**(code **)(*plVar4 + (longlong)iVar9 * 8))(plVar4);.
TODO: resolve the indirect call in body 196: cVar6 = (**(code **)(*plVar4 + (longlong)iVar9 * 8))(plVar4);.
TODO: resolve the indirect call in body 204: cVar8 = (**(code **)(*plVar4 + (longlong)iVar9 * 8))(plVar4);.
TODO: resolve the indirect call in body 232: (**(code **)(*plVar4 + (longlong)iVar9 * 8))(plVar4,&local_70);.
TODO: resolve the indirect call in body 237: (**(code **)(lVar11 + 0x20))(DAT_1803e85b4);.
TODO: resolve the indirect call in body 243: (**(code **)(lVar11 + 0x20))(DAT_1803e85b4);.
TODO: resolve the indirect call in body 264: (**(code **)(lVar11 + 0x20))(DAT_1803e85b4);.
TODO: resolve the indirect call in body 303: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 304: uVar14 = (*pcVar1)();.)F18013bba0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013bba0() noexcept {
    return kFunction_0x18013bba0;
}

// 0x18013c230 FUN_18013c230
// source: re/dump/decompile/0x18013c230_FUN_18013c230.c
// size: 1949 bytes; thunk: false
// body sha256: 88660d71b42a1e14963fa9ebf1ae5c38bac4fb64a116850d3a39863363ba57f0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013c230{
    "0x18013c230",
    "FUN_18013c230",
    R"F18013c230S(undefined FUN_18013c230())F18013c230S",
    R"B18013c230(// 0x18013c230  FUN_18013c230
// size=1949 thunk=false
// signature: undefined FUN_18013c230()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_18013c230(int param_1)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  size_t sVar7;
  ulonglong uVar8;
  undefined *puVar9;
  undefined8 *******pppppppuVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined1 auStack_158 [32];
  undefined *local_138;
  int local_130;
  undefined8 *******local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong local_110;
  undefined4 local_108;
  undefined *local_100;
  undefined *local_f8 [2];
  char local_e8 [192];
  ulonglong local_28;
  
  plVar6 = DAT_180409c80;
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  local_108 = 0;
  LOCK();
  UNLOCK();
  DAT_180409c74 = param_1;
  switch(param_1) {
  case 1:
    iVar4 = FUN_1801318c0(DAT_180409c80,0x180000000,"GetSteamID");
    puVar12 = (undefined *)0x0;
    if (-1 < iVar4) {
      local_f8[0] = (undefined *)0x0;
      (**(code **)(*plVar6 + (longlong)iVar4 * 8))(plVar6,local_f8);
      puVar12 = local_f8[0];
      if ((int)local_f8[0] != 0) {
        LOCK();
        DAT_180409c30 = local_f8[0];
        UNLOCK();
        LOCK();
        DAT_180409c24 = 4;
        UNLOCK();
        local_100 = &DAT_1803e8610;
        iVar4 = _Mtx_lock(&DAT_1803e8610);
        if (iVar4 != 0) {
          std::_Throw_Cpp_error(5);
          pcVar1 = (code *)swi(3);
          uVar8 = (*pcVar1)();
          return uVar8;
        }
        lVar2 = DAT_1803e9e48;
        if (DAT_1803e865c == 0x7fffffff) {
          DAT_1803e865c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
          lVar2 = DAT_1803e9e48;
        }
        do {
          if (lVar2 == DAT_1803e9e50) {
LAB_18013c417:
            _Mtx_unlock(&DAT_1803e8610);
            local_f8[0] = &DAT_1803e85c0;
            iVar4 = _Mtx_lock(&DAT_1803e85c0);
            if (iVar4 != 0) {
              std::_Throw_Cpp_error(5);
              pcVar1 = (code *)swi(3);
              uVar8 = (*pcVar1)();
              return uVar8;
            }
            if (DAT_1803e860c == 0x7fffffff) {
              DAT_1803e860c = 0x7ffffffe;
              std::_Throw_Cpp_error(6);
            }
            FUN_18016d4c0(&local_128,&DAT_1803eb340);
            local_108 = 1;
            _Mtx_unlock(&DAT_1803e85c0);
            FUN_1801368a0(&local_128,puVar12);
            local_108 = 0;
            FUN_18020e450(&local_128);
            plVar6 = DAT_180409c80;
            if (DAT_180409c80 != (longlong *)0x0) {
              local_f8[0] = (undefined *)((ulonglong)local_f8[0] & 0xffffffff00000000);
              iVar4 = FUN_1801318c0(DAT_180409c80);
              if ((-1 < iVar4) &&
                 (cVar3 = (**(code **)(*plVar6 + (longlong)iVar4 * 8))(plVar6,local_f8),
                 plVar6 = DAT_180409c80, cVar3 != '\0')) {
                iVar4 = FUN_1801318c0(DAT_180409c80);
                if (iVar4 < 0) {
                  cVar3 = '\0';
                }
                else {
                  cVar3 = (**(code **)(*plVar6 + (longlong)iVar4 * 8))(plVar6);
                }
                pcVar11 = "REFUSED";
                if (cVar3 != '\0') {
                  pcVar11 = "sent";
                }
                FUN_180014410("[AS] this account was already playing in another session (kind=%u) - kick %s\n"
                              ,(ulonglong)local_f8[0] & 0xffffffff,pcVar11);
              }
            }
            local_128 = (undefined8 *******)0x0;
            uStack_120 = 0;
            local_118 = 0;
            local_110 = 0;
            FUN_18001d080(&local_128,"signed in - waiting for licences to arrive...",0x2d);
            local_f8[0] = &DAT_1803e85c0;
            iVar4 = _Mtx_lock(&DAT_1803e85c0);
            if (iVar4 == 0) {
              if (DAT_1803e860c == 0x7fffffff) {
                DAT_1803e860c = 0x7ffffffe;
                std::_Throw_Cpp_error(6);
              }
              pppppppuVar10 = &local_128;
              if (0xf < local_110) {
                pppppppuVar10 = local_128;
              }
              FUN_180212700(&DAT_1803e9e20,pppppppuVar10,local_118);
              _Mtx_unlock(&DAT_1803e85c0);
              FUN_18020e450(&local_128);
              FUN_180138cf0();
              FUN_180014410("[AS] ---- diagnostics (app %u) - build %s %s ----\n",4000,"Sep  7 2026"
                            ,"21:33:34");
              FUN_180136d80(&DAT_18035b304,DAT_180409c80);
              if ((DAT_180409c29 == '\0') ||
                 (puVar9 = DAT_180409c38, DAT_180409c38 == (undefined *)0x0)) {
                uVar5 = FUN_1801321e0();
                plVar6 = (longlong *)FUN_1801323e0(uVar5);
                puVar9 = (undefined *)0x0;
                if (plVar6 != (longlong *)0x0) {
                  puVar9 = (undefined *)*plVar6;
                }
              }
              FUN_180136d80(&DAT_1803476ec,puVar9);
              FUN_180014410(
                           "[AS] diag ticket: skipped - a probe costs one of the 100 auth tickets this user will ever get. Ctrl+click Diagnose to spend one on purpose.\n"
                           );
              local_138 = puVar12;
              FUN_180012b20(local_e8,0xc0,0xffffffffffffffff,
                            "logged in - SteamID64 %llu (press Deploy)");
              local_128 = (undefined8 *******)0x0;
              uStack_120 = 0;
              local_118 = 0;
              local_110 = 0;
              sVar7 = strlen(local_e8);
              FUN_18001d080(&local_128,local_e8,sVar7);
              local_f8[0] = &DAT_1803e85c0;
              iVar4 = _Mtx_lock(&DAT_1803e85c0);
              if (iVar4 == 0) {
                if (DAT_1803e860c == 0x7fffffff) {
                  DAT_1803e860c = 0x7ffffffe;
                  std::_Throw_Cpp_error(6);
                }
                pppppppuVar10 = &local_128;
                if (0xf < local_110) {
                  pppppppuVar10 = local_128;
                }
                FUN_180212700(&DAT_1803e9e20,pppppppuVar10,local_118);
                _Mtx_unlock(&DAT_1803e85c0);
                uVar8 = FUN_18020e450(&local_128);
                return uVar8;
              }
              std::_Throw_Cpp_error(5);
              pcVar1 = (code *)swi(3);
              uVar8 = (*pcVar1)();
              return uVar8;
            }
            std::_Throw_Cpp_error(5);
            pcVar1 = (code *)swi(3);
            uVar8 = (*pcVar1)();
            return uVar8;
          }
          if (*(longlong **)(lVar2 + 0x28) == DAT_180409c80) {
            *(undefined **)(lVar2 + 0x30) = puVar12;
            goto LAB_18013c417;
          }
          lVar2 = lVar2 + 0x38;
        } while( true );
      }
    }
    FUN_180014410("[AS] refusing a logon with no account id (SteamID %llu)\n",puVar12);
    local_128 = (undefined8 *******)0x0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = 0;
    FUN_18001d080(&local_128,
                  "Steam connected but never signed the account in - use the password, not the cached login"
                  ,0x58);
    local_f8[0] = &DAT_1803e85c0;
    iVar4 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return uVar8;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    pppppppuVar10 = &local_128;
    if (0xf < local_110) {
      pppppppuVar10 = local_128;
    }
    FUN_180212700(&DAT_1803e9e20,pppppppuVar10,local_118);
    _Mtx_unlock(&DAT_1803e85c0);
    break;
  default:
    local_138 = (undefined *)FUN_180132470(param_1);
    local_130 = param_1;
    FUN_180012b20(local_e8,0xc0,0xffffffffffffffff,"login failed: %s (EResult %d)");
    local_128 = (undefined8 *******)0x0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = 0;
    sVar7 = strlen(local_e8);
    FUN_18001d080(&local_128,local_e8,sVar7);
    local_f8[0] = &DAT_1803e85c0;
    iVar4 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return uVar8;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    pppppppuVar10 = &local_128;
    if (0xf < local_110) {
      pppppppuVar10 = local_128;
    }
    FUN_180212700(&DAT_1803e9e20,pppppppuVar10,local_118);
    _Mtx_unlock(&DAT_1803e85c0);
    break;
  case 0x3f:
  case 0x41:
  case 0x42:
    pcVar11 = "Steam Guard e-mail code required";
    if (param_1 == 0x41) {
      pcVar11 = "wrong Steam Guard code, try again";
    }
    local_128 = (undefined8 *******)0x0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = 0;
    sVar7 = strlen(pcVar11);
    FUN_18001d080(&local_128,pcVar11,sVar7);
    local_f8[0] = &DAT_1803e85c0;
    iVar4 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar4 == 0) {
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      pppppppuVar10 = &local_128;
      if (0xf < local_110) {
        pppppppuVar10 = local_128;
      }
      FUN_180212700(&DAT_1803e9e20,pppppppuVar10,local_118);
      _Mtx_unlock(&DAT_1803e85c0);
      FUN_18020e450(&local_128);
      LOCK();
      uVar8 = (ulonglong)DAT_180409c24;
      UNLOCK();
      DAT_180409c24 = 3;
      return uVar8;
    }
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return uVar8;
  case 0x55:
  case 0x58:
    pcVar11 = "mobile authenticator code required";
    if (param_1 == 0x58) {
      pcVar11 = "wrong authenticator code, try again";
    }
    local_128 = (undefined8 *******)0x0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = 0;
    sVar7 = strlen(pcVar11);
    FUN_18001d080(&local_128,pcVar11,sVar7);
    local_f8[0] = &DAT_1803e85c0;
    iVar4 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar4 == 0) {
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      pppppppuVar10 = &local_128;
      if (0xf < local_110) {
        pppppppuVar10 = local_128;
      }
      FUN_180212700(&DAT_1803e9e20,pppppppuVar10,local_118);
      _Mtx_unlock(&DAT_1803e85c0);
      FUN_18020e450(&local_128);
      LOCK();
      uVar8 = (ulonglong)DAT_180409c24;
      UNLOCK();
      DAT_180409c24 = 2;
      return uVar8;
    }
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return uVar8;
  }
  FUN_18020e450(&local_128);
  LOCK();
  DAT_180409c24 = 5;
  UNLOCK();
  uVar8 = FUN_18013a1e0();
  return uVar8;
}


)B18013c230",
    "88660d71b42a1e14963fa9ebf1ae5c38bac4fb64a116850d3a39863363ba57f0",
    R"F18013c230C(FUN_180012b20
FUN_180014410
FUN_18001d080
FUN_1801318c0
FUN_1801321e0
FUN_1801323e0
FUN_180132470
FUN_1801368a0
FUN_180136d80
FUN_180138cf0
FUN_18013a1e0
FUN_18016d4c0
FUN_18020e450
FUN_180212700)F18013c230C",
    R"F18013c230D(LAB_18013c417
DAT_1803476ec
DAT_18035b304
DAT_1803da4c0
DAT_1803e85c0
DAT_1803e860c
DAT_1803e8610
DAT_1803e865c
DAT_1803e9e20
DAT_1803e9e48
DAT_1803e9e50
DAT_1803eb340
DAT_180409c24
DAT_180409c29
DAT_180409c30
DAT_180409c38
DAT_180409c74
DAT_180409c80)F18013c230D",
    R"F18013c230T("sent"
"REFUSED"
"21:33:34"
"GetSteamID"
"Sep  7 2026"
"login failed: %s (EResult %d)"
"Steam Guard e-mail code required"
"wrong Steam Guard code, try again"
"mobile authenticator code required"
"wrong authenticator code, try again"
"logged in - SteamID64 %llu (press Deploy)"
"signed in - waiting for licences to arrive..."
"[AS] ---- diagnostics (app %u) - build %s %s ----\\n"
"[AS] refusing a logon with no account id (SteamID %llu)\\n"
"[AS] this account was already playing in another session (kind=%u) - kick %s\\n"
"Steam connected but never signed the account in - use the password, not the cached login"
"[AS] diag ticket: skipped - a probe costs one of the 100 auth tickets this user will ever get. Ctrl+click Diagnose to spend one on purpose.\\n")F18013c230T",
    R"F18013c230F(44: switch(param_1) {
45: case 1:
48: if (-1 < iVar4) {
52: if ((int)local_f8[0] != 0) {
61: if (iVar4 != 0) {
65: return uVar8;
68: if (DAT_1803e865c == 0x7fffffff) {
73: do {
74: if (lVar2 == DAT_1803e9e50) {
75: LAB_18013c417:
79: if (iVar4 != 0) {
83: return uVar8;
85: if (DAT_1803e860c == 0x7fffffff) {
96: if (DAT_180409c80 != (longlong *)0x0) {
99: if ((-1 < iVar4) &&
103: if (iVar4 < 0) {
106: else {
110: if (cVar3 != '\0') {
124: if (iVar4 == 0) {
125: if (DAT_1803e860c == 0x7fffffff) {
130: if (0xf < local_110) {
140: if ((DAT_180409c29 == '\0') ||
145: if (plVar6 != (longlong *)0x0) {
164: if (iVar4 == 0) {
165: if (DAT_1803e860c == 0x7fffffff) {
170: if (0xf < local_110) {
176: return uVar8;
181: return uVar8;
186: return uVar8;
188: if (*(longlong **)(lVar2 + 0x28) == DAT_180409c80) {
190: goto LAB_18013c417;
206: if (iVar4 != 0) {
210: return uVar8;
212: if (DAT_1803e860c == 0x7fffffff) {
217: if (0xf < local_110) {
222: break;
235: if (iVar4 != 0) {
239: return uVar8;
241: if (DAT_1803e860c == 0x7fffffff) {
246: if (0xf < local_110) {
251: break;
252: case 0x3f:
253: case 0x41:
254: case 0x42:
256: if (param_1 == 0x41) {
267: if (iVar4 == 0) {
268: if (DAT_1803e860c == 0x7fffffff) {
273: if (0xf < local_110) {
283: return uVar8;
288: return uVar8;
289: case 0x55:
290: case 0x58:
292: if (param_1 == 0x58) {
303: if (iVar4 == 0) {
304: if (DAT_1803e860c == 0x7fffffff) {
309: if (0xf < local_110) {
319: return uVar8;
324: return uVar8;
331: return uVar8;)F18013c230F",
    R"F18013c230U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18013c417.
TODO: recover the declaration, type and value for global/data reference DAT_1803476ec.
TODO: recover the declaration, type and value for global/data reference DAT_18035b304.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e860c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8610.
TODO: recover the declaration, type and value for global/data reference DAT_1803e865c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e20.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e48.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e50.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb340.
TODO: recover the declaration, type and value for global/data reference DAT_180409c24.
TODO: recover the declaration, type and value for global/data reference DAT_180409c29.
TODO: recover the declaration, type and value for global/data reference DAT_180409c30.
TODO: recover the declaration, type and value for global/data reference DAT_180409c38.
TODO: recover the declaration, type and value for global/data reference DAT_180409c74.
TODO: recover the declaration, type and value for global/data reference DAT_180409c80.
TODO: resolve the indirect call in body 50: (**(code **)(*plVar6 + (longlong)iVar4 * 8))(plVar6,local_f8);.
TODO: resolve the indirect call in body 63: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 64: uVar8 = (*pcVar1)();.
TODO: resolve the indirect call in body 81: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 82: uVar8 = (*pcVar1)();.
TODO: resolve the indirect call in body 100: (cVar3 = (**(code **)(*plVar6 + (longlong)iVar4 * 8))(plVar6,local_f8),.
TODO: resolve the indirect call in body 107: cVar3 = (**(code **)(*plVar6 + (longlong)iVar4 * 8))(plVar6);.
TODO: resolve the indirect call in body 179: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 180: uVar8 = (*pcVar1)();.
TODO: resolve the indirect call in body 184: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 185: uVar8 = (*pcVar1)();.
TODO: resolve the indirect call in body 208: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 209: uVar8 = (*pcVar1)();.
TODO: resolve the indirect call in body 237: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 238: uVar8 = (*pcVar1)();.
TODO: resolve the indirect call in body 286: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 287: uVar8 = (*pcVar1)();.
TODO: resolve the indirect call in body 322: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 323: uVar8 = (*pcVar1)();.)F18013c230U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013c230() noexcept {
    return kFunction_0x18013c230;
}

// 0x18013ca40 FUN_18013ca40
// source: re/dump/decompile/0x18013ca40_FUN_18013ca40.c
// size: 1203 bytes; thunk: false
// body sha256: 0ed6559f07b87ac83d35effff0d5b0cbd77e756ab737cc3f45ac59029ea60fb9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013ca40{
    "0x18013ca40",
    "FUN_18013ca40",
    R"F18013ca40S(undefined FUN_18013ca40())F18013ca40S",
    R"B18013ca40(// 0x18013ca40  FUN_18013ca40
// size=1203 thunk=false
// signature: undefined FUN_18013ca40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18013ca40(char param_1,undefined4 param_2,undefined8 param_3)

{
  code *pcVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 ******ppppppuVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_d8 [32];
  uint local_b8;
  undefined4 local_a8;
  undefined8 *****local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined *local_80;
  undefined8 *****local_78 [2];
  longlong local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  iVar10 = 0;
  local_a8 = 0;
  while( true ) {
    iVar9 = 0;
    uVar5 = 0x803e85c0;
    if (iVar10 != 0) break;
LAB_18013cb96:
    plVar2 = DAT_180409c80;
    iVar9 = FUN_1801318c0(DAT_180409c80);
    if (iVar9 < 0) {
      uVar5 = 2;
    }
    else {
      uVar5 = (**(code **)(*plVar2 + (longlong)iVar9 * 8))(plVar2,param_3);
    }
    plVar2 = DAT_180409c80;
    iVar9 = FUN_1801318c0(DAT_180409c80);
    if (iVar9 < 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = (**(code **)(*plVar2 + (longlong)iVar9 * 8))(plVar2);
    }
    plVar2 = DAT_180409c80;
    iVar9 = FUN_1801318c0(DAT_180409c80);
    if (-1 < iVar9) {
      (**(code **)(*plVar2 + (longlong)iVar9 * 8))(plVar2);
    }
    uVar7 = FUN_180132470(uVar5);
    local_b8 = (uint)(cVar3 != '\0');
    FUN_180014410("[AS] LogOn returned %d (%s); logonState=%d tryingToLogin=%d\n",uVar5,uVar7);
    if (uVar5 < 2) {
      uVar5 = FUN_18013bba0(param_2);
    }
    if (uVar5 != 3) goto LAB_18013ccaa;
    if (((DAT_180409ca0 != '\0') || (DAT_180409c58 != '\0')) || (iVar10 = iVar10 + 1, 2 < iVar10))
    goto LAB_18013cd6b;
  }
  FUN_180014410("[AS] retrying the logon after EResult 3 (attempt %d)\n",iVar10 + 1);
  local_a0 = (undefined8 ******)0x0;
  uStack_98 = 0;
  local_90 = 0;
  local_88 = 0;
  FUN_18001d080(&local_a0,"Steam was still letting go of the last session - retrying...",0x3c);
  local_80 = &DAT_1803e85c0;
  iVar4 = _Mtx_lock(&DAT_1803e85c0);
  if (iVar4 == 0) {
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    ppppppuVar8 = &local_a0;
    if (0xf < local_88) {
      ppppppuVar8 = (undefined8 ******)local_a0;
    }
    FUN_180212700(&DAT_1803e9e20,ppppppuVar8,local_90);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_a0);
    do {
      if ((DAT_180409ca0 != '\0') || (DAT_180409c58 != '\0')) break;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      while (DAT_1803e85b4 != -1) {
        lVar6 = FUN_180131270();
        cVar3 = (**(code **)(lVar6 + 0x18))(DAT_1803e85b4,&local_58);
        if (cVar3 == '\0') break;
        lVar6 = FUN_180131270();
        (**(code **)(lVar6 + 0x20))(DAT_1803e85b4);
      }
      Sleep(0x32);
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x1e);
    goto LAB_18013cb96;
  }
  std::_Throw_Cpp_error(5);
LAB_18013ccaa:
  if (uVar5 == 0xfffffffe) {
    local_a0 = (undefined8 ******)0x0;
    uStack_98 = 0;
    local_90 = 0;
    local_88 = 0;
    FUN_18001d080(&local_a0,"cancelled",9);
    local_80 = &DAT_1803e85c0;
    iVar10 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar10 == 0) {
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      ppppppuVar8 = &local_a0;
      if (0xf < local_88) {
        ppppppuVar8 = (undefined8 ******)local_a0;
      }
      FUN_180212700(&DAT_1803e9e20,ppppppuVar8,local_90);
      _Mtx_unlock(&DAT_1803e85c0);
      FUN_18020e450(&local_a0);
      LOCK();
      DAT_180409c24 = 0;
      UNLOCK();
      FUN_18013a1e0();
      return;
    }
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_18013cd6b:
  uVar7 = FUN_180132470(uVar5);
  FUN_180014410("[AS] logon decided by EResult %d (%s)\n",uVar5,uVar7);
  FUN_18013c230(uVar5);
  if ((param_1 != '\0') && (DAT_180409c24 == 4)) {
    FUN_180137a90();
  }
  uVar7 = DAT_180409c30;
  if (DAT_180409c24 == 4) {
    local_80 = &DAT_1803e85c0;
    iVar10 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar10 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    FUN_18016d4c0(local_78,&DAT_1803eb340);
    local_a8 = 1;
    _Mtx_unlock(&DAT_1803e85c0);
    if (local_68 != 0) {
      lVar6 = FUN_180135100(&local_a0,local_78);
      lVar6 = *(longlong *)(lVar6 + 0x10);
      FUN_18020e450(&local_a0);
      iVar10 = 8;
      if (lVar6 != 0) {
        iVar10 = 1;
      }
      iVar9 = 0;
      while (DAT_180409ca0 == '\0') {
        cVar3 = FUN_1801355a0(local_78,uVar7);
        if (cVar3 != '\0') {
          ppppppuVar8 = local_78;
          if (0xf < local_60) {
            ppppppuVar8 = (undefined8 ******)local_78[0];
          }
          FUN_180014410("[AS] token vault: stored a refresh token for \'%s\' (try %d) - this account can now be switched to with no password\n"
                        ,ppppppuVar8,iVar9 + 1);
          goto LAB_18013cebd;
        }
        iVar9 = iVar9 + 1;
        if (iVar10 <= iVar9) break;
        Sleep(500);
      }
      if (lVar6 == 0) {
        ppppppuVar8 = local_78;
        if (0xf < local_60) {
          ppppppuVar8 = (undefined8 ******)local_78[0];
        }
        FUN_180014410("[AS] token vault: Steam wrote no token for \'%s\' - switching to it will need the password again (was \"Remember\" on?)\n"
                      ,ppppppuVar8);
      }
    }
LAB_18013cebd:
    local_a8 = 0;
    FUN_18020e450(local_78);
  }
  return;
}


)B18013ca40",
    "0ed6559f07b87ac83d35effff0d5b0cbd77e756ab737cc3f45ac59029ea60fb9",
    R"F18013ca40C(FUN_180014410
FUN_18001d080
FUN_180131270
FUN_1801318c0
FUN_180132470
FUN_180135100
FUN_1801355a0
FUN_180137a90
FUN_18013a1e0
FUN_18013bba0
FUN_18013c230
FUN_18016d4c0
FUN_18020e450
FUN_180212700)F18013ca40C",
    R"F18013ca40D(LAB_18013cb96
LAB_18013ccaa
LAB_18013cd6b
LAB_18013cebd
DAT_1803da4c0
DAT_1803e85b4
DAT_1803e85c0
DAT_1803e860c
DAT_1803e9e20
DAT_1803eb340
DAT_180409c24
DAT_180409c30
DAT_180409c58
DAT_180409c80
DAT_180409ca0)F18013ca40D",
    R"F18013ca40T("cancelled"
"[AS] logon decided by EResult %d (%s)\\n"
"[AS] retrying the logon after EResult 3 (attempt %d)\\n"
"Steam was still letting go of the last session - retrying..."
"[AS] LogOn returned %d (%s); logonState=%d tryingToLogin=%d\\n"
"[AS] token vault: stored a refresh token for \\'%s\\' (try %d) - this account can now be switched to with no password\\n"
"[AS] token vault: Steam wrote no token for \\'%s\\' - switching to it will need the password again (was \\\"Remember\\\" on?)\\n")F18013ca40T",
    R"F18013ca40F(41: while( true ) {
44: if (iVar10 != 0) break;
45: LAB_18013cb96:
48: if (iVar9 < 0) {
51: else {
56: if (iVar9 < 0) {
59: else {
64: if (-1 < iVar9) {
70: if (uVar5 < 2) {
73: if (uVar5 != 3) goto LAB_18013ccaa;
74: if (((DAT_180409ca0 != '\0') || (DAT_180409c58 != '\0')) || (iVar10 = iVar10 + 1, 2 < iVar10))
75: goto LAB_18013cd6b;
85: if (iVar4 == 0) {
86: if (DAT_1803e860c == 0x7fffffff) {
91: return;
94: if (0xf < local_88) {
100: do {
101: if ((DAT_180409ca0 != '\0') || (DAT_180409c58 != '\0')) break;
105: while (DAT_1803e85b4 != -1) {
108: if (cVar3 == '\0') break;
115: goto LAB_18013cb96;
118: LAB_18013ccaa:
119: if (uVar5 == 0xfffffffe) {
127: if (iVar10 == 0) {
128: if (DAT_1803e860c == 0x7fffffff) {
133: if (0xf < local_88) {
143: return;
148: return;
150: LAB_18013cd6b:
154: if ((param_1 != '\0') && (DAT_180409c24 == 4)) {
158: if (DAT_180409c24 == 4) {
161: if (iVar10 != 0) {
165: return;
167: if (DAT_1803e860c == 0x7fffffff) {
174: if (local_68 != 0) {
179: if (lVar6 != 0) {
183: while (DAT_180409ca0 == '\0') {
185: if (cVar3 != '\0') {
187: if (0xf < local_60) {
192: goto LAB_18013cebd;
195: if (iVar10 <= iVar9) break;
198: if (lVar6 == 0) {
200: if (0xf < local_60) {
207: LAB_18013cebd:
211: return;)F18013ca40F",
    R"F18013ca40U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18013cb96.
TODO: recover the declaration, type and value for global/data reference LAB_18013ccaa.
TODO: recover the declaration, type and value for global/data reference LAB_18013cd6b.
TODO: recover the declaration, type and value for global/data reference LAB_18013cebd.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85b4.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e860c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e20.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb340.
TODO: recover the declaration, type and value for global/data reference DAT_180409c24.
TODO: recover the declaration, type and value for global/data reference DAT_180409c30.
TODO: recover the declaration, type and value for global/data reference DAT_180409c58.
TODO: recover the declaration, type and value for global/data reference DAT_180409c80.
TODO: recover the declaration, type and value for global/data reference DAT_180409ca0.
TODO: resolve the indirect call in body 52: uVar5 = (**(code **)(*plVar2 + (longlong)iVar9 * 8))(plVar2,param_3);.
TODO: resolve the indirect call in body 60: cVar3 = (**(code **)(*plVar2 + (longlong)iVar9 * 8))(plVar2);.
TODO: resolve the indirect call in body 65: (**(code **)(*plVar2 + (longlong)iVar9 * 8))(plVar2);.
TODO: resolve the indirect call in body 89: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 90: (*pcVar1)();.
TODO: resolve the indirect call in body 107: cVar3 = (**(code **)(lVar6 + 0x18))(DAT_1803e85b4,&local_58);.
TODO: resolve the indirect call in body 110: (**(code **)(lVar6 + 0x20))(DAT_1803e85b4);.
TODO: resolve the indirect call in body 146: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 147: (*pcVar1)();.
TODO: resolve the indirect call in body 163: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 164: (*pcVar1)();.)F18013ca40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013ca40() noexcept {
    return kFunction_0x18013ca40;
}

// 0x18013cf00 FUN_18013cf00
// source: re/dump/decompile/0x18013cf00_FUN_18013cf00.c
// size: 166 bytes; thunk: false
// body sha256: af9515034ea7c6f9427436ecc70159943b1909493f2c549ba1667bd779f73a33
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013cf00{
    "0x18013cf00",
    "FUN_18013cf00",
    R"F18013cf00S(undefined FUN_18013cf00())F18013cf00S",
    R"B18013cf00(// 0x18013cf00  FUN_18013cf00
// size=166 thunk=false
// signature: undefined FUN_18013cf00()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18013cf00(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  LOCK();
  bVar4 = DAT_180409c59 == '\0';
  if (bVar4) {
    DAT_180409c59 = '\x01';
  }
  UNLOCK();
  if (!bVar4) {
    return 0;
  }
  if (DAT_18056de98 != 0) {
    if (DAT_18056de98 == 0) {
      std::_Throw_Cpp_error(1);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    iVar2 = _Thrd_id();
    if (DAT_18056de98 == iVar2) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    local_18 = _DAT_18056de90;
    uStack_14 = DAT_18056de90_4;
    iStack_10 = DAT_18056de98;
    uStack_c = _DAT_18056de9c;
    iVar2 = _Thrd_join(&local_18,0);
    if (iVar2 != 0) {
      std::_Throw_Cpp_error(2);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    _DAT_18056de90 = 0;
    _DAT_18056de98 = 0;
  }
  LOCK();
  DAT_180409c58 = 0;
  UNLOCK();
  LOCK();
  DAT_180409c28 = 0;
  UNLOCK();
  LOCK();
  DAT_180409c24 = 1;
  UNLOCK();
  return 1;
}


)B18013cf00",
    "af9515034ea7c6f9427436ecc70159943b1909493f2c549ba1667bd779f73a33",
    R"F18013cf00C()F18013cf00C",
    R"F18013cf00D(DAT_180409c24
DAT_180409c28
DAT_180409c58
DAT_180409c59
DAT_18056de98)F18013cf00D",
    R"F18013cf00T()F18013cf00T",
    R"F18013cf00F(23: if (bVar4) {
27: if (!bVar4) {
28: return 0;
30: if (DAT_18056de98 != 0) {
31: if (DAT_18056de98 == 0) {
35: return uVar3;
38: if (DAT_18056de98 == iVar2) {
42: return uVar3;
49: if (iVar2 != 0) {
53: return uVar3;
67: return 1;)F18013cf00F",
    R"F18013cf00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180409c24.
TODO: recover the declaration, type and value for global/data reference DAT_180409c28.
TODO: recover the declaration, type and value for global/data reference DAT_180409c58.
TODO: recover the declaration, type and value for global/data reference DAT_180409c59.
TODO: recover the declaration, type and value for global/data reference DAT_18056de98.
TODO: resolve the indirect call in body 33: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 34: uVar3 = (*pcVar1)();.
TODO: resolve the indirect call in body 40: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 41: uVar3 = (*pcVar1)();.
TODO: resolve the indirect call in body 51: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 52: uVar3 = (*pcVar1)();.)F18013cf00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013cf00() noexcept {
    return kFunction_0x18013cf00;
}

// 0x18013cfb0 FUN_18013cfb0
// source: re/dump/decompile/0x18013cfb0_FUN_18013cfb0.c
// size: 1046 bytes; thunk: false
// body sha256: 7e765f1b4abbe1f114eb93ad08a1d84f24128b4c4521e9b65b131a5ecfe08af6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013cfb0{
    "0x18013cfb0",
    "FUN_18013cfb0",
    R"F18013cfb0S(undefined FUN_18013cfb0())F18013cfb0S",
    R"B18013cfb0(// 0x18013cfb0  FUN_18013cfb0
// size=1046 thunk=false
// signature: undefined FUN_18013cfb0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018013d2c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18013cfb0(char *param_1,longlong param_2,undefined1 param_3,undefined1 param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  uintptr_t uVar6;
  char ****ppppcVar7;
  char *pcVar8;
  undefined1 auStackY_128 [32];
  undefined8 uStack_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  char **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined8 *local_78;
  longlong local_70;
  undefined8 *local_68;
  char *local_60;
  char ***local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStackY_128;
  local_70 = param_2;
  local_60 = param_1;
  if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_2 + 0x10) == 0)) {
LAB_18013d2ef:
    local_58 = (char ***)0x0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_18001d080(&local_58,"username and password are required",0x22);
    local_78 = (undefined8 *)&DAT_1803e85c0;
    iVar5 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar5 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppcVar7 = &local_58;
    if (0xf < local_40) {
      ppppcVar7 = (char ****)local_58;
    }
    FUN_180212700(&DAT_1803e9e20,ppppcVar7,local_48);
    _Mtx_unlock(&DAT_1803e85c0);
LAB_18013d383:
    ppppcVar7 = &local_58;
  }
  else {
    FUN_180138610(&local_58);
    if ((local_48 == 0) || (*(longlong *)(param_1 + 0x10) == 0)) {
LAB_18013d050:
      bVar2 = false;
    }
    else {
      pcVar8 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pcVar8 = *(char **)param_1;
      }
      ppppcVar7 = &local_58;
      if (0xf < local_40) {
        ppppcVar7 = (char ****)local_58;
      }
      iVar5 = _stricmp((char *)ppppcVar7,pcVar8);
      if (iVar5 != 0) goto LAB_18013d050;
      bVar2 = true;
    }
    FUN_18020e450(&local_58);
    if (bVar2) {
      local_58 = (char ***)0x0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0;
      FUN_18001d080(&local_58,
                    "Steam is already signed in as this account - a second session would sign the first one out (that is the \"please start Steam\" error)"
                    ,0x83);
      local_d0 = (undefined8 *)&DAT_1803e85c0;
      iVar5 = _Mtx_lock(&DAT_1803e85c0);
      if (iVar5 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      ppppcVar7 = &local_58;
      if (0xf < local_40) {
        ppppcVar7 = (char ****)local_58;
      }
      FUN_180212700(&DAT_1803e9e20,ppppcVar7,local_48);
      _Mtx_unlock(&DAT_1803e85c0);
      goto LAB_18013d383;
    }
    cVar4 = FUN_18013cf00();
    if (cVar4 == '\0') goto LAB_18013d38d;
    local_d0 = (undefined8 *)&DAT_1803e85c0;
    iVar5 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar5 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    if (param_1 != (char *)&DAT_1803eb340) {
      pcVar8 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pcVar8 = *(char **)param_1;
      }
      FUN_180212700(&DAT_1803eb340,pcVar8,*(undefined8 *)(param_1 + 0x10));
    }
    FUN_180212700(&DAT_1803e9e20,"connecting to the Steam client...",0x21);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18016d4c0(&local_c8,param_1);
    FUN_18016d4c0(&local_a8);
    local_d8 = (undefined8 *)0x0;
    local_88 = param_3;
    local_87 = param_4;
    local_d8 = (undefined8 *)FUN_1802d8350(0x48);
    *local_d8 = 0;
    local_d8[1] = 0;
    *local_d8 = CONCAT71(local_c8._1_7_,local_c8._0_1_);
    local_d8[1] = local_c0;
    local_d8[2] = local_b8;
    local_d8[3] = local_b0;
    local_b8 = 0;
    local_b0 = 0xf;
    local_c8._0_1_ = 0;
    local_d8[4] = CONCAT71(uStack_a7,local_a8);
    local_d8[5] = local_a0;
    local_d8[6] = local_98;
    local_d8[7] = local_90;
    local_98 = 0;
    local_90 = 0xf;
    local_a8 = 0;
    *(undefined1 *)(local_d8 + 8) = param_3;
    *(undefined1 *)((longlong)local_d8 + 0x41) = param_4;
    local_d0 = local_d8;
    local_78 = local_d8;
    local_68 = local_d8;
    uVar6 = _beginthreadex((void *)0x0,0,FUN_180220fe0,local_d8,0,(uint *)&uStack_e0);
    uVar3 = uStack_e0._4_4_;
    if (uVar6 == 0) {
      uStack_e0 = (ulonglong)uStack_e0._4_4_ << 0x20;
      std::_Throw_Cpp_error(6);
      goto LAB_18013d2ef;
    }
    local_d8 = (undefined8 *)0x0;
    if (DAT_18056de98 != 0) {
                    /* WARNING: Subroutine does not return */
      terminate();
    }
    DAT_18056de98 = (uint)uStack_e0;
    uStack_e0 = 0;
    _DAT_18056de9c = uVar3;
    _DAT_18056de90 = uVar6;
    FUN_18020e450(&local_a8);
    ppppcVar7 = (char ****)&local_c8;
  }
  FUN_18020e450(ppppcVar7);
LAB_18013d38d:
  FUN_18020e450(param_1);
  FUN_18020e450(param_2);
  return;
}


)B18013cfb0",
    "7e765f1b4abbe1f114eb93ad08a1d84f24128b4c4521e9b65b131a5ecfe08af6",
    R"F18013cfb0C(FUN_18001d080
FUN_180138610
FUN_18013cf00
FUN_18016d4c0
FUN_18020e450
FUN_180212700
FUN_180220fe0
FUN_1802d8350)F18013cfb0C",
    R"F18013cfb0D(LAB_18013d050
LAB_18013d2ef
LAB_18013d383
LAB_18013d38d
DAT_1803da4c0
DAT_1803e85c0
DAT_1803e860c
DAT_1803e9e20
DAT_1803eb340
DAT_18056de98)F18013cfb0D",
    R"F18013cfb0T("connecting to the Steam client..."
"username and password are required"
"Steam is already signed in as this account - a second session would sign the first one out (that is the \\\"please start Steam\\\" error)")F18013cfb0T",
    R"F18013cfb0F(50: if ((*(longlong *)(param_1 + 0x10) == 0) || (*(longlong *)(param_2 + 0x10) == 0)) {
51: LAB_18013d2ef:
59: if (iVar5 != 0) {
63: return;
65: if (DAT_1803e860c == 0x7fffffff) {
70: if (0xf < local_40) {
75: LAB_18013d383:
78: else {
80: if ((local_48 == 0) || (*(longlong *)(param_1 + 0x10) == 0)) {
81: LAB_18013d050:
84: else {
86: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
90: if (0xf < local_40) {
94: if (iVar5 != 0) goto LAB_18013d050;
98: if (bVar2) {
108: if (iVar5 != 0) {
112: return;
114: if (DAT_1803e860c == 0x7fffffff) {
119: if (0xf < local_40) {
124: goto LAB_18013d383;
127: if (cVar4 == '\0') goto LAB_18013d38d;
130: if (iVar5 != 0) {
134: return;
136: if (DAT_1803e860c == 0x7fffffff) {
140: if (param_1 != (char *)&DAT_1803eb340) {
142: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
178: if (uVar6 == 0) {
181: goto LAB_18013d2ef;
184: if (DAT_18056de98 != 0) {
196: LAB_18013d38d:
199: return;)F18013cfb0F",
    R"F18013cfb0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18013d050.
TODO: recover the declaration, type and value for global/data reference LAB_18013d2ef.
TODO: recover the declaration, type and value for global/data reference LAB_18013d383.
TODO: recover the declaration, type and value for global/data reference LAB_18013d38d.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e860c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e20.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb340.
TODO: recover the declaration, type and value for global/data reference DAT_18056de98.
TODO: resolve the indirect call in body 61: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 62: (*pcVar1)();.
TODO: resolve the indirect call in body 110: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 111: (*pcVar1)();.
TODO: resolve the indirect call in body 132: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 133: (*pcVar1)();.)F18013cfb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013cfb0() noexcept {
    return kFunction_0x18013cfb0;
}

// 0x18013d3d0 FUN_18013d3d0
// source: re/dump/decompile/0x18013d3d0_FUN_18013d3d0.c
// size: 893 bytes; thunk: false
// body sha256: aa84b4967a3f4c0e51c85069544959bcded8b84fb2526febce807342993b5333
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013d3d0{
    "0x18013d3d0",
    "FUN_18013d3d0",
    R"F18013d3d0S(undefined FUN_18013d3d0())F18013d3d0S",
    R"B18013d3d0(// 0x18013d3d0  FUN_18013d3d0
// size=893 thunk=false
// signature: undefined FUN_18013d3d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18013d3d0(undefined8 *param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  byte bVar3;
  longlong *plVar4;
  int iVar5;
  undefined *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 ****ppppuVar10;
  longlong *plVar11;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 *local_a0;
  longlong local_98;
  undefined4 local_88;
  undefined8 ***local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined *local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  puVar6 = (undefined *)0x0;
  local_88 = 0;
  iVar5 = FUN_18013aba0();
  plVar11 = DAT_180409c80;
  if (iVar5 == 0) {
    LOCK();
    DAT_180409c24 = 5;
    UNLOCK();
  }
  else if (iVar5 == 2) {
    iVar5 = FUN_1801318c0(DAT_180409c80);
    if (-1 < iVar5) {
      local_60 = (undefined *)0x0;
      (**(code **)(*plVar11 + (longlong)iVar5 * 8))(plVar11,&local_60);
      puVar6 = local_60;
    }
    LOCK();
    UNLOCK();
    LOCK();
    DAT_180409c24 = 4;
    UNLOCK();
    local_98 = param_1[2];
    DAT_180409c30 = puVar6;
    if (0x7fffffffffffffffU - local_98 < 0x25) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    local_a0 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      local_a0 = (undefined8 *)*param_1;
    }
    local_a8 = 0x25;
    FUN_18020e930(&local_80);
    local_88 = 1;
    FUN_1801356b0(&local_80);
    local_88 = 0;
    FUN_18020e450(&local_80);
    if (*(char *)((longlong)param_1 + 0x41) != '\0') {
      FUN_180137a90();
    }
  }
  else {
    iVar5 = FUN_1801318c0(DAT_180409c80);
    if (-1 < iVar5) {
      (**(code **)(*plVar11 + (longlong)iVar5 * 8))(plVar11);
    }
    plVar4 = DAT_180409c80;
    uVar1 = *(undefined1 *)(param_1 + 8);
    plVar11 = param_1 + 4;
    if (0xf < (ulonglong)param_1[7]) {
      plVar11 = (longlong *)*plVar11;
    }
    puVar9 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar9 = (undefined8 *)*param_1;
    }
    iVar5 = FUN_1801318c0(DAT_180409c80);
    if (iVar5 < 0) {
      local_80 = (undefined8 ****)0x0;
      uStack_78 = 0;
      local_70 = 0;
      local_68 = 0;
      FUN_18001d080(&local_80,"SetLoginInformation is missing from IClientUser",0x2f);
      local_60 = &DAT_1803e85c0;
      iVar5 = _Mtx_lock(&DAT_1803e85c0);
      if (iVar5 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return uVar7;
      }
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      ppppuVar10 = &local_80;
      if (0xf < local_68) {
        ppppuVar10 = (undefined8 ****)local_80;
      }
      FUN_180212700(&DAT_1803e9e20,ppppuVar10,local_70);
      _Mtx_unlock(&DAT_1803e85c0);
      FUN_18020e450(&local_80);
      LOCK();
      DAT_180409c24 = 5;
      UNLOCK();
      FUN_18013a1e0();
    }
    else {
      (**(code **)(*plVar4 + (longlong)iVar5 * 8))(plVar4,puVar9,plVar11,uVar1);
      puVar9 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar9 = (undefined8 *)*param_1;
      }
      FUN_180014410("[AS] SetLoginInformation(\'%s\', <password>, remember=%d) sent\n",puVar9,
                    *(char *)(param_1 + 8) != '\0');
      local_80 = (undefined8 ****)0x0;
      uStack_78 = 0;
      local_70 = 0;
      local_68 = 0;
      FUN_18001d080(&local_80,"logging in...",0xd);
      local_60 = &DAT_1803e85c0;
      iVar5 = _Mtx_lock(&DAT_1803e85c0);
      if (iVar5 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar2 = (code *)swi(3);
        uVar7 = (*pcVar2)();
        return uVar7;
      }
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      ppppuVar10 = &local_80;
      if (0xf < local_68) {
        ppppuVar10 = (undefined8 ****)local_80;
      }
      FUN_180212700(&DAT_1803e9e20,ppppuVar10,local_70);
      _Mtx_unlock(&DAT_1803e85c0);
      FUN_18020e450(&local_80);
      FUN_18013ca40(*(undefined1 *)((longlong)param_1 + 0x41),180000,0x110000100000000);
    }
  }
  lVar8 = param_1[6];
  if (lVar8 != 0) {
    puVar9 = param_1 + 4;
    if (0xf < (ulonglong)param_1[7]) {
      puVar9 = (undefined8 *)*puVar9;
    }
    for (; lVar8 != 0; lVar8 = lVar8 + -1) {
      *(undefined1 *)puVar9 = 0;
      puVar9 = (undefined8 *)((longlong)puVar9 + 1);
    }
  }
  puVar9 = param_1 + 4;
  param_1[6] = 0;
  if (0xf < (ulonglong)param_1[7]) {
    puVar9 = (undefined8 *)*puVar9;
  }
  *(undefined1 *)puVar9 = 0;
  bVar3 = DAT_180409c59;
  LOCK();
  DAT_180409c59 = 0;
  UNLOCK();
  return (ulonglong)bVar3;
}


)B18013d3d0",
    "aa84b4967a3f4c0e51c85069544959bcded8b84fb2526febce807342993b5333",
    R"F18013d3d0C(FUN_1800130a0
FUN_180014410
FUN_18001d080
FUN_1801318c0
FUN_1801356b0
FUN_180137a90
FUN_18013a1e0
FUN_18013aba0
FUN_18013ca40
FUN_18020e450
FUN_18020e930
FUN_180212700)F18013d3d0C",
    R"F18013d3d0D(DAT_1803da4c0
DAT_1803e85c0
DAT_1803e860c
DAT_1803e9e20
DAT_180409c24
DAT_180409c30
DAT_180409c59
DAT_180409c80)F18013d3d0D",
    R"F18013d3d0T("logging in..."
"SetLoginInformation is missing from IClientUser"
"[AS] SetLoginInformation(\\'%s\\', <password>, remember=%d) sent\\n")F18013d3d0T",
    R"F18013d3d0F(40: if (iVar5 == 0) {
45: else if (iVar5 == 2) {
47: if (-1 < iVar5) {
59: if (0x7fffffffffffffffU - local_98 < 0x25) {
64: if (0xf < (ulonglong)param_1[3]) {
73: if (*(char *)((longlong)param_1 + 0x41) != '\0') {
77: else {
79: if (-1 < iVar5) {
85: if (0xf < (ulonglong)param_1[7]) {
89: if (0xf < (ulonglong)param_1[3]) {
93: if (iVar5 < 0) {
101: if (iVar5 != 0) {
105: return uVar7;
107: if (DAT_1803e860c == 0x7fffffff) {
112: if (0xf < local_68) {
123: else {
126: if (0xf < (ulonglong)param_1[3]) {
138: if (iVar5 != 0) {
142: return uVar7;
144: if (DAT_1803e860c == 0x7fffffff) {
149: if (0xf < local_68) {
159: if (lVar8 != 0) {
161: if (0xf < (ulonglong)param_1[7]) {
164: for (; lVar8 != 0; lVar8 = lVar8 + -1) {
171: if (0xf < (ulonglong)param_1[7]) {
179: return (ulonglong)bVar3;)F18013d3d0F",
    R"F18013d3d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e860c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e20.
TODO: recover the declaration, type and value for global/data reference DAT_180409c24.
TODO: recover the declaration, type and value for global/data reference DAT_180409c30.
TODO: recover the declaration, type and value for global/data reference DAT_180409c59.
TODO: recover the declaration, type and value for global/data reference DAT_180409c80.
TODO: resolve the indirect call in body 49: (**(code **)(*plVar11 + (longlong)iVar5 * 8))(plVar11,&local_60);.
TODO: resolve the indirect call in body 80: (**(code **)(*plVar11 + (longlong)iVar5 * 8))(plVar11);.
TODO: resolve the indirect call in body 103: pcVar2 = (code *)swi(3);.
TODO: resolve the indirect call in body 104: uVar7 = (*pcVar2)();.
TODO: resolve the indirect call in body 124: (**(code **)(*plVar4 + (longlong)iVar5 * 8))(plVar4,puVar9,plVar11,uVar1);.
TODO: resolve the indirect call in body 140: pcVar2 = (code *)swi(3);.
TODO: resolve the indirect call in body 141: uVar7 = (*pcVar2)();.)F18013d3d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013d3d0() noexcept {
    return kFunction_0x18013d3d0;
}

// 0x18013d750 FUN_18013d750
// source: re/dump/decompile/0x18013d750_FUN_18013d750.c
// size: 213 bytes; thunk: false
// body sha256: 43338e6e8082195fd68128cf43604b39cf05d454f84bfcabf0016342134ad018
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013d750{
    "0x18013d750",
    "FUN_18013d750",
    R"F18013d750S(undefined FUN_18013d750())F18013d750S",
    R"B18013d750(// 0x18013d750  FUN_18013d750
// size=213 thunk=false
// signature: undefined FUN_18013d750()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18013d750(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_30;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  local_38 = 0;
  if ((int)param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(char *)param_1 = (char)param_2;
  }
  else {
    local_30 = param_1;
    puVar1 = (undefined8 *)FUN_180139640(local_28);
    for (plVar2 = (longlong *)*puVar1; plVar2 != (longlong *)puVar1[1]; plVar2 = plVar2 + 10) {
      if (*plVar2 == param_2) {
        FUN_18016d4c0(param_1,plVar2 + 1);
        local_38 = 1;
        FUN_18020a5a0(local_28);
        return param_1;
      }
    }
    FUN_18020a5a0(local_28);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  return param_1;
}


)B18013d750",
    "43338e6e8082195fd68128cf43604b39cf05d454f84bfcabf0016342134ad018",
    R"F18013d750C(FUN_180139640
FUN_18016d4c0
FUN_18020a5a0)F18013d750C",
    R"F18013d750D(DAT_1803da4c0)F18013d750D",
    R"F18013d750T()F18013d750T",
    R"F18013d750F(22: if ((int)param_2 == 0) {
29: else {
32: for (plVar2 = (longlong *)*puVar1; plVar2 != (longlong *)puVar1[1]; plVar2 = plVar2 + 10) {
33: if (*plVar2 == param_2) {
37: return param_1;
47: return param_1;)F18013d750F",
    R"F18013d750U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F18013d750U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013d750() noexcept {
    return kFunction_0x18013d750;
}

// 0x18013d830 FUN_18013d830
// source: re/dump/decompile/0x18013d830_FUN_18013d830.c
// size: 1888 bytes; thunk: false
// body sha256: 778a5ffa71abf9e3ef673c95b402fb090f2cabc535bd98a7f4a1f8b0154e5a4e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013d830{
    "0x18013d830",
    "FUN_18013d830",
    R"F18013d830S(undefined FUN_18013d830())F18013d830S",
    R"B18013d830(// 0x18013d830  FUN_18013d830
// size=1888 thunk=false
// signature: undefined FUN_18013d830()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018013df60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18013d830(char ******param_1,undefined1 param_2,longlong param_3)

{
  code *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  uintptr_t uVar9;
  char ******ppppppcVar10;
  char ******ppppppcVar11;
  undefined8 ******ppppppuVar12;
  longlong *plVar13;
  undefined1 auStackY_1a8 [32];
  undefined8 *****local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  ulonglong local_148;
  uintptr_t local_138;
  undefined8 uStack_130;
  undefined8 *local_128;
  char ****local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined7 uStack_ef;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined1 local_90 [32];
  char *****local_70;
  longlong local_68;
  undefined8 *local_60;
  char *****local_58 [2];
  longlong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStackY_1a8;
  local_70 = (char *****)param_1;
  local_68 = param_3;
  if (*(longlong *)(param_3 + 0x10) == 0) {
LAB_18013dc26:
    if (param_1[2] == (char *****)0x0) goto LAB_18013d93a;
    cVar3 = FUN_180138670(param_1);
    if (cVar3 != '\0') {
      local_160 = (undefined8 ******)0x0;
      uStack_158 = 0;
      local_150 = 0;
      local_148 = 0;
      FUN_18001d080(&local_160,
                    "Steam is already signed in as this account - a second session would sign the first one out (that is the \"please start Steam\" error)"
                    ,0x83);
      local_60 = (undefined8 *)&DAT_1803e85c0;
      iVar4 = _Mtx_lock(&DAT_1803e85c0);
      if (iVar4 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      ppppppuVar12 = &local_160;
      if (0xf < local_148) {
        ppppppuVar12 = (undefined8 ******)local_160;
      }
      FUN_180212700(&DAT_1803e9e20,ppppppuVar12,local_150);
      _Mtx_unlock(&DAT_1803e85c0);
      goto LAB_18013d92f;
    }
    cVar3 = FUN_18013cf00();
    if (cVar3 == '\0') goto LAB_18013d93a;
    local_a8 = &DAT_1803e85c0;
    iVar4 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    if (param_1 != (char ******)&DAT_1803eb340) {
      ppppppcVar10 = param_1;
      if ((char *****)0xf < param_1[3]) {
        ppppppcVar10 = (char ******)*param_1;
      }
      FUN_180212700(&DAT_1803eb340,ppppppcVar10,param_1[2]);
    }
    if (0x7fffffffffffffffU - (longlong)param_1[2] < 0xd) {
LAB_18013df8b:
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    FUN_18020e930(local_90);
    puVar8 = (undefined4 *)FUN_18021aef0(local_90,&DAT_18034f96c,3);
    local_c8 = *puVar8;
    uStack_c4 = puVar8[1];
    uStack_c0 = puVar8[2];
    uStack_bc = puVar8[3];
    local_b8 = *(undefined8 *)(puVar8 + 4);
    uStack_b0 = *(undefined8 *)(puVar8 + 6);
    *(undefined8 *)(puVar8 + 4) = 0;
    *(undefined8 *)(puVar8 + 6) = 0xf;
    *(undefined1 *)puVar8 = 0;
    FUN_18020e8a0(&DAT_1803e9e20,&local_c8);
    FUN_18020e450(&local_c8);
    FUN_18020e450(local_90);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18016d4c0(&local_118,param_1);
    local_f8 = param_2;
    FUN_18016d4c0(&local_f0);
    local_128 = (undefined8 *)0x0;
    local_128 = (undefined8 *)FUN_1802d8350(0x48);
    *local_128 = 0;
    local_128[1] = 0;
    *local_128 = CONCAT71(local_118._1_7_,local_118._0_1_);
    local_128[1] = local_110;
    local_128[2] = local_108;
    local_128[3] = local_100;
    local_108 = 0;
    local_100 = 0xf;
    local_118._0_1_ = 0;
    *(undefined1 *)(local_128 + 4) = local_f8;
    local_128[5] = CONCAT71(uStack_ef,local_f0);
    local_128[6] = local_e8;
    local_128[7] = local_e0;
    local_128[8] = local_d8;
    local_e0 = 0;
    local_d8 = 0xf;
    local_f0 = 0;
    local_a0 = local_128;
    local_98 = local_128;
    local_60 = local_128;
    uVar9 = _beginthreadex((void *)0x0,0,FUN_180221040,local_128,0,(uint *)&uStack_130);
    uVar2 = uStack_130._4_4_;
    local_138 = uVar9;
    if (uVar9 == 0) {
      uStack_130 = (ulonglong)uStack_130._4_4_ << 0x20;
      std::_Throw_Cpp_error(6);
      goto LAB_18013df8b;
    }
    local_128 = (undefined8 *)0x0;
    if (DAT_18056de98 != 0) {
                    /* WARNING: Subroutine does not return */
      terminate();
    }
    DAT_18056de98 = (uint)uStack_130;
    local_138 = 0;
    uStack_130 = 0;
    _DAT_18056de9c = uVar2;
    _DAT_18056de90 = uVar9;
    FUN_18020e450(&local_f0);
    ppppppcVar10 = (char ******)&local_118;
  }
  else {
    puVar5 = (undefined8 *)FUN_180133200(param_3);
    if ((int)puVar5 == 0) {
      local_160 = (undefined8 ******)0x0;
      uStack_158 = 0;
      local_150 = 0;
      local_148 = 0;
      FUN_18001d080(&local_160,
                    "that does not look like a Steam login token - it should be three dot-separated parts starting with \"eyA\""
                    ,0x68);
      local_60 = (undefined8 *)&DAT_1803e85c0;
      iVar4 = _Mtx_lock(&DAT_1803e85c0);
      if (iVar4 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      ppppppuVar12 = &local_160;
      if (0xf < local_148) {
        ppppppuVar12 = (undefined8 ******)local_160;
      }
      FUN_180212700(&DAT_1803e9e20,ppppppuVar12,local_150);
      _Mtx_unlock(&DAT_1803e85c0);
LAB_18013d92f:
      ppppppcVar10 = (char ******)&local_160;
    }
    else {
      if ((DAT_180409c29 == '\0') || (plVar13 = DAT_180409c38, DAT_180409c38 == (longlong *)0x0)) {
        uVar6 = FUN_1801321e0();
        puVar7 = (undefined8 *)FUN_1801323e0(uVar6);
        plVar13 = (longlong *)0x0;
        if (puVar7 != (undefined8 *)0x0) {
          plVar13 = (longlong *)*puVar7;
        }
      }
      iVar4 = FUN_1801318c0(plVar13);
      if (-1 < iVar4) {
        local_60 = (undefined8 *)0x0;
        (**(code **)(*plVar13 + (longlong)iVar4 * 8))(plVar13,&local_60);
        if (((int)local_60 != 0) && (puVar5 == local_60)) {
          local_160 = (undefined8 ******)0x0;
          uStack_158 = 0;
          local_150 = 0;
          local_148 = 0;
          FUN_18001d080(&local_160,
                        "that token belongs to the account Steam itself is signed in as - using it would sign the client out and the game would ask you to start Steam"
                        ,0x8d);
          local_60 = (undefined8 *)&DAT_1803e85c0;
          iVar4 = _Mtx_lock(&DAT_1803e85c0);
          if (iVar4 != 0) {
            std::_Throw_Cpp_error(5);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (DAT_1803e860c == 0x7fffffff) {
            DAT_1803e860c = 0x7ffffffe;
            std::_Throw_Cpp_error(6);
          }
          ppppppuVar12 = &local_160;
          if (0xf < local_148) {
            ppppppuVar12 = (undefined8 ******)local_160;
          }
          FUN_180212700(&DAT_1803e9e20,ppppppuVar12,local_150);
          _Mtx_unlock(&DAT_1803e85c0);
          FUN_18020e450(&local_160);
          FUN_180014410("[AS] refused a token for %llu: that is the account the game is running as\n"
                        ,puVar5);
          goto LAB_18013d93a;
        }
      }
      FUN_18013d750(local_58,puVar5);
      if (local_48 == 0) {
LAB_18013db2c:
        if (param_1[2] == (char *****)0x0) goto joined_r0x00018013db3e;
LAB_18013dc11:
        FUN_1801368a0(param_1,puVar5);
        FUN_18020e450(local_58);
        goto LAB_18013dc26;
      }
      ppppppcVar10 = param_1;
      if ((char *****)0xf < param_1[3]) {
        ppppppcVar10 = (char ******)*param_1;
      }
      ppppppcVar11 = local_58;
      if (0xf < local_40) {
        ppppppcVar11 = (char ******)local_58[0];
      }
      iVar4 = _stricmp((char *)ppppppcVar11,(char *)ppppppcVar10);
      if (iVar4 == 0) goto LAB_18013db2c;
      if (param_1[2] == (char *****)0x0) {
        ppppppcVar10 = (char ******)&DAT_18033e5ea;
      }
      else {
        ppppppcVar10 = param_1;
        if ((char *****)0xf < param_1[3]) {
          ppppppcVar10 = (char ******)*param_1;
        }
      }
      ppppppcVar11 = local_58;
      if (0xf < local_40) {
        ppppppcVar11 = (char ******)local_58[0];
      }
      FUN_180014410("[AS] token names SteamID %llu, which Steam files as \'%s\' - using that instead of the typed \'%s\'\n"
                    ,puVar5,ppppppcVar11,ppppppcVar10);
joined_r0x00018013db3e:
      if (param_1 != local_58) {
        ppppppcVar10 = local_58;
        if (0xf < local_40) {
          ppppppcVar10 = (char ******)local_58[0];
        }
        FUN_180212700(param_1,ppppppcVar10,local_48);
      }
      if (param_1[2] != (char *****)0x0) goto LAB_18013dc11;
      local_160 = (undefined8 ******)0x0;
      uStack_158 = 0;
      local_150 = 0;
      local_148 = 0;
      FUN_18001d080(&local_160,
                    "this token is for an account Steam has never signed in here - type its login name in the username box"
                    ,0x65);
      local_60 = (undefined8 *)&DAT_1803e85c0;
      iVar4 = _Mtx_lock(&DAT_1803e85c0);
      if (iVar4 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      ppppppuVar12 = &local_160;
      if (0xf < local_148) {
        ppppppuVar12 = (undefined8 ******)local_160;
      }
      FUN_180212700(&DAT_1803e9e20,ppppppuVar12,local_150);
      _Mtx_unlock(&DAT_1803e85c0);
      FUN_18020e450(&local_160);
      ppppppcVar10 = local_58;
    }
  }
  FUN_18020e450(ppppppcVar10);
LAB_18013d93a:
  FUN_18020e450(param_1);
  FUN_18020e450(param_3);
  return;
}


)B18013d830",
    "778a5ffa71abf9e3ef673c95b402fb090f2cabc535bd98a7f4a1f8b0154e5a4e",
    R"F18013d830C(FUN_1800130a0
FUN_180014410
FUN_18001d080
FUN_1801318c0
FUN_1801321e0
FUN_1801323e0
FUN_180133200
FUN_1801368a0
FUN_180138670
FUN_18013cf00
FUN_18013d750
FUN_18016d4c0
FUN_18020e450
FUN_18020e8a0
FUN_18020e930
FUN_180212700
FUN_18021aef0
FUN_180221040
FUN_1802d8350)F18013d830C",
    R"F18013d830D(LAB_18013d92f
LAB_18013d93a
LAB_18013db2c
LAB_18013dc11
LAB_18013dc26
LAB_18013df8b
DAT_18033e5ea
DAT_18034f96c
DAT_1803da4c0
DAT_1803e85c0
DAT_1803e860c
DAT_1803e9e20
DAT_1803eb340
DAT_180409c29
DAT_180409c38
DAT_18056de98)F18013d830D",
    R"F18013d830T("[AS] refused a token for %llu: that is the account the game is running as\\n"
"[AS] token names SteamID %llu, which Steam files as \\'%s\\' - using that instead of the typed \\'%s\\'\\n"
"this token is for an account Steam has never signed in here - type its login name in the username box"
"that does not look like a Steam login token - it should be three dot-separated parts starting with \\\"eyA\\\""
"Steam is already signed in as this account - a second session would sign the first one out (that is the \\\"please start Steam\\\" error)"
"that token belongs to the account Steam itself is signed in as - using it would sign the client out and the game would ask you to start Steam")F18013d830T",
    R"F18013d830F(66: if (*(longlong *)(param_3 + 0x10) == 0) {
67: LAB_18013dc26:
68: if (param_1[2] == (char *****)0x0) goto LAB_18013d93a;
70: if (cVar3 != '\0') {
80: if (iVar4 != 0) {
84: return;
86: if (DAT_1803e860c == 0x7fffffff) {
91: if (0xf < local_148) {
96: goto LAB_18013d92f;
99: if (cVar3 == '\0') goto LAB_18013d93a;
102: if (iVar4 != 0) {
106: return;
108: if (DAT_1803e860c == 0x7fffffff) {
112: if (param_1 != (char ******)&DAT_1803eb340) {
114: if ((char *****)0xf < param_1[3]) {
119: if (0x7fffffffffffffffU - (longlong)param_1[2] < 0xd) {
120: LAB_18013df8b:
167: if (uVar9 == 0) {
170: goto LAB_18013df8b;
173: if (DAT_18056de98 != 0) {
185: else {
187: if ((int)puVar5 == 0) {
197: if (iVar4 != 0) {
201: return;
203: if (DAT_1803e860c == 0x7fffffff) {
208: if (0xf < local_148) {
213: LAB_18013d92f:
216: else {
217: if ((DAT_180409c29 == '\0') || (plVar13 = DAT_180409c38, DAT_180409c38 == (longlong *)0x0)) {
221: if (puVar7 != (undefined8 *)0x0) {
226: if (-1 < iVar4) {
229: if (((int)local_60 != 0) && (puVar5 == local_60)) {
239: if (iVar4 != 0) {
243: return;
245: if (DAT_1803e860c == 0x7fffffff) {
250: if (0xf < local_148) {
258: goto LAB_18013d93a;
262: if (local_48 == 0) {
263: LAB_18013db2c:
264: if (param_1[2] == (char *****)0x0) goto joined_r0x00018013db3e;
265: LAB_18013dc11:
268: goto LAB_18013dc26;
271: if ((char *****)0xf < param_1[3]) {
275: if (0xf < local_40) {
279: if (iVar4 == 0) goto LAB_18013db2c;
280: if (param_1[2] == (char *****)0x0) {
283: else {
285: if ((char *****)0xf < param_1[3]) {
290: if (0xf < local_40) {
296: if (param_1 != local_58) {
298: if (0xf < local_40) {
303: if (param_1[2] != (char *****)0x0) goto LAB_18013dc11;
313: if (iVar4 != 0) {
317: return;
319: if (DAT_1803e860c == 0x7fffffff) {
324: if (0xf < local_148) {
334: LAB_18013d93a:
337: return;)F18013d830F",
    R"F18013d830U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18013d92f.
TODO: recover the declaration, type and value for global/data reference LAB_18013d93a.
TODO: recover the declaration, type and value for global/data reference LAB_18013db2c.
TODO: recover the declaration, type and value for global/data reference LAB_18013dc11.
TODO: recover the declaration, type and value for global/data reference LAB_18013dc26.
TODO: recover the declaration, type and value for global/data reference LAB_18013df8b.
TODO: recover the declaration, type and value for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type and value for global/data reference DAT_18034f96c.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e860c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e20.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb340.
TODO: recover the declaration, type and value for global/data reference DAT_180409c29.
TODO: recover the declaration, type and value for global/data reference DAT_180409c38.
TODO: recover the declaration, type and value for global/data reference DAT_18056de98.
TODO: resolve the indirect call in body 82: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 83: (*pcVar1)();.
TODO: resolve the indirect call in body 104: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 105: (*pcVar1)();.
TODO: resolve the indirect call in body 199: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 200: (*pcVar1)();.
TODO: resolve the indirect call in body 228: (**(code **)(*plVar13 + (longlong)iVar4 * 8))(plVar13,&local_60);.
TODO: resolve the indirect call in body 241: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 242: (*pcVar1)();.
TODO: resolve the indirect call in body 315: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 316: (*pcVar1)();.)F18013d830U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013d830() noexcept {
    return kFunction_0x18013d830;
}

// 0x18013dfa0 FUN_18013dfa0
// source: re/dump/decompile/0x18013dfa0_FUN_18013dfa0.c
// size: 2251 bytes; thunk: false
// body sha256: a2d11b8ac721aee940c1079169740732848c1845515ed6a866093c49de79bd7f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013dfa0{
    "0x18013dfa0",
    "FUN_18013dfa0",
    R"F18013dfa0S(undefined FUN_18013dfa0())F18013dfa0S",
    R"B18013dfa0(// 0x18013dfa0  FUN_18013dfa0
// size=2251 thunk=false
// signature: undefined FUN_18013dfa0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18013dfa0(char *param_1)

{
  code *pcVar1;
  char *pcVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined4 *puVar11;
  char *_Str1;
  char *_Str2;
  char *pcVar12;
  undefined8 ******ppppppuVar13;
  uint uVar14;
  undefined *puVar15;
  char *pcVar16;
  undefined *puVar17;
  bool bVar18;
  undefined1 auStack_148 [32];
  undefined *local_128;
  char *local_120;
  longlong local_118;
  uint local_108;
  undefined8 *****local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  ulonglong uStack_c8;
  undefined *local_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined *local_78;
  undefined8 *****local_70 [2];
  longlong local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  puVar10 = (undefined *)0x0;
  local_108 = 0;
  local_c0 = &DAT_1803e86b0;
  iVar5 = _Mtx_lock(&DAT_1803e86b0);
  if (iVar5 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar16 = DAT_1803eb7b8;
  pcVar12 = DAT_1803eb7c0;
  if (DAT_1803e86fc == 0x7fffffff) {
    DAT_1803e86fc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
    pcVar16 = DAT_1803eb7b8;
    pcVar12 = DAT_1803eb7c0;
  }
  for (; pcVar2 = DAT_1803eb7c0, pcVar16 != DAT_1803eb7c0; pcVar16 = pcVar16 + 0x48) {
    _Str2 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      _Str2 = *(char **)param_1;
    }
    _Str1 = pcVar16;
    if (0xf < *(ulonglong *)(pcVar16 + 0x18)) {
      _Str1 = *(char **)pcVar16;
    }
    DAT_1803eb7c0 = pcVar12;
    iVar5 = _stricmp(_Str1,_Str2);
    if (iVar5 == 0) {
      puVar15 = *(undefined **)(pcVar16 + 0x20);
      _Mtx_unlock(&DAT_1803e86b0);
      goto LAB_18013e06d;
    }
    pcVar12 = DAT_1803eb7c0;
    DAT_1803eb7c0 = pcVar2;
  }
  DAT_1803eb7c0 = pcVar12;
  _Mtx_unlock(&DAT_1803e86b0);
  puVar15 = puVar10;
LAB_18013e06d:
  lVar8 = FUN_180135100(&local_100,param_1);
  lVar8 = *(longlong *)(lVar8 + 0x10);
  FUN_18020e450(&local_100);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar9 = FUN_180135620(local_98,param_1,puVar15);
    uVar14 = 1;
  }
  else {
    uVar9 = FUN_18016d4c0(&local_100,param_1 + 0x28);
    uVar14 = 2;
  }
  local_108 = uVar14;
  FUN_18016d4c0(local_70,uVar9);
  if ((uVar14 & 2) != 0) {
    uVar14 = uVar14 & 0xfffffffd;
    local_108 = uVar14;
    FUN_18020e450(&local_100);
  }
  if ((uVar14 & 1) != 0) {
    uVar14 = uVar14 & 0xfffffffe;
    local_108 = uVar14;
    FUN_18020e450(local_98);
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    if (local_60 == 0) {
      pcVar16 = "NOT FOUND (neither our vault nor Steam\'s ConnectCache)";
    }
    else {
      pcVar16 = "from Steam\'s ConnectCache";
      if (lVar8 != 0) {
        pcVar16 = "from our vault";
      }
    }
  }
  else {
    pcVar16 = "typed in by hand";
  }
  pcVar12 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar12 = *(char **)param_1;
  }
  FUN_180014410("[AS] token switch for \'%s\': savedID=%llu token=%s\n",pcVar12,puVar15,pcVar16);
  puVar17 = (undefined *)0x110000100000000;
  if (puVar15 != (undefined *)0x0) {
    puVar17 = puVar15;
  }
  iVar5 = FUN_18013aba0(param_1);
  plVar3 = DAT_180409c80;
  if (iVar5 == 0) {
    LOCK();
    DAT_180409c24 = 5;
    UNLOCK();
    goto LAB_18013e834;
  }
  if (iVar5 == 2) {
    iVar5 = FUN_1801318c0(DAT_180409c80);
    if (-1 < iVar5) {
      local_78 = (undefined *)0x0;
      (**(code **)(*plVar3 + (longlong)iVar5 * 8))(plVar3,&local_78);
      puVar10 = local_78;
    }
    LOCK();
    UNLOCK();
    LOCK();
    DAT_180409c24 = 4;
    UNLOCK();
    local_118 = *(longlong *)(param_1 + 0x10);
    DAT_180409c30 = puVar10;
    if (0x7fffffffffffffffU - local_118 < 0x11) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    local_120 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      local_120 = *(char **)param_1;
    }
    local_128 = (undefined *)0x11;
    FUN_18020e930(local_b8);
    local_108 = uVar14 | 0x10;
    puVar11 = (undefined4 *)FUN_18021aef0(local_b8," (already signed in)",0x14);
    local_e0 = *puVar11;
    uStack_dc = puVar11[1];
    uStack_d8 = puVar11[2];
    uStack_d4 = puVar11[3];
    local_d0 = *(undefined8 *)(puVar11 + 4);
    uStack_c8 = *(ulonglong *)(puVar11 + 6);
    *(undefined1 *)puVar11 = 0;
    *(undefined8 *)(puVar11 + 4) = 0;
    *(undefined8 *)(puVar11 + 6) = 0xf;
    local_108 = uVar14 | 0x18;
    local_78 = &DAT_1803e85c0;
    iVar5 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar5 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    puVar11 = &local_e0;
    if (0xf < uStack_c8) {
      puVar11 = (undefined4 *)CONCAT44(uStack_dc,local_e0);
    }
    FUN_180212700(&DAT_1803e9e20,puVar11,local_d0);
    _Mtx_unlock(&DAT_1803e85c0);
    local_108 = uVar14 | 0x10;
    FUN_18020e450(&local_e0);
    local_108 = uVar14;
    FUN_18020e450(local_b8);
    if (param_1[0x20] != '\0') {
      FUN_180137a90();
    }
    goto LAB_18013e834;
  }
  if (local_60 == 0) {
    local_100 = (undefined8 ******)0x0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    FUN_18001d080(&local_100,
                  "no saved token for this account - sign in with the password once (Remember on)",
                  0x4e);
    local_78 = &DAT_1803e85c0;
    iVar5 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar5 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppppuVar13 = &local_100;
    if (0xf < local_e8) {
      ppppppuVar13 = (undefined8 ******)local_100;
    }
    FUN_180212700(&DAT_1803e9e20,ppppppuVar13,local_f0);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_100);
    iVar5 = DAT_180409c24;
    LOCK();
    DAT_180409c24 = 5;
    UNLOCK();
    FUN_18013a1e0(iVar5);
    goto LAB_18013e834;
  }
  iVar5 = FUN_1801318c0(DAT_180409c80);
  if (-1 < iVar5) {
    (**(code **)(*plVar3 + (longlong)iVar5 * 8))(plVar3);
  }
  plVar3 = DAT_180409c80;
  pcVar16 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar16 = *(char **)param_1;
  }
  ppppppuVar13 = local_70;
  if (0xf < local_58) {
    ppppppuVar13 = (undefined8 ******)local_70[0];
  }
  iVar5 = FUN_1801318c0(DAT_180409c80);
  bVar18 = -1 < iVar5;
  if (bVar18) {
    (**(code **)(*plVar3 + (longlong)iVar5 * 8))(plVar3,ppppppuVar13,pcVar16);
  }
  uVar6 = FUN_1801318c0(DAT_180409c80);
  pcVar16 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar16 = *(char **)param_1;
  }
  local_128 = puVar17;
  FUN_180014410("[AS] token login for \'%s\' (SetLoginToken slot=%d sent=%d, id=%llu)\n",pcVar16,
                uVar6,bVar18);
  if (!bVar18) {
    FUN_180014410("[AS] SetLoginToken missing from IClientUser - cannot do token login\n");
    local_100 = (undefined8 ******)0x0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    FUN_18001d080(&local_100,"this Steam build has no SetLoginToken - use the password",0x38);
    local_78 = &DAT_1803e85c0;
    iVar5 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar5 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppppuVar13 = &local_100;
    if (0xf < local_e8) {
      ppppppuVar13 = (undefined8 ******)local_100;
    }
    FUN_180212700(&DAT_1803e9e20,ppppppuVar13,local_f0);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_100);
    iVar5 = DAT_180409c24;
    LOCK();
    DAT_180409c24 = 5;
    UNLOCK();
    FUN_18013a1e0(iVar5);
    goto LAB_18013e834;
  }
  FUN_18013ca40(param_1[0x20],45000,puVar17);
  if (((*(longlong *)(param_1 + 0x38) != 0) && (DAT_180409c24 == 4)) &&
     (cVar4 = FUN_180134a00(param_1,DAT_180409c30,param_1 + 0x28), cVar4 != '\0')) {
    pcVar16 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      pcVar16 = *(char **)param_1;
    }
    FUN_180014410("[AS] the token typed in for \'%s\' worked and is now in the vault\n",pcVar16);
  }
  iVar5 = DAT_180409c74;
  if (DAT_180409c24 != 5) goto LAB_18013e834;
  if (DAT_180409c74 == 0x19) {
    local_100 = (undefined8 ******)0x0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    FUN_18001d080(&local_100,"Steam is rate limiting logins for this account - wait a few minutes",
                  0x43);
    local_78 = &DAT_1803e85c0;
    iVar5 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar5 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppppuVar13 = &local_100;
    if (0xf < local_e8) {
      ppppppuVar13 = (undefined8 ******)local_100;
    }
    FUN_180212700(&DAT_1803e9e20,ppppppuVar13,local_f0);
    _Mtx_unlock(&DAT_1803e85c0);
LAB_18013e7fe:
    FUN_18020e450(&local_100);
  }
  else if ((DAT_180409c74 == 5) || (DAT_180409c74 == 0x12)) {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      local_100 = (undefined8 ******)0x0;
      uStack_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      FUN_18001d080(&local_100,
                    "Steam rejected that token - check it belongs to this username, and that it has not expired"
                    ,0x5a);
      local_78 = &DAT_1803e85c0;
      iVar5 = _Mtx_lock(&DAT_1803e85c0);
      if (iVar5 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      ppppppuVar13 = &local_100;
      if (0xf < local_e8) {
        ppppppuVar13 = (undefined8 ******)local_100;
      }
      FUN_180212700(&DAT_1803e9e20,ppppppuVar13,local_f0);
      _Mtx_unlock(&DAT_1803e85c0);
      goto LAB_18013e7fe;
    }
    FUN_180134f10(param_1);
    local_100 = (undefined8 ******)0x0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    FUN_18001d080(&local_100,
                  "the saved token for this account expired - sign in with the password once",0x49);
    local_78 = &DAT_1803e85c0;
    iVar7 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar7 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppppuVar13 = &local_100;
    if (0xf < local_e8) {
      ppppppuVar13 = (undefined8 ******)local_100;
    }
    FUN_180212700(&DAT_1803e9e20,ppppppuVar13,local_f0);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_100);
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(char **)param_1;
    }
    FUN_180014410("[AS] token for \'%s\' rejected (EResult %d) - dropped from the vault\n",param_1,
                  iVar5);
  }
  plVar3 = DAT_180409c80;
  if ((DAT_180409c80 != (longlong *)0x0) && (iVar5 = FUN_1801318c0(DAT_180409c80), -1 < iVar5)) {
    (**(code **)(*plVar3 + (longlong)iVar5 * 8))(plVar3);
  }
LAB_18013e834:
  LOCK();
  DAT_180409c59 = 0;
  UNLOCK();
  FUN_18020e450(local_70);
  return;
}


)B18013dfa0",
    "a2d11b8ac721aee940c1079169740732848c1845515ed6a866093c49de79bd7f",
    R"F18013dfa0C(FUN_1800130a0
FUN_180014410
FUN_18001d080
FUN_1801318c0
FUN_180134a00
FUN_180134f10
FUN_180135100
FUN_180135620
FUN_180137a90
FUN_18013a1e0
FUN_18013aba0
FUN_18013ca40
FUN_18016d4c0
FUN_18020e450
FUN_18020e930
FUN_180212700
FUN_18021aef0)F18013dfa0C",
    R"F18013dfa0D(LAB_18013e06d
LAB_18013e7fe
LAB_18013e834
DAT_1803da4c0
DAT_1803e85c0
DAT_1803e860c
DAT_1803e86b0
DAT_1803e86fc
DAT_1803e9e20
DAT_1803eb7b8
DAT_1803eb7c0
DAT_180409c24
DAT_180409c30
DAT_180409c59
DAT_180409c74
DAT_180409c80)F18013dfa0D",
    R"F18013dfa0T("from our vault"
"typed in by hand"
" (already signed in)"
"from Steam\\'s ConnectCache"
"[AS] token switch for \\'%s\\': savedID=%llu token=%s\\n"
"NOT FOUND (neither our vault nor Steam\\'s ConnectCache)"
"this Steam build has no SetLoginToken - use the password"
"Steam is rate limiting logins for this account - wait a few minutes"
"[AS] the token typed in for \\'%s\\' worked and is now in the vault\\n"
"[AS] SetLoginToken missing from IClientUser - cannot do token login\\n"
"[AS] token for \\'%s\\' rejected (EResult %d) - dropped from the vault\\n"
"[AS] token login for \\'%s\\' (SetLoginToken slot=%d sent=%d, id=%llu)\\n"
"the saved token for this account expired - sign in with the password once"
"no saved token for this account - sign in with the password once (Remember on)"
"Steam rejected that token - check it belongs to this username, and that it has not expired")F18013dfa0T",
    R"F18013dfa0F(61: if (iVar5 != 0) {
65: return;
69: if (DAT_1803e86fc == 0x7fffffff) {
75: for (; pcVar2 = DAT_1803eb7c0, pcVar16 != DAT_1803eb7c0; pcVar16 = pcVar16 + 0x48) {
77: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
81: if (0xf < *(ulonglong *)(pcVar16 + 0x18)) {
86: if (iVar5 == 0) {
89: goto LAB_18013e06d;
97: LAB_18013e06d:
101: if (*(longlong *)(param_1 + 0x38) == 0) {
105: else {
111: if ((uVar14 & 2) != 0) {
116: if ((uVar14 & 1) != 0) {
121: if (*(longlong *)(param_1 + 0x38) == 0) {
122: if (local_60 == 0) {
125: else {
127: if (lVar8 != 0) {
132: else {
136: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
141: if (puVar15 != (undefined *)0x0) {
146: if (iVar5 == 0) {
150: goto LAB_18013e834;
152: if (iVar5 == 2) {
154: if (-1 < iVar5) {
166: if (0x7fffffffffffffffU - local_118 < 0x11) {
171: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
190: if (iVar5 != 0) {
194: return;
196: if (DAT_1803e860c == 0x7fffffff) {
201: if (0xf < uStack_c8) {
210: if (param_1[0x20] != '\0') {
213: goto LAB_18013e834;
215: if (local_60 == 0) {
225: if (iVar5 != 0) {
229: return;
231: if (DAT_1803e860c == 0x7fffffff) {
236: if (0xf < local_e8) {
247: goto LAB_18013e834;
250: if (-1 < iVar5) {
255: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
259: if (0xf < local_58) {
264: if (bVar18) {
269: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
275: if (!bVar18) {
284: if (iVar5 != 0) {
288: return;
290: if (DAT_1803e860c == 0x7fffffff) {
295: if (0xf < local_e8) {
306: goto LAB_18013e834;
309: if (((*(longlong *)(param_1 + 0x38) != 0) && (DAT_180409c24 == 4)) &&
312: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
318: if (DAT_180409c24 != 5) goto LAB_18013e834;
319: if (DAT_180409c74 == 0x19) {
328: if (iVar5 != 0) {
332: return;
334: if (DAT_1803e860c == 0x7fffffff) {
339: if (0xf < local_e8) {
344: LAB_18013e7fe:
347: else if ((DAT_180409c74 == 5) || (DAT_180409c74 == 0x12)) {
348: if (*(longlong *)(param_1 + 0x38) != 0) {
358: if (iVar5 != 0) {
362: return;
364: if (DAT_1803e860c == 0x7fffffff) {
369: if (0xf < local_e8) {
374: goto LAB_18013e7fe;
385: if (iVar7 != 0) {
389: return;
391: if (DAT_1803e860c == 0x7fffffff) {
396: if (0xf < local_e8) {
402: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
409: if ((DAT_180409c80 != (longlong *)0x0) && (iVar5 = FUN_1801318c0(DAT_180409c80), -1 < iVar5)) {
412: LAB_18013e834:
417: return;)F18013dfa0F",
    R"F18013dfa0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18013e06d.
TODO: recover the declaration, type and value for global/data reference LAB_18013e7fe.
TODO: recover the declaration, type and value for global/data reference LAB_18013e834.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e860c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e86b0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e86fc.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e20.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb7b8.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb7c0.
TODO: recover the declaration, type and value for global/data reference DAT_180409c24.
TODO: recover the declaration, type and value for global/data reference DAT_180409c30.
TODO: recover the declaration, type and value for global/data reference DAT_180409c59.
TODO: recover the declaration, type and value for global/data reference DAT_180409c74.
TODO: recover the declaration, type and value for global/data reference DAT_180409c80.
TODO: resolve the indirect call in body 63: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 64: (*pcVar1)();.
TODO: resolve the indirect call in body 156: (**(code **)(*plVar3 + (longlong)iVar5 * 8))(plVar3,&local_78);.
TODO: resolve the indirect call in body 192: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 193: (*pcVar1)();.
TODO: resolve the indirect call in body 227: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 228: (*pcVar1)();.
TODO: resolve the indirect call in body 251: (**(code **)(*plVar3 + (longlong)iVar5 * 8))(plVar3);.
TODO: resolve the indirect call in body 265: (**(code **)(*plVar3 + (longlong)iVar5 * 8))(plVar3,ppppppuVar13,pcVar16);.
TODO: resolve the indirect call in body 286: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 287: (*pcVar1)();.
TODO: resolve the indirect call in body 330: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 331: (*pcVar1)();.
TODO: resolve the indirect call in body 360: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 361: (*pcVar1)();.
TODO: resolve the indirect call in body 387: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 388: (*pcVar1)();.
TODO: resolve the indirect call in body 410: (**(code **)(*plVar3 + (longlong)iVar5 * 8))(plVar3);.)F18013dfa0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013dfa0() noexcept {
    return kFunction_0x18013dfa0;
}

// 0x18013e870 FUN_18013e870
// source: re/dump/decompile/0x18013e870_FUN_18013e870.c
// size: 1198 bytes; thunk: false
// body sha256: 096109618a9aa7feed5b80c20d43b7220a8a412391e0ff4fb2131192c972f970
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013e870{
    "0x18013e870",
    "FUN_18013e870",
    R"F18013e870S(undefined FUN_18013e870())F18013e870S",
    R"B18013e870(// 0x18013e870  FUN_18013e870
// size=1198 thunk=false
// signature: undefined FUN_18013e870()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018013ecfe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18013e870(undefined8 *param_1,undefined1 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  uintptr_t uVar4;
  undefined8 ****ppppuVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 auStackY_f8 [32];
  undefined8 ***local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined4 local_a8;
  undefined8 *local_a0;
  uintptr_t local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 **local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStackY_f8;
  local_a8 = 0;
  local_48 = param_1;
  if (1 < DAT_180409c24 - 2U) goto LAB_18013e95f;
  if (param_1[2] == 0) {
    local_c8 = (undefined8 ****)0x0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    FUN_18001d080(&local_c8,"enter the code first",0x14);
    local_a0 = (undefined8 *)&DAT_1803e85c0;
    iVar3 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppuVar5 = &local_c8;
    if (0xf < local_b0) {
      ppppuVar5 = (undefined8 ****)local_c8;
    }
    FUN_180212700(&DAT_1803e9e20,ppppuVar5,local_b8);
    _Mtx_unlock(&DAT_1803e85c0);
LAB_18013e955:
    ppppuVar5 = &local_c8;
  }
  else {
    if (DAT_180409c80 == 0) {
      local_c8 = (undefined8 ****)0x0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      FUN_18001d080(&local_c8,"session is gone - log in again",0x1e);
      local_a0 = (undefined8 *)&DAT_1803e85c0;
      iVar3 = _Mtx_lock(&DAT_1803e85c0);
      if (iVar3 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      ppppuVar5 = &local_c8;
      if (0xf < local_b0) {
        ppppuVar5 = (undefined8 ****)local_c8;
      }
      FUN_180212700(&DAT_1803e9e20,ppppuVar5,local_b8);
      _Mtx_unlock(&DAT_1803e85c0);
      FUN_18020e450(&local_c8);
      LOCK();
      DAT_180409c24 = 5;
      UNLOCK();
      goto LAB_18013e95f;
    }
    if (DAT_180409c59 != '\0') {
      local_a0 = (undefined8 *)&DAT_1803e8660;
      iVar3 = _Mtx_lock(&DAT_1803e8660);
      if (iVar3 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e86ac == 0x7fffffff) {
        DAT_1803e86ac = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      if (param_1 != (undefined8 *)&DAT_1803e9e60) {
        puVar6 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar6 = (undefined8 *)*param_1;
        }
        FUN_180212700(&DAT_1803e9e60,puVar6,param_1[2]);
      }
      _Mtx_unlock(&DAT_1803e8660);
      LOCK();
      DAT_180409c28 = 1;
      UNLOCK();
      local_c8 = (undefined8 ****)0x0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      FUN_18001d080(&local_c8,"submitting code...",0x12);
      local_a0 = (undefined8 *)&DAT_1803e85c0;
      iVar3 = _Mtx_lock(&DAT_1803e85c0);
      if (iVar3 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e860c == 0x7fffffff) {
        DAT_1803e860c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      ppppuVar5 = &local_c8;
      if (0xf < local_b0) {
        ppppuVar5 = (undefined8 ****)local_c8;
      }
      FUN_180212700(&DAT_1803e9e20,ppppuVar5,local_b8);
      _Mtx_unlock(&DAT_1803e85c0);
      goto LAB_18013e955;
    }
    bVar7 = DAT_180409c24 == 2;
    cVar2 = FUN_18013cf00();
    if (cVar2 == '\0') goto LAB_18013e95f;
    local_c8 = (undefined8 ****)0x0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    FUN_18001d080(&local_c8,"submitting code...",0x12);
    local_a0 = (undefined8 *)&DAT_1803e85c0;
    iVar3 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppuVar5 = &local_c8;
    if (0xf < local_b0) {
      ppppuVar5 = (undefined8 ****)local_c8;
    }
    FUN_180212700(&DAT_1803e9e20,ppppuVar5,local_b8);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_c8);
    FUN_18016d4c0(&local_80);
    local_88 = (undefined8 *)0x0;
    local_60 = bVar7;
    local_5f = param_2;
    local_a0 = (undefined8 *)FUN_1802d8350(0x28);
    *local_a0 = 0;
    local_a0[1] = 0;
    *local_a0 = CONCAT71(local_80._1_7_,local_80._0_1_);
    local_a0[1] = local_78;
    local_a0[2] = local_70;
    local_a0[3] = local_68;
    local_70 = 0;
    local_68 = 0xf;
    local_80._0_1_ = 0;
    *(bool *)(local_a0 + 4) = bVar7;
    *(undefined1 *)((longlong)local_a0 + 0x21) = param_2;
    local_a8 = 1;
    local_88 = local_a0;
    local_58 = local_a0;
    local_50 = local_a0;
    uVar4 = _beginthreadex((void *)0x0,0,FUN_1802210a0,local_a0,0,(uint *)&uStack_90);
    local_98 = uVar4;
    if (uVar4 == 0) {
      uStack_90 = (ulonglong)uStack_90._4_4_ << 0x20;
      std::_Throw_Cpp_error(6);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_88 = (undefined8 *)0x0;
    local_a8 = 0;
    if (DAT_18056de98 != 0) {
                    /* WARNING: Subroutine does not return */
      terminate();
    }
    DAT_18056de98 = (uint)uStack_90;
    _DAT_18056de9c = uStack_90._4_4_;
    local_98 = 0;
    uStack_90 = 0;
    ppppuVar5 = (undefined8 ****)&local_80;
    _DAT_18056de90 = uVar4;
  }
  FUN_18020e450(ppppuVar5);
LAB_18013e95f:
  FUN_18020e450(param_1);
  return;
}


)B18013e870",
    "096109618a9aa7feed5b80c20d43b7220a8a412391e0ff4fb2131192c972f970",
    R"F18013e870C(FUN_18001d080
FUN_18013cf00
FUN_18016d4c0
FUN_18020e450
FUN_180212700
FUN_1802210a0
FUN_1802d8350)F18013e870C",
    R"F18013e870D(LAB_18013e955
LAB_18013e95f
DAT_1803da4c0
DAT_1803e85c0
DAT_1803e860c
DAT_1803e8660
DAT_1803e86ac
DAT_1803e9e20
DAT_1803e9e60
DAT_180409c24
DAT_180409c28
DAT_180409c59
DAT_180409c80
DAT_18056de98)F18013e870D",
    R"F18013e870T("submitting code..."
"enter the code first"
"session is gone - log in again")F18013e870T",
    R"F18013e870F(45: if (1 < DAT_180409c24 - 2U) goto LAB_18013e95f;
46: if (param_1[2] == 0) {
54: if (iVar3 != 0) {
58: return;
60: if (DAT_1803e860c == 0x7fffffff) {
65: if (0xf < local_b0) {
70: LAB_18013e955:
73: else {
74: if (DAT_180409c80 == 0) {
82: if (iVar3 != 0) {
86: return;
88: if (DAT_1803e860c == 0x7fffffff) {
93: if (0xf < local_b0) {
102: goto LAB_18013e95f;
104: if (DAT_180409c59 != '\0') {
107: if (iVar3 != 0) {
111: return;
113: if (DAT_1803e86ac == 0x7fffffff) {
117: if (param_1 != (undefined8 *)&DAT_1803e9e60) {
119: if (0xf < (ulonglong)param_1[3]) {
135: if (iVar3 != 0) {
139: return;
141: if (DAT_1803e860c == 0x7fffffff) {
146: if (0xf < local_b0) {
151: goto LAB_18013e955;
155: if (cVar2 == '\0') goto LAB_18013e95f;
163: if (iVar3 != 0) {
167: return;
169: if (DAT_1803e860c == 0x7fffffff) {
174: if (0xf < local_b0) {
202: if (uVar4 == 0) {
207: return;
211: if (DAT_18056de98 != 0) {
223: LAB_18013e95f:
225: return;)F18013e870F",
    R"F18013e870U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18013e955.
TODO: recover the declaration, type and value for global/data reference LAB_18013e95f.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e860c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8660.
TODO: recover the declaration, type and value for global/data reference DAT_1803e86ac.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e20.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e60.
TODO: recover the declaration, type and value for global/data reference DAT_180409c24.
TODO: recover the declaration, type and value for global/data reference DAT_180409c28.
TODO: recover the declaration, type and value for global/data reference DAT_180409c59.
TODO: recover the declaration, type and value for global/data reference DAT_180409c80.
TODO: recover the declaration, type and value for global/data reference DAT_18056de98.
TODO: resolve the indirect call in body 56: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 57: (*pcVar1)();.
TODO: resolve the indirect call in body 84: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 85: (*pcVar1)();.
TODO: resolve the indirect call in body 109: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 110: (*pcVar1)();.
TODO: resolve the indirect call in body 137: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 138: (*pcVar1)();.
TODO: resolve the indirect call in body 165: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 166: (*pcVar1)();.
TODO: resolve the indirect call in body 205: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 206: (*pcVar1)();.)F18013e870U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013e870() noexcept {
    return kFunction_0x18013e870;
}

// 0x18013ed20 FUN_18013ed20
// source: re/dump/decompile/0x18013ed20_FUN_18013ed20.c
// size: 441 bytes; thunk: false
// body sha256: 071be99d63d1d46fe8d56bb90595e4aeae3488c078a5d1ab41f1ffd1a7f6914f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013ed20{
    "0x18013ed20",
    "FUN_18013ed20",
    R"F18013ed20S(undefined FUN_18013ed20())F18013ed20S",
    R"B18013ed20(// 0x18013ed20  FUN_18013ed20
// size=441 thunk=false
// signature: undefined FUN_18013ed20()
// status: ok


ulonglong FUN_18013ed20(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  byte bVar2;
  longlong *plVar3;
  int iVar4;
  size_t sVar5;
  ulonglong uVar6;
  undefined8 ****ppppuVar7;
  char cVar8;
  char *_Str;
  undefined8 *puVar9;
  undefined8 ***local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  undefined *local_18;
  
  plVar3 = DAT_180409c80;
  if (*(char *)(param_1 + 4) == '\0') {
    puVar9 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar9 = (undefined8 *)*param_1;
    }
    iVar4 = FUN_1801318c0(DAT_180409c80,param_2,"Set2ndFactorAuthCode");
    if (iVar4 < 0) {
      cVar8 = '\0';
      goto LAB_18013edbb;
    }
    (**(code **)(*plVar3 + (longlong)iVar4 * 8))(plVar3,puVar9,0);
  }
  else {
    puVar9 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar9 = (undefined8 *)*param_1;
    }
    iVar4 = FUN_1801318c0(DAT_180409c80,param_2,"SetTwoFactorCode");
    if (iVar4 < 0) {
      cVar8 = '\0';
      goto LAB_18013edbb;
    }
    (**(code **)(*plVar3 + (longlong)iVar4 * 8))(plVar3,puVar9);
  }
  cVar8 = '\x01';
LAB_18013edbb:
  FUN_180014410("[AS] code submitted out of band (twoFactor=%d, accepted=%d)\n",
                *(char *)(param_1 + 4) != '\0',cVar8);
  if (cVar8 == '\0') {
    _Str = "Set2ndFactorAuthCode is missing from IClientUser";
    if (*(char *)(param_1 + 4) != '\0') {
      _Str = "SetTwoFactorCode is missing from IClientUser";
    }
    local_38 = (undefined8 ****)0x0;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0;
    sVar5 = strlen(_Str);
    FUN_18001d080(&local_38,_Str,sVar5);
    local_18 = &DAT_1803e85c0;
    iVar4 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return uVar6;
    }
    if (DAT_1803e860c == 0x7fffffff) {
      DAT_1803e860c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppuVar7 = &local_38;
    if (0xf < local_20) {
      ppppuVar7 = (undefined8 ****)local_38;
    }
    FUN_180212700(&DAT_1803e9e20,ppppuVar7,local_28);
    _Mtx_unlock(&DAT_1803e85c0);
    FUN_18020e450(&local_38);
    LOCK();
    DAT_180409c24 = 5;
    UNLOCK();
  }
  else {
    FUN_18013ca40(*(undefined1 *)((longlong)param_1 + 0x21),180000,0x110000100000000);
  }
  bVar2 = DAT_180409c59;
  LOCK();
  DAT_180409c59 = 0;
  UNLOCK();
  return (ulonglong)bVar2;
}


)B18013ed20",
    "071be99d63d1d46fe8d56bb90595e4aeae3488c078a5d1ab41f1ffd1a7f6914f",
    R"F18013ed20C(FUN_180014410
FUN_18001d080
FUN_1801318c0
FUN_18013ca40
FUN_18020e450
FUN_180212700)F18013ed20C",
    R"F18013ed20D(LAB_18013edbb
DAT_1803e85c0
DAT_1803e860c
DAT_1803e9e20
DAT_180409c24
DAT_180409c59
DAT_180409c80)F18013ed20D",
    R"F18013ed20T("SetTwoFactorCode"
"Set2ndFactorAuthCode"
"SetTwoFactorCode is missing from IClientUser"
"Set2ndFactorAuthCode is missing from IClientUser"
"[AS] code submitted out of band (twoFactor=%d, accepted=%d)\\n")F18013ed20T",
    R"F18013ed20F(27: if (*(char *)(param_1 + 4) == '\0') {
29: if (0xf < (ulonglong)param_1[3]) {
33: if (iVar4 < 0) {
35: goto LAB_18013edbb;
39: else {
41: if (0xf < (ulonglong)param_1[3]) {
45: if (iVar4 < 0) {
47: goto LAB_18013edbb;
52: LAB_18013edbb:
55: if (cVar8 == '\0') {
57: if (*(char *)(param_1 + 4) != '\0') {
68: if (iVar4 != 0) {
72: return uVar6;
74: if (DAT_1803e860c == 0x7fffffff) {
79: if (0xf < local_20) {
89: else {
96: return (ulonglong)bVar2;)F18013ed20F",
    R"F18013ed20U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18013edbb.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e860c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e20.
TODO: recover the declaration, type and value for global/data reference DAT_180409c24.
TODO: recover the declaration, type and value for global/data reference DAT_180409c59.
TODO: recover the declaration, type and value for global/data reference DAT_180409c80.
TODO: resolve the indirect call in body 37: (**(code **)(*plVar3 + (longlong)iVar4 * 8))(plVar3,puVar9,0);.
TODO: resolve the indirect call in body 49: (**(code **)(*plVar3 + (longlong)iVar4 * 8))(plVar3,puVar9);.
TODO: resolve the indirect call in body 70: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 71: uVar6 = (*pcVar1)();.)F18013ed20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013ed20() noexcept {
    return kFunction_0x18013ed20;
}

// 0x18013eee0 FUN_18013eee0
// source: re/dump/decompile/0x18013eee0_FUN_18013eee0.c
// size: 470 bytes; thunk: false
// body sha256: 8619b21dc97e3e3a9f61c4c65bf356cef9919b6711b93fd61f644b9bfd2b3d06
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013eee0{
    "0x18013eee0",
    "FUN_18013eee0",
    R"F18013eee0S(undefined FUN_18013eee0())F18013eee0S",
    R"B18013eee0(// 0x18013eee0  FUN_18013eee0
// size=470 thunk=false
// signature: undefined FUN_18013eee0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18013eee0(void)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined *unaff_RBX;
  undefined8 *puVar8;
  undefined8 unaff_RBP;
  
  FUN_180138c70();
  FUN_180138480();
  iVar4 = _Mtx_lock(&DAT_1803e8610);
  puVar5 = DAT_1803e9e50;
  if (iVar4 != 0) {
LAB_18013f0aa:
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  if (DAT_1803e865c == 0x7fffffff) {
    DAT_1803e865c = 0x7ffffffe;
  }
  else {
    unaff_RBP = 0;
    for (puVar8 = DAT_1803e9e48; puVar8 != puVar5; puVar8 = puVar8 + 7) {
      plVar1 = (longlong *)puVar8[5];
      if (plVar1 != (longlong *)0x0) {
        iVar4 = FUN_1801318c0(plVar1);
        if (-1 < iVar4) {
          (**(code **)(*plVar1 + (longlong)iVar4 * 8))(plVar1);
        }
        plVar1 = (longlong *)puVar8[5];
        iVar4 = FUN_1801318c0(plVar1);
        if (-1 < iVar4) {
          (**(code **)(*plVar1 + (longlong)iVar4 * 8))(plVar1);
        }
        puVar8[6] = 0;
        if (puVar8[2] == 0) {
          puVar7 = (undefined8 *)&DAT_18033e9cc;
        }
        else {
          puVar7 = puVar8;
          if (0xf < (ulonglong)puVar8[3]) {
            puVar7 = (undefined8 *)*puVar8;
          }
        }
        FUN_180014410("[AS] signed \'%s\' out of local user %d (pipe %d) - the user itself is KEPT\n"
                      ,puVar7,*(undefined4 *)(puVar8 + 4),*(undefined4 *)((longlong)puVar8 + 0x24));
      }
    }
    _Mtx_unlock(&DAT_1803e8610);
    DAT_180409c80 = 0;
    DAT_1803e85b4 = 0xffffffff;
    LOCK();
    DAT_180409c30 = 0;
    UNLOCK();
    unaff_RBX = &DAT_1803e85c0;
    iVar4 = _Mtx_lock(&DAT_1803e85c0);
    if (iVar4 != 0) goto LAB_18013f0aa;
    if (DAT_1803e860c != 0x7fffffff) goto LAB_18013f043;
    DAT_1803e860c = 0x7ffffffe;
  }
  std::_Throw_Cpp_error(6);
LAB_18013f043:
  puVar5 = &DAT_1803eb340;
  if (0xf < DAT_1803eb358) {
    puVar5 = DAT_1803eb340;
  }
  _DAT_1803eb350 = unaff_RBP;
  *(undefined1 *)puVar5 = 0;
  FUN_180212700(&DAT_1803e9e20,"logged off",10);
  _Mtx_unlock(unaff_RBX);
  uVar3 = DAT_180409c24;
  LOCK();
  DAT_180409c24 = (int)unaff_RBP;
  UNLOCK();
  LOCK();
  DAT_180409c59 = (char)unaff_RBP;
  UNLOCK();
  return (ulonglong)uVar3;
}


)B18013eee0",
    "8619b21dc97e3e3a9f61c4c65bf356cef9919b6711b93fd61f644b9bfd2b3d06",
    R"F18013eee0C(FUN_180014410
FUN_1801318c0
FUN_180138480
FUN_180138c70
FUN_180212700)F18013eee0C",
    R"F18013eee0D(LAB_18013f043
LAB_18013f0aa
DAT_18033e9cc
DAT_1803e85b4
DAT_1803e85c0
DAT_1803e860c
DAT_1803e8610
DAT_1803e865c
DAT_1803e9e20
DAT_1803e9e48
DAT_1803e9e50
DAT_1803eb340
DAT_1803eb358
DAT_180409c24
DAT_180409c30
DAT_180409c59
DAT_180409c80)F18013eee0D",
    R"F18013eee0T("logged off"
"[AS] signed \\'%s\\' out of local user %d (pipe %d) - the user itself is KEPT\\n")F18013eee0T",
    R"F18013eee0F(27: if (iVar4 != 0) {
28: LAB_18013f0aa:
32: return uVar6;
34: if (DAT_1803e865c == 0x7fffffff) {
37: else {
39: for (puVar8 = DAT_1803e9e48; puVar8 != puVar5; puVar8 = puVar8 + 7) {
41: if (plVar1 != (longlong *)0x0) {
43: if (-1 < iVar4) {
48: if (-1 < iVar4) {
52: if (puVar8[2] == 0) {
55: else {
57: if (0xf < (ulonglong)puVar8[3]) {
73: if (iVar4 != 0) goto LAB_18013f0aa;
74: if (DAT_1803e860c != 0x7fffffff) goto LAB_18013f043;
78: LAB_18013f043:
80: if (0xf < DAT_1803eb358) {
94: return (ulonglong)uVar3;)F18013eee0F",
    R"F18013eee0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18013f043.
TODO: recover the declaration, type and value for global/data reference LAB_18013f0aa.
TODO: recover the declaration, type and value for global/data reference DAT_18033e9cc.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85b4.
TODO: recover the declaration, type and value for global/data reference DAT_1803e85c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e860c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8610.
TODO: recover the declaration, type and value for global/data reference DAT_1803e865c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e20.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e48.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9e50.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb340.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb358.
TODO: recover the declaration, type and value for global/data reference DAT_180409c24.
TODO: recover the declaration, type and value for global/data reference DAT_180409c30.
TODO: recover the declaration, type and value for global/data reference DAT_180409c59.
TODO: recover the declaration, type and value for global/data reference DAT_180409c80.
TODO: resolve the indirect call in body 30: pcVar2 = (code *)swi(3);.
TODO: resolve the indirect call in body 31: uVar6 = (*pcVar2)();.
TODO: resolve the indirect call in body 44: (**(code **)(*plVar1 + (longlong)iVar4 * 8))(plVar1);.
TODO: resolve the indirect call in body 49: (**(code **)(*plVar1 + (longlong)iVar4 * 8))(plVar1);.)F18013eee0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013eee0() noexcept {
    return kFunction_0x18013eee0;
}

// 0x18013f0c0 FUN_18013f0c0
// source: re/dump/decompile/0x18013f0c0_FUN_18013f0c0.c
// size: 105 bytes; thunk: false
// body sha256: bbcd63527f36fa748f821964398d43a3cada90c458693c98e8d4ee2d2cfda7d7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013f0c0{
    "0x18013f0c0",
    "FUN_18013f0c0",
    R"F18013f0c0S(undefined FUN_18013f0c0())F18013f0c0S",
    R"B18013f0c0(// 0x18013f0c0  FUN_18013f0c0
// size=105 thunk=false
// signature: undefined FUN_18013f0c0()
// status: ok


int FUN_18013f0c0(void)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_res8 [2];
  int local_res10 [6];
  
  local_res10[0] = 0xf;
  local_res8[0] = 1;
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar1 = FUN_180241610(uVar1,0xb3bc1c7136473c92);
  piVar2 = (int *)FUN_1802029c0(uVar1);
  piVar4 = local_res8;
  if (local_res8[0] <= *piVar2) {
    piVar4 = piVar2;
  }
  piVar3 = local_res10;
  if (*piVar2 <= local_res10[0]) {
    piVar3 = piVar4;
  }
  return *piVar3;
}


)B18013f0c0",
    "bbcd63527f36fa748f821964398d43a3cada90c458693c98e8d4ee2d2cfda7d7",
    R"F18013f0c0C(FUN_1802029c0
FUN_180241610)F18013f0c0C",
    R"F18013f0c0D(DAT_1803fadf0)F18013f0c0D",
    R"F18013f0c0T()F18013f0c0T",
    R"F18013f0c0F(23: if (local_res8[0] <= *piVar2) {
27: if (*piVar2 <= local_res10[0]) {
30: return *piVar3;)F18013f0c0F",
    R"F18013f0c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.)F18013f0c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013f0c0() noexcept {
    return kFunction_0x18013f0c0;
}

// 0x18013f130 FUN_18013f130
// source: re/dump/decompile/0x18013f130_FUN_18013f130.c
// size: 105 bytes; thunk: false
// body sha256: 72cbe8955db6e1d103979ac74258edb6b984f3b1e8447f0900df2a2ac65eff63
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013f130{
    "0x18013f130",
    "FUN_18013f130",
    R"F18013f130S(undefined FUN_18013f130())F18013f130S",
    R"B18013f130(// 0x18013f130  FUN_18013f130
// size=105 thunk=false
// signature: undefined FUN_18013f130()
// status: ok


int FUN_18013f130(void)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_res8 [2];
  int local_res10 [6];
  
  local_res10[0] = 100;
  local_res8[0] = 0;
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar1 = FUN_180241610(uVar1,0x8161971dee9d0cf8);
  piVar2 = (int *)FUN_1802029c0(uVar1);
  piVar4 = local_res8;
  if (local_res8[0] <= *piVar2) {
    piVar4 = piVar2;
  }
  piVar3 = local_res10;
  if (*piVar2 <= local_res10[0]) {
    piVar3 = piVar4;
  }
  return *piVar3;
}


)B18013f130",
    "72cbe8955db6e1d103979ac74258edb6b984f3b1e8447f0900df2a2ac65eff63",
    R"F18013f130C(FUN_1802029c0
FUN_180241610)F18013f130C",
    R"F18013f130D(DAT_1803fadf0)F18013f130D",
    R"F18013f130T()F18013f130T",
    R"F18013f130F(23: if (local_res8[0] <= *piVar2) {
27: if (*piVar2 <= local_res10[0]) {
30: return *piVar3;)F18013f130F",
    R"F18013f130U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.)F18013f130U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013f130() noexcept {
    return kFunction_0x18013f130;
}

// 0x18013f1a0 FUN_18013f1a0
// source: re/dump/decompile/0x18013f1a0_FUN_18013f1a0.c
// size: 62 bytes; thunk: false
// body sha256: 32dc9a5e5f33f1badb937e6c3eb0117af4d240e95bdd2f99474bc1a9c15d4c77
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013f1a0{
    "0x18013f1a0",
    "FUN_18013f1a0",
    R"F18013f1a0S(undefined FUN_18013f1a0())F18013f1a0S",
    R"B18013f1a0(// 0x18013f1a0  FUN_18013f1a0
// size=62 thunk=false
// signature: undefined FUN_18013f1a0()
// status: ok


undefined1 FUN_18013f1a0(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar1 = FUN_180241610(uVar1,0x76d1c005a2617483);
  puVar2 = (undefined1 *)FUN_1801fcfc0(uVar1);
  return *puVar2;
}


)B18013f1a0",
    "32dc9a5e5f33f1badb937e6c3eb0117af4d240e95bdd2f99474bc1a9c15d4c77",
    R"F18013f1a0C(FUN_1801fcfc0
FUN_180241610)F18013f1a0C",
    R"F18013f1a0D(DAT_1803fadf0)F18013f1a0D",
    R"F18013f1a0T()F18013f1a0T",
    R"F18013f1a0F(16: return *puVar2;)F18013f1a0F",
    R"F18013f1a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.)F18013f1a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013f1a0() noexcept {
    return kFunction_0x18013f1a0;
}

// 0x18013f1f0 FUN_18013f1f0
// source: re/dump/decompile/0x18013f1f0_FUN_18013f1f0.c
// size: 61 bytes; thunk: false
// body sha256: 165c57b368018837a1ec02fe197673d779f5743fc8626e48f5a9fc1814e1ad5f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013f1f0{
    "0x18013f1f0",
    "FUN_18013f1f0",
    R"F18013f1f0S(undefined FUN_18013f1f0())F18013f1f0S",
    R"B18013f1f0(// 0x18013f1f0  FUN_18013f1f0
// size=61 thunk=false
// signature: undefined FUN_18013f1f0()
// status: ok


undefined4 FUN_18013f1f0(void)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar1 = FUN_180241610(uVar1,0x2514009f2bcc1630);
  puVar2 = (undefined4 *)FUN_1802029c0(uVar1);
  return *puVar2;
}


)B18013f1f0",
    "165c57b368018837a1ec02fe197673d779f5743fc8626e48f5a9fc1814e1ad5f",
    R"F18013f1f0C(FUN_1802029c0
FUN_180241610)F18013f1f0C",
    R"F18013f1f0D(DAT_1803fadf0)F18013f1f0D",
    R"F18013f1f0T()F18013f1f0T",
    R"F18013f1f0F(16: return *puVar2;)F18013f1f0F",
    R"F18013f1f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.)F18013f1f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013f1f0() noexcept {
    return kFunction_0x18013f1f0;
}

// 0x18013f230 FUN_18013f230
// source: re/dump/decompile/0x18013f230_FUN_18013f230.c
// size: 427 bytes; thunk: false
// body sha256: 16af959e0aef2efc39f91a8447c5c232fe588903fc6da8aad62af80a6638ce51
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013f230{
    "0x18013f230",
    "FUN_18013f230",
    R"F18013f230S(undefined FUN_18013f230())F18013f230S",
    R"B18013f230(// 0x18013f230  FUN_18013f230
// size=427 thunk=false
// signature: undefined FUN_18013f230()
// status: ok


undefined8 FUN_18013f230(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [12];
  undefined1 local_5c [36];
  
  if ((((DAT_1803fa360 != (longlong *)0x0) && (DAT_1803fa668 != (longlong *)0x0)) &&
      (DAT_1803fa608 != 0)) && (param_1 != 0)) {
    iVar5 = FUN_18001c560();
    iVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
    iVar7 = (**(code **)(*DAT_1803fa360 + 0x30))();
    iVar15 = 0x80;
    if (*(int *)(DAT_1803fa608 + 0x1c) - 1U < 0x80) {
      iVar15 = *(int *)(DAT_1803fa608 + 0x1c);
    }
    if (iVar7 < iVar15) {
      iVar15 = iVar7;
    }
    iVar7 = 1;
    while (iVar7 <= iVar15) {
      if ((((iVar7 == iVar6) ||
           (plVar10 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar7),
           plVar10 == (longlong *)0x0)) ||
          ((cVar4 = FUN_18001c330(plVar10), cVar4 == '\0' ||
           ((plVar11 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10),
            plVar11 == (longlong *)0x0 ||
            (cVar4 = (**(code **)(*plVar11 + 0x40))(plVar11), cVar4 != '\0')))))) ||
         ((0 < iVar5 && (iVar8 = FUN_18001c560(plVar10), iVar8 == iVar5)))) {
        iVar7 = iVar7 + 1;
      }
      else {
        puVar12 = (undefined8 *)FUN_18001c430(plVar10,local_68);
        uVar1 = *puVar12;
        uVar2 = *(undefined4 *)(puVar12 + 1);
        pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
        uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();
        lVar13 = (*pcVar3)(DAT_1803fa360,uVar9);
        if (lVar13 != 0) {
          uVar14 = FUN_18001c430(lVar13,local_5c);
          local_78 = uVar1;
          local_70 = uVar2;
          cVar4 = FUN_180021f30(uVar14,plVar10,&local_78);
          if (cVar4 != '\0') {
            return 1;
          }
        }
        iVar7 = iVar7 + 1;
      }
    }
  }
  return 0;
}


)B18013f230",
    "16af959e0aef2efc39f91a8447c5c232fe588903fc6da8aad62af80a6638ce51",
    R"F18013f230C(FUN_18001c330
FUN_18001c430
FUN_18001c560
FUN_180021f30)F18013f230C",
    R"F18013f230D(DAT_1803fa360
DAT_1803fa608
DAT_1803fa668)F18013f230D",
    R"F18013f230T()F18013f230T",
    R"F18013f230F(30: if ((((DAT_1803fa360 != (longlong *)0x0) && (DAT_1803fa668 != (longlong *)0x0)) &&
36: if (*(int *)(DAT_1803fa608 + 0x1c) - 1U < 0x80) {
39: if (iVar7 < iVar15) {
43: while (iVar7 <= iVar15) {
44: if ((((iVar7 == iVar6) ||
54: else {
61: if (lVar13 != 0) {
66: if (cVar4 != '\0') {
67: return 1;
74: return 0;)F18013f230F",
    R"F18013f230U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa608.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 33: iVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 34: iVar7 = (**(code **)(*DAT_1803fa360 + 0x30))();.
TODO: resolve the indirect call in body 45: (plVar10 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,iVar7),.
TODO: resolve the indirect call in body 48: ((plVar11 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10),.
TODO: resolve the indirect call in body 50: (cVar4 = (**(code **)(*plVar11 + 0x40))(plVar11), cVar4 != '\0')))))) ||.
TODO: resolve the indirect call in body 58: pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);.
TODO: resolve the indirect call in body 59: uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 60: lVar13 = (*pcVar3)(DAT_1803fa360,uVar9);.)F18013f230U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013f230() noexcept {
    return kFunction_0x18013f230;
}

// 0x18013f400 Features_FakeLag_FakeLagFeature_vfunc07
// source: re/dump/decompile/0x18013f400_Features_FakeLag_FakeLagFeature_vfunc07.c
// size: 348 bytes; thunk: false
// body sha256: 93f0754b1debcd7d4292c770184bdbd20b1a5ea4889bc33fcb6f4feba13fb145
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013f400{
    "0x18013f400",
    "Features_FakeLag_FakeLagFeature_vfunc07",
    R"F18013f400S(undefined Features_FakeLag_FakeLagFeature_vfunc07())F18013f400S",
    R"B18013f400(// 0x18013f400  Features_FakeLag_FakeLagFeature_vfunc07
// size=348 thunk=false
// signature: undefined Features_FakeLag_FakeLagFeature_vfunc07()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_FakeLag_FakeLagFeature_vfunc07(void)

{
  char cVar1;
  longlong *plVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  char local_48;
  char local_47;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if (DAT_1803fa46f == '\0') {
    local_18 = 0x64c4d3b04486d14d;
    local_20 = 0x93fd561a96ab0c67;
    plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_40,&local_20);
    plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_30,&local_18);
    piVar3 = (int *)FUN_1802029c0(*plVar2 + 0x28);
    if (((*piVar3 != 0) && (FUN_180024720(&local_48), local_48 == '\0')) && (local_47 != '\0')) {
      local_18 = 0x93fd561a96ab0c67;
      local_20 = 0x46af284dbd58f0c;
      plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_30,&local_18);
      plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_40,&local_20);
      pcVar4 = (char *)FUN_1801fcfc0(*plVar2 + 0x28);
      local_20 = 0x46af284dbd58f0c;
      local_18 = 0x93fd561a96ab0c67;
      cVar1 = *pcVar4;
      plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_30,&local_18);
      plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_40,&local_20);
      uVar5 = FUN_1801fcfc0(*plVar2 + 0x28);
      *(bool *)uVar5 = cVar1 == '\0';
    }
  }
  return;
}


)B18013f400",
    "93f0754b1debcd7d4292c770184bdbd20b1a5ea4889bc33fcb6f4feba13fb145",
    R"F18013f400C(FUN_180024720
FUN_1801fcfc0
FUN_1802029c0
FUN_180241a30)F18013f400C",
    R"F18013f400D(DAT_1803da4c0
DAT_1803fa46f
DAT_1803fadf0)F18013f400D",
    R"F18013f400T()F18013f400T",
    R"F18013f400F(27: if (DAT_1803fa46f == '\0') {
33: if (((*piVar3 != 0) && (FUN_180024720(&local_48), local_48 == '\0')) && (local_47 != '\0')) {
48: return;)F18013f400F",
    R"F18013f400U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa46f.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.)F18013f400U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013f400() noexcept {
    return kFunction_0x18013f400;
}

// 0x18013f560 Features_FakeLag_FakeLagFeature_vfunc01
// source: re/dump/decompile/0x18013f560_Features_FakeLag_FakeLagFeature_vfunc01.c
// size: 1212 bytes; thunk: false
// body sha256: 83b554d405ffb24ff0ae64e7eedf408ab6bcbcca1629b72708175902271a818e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013f560{
    "0x18013f560",
    "Features_FakeLag_FakeLagFeature_vfunc01",
    R"F18013f560S(undefined Features_FakeLag_FakeLagFeature_vfunc01())F18013f560S",
    R"B18013f560(// 0x18013f560  Features_FakeLag_FakeLagFeature_vfunc01
// size=1212 thunk=false
// signature: undefined Features_FakeLag_FakeLagFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_FakeLag_FakeLagFeature_vfunc01
               (undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined4 uVar7;
  int iVar8;
  BOOL BVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  char *pcVar13;
  undefined8 uVar14;
  float *pfVar15;
  void *lp;
  uint *puVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_e8 [32];
  char local_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  longlong *local_a0;
  float local_98;
  undefined8 local_90;
  float local_88;
  ulonglong local_80;
  
  local_80 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  local_90 = 0x93fd561a96ab0c67;
  local_a0 = (longlong *)0x46af284dbd58f0c;
  plVar12 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_c0,&local_90);
  plVar12 = (longlong *)FUN_180241a30(*plVar12 + 0x28,local_b0,&local_a0);
  pcVar13 = (char *)FUN_1801fcfc0(*plVar12 + 0x28);
  if (*pcVar13 == '\0') {
    DAT_18040a634 = 0;
    DAT_18040a638 = 0;
    DAT_18040a63c = 0;
    return;
  }
  pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
  plVar12 = (longlong *)(*pcVar4)(DAT_1803fa360,uVar7);
  if (DAT_1803fa668 == (longlong *)0x0) {
    DAT_18040a634 = 0;
    DAT_18040a638 = 0;
    DAT_18040a63c = 0;
    return;
  }
  cVar5 = (**(code **)(*DAT_1803fa668 + 0xd0))();
  if (cVar5 == '\0') {
    DAT_18040a634 = 0;
    DAT_18040a638 = 0;
    DAT_18040a63c = 0;
    return;
  }
  if (plVar12 == (longlong *)0x0) {
    DAT_18040a634 = 0;
    DAT_18040a638 = 0;
    DAT_18040a63c = 0;
    return;
  }
  cVar5 = FUN_18001c330(plVar12);
  if (cVar5 == '\0') {
    DAT_18040a634 = 0;
    DAT_18040a638 = 0;
    DAT_18040a63c = 0;
    return;
  }
  if (param_3 != 0) {
    if ((*(uint *)(param_3 + 0x20) & 1) != 0) {
      return;
    }
    if ((*(uint *)(param_3 + 0x20) >> 0xb & 1) != 0) {
      return;
    }
  }
  if ((param_4 != 0) && ((*(byte *)(param_4 + 0x20) & 1) != 0)) {
    return;
  }
  local_a0 = plVar12;
  if (DAT_1803db45d == '\0') goto LAB_18013f782;
  local_c8 = 0;
  uVar14 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
  uVar14 = FUN_180241610(uVar14,0xef1c37d3998fa2e7);
  pcVar13 = (char *)FUN_1801fcfc0(uVar14);
  local_c8 = *pcVar13;
  if (local_c8 != '\0') {
    return;
  }
  uVar14 = FUN_180241610(&DAT_1803fadf0,0x2723fc3764d74742);
  uVar14 = FUN_180241610(uVar14,0x402819404e703058);
  pcVar13 = (char *)FUN_1801fcfc0(uVar14);
  if (*pcVar13 == '\0') {
LAB_18013f759:
    bVar6 = false;
  }
  else {
    uVar14 = FUN_180241610(&DAT_1803fadf0,0x2723fc3764d74742);
    uVar14 = FUN_180241610(uVar14,0xad8998a7cc2812c);
    pcVar13 = (char *)FUN_1801fcfc0(uVar14);
    if (*pcVar13 == '\0') goto LAB_18013f759;
    bVar6 = true;
  }
  if (bVar6) {
    return;
  }
  local_c8 = 0;
  if (DAT_1803db438 != '\0') {
    return;
  }
LAB_18013f782:
  iVar8 = FUN_18013f1f0();
  local_90 = 0;
  local_88 = 0.0;
  local_a0 = (longlong *)0x0;
  local_98 = 0.0;
  pfVar15 = (float *)FUN_18001d530(plVar12);
  fVar18 = *pfVar15;
  fVar1 = pfVar15[1];
  local_90 = *(undefined8 *)pfVar15;
  local_88 = pfVar15[2];
  pfVar15 = (float *)(**(code **)(*plVar12 + 0x48))(plVar12);
  fVar20 = *pfVar15;
  fVar19 = pfVar15[1];
  local_a0 = *(longlong **)pfVar15;
  fVar2 = pfVar15[2];
  local_98 = fVar2;
  if (iVar8 == 1) {
    fVar18 = fVar1 * fVar1 + fVar18 * fVar18;
    if (fVar18 < 0.0) {
      fVar18 = sqrtf(fVar18);
    }
    else {
      fVar18 = SQRT(fVar18);
    }
    if (fVar18 < DAT_180381088) {
      DAT_18040a63c = 0;
      DAT_18040a638 = 0;
      DAT_18040a634 = 0;
      return;
    }
  }
  else if ((iVar8 == 2) && (puVar16 = (uint *)FUN_18001d710(plVar12,&local_a0), (*puVar16 & 1) != 0)
          ) {
    DAT_18040a634 = 0;
    DAT_18040a638 = 0;
    DAT_18040a63c = 0;
    _DAT_1804301e0 = 0;
    return;
  }
  lp = (void *)(**(code **)(*DAT_1803fa668 + 0x240))();
  if (lp == (void *)0x0) {
    return;
  }
  BVar9 = IsBadReadPtr(lp,8);
  if (BVar9 == 0) {
    iVar3 = *(int *)((longlong)lp + 0x20);
    if (DAT_18040a634 < iVar3) {
      DAT_18040a634 = iVar3;
    }
    if (iVar3 < 1) {
      DAT_18040a634 = 0;
      iVar10 = FUN_18013f0c0();
      iVar11 = FUN_18013f130();
      iVar11 = (int)((DAT_180380bb0 - (float)iVar11 / DAT_180381120) * (float)iVar10);
      DAT_18040a63c = 1;
      if (1 < iVar11) {
        DAT_18040a63c = iVar11;
      }
      if (DAT_18040a63c < iVar10) {
        uVar17 = DAT_1803e90a0 << 0xd ^ DAT_1803e90a0;
        uVar17 = uVar17 >> 0x11 ^ uVar17;
        DAT_1803e90a0 = uVar17 << 5 ^ uVar17;
        DAT_18040a63c = DAT_18040a63c + DAT_1803e90a0 % ((iVar10 - DAT_18040a63c) + 1U);
      }
      DAT_18040a638 = '\x01';
      _DAT_1803e9bb0 = fVar20;
      _DAT_1803e9bb4 = fVar19;
      _DAT_1803e9bb8 = fVar2;
    }
    cVar5 = FUN_18013f1a0();
    if (((cVar5 != '\0') && (DAT_18040a638 != '\0')) &&
       (fVar20 = fVar20 - _DAT_1803e9bb0, fVar19 = fVar19 - _DAT_1803e9bb4,
       DAT_180381290 <
       fVar19 * fVar19 + fVar20 * fVar20 + (fVar2 - _DAT_1803e9bb8) * (fVar2 - _DAT_1803e9bb8))) {
      return;
    }
    if ((iVar8 == 3) && (cVar5 = FUN_18013f230(plVar12), cVar5 != '\0')) {
      return;
    }
    if (iVar3 < DAT_18040a63c) {
      *DAT_1803db430 = 0;
      return;
    }
    return;
  }
  return;
}


)B18013f560",
    "83b554d405ffb24ff0ae64e7eedf408ab6bcbcca1629b72708175902271a818e",
    R"F18013f560C(FUN_18001c330
FUN_18001d530
FUN_18001d710
FUN_18013f0c0
FUN_18013f130
FUN_18013f1a0
FUN_18013f1f0
FUN_18013f230
FUN_1801fcfc0
FUN_180241610
FUN_180241a30)F18013f560C",
    R"F18013f560D(LAB_18013f759
LAB_18013f782
DAT_180380bb0
DAT_180381088
DAT_180381120
DAT_180381290
DAT_1803da4c0
DAT_1803db430
DAT_1803db438
DAT_1803db45d
DAT_1803e90a0
DAT_1803fa360
DAT_1803fa668
DAT_1803fadf0
DAT_18040a634
DAT_18040a638
DAT_18040a63c)F18013f560D",
    R"F18013f560T()F18013f560T",
    R"F18013f560F(51: if (*pcVar13 == '\0') {
55: return;
60: if (DAT_1803fa668 == (longlong *)0x0) {
64: return;
67: if (cVar5 == '\0') {
71: return;
73: if (plVar12 == (longlong *)0x0) {
77: return;
80: if (cVar5 == '\0') {
84: return;
86: if (param_3 != 0) {
87: if ((*(uint *)(param_3 + 0x20) & 1) != 0) {
88: return;
90: if ((*(uint *)(param_3 + 0x20) >> 0xb & 1) != 0) {
91: return;
94: if ((param_4 != 0) && ((*(byte *)(param_4 + 0x20) & 1) != 0)) {
95: return;
98: if (DAT_1803db45d == '\0') goto LAB_18013f782;
104: if (local_c8 != '\0') {
105: return;
110: if (*pcVar13 == '\0') {
111: LAB_18013f759:
114: else {
118: if (*pcVar13 == '\0') goto LAB_18013f759;
121: if (bVar6) {
122: return;
125: if (DAT_1803db438 != '\0') {
126: return;
128: LAB_18013f782:
145: if (iVar8 == 1) {
147: if (fVar18 < 0.0) {
150: else {
153: if (fVar18 < DAT_180381088) {
157: return;
160: else if ((iVar8 == 2) && (puVar16 = (uint *)FUN_18001d710(plVar12,&local_a0), (*puVar16 & 1) != 0)
166: return;
169: if (lp == (void *)0x0) {
170: return;
173: if (BVar9 == 0) {
175: if (DAT_18040a634 < iVar3) {
178: if (iVar3 < 1) {
184: if (1 < iVar11) {
187: if (DAT_18040a63c < iVar10) {
199: if (((cVar5 != '\0') && (DAT_18040a638 != '\0')) &&
203: return;
205: if ((iVar8 == 3) && (cVar5 = FUN_18013f230(plVar12), cVar5 != '\0')) {
206: return;
208: if (iVar3 < DAT_18040a63c) {
210: return;
212: return;
214: return;)F18013f560F",
    R"F18013f560U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18013f759.
TODO: recover the declaration, type and value for global/data reference LAB_18013f782.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_180381088.
TODO: recover the declaration, type and value for global/data reference DAT_180381120.
TODO: recover the declaration, type and value for global/data reference DAT_180381290.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803db430.
TODO: recover the declaration, type and value for global/data reference DAT_1803db438.
TODO: recover the declaration, type and value for global/data reference DAT_1803db45d.
TODO: recover the declaration, type and value for global/data reference DAT_1803e90a0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_18040a634.
TODO: recover the declaration, type and value for global/data reference DAT_18040a638.
TODO: recover the declaration, type and value for global/data reference DAT_18040a63c.
TODO: resolve the indirect call in body 57: pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);.
TODO: resolve the indirect call in body 58: uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 59: plVar12 = (longlong *)(*pcVar4)(DAT_1803fa360,uVar7);.
TODO: resolve the indirect call in body 66: cVar5 = (**(code **)(*DAT_1803fa668 + 0xd0))();.
TODO: resolve the indirect call in body 139: pfVar15 = (float *)(**(code **)(*plVar12 + 0x48))(plVar12);.
TODO: resolve the indirect call in body 168: lp = (void *)(**(code **)(*DAT_1803fa668 + 0x240))();.)F18013f560U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013f560() noexcept {
    return kFunction_0x18013f560;
}

// 0x18013fa40 Features_Airstuck_AirstuckFeature_vfunc02
// source: re/dump/decompile/0x18013fa40_Features_Airstuck_AirstuckFeature_vfunc02.c
// size: 1394 bytes; thunk: false
// body sha256: 43ff6bcb03e175646af0d6c1cd7373d41b7331479ee10fcddec4c74b1d3d6064
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013fa40{
    "0x18013fa40",
    "Features_Airstuck_AirstuckFeature_vfunc02",
    R"F18013fa40S(undefined Features_Airstuck_AirstuckFeature_vfunc02())F18013fa40S",
    R"B18013fa40(// 0x18013fa40  Features_Airstuck_AirstuckFeature_vfunc02
// size=1394 thunk=false
// signature: undefined Features_Airstuck_AirstuckFeature_vfunc02()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * Features_Airstuck_AirstuckFeature_vfunc02
                  (undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  float *pfVar7;
  int *piVar8;
  longlong lVar9;
  ULONGLONG UVar10;
  char *pcVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_88 [32];
  uint local_68 [2];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  local_40 = 0x93fd561a96ab0c67;
  local_38 = 0x42dfcfdb85d00c63;
  local_30 = param_3;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_60,&local_40);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_50,&local_38);
  pfVar7 = (float *)FUN_1801fcfc0(*plVar6 + 0x28);
  if (*(char *)pfVar7 == '\0') {
    DAT_1804099d4 = 0.0;
    DAT_1804099d0 = 0;
    DAT_1804099c8 = 0;
    DAT_1804099bc = 0.0;
    DAT_1804099ba = 0;
    DAT_1804099b9 = 0;
    DAT_1804099b8 = 0;
    DAT_1804099b0 = 0;
    DAT_1803e7cf4 = 0xfa;
    return pfVar7;
  }
  local_40 = 0x93fd561a96ab0c67;
  local_38 = 0x14aaa39e12056f36;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_50,&local_40);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_60,&local_38);
  piVar8 = (int *)FUN_1802029c0(*plVar6 + 0x28);
  iVar2 = *piVar8;
  uVar5 = iVar2 - 1;
  if (0xfd < uVar5) {
    DAT_1803e7cf4 = 0xfa;
    DAT_1804099b0 = 0;
    DAT_1804099b8 = 0;
    DAT_1804099b9 = 0;
    DAT_1804099ba = 0;
    DAT_1804099bc = 0.0;
    DAT_1804099c8 = 0;
    DAT_1804099d0 = 0;
    DAT_1804099d4 = 0.0;
    return (float *)(ulonglong)uVar5;
  }
  pfVar7 = (float *)FUN_180024540();
  if ((char)pfVar7 == '\0') {
    DAT_1803e7cf4 = 0xfa;
    DAT_1804099b0 = 0;
    DAT_1804099b8 = 0;
    DAT_1804099b9 = 0;
    DAT_1804099ba = 0;
    DAT_1804099bc = 0.0;
    DAT_1804099c8 = 0;
    DAT_1804099d0 = 0;
    DAT_1804099d4 = 0.0;
    return pfVar7;
  }
  if (DAT_1803fa545 != '\0') {
    DAT_1803e7cf4 = 0xfa;
    DAT_1804099b0 = 0;
    DAT_1804099b8 = 0;
    DAT_1804099b9 = 0;
    DAT_1804099ba = 0;
    DAT_1804099bc = 0.0;
    DAT_1804099c8 = 0;
    DAT_1804099d0 = 0;
    DAT_1804099d4 = 0.0;
    return pfVar7;
  }
  pfVar7 = (float *)FUN_1800245f0(iVar2);
  if ((char)pfVar7 == '\0') {
    DAT_1803e7cf4 = 0xfa;
    DAT_1804099b0 = 0;
    DAT_1804099b8 = 0;
    DAT_1804099b9 = 0;
    DAT_1804099ba = 0;
    DAT_1804099bc = 0.0;
    DAT_1804099c8 = 0;
    DAT_1804099d0 = 0;
    DAT_1804099d4 = 0.0;
    return pfVar7;
  }
  if (DAT_1803fa668 == (longlong *)0x0) {
    return pfVar7;
  }
  lVar9 = (**(code **)(*DAT_1803fa668 + 0x240))();
  if (lVar9 == 0) {
    return (float *)0x0;
  }
  DAT_1804099d0 = DAT_1804099d0 + 1;
  local_40 = 0x93fd561a96ab0c67;
  local_38 = 0xe6e21531f66dbcbd;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_50,&local_40);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_60,&local_38);
  piVar8 = (int *)FUN_1802029c0(*plVar6 + 0x28);
  if (*piVar8 != 1) {
    DAT_1804099b0 = 0;
    local_30 = -0x6c02a9e56954f399;
    local_40 = 0x57929d7a67798faf;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_50,&local_30);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_60,&local_40);
    piVar8 = (int *)FUN_1802029c0(*plVar6 + 0x28);
    iVar2 = *piVar8;
    if (*piVar8 < 1) {
      iVar2 = 1;
    }
    if (DAT_1803fa608 == (float *)0x0) {
      fVar16 = 0.0;
    }
    else {
      fVar16 = *DAT_1803fa608;
      if (0.0 < fVar16) {
        if (DAT_1804099bc == 0.0) {
          DAT_1804099bc = fVar16;
        }
        pfVar7 = DAT_1803fa608;
        if (DAT_180380c50 <= fVar16 - DAT_1804099bc) goto LAB_18013ff27;
      }
    }
    pfVar7 = (float *)((longlong)DAT_1804099d0 / (longlong)(iVar2 + 1) & 0xffffffff);
    if (DAT_1804099d0 % (iVar2 + 1) != 0) {
      *(int *)(lVar9 + 0xc) = *(int *)(lVar9 + 0xc) + -1;
      *(undefined4 *)(lVar9 + 0x20) = 0;
      *(undefined8 *)(param_3 + 0x14) = 0;
      *(undefined4 *)(param_3 + 0x1c) = 0;
      *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xfffff9e1;
      return pfVar7;
    }
LAB_18013ff27:
    DAT_1804099bc = fVar16;
    *(undefined8 *)(param_3 + 0x14) = 0;
    *(undefined4 *)(param_3 + 0x1c) = 0;
    *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xfffff9e1;
    return pfVar7;
  }
  UVar10 = GetTickCount64();
  DAT_1804099b0 = UVar10 + 0xfa;
  local_40 = 0x93fd561a96ab0c67;
  local_38 = 0x1f136f05274bb28d;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_50,&local_40);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_60,&local_38);
  pcVar11 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
  cVar1 = *pcVar11;
  uVar5 = DAT_1803e7cf4;
  if (cVar1 == '\0') {
    local_68[1] = 10000;
    local_68[0] = 0;
    local_40 = 0x93fd561a96ab0c67;
    local_38 = 0x73634b3d3ddd8dca;
    plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_50,&local_40);
    plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_60,&local_38);
    puVar12 = (uint *)FUN_1802029c0(*plVar6 + 0x28);
    puVar14 = local_68;
    if (-1 < (int)*puVar12) {
      puVar14 = puVar12;
    }
    puVar13 = local_68 + 1;
    if ((int)*puVar12 < 0x2711) {
      puVar13 = puVar14;
    }
    uVar5 = *puVar13;
  }
  pfVar7 = (float *)(ulonglong)uVar5;
  if (((int)uVar5 < 1) ||
     (((DAT_1804099c8 != 0 &&
       (pfVar7 = (float *)(longlong)(int)uVar5, (float *)(UVar10 - DAT_1804099c8) < pfVar7)) ||
      (DAT_1804099b8 = 1, DAT_1804099c8 = UVar10, cVar1 == '\0')))) goto LAB_18013fe50;
  pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar4 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar9 = (*pcVar3)(DAT_1803fa360,uVar4);
  if (lVar9 != 0) {
    lVar9 = FUN_18001daf0(lVar9,local_60);
    fVar16 = *(float *)(lVar9 + 8);
    if (DAT_1804099b9 == '\0') {
      DAT_1804099b9 = '\x01';
      DAT_1804099c0 = fVar16;
    }
    else {
      fVar15 = 0.0;
      if (0.0 <= DAT_1804099c0 - fVar16) {
        fVar15 = DAT_1804099c0 - fVar16;
      }
      if (DAT_1804099ba != '\0') {
        if (DAT_1804099d4 * DAT_180380e28 + DAT_180380e9c < fVar15) {
          uVar5 = (uint)((float)(int)DAT_1803e7cf4 * DAT_180380ae4);
          local_38 = CONCAT44(local_38._4_4_,uVar5);
          DAT_1803e7cf4 = 0x78;
          DAT_1804099c0 = fVar16;
          if (0x78 < (int)uVar5) {
            DAT_1803e7cf4 = uVar5;
          }
          goto LAB_18013fe0c;
        }
        fVar15 = fVar15 * DAT_180380a3c + DAT_1804099d4 * DAT_180380b3c;
      }
      DAT_1804099ba = '\x01';
      uVar5 = DAT_1803e7cf4 + 0x19;
      local_40 = CONCAT44(local_40._4_4_,uVar5);
      DAT_1803e7cf4 = 3000;
      DAT_1804099c0 = fVar16;
      DAT_1804099d4 = fVar15;
      if ((int)uVar5 < 3000) {
        DAT_1803e7cf4 = uVar5;
      }
    }
  }
LAB_18013fe0c:
  uVar5 = DAT_1803ff250 & 0x80000007;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
  }
  pfVar7 = (float *)(ulonglong)uVar5;
  DAT_1803ff250 = DAT_1803ff250 + 1;
  if (uVar5 == 0) {
    pfVar7 = (float *)FUN_180014410("[AIRSTUCK] auto interval=%dms avgDrop=%.1fu\n",DAT_1803e7cf4,
                                    (double)DAT_1804099d4);
  }
LAB_18013fe50:
  if (param_3 != 0) {
    *(undefined8 *)(param_3 + 0x14) = 0;
    *(undefined4 *)(param_3 + 0x1c) = 0;
    *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) & 0xfffff9e1;
    return pfVar7;
  }
  return pfVar7;
}


)B18013fa40",
    "43ff6bcb03e175646af0d6c1cd7373d41b7331479ee10fcddec4c74b1d3d6064",
    R"F18013fa40C(FUN_180014410
FUN_18001daf0
FUN_180024540
FUN_1800245f0
FUN_1801fcfc0
FUN_1802029c0
FUN_180241a30)F18013fa40C",
    R"F18013fa40D(LAB_18013fe0c
LAB_18013fe50
LAB_18013ff27
DAT_180380a3c
DAT_180380ae4
DAT_180380b3c
DAT_180380c50
DAT_180380e28
DAT_180380e9c
DAT_1803da4c0
DAT_1803e7cf4
DAT_1803fa360
DAT_1803fa545
DAT_1803fa608
DAT_1803fa668
DAT_1803fadf0
DAT_1803ff250
DAT_1804099b0
DAT_1804099b8
DAT_1804099b9
DAT_1804099ba
DAT_1804099bc
DAT_1804099c0
DAT_1804099c8
DAT_1804099d0
DAT_1804099d4)F18013fa40D",
    R"F18013fa40T("[AIRSTUCK] auto interval=%dms avgDrop=%.1fu\\n")F18013fa40T",
    R"F18013fa40F(45: if (*(char *)pfVar7 == '\0') {
55: return pfVar7;
64: if (0xfd < uVar5) {
74: return (float *)(ulonglong)uVar5;
77: if ((char)pfVar7 == '\0') {
87: return pfVar7;
89: if (DAT_1803fa545 != '\0') {
99: return pfVar7;
102: if ((char)pfVar7 == '\0') {
112: return pfVar7;
114: if (DAT_1803fa668 == (longlong *)0x0) {
115: return pfVar7;
118: if (lVar9 == 0) {
119: return (float *)0x0;
127: if (*piVar8 != 1) {
135: if (*piVar8 < 1) {
138: if (DAT_1803fa608 == (float *)0x0) {
141: else {
143: if (0.0 < fVar16) {
144: if (DAT_1804099bc == 0.0) {
148: if (DAT_180380c50 <= fVar16 - DAT_1804099bc) goto LAB_18013ff27;
152: if (DAT_1804099d0 % (iVar2 + 1) != 0) {
158: return pfVar7;
160: LAB_18013ff27:
165: return pfVar7;
176: if (cVar1 == '\0') {
185: if (-1 < (int)*puVar12) {
189: if ((int)*puVar12 < 0x2711) {
195: if (((int)uVar5 < 1) ||
202: if (lVar9 != 0) {
205: if (DAT_1804099b9 == '\0') {
209: else {
211: if (0.0 <= DAT_1804099c0 - fVar16) {
214: if (DAT_1804099ba != '\0') {
215: if (DAT_1804099d4 * DAT_180380e28 + DAT_180380e9c < fVar15) {
220: if (0x78 < (int)uVar5) {
223: goto LAB_18013fe0c;
233: if ((int)uVar5 < 3000) {
238: LAB_18013fe0c:
240: if ((int)uVar5 < 0) {
245: if (uVar5 == 0) {
249: LAB_18013fe50:
250: if (param_3 != 0) {
254: return pfVar7;
256: return pfVar7;)F18013fa40F",
    R"F18013fa40U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18013fe0c.
TODO: recover the declaration, type and value for global/data reference LAB_18013fe50.
TODO: recover the declaration, type and value for global/data reference LAB_18013ff27.
TODO: recover the declaration, type and value for global/data reference DAT_180380a3c.
TODO: recover the declaration, type and value for global/data reference DAT_180380ae4.
TODO: recover the declaration, type and value for global/data reference DAT_180380b3c.
TODO: recover the declaration, type and value for global/data reference DAT_180380c50.
TODO: recover the declaration, type and value for global/data reference DAT_180380e28.
TODO: recover the declaration, type and value for global/data reference DAT_180380e9c.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7cf4.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa545.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa608.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff250.
TODO: recover the declaration, type and value for global/data reference DAT_1804099b0.
TODO: recover the declaration, type and value for global/data reference DAT_1804099b8.
TODO: recover the declaration, type and value for global/data reference DAT_1804099b9.
TODO: recover the declaration, type and value for global/data reference DAT_1804099ba.
TODO: recover the declaration, type and value for global/data reference DAT_1804099bc.
TODO: recover the declaration, type and value for global/data reference DAT_1804099c0.
TODO: recover the declaration, type and value for global/data reference DAT_1804099c8.
TODO: recover the declaration, type and value for global/data reference DAT_1804099d0.
TODO: recover the declaration, type and value for global/data reference DAT_1804099d4.
TODO: resolve the indirect call in body 117: lVar9 = (**(code **)(*DAT_1803fa668 + 0x240))();.
TODO: resolve the indirect call in body 199: pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);.
TODO: resolve the indirect call in body 200: uVar4 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 201: lVar9 = (*pcVar3)(DAT_1803fa360,uVar4);.)F18013fa40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013fa40() noexcept {
    return kFunction_0x18013fa40;
}

// 0x18013ffc0 Features_Warp_WarpFeature_vfunc02
// source: re/dump/decompile/0x18013ffc0_Features_Warp_WarpFeature_vfunc02.c
// size: 1816 bytes; thunk: false
// body sha256: 33a98f9f13ac7aff93f3d522dfe5f4cee710f86fa589adb14482fdbf228e9155
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18013ffc0{
    "0x18013ffc0",
    "Features_Warp_WarpFeature_vfunc02",
    R"F18013ffc0S(undefined Features_Warp_WarpFeature_vfunc02())F18013ffc0S",
    R"B18013ffc0(// 0x18013ffc0  Features_Warp_WarpFeature_vfunc02
// size=1816 thunk=false
// signature: undefined Features_Warp_WarpFeature_vfunc02()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void Features_Warp_WarpFeature_vfunc02(void)

{
  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  BOOL BVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  int *piVar14;
  char *pcVar15;
  int iVar16;
  uint uVar17;
  void *lp;
  bool bVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_b8 [32];
  char *local_98;
  int local_90;
  char local_88;
  char local_87;
  undefined8 local_80;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  longlong local_50 [7];
  
  local_50[3] = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  if (DAT_1803fa668 == (longlong *)0x0) {
    local_50[0] = 0;
  }
  else {
    local_50[0] = (**(code **)(*DAT_1803fa668 + 0x240))();
  }
  FUN_1800b37b0();
  if ((-1 < DAT_1803e7b6c) && (DAT_1803e7b6c = DAT_1803e7b6c + 1, 0xb < DAT_1803e7b6c)) {
    pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar12 = (*pcVar2)(DAT_1803fa360,uVar9);
    if (lVar12 != 0) {
      FUN_18001daf0(lVar12,&local_80);
      fVar19 = (local_80._4_4_ - DAT_1805b888c) * (local_80._4_4_ - DAT_1805b888c) +
               ((float)local_80 - DAT_1805b8888) * ((float)local_80 - DAT_1805b8888);
      if (fVar19 < 0.0) {
        fVar19 = sqrtf(fVar19);
      }
      else {
        fVar19 = SQRT(fVar19);
      }
      if ((DAT_1803fe648 == (void *)0x0) &&
         ((DAT_1803fa340 == 0 ||
          (DAT_1803fe648 = (void *)FUN_180016fb0(), DAT_1803fe648 == (void *)0x0)))) {
        local_98 = "<not found>";
      }
      else {
        pvVar3 = DAT_1803fe648;
        lp = *(void **)((longlong)DAT_1803fe648 + 0x38);
        if ((lp == (void *)0x0) ||
           ((lp == DAT_1803fe648 || (BVar10 = IsBadReadPtr(lp,0x60), BVar10 != 0)))) {
          lp = pvVar3;
        }
        pcVar15 = *(char **)((longlong)lp + 0x48);
        if ((pcVar15 == (char *)0x0) || (BVar10 = IsBadReadPtr(pcVar15,2), BVar10 != 0)) {
          bVar18 = false;
        }
        else {
          bVar18 = true;
        }
        local_98 = "";
        if (bVar18) {
          local_98 = pcVar15;
        }
      }
      if (DAT_18040159c < 1) {
        fVar20 = 0.0;
      }
      else {
        fVar20 = fVar19 / (float)DAT_18040159c;
      }
      FUN_180014410("[WARP] charge=%d -> travelled %.0fu (%.1f u/tick) sv_maxusrcmdprocessticks=%s\n"
                    ,DAT_18040159c,(double)fVar19,(double)fVar20);
    }
    DAT_1803e7b6c = -1;
  }
  if ((local_50[0] != 0) && (DAT_180401594 == '\0')) {
    local_50[1] = 0x93fd561a96ab0c67;
    local_50[2] = 0x35dd584952165cb0;
    plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_80,local_50 + 1);
    plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,local_70,local_50 + 2);
    piVar14 = (int *)FUN_1802029c0(*plVar13 + 0x28);
    iVar11 = 0x20;
    if (0x20 < *piVar14 + 8) {
      iVar11 = *piVar14 + 8;
    }
    iVar16 = *(int *)(local_50[0] + 0xc) - *(int *)(local_50[0] + 0x14);
    if ((iVar11 < iVar16) || (iVar16 < 0)) {
      *(int *)(local_50[0] + 0xc) = *(int *)(local_50[0] + 0x14) + 1;
    }
  }
  local_50[2] = 0x93fd561a96ab0c67;
  local_50[1] = 0x161b55506f557a6d;
  plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,local_50 + 2);
  plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,&local_80,local_50 + 1);
  pcVar15 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
  if (*pcVar15 != '\0') {
    pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar12 = (*pcVar2)(DAT_1803fa360,uVar9);
    if ((lVar12 != 0) && (cVar5 = FUN_18001c330(lVar12), cVar5 != '\0')) {
      if (local_50[0] == 0) {
        return;
      }
      local_50[2] = 0x93fd561a96ab0c67;
      local_50[1] = 0x35dd584952165cb0;
      plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,local_50 + 2);
      plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,&local_80,local_50 + 1);
      piVar14 = (int *)FUN_1802029c0(*plVar13 + 0x28);
      iVar11 = *piVar14;
      iVar16 = 1;
      if ((0 < iVar11) && (iVar16 = iVar11, 0x40 < iVar11)) {
        iVar16 = 0x40;
      }
      local_50[2] = 0x93fd561a96ab0c67;
      local_50[1] = 0xfe939fed9e625efe;
      plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,local_50 + 2);
      plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,&local_80,local_50 + 1);
      pcVar15 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
      if ((((*pcVar15 != '\0') &&
           ((DAT_1804261b8 != 0 ||
            ((DAT_1803fa340 != 0 &&
             (DAT_1804261b8 = FUN_180016fb0("sv_maxusrcmdprocessticks"), DAT_1804261b8 != 0)))))) &&
          (iVar11 = FUN_1800197a0(DAT_1804261b8), 1 < iVar11)) && (iVar11 + -1 < iVar16)) {
        iVar16 = iVar11 + -1;
      }
      local_50[2] = 0x93fd561a96ab0c67;
      local_50[1] = 0xdb9ca35f44d9bb88;
      plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,local_50 + 2);
      FUN_180241a30(*plVar13 + 0x28,&local_80,local_50 + 1);
      piVar14 = (int *)FUN_1802029c0();
      iVar11 = *piVar14;
      uVar1 = iVar11 - 1;
      if (((uVar1 < 0xfe) && (cVar5 = FUN_180024540(), cVar5 != '\0')) && (DAT_1803fa545 == '\0')) {
        bVar6 = FUN_1800245f0();
      }
      else {
        bVar6 = 0;
      }
      iVar4 = DAT_180401598;
      uVar17 = -(uint)(DAT_180401594 != '\0') & 2 | (uint)bVar6 << 3 | iVar11 << 4;
      if (uVar17 != DAT_1803e9574) {
        bVar18 = DAT_180401594 != '\0';
        local_50[2] = 0x93fd561a96ab0c67;
        local_50[1] = 0xbf7c50ae7aa0dd3e;
        DAT_1803e9574 = uVar17;
        plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,local_50 + 2);
        plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,&local_80,local_50 + 1);
        pcVar15 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
        cVar5 = *pcVar15;
        if (((uVar1 < 0xfe) && (cVar7 = FUN_180024540(), cVar7 != '\0')) && (DAT_1803fa545 == '\0'))
        {
          uVar8 = FUN_1800245f0(iVar11);
        }
        else {
          uVar8 = 0;
        }
        local_90 = iVar4;
        local_98 = (char *)CONCAT44(local_98._4_4_,(uint)bVar18);
        FUN_180014410("[WARP] state key=%d down=%d tap=%d charging=%d ticks=%d\n",iVar11,uVar8,
                      cVar5 != '\0');
      }
      local_80 = local_50;
      local_50[2] = 0x93fd561a96ab0c67;
      local_50[1] = 0xbf7c50ae7aa0dd3e;
      plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_70,local_50 + 2);
      plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,local_60,local_50 + 1);
      pcVar15 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
      if (*pcVar15 == '\0') {
        if ((((uVar1 < 0xfe) && (cVar5 = FUN_180024540(), cVar5 != '\0')) && (DAT_1803fa545 == '\0')
            ) && (cVar5 = FUN_1800245f0(iVar11), cVar5 != '\0')) {
          if (DAT_180401598 < iVar16) {
            DAT_180401594 = '\x01';
            *(int *)(local_50[0] + 0xc) = *(int *)(local_50[0] + 0xc) + -1;
            DAT_180401598 = DAT_180401598 + 1;
            *(undefined4 *)(local_50[0] + 0x20) = 0;
            return;
          }
          local_50[2] = 0x93fd561a96ab0c67;
          local_50[1] = 0xa447f642f59d8736;
          plVar13 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_60,local_50 + 2);
          plVar13 = (longlong *)FUN_180241a30(*plVar13 + 0x28,local_70,local_50 + 1);
          pcVar15 = (char *)FUN_1801fcfc0(*plVar13 + 0x28);
          if (*pcVar15 == '\0') {
            return;
          }
        }
        else {
          if (DAT_180401594 == '\0') {
            DAT_180401594 = '\0';
            DAT_180401598 = 0;
            return;
          }
          if (DAT_180401598 < 1) {
            DAT_180401594 = '\0';
            DAT_180401598 = 0;
            return;
          }
        }
LAB_180140694:
        FUN_1801406e0(&local_80);
        return;
      }
      FUN_180024720(&local_88,iVar11);
      if ((local_88 == '\0') && (local_87 != '\0')) {
        if ((DAT_180401594 != '\0') && (0 < DAT_180401598)) goto LAB_180140694;
        DAT_180401594 = '\x01';
        DAT_180401598 = 0;
      }
      else if (DAT_180401594 == '\0') {
        return;
      }
      if (DAT_180401598 < iVar16) {
        *(int *)(local_50[0] + 0xc) = *(int *)(local_50[0] + 0xc) + -1;
        DAT_180401598 = DAT_180401598 + 1;
        *(undefined4 *)(local_50[0] + 0x20) = 0;
        return;
      }
      return;
    }
  }
  DAT_180401598 = 0;
  DAT_180401594 = '\0';
  return;
}


)B18013ffc0",
    "33a98f9f13ac7aff93f3d522dfe5f4cee710f86fa589adb14482fdbf228e9155",
    R"F18013ffc0C(FUN_180014410
FUN_180016fb0
FUN_1800197a0
FUN_18001c330
FUN_18001daf0
FUN_180024540
FUN_1800245f0
FUN_180024720
FUN_1800b37b0
FUN_1801406e0
FUN_1801fcfc0
FUN_1802029c0
FUN_180241a30)F18013ffc0C",
    R"F18013ffc0D(LAB_180140694
DAT_1803da4c0
DAT_1803e7b6c
DAT_1803e9574
DAT_1803fa340
DAT_1803fa360
DAT_1803fa545
DAT_1803fa668
DAT_1803fadf0
DAT_1803fe648
DAT_180401594
DAT_180401598
DAT_18040159c
DAT_1804261b8
DAT_1805b8888
DAT_1805b888c)F18013ffc0D",
    R"F18013ffc0T(""
"<not found>"
"sv_maxusrcmdprocessticks"
"[WARP] state key=%d down=%d tap=%d charging=%d ticks=%d\\n"
"[WARP] charge=%d -> travelled %.0fu (%.1f u/tick) sv_maxusrcmdprocessticks=%s\\n")F18013ffc0T",
    R"F18013ffc0F(45: if (DAT_1803fa668 == (longlong *)0x0) {
48: else {
52: if ((-1 < DAT_1803e7b6c) && (DAT_1803e7b6c = DAT_1803e7b6c + 1, 0xb < DAT_1803e7b6c)) {
56: if (lVar12 != 0) {
60: if (fVar19 < 0.0) {
63: else {
66: if ((DAT_1803fe648 == (void *)0x0) &&
71: else {
74: if ((lp == (void *)0x0) ||
79: if ((pcVar15 == (char *)0x0) || (BVar10 = IsBadReadPtr(pcVar15,2), BVar10 != 0)) {
82: else {
86: if (bVar18) {
90: if (DAT_18040159c < 1) {
93: else {
101: if ((local_50[0] != 0) && (DAT_180401594 == '\0')) {
108: if (0x20 < *piVar14 + 8) {
112: if ((iVar11 < iVar16) || (iVar16 < 0)) {
121: if (*pcVar15 != '\0') {
125: if ((lVar12 != 0) && (cVar5 = FUN_18001c330(lVar12), cVar5 != '\0')) {
126: if (local_50[0] == 0) {
127: return;
136: if ((0 < iVar11) && (iVar16 = iVar11, 0x40 < iVar11)) {
144: if ((((*pcVar15 != '\0') &&
158: if (((uVar1 < 0xfe) && (cVar5 = FUN_180024540(), cVar5 != '\0')) && (DAT_1803fa545 == '\0')) {
161: else {
166: if (uVar17 != DAT_1803e9574) {
175: if (((uVar1 < 0xfe) && (cVar7 = FUN_180024540(), cVar7 != '\0')) && (DAT_1803fa545 == '\0'))
179: else {
193: if (*pcVar15 == '\0') {
194: if ((((uVar1 < 0xfe) && (cVar5 = FUN_180024540(), cVar5 != '\0')) && (DAT_1803fa545 == '\0')
196: if (DAT_180401598 < iVar16) {
201: return;
208: if (*pcVar15 == '\0') {
209: return;
212: else {
213: if (DAT_180401594 == '\0') {
216: return;
218: if (DAT_180401598 < 1) {
221: return;
224: LAB_180140694:
226: return;
229: if ((local_88 == '\0') && (local_87 != '\0')) {
230: if ((DAT_180401594 != '\0') && (0 < DAT_180401598)) goto LAB_180140694;
234: else if (DAT_180401594 == '\0') {
235: return;
237: if (DAT_180401598 < iVar16) {
241: return;
243: return;
248: return;)F18013ffc0F",
    R"F18013ffc0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180140694.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7b6c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9574.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa340.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa545.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fe648.
TODO: recover the declaration, type and value for global/data reference DAT_180401594.
TODO: recover the declaration, type and value for global/data reference DAT_180401598.
TODO: recover the declaration, type and value for global/data reference DAT_18040159c.
TODO: recover the declaration, type and value for global/data reference DAT_1804261b8.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8888.
TODO: recover the declaration, type and value for global/data reference DAT_1805b888c.
TODO: resolve the indirect call in body 49: local_50[0] = (**(code **)(*DAT_1803fa668 + 0x240))();.
TODO: resolve the indirect call in body 53: pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);.
TODO: resolve the indirect call in body 54: uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 55: lVar12 = (*pcVar2)(DAT_1803fa360,uVar9);.
TODO: resolve the indirect call in body 122: pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);.
TODO: resolve the indirect call in body 123: uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 124: lVar12 = (*pcVar2)(DAT_1803fa360,uVar9);.)F18013ffc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18013ffc0() noexcept {
    return kFunction_0x18013ffc0;
}

// 0x1801406e0 FUN_1801406e0
// source: re/dump/decompile/0x1801406e0_FUN_1801406e0.c
// size: 560 bytes; thunk: false
// body sha256: 65677a16dad535f162f60ce0e254f8478778fc2a7d178639c59cf150775c2831
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801406e0{
    "0x1801406e0",
    "FUN_1801406e0",
    R"F1801406e0S(undefined FUN_1801406e0())F1801406e0S",
    R"B1801406e0(// 0x1801406e0  FUN_1801406e0
// size=560 thunk=false
// signature: undefined FUN_1801406e0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801406e0(undefined8 *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  float *pfVar8;
  int iVar9;
  float fVar10;
  undefined1 local_34 [20];
  
  iVar2 = DAT_180401598;
  if (0 < DAT_180401598) {
    iVar3 = FUN_1800b3740();
    iVar9 = 0;
    if (-1 < (int)DAT_1804096d8) {
      iVar9 = (int)DAT_1804096d8;
    }
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
    DAT_1804096cc = DAT_1804096cc + iVar2;
    if (iVar9 < iVar2) {
      DAT_1804096d0 = DAT_1804096d0 + 1;
      DAT_1804096c0 = DAT_1804096c0 + iVar9;
      uVar5 = FUN_1800b3740();
      iVar4 = FUN_1800b3740();
      iVar3 = 0;
      if (-1 < (int)DAT_1804096d8) {
        iVar3 = (int)DAT_1804096d8;
      }
      if (iVar4 < iVar3) {
        iVar3 = iVar4;
      }
      FUN_180014410("[WARP] bank short: asked %d, granted %d (bank %d/%d) - releasing the smaller burst\n"
                    ,iVar2,iVar9,iVar3,uVar5);
      DAT_180401598 = iVar9;
    }
    else {
      DAT_1804096c0 = DAT_1804096c0 + iVar2;
    }
    iVar2 = DAT_180401598;
    if (0 < DAT_180401598) {
      *(int *)(*(longlong *)*param_1 + 0xc) = *(int *)(*(longlong *)*param_1 + 0xc) + DAT_180401598;
      lVar6 = *(longlong *)*param_1;
      if (DAT_1803fa620 == 0) {
        uVar5 = 0xffffffff;
      }
      else {
        uVar5 = *(undefined4 *)(DAT_1803fa620 + 0x20b88);
      }
      FUN_180014410("[WARP] release ticks=%d clChoked=%d nchChoked=%d outSeq=%d ack=%d\n",iVar2,
                    uVar5,*(undefined4 *)(lVar6 + 0x20),*(undefined4 *)(lVar6 + 0xc),
                    *(undefined4 *)(lVar6 + 0x14));
      pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
      uVar5 = (**(code **)(*DAT_1803fa668 + 0x60))();
      lVar6 = (*pcVar1)(DAT_1803fa360,uVar5);
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)FUN_18001daf0(lVar6,local_34);
        _DAT_1805b8888 = *puVar7;
        DAT_1805b8890 = *(undefined4 *)(puVar7 + 1);
        DAT_18040159c = DAT_180401598;
        DAT_1803e7b6c = 0;
        pfVar8 = (float *)FUN_18001d530(lVar6);
        fVar10 = pfVar8[1] * pfVar8[1] + *pfVar8 * *pfVar8;
        if (fVar10 < 0.0) {
          fVar10 = sqrtf(fVar10);
        }
        else {
          fVar10 = SQRT(fVar10);
        }
        iVar2 = DAT_180401598;
        DAT_180401594 = 0;
        DAT_180401598 = 0;
        if (0 < iVar2) {
          _DAT_1803e9fd8 = DAT_1805b8888;
          _DAT_1803e9fdc = DAT_1805b888c;
          _DAT_1803e9fe0 = DAT_1805b8890;
          DAT_1804096c8 = iVar2;
          _DAT_1804096d4 = fVar10;
          DAT_1803e7ba4 = 0xc;
          return;
        }
      }
    }
  }
  DAT_180401598 = 0;
  DAT_180401594 = 0;
  return;
}


)B1801406e0",
    "65677a16dad535f162f60ce0e254f8478778fc2a7d178639c59cf150775c2831",
    R"F1801406e0C(FUN_180014410
FUN_18001d530
FUN_18001daf0
FUN_1800b3740)F1801406e0C",
    R"F1801406e0D(DAT_1803e7b6c
DAT_1803e7ba4
DAT_1803fa360
DAT_1803fa620
DAT_1803fa668
DAT_180401594
DAT_180401598
DAT_18040159c
DAT_1804096c0
DAT_1804096c8
DAT_1804096cc
DAT_1804096d0
DAT_1804096d8
DAT_1805b8888
DAT_1805b888c
DAT_1805b8890)F1801406e0D",
    R"F1801406e0T("[WARP] release ticks=%d clChoked=%d nchChoked=%d outSeq=%d ack=%d\\n"
"[WARP] bank short: asked %d, granted %d (bank %d/%d) - releasing the smaller burst\\n")F1801406e0T",
    R"F1801406e0F(25: if (0 < DAT_180401598) {
28: if (-1 < (int)DAT_1804096d8) {
31: if (iVar3 < iVar9) {
35: if (iVar9 < iVar2) {
41: if (-1 < (int)DAT_1804096d8) {
44: if (iVar4 < iVar3) {
51: else {
55: if (0 < DAT_180401598) {
58: if (DAT_1803fa620 == 0) {
61: else {
70: if (lVar6 != 0) {
78: if (fVar10 < 0.0) {
81: else {
87: if (0 < iVar2) {
94: return;
101: return;)F1801406e0F",
    R"F1801406e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7b6c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7ba4.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa620.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_180401594.
TODO: recover the declaration, type and value for global/data reference DAT_180401598.
TODO: recover the declaration, type and value for global/data reference DAT_18040159c.
TODO: recover the declaration, type and value for global/data reference DAT_1804096c0.
TODO: recover the declaration, type and value for global/data reference DAT_1804096c8.
TODO: recover the declaration, type and value for global/data reference DAT_1804096cc.
TODO: recover the declaration, type and value for global/data reference DAT_1804096d0.
TODO: recover the declaration, type and value for global/data reference DAT_1804096d8.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8888.
TODO: recover the declaration, type and value for global/data reference DAT_1805b888c.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8890.
TODO: resolve the indirect call in body 67: pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);.
TODO: resolve the indirect call in body 68: uVar5 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 69: lVar6 = (*pcVar1)(DAT_1803fa360,uVar5);.)F1801406e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801406e0() noexcept {
    return kFunction_0x1801406e0;
}

// 0x180140920 Features_Speedhack_SpeedhackFeature_vfunc02
// source: re/dump/decompile/0x180140920_Features_Speedhack_SpeedhackFeature_vfunc02.c
// size: 583 bytes; thunk: false
// body sha256: 55f72380fba6ab99a98dc69cf64c2ab0831ed6b1de738317a73d63b2ecd752cd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180140920{
    "0x180140920",
    "Features_Speedhack_SpeedhackFeature_vfunc02",
    R"F180140920S(undefined Features_Speedhack_SpeedhackFeature_vfunc02())F180140920S",
    R"B180140920(// 0x180140920  Features_Speedhack_SpeedhackFeature_vfunc02
// size=583 thunk=false
// signature: undefined Features_Speedhack_SpeedhackFeature_vfunc02()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_Speedhack_SpeedhackFeature_vfunc02(void)

{
  char cVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  longlong *plVar5;
  char *pcVar6;
  int *piVar7;
  float *pfVar8;
  uint uVar9;
  byte bVar10;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  float local_48 [2];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  local_18 = 0x2cad3795fc8b129f;
  local_20 = 0x93fd561a96ab0c67;
  plVar5 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_40,&local_20);
  plVar5 = (longlong *)FUN_180241a30(*plVar5 + 0x28,local_30,&local_18);
  pcVar6 = (char *)FUN_1801fcfc0(*plVar5 + 0x28);
  local_18 = 0x93fd561a96ab0c67;
  cVar1 = *pcVar6;
  local_20 = 0x647450219ebf53aa;
  plVar5 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_30,&local_18);
  plVar5 = (longlong *)FUN_180241a30(*plVar5 + 0x28,local_40,&local_20);
  piVar7 = (int *)FUN_1802029c0(*plVar5 + 0x28);
  iVar2 = *piVar7;
  if ((iVar2 == 0) ||
     ((((iVar2 - 1U < 0xfe && (cVar4 = FUN_180024540(), cVar4 != '\0')) && (DAT_1803fa545 == '\0'))
      && (cVar4 = FUN_1800245f0(iVar2), cVar4 != '\0')))) {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  local_18 = 0x93fd561a96ab0c67;
  local_20 = 0x6682ac5b6cd814e3;
  plVar5 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_30,&local_18);
  plVar5 = (longlong *)FUN_180241a30(*plVar5 + 0x28,local_40,&local_20);
  pfVar8 = (float *)FUN_180202dc0(*plVar5 + 0x28);
  local_48[0] = *pfVar8;
  pfVar8 = local_48;
  if (local_48[0] < DAT_1803809c4) {
    pfVar8 = (float *)&DAT_1803310e4;
  }
  if (DAT_180380e28 < local_48[0]) {
    pfVar8 = (float *)&DAT_1803310e0;
  }
  DAT_1803e90b8 = *pfVar8;
  if ((cVar1 == '\0') || (bVar10 == 0)) {
    DAT_180423573 = 0;
  }
  else {
    DAT_180423573 = 1;
  }
  uVar9 = -(uint)(cVar1 != '\0') & 2 | (uint)bVar10;
  if ((uVar9 != DAT_1803e6f58) || ((int)(DAT_1803e90b8 * DAT_180381120) != DAT_1803e71a0)) {
    fVar3 = DAT_180381384;
    if (DAT_1803fa608 != 0) {
      fVar3 = *(float *)(DAT_1803fa608 + 0x18);
    }
    local_50 = (double)fVar3;
    local_58 = (double)DAT_1803e90b8;
    DAT_1803e6f58 = uVar9;
    DAT_1803e71a0 = (int)(DAT_1803e90b8 * DAT_180381120);
    FUN_180014410("[SPEED] on=%d held=%d hooks=%d factor=%.2f frametime=%.5f\n",cVar1 != '\0',bVar10
                  ,DAT_180423572 != '\0');
  }
  return;
}


)B180140920",
    "55f72380fba6ab99a98dc69cf64c2ab0831ed6b1de738317a73d63b2ecd752cd",
    R"F180140920C(FUN_180014410
FUN_180024540
FUN_1800245f0
FUN_1801fcfc0
FUN_1802029c0
FUN_180202dc0
FUN_180241a30)F180140920C",
    R"F180140920D(DAT_1803310e0
DAT_1803310e4
DAT_1803809c4
DAT_180380e28
DAT_180381120
DAT_180381384
DAT_1803da4c0
DAT_1803e6f58
DAT_1803e71a0
DAT_1803e90b8
DAT_1803fa545
DAT_1803fa608
DAT_1803fadf0
DAT_180423572
DAT_180423573)F180140920D",
    R"F180140920T("[SPEED] on=%d held=%d hooks=%d factor=%.2f frametime=%.5f\\n")F180140920T",
    R"F180140920F(45: if ((iVar2 == 0) ||
50: else {
60: if (local_48[0] < DAT_1803809c4) {
63: if (DAT_180380e28 < local_48[0]) {
67: if ((cVar1 == '\0') || (bVar10 == 0)) {
70: else {
74: if ((uVar9 != DAT_1803e6f58) || ((int)(DAT_1803e90b8 * DAT_180381120) != DAT_1803e71a0)) {
76: if (DAT_1803fa608 != 0) {
86: return;)F180140920F",
    R"F180140920U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803310e0.
TODO: recover the declaration, type and value for global/data reference DAT_1803310e4.
TODO: recover the declaration, type and value for global/data reference DAT_1803809c4.
TODO: recover the declaration, type and value for global/data reference DAT_180380e28.
TODO: recover the declaration, type and value for global/data reference DAT_180381120.
TODO: recover the declaration, type and value for global/data reference DAT_180381384.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e6f58.
TODO: recover the declaration, type and value for global/data reference DAT_1803e71a0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e90b8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa545.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa608.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_180423572.
TODO: recover the declaration, type and value for global/data reference DAT_180423573.)F180140920U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180140920() noexcept {
    return kFunction_0x180140920;
}

// 0x180140b70 FUN_180140b70
// source: re/dump/decompile/0x180140b70_FUN_180140b70.c
// size: 502 bytes; thunk: false
// body sha256: a6f2ff42409197ccbd618b2d98d67cc9cca9bacd9f3f4f3f7f56ec66a737573d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180140b70{
    "0x180140b70",
    "FUN_180140b70",
    R"F180140b70S(undefined FUN_180140b70())F180140b70S",
    R"B180140b70(// 0x180140b70  FUN_180140b70
// size=502 thunk=false
// signature: undefined FUN_180140b70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180140b70(longlong *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  byte *pbVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  longlong *local_30;
  byte *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(char *)param_1 = '\0';
  local_38 = 1;
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  local_30 = param_1;
  local_28 = param_2;
  if ((ulonglong)param_1[3] < uVar3) {
    lVar6 = param_1[2];
    FUN_18021aa80(0,uVar3 - lVar6);
    param_1[2] = lVar6;
    uVar3 = *(ulonglong *)(param_2 + 0x10);
  }
  pbVar5 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pbVar5 = *(byte **)param_2;
  }
  pbVar1 = pbVar5 + uVar3;
  for (; pbVar5 != pbVar1; pbVar5 = pbVar5 + 1) {
    bVar2 = *pbVar5;
    if ((0x3b < bVar2) || ((0x800000400002401U >> ((longlong)(char)bVar2 & 0x3fU) & 1) == 0)) {
      uVar3 = param_1[2];
      if (uVar3 < (ulonglong)param_1[3]) {
        param_1[2] = uVar3 + 1;
        if ((ulonglong)param_1[3] < 0x10) {
          *(byte *)(uVar3 + (longlong)param_1) = bVar2;
          *(char *)(uVar3 + 1 + (longlong)param_1) = '\0';
        }
        else {
          lVar6 = *param_1;
          *(byte *)(uVar3 + lVar6) = bVar2;
          *(undefined1 *)(uVar3 + 1 + lVar6) = 0;
        }
      }
      else {
        FUN_18021abd0(param_1);
      }
    }
  }
  if (0x78 < (ulonglong)param_1[2]) {
    FUN_18020e770(param_1);
  }
  lVar6 = param_1[2];
  while (lVar6 != 0) {
    plVar4 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar4 = (longlong *)*param_1;
    }
    if ((char)*plVar4 != ' ') {
      if (lVar6 != 0) goto LAB_180140d00;
      break;
    }
    plVar4 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar4 = (longlong *)*param_1;
    }
    bVar7 = lVar6 != 0;
    lVar6 = lVar6 - (ulonglong)bVar7;
    memmove(plVar4,(char *)((ulonglong)bVar7 + (longlong)plVar4),lVar6 + 1);
    param_1[2] = lVar6;
  }
  goto LAB_180140d3a;
  while( true ) {
    param_1[2] = lVar6;
    plVar4 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar4 = (longlong *)*param_1;
    }
    *(char *)(lVar6 + (longlong)plVar4) = '\0';
    lVar6 = param_1[2];
    if (lVar6 == 0) break;
LAB_180140d00:
    plVar4 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar4 = (longlong *)*param_1;
    }
    lVar6 = lVar6 + -1;
    if (*(char *)(lVar6 + (longlong)plVar4) != ' ') break;
  }
LAB_180140d3a:
  FUN_18020e450(param_2);
  return param_1;
}


)B180140b70",
    "a6f2ff42409197ccbd618b2d98d67cc9cca9bacd9f3f4f3f7f56ec66a737573d",
    R"F180140b70C(FUN_18020e450
FUN_18020e770
FUN_18021aa80
FUN_18021abd0)F180140b70C",
    R"F180140b70D(LAB_180140d00
LAB_180140d3a
DAT_1803da4c0)F180140b70D",
    R"F180140b70T()F180140b70T",
    R"F180140b70F(35: if ((ulonglong)param_1[3] < uVar3) {
42: if (0xf < *(ulonglong *)(param_2 + 0x18)) {
46: for (; pbVar5 != pbVar1; pbVar5 = pbVar5 + 1) {
48: if ((0x3b < bVar2) || ((0x800000400002401U >> ((longlong)(char)bVar2 & 0x3fU) & 1) == 0)) {
50: if (uVar3 < (ulonglong)param_1[3]) {
52: if ((ulonglong)param_1[3] < 0x10) {
56: else {
62: else {
67: if (0x78 < (ulonglong)param_1[2]) {
71: while (lVar6 != 0) {
73: if (0xf < (ulonglong)param_1[3]) {
76: if ((char)*plVar4 != ' ') {
77: if (lVar6 != 0) goto LAB_180140d00;
78: break;
81: if (0xf < (ulonglong)param_1[3]) {
89: goto LAB_180140d3a;
90: while( true ) {
93: if (0xf < (ulonglong)param_1[3]) {
98: if (lVar6 == 0) break;
99: LAB_180140d00:
101: if (0xf < (ulonglong)param_1[3]) {
105: if (*(char *)(lVar6 + (longlong)plVar4) != ' ') break;
107: LAB_180140d3a:
109: return param_1;)F180140b70F",
    R"F180140b70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180140d00.
TODO: recover the declaration, type and value for global/data reference LAB_180140d3a.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180140b70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180140b70() noexcept {
    return kFunction_0x180140b70;
}

// 0x180140d70 FUN_180140d70
// source: re/dump/decompile/0x180140d70_FUN_180140d70.c
// size: 106 bytes; thunk: false
// body sha256: 0bc6ebfa4908b3009e3a864a90e77e16412c6f44c3dc1e7e3f81931e513e7112
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180140d70{
    "0x180140d70",
    "FUN_180140d70",
    R"F180140d70S(undefined FUN_180140d70())F180140d70S",
    R"B180140d70(// 0x180140d70  FUN_180140d70
// size=106 thunk=false
// signature: undefined FUN_180140d70()
// status: ok


undefined8 * FUN_180140d70(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  size_t sVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 < (char *)0x10000) {
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    param_1[3] = 0;
    sVar1 = strlen(param_2);
    FUN_18001d080(param_1,param_2,sVar1,param_4,uVar2);
  }
  return param_1;
}


)B180140d70",
    "0bc6ebfa4908b3009e3a864a90e77e16412c6f44c3dc1e7e3f81931e513e7112",
    R"F180140d70C(FUN_18001d080)F180140d70C",
    R"F180140d70D()F180140d70D",
    R"F180140d70T()F180140d70T",
    R"F180140d70F(17: if (param_2 < (char *)0x10000) {
21: else {
26: return param_1;)F180140d70F",
    R"F180140d70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180140d70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180140d70() noexcept {
    return kFunction_0x180140d70;
}

// 0x180140de0 FUN_180140de0
// source: re/dump/decompile/0x180140de0_FUN_180140de0.c
// size: 672 bytes; thunk: false
// body sha256: afab1e5535b621af559457e211baa0ac053cd1124dbf1b21bda113ad99bdfbc6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180140de0{
    "0x180140de0",
    "FUN_180140de0",
    R"F180140de0S(undefined FUN_180140de0())F180140de0S",
    R"B180140de0(// 0x180140de0  FUN_180140de0
// size=672 thunk=false
// signature: undefined FUN_180140de0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint * FUN_180140de0(uint *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  size_t sVar4;
  undefined8 uVar5;
  uint *puVar6;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  char *local_130;
  uint *local_128;
  longlong *local_120;
  undefined1 local_118 [32];
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  char local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  local_138 = 0;
  if (param_2 == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0xf;
    param_1[7] = 0;
    *(undefined1 *)param_1 = 0;
  }
  else {
    local_128 = param_1;
    plVar2 = (longlong *)FUN_18001dbf0(param_2);
    if (plVar2 == (longlong *)0x0) {
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[6] = 0xf;
      param_1[7] = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      local_130 = (char *)0x0;
      local_120 = plVar2;
      local_130 = (char *)FUN_18001e410(plVar2);
      if (((local_130 < (char *)0x10000) || (*local_130 == '\0')) &&
         ((lVar3 = (**(code **)(*plVar2 + 0x78))(plVar2), lVar3 == 0 ||
          (local_130 = *(char **)(lVar3 + 0x10), *(char **)(lVar3 + 0x10) == (char *)0x0)))) {
        local_130 = (char *)0x0;
      }
      FUN_180140d70(&local_f8,local_130);
      puVar6 = &local_f8;
      if (0xf < uStack_e0) {
        puVar6 = (uint *)CONCAT44(uStack_f4,local_f8);
      }
      cVar1 = FUN_18001ef10(plVar2,puVar6,local_d8);
      if (cVar1 == '\0') {
        lVar3 = FUN_1800e0870(&local_f8,"weapon_");
        if (lVar3 == 0) {
          uVar5 = FUN_18020e670(&local_f8,local_118,7,0xffffffffffffffff);
          FUN_18020e8a0(&local_f8,uVar5);
          FUN_18020e450(local_118);
        }
        else {
          lVar3 = FUN_1800e0870(&local_f8,"CWeapon");
          if (lVar3 == 0) {
            uVar5 = FUN_18020e670(&local_f8,local_118,7,0xffffffffffffffff);
            FUN_18020e8a0(&local_f8,uVar5);
            FUN_18020e450(local_118);
          }
          else {
            lVar3 = FUN_1800e0870(&local_f8,&DAT_18035d1f8);
            if (lVar3 == 0) {
              uVar5 = FUN_18020e670(&local_f8,local_118,2,0xffffffffffffffff);
              FUN_18020e8a0(&local_f8,uVar5);
              FUN_18020e450(local_118);
            }
          }
        }
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        *param_1 = local_f8;
        param_1[1] = uStack_f4;
        param_1[2] = uStack_f0;
        param_1[3] = uStack_ec;
        param_1[4] = (uint)local_e8;
        param_1[5] = local_e8._4_4_;
        param_1[6] = (uint)uStack_e0;
        param_1[7] = uStack_e0._4_4_;
        local_e8 = 0;
        uStack_e0 = 0xf;
        local_f8 = local_f8 & 0xffffff00;
        local_138 = 1;
        FUN_18020e450(&local_f8);
      }
      else {
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        sVar4 = strlen(local_d8);
        FUN_18001d080(param_1,local_d8,sVar4);
        local_138 = 1;
        FUN_18020e450(&local_f8);
      }
    }
  }
  return param_1;
}


)B180140de0",
    "afab1e5535b621af559457e211baa0ac053cd1124dbf1b21bda113ad99bdfbc6",
    R"F180140de0C(FUN_18001d080
FUN_18001dbf0
FUN_18001e410
FUN_18001ef10
FUN_1800e0870
FUN_180140d70
FUN_18020e450
FUN_18020e670
FUN_18020e8a0)F180140de0C",
    R"F180140de0D(DAT_18035d1f8
DAT_1803da4c0)F180140de0D",
    R"F180140de0T("CWeapon"
"weapon_")F180140de0T",
    R"F180140de0F(35: if (param_2 == 0) {
46: else {
49: if (plVar2 == (longlong *)0x0) {
62: else {
66: if (((local_130 < (char *)0x10000) || (*local_130 == '\0')) &&
73: if (0xf < uStack_e0) {
77: if (cVar1 == '\0') {
79: if (lVar3 == 0) {
84: else {
86: if (lVar3 == 0) {
91: else {
93: if (lVar3 == 0) {
122: else {
138: return param_1;)F180140de0F",
    R"F180140de0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18035d1f8.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 67: ((lVar3 = (**(code **)(*plVar2 + 0x78))(plVar2), lVar3 == 0 ||.)F180140de0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180140de0() noexcept {
    return kFunction_0x180140de0;
}

// 0x1801410a0 FUN_1801410a0
// source: re/dump/decompile/0x1801410a0_FUN_1801410a0.c
// size: 2741 bytes; thunk: false
// body sha256: 239fe1509abf43fc0f6494f382603d970c3b00b397e0541b2c0eeaa67f52b890
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801410a0{
    "0x1801410a0",
    "FUN_1801410a0",
    R"F1801410a0S(undefined FUN_1801410a0())F1801410a0S",
    R"B1801410a0(// 0x1801410a0  FUN_1801410a0
// size=2741 thunk=false
// signature: undefined FUN_1801410a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801410a0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  code *pcVar4;
  void *pvVar5;
  char cVar6;
  int iVar7;
  errno_t eVar8;
  BOOL BVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  byte ****ppppbVar13;
  undefined1 *puVar14;
  __time64_t _Var15;
  size_t sVar16;
  longlong *lp;
  longlong *plVar17;
  char *pcVar18;
  longlong *plVar19;
  float *pfVar20;
  float *pfVar21;
  byte ****ppppbVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  ulonglong _Size;
  byte *pbVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_468 [8];
  undefined1 auStack_460 [40];
  undefined4 local_438;
  undefined8 *local_428;
  undefined4 local_418;
  undefined4 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  byte ***local_340 [2];
  ulonglong local_330;
  ulonglong uStack_328;
  char local_2e8 [680];
  ulonglong local_40;
  
  puVar24 = auStack_468;
  puVar14 = auStack_468;
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_468;
  local_410 = 0;
  *(undefined4 *)(param_1 + 0x3d) = DAT_180409844;
  local_438 = param_4;
  local_428 = param_1;
  local_418 = param_3;
  local_408 = param_2;
  if (DAT_1803fa668 != (longlong *)0x0) {
    uVar11 = (**(code **)(*DAT_1803fa668 + 0x198))();
    FUN_180140d70(local_340,uVar11);
    ppppbVar13 = local_340;
    if (0xf < uStack_328) {
      ppppbVar13 = (byte ****)local_340[0];
    }
    if (local_330 == 0) {
LAB_1801411ef:
      lVar12 = -1;
    }
    else {
      lVar12 = -1;
      if (local_330 - 1 != -1) {
        lVar12 = local_330 - 1;
      }
      if (lVar12 + 3U < 0x10) {
        memset(local_2e8,0,0x100);
        pbVar25 = &DAT_18035d1fc;
        do {
          local_2e8[*pbVar25] = '\x01';
          pbVar25 = pbVar25 + 1;
        } while (pbVar25 != &DAT_18035d1fe);
        ppppbVar22 = (byte ****)((longlong)ppppbVar13 + lVar12);
        cVar6 = local_2e8[*(byte *)ppppbVar22];
        while (cVar6 == '\0') {
          if (ppppbVar22 == ppppbVar13) goto LAB_1801411ef;
          ppppbVar22 = (byte ****)((longlong)ppppbVar22 + -1);
          cVar6 = local_2e8[*(byte *)ppppbVar22];
        }
        lVar12 = (longlong)ppppbVar22 - (longlong)ppppbVar13;
      }
      else {
        lVar12 = thunk_FUN_1802d4e90(ppppbVar13,lVar12 + 1,&DAT_18035d1fc,2);
      }
    }
    puVar24 = auStack_468;
    if (lVar12 != -1) {
      uVar23 = lVar12 + 1;
      local_400 = 0;
      uStack_3f8 = 0;
      local_3f0 = 0;
      uStack_3e8 = 0;
      if (local_330 < uVar23) {
                    /* WARNING: Subroutine does not return */
        FUN_18022ec00();
      }
      lVar12 = -1;
      if (local_330 - uVar23 != -1) {
        lVar12 = local_330 - uVar23;
      }
      ppppbVar13 = local_340;
      if (0xf < uStack_328) {
        ppppbVar13 = (byte ****)local_340[0];
      }
      FUN_18001d080(&local_400,(byte *)((longlong)ppppbVar13 + uVar23),lVar12);
      local_410 = 2;
      if (0xf < uStack_328) {
        ppppbVar13 = (byte ****)local_340[0];
        puVar14 = auStack_468;
        if ((0xfff < uStack_328 + 1) &&
           (ppppbVar13 = (byte ****)local_340[0][-1], puVar14 = auStack_468,
           (byte *)0x1f < (byte *)((longlong)local_340[0] + (-8 - (longlong)ppppbVar13)))) {
          pcVar3 = (code *)swi(0x29);
          ppppbVar13 = (byte ****)(*pcVar3)(5);
          puVar14 = auStack_460;
        }
        *(undefined8 *)(puVar14 + -8) = 0x1801412ab;
        free(ppppbVar13);
      }
      *(undefined8 *)(puVar14 + 0x138) = 0;
      *(undefined8 *)(puVar14 + 0x140) = 0xf;
      puVar14[0x128] = 0;
      *(undefined4 *)(puVar14 + 0x128) = *(undefined4 *)(puVar14 + 0x68);
      *(undefined4 *)(puVar14 + 300) = *(undefined4 *)(puVar14 + 0x6c);
      *(undefined4 *)(puVar14 + 0x130) = *(undefined4 *)(puVar14 + 0x70);
      *(undefined4 *)(puVar14 + 0x134) = *(undefined4 *)(puVar14 + 0x74);
      *(undefined4 *)(puVar14 + 0x138) = *(undefined4 *)(puVar14 + 0x78);
      *(undefined4 *)(puVar14 + 0x13c) = *(undefined4 *)(puVar14 + 0x7c);
      *(undefined4 *)(puVar14 + 0x140) = *(undefined4 *)(puVar14 + 0x80);
      *(undefined4 *)(puVar14 + 0x144) = *(undefined4 *)(puVar14 + 0x84);
      *(undefined8 *)(puVar14 + 0x78) = 0;
      *(undefined8 *)(puVar14 + 0x80) = 0xf;
      puVar14[0x68] = 0;
      *(undefined4 *)(puVar14 + 0x58) = 0;
      *(undefined8 *)(puVar14 + -8) = 0x180141308;
      FUN_18020e450(puVar14 + 0x68);
      puVar24 = puVar14;
    }
    if (4 < *(ulonglong *)(puVar24 + 0x138)) {
      puVar14 = puVar24 + 0x128;
      if (0xf < *(ulonglong *)(puVar24 + 0x140)) {
        puVar14 = *(undefined1 **)(puVar24 + 0x128);
      }
      *(undefined8 *)(puVar24 + -8) = 0x180141348;
      iVar7 = _stricmp(puVar14 + (*(ulonglong *)(puVar24 + 0x138) - 4),".bsp");
      if (iVar7 == 0) {
        uVar2 = *(ulonglong *)(puVar24 + 0x138);
        uVar23 = uVar2 - 4;
        if (uVar2 < uVar23) {
          _Size = uVar23 - uVar2;
          if (*(ulonglong *)(puVar24 + 0x140) - uVar2 < _Size) {
            puVar24[0x20] = 0;
            *(undefined8 *)(puVar24 + -8) = 0x1801413f0;
            FUN_18022a720(puVar24 + 0x128,_Size);
          }
          else {
            *(ulonglong *)(puVar24 + 0x138) = uVar23;
            puVar14 = puVar24 + 0x128;
            if (0xf < *(ulonglong *)(puVar24 + 0x140)) {
              puVar14 = *(undefined1 **)(puVar24 + 0x128);
            }
            *(undefined8 *)(puVar24 + -8) = 0x1801413cd;
            memset(puVar14 + uVar2,0,_Size);
            puVar14[uVar2 + _Size] = 0;
          }
        }
        else {
          *(ulonglong *)(puVar24 + 0x138) = uVar23;
          puVar14 = puVar24 + 0x128;
          if (0xf < *(ulonglong *)(puVar24 + 0x140)) {
            puVar14 = *(undefined1 **)(puVar24 + 0x128);
          }
          puVar14[uVar23] = 0;
        }
      }
    }
    if (param_1 + 0x34 != (undefined8 *)(puVar24 + 0x128)) {
      puVar14 = puVar24 + 0x128;
      if (0xf < *(ulonglong *)(puVar24 + 0x140)) {
        puVar14 = *(undefined1 **)(puVar24 + 0x128);
      }
      *(undefined8 *)(puVar24 + -8) = 0x18014142b;
      FUN_180212700(param_1 + 0x34,puVar14,*(undefined8 *)(puVar24 + 0x138));
    }
    *(undefined8 *)(puVar24 + -8) = 0x180141439;
    FUN_18020e450(puVar24 + 0x128);
  }
  uVar10 = 0xffffffff;
  *(undefined8 *)(puVar24 + -8) = 0x18014144a;
  _Var15 = _time64((__time64_t *)0x0);
  *(__time64_t *)(puVar24 + 0x148) = _Var15;
  *(undefined8 *)(puVar24 + 0x158) = 0;
  *(undefined8 *)(puVar24 + 0x160) = 0;
  *(undefined8 *)(puVar24 + 0x168) = 0;
  *(undefined8 *)(puVar24 + 0x170) = 0;
  *(undefined4 *)(puVar24 + 0x178) = 0;
  *(undefined8 *)(puVar24 + -8) = 0x180141484;
  eVar8 = _localtime64_s((tm *)(puVar24 + 0x158),(__time64_t *)(puVar24 + 0x148));
  if (eVar8 == 0) {
    *(undefined4 *)(puVar24 + 0x20) = *(undefined4 *)(puVar24 + 0x15c);
    *(undefined8 *)(puVar24 + -8) = 0x1801414b4;
    FUN_180012ac0(puVar24 + 0x420,8,"%02d:%02d",*(undefined4 *)(puVar24 + 0x160));
    *(undefined8 *)(puVar24 + -8) = 0x1801414c1;
    sVar16 = strlen(puVar24 + 0x420);
    *(undefined8 *)(puVar24 + -8) = 0x1801414d8;
    FUN_180212700(param_1 + 0x38,puVar24 + 0x420,sVar16);
  }
  if (DAT_1803fa668 == (longlong *)0x0) {
    iVar7 = -1;
  }
  else {
    pcVar3 = *(code **)(*DAT_1803fa668 + 0x60);
    *(undefined8 *)(puVar24 + -8) = 0x1801414ed;
    iVar7 = (*pcVar3)(DAT_1803fa668);
  }
  *(int *)(puVar24 + 0x5c) = iVar7;
  *(undefined8 *)(puVar24 + 0x38) = 0;
  pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
  pcVar4 = *(code **)(*DAT_1803fa668 + 0x60);
  *(undefined8 *)(puVar24 + -8) = 0x18014151d;
  (*pcVar4)(DAT_1803fa668);
  *(undefined8 *)(puVar24 + -8) = 0x180141528;
  lp = (longlong *)(*pcVar3)(DAT_1803fa360);
  plVar17 = DAT_1803fa668;
  *(longlong **)(puVar24 + 0x38) = lp;
  if (DAT_1803fa668 == (longlong *)0x0) {
    if (0 < iVar7) goto LAB_1801415d0;
  }
  else if (0 < iVar7) {
    *(undefined8 *)(puVar24 + -8) = 0x180141572;
    memset(puVar24 + 0x2d0,0,0x144);
    pcVar3 = *(code **)(*plVar17 + 0x40);
    *(undefined8 *)(puVar24 + -8) = 0x180141586;
    cVar6 = (*pcVar3)(plVar17,iVar7,puVar24 + 0x2d0);
    if (cVar6 != '\0') {
      *(undefined8 *)(puVar24 + -8) = 0x18014159f;
      uVar11 = FUN_180140d70(puVar24 + 0xa8,puVar24 + 0x2d0);
      *(undefined8 *)(puVar24 + -8) = 0x1801415af;
      FUN_18020e8a0(param_1 + 0x1c,uVar11);
      *(undefined8 *)(puVar24 + -8) = 0x1801415bd;
      FUN_18020e450(puVar24 + 0xa8);
      uVar10 = *(undefined4 *)(puVar24 + 0x350);
    }
LAB_1801415d0:
    if (DAT_1803fcf68 != (code *)0x0) {
      *(undefined8 *)(puVar24 + -8) = 0x1801415e4;
      uVar11 = (*DAT_1803fcf68)(iVar7,uVar10);
      *(undefined8 *)(puVar24 + -8) = 0x1801415f4;
      uVar11 = FUN_180140d70(puVar24 + 200,uVar11);
      *(undefined8 *)(puVar24 + -8) = 0x180141604;
      FUN_18020e8a0(param_1 + 0x20,uVar11);
      *(undefined8 *)(puVar24 + -8) = 0x180141612;
      FUN_18020e450(puVar24 + 200);
    }
    *(undefined8 *)(puVar24 + -8) = 0x18014161d;
    uVar11 = FUN_1800395c0(iVar7,uVar10);
    *(undefined8 *)(puVar24 + -8) = 0x18014162d;
    FUN_180140d70(puVar24 + 0xe8,uVar11);
    *(undefined8 *)(puVar24 + -8) = 0x18014163d;
    FUN_18020e8a0(param_1 + 0x24);
    *(undefined8 *)(puVar24 + -8) = 0x18014164b;
    FUN_18020e450(puVar24 + 0xe8);
  }
  if (param_1[0x22] == 0) {
    plVar17 = param_1 + 0x1c;
    if (param_1 + 0x20 != plVar17) {
      uVar11 = param_1[0x1e];
      if (0xf < (ulonglong)param_1[0x1f]) {
        plVar17 = (longlong *)*plVar17;
      }
      *(undefined8 *)(puVar24 + -8) = 0x18014168f;
      FUN_180212700(param_1 + 0x20,plVar17,uVar11);
    }
  }
  if (lp != (longlong *)0x0) {
    *(undefined8 *)(puVar24 + -8) = 0x1801416ad;
    BVar9 = IsBadReadPtr(lp,8);
    if (BVar9 == 0) {
      pvVar5 = (void *)*lp;
      *(undefined8 *)(puVar24 + -8) = 0x1801416c3;
      BVar9 = IsBadReadPtr(pvVar5,8);
      if (BVar9 == 0) {
        pcVar3 = *(code **)(*lp + 0x20);
        *(undefined8 *)(puVar24 + -8) = 0x1801416d4;
        plVar17 = (longlong *)(*pcVar3)(lp);
        if (plVar17 != (longlong *)0x0) {
          pcVar3 = *(code **)(*plVar17 + 0x40);
          *(undefined8 *)(puVar24 + -8) = 0x1801416e6;
          cVar6 = (*pcVar3)(plVar17);
          if (cVar6 == '\0') {
            *(undefined8 *)(puVar24 + -8) = 0x1801416f6;
            uVar11 = FUN_18001f960(lp);
            *(undefined8 *)(puVar24 + -8) = 0x180141706;
            uVar11 = FUN_180140d70(puVar24 + 0x108,uVar11);
            *(undefined8 *)(puVar24 + -8) = 0x180141716;
            FUN_18020e8a0(param_1 + 0x28,uVar11);
            *(undefined8 *)(puVar24 + -8) = 0x180141724;
            FUN_18020e450(puVar24 + 0x108);
            pcVar3 = DAT_1803fed38;
            if (DAT_1803fed38 == (code *)0x0) {
              pcVar18 = "unknown";
            }
            else {
              *(undefined8 *)(puVar24 + -8) = 0x180141751;
              uVar10 = FUN_18001c560(lp);
              *(undefined8 *)(puVar24 + -8) = 0x180141755;
              pcVar18 = (char *)(*pcVar3)(uVar10);
            }
            *(undefined8 *)(puVar24 + -8) = 0x18014176c;
            uVar11 = FUN_180140d70(puVar24 + 0x88,pcVar18);
            *(undefined8 *)(puVar24 + -8) = 0x18014177c;
            FUN_18020e8a0(param_1 + 0x2c,uVar11);
            *(undefined8 *)(puVar24 + -8) = 0x18014178a;
            FUN_18020e450(puVar24 + 0x88);
            *(undefined8 *)(puVar24 + -8) = 0x1801417a6;
            uVar10 = FUN_18001c680(lp);
            *(undefined4 *)(param_1 + 0x3c) = uVar10;
            *(undefined8 *)(puVar24 + -8) = 0x1801417c7;
            uVar10 = FUN_18001cdd0(lp);
            *(undefined4 *)((longlong)param_1 + 0x1e4) = uVar10;
            *(undefined8 *)(puVar24 + -8) = 0x1801417f0;
            FUN_180140de0(puVar24 + 0x88,lp);
            *(undefined8 *)(puVar24 + -8) = 0x180141800;
            FUN_18020e8a0(param_1 + 0x30);
            *(undefined8 *)(puVar24 + -8) = 0x18014180e;
            FUN_18020e450(puVar24 + 0x88);
          }
        }
      }
    }
  }
  pcVar18 = "unknown";
  plVar17 = *(longlong **)(puVar24 + 0x60);
  if (param_1 != plVar17) {
    plVar19 = plVar17;
    if (0xf < (ulonglong)plVar17[3]) {
      plVar19 = (longlong *)*plVar17;
    }
    lVar12 = plVar17[2];
    *(undefined8 *)(puVar24 + -8) = 0x18014184a;
    FUN_180212700(param_1,plVar19,lVar12);
  }
  if (*(int *)(puVar24 + 0x30) < 1) {
    if ((*(int *)(puVar24 + 0x50) < 1) || (DAT_1803fa668 == (longlong *)0x0)) goto LAB_180141ba6;
    pcVar3 = *(code **)(*DAT_1803fa668 + 0x48);
    *(undefined8 *)(puVar24 + -8) = 0x180141876;
    iVar7 = (*pcVar3)(DAT_1803fa668);
    *(int *)(puVar24 + 0x30) = iVar7;
    if (iVar7 < 1) goto LAB_180141ba6;
  }
  else {
    iVar7 = *(int *)(puVar24 + 0x30);
    *(int *)(puVar24 + 0x30) = iVar7;
  }
  plVar17 = DAT_1803fa668;
  if (DAT_1803fa668 != (longlong *)0x0) {
    iVar26 = *(int *)(puVar24 + 0x50);
    *(undefined8 *)(puVar24 + -8) = 0x1801418bb;
    memset(puVar24 + 0x180,0,0x144);
    pcVar3 = *(code **)(*plVar17 + 0x40);
    *(undefined8 *)(puVar24 + -8) = 0x1801418cf;
    cVar6 = (*pcVar3)(plVar17,iVar7,puVar24 + 0x180);
    if (cVar6 != '\0') {
      if (puVar24[0x180] != '\0') {
        *(undefined8 *)(puVar24 + -8) = 0x1801418ea;
        sVar16 = strlen(puVar24 + 0x180);
        *(undefined8 *)(puVar24 + -8) = 0x1801418fd;
        FUN_180212700(param_1,puVar24 + 0x180,sVar16);
      }
      if (iVar26 < 1) {
        iVar26 = *(int *)(puVar24 + 0x200);
      }
      *(undefined8 *)(puVar24 + -8) = 0x18014191f;
      uVar11 = FUN_180140d70(puVar24 + 0x88,puVar24 + 0x204);
      *(undefined8 *)(puVar24 + -8) = 0x18014192f;
      FUN_18020e8a0(param_1 + 0x14,uVar11);
      *(undefined8 *)(puVar24 + -8) = 0x18014193d;
      FUN_18020e450(puVar24 + 0x88);
    }
    if (DAT_1803fcf68 != (code *)0x0) {
      *(undefined8 *)(puVar24 + -8) = 0x180141952;
      uVar11 = (*DAT_1803fcf68)(iVar7,iVar26);
      *(undefined8 *)(puVar24 + -8) = 0x180141962;
      uVar11 = FUN_180140d70(puVar24 + 0x108,uVar11);
      *(undefined8 *)(puVar24 + -8) = 0x18014196f;
      FUN_18020e8a0(param_1 + 4,uVar11);
      *(undefined8 *)(puVar24 + -8) = 0x18014197d;
      FUN_18020e450(puVar24 + 0x108);
    }
    *(undefined8 *)(puVar24 + -8) = 0x180141988;
    uVar11 = FUN_1800395c0(iVar7,iVar26);
    *(undefined8 *)(puVar24 + -8) = 0x180141998;
    uVar11 = FUN_180140d70(puVar24 + 0xe8,uVar11);
    *(undefined8 *)(puVar24 + -8) = 0x1801419a5;
    FUN_18020e8a0(param_1 + 8,uVar11);
    *(undefined8 *)(puVar24 + -8) = 0x1801419b3;
    FUN_18020e450(puVar24 + 0xe8);
    if (DAT_1803fa360 != (longlong *)0x0) {
      pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
      *(undefined8 *)(puVar24 + -8) = 0x1801419e5;
      plVar17 = (longlong *)(*pcVar3)(DAT_1803fa360,iVar7);
      *(longlong **)(puVar24 + 0x60) = plVar17;
      if (plVar17 != (longlong *)0x0) {
        *(undefined8 *)(puVar24 + -8) = 0x180141a04;
        BVar9 = IsBadReadPtr(plVar17,8);
        if (BVar9 == 0) {
          pvVar5 = (void *)*plVar17;
          *(undefined8 *)(puVar24 + -8) = 0x180141a1a;
          BVar9 = IsBadReadPtr(pvVar5,8);
          if (BVar9 == 0) {
            pcVar3 = *(code **)(*plVar17 + 0x20);
            *(undefined8 *)(puVar24 + -8) = 0x180141a2b;
            plVar19 = (longlong *)(*pcVar3)(plVar17);
            if (plVar19 != (longlong *)0x0) {
              pcVar3 = *(code **)(*plVar19 + 0x40);
              *(undefined8 *)(puVar24 + -8) = 0x180141a3d;
              cVar6 = (*pcVar3)(plVar19);
              if (cVar6 == '\0') {
                *(undefined8 *)(puVar24 + -8) = 0x180141a4d;
                uVar11 = FUN_18001f960(plVar17);
                *(undefined8 *)(puVar24 + -8) = 0x180141a5d;
                uVar11 = FUN_180140d70(puVar24 + 200,uVar11);
                *(undefined8 *)(puVar24 + -8) = 0x180141a6a;
                FUN_18020e8a0(param_1 + 0xc,uVar11);
                *(undefined8 *)(puVar24 + -8) = 0x180141a78;
                FUN_18020e450(puVar24 + 200);
                pcVar3 = DAT_1803fed38;
                if (DAT_1803fed38 != (code *)0x0) {
                  *(undefined8 *)(puVar24 + -8) = 0x180141aa7;
                  uVar10 = FUN_18001c560(plVar17);
                  *(undefined8 *)(puVar24 + -8) = 0x180141aac;
                  pcVar18 = (char *)(*pcVar3)(uVar10);
                }
                *(undefined8 *)(puVar24 + -8) = 0x180141abf;
                uVar11 = FUN_180140d70(puVar24 + 0xa8,pcVar18);
                *(undefined8 *)(puVar24 + -8) = 0x180141acf;
                FUN_18020e8a0(param_1 + 0x10,uVar11);
                *(undefined8 *)(puVar24 + -8) = 0x180141add;
                FUN_18020e450(puVar24 + 0xa8);
                if (lp != (longlong *)0x0) {
                  *(undefined8 *)(puVar24 + -8) = 0x180141b00;
                  pfVar20 = (float *)FUN_18001d440(lp);
                  *(undefined8 *)(puVar24 + -8) = 0x180141b0b;
                  pfVar21 = (float *)FUN_18001d440(plVar17);
                  fVar28 = *pfVar20 - *pfVar21;
                  *(float *)(puVar24 + 0x148) = fVar28;
                  fVar27 = pfVar20[1] - pfVar21[1];
                  *(float *)(puVar24 + 0x14c) = fVar27;
                  fVar29 = pfVar20[2] - pfVar21[2];
                  *(float *)(puVar24 + 0x150) = fVar29;
                  *(undefined8 *)(puVar24 + -8) = 0x180141b5f;
                  fVar27 = (float)(*(code *)PTR_FUN_1803da018)
                                            (fVar27 * fVar27 + fVar28 * fVar28 + fVar29 * fVar29);
                  *(undefined8 *)(puVar24 + -8) = 0x180141b80;
                  uVar11 = FUN_180013ba0(puVar24 + 0x88,
                                         (int)(fVar27 / DAT_1803810ac + DAT_180380ac0));
                  *(undefined8 *)(puVar24 + -8) = 0x180141b90;
                  FUN_18020e8a0(param_1 + 0x18,uVar11);
                  *(undefined8 *)(puVar24 + -8) = 0x180141b9e;
                  FUN_18020e450(puVar24 + 0x88);
                }
              }
            }
          }
        }
      }
    }
  }
LAB_180141ba6:
  if ((param_1[6] == 0) && (puVar1 = param_1 + 4, puVar1 != param_1)) {
    uVar11 = param_1[2];
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    *(undefined8 *)(puVar24 + -8) = 0x180141bcc;
    FUN_180212700(puVar1,param_1,uVar11);
  }
  *(undefined8 *)(puVar24 + -8) = 0x180141bdc;
  return;
}


)B1801410a0",
    "239fe1509abf43fc0f6494f382603d970c3b00b397e0541b2c0eeaa67f52b890",
    R"F1801410a0C(FUN_180012ac0
FUN_180013ba0
FUN_18001c560
FUN_18001c680
FUN_18001cdd0
FUN_18001d080
FUN_18001d440
FUN_18001f960
FUN_1800395c0
FUN_180140d70
FUN_180140de0
FUN_18020e450
FUN_18020e8a0
FUN_180212700
FUN_18022a720
FUN_18022ec00)F1801410a0C",
    R"F1801410a0D(LAB_1801411ef
LAB_1801415d0
LAB_180141ba6
DAT_18035d1fc
DAT_18035d1fe
DAT_180380ac0
DAT_1803810ac
DAT_1803da4c0
DAT_1803fa360
DAT_1803fa668
DAT_1803fcf68
DAT_1803fed38
DAT_180409844)F1801410a0D",
    R"F1801410a0T(".bsp"
"unknown"
"%02d:%02d")F1801410a0T",
    R"F1801410a0F(69: if (DAT_1803fa668 != (longlong *)0x0) {
73: if (0xf < uStack_328) {
76: if (local_330 == 0) {
77: LAB_1801411ef:
80: else {
82: if (local_330 - 1 != -1) {
85: if (lVar12 + 3U < 0x10) {
88: do {
94: while (cVar6 == '\0') {
95: if (ppppbVar22 == ppppbVar13) goto LAB_1801411ef;
101: else {
106: if (lVar12 != -1) {
112: if (local_330 < uVar23) {
117: if (local_330 - uVar23 != -1) {
121: if (0xf < uStack_328) {
126: if (0xf < uStack_328) {
129: if ((0xfff < uStack_328 + 1) &&
158: if (4 < *(ulonglong *)(puVar24 + 0x138)) {
160: if (0xf < *(ulonglong *)(puVar24 + 0x140)) {
165: if (iVar7 == 0) {
168: if (uVar2 < uVar23) {
170: if (*(ulonglong *)(puVar24 + 0x140) - uVar2 < _Size) {
175: else {
178: if (0xf < *(ulonglong *)(puVar24 + 0x140)) {
186: else {
189: if (0xf < *(ulonglong *)(puVar24 + 0x140)) {
196: if (param_1 + 0x34 != (undefined8 *)(puVar24 + 0x128)) {
198: if (0xf < *(ulonglong *)(puVar24 + 0x140)) {
218: if (eVar8 == 0) {
227: if (DAT_1803fa668 == (longlong *)0x0) {
230: else {
245: if (DAT_1803fa668 == (longlong *)0x0) {
246: if (0 < iVar7) goto LAB_1801415d0;
248: else if (0 < iVar7) {
254: if (cVar6 != '\0') {
263: LAB_1801415d0:
264: if (DAT_1803fcf68 != (code *)0x0) {
283: if (param_1[0x22] == 0) {
285: if (param_1 + 0x20 != plVar17) {
287: if (0xf < (ulonglong)param_1[0x1f]) {
294: if (lp != (longlong *)0x0) {
297: if (BVar9 == 0) {
301: if (BVar9 == 0) {
305: if (plVar17 != (longlong *)0x0) {
309: if (cVar6 == '\0') {
319: if (DAT_1803fed38 == (code *)0x0) {
322: else {
353: if (param_1 != plVar17) {
355: if (0xf < (ulonglong)plVar17[3]) {
362: if (*(int *)(puVar24 + 0x30) < 1) {
363: if ((*(int *)(puVar24 + 0x50) < 1) || (DAT_1803fa668 == (longlong *)0x0)) goto LAB_180141ba6;
368: if (iVar7 < 1) goto LAB_180141ba6;
370: else {
375: if (DAT_1803fa668 != (longlong *)0x0) {
382: if (cVar6 != '\0') {
383: if (puVar24[0x180] != '\0') {
389: if (iVar26 < 1) {
399: if (DAT_1803fcf68 != (code *)0x0) {
417: if (DAT_1803fa360 != (longlong *)0x0) {
422: if (plVar17 != (longlong *)0x0) {
425: if (BVar9 == 0) {
429: if (BVar9 == 0) {
433: if (plVar19 != (longlong *)0x0) {
437: if (cVar6 == '\0') {
447: if (DAT_1803fed38 != (code *)0x0) {
459: if (lp != (longlong *)0x0) {
488: LAB_180141ba6:
489: if ((param_1[6] == 0) && (puVar1 = param_1 + 4, puVar1 != param_1)) {
491: if (0xf < (ulonglong)param_1[3]) {
498: return;)F1801410a0F",
    R"F1801410a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1801411ef.
TODO: recover the declaration, type and value for global/data reference LAB_1801415d0.
TODO: recover the declaration, type and value for global/data reference LAB_180141ba6.
TODO: recover the declaration, type and value for global/data reference DAT_18035d1fc.
TODO: recover the declaration, type and value for global/data reference DAT_18035d1fe.
TODO: recover the declaration, type and value for global/data reference DAT_180380ac0.
TODO: recover the declaration, type and value for global/data reference DAT_1803810ac.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcf68.
TODO: recover the declaration, type and value for global/data reference DAT_1803fed38.
TODO: recover the declaration, type and value for global/data reference DAT_180409844.
TODO: resolve the indirect call in body 70: uVar11 = (**(code **)(*DAT_1803fa668 + 0x198))();.
TODO: resolve the indirect call in body 132: pcVar3 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 133: ppppbVar13 = (byte ****)(*pcVar3)(5);.
TODO: resolve the indirect call in body 231: pcVar3 = *(code **)(*DAT_1803fa668 + 0x60);.
TODO: resolve the indirect call in body 233: iVar7 = (*pcVar3)(DAT_1803fa668);.
TODO: resolve the indirect call in body 237: pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);.
TODO: resolve the indirect call in body 238: pcVar4 = *(code **)(*DAT_1803fa668 + 0x60);.
TODO: resolve the indirect call in body 240: (*pcVar4)(DAT_1803fa668);.
TODO: resolve the indirect call in body 242: lp = (longlong *)(*pcVar3)(DAT_1803fa360);.
TODO: resolve the indirect call in body 251: pcVar3 = *(code **)(*plVar17 + 0x40);.
TODO: resolve the indirect call in body 253: cVar6 = (*pcVar3)(plVar17,iVar7,puVar24 + 0x2d0);.
TODO: resolve the indirect call in body 264: if (DAT_1803fcf68 != (code *)0x0) {.
TODO: resolve the indirect call in body 266: uVar11 = (*DAT_1803fcf68)(iVar7,uVar10);.
TODO: resolve the indirect call in body 302: pcVar3 = *(code **)(*lp + 0x20);.
TODO: resolve the indirect call in body 304: plVar17 = (longlong *)(*pcVar3)(lp);.
TODO: resolve the indirect call in body 306: pcVar3 = *(code **)(*plVar17 + 0x40);.
TODO: resolve the indirect call in body 308: cVar6 = (*pcVar3)(plVar17);.
TODO: resolve the indirect call in body 319: if (DAT_1803fed38 == (code *)0x0) {.
TODO: resolve the indirect call in body 326: pcVar18 = (char *)(*pcVar3)(uVar10);.
TODO: resolve the indirect call in body 364: pcVar3 = *(code **)(*DAT_1803fa668 + 0x48);.
TODO: resolve the indirect call in body 366: iVar7 = (*pcVar3)(DAT_1803fa668);.
TODO: resolve the indirect call in body 379: pcVar3 = *(code **)(*plVar17 + 0x40);.
TODO: resolve the indirect call in body 381: cVar6 = (*pcVar3)(plVar17,iVar7,puVar24 + 0x180);.
TODO: resolve the indirect call in body 399: if (DAT_1803fcf68 != (code *)0x0) {.
TODO: resolve the indirect call in body 401: uVar11 = (*DAT_1803fcf68)(iVar7,iVar26);.
TODO: resolve the indirect call in body 418: pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);.
TODO: resolve the indirect call in body 420: plVar17 = (longlong *)(*pcVar3)(DAT_1803fa360,iVar7);.
TODO: resolve the indirect call in body 430: pcVar3 = *(code **)(*plVar17 + 0x20);.
TODO: resolve the indirect call in body 432: plVar19 = (longlong *)(*pcVar3)(plVar17);.
TODO: resolve the indirect call in body 434: pcVar3 = *(code **)(*plVar19 + 0x40);.
TODO: resolve the indirect call in body 436: cVar6 = (*pcVar3)(plVar19);.
TODO: resolve the indirect call in body 447: if (DAT_1803fed38 != (code *)0x0) {.
TODO: resolve the indirect call in body 451: pcVar18 = (char *)(*pcVar3)(uVar10);.
TODO: resolve the indirect call in body 471: fVar27 = (float)(*(code *)PTR_FUN_1803da018).)F1801410a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801410a0() noexcept {
    return kFunction_0x1801410a0;
}

// 0x180141c00 FUN_180141c00
// source: re/dump/decompile/0x180141c00_FUN_180141c00.c
// size: 1568 bytes; thunk: false
// body sha256: 49d43b234558f89c7a6a864aed3976fbf4b7afa0e964f6aedec96c424b5ab846
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180141c00{
    "0x180141c00",
    "FUN_180141c00",
    R"F180141c00S(undefined FUN_180141c00())F180141c00S",
    R"B180141c00(// 0x180141c00  FUN_180141c00
// size=1568 thunk=false
// signature: undefined FUN_180141c00()
// status: ok


undefined4 FUN_180141c00(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 local_28 [32];
  
  pcVar2 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar2 = *(char **)param_1;
  }
  iVar1 = _stricmp(pcVar2,"name");
  if (iVar1 != 0) {
    pcVar2 = param_1;
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      pcVar2 = *(char **)param_1;
    }
    iVar1 = _stricmp(pcVar2,"nick");
    if (iVar1 != 0) {
      pcVar2 = param_1;
      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
        pcVar2 = *(char **)param_1;
      }
      iVar1 = _stricmp(pcVar2,"rpname");
      if (iVar1 == 0) {
LAB_1801421e7:
        param_2 = param_2 + 4;
      }
      else {
        pcVar2 = param_1;
        if (0xf < *(ulonglong *)(param_1 + 0x18)) {
          pcVar2 = *(char **)param_1;
        }
        iVar1 = _stricmp(pcVar2,"rp_name");
        if (iVar1 == 0) goto LAB_1801421e7;
        pcVar2 = param_1;
        if (0xf < *(ulonglong *)(param_1 + 0x18)) {
          pcVar2 = *(char **)param_1;
        }
        iVar1 = _stricmp(pcVar2,"rp");
        if (iVar1 == 0) goto LAB_1801421e7;
        pcVar2 = param_1;
        if (0xf < *(ulonglong *)(param_1 + 0x18)) {
          pcVar2 = *(char **)param_1;
        }
        iVar1 = _stricmp(pcVar2,"job");
        if (iVar1 == 0) {
          param_2 = param_2 + 8;
          goto LAB_180141ce1;
        }
        pcVar2 = param_1;
        if (0xf < *(ulonglong *)(param_1 + 0x18)) {
          pcVar2 = *(char **)param_1;
        }
        iVar1 = _stricmp(pcVar2,"group");
        if (iVar1 == 0) {
LAB_1801421de:
          param_2 = param_2 + 0xc;
        }
        else {
          pcVar2 = param_1;
          if (0xf < *(ulonglong *)(param_1 + 0x18)) {
            pcVar2 = *(char **)param_1;
          }
          iVar1 = _stricmp(pcVar2,"usergroup");
          if (iVar1 == 0) goto LAB_1801421de;
          pcVar2 = param_1;
          if (0xf < *(ulonglong *)(param_1 + 0x18)) {
            pcVar2 = *(char **)param_1;
          }
          iVar1 = _stricmp(pcVar2,"rank");
          if (iVar1 == 0) goto LAB_1801421de;
          pcVar2 = param_1;
          if (0xf < *(ulonglong *)(param_1 + 0x18)) {
            pcVar2 = *(char **)param_1;
          }
          iVar1 = _stricmp(pcVar2,"team");
          if (iVar1 == 0) {
            param_2 = param_2 + 0x10;
            goto LAB_180141ce1;
          }
          pcVar2 = param_1;
          if (0xf < *(ulonglong *)(param_1 + 0x18)) {
            pcVar2 = *(char **)param_1;
          }
          iVar1 = _stricmp(pcVar2,"steamid");
          if (iVar1 == 0) {
LAB_1801421d2:
            param_2 = param_2 + 0x14;
          }
          else {
            pcVar2 = param_1;
            if (0xf < *(ulonglong *)(param_1 + 0x18)) {
              pcVar2 = *(char **)param_1;
            }
            iVar1 = _stricmp(pcVar2,"steam");
            if (iVar1 == 0) goto LAB_1801421d2;
            pcVar2 = param_1;
            if (0xf < *(ulonglong *)(param_1 + 0x18)) {
              pcVar2 = *(char **)param_1;
            }
            iVar1 = _stricmp(pcVar2,"distance");
            if (iVar1 == 0) {
LAB_1801421c6:
              param_2 = param_2 + 0x18;
            }
            else {
              pcVar2 = param_1;
              if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                pcVar2 = *(char **)param_1;
              }
              iVar1 = _stricmp(pcVar2,"dist");
              if (iVar1 == 0) goto LAB_1801421c6;
              pcVar2 = param_1;
              if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                pcVar2 = *(char **)param_1;
              }
              iVar1 = _stricmp(pcVar2,"weapon");
              if (iVar1 == 0) {
LAB_1801421ba:
                param_2 = param_2 + 0x30;
              }
              else {
                pcVar2 = param_1;
                if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                  pcVar2 = *(char **)param_1;
                }
                iVar1 = _stricmp(pcVar2,"wep");
                if (iVar1 == 0) goto LAB_1801421ba;
                pcVar2 = param_1;
                if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                  pcVar2 = *(char **)param_1;
                }
                iVar1 = _stricmp(pcVar2,"kills");
                if (iVar1 == 0) {
                  uVar3 = FUN_180013ba0(local_28,*(undefined4 *)(param_2 + 0x3d));
                  FUN_18020e8a0(param_3,uVar3);
                  FUN_18020e450(local_28);
                  return 1;
                }
                pcVar2 = param_1;
                if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                  pcVar2 = *(char **)param_1;
                }
                iVar1 = _stricmp(pcVar2,"myname");
                if (iVar1 == 0) {
LAB_1801421ae:
                  param_2 = param_2 + 0x1c;
                }
                else {
                  pcVar2 = param_1;
                  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                    pcVar2 = *(char **)param_1;
                  }
                  iVar1 = _stricmp(pcVar2,"me");
                  if (iVar1 == 0) goto LAB_1801421ae;
                  pcVar2 = param_1;
                  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                    pcVar2 = *(char **)param_1;
                  }
                  iVar1 = _stricmp(pcVar2,"myrpname");
                  if (iVar1 == 0) {
LAB_1801421a2:
                    param_2 = param_2 + 0x20;
                  }
                  else {
                    pcVar2 = param_1;
                    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                      pcVar2 = *(char **)param_1;
                    }
                    iVar1 = _stricmp(pcVar2,"myrp");
                    if (iVar1 == 0) goto LAB_1801421a2;
                    pcVar2 = param_1;
                    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                      pcVar2 = *(char **)param_1;
                    }
                    iVar1 = _stricmp(pcVar2,"myjob");
                    if (iVar1 == 0) {
                      param_2 = param_2 + 0x24;
                    }
                    else {
                      pcVar2 = param_1;
                      if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                        pcVar2 = *(char **)param_1;
                      }
                      iVar1 = _stricmp(pcVar2,"mygroup");
                      if (iVar1 != 0) {
                        pcVar2 = param_1;
                        if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                          pcVar2 = *(char **)param_1;
                        }
                        iVar1 = _stricmp(pcVar2,"myusergroup");
                        if (iVar1 != 0) {
                          pcVar2 = param_1;
                          if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                            pcVar2 = *(char **)param_1;
                          }
                          iVar1 = _stricmp(pcVar2,"myteam");
                          if (iVar1 == 0) {
                            param_2 = param_2 + 0x2c;
                          }
                          else {
                            pcVar2 = param_1;
                            if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                              pcVar2 = *(char **)param_1;
                            }
                            iVar1 = _stricmp(pcVar2,"myhp");
                            if (iVar1 == 0) {
LAB_18014215d:
                              uVar3 = FUN_180013ba0(local_28,*(undefined4 *)(param_2 + 0x3c));
                              FUN_18020e8a0(param_3,uVar3);
                              FUN_18020e450(local_28);
                              return 1;
                            }
                            pcVar2 = param_1;
                            if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                              pcVar2 = *(char **)param_1;
                            }
                            iVar1 = _stricmp(pcVar2,"hp");
                            if (iVar1 == 0) goto LAB_18014215d;
                            pcVar2 = param_1;
                            if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                              pcVar2 = *(char **)param_1;
                            }
                            iVar1 = _stricmp(pcVar2,"health");
                            if (iVar1 == 0) goto LAB_18014215d;
                            pcVar2 = param_1;
                            if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                              pcVar2 = *(char **)param_1;
                            }
                            iVar1 = _stricmp(pcVar2,"myarmor");
                            if (iVar1 == 0) {
LAB_180142124:
                              uVar3 = FUN_180013ba0(local_28,*(undefined4 *)
                                                              ((longlong)param_2 + 0x1e4));
                              FUN_18020e8a0(param_3,uVar3);
                              FUN_18020e450(local_28);
                              return 1;
                            }
                            pcVar2 = param_1;
                            if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                              pcVar2 = *(char **)param_1;
                            }
                            iVar1 = _stricmp(pcVar2,"armor");
                            if (iVar1 == 0) goto LAB_180142124;
                            pcVar2 = param_1;
                            if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                              pcVar2 = *(char **)param_1;
                            }
                            iVar1 = _stricmp(pcVar2,"armour");
                            if (iVar1 == 0) goto LAB_180142124;
                            pcVar2 = param_1;
                            if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                              pcVar2 = *(char **)param_1;
                            }
                            iVar1 = _stricmp(pcVar2,"map");
                            if (iVar1 == 0) {
                              param_2 = param_2 + 0x34;
                            }
                            else {
                              pcVar2 = param_1;
                              if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                                pcVar2 = *(char **)param_1;
                              }
                              iVar1 = _stricmp(pcVar2,"time");
                              if (iVar1 != 0) {
                                if (0xf < *(ulonglong *)(param_1 + 0x18)) {
                                  param_1 = *(char **)param_1;
                                }
                                iVar1 = _stricmp(param_1,"clock");
                                if (iVar1 != 0) {
                                  return 0;
                                }
                              }
                              param_2 = param_2 + 0x38;
                            }
                          }
                          goto LAB_180141ce1;
                        }
                      }
                      param_2 = param_2 + 0x28;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_180141ce1:
      if (param_3 == param_2) {
        return 1;
      }
      uVar3 = param_2[2];
      if (0xf < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      goto LAB_180142206;
    }
  }
  if (param_3 == param_2) {
    return 1;
  }
  uVar3 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
LAB_180142206:
  FUN_180212700(param_3,param_2,uVar3);
  return 1;
}


)B180141c00",
    "49d43b234558f89c7a6a864aed3976fbf4b7afa0e964f6aedec96c424b5ab846",
    R"F180141c00C(FUN_180013ba0
FUN_18020e450
FUN_18020e8a0
FUN_180212700)F180141c00C",
    R"F180141c00D(LAB_180141ce1
LAB_180142124
LAB_18014215d
LAB_1801421a2
LAB_1801421ae
LAB_1801421ba
LAB_1801421c6
LAB_1801421d2
LAB_1801421de
LAB_1801421e7
LAB_180142206)F180141c00D",
    R"F180141c00T("hp"
"me"
"rp"
"job"
"map"
"wep"
"dist"
"myhp"
"myrp"
"name"
"nick"
"rank"
"team"
"time"
"armor"
"clock"
"group"
"kills"
"myjob"
"steam"
"armour"
"health"
"myname"
"myteam"
"rpname"
"weapon"
"myarmor"
"mygroup"
"rp_name"
"steamid"
"distance"
"myrpname"
"usergroup"
"myusergroup")F180141c00T",
    R"F180141c00F(16: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
20: if (iVar1 != 0) {
22: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
26: if (iVar1 != 0) {
28: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
32: if (iVar1 == 0) {
33: LAB_1801421e7:
36: else {
38: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
42: if (iVar1 == 0) goto LAB_1801421e7;
44: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
48: if (iVar1 == 0) goto LAB_1801421e7;
50: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
54: if (iVar1 == 0) {
56: goto LAB_180141ce1;
59: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
63: if (iVar1 == 0) {
64: LAB_1801421de:
67: else {
69: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
73: if (iVar1 == 0) goto LAB_1801421de;
75: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
79: if (iVar1 == 0) goto LAB_1801421de;
81: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
85: if (iVar1 == 0) {
87: goto LAB_180141ce1;
90: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
94: if (iVar1 == 0) {
95: LAB_1801421d2:
98: else {
100: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
104: if (iVar1 == 0) goto LAB_1801421d2;
106: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
110: if (iVar1 == 0) {
111: LAB_1801421c6:
114: else {
116: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
120: if (iVar1 == 0) goto LAB_1801421c6;
122: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
126: if (iVar1 == 0) {
127: LAB_1801421ba:
130: else {
132: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
136: if (iVar1 == 0) goto LAB_1801421ba;
138: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
142: if (iVar1 == 0) {
146: return 1;
149: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
153: if (iVar1 == 0) {
154: LAB_1801421ae:
157: else {
159: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
163: if (iVar1 == 0) goto LAB_1801421ae;
165: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
169: if (iVar1 == 0) {
170: LAB_1801421a2:
173: else {
175: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
179: if (iVar1 == 0) goto LAB_1801421a2;
181: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
185: if (iVar1 == 0) {
188: else {
190: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
194: if (iVar1 != 0) {
196: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
200: if (iVar1 != 0) {
202: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
206: if (iVar1 == 0) {
209: else {
211: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
215: if (iVar1 == 0) {
216: LAB_18014215d:
220: return 1;
223: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
227: if (iVar1 == 0) goto LAB_18014215d;
229: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
233: if (iVar1 == 0) goto LAB_18014215d;
235: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
239: if (iVar1 == 0) {
240: LAB_180142124:
245: return 1;
248: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
252: if (iVar1 == 0) goto LAB_180142124;
254: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
258: if (iVar1 == 0) goto LAB_180142124;
260: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
264: if (iVar1 == 0) {
267: else {
269: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
273: if (iVar1 != 0) {
274: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
278: if (iVar1 != 0) {
279: return 0;
285: goto LAB_180141ce1;
297: LAB_180141ce1:
298: if (param_3 == param_2) {
299: return 1;
302: if (0xf < (ulonglong)param_2[3]) {
305: goto LAB_180142206;
308: if (param_3 == param_2) {
309: return 1;
312: if (0xf < (ulonglong)param_2[3]) {
315: LAB_180142206:
317: return 1;)F180141c00F",
    R"F180141c00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180141ce1.
TODO: recover the declaration, type and value for global/data reference LAB_180142124.
TODO: recover the declaration, type and value for global/data reference LAB_18014215d.
TODO: recover the declaration, type and value for global/data reference LAB_1801421a2.
TODO: recover the declaration, type and value for global/data reference LAB_1801421ae.
TODO: recover the declaration, type and value for global/data reference LAB_1801421ba.
TODO: recover the declaration, type and value for global/data reference LAB_1801421c6.
TODO: recover the declaration, type and value for global/data reference LAB_1801421d2.
TODO: recover the declaration, type and value for global/data reference LAB_1801421de.
TODO: recover the declaration, type and value for global/data reference LAB_1801421e7.
TODO: recover the declaration, type and value for global/data reference LAB_180142206.)F180141c00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180141c00() noexcept {
    return kFunction_0x180141c00;
}

// 0x180142220 FUN_180142220
// source: re/dump/decompile/0x180142220_FUN_180142220.c
// size: 713 bytes; thunk: false
// body sha256: de4d170a1591d40321ed15adafbe213cbd7163d240ac527666166f414b86af85
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180142220{
    "0x180142220",
    "FUN_180142220",
    R"F180142220S(undefined FUN_180142220())F180142220S",
    R"B180142220(// 0x180142220  FUN_180142220
// size=713 thunk=false
// signature: undefined FUN_180142220()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180142220(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 ****ppppuVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 ***local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  uVar8 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_98 = 1;
  local_90 = param_3;
  local_68 = param_1;
  if ((ulonglong)param_1[3] < param_2[2] + 0x20) {
    lVar4 = param_1[2];
    FUN_18021aa80(0,(param_2[2] + 0x20) - lVar4);
    param_1[2] = lVar4;
  }
  uVar10 = param_2[2];
  if (uVar10 != 0) {
    do {
      uVar9 = param_2[3];
      puVar5 = param_2;
      if (0xf < uVar9) {
        puVar5 = (undefined8 *)*param_2;
      }
      if (*(char *)((longlong)puVar5 + uVar8) == '{') {
        uVar1 = uVar8 + 1;
        puVar5 = param_2;
        if (0xf < uVar9) {
          puVar5 = (undefined8 *)*param_2;
        }
        if ((((uVar10 <= uVar1) ||
             (lVar4 = thunk_FUN_1802d5c20(uVar1 + (longlong)puVar5,(longlong)puVar5 + uVar10,0x7d),
             lVar4 == (longlong)puVar5 + uVar10)) ||
            (uVar10 = lVar4 - (longlong)puVar5, uVar10 == 0xffffffffffffffff)) ||
           (0x18 < uVar10 - uVar8)) {
          puVar5 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar5 = (undefined8 *)*param_2;
          }
          uVar2 = *(undefined1 *)((longlong)puVar5 + uVar8);
          goto LAB_18014246a;
        }
        uStack_58 = 0;
        local_50 = 0;
        local_48 = 0xf;
        local_60 = (undefined8 ****)0x0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        uStack_70 = 0;
        if ((ulonglong)param_2[2] < uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_18022ec00();
        }
        uVar9 = (uVar10 - uVar8) - 1;
        uVar6 = param_2[2] - uVar1;
        if (uVar6 < uVar9) {
          uVar9 = uVar6;
        }
        puVar5 = param_2;
        if (0xf < (ulonglong)param_2[3]) {
          puVar5 = (undefined8 *)*param_2;
        }
        FUN_18001d080(&local_88,uVar1 + (longlong)puVar5,uVar9);
        local_98 = 3;
        cVar3 = FUN_180141c00(&local_88,local_90,&local_60);
        local_98 = 1;
        FUN_18020e450(&local_88);
        if (cVar3 == '\0') {
          puVar5 = param_2;
          if (0xf < (ulonglong)param_2[3]) {
            puVar5 = (undefined8 *)*param_2;
          }
          uVar2 = *(undefined1 *)((longlong)puVar5 + uVar8);
          uVar10 = param_1[2];
          if (uVar10 < (ulonglong)param_1[3]) {
            param_1[2] = uVar10 + 1;
            if ((ulonglong)param_1[3] < 0x10) {
              *(undefined1 *)(uVar10 + (longlong)param_1) = uVar2;
              *(undefined1 *)(uVar10 + 1 + (longlong)param_1) = 0;
            }
            else {
              lVar4 = *param_1;
              *(undefined1 *)(uVar10 + lVar4) = uVar2;
              *(undefined1 *)(uVar10 + 1 + lVar4) = 0;
            }
          }
          else {
            FUN_18021abd0(param_1);
          }
        }
        else {
          ppppuVar7 = &local_60;
          if (0xf < local_48) {
            ppppuVar7 = (undefined8 ****)local_60;
          }
          FUN_18021aef0(param_1,ppppuVar7,local_50);
          uVar8 = uVar10;
        }
        FUN_18020e450(&local_60);
      }
      else {
        puVar5 = param_2;
        if (0xf < uVar9) {
          puVar5 = (undefined8 *)*param_2;
        }
        uVar2 = *(undefined1 *)((longlong)puVar5 + uVar8);
LAB_18014246a:
        uVar10 = param_1[2];
        if (uVar10 < (ulonglong)param_1[3]) {
          param_1[2] = uVar10 + 1;
          if ((ulonglong)param_1[3] < 0x10) {
            *(undefined1 *)(uVar10 + 1 + (longlong)param_1) = 0;
            *(undefined1 *)(uVar10 + (longlong)param_1) = uVar2;
          }
          else {
            lVar4 = *param_1;
            *(undefined1 *)(uVar10 + 1 + lVar4) = 0;
            *(undefined1 *)(uVar10 + lVar4) = uVar2;
          }
        }
        else {
          FUN_18021abd0(param_1);
        }
      }
      uVar8 = uVar8 + 1;
      uVar10 = param_2[2];
    } while (uVar8 < uVar10);
  }
  return param_1;
}


)B180142220",
    "de4d170a1591d40321ed15adafbe213cbd7163d240ac527666166f414b86af85",
    R"F180142220C(FUN_18001d080
FUN_180141c00
FUN_18020e450
FUN_18021aa80
FUN_18021abd0
FUN_18021aef0
FUN_18022ec00)F180142220C",
    R"F180142220D(LAB_18014246a
DAT_1803da4c0)F180142220D",
    R"F180142220T()F180142220T",
    R"F180142220F(46: if ((ulonglong)param_1[3] < param_2[2] + 0x20) {
52: if (uVar10 != 0) {
53: do {
56: if (0xf < uVar9) {
59: if (*(char *)((longlong)puVar5 + uVar8) == '{') {
62: if (0xf < uVar9) {
65: if ((((uVar10 <= uVar1) ||
71: if (0xf < (ulonglong)param_2[3]) {
75: goto LAB_18014246a;
85: if ((ulonglong)param_2[2] < uVar1) {
91: if (uVar6 < uVar9) {
95: if (0xf < (ulonglong)param_2[3]) {
103: if (cVar3 == '\0') {
105: if (0xf < (ulonglong)param_2[3]) {
110: if (uVar10 < (ulonglong)param_1[3]) {
112: if ((ulonglong)param_1[3] < 0x10) {
116: else {
122: else {
126: else {
128: if (0xf < local_48) {
136: else {
138: if (0xf < uVar9) {
142: LAB_18014246a:
144: if (uVar10 < (ulonglong)param_1[3]) {
146: if ((ulonglong)param_1[3] < 0x10) {
150: else {
156: else {
164: return param_1;)F180142220F",
    R"F180142220U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18014246a.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180142220U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180142220() noexcept {
    return kFunction_0x180142220;
}

// 0x1801424f0 FUN_1801424f0
// source: re/dump/decompile/0x1801424f0_FUN_1801424f0.c
// size: 31 bytes; thunk: false
// body sha256: fc9eaa860b71886746a65e5344f77ab5c2d3e1309c4b141b94b1a60a6cc95394
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801424f0{
    "0x1801424f0",
    "FUN_1801424f0",
    R"F1801424f0S(undefined FUN_1801424f0())F1801424f0S",
    R"B1801424f0(// 0x1801424f0  FUN_1801424f0
// size=31 thunk=false
// signature: undefined FUN_1801424f0()
// status: ok


undefined8 FUN_1801424f0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x38))();
    uVar1 = 1;
  }
  return uVar1;
}


)B1801424f0",
    "fc9eaa860b71886746a65e5344f77ab5c2d3e1309c4b141b94b1a60a6cc95394",
    R"F1801424f0C()F1801424f0C",
    R"F1801424f0D()F1801424f0D",
    R"F1801424f0T()F1801424f0T",
    R"F1801424f0F(12: if ((param_1 == (longlong *)0x0) || (param_2 == 0)) {
15: else {
19: return uVar1;)F1801424f0F",
    R"F1801424f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 16: (**(code **)(*param_1 + 0x38))();.)F1801424f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801424f0() noexcept {
    return kFunction_0x1801424f0;
}

// 0x180142520 FUN_180142520
// source: re/dump/decompile/0x180142520_FUN_180142520.c
// size: 75 bytes; thunk: false
// body sha256: d862a2a6cf6720caba58c5ff82ebae971d1b7e94e5acb0743595c574538add81
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180142520{
    "0x180142520",
    "FUN_180142520",
    R"F180142520S(undefined FUN_180142520())F180142520S",
    R"B180142520(// 0x180142520  FUN_180142520
// size=75 thunk=false
// signature: undefined FUN_180142520()
// status: ok


byte FUN_180142520(void)

{
  undefined8 uVar1;
  char *pcVar2;
  byte bVar3;
  
  uVar1 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
  uVar1 = FUN_180241610(uVar1,0x6507776eb2e9032e);
  pcVar2 = (char *)FUN_1801fcfc0(uVar1);
  if (*pcVar2 == '\0') {
    bVar3 = 0;
  }
  else {
    bVar3 = FUN_18006b0e0();
    bVar3 = bVar3 ^ 1;
  }
  return bVar3;
}


)B180142520",
    "d862a2a6cf6720caba58c5ff82ebae971d1b7e94e5acb0743595c574538add81",
    R"F180142520C(FUN_18006b0e0
FUN_1801fcfc0
FUN_180241610)F180142520C",
    R"F180142520D(DAT_1803fadf0)F180142520D",
    R"F180142520T()F180142520T",
    R"F180142520F(17: if (*pcVar2 == '\0') {
20: else {
24: return bVar3;)F180142520F",
    R"F180142520U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.)F180142520U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180142520() noexcept {
    return kFunction_0x180142520;
}

// 0x180142570 FUN_180142570
// source: re/dump/decompile/0x180142570_FUN_180142570.c
// size: 124 bytes; thunk: false
// body sha256: eeac9bd213451bd765ad464a898409d74d3b0714dc12def33d891437227fb3b6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180142570{
    "0x180142570",
    "FUN_180142570",
    R"F180142570S(undefined FUN_180142570())F180142570S",
    R"B180142570(// 0x180142570  FUN_180142570
// size=124 thunk=false
// signature: undefined FUN_180142570()
// status: ok


ulonglong FUN_180142570(void)

{
  int iVar1;
  int iVar2;
  undefined **in_RAX;
  undefined **ppuVar3;
  undefined4 extraout_var;
  int iVar4;
  
  iVar1 = DAT_1803ff708;
  if ((DAT_180409841 != '\0') && (iVar4 = 0, 0 < DAT_1803ff708)) {
    do {
      ppuVar3 = (undefined **)(longlong)iVar4;
      in_RAX = ppuVar3;
      if ((char *)(&DAT_1803eb898)[(longlong)ppuVar3 * 0xb] != (char *)0x0) {
        iVar2 = strcmp((char *)(&DAT_1803eb898)[(longlong)ppuVar3 * 0xb],"player_death");
        in_RAX = (undefined **)CONCAT44(extraout_var,iVar2);
        if (iVar2 == 0) {
          in_RAX = &PTR_vftable_Core_GameEvents_Sink_1803eb890 + (longlong)ppuVar3 * 0xb;
          if ((in_RAX != (undefined **)0x0) && ((&DAT_1803eb8e4)[(longlong)ppuVar3 * 0x58] != '\0'))
          {
            return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
          }
          break;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}


)B180142570",
    "eeac9bd213451bd765ad464a898409d74d3b0714dc12def33d891437227fb3b6",
    R"F180142570C()F180142570C",
    R"F180142570D(DAT_1803eb898
DAT_1803eb8e4
DAT_1803ff708
DAT_180409841)F180142570D",
    R"F180142570T("player_death")F180142570T",
    R"F180142570F(18: if ((DAT_180409841 != '\0') && (iVar4 = 0, 0 < DAT_1803ff708)) {
19: do {
22: if ((char *)(&DAT_1803eb898)[(longlong)ppuVar3 * 0xb] != (char *)0x0) {
25: if (iVar2 == 0) {
27: if ((in_RAX != (undefined **)0x0) && ((&DAT_1803eb8e4)[(longlong)ppuVar3 * 0x58] != '\0'))
29: return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
31: break;
37: return (ulonglong)in_RAX & 0xffffffffffffff00;)F180142570F",
    R"F180142570U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb898.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb8e4.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff708.
TODO: recover the declaration, type and value for global/data reference DAT_180409841.)F180142570U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180142570() noexcept {
    return kFunction_0x180142570;
}

// 0x1801425f0 FUN_1801425f0
// source: re/dump/decompile/0x1801425f0_FUN_1801425f0.c
// size: 124 bytes; thunk: false
// body sha256: ae3d3a3fc3b5022fc3562a44a70270f2624126a791bd7758f478911d92e1eee0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801425f0{
    "0x1801425f0",
    "FUN_1801425f0",
    R"F1801425f0S(undefined FUN_1801425f0())F1801425f0S",
    R"B1801425f0(// 0x1801425f0  FUN_1801425f0
// size=124 thunk=false
// signature: undefined FUN_1801425f0()
// status: ok


ulonglong FUN_1801425f0(void)

{
  int iVar1;
  int iVar2;
  undefined **in_RAX;
  undefined **ppuVar3;
  undefined4 extraout_var;
  int iVar4;
  
  iVar1 = DAT_1803ff708;
  if ((DAT_180409840 != '\0') && (iVar4 = 0, 0 < DAT_1803ff708)) {
    do {
      ppuVar3 = (undefined **)(longlong)iVar4;
      in_RAX = ppuVar3;
      if ((char *)(&DAT_1803eb898)[(longlong)ppuVar3 * 0xb] != (char *)0x0) {
        iVar2 = strcmp((char *)(&DAT_1803eb898)[(longlong)ppuVar3 * 0xb],"player_hurt");
        in_RAX = (undefined **)CONCAT44(extraout_var,iVar2);
        if (iVar2 == 0) {
          in_RAX = &PTR_vftable_Core_GameEvents_Sink_1803eb890 + (longlong)ppuVar3 * 0xb;
          if ((in_RAX != (undefined **)0x0) && ((&DAT_1803eb8e4)[(longlong)ppuVar3 * 0x58] != '\0'))
          {
            return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
          }
          break;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}


)B1801425f0",
    "ae3d3a3fc3b5022fc3562a44a70270f2624126a791bd7758f478911d92e1eee0",
    R"F1801425f0C()F1801425f0C",
    R"F1801425f0D(DAT_1803eb898
DAT_1803eb8e4
DAT_1803ff708
DAT_180409840)F1801425f0D",
    R"F1801425f0T("player_hurt")F1801425f0T",
    R"F1801425f0F(18: if ((DAT_180409840 != '\0') && (iVar4 = 0, 0 < DAT_1803ff708)) {
19: do {
22: if ((char *)(&DAT_1803eb898)[(longlong)ppuVar3 * 0xb] != (char *)0x0) {
25: if (iVar2 == 0) {
27: if ((in_RAX != (undefined **)0x0) && ((&DAT_1803eb8e4)[(longlong)ppuVar3 * 0x58] != '\0'))
29: return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
31: break;
37: return (ulonglong)in_RAX & 0xffffffffffffff00;)F1801425f0F",
    R"F1801425f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb898.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb8e4.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff708.
TODO: recover the declaration, type and value for global/data reference DAT_180409840.)F1801425f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801425f0() noexcept {
    return kFunction_0x1801425f0;
}

// 0x180142670 FUN_180142670
// source: re/dump/decompile/0x180142670_FUN_180142670.c
// size: 1821 bytes; thunk: false
// body sha256: 8d11cfa9f20749c509de563dd8fa642a71a74738dbf32af0c5a7eeb325289d0a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180142670{
    "0x180142670",
    "FUN_180142670",
    R"F180142670S(undefined FUN_180142670())F180142670S",
    R"B180142670(// 0x180142670  FUN_180142670
// size=1821 thunk=false
// signature: undefined FUN_180142670()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180142670(undefined8 param_1,int param_2,undefined4 param_3,char param_4)

{
  undefined8 ****ppppuVar1;
  ulonglong uVar2;
  void *pvVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  char *pcVar12;
  ulonglong uVar13;
  undefined8 **ppuVar14;
  undefined1 *puVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined8 ***_Memory;
  void *_Memory_00;
  undefined8 ****ppppuVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined8 ***pppuVar24;
  float fVar25;
  undefined8 uStack_340;
  undefined1 auStack_338 [32];
  undefined4 local_318;
  undefined8 local_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [112];
  undefined8 **local_288;
  undefined8 **ppuStack_280;
  ulonglong local_278;
  undefined8 uStack_270;
  undefined8 ***local_268;
  undefined8 uStack_260;
  ulonglong local_258;
  ulonglong local_250;
  undefined *local_248;
  undefined8 local_240 [63];
  ulonglong local_48;
  
  puVar21 = auStack_338;
  puVar20 = auStack_338;
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_338;
  local_240[0] = 0x93fd561a96ab0c67;
  local_318 = param_3;
  local_310 = param_1;
  plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_308,local_240);
  local_248 = (undefined *)0x6507776eb2e9032e;
  plVar11 = (longlong *)FUN_180241a30(*plVar11 + 0x28,local_2f8,&local_248);
  pcVar12 = (char *)FUN_1801fcfc0(*plVar11 + 0x28);
  puVar15 = auStack_338;
  if (*pcVar12 == '\0') goto LAB_1801428b1;
  if (param_4 == '\0') {
    cVar8 = FUN_180142570();
    if ((cVar8 != '\0') || (cVar8 = FUN_1801425f0(), iVar10 = DAT_1803ff708, cVar8 != '\0')) {
      DAT_180409848 = DAT_180409848 + 1;
      puVar15 = auStack_338;
      goto LAB_1801428b1;
    }
    iVar19 = 0;
    if (0 < DAT_1803ff708) {
      do {
        lVar23 = (longlong)iVar19 * 0x58;
        if (((char *)(&DAT_1803eb898)[(longlong)iVar19 * 0xb] != (char *)0x0) &&
           (iVar9 = strcmp((char *)(&DAT_1803eb898)[(longlong)iVar19 * 0xb],"player_death"),
           iVar9 == 0)) {
          if ((lVar23 != -0x1803eb890) &&
             ((((&DAT_1803eb8e4)[lVar23] != '\0' && (DAT_180409841 == '\0')) &&
              (DAT_180409851 == '\0')))) {
            DAT_180409851 = '\x01';
            FUN_180014410(
                         "[KILLSAY] player_death subscribed but never delivered -- this server does not fire it; kills come from the health poll\n"
                         );
          }
          break;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < iVar10);
    }
  }
  else {
    DAT_18040984c = DAT_18040984c + 1;
  }
  pppuVar24 = (undefined8 ***)0x0;
  uStack_260 = 0;
  local_258 = 0;
  local_250 = 0xf;
  local_268 = (undefined8 ****)0x0;
  local_248 = &DAT_1803e7c90;
  iVar10 = _Mtx_lock(&DAT_1803e7c90);
  if (iVar10 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (DAT_1803e7cdc == 0x7fffffff) {
    DAT_1803e7cdc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  if (DAT_1803e9f60 == DAT_1803e9f68) {
LAB_18014289a:
    _Mtx_unlock(&DAT_1803e7c90);
  }
  else {
    if (DAT_1803fa608 == (float *)0x0) {
      fVar25 = 0.0;
    }
    else {
      fVar25 = *DAT_1803fa608;
      if (((0.0 < fVar25) && (fVar25 - _DAT_1803e7ce4 < DAT_180380b20)) &&
         ((param_2 < 0 || ((DAT_1803e7ce0 < 0 || (param_2 == DAT_1803e7ce0)))))) goto LAB_18014289a;
    }
    DAT_1803e7ce0 = param_2;
    _DAT_1803e7ce4 = fVar25;
    iVar10 = FUN_180022680(0,DAT_1803e9f68 - DAT_1803e9f60 >> 5);
    ppppuVar18 = (undefined8 ****)((longlong)iVar10 * 0x20 + DAT_1803e9f60);
    if (&local_268 != ppppuVar18) {
      ppppuVar1 = ppppuVar18 + 2;
      if ((undefined8 ***)0xf < ppppuVar18[3]) {
        ppppuVar18 = (undefined8 ****)*ppppuVar18;
      }
      FUN_180212700(&local_268,ppppuVar18,*ppppuVar1);
    }
    _Mtx_unlock(&DAT_1803e7c90);
    uVar2 = local_258;
    DAT_180409844 = DAT_180409844 + 1;
    local_288 = (undefined8 ***)0x0;
    ppuStack_280 = (undefined8 ***)0x0;
    local_278 = 0;
    uStack_270 = 0;
    ppppuVar18 = &local_268;
    if (0xf < local_250) {
      ppppuVar18 = (undefined8 ****)local_268;
    }
    if (0x7fffffffffffffff < local_258) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    if (local_258 < 0x10) {
      local_278 = local_258;
      uVar22 = 0xf;
      uStack_270 = 0xf;
      pppuVar24 = *ppppuVar18;
      local_288 = pppuVar24;
      ppuStack_280 = ppppuVar18[1];
      puVar21 = auStack_338;
    }
    else {
      uVar22 = local_258 | 0xf;
      if (uVar22 < 0x8000000000000000) goto LAB_1801429e6;
      uVar13 = 0x8000000000000027;
      puVar20 = auStack_338;
      uVar22 = 0x7fffffffffffffff;
      while( true ) {
        *(undefined8 *)(puVar20 + -8) = 0x1801429da;
        ppuVar14 = (undefined8 **)FUN_1802d8350(uVar13);
        if (ppuVar14 != (undefined8 **)0x0) break;
        pcVar4 = (code *)swi(0x29);
        uVar22 = (*pcVar4)(5);
        puVar20 = puVar20 + 8;
LAB_1801429e6:
        if (uVar22 < 0x16) {
          uVar22 = 0x16;
        }
        if (uVar22 == 0xffffffffffffffff) goto LAB_180142a31;
        if (uVar22 + 1 < 0x1000) {
          *(undefined8 *)(puVar20 + -8) = 0x180142a2e;
          pppuVar24 = (undefined8 ***)FUN_1802d8350();
          goto LAB_180142a31;
        }
        uVar13 = uVar22 + 0x28;
        if (uVar13 <= uVar22 + 1) {
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar20 + -8) = &UNK_180142da8;
          FUN_180012fe0();
        }
      }
      pppuVar24 = (undefined8 ***)((longlong)ppuVar14 + 0x27U & 0xffffffffffffffe0);
      pppuVar24[-1] = ppuVar14;
LAB_180142a31:
      *(undefined8 ****)(puVar20 + 0xb0) = pppuVar24;
      *(ulonglong *)(puVar20 + 0xc0) = uVar2;
      *(ulonglong *)(puVar20 + 200) = uVar22;
      *(undefined8 *)(puVar20 + -8) = 0x180142a58;
      memcpy(pppuVar24,ppppuVar18,uVar2 + 1);
      puVar21 = puVar20;
    }
    lVar23 = *(longlong *)(puVar21 + 0xe0);
    puVar20 = puVar21 + 0xd0;
    if (0xf < *(ulonglong *)(puVar21 + 0xe8)) {
      puVar20 = *(undefined1 **)(puVar21 + 0xd0);
    }
    if (lVar23 != 0) {
      *(undefined8 *)(puVar21 + -8) = 0x180142a96;
      puVar15 = (undefined1 *)thunk_FUN_1802d5c20(puVar20,puVar20 + lVar23,0x7b);
      if ((puVar15 != puVar20 + lVar23) && ((longlong)puVar15 - (longlong)puVar20 != -1)) {
        *(undefined8 *)(puVar21 + -8) = 0x180142ab9;
        FUN_180142db0(puVar21 + 0x100);
        *(undefined8 *)(puVar21 + -8) = 0x180142ad4;
        FUN_1801410a0(puVar21 + 0x100,*(undefined8 *)(puVar21 + 0x28),param_2,
                      *(undefined4 *)(puVar21 + 0x20));
        *(undefined8 *)(puVar21 + -8) = 0x180142b0b;
        puVar16 = (undefined4 *)FUN_180142220(puVar21 + 0x50,puVar21 + 0xd0,puVar21 + 0x100);
        if ((undefined4 *)(puVar21 + 0xb0) != puVar16) {
          if (0xf < uVar22) {
            _Memory = pppuVar24;
            if (0xfff < uVar22 + 1) {
              _Memory = (undefined8 ***)pppuVar24[-1];
              pppuVar24 = (undefined8 ***)((longlong)pppuVar24 + (-8 - (longlong)_Memory));
              if ((undefined8 ***)0x1f < pppuVar24) {
                pcVar4 = (code *)swi(0x29);
                (*pcVar4)(5);
                puVar21 = puVar21 + 8;
                _Memory = pppuVar24;
              }
            }
            *(undefined8 *)(puVar21 + -8) = 0x180142b54;
            free(_Memory);
          }
          *(undefined8 *)(puVar21 + 0xc0) = 0;
          *(undefined8 *)(puVar21 + 200) = 0xf;
          puVar21[0xb0] = 0;
          uVar5 = puVar16[1];
          uVar6 = puVar16[2];
          uVar7 = puVar16[3];
          *(undefined4 *)(puVar21 + 0xb0) = *puVar16;
          *(undefined4 *)(puVar21 + 0xb4) = uVar5;
          *(undefined4 *)(puVar21 + 0xb8) = uVar6;
          *(undefined4 *)(puVar21 + 0xbc) = uVar7;
          uVar17 = *(undefined8 *)(puVar16 + 6);
          *(undefined8 *)(puVar21 + 0xc0) = *(undefined8 *)(puVar16 + 4);
          *(undefined8 *)(puVar21 + 200) = uVar17;
          *(undefined8 *)(puVar16 + 4) = 0;
          *(undefined8 *)(puVar16 + 6) = 0xf;
          *(undefined1 *)puVar16 = 0;
        }
        *(undefined8 *)(puVar21 + -8) = 0x180142ba0;
        FUN_18020e450(puVar21 + 0x50);
        *(undefined8 *)(puVar21 + -8) = 0x180142bae;
        FUN_180142f70(puVar21 + 0x100);
      }
    }
    *(undefined1 **)(puVar21 + 0x28) = puVar21 + 0x70;
    *(undefined8 *)(puVar21 + -8) = 0x180142bca;
    uVar17 = FUN_18016d4c0(puVar21 + 0x70,puVar21 + 0xb0);
    *(undefined8 *)(puVar21 + -8) = 0x180142bdb;
    puVar16 = (undefined4 *)FUN_180140b70(puVar21 + 0x90,uVar17);
    if ((undefined4 *)(puVar21 + 0xb0) != puVar16) {
      if (0xf < *(ulonglong *)(puVar21 + 200)) {
        pvVar3 = *(void **)(puVar21 + 0xb0);
        _Memory_00 = pvVar3;
        if ((0xfff < *(ulonglong *)(puVar21 + 200) + 1) &&
           (_Memory_00 = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)_Memory_00)))) {
          _Memory_00 = (void *)0x5;
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)();
          puVar21 = puVar21 + 8;
        }
        *(undefined8 *)(puVar21 + -8) = 0x180142c3a;
        free(_Memory_00);
      }
      *(undefined8 *)(puVar21 + 0xc0) = 0;
      *(undefined8 *)(puVar21 + 200) = 0xf;
      puVar21[0xb0] = 0;
      uVar5 = puVar16[1];
      uVar6 = puVar16[2];
      uVar7 = puVar16[3];
      *(undefined4 *)(puVar21 + 0xb0) = *puVar16;
      *(undefined4 *)(puVar21 + 0xb4) = uVar5;
      *(undefined4 *)(puVar21 + 0xb8) = uVar6;
      *(undefined4 *)(puVar21 + 0xbc) = uVar7;
      uVar17 = *(undefined8 *)(puVar16 + 6);
      *(undefined8 *)(puVar21 + 0xc0) = *(undefined8 *)(puVar16 + 4);
      *(undefined8 *)(puVar21 + 200) = uVar17;
      *(undefined8 *)(puVar16 + 4) = 0;
      *(undefined8 *)(puVar16 + 6) = 0xf;
      *(undefined1 *)puVar16 = 0;
    }
    *(undefined8 *)(puVar21 + -8) = 0x180142c89;
    FUN_18020e450(puVar21 + 0x90);
    if (*(longlong *)(puVar21 + 0xc0) != 0) {
      *(undefined **)(puVar21 + 0x28) = &DAT_1803e7c90;
      *(undefined8 *)(puVar21 + -8) = 0x180142ca6;
      iVar10 = _Mtx_lock(&DAT_1803e7c90);
      if (iVar10 != 0) {
        *(undefined8 *)(puVar21 + -8) = 0x180142cb5;
        std::_Throw_Cpp_error(5);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (DAT_1803e7cdc == 0x7fffffff) {
        DAT_1803e7cdc = 0x7ffffffe;
        *(undefined8 *)(puVar21 + -8) = 0x180142cd6;
        std::_Throw_Cpp_error(6);
      }
      if (DAT_18056dec0 < 8) {
        if (DAT_18056deb0 <= DAT_18056dec0 + 1) {
          *(undefined8 *)(puVar21 + -8) = 0x180142d04;
          FUN_18022ddb0(&DAT_18056dea0);
        }
        DAT_18056deb8 = DAT_18056deb0 - 1 & DAT_18056deb8;
        uVar2 = DAT_18056deb8 + DAT_18056dec0;
        uVar22 = uVar2 & DAT_18056deb0 - 1;
        if (*(longlong *)(DAT_18056dea8 + uVar22 * 8) == 0) {
          *(undefined8 *)(puVar21 + -8) = 0x180142d49;
          uVar17 = FUN_1802d8350(0x20);
          *(undefined8 *)(DAT_18056dea8 + uVar22 * 8) = uVar17;
        }
        uVar17 = *(undefined8 *)(DAT_18056dea8 + (DAT_18056deb0 - 1 & uVar2) * 8);
        *(undefined8 *)(puVar21 + -8) = 0x180142d7a;
        FUN_18016d4c0(uVar17,puVar21 + 0xb0);
        DAT_18056dec0 = DAT_18056dec0 + 1;
      }
      *(undefined8 *)(puVar21 + -8) = 0x180142d8a;
      _Mtx_unlock(&DAT_1803e7c90);
    }
    *(undefined8 *)(puVar21 + -8) = 0x180142d98;
    FUN_18020e450(puVar21 + 0xb0);
  }
  *(undefined8 *)(puVar21 + -8) = 0x1801428b1;
  FUN_18020e450(puVar21 + 0xd0);
  puVar15 = puVar21;
LAB_1801428b1:
  *(undefined8 *)(puVar15 + -8) = 0x1801428c1;
  return;
}


)B180142670",
    "8d11cfa9f20749c509de563dd8fa642a71a74738dbf32af0c5a7eeb325289d0a",
    R"F180142670C(FUN_180012fe0
FUN_1800130a0
FUN_180014410
FUN_180022680
FUN_180140b70
FUN_1801410a0
FUN_180142220
FUN_180142570
FUN_1801425f0
FUN_180142db0
FUN_180142f70
FUN_18016d4c0
FUN_1801fcfc0
FUN_18020e450
FUN_180212700
FUN_18022ddb0
FUN_180241a30
FUN_1802d8350)F180142670C",
    R"F180142670D(LAB_18014289a
LAB_1801428b1
LAB_1801429e6
LAB_180142a31
UNK_180142da8
DAT_180380b20
DAT_1803da4c0
DAT_1803e7c90
DAT_1803e7cdc
DAT_1803e7ce0
DAT_1803e9f60
DAT_1803e9f68
DAT_1803eb898
DAT_1803eb8e4
DAT_1803fa608
DAT_1803fadf0
DAT_1803ff708
DAT_180409841
DAT_180409844
DAT_180409848
DAT_18040984c
DAT_180409851
DAT_18056dea0
DAT_18056dea8
DAT_18056deb0
DAT_18056deb8
DAT_18056dec0)F180142670D",
    R"F180142670T("player_death"
"[KILLSAY] player_death subscribed but never delivered -- this server does not fire it; kills come from the health poll\\n")F180142670T",
    R"F180142670F(69: if (*pcVar12 == '\0') goto LAB_1801428b1;
70: if (param_4 == '\0') {
72: if ((cVar8 != '\0') || (cVar8 = FUN_1801425f0(), iVar10 = DAT_1803ff708, cVar8 != '\0')) {
75: goto LAB_1801428b1;
78: if (0 < DAT_1803ff708) {
79: do {
81: if (((char *)(&DAT_1803eb898)[(longlong)iVar19 * 0xb] != (char *)0x0) &&
84: if ((lVar23 != -0x1803eb890) &&
92: break;
98: else {
108: if (iVar10 != 0) {
112: return;
114: if (DAT_1803e7cdc == 0x7fffffff) {
118: if (DAT_1803e9f60 == DAT_1803e9f68) {
119: LAB_18014289a:
122: else {
123: if (DAT_1803fa608 == (float *)0x0) {
126: else {
128: if (((0.0 < fVar25) && (fVar25 - _DAT_1803e7ce4 < DAT_180380b20)) &&
135: if (&local_268 != ppppuVar18) {
137: if ((undefined8 ***)0xf < ppppuVar18[3]) {
150: if (0xf < local_250) {
153: if (0x7fffffffffffffff < local_258) {
157: if (local_258 < 0x10) {
166: else {
168: if (uVar22 < 0x8000000000000000) goto LAB_1801429e6;
172: while( true ) {
175: if (ppuVar14 != (undefined8 **)0x0) break;
179: LAB_1801429e6:
180: if (uVar22 < 0x16) {
183: if (uVar22 == 0xffffffffffffffff) goto LAB_180142a31;
184: if (uVar22 + 1 < 0x1000) {
187: goto LAB_180142a31;
190: if (uVar13 <= uVar22 + 1) {
198: LAB_180142a31:
208: if (0xf < *(ulonglong *)(puVar21 + 0xe8)) {
211: if (lVar23 != 0) {
214: if ((puVar15 != puVar20 + lVar23) && ((longlong)puVar15 - (longlong)puVar20 != -1)) {
222: if ((undefined4 *)(puVar21 + 0xb0) != puVar16) {
223: if (0xf < uVar22) {
225: if (0xfff < uVar22 + 1) {
228: if ((undefined8 ***)0x1f < pppuVar24) {
266: if ((undefined4 *)(puVar21 + 0xb0) != puVar16) {
267: if (0xf < *(ulonglong *)(puVar21 + 200)) {
270: if ((0xfff < *(ulonglong *)(puVar21 + 200) + 1) &&
300: if (*(longlong *)(puVar21 + 0xc0) != 0) {
304: if (iVar10 != 0) {
309: return;
311: if (DAT_1803e7cdc == 0x7fffffff) {
316: if (DAT_18056dec0 < 8) {
317: if (DAT_18056deb0 <= DAT_18056dec0 + 1) {
324: if (*(longlong *)(DAT_18056dea8 + uVar22 * 8) == 0) {
343: LAB_1801428b1:
345: return;)F180142670F",
    R"F180142670U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18014289a.
TODO: recover the declaration, type and value for global/data reference LAB_1801428b1.
TODO: recover the declaration, type and value for global/data reference LAB_1801429e6.
TODO: recover the declaration, type and value for global/data reference LAB_180142a31.
TODO: recover the declaration, type and value for global/data reference UNK_180142da8.
TODO: recover the declaration, type and value for global/data reference DAT_180380b20.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7c90.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7cdc.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7ce0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f60.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f68.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb898.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb8e4.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa608.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff708.
TODO: recover the declaration, type and value for global/data reference DAT_180409841.
TODO: recover the declaration, type and value for global/data reference DAT_180409844.
TODO: recover the declaration, type and value for global/data reference DAT_180409848.
TODO: recover the declaration, type and value for global/data reference DAT_18040984c.
TODO: recover the declaration, type and value for global/data reference DAT_180409851.
TODO: recover the declaration, type and value for global/data reference DAT_18056dea0.
TODO: recover the declaration, type and value for global/data reference DAT_18056dea8.
TODO: recover the declaration, type and value for global/data reference DAT_18056deb0.
TODO: recover the declaration, type and value for global/data reference DAT_18056deb8.
TODO: recover the declaration, type and value for global/data reference DAT_18056dec0.
TODO: resolve the indirect call in body 110: pcVar4 = (code *)swi(3);.
TODO: resolve the indirect call in body 111: (*pcVar4)();.
TODO: resolve the indirect call in body 176: pcVar4 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 177: uVar22 = (*pcVar4)(5);.
TODO: resolve the indirect call in body 229: pcVar4 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 230: (*pcVar4)(5);.
TODO: resolve the indirect call in body 274: pcVar4 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 275: (*pcVar4)();.
TODO: resolve the indirect call in body 307: pcVar4 = (code *)swi(3);.
TODO: resolve the indirect call in body 308: (*pcVar4)();.)F180142670U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180142670() noexcept {
    return kFunction_0x180142670;
}

// 0x180142db0 FUN_180142db0
// source: re/dump/decompile/0x180142db0_FUN_180142db0.c
// size: 442 bytes; thunk: false
// body sha256: 36ba8b2a848aceb917f06bf5e24cabdc894274b7c0140cf19eeedeecfaefcd68
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180142db0{
    "0x180142db0",
    "FUN_180142db0",
    R"F180142db0S(undefined FUN_180142db0())F180142db0S",
    R"B180142db0(// 0x180142db0  FUN_180142db0
// size=442 thunk=false
// signature: undefined FUN_180142db0()
// status: ok


undefined8 * FUN_180142db0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0xf;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0xf;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0xf;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0xf;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0xf;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0xf;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0xf;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0xf;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0xf;
  *(undefined1 *)(param_1 + 0x28) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0xf;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0xf;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0xf;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0xf;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  return param_1;
}


)B180142db0",
    "36ba8b2a848aceb917f06bf5e24cabdc894274b7c0140cf19eeedeecfaefcd68",
    R"F180142db0C()F180142db0C",
    R"F180142db0D()F180142db0D",
    R"F180142db0T()F180142db0T",
    R"F180142db0F(87: return param_1;)F180142db0F",
    R"F180142db0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180142db0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180142db0() noexcept {
    return kFunction_0x180142db0;
}

// 0x180142f70 FUN_180142f70
// source: re/dump/decompile/0x180142f70_FUN_180142f70.c
// size: 199 bytes; thunk: false
// body sha256: f97e1ec3ccba3f0b560af761428e797ddd02b3c727d6c8f7df9d5a34a07a6506
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180142f70{
    "0x180142f70",
    "FUN_180142f70",
    R"F180142f70S(undefined FUN_180142f70())F180142f70S",
    R"B180142f70(// 0x180142f70  FUN_180142f70
// size=199 thunk=false
// signature: undefined FUN_180142f70()
// status: ok


void FUN_180142f70(longlong param_1)

{
  FUN_18020e450(param_1 + 0x1c0);
  FUN_18020e450(param_1 + 0x1a0);
  FUN_18020e450(param_1 + 0x180);
  FUN_18020e450(param_1 + 0x160);
  FUN_18020e450(param_1 + 0x140);
  FUN_18020e450(param_1 + 0x120);
  FUN_18020e450(param_1 + 0x100);
  FUN_18020e450(param_1 + 0xe0);
  FUN_18020e450(param_1 + 0xc0);
  FUN_18020e450(param_1 + 0xa0);
  FUN_18020e450(param_1 + 0x80);
  FUN_18020e450(param_1 + 0x60);
  FUN_18020e450(param_1 + 0x40);
  FUN_18020e450(param_1 + 0x20);
  FUN_18020e450(param_1);
  return;
}


)B180142f70",
    "f97e1ec3ccba3f0b560af761428e797ddd02b3c727d6c8f7df9d5a34a07a6506",
    R"F180142f70C(FUN_18020e450)F180142f70C",
    R"F180142f70D()F180142f70D",
    R"F180142f70T()F180142f70T",
    R"F180142f70F(25: return;)F180142f70F",
    R"F180142f70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180142f70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180142f70() noexcept {
    return kFunction_0x180142f70;
}

// 0x180143040 FUN_180143040
// source: re/dump/decompile/0x180143040_FUN_180143040.c
// size: 906 bytes; thunk: false
// body sha256: 86d2ff1639fc6ff77a08cdb8c788e488aeeda8f4910dbe0ac5d337f45ed62496
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180143040{
    "0x180143040",
    "FUN_180143040",
    R"F180143040S(undefined FUN_180143040())F180143040S",
    R"B180143040(// 0x180143040  FUN_180143040
// size=906 thunk=false
// signature: undefined FUN_180143040()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180143040(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  undefined8 *puVar6;
  byte ****ppppbVar7;
  undefined8 ****ppppuVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined8 ***local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong uStack_f8;
  undefined8 ***local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong uStack_d8;
  byte ***local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulonglong uStack_b8;
  byte ***local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulonglong uStack_98;
  undefined *local_90;
  undefined1 local_88 [32];
  char local_68 [24];
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  iVar10 = 0;
  local_118 = 0;
  local_90 = &DAT_1803e7c90;
  iVar2 = _Mtx_lock(&DAT_1803e7c90);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e7cdc == 0x7fffffff) {
    DAT_1803e7cdc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  FUN_1801fc280(param_1,"\n# Kill say messages\n");
  local_d0 = (byte ***)0x0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  FUN_18001d080(&local_d0,"killsay.count",0xd);
  uVar11 = 0x14650fb0739d0383;
  if (uStack_b8 < 0x10) {
    ppppbVar7 = &local_d0;
  }
  else {
    ppppbVar7 = (byte ****)local_d0;
    if ((byte ****)local_d0 == (byte ****)0x0) goto LAB_180143134;
  }
  do {
    if (*(byte *)ppppbVar7 == 0) break;
    uVar11 = (uVar11 ^ *(byte *)ppppbVar7) * 0x100000001b3;
    ppppbVar7 = (byte ****)((longlong)ppppbVar7 + 1);
  } while (ppppbVar7 != (byte ****)0x0);
LAB_180143134:
  FUN_180012ac0(local_68,0x11,"%016llx",uVar11);
  local_110 = (undefined8 ****)0x0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  sVar3 = strlen(local_68);
  FUN_18001d080(&local_110,local_68,sVar3);
  local_118 = 8;
  ppppuVar8 = &local_110;
  if (0xf < uStack_f8) {
    ppppuVar8 = (undefined8 ****)local_110;
  }
  uVar4 = FUN_180210c60(param_1,ppppuVar8,local_100);
  this = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar4,&DAT_18034118c);
  pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     (this,DAT_1803e9f68 - DAT_1803e9f60 >> 5);
  FUN_1801fc280(pbVar5,&DAT_18033e92c);
  local_118 = 0;
  FUN_18020e450(&local_110);
  FUN_18020e450(&local_d0);
  if (0 < (int)(DAT_1803e9f68 - DAT_1803e9f60 >> 5)) {
    do {
      uVar4 = FUN_180013ba0(local_88,iVar10);
      puVar6 = (undefined8 *)FUN_18022a630(uVar4);
      ppppbVar7 = (byte ****)*puVar6;
      local_b0 = (byte ***)ppppbVar7;
      uStack_a8 = puVar6[1];
      uStack_98 = puVar6[3];
      local_a0 = puVar6[2];
      *(undefined1 *)puVar6 = 0;
      puVar6[2] = 0;
      puVar6[3] = 0xf;
      local_118 = 1;
      uVar11 = 0x14650fb0739d0383;
      if (uStack_98 < 0x10) {
        ppppbVar7 = &local_b0;
        goto LAB_180143292;
      }
      for (; ppppbVar7 != (byte ****)0x0; ppppbVar7 = (byte ****)((longlong)ppppbVar7 + 1)) {
LAB_180143292:
        if (*(byte *)ppppbVar7 == 0) break;
        uVar11 = (uVar11 ^ *(byte *)ppppbVar7) * 0x100000001b3;
      }
      FUN_180012ac0(local_68,0x11,"%016llx",uVar11);
      local_f0 = (undefined8 ****)0x0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      sVar3 = strlen(local_68);
      FUN_18001d080(&local_f0,local_68,sVar3);
      local_118 = 3;
      ppppuVar8 = &local_f0;
      if (0xf < uStack_d8) {
        ppppuVar8 = (undefined8 ****)local_f0;
      }
      uVar4 = FUN_180210c60(param_1,ppppuVar8,local_e0);
      uVar4 = FUN_1801fc280(uVar4,&DAT_18034118c);
      puVar9 = (undefined8 *)((longlong)iVar10 * 0x20 + DAT_1803e9f60);
      puVar6 = puVar9 + 2;
      if (0xf < (ulonglong)puVar9[3]) {
        puVar9 = (undefined8 *)*puVar9;
      }
      uVar4 = FUN_180210c60(uVar4,puVar9,*puVar6);
      FUN_1801fc280(uVar4,&DAT_18033e92c);
      local_118 = 1;
      FUN_18020e450(&local_f0);
      local_118 = 0;
      FUN_18020e450(&local_b0);
      FUN_18020e450(local_88);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)(DAT_1803e9f68 - DAT_1803e9f60 >> 5));
  }
  _Mtx_unlock(&DAT_1803e7c90);
  return;
}


)B180143040",
    "86d2ff1639fc6ff77a08cdb8c788e488aeeda8f4910dbe0ac5d337f45ed62496",
    R"F180143040C(FUN_180012ac0
FUN_180013ba0
FUN_18001d080
FUN_1801fc280
FUN_18020e450
FUN_180210c60
FUN_18022a630)F180143040C",
    R"F180143040D(LAB_180143134
LAB_180143292
DAT_18033e92c
DAT_18034118c
DAT_1803da4c0
DAT_1803e7c90
DAT_1803e7cdc
DAT_1803e9f60
DAT_1803e9f68)F180143040D",
    R"F180143040T("%016llx"
"killsay.count"
"\\n# Kill say messages\\n")F180143040T",
    R"F180143040F(52: if (iVar2 != 0) {
56: return;
58: if (DAT_1803e7cdc == 0x7fffffff) {
69: if (uStack_b8 < 0x10) {
72: else {
74: if ((byte ****)local_d0 == (byte ****)0x0) goto LAB_180143134;
76: do {
77: if (*(byte *)ppppbVar7 == 0) break;
81: LAB_180143134:
91: if (0xf < uStack_f8) {
102: if (0 < (int)(DAT_1803e9f68 - DAT_1803e9f60 >> 5)) {
103: do {
116: if (uStack_98 < 0x10) {
118: goto LAB_180143292;
120: for (; ppppbVar7 != (byte ****)0x0; ppppbVar7 = (byte ****)((longlong)ppppbVar7 + 1)) {
121: LAB_180143292:
122: if (*(byte *)ppppbVar7 == 0) break;
134: if (0xf < uStack_d8) {
141: if (0xf < (ulonglong)puVar9[3]) {
155: return;)F180143040F",
    R"F180143040U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180143134.
TODO: recover the declaration, type and value for global/data reference LAB_180143292.
TODO: recover the declaration, type and value for global/data reference DAT_18033e92c.
TODO: recover the declaration, type and value for global/data reference DAT_18034118c.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7c90.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7cdc.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f60.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f68.
TODO: resolve the indirect call in body 54: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 55: (*pcVar1)();.)F180143040U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180143040() noexcept {
    return kFunction_0x180143040;
}

// 0x1801433d0 FUN_1801433d0
// source: re/dump/decompile/0x1801433d0_FUN_1801433d0.c
// size: 747 bytes; thunk: false
// body sha256: 3b8cf25e2fc653148a0f55597fb715d58e144785356e3c36f0bad28da3bf65b8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801433d0{
    "0x1801433d0",
    "FUN_1801433d0",
    R"F1801433d0S(undefined FUN_1801433d0())F1801433d0S",
    R"B1801433d0(// 0x1801433d0  FUN_1801433d0
// size=747 thunk=false
// signature: undefined FUN_1801433d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801433d0(longlong *param_1)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  byte ******ppppppbVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  byte *****local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulonglong uStack_c8;
  undefined *local_c0;
  undefined1 *local_b8;
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined1 local_70 [16];
  longlong local_60;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  local_e8 = 0;
  local_c0 = &DAT_1803e7c90;
  iVar4 = _Mtx_lock(&DAT_1803e7c90);
  if (iVar4 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_1803e7cdc == 0x7fffffff) {
    DAT_1803e7cdc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  lVar3 = DAT_1803e9f68;
  lVar13 = DAT_1803e9f60;
  if (DAT_1803e9f60 != DAT_1803e9f68) {
    do {
      FUN_18020e450(lVar13);
      lVar13 = lVar13 + 0x20;
    } while (lVar13 != lVar3);
    DAT_1803e9f68 = DAT_1803e9f60;
  }
  FUN_18021d430(&DAT_18056dea0);
  _DAT_1803e7ce4 = 0xc2c80000;
  DAT_1803e7ce0 = 0xffffffff;
  plVar10 = (longlong *)*param_1;
  plVar8 = (longlong *)plVar10[1];
  cVar1 = *(char *)((longlong)plVar8 + 0x19);
  plVar14 = plVar10;
  while (cVar1 == '\0') {
    plVar9 = plVar8;
    if ((ulonglong)plVar8[4] < 0xba55568a1ebcbe8f) {
      plVar8 = plVar8 + 2;
      plVar9 = plVar14;
    }
    plVar8 = (longlong *)*plVar8;
    plVar14 = plVar9;
    cVar1 = *(char *)((longlong)plVar8 + 0x19);
  }
  if (((*(char *)((longlong)plVar14 + 0x19) == '\0') && ((ulonglong)plVar14[4] < 0xba55568a1ebcbe90)
      ) && (plVar14 != plVar10)) {
    plVar10 = plVar14 + 5;
    if (0xf < (ulonglong)plVar14[8]) {
      plVar10 = (longlong *)*plVar10;
    }
    iVar5 = atoi((char *)plVar10);
    iVar4 = 0;
    if (-1 < iVar5) {
      iVar4 = iVar5;
    }
    if (0x40 < iVar4) {
      iVar4 = 0x40;
    }
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        uVar6 = FUN_180013ba0(local_b0,iVar5);
        puVar7 = (undefined8 *)FUN_18022a630(uVar6);
        ppppppbVar12 = (byte ******)*puVar7;
        local_e0 = (byte *****)ppppppbVar12;
        uStack_d8 = puVar7[1];
        uStack_c8 = puVar7[3];
        local_d0 = puVar7[2];
        *(undefined1 *)puVar7 = 0;
        puVar7[2] = 0;
        puVar7[3] = 0xf;
        uVar11 = 0x14650fb0739d0383;
        if (uStack_c8 < 0x10) {
          ppppppbVar12 = &local_e0;
          goto LAB_1801435c0;
        }
        for (; ppppppbVar12 != (byte ******)0x0;
            ppppppbVar12 = (byte ******)((longlong)ppppppbVar12 + 1)) {
LAB_1801435c0:
          if (*(byte *)ppppppbVar12 == 0) break;
          uVar11 = (uVar11 ^ *(byte *)ppppppbVar12) * 0x100000001b3;
        }
        plVar10 = (longlong *)*param_1;
        plVar8 = (longlong *)plVar10[1];
        cVar1 = *(char *)((longlong)plVar8 + 0x19);
        plVar14 = plVar10;
        while (cVar1 == '\0') {
          plVar9 = plVar8;
          if ((ulonglong)plVar8[4] < uVar11) {
            plVar8 = plVar8 + 2;
            plVar9 = plVar14;
          }
          plVar8 = (longlong *)*plVar8;
          plVar14 = plVar9;
          cVar1 = *(char *)((longlong)plVar8 + 0x19);
        }
        if ((*(char *)((longlong)plVar14 + 0x19) != '\0') || (uVar11 < (ulonglong)plVar14[4])) {
          plVar14 = plVar10;
        }
        local_e8 = 0;
        FUN_18020e450(&local_e0);
        FUN_18020e450(local_b0);
        if (plVar14 != (longlong *)*param_1) {
          local_b8 = local_90;
          uVar6 = FUN_18016d4c0(local_90,plVar14 + 5);
          FUN_180140b70(local_70,uVar6);
          if (local_60 != 0) {
            FUN_180214300(&DAT_1803e9f60,local_70);
          }
          FUN_18020e450(local_70);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
  }
  _Mtx_unlock(&DAT_1803e7c90);
  return;
}


)B1801433d0",
    "3b8cf25e2fc653148a0f55597fb715d58e144785356e3c36f0bad28da3bf65b8",
    R"F1801433d0C(FUN_180013ba0
FUN_180140b70
FUN_18016d4c0
FUN_18020e450
FUN_180214300
FUN_18021d430
FUN_18022a630)F1801433d0C",
    R"F1801433d0D(LAB_1801435c0
DAT_1803da4c0
DAT_1803e7c90
DAT_1803e7cdc
DAT_1803e7ce0
DAT_1803e9f60
DAT_1803e9f68
DAT_18056dea0)F1801433d0D",
    R"F1801433d0T()F1801433d0T",
    R"F1801433d0F(45: if (iVar4 != 0) {
49: return;
51: if (DAT_1803e7cdc == 0x7fffffff) {
57: if (DAT_1803e9f60 != DAT_1803e9f68) {
58: do {
71: while (cVar1 == '\0') {
73: if ((ulonglong)plVar8[4] < 0xba55568a1ebcbe8f) {
81: if (((*(char *)((longlong)plVar14 + 0x19) == '\0') && ((ulonglong)plVar14[4] < 0xba55568a1ebcbe90)
84: if (0xf < (ulonglong)plVar14[8]) {
89: if (-1 < iVar5) {
92: if (0x40 < iVar4) {
96: if (0 < iVar4) {
97: do {
109: if (uStack_c8 < 0x10) {
111: goto LAB_1801435c0;
113: for (; ppppppbVar12 != (byte ******)0x0;
115: LAB_1801435c0:
116: if (*(byte *)ppppppbVar12 == 0) break;
123: while (cVar1 == '\0') {
125: if ((ulonglong)plVar8[4] < uVar11) {
133: if ((*(char *)((longlong)plVar14 + 0x19) != '\0') || (uVar11 < (ulonglong)plVar14[4])) {
139: if (plVar14 != (longlong *)*param_1) {
143: if (local_60 != 0) {
153: return;)F1801433d0F",
    R"F1801433d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1801435c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7c90.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7cdc.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7ce0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f60.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f68.
TODO: recover the declaration, type and value for global/data reference DAT_18056dea0.
TODO: resolve the indirect call in body 47: pcVar2 = (code *)swi(3);.
TODO: resolve the indirect call in body 48: (*pcVar2)();.)F1801433d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801433d0() noexcept {
    return kFunction_0x1801433d0;
}

// 0x1801436c0 FUN_1801436c0
// source: re/dump/decompile/0x1801436c0_FUN_1801436c0.c
// size: 498 bytes; thunk: false
// body sha256: ef447af30ff439f7661ebbcb311c4f2b3e690f861b0b8d3c78373e68e9236142
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801436c0{
    "0x1801436c0",
    "FUN_1801436c0",
    R"F1801436c0S(undefined FUN_1801436c0())F1801436c0S",
    R"B1801436c0(// 0x1801436c0  FUN_1801436c0
// size=498 thunk=false
// signature: undefined FUN_1801436c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801436c0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  char *pcVar7;
  size_t sVar8;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  char local_168 [336];
  ulonglong local_18;
  
  if (param_1 != 0) {
    local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_1d8;
    if (DAT_180409841 == '\0') {
      DAT_180409841 = '\x01';
      FUN_180014410("[KILLSAY] player_death DELIVERED -- the health poll is off for this map\n");
    }
    if (DAT_1803fa668 != (longlong *)0x0) {
      local_198 = 0x93fd561a96ab0c67;
      local_190 = 0x6507776eb2e9032e;
      plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_1b8,&local_198);
      plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_1a8,&local_190);
      pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
      if (*pcVar7 != '\0') {
        iVar2 = FUN_18006da40(param_1,"attacker",0);
        iVar3 = FUN_18006da40(param_1,"userid",0);
        if (((0 < iVar2) && (0 < iVar3)) && (iVar2 != iVar3)) {
          iVar2 = (**(code **)(*DAT_1803fa668 + 0x48))(DAT_1803fa668,iVar2);
          iVar4 = (**(code **)(*DAT_1803fa668 + 0x48))(DAT_1803fa668,iVar3);
          iVar5 = (**(code **)(*DAT_1803fa668 + 0x60))();
          if ((iVar2 == iVar5) && (0 < iVar4)) {
            memset(local_168,0,0x144);
            local_188 = 0;
            uStack_180 = 0;
            local_178 = 0;
            uStack_170 = 0;
            FUN_18001d080(&local_188,"enemy",5);
            cVar1 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,iVar4,local_168);
            if ((cVar1 != '\0') && (local_168[0] != '\0')) {
              sVar8 = strlen(local_168);
              FUN_180212700(&local_188,local_168,sVar8);
            }
            FUN_180142670(&local_188,iVar3,iVar4,1);
            FUN_18020e450(&local_188);
          }
        }
      }
    }
  }
  return;
}


)B1801436c0",
    "ef447af30ff439f7661ebbcb311c4f2b3e690f861b0b8d3c78373e68e9236142",
    R"F1801436c0C(FUN_180014410
FUN_18001d080
FUN_18006da40
FUN_180142670
FUN_1801fcfc0
FUN_18020e450
FUN_180212700
FUN_180241a30)F1801436c0C",
    R"F1801436c0D(DAT_1803da4c0
DAT_1803fa668
DAT_1803fadf0
DAT_180409841)F1801436c0D",
    R"F1801436c0T("enemy"
"userid"
"attacker"
"[KILLSAY] player_death DELIVERED -- the health poll is off for this map\\n")F1801436c0T",
    R"F1801436c0F(32: if (param_1 != 0) {
34: if (DAT_180409841 == '\0') {
38: if (DAT_1803fa668 != (longlong *)0x0) {
44: if (*pcVar7 != '\0') {
47: if (((0 < iVar2) && (0 < iVar3)) && (iVar2 != iVar3)) {
51: if ((iVar2 == iVar5) && (0 < iVar4)) {
59: if ((cVar1 != '\0') && (local_168[0] != '\0')) {
70: return;)F1801436c0F",
    R"F1801436c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_180409841.
TODO: resolve the indirect call in body 48: iVar2 = (**(code **)(*DAT_1803fa668 + 0x48))(DAT_1803fa668,iVar2);.
TODO: resolve the indirect call in body 49: iVar4 = (**(code **)(*DAT_1803fa668 + 0x48))(DAT_1803fa668,iVar3);.
TODO: resolve the indirect call in body 50: iVar5 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 58: cVar1 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,iVar4,local_168);.)F1801436c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801436c0() noexcept {
    return kFunction_0x1801436c0;
}

// 0x1801438c0 Features_KillSay_KillSayFeature_vfunc16
// source: re/dump/decompile/0x1801438c0_Features_KillSay_KillSayFeature_vfunc16.c
// size: 162 bytes; thunk: false
// body sha256: f7a8aafb294f559be9b85b1ebff3d1b8b59cc2b33ac9761d15089f2ad049357b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801438c0{
    "0x1801438c0",
    "Features_KillSay_KillSayFeature_vfunc16",
    R"F1801438c0S(undefined Features_KillSay_KillSayFeature_vfunc16())F1801438c0S",
    R"B1801438c0(// 0x1801438c0  Features_KillSay_KillSayFeature_vfunc16
// size=162 thunk=false
// signature: undefined Features_KillSay_KillSayFeature_vfunc16()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_KillSay_KillSayFeature_vfunc16(void)

{
  code *pcVar1;
  int iVar2;
  
  DAT_180409848 = 0;
  DAT_18040984c = 0;
  DAT_180409841 = 0;
  DAT_180409851 = 0;
  DAT_180409850 = 0;
  DAT_180409840 = 0;
  iVar2 = _Mtx_lock(&DAT_1803e7c90);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e7cdc == 0x7fffffff) {
    DAT_1803e7cdc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  FUN_18021d430(&DAT_18056dea0);
  _DAT_1803e7ce4 = 0xc2c80000;
  DAT_1803e7ce0 = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x00018014395b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Mtx_unlock(&DAT_1803e7c90);
  return;
}


)B1801438c0",
    "f7a8aafb294f559be9b85b1ebff3d1b8b59cc2b33ac9761d15089f2ad049357b",
    R"F1801438c0C(FUN_18021d430)F1801438c0C",
    R"F1801438c0D(DAT_1803e7c90
DAT_1803e7cdc
DAT_1803e7ce0
DAT_180409840
DAT_180409841
DAT_180409848
DAT_18040984c
DAT_180409850
DAT_180409851
DAT_18056dea0)F1801438c0D",
    R"F1801438c0T()F1801438c0T",
    R"F1801438c0F(22: if (iVar2 != 0) {
26: return;
28: if (DAT_1803e7cdc == 0x7fffffff) {
38: return;)F1801438c0F",
    R"F1801438c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7c90.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7cdc.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7ce0.
TODO: recover the declaration, type and value for global/data reference DAT_180409840.
TODO: recover the declaration, type and value for global/data reference DAT_180409841.
TODO: recover the declaration, type and value for global/data reference DAT_180409848.
TODO: recover the declaration, type and value for global/data reference DAT_18040984c.
TODO: recover the declaration, type and value for global/data reference DAT_180409850.
TODO: recover the declaration, type and value for global/data reference DAT_180409851.
TODO: recover the declaration, type and value for global/data reference DAT_18056dea0.
TODO: resolve the indirect call in body 24: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 25: (*pcVar1)();.)F1801438c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801438c0() noexcept {
    return kFunction_0x1801438c0;
}

// 0x180143970 Features_KillSay_KillSayFeature_vfunc01
// source: re/dump/decompile/0x180143970_Features_KillSay_KillSayFeature_vfunc01.c
// size: 941 bytes; thunk: false
// body sha256: f206ff5c2b15f03403530e093c320d0d39db7a17d8d51aec138f2e47674f1c0f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180143970{
    "0x180143970",
    "Features_KillSay_KillSayFeature_vfunc01",
    R"F180143970S(undefined Features_KillSay_KillSayFeature_vfunc01())F180143970S",
    R"B180143970(// 0x180143970  Features_KillSay_KillSayFeature_vfunc01
// size=941 thunk=false
// signature: undefined Features_KillSay_KillSayFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_KillSay_KillSayFeature_vfunc01(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  char *pcVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 uVar8;
  float *pfVar9;
  undefined8 ****ppppuVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_108 [32];
  undefined *local_e8;
  undefined1 local_e0 [32];
  float local_c0 [2];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90 [2];
  undefined8 local_80 [2];
  undefined8 ***local_70 [3];
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  local_b8 = 0x93fd561a96ab0c67;
  plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_90,&local_b8);
  local_c0[0] = -2.7126216e-08;
  local_c0[1] = 3.998266e+22;
  plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_80,local_c0);
  pcVar5 = (char *)FUN_1801fcfc0(*plVar4 + 0x28);
  if (*pcVar5 == '\0') {
    local_90[0] = &DAT_1803e7c90;
    iVar3 = _Mtx_lock(&DAT_1803e7c90);
    if (iVar3 == 0) {
      if (DAT_1803e7cdc == 0x7fffffff) {
        DAT_1803e7cdc = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      FUN_18021d430(&DAT_18056dea0);
      _Mtx_unlock(&DAT_1803e7c90);
      return;
    }
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_1803fa608 == 0) {
    return;
  }
  if (DAT_1803fa668 == 0) {
    return;
  }
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0xf;
  local_b0 = 0;
  local_e8 = &DAT_1803e7c90;
  iVar3 = _Mtx_lock(&DAT_1803e7c90);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_1803e7cdc == 0x7fffffff) {
    DAT_1803e7cdc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  if (DAT_18056dec0 != 0) {
    fVar12 = (float)*(double *)(DAT_1803fa608 + 0x10);
    fVar11 = *(float *)(param_1 + 8);
    if (fVar12 + DAT_180381068 < fVar11) {
      *(undefined4 *)(param_1 + 8) = 0;
      fVar11 = 0.0;
    }
    if (fVar11 <= fVar12) {
      puVar1 = *(undefined8 **)(DAT_18056dea8 + (DAT_18056deb0 - 1U & DAT_18056deb8) * 8);
      if (&local_b0 != puVar1) {
        local_b0 = *puVar1;
        uStack_a8 = puVar1[1];
        local_a0 = puVar1[2];
        uStack_98 = puVar1[3];
        puVar1[2] = 0;
        puVar1[3] = 0xf;
        *(undefined1 *)puVar1 = 0;
      }
      FUN_18020e450(*(undefined8 *)(DAT_18056dea8 + (DAT_18056deb0 - 1U & DAT_18056deb8) * 8));
      fVar11 = DAT_180380a6c;
      DAT_18056dec0 = DAT_18056dec0 + -1;
      if (DAT_18056dec0 == 0) {
        DAT_18056deb8 = 0;
      }
      else {
        DAT_18056deb8 = DAT_18056deb8 + 1;
      }
      local_b8 = CONCAT44(local_b8._4_4_,0x41200000);
      local_c0[0] = 0.3;
      local_80[0] = 0x93fd561a96ab0c67;
      plVar4 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_e0,local_80);
      local_90[0] = (undefined *)0x96ef6034594ad9f2;
      plVar4 = (longlong *)FUN_180241a30(*plVar4 + 0x28,local_70,local_90);
      pfVar6 = (float *)FUN_180202dc0(*plVar4 + 0x28);
      pfVar9 = local_c0;
      if (fVar11 <= *pfVar6) {
        pfVar9 = pfVar6;
      }
      pfVar7 = (float *)&local_b8;
      if (*pfVar6 <= DAT_180380fcc) {
        pfVar7 = pfVar9;
      }
      *(float *)(param_1 + 8) = fVar12 + *pfVar7;
      _Mtx_unlock(&DAT_1803e7c90);
      uVar8 = FUN_1801fd120(local_e0,"say \"",&local_b0);
      FUN_1801fc680(local_70,uVar8,&DAT_18033f5a8);
      FUN_18020e450(local_e0);
      ppppuVar10 = local_70;
      if (0xf < local_58) {
        ppppuVar10 = (undefined8 ****)local_70[0];
      }
      FUN_1801424f0(DAT_1803fa668,ppppuVar10);
      FUN_18020e450(local_70);
      goto LAB_180143ce6;
    }
  }
  _Mtx_unlock(&DAT_1803e7c90);
LAB_180143ce6:
  FUN_18020e450(&local_b0);
  return;
}


)B180143970",
    "f206ff5c2b15f03403530e093c320d0d39db7a17d8d51aec138f2e47674f1c0f",
    R"F180143970C(FUN_1801424f0
FUN_1801fc680
FUN_1801fcfc0
FUN_1801fd120
FUN_180202dc0
FUN_18020e450
FUN_18021d430
FUN_180241a30)F180143970C",
    R"F180143970D(LAB_180143ce6
DAT_18033f5a8
DAT_180380a6c
DAT_180380fcc
DAT_180381068
DAT_1803da4c0
DAT_1803e7c90
DAT_1803e7cdc
DAT_1803fa608
DAT_1803fa668
DAT_1803fadf0
DAT_18056dea0
DAT_18056dea8
DAT_18056deb0
DAT_18056deb8
DAT_18056dec0)F180143970D",
    R"F180143970T("say \\\"")F180143970T",
    R"F180143970F(46: if (*pcVar5 == '\0') {
49: if (iVar3 == 0) {
50: if (DAT_1803e7cdc == 0x7fffffff) {
56: return;
61: return;
63: if (DAT_1803fa608 == 0) {
64: return;
66: if (DAT_1803fa668 == 0) {
67: return;
75: if (iVar3 != 0) {
79: return;
81: if (DAT_1803e7cdc == 0x7fffffff) {
85: if (DAT_18056dec0 != 0) {
88: if (fVar12 + DAT_180381068 < fVar11) {
92: if (fVar11 <= fVar12) {
94: if (&local_b0 != puVar1) {
106: if (DAT_18056dec0 == 0) {
109: else {
120: if (fVar11 <= *pfVar6) {
124: if (*pfVar6 <= DAT_180380fcc) {
133: if (0xf < local_58) {
138: goto LAB_180143ce6;
142: LAB_180143ce6:
144: return;)F180143970F",
    R"F180143970U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180143ce6.
TODO: recover the declaration, type and value for global/data reference DAT_18033f5a8.
TODO: recover the declaration, type and value for global/data reference DAT_180380a6c.
TODO: recover the declaration, type and value for global/data reference DAT_180380fcc.
TODO: recover the declaration, type and value for global/data reference DAT_180381068.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7c90.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7cdc.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa608.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_18056dea0.
TODO: recover the declaration, type and value for global/data reference DAT_18056dea8.
TODO: recover the declaration, type and value for global/data reference DAT_18056deb0.
TODO: recover the declaration, type and value for global/data reference DAT_18056deb8.
TODO: recover the declaration, type and value for global/data reference DAT_18056dec0.
TODO: resolve the indirect call in body 59: pcVar2 = (code *)swi(3);.
TODO: resolve the indirect call in body 60: (*pcVar2)();.
TODO: resolve the indirect call in body 77: pcVar2 = (code *)swi(3);.
TODO: resolve the indirect call in body 78: (*pcVar2)();.)F180143970U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180143970() noexcept {
    return kFunction_0x180143970;
}

// 0x180143d20 FUN_180143d20
// source: re/dump/decompile/0x180143d20_FUN_180143d20.c
// size: 906 bytes; thunk: false
// body sha256: 6046b94b79074489d84b4fdd6a0263de922e9dc7aed867b1589d8b4d52d880ee
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180143d20{
    "0x180143d20",
    "FUN_180143d20",
    R"F180143d20S(undefined FUN_180143d20())F180143d20S",
    R"B180143d20(// 0x180143d20  FUN_180143d20
// size=906 thunk=false
// signature: undefined FUN_180143d20()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180143d20(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  basic_ostream<char,std::char_traits<char>_> *this;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar5;
  undefined8 *puVar6;
  byte ****ppppbVar7;
  undefined8 ****ppppuVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined8 ***local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulonglong uStack_f8;
  undefined8 ***local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong uStack_d8;
  byte ***local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulonglong uStack_b8;
  byte ***local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulonglong uStack_98;
  undefined *local_90;
  undefined1 local_88 [32];
  char local_68 [24];
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  iVar10 = 0;
  local_118 = 0;
  local_90 = &DAT_1803e87e0;
  iVar2 = _Mtx_lock(&DAT_1803e87e0);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e882c == 0x7fffffff) {
    DAT_1803e882c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  FUN_1801fc280(param_1,"\n# Chat spam messages\n");
  local_d0 = (byte ***)0x0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  FUN_18001d080(&local_d0,"chatspam.count",0xe);
  uVar11 = 0x14650fb0739d0383;
  if (uStack_b8 < 0x10) {
    ppppbVar7 = &local_d0;
  }
  else {
    ppppbVar7 = (byte ****)local_d0;
    if ((byte ****)local_d0 == (byte ****)0x0) goto LAB_180143e14;
  }
  do {
    if (*(byte *)ppppbVar7 == 0) break;
    uVar11 = (uVar11 ^ *(byte *)ppppbVar7) * 0x100000001b3;
    ppppbVar7 = (byte ****)((longlong)ppppbVar7 + 1);
  } while (ppppbVar7 != (byte ****)0x0);
LAB_180143e14:
  FUN_180012ac0(local_68,0x11,"%016llx",uVar11);
  local_110 = (undefined8 ****)0x0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  sVar3 = strlen(local_68);
  FUN_18001d080(&local_110,local_68,sVar3);
  local_118 = 8;
  ppppuVar8 = &local_110;
  if (0xf < uStack_f8) {
    ppppuVar8 = (undefined8 ****)local_110;
  }
  uVar4 = FUN_180210c60(param_1,ppppuVar8,local_100);
  this = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar4,&DAT_18034118c);
  pbVar5 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     (this,DAT_1803e9d10 - DAT_1803e9d08 >> 5);
  FUN_1801fc280(pbVar5,&DAT_18033e92c);
  local_118 = 0;
  FUN_18020e450(&local_110);
  FUN_18020e450(&local_d0);
  if (0 < (int)(DAT_1803e9d10 - DAT_1803e9d08 >> 5)) {
    do {
      uVar4 = FUN_180013ba0(local_88,iVar10);
      puVar6 = (undefined8 *)FUN_18022a630(uVar4);
      ppppbVar7 = (byte ****)*puVar6;
      local_b0 = (byte ***)ppppbVar7;
      uStack_a8 = puVar6[1];
      uStack_98 = puVar6[3];
      local_a0 = puVar6[2];
      *(undefined1 *)puVar6 = 0;
      puVar6[2] = 0;
      puVar6[3] = 0xf;
      local_118 = 1;
      uVar11 = 0x14650fb0739d0383;
      if (uStack_98 < 0x10) {
        ppppbVar7 = &local_b0;
        goto LAB_180143f72;
      }
      for (; ppppbVar7 != (byte ****)0x0; ppppbVar7 = (byte ****)((longlong)ppppbVar7 + 1)) {
LAB_180143f72:
        if (*(byte *)ppppbVar7 == 0) break;
        uVar11 = (uVar11 ^ *(byte *)ppppbVar7) * 0x100000001b3;
      }
      FUN_180012ac0(local_68,0x11,"%016llx",uVar11);
      local_f0 = (undefined8 ****)0x0;
      uStack_e8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      sVar3 = strlen(local_68);
      FUN_18001d080(&local_f0,local_68,sVar3);
      local_118 = 3;
      ppppuVar8 = &local_f0;
      if (0xf < uStack_d8) {
        ppppuVar8 = (undefined8 ****)local_f0;
      }
      uVar4 = FUN_180210c60(param_1,ppppuVar8,local_e0);
      uVar4 = FUN_1801fc280(uVar4,&DAT_18034118c);
      puVar9 = (undefined8 *)((longlong)iVar10 * 0x20 + DAT_1803e9d08);
      puVar6 = puVar9 + 2;
      if (0xf < (ulonglong)puVar9[3]) {
        puVar9 = (undefined8 *)*puVar9;
      }
      uVar4 = FUN_180210c60(uVar4,puVar9,*puVar6);
      FUN_1801fc280(uVar4,&DAT_18033e92c);
      local_118 = 1;
      FUN_18020e450(&local_f0);
      local_118 = 0;
      FUN_18020e450(&local_b0);
      FUN_18020e450(local_88);
      iVar10 = iVar10 + 1;
    } while (iVar10 < (int)(DAT_1803e9d10 - DAT_1803e9d08 >> 5));
  }
  _Mtx_unlock(&DAT_1803e87e0);
  return;
}


)B180143d20",
    "6046b94b79074489d84b4fdd6a0263de922e9dc7aed867b1589d8b4d52d880ee",
    R"F180143d20C(FUN_180012ac0
FUN_180013ba0
FUN_18001d080
FUN_1801fc280
FUN_18020e450
FUN_180210c60
FUN_18022a630)F180143d20C",
    R"F180143d20D(LAB_180143e14
LAB_180143f72
DAT_18033e92c
DAT_18034118c
DAT_1803da4c0
DAT_1803e87e0
DAT_1803e882c
DAT_1803e9d08
DAT_1803e9d10)F180143d20D",
    R"F180143d20T("%016llx"
"chatspam.count"
"\\n# Chat spam messages\\n")F180143d20T",
    R"F180143d20F(52: if (iVar2 != 0) {
56: return;
58: if (DAT_1803e882c == 0x7fffffff) {
69: if (uStack_b8 < 0x10) {
72: else {
74: if ((byte ****)local_d0 == (byte ****)0x0) goto LAB_180143e14;
76: do {
77: if (*(byte *)ppppbVar7 == 0) break;
81: LAB_180143e14:
91: if (0xf < uStack_f8) {
102: if (0 < (int)(DAT_1803e9d10 - DAT_1803e9d08 >> 5)) {
103: do {
116: if (uStack_98 < 0x10) {
118: goto LAB_180143f72;
120: for (; ppppbVar7 != (byte ****)0x0; ppppbVar7 = (byte ****)((longlong)ppppbVar7 + 1)) {
121: LAB_180143f72:
122: if (*(byte *)ppppbVar7 == 0) break;
134: if (0xf < uStack_d8) {
141: if (0xf < (ulonglong)puVar9[3]) {
155: return;)F180143d20F",
    R"F180143d20U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180143e14.
TODO: recover the declaration, type and value for global/data reference LAB_180143f72.
TODO: recover the declaration, type and value for global/data reference DAT_18033e92c.
TODO: recover the declaration, type and value for global/data reference DAT_18034118c.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e87e0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e882c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9d08.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9d10.
TODO: resolve the indirect call in body 54: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 55: (*pcVar1)();.)F180143d20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180143d20() noexcept {
    return kFunction_0x180143d20;
}

// 0x1801440b0 FUN_1801440b0
// source: re/dump/decompile/0x1801440b0_FUN_1801440b0.c
// size: 732 bytes; thunk: false
// body sha256: 657fa3f4243ef42bf973da096ac620d906ba80fefe3d72dd5d5e75f5eb4db82c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801440b0{
    "0x1801440b0",
    "FUN_1801440b0",
    R"F1801440b0S(undefined FUN_1801440b0())F1801440b0S",
    R"B1801440b0(// 0x1801440b0  FUN_1801440b0
// size=732 thunk=false
// signature: undefined FUN_1801440b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801440b0(longlong *param_1)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int *piVar10;
  ulonglong uVar11;
  int *piVar12;
  byte *******pppppppbVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  int local_f4 [3];
  byte ******local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong uStack_d0;
  undefined *local_c8;
  undefined1 *local_c0;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [16];
  longlong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_118;
  local_f8 = 0;
  local_c8 = &DAT_1803e87e0;
  iVar4 = _Mtx_lock(&DAT_1803e87e0);
  if (iVar4 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_1803e882c == 0x7fffffff) {
    DAT_1803e882c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  lVar3 = DAT_1803e9d10;
  lVar15 = DAT_1803e9d08;
  if (DAT_1803e9d08 != DAT_1803e9d10) {
    do {
      FUN_18020e450(lVar15);
      lVar15 = lVar15 + 0x20;
    } while (lVar15 != lVar3);
    DAT_1803e9d10 = DAT_1803e9d08;
  }
  plVar9 = (longlong *)*param_1;
  plVar7 = (longlong *)plVar9[1];
  cVar1 = *(char *)((longlong)plVar7 + 0x19);
  plVar16 = plVar9;
  while (cVar1 == '\0') {
    plVar8 = plVar7;
    if ((ulonglong)plVar7[4] < 0x6b9862461e517991) {
      plVar7 = plVar7 + 2;
      plVar8 = plVar16;
    }
    plVar7 = (longlong *)*plVar7;
    plVar16 = plVar8;
    cVar1 = *(char *)((longlong)plVar7 + 0x19);
  }
  if (((*(char *)((longlong)plVar16 + 0x19) == '\0') && ((ulonglong)plVar16[4] < 0x6b9862461e517992)
      ) && (plVar16 != plVar9)) {
    local_f4[2] = 0x40;
    local_f4[0] = 0;
    plVar9 = plVar16 + 5;
    if (0xf < (ulonglong)plVar16[8]) {
      plVar9 = (longlong *)*plVar9;
    }
    local_f4[1] = atoi((char *)plVar9);
    piVar12 = local_f4;
    if (-1 < local_f4[1]) {
      piVar12 = local_f4 + 1;
    }
    piVar10 = local_f4 + 2;
    if (local_f4[1] < 0x41) {
      piVar10 = piVar12;
    }
    iVar4 = *piVar10;
    iVar14 = 0;
    if (0 < iVar4) {
      do {
        uVar5 = FUN_180013ba0(local_b8,iVar14);
        puVar6 = (undefined8 *)FUN_18022a630(uVar5);
        pppppppbVar13 = (byte *******)*puVar6;
        local_e8 = (byte ******)pppppppbVar13;
        uStack_e0 = puVar6[1];
        uStack_d0 = puVar6[3];
        local_d8 = puVar6[2];
        *(undefined1 *)puVar6 = 0;
        puVar6[2] = 0;
        puVar6[3] = 0xf;
        uVar11 = 0x14650fb0739d0383;
        if (uStack_d0 < 0x10) {
          pppppppbVar13 = &local_e8;
          goto LAB_1801442a0;
        }
        for (; pppppppbVar13 != (byte *******)0x0;
            pppppppbVar13 = (byte *******)((longlong)pppppppbVar13 + 1)) {
LAB_1801442a0:
          if (*(byte *)pppppppbVar13 == 0) break;
          uVar11 = (uVar11 ^ *(byte *)pppppppbVar13) * 0x100000001b3;
        }
        plVar9 = (longlong *)*param_1;
        plVar7 = (longlong *)plVar9[1];
        cVar1 = *(char *)((longlong)plVar7 + 0x19);
        plVar16 = plVar9;
        while (cVar1 == '\0') {
          plVar8 = plVar7;
          if ((ulonglong)plVar7[4] < uVar11) {
            plVar7 = plVar7 + 2;
            plVar8 = plVar16;
          }
          plVar7 = (longlong *)*plVar7;
          plVar16 = plVar8;
          cVar1 = *(char *)((longlong)plVar7 + 0x19);
        }
        if ((*(char *)((longlong)plVar16 + 0x19) != '\0') || (uVar11 < (ulonglong)plVar16[4])) {
          plVar16 = plVar9;
        }
        local_f8 = 0;
        FUN_18020e450(&local_e8);
        FUN_18020e450(local_b8);
        if (plVar16 != (longlong *)*param_1) {
          local_c0 = local_98;
          uVar5 = FUN_18016d4c0(local_98,plVar16 + 5);
          FUN_180140b70(local_78,uVar5);
          if (local_68 != 0) {
            FUN_180214300(&DAT_1803e9d08,local_78);
          }
          FUN_18020e450(local_78);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar4);
    }
  }
  _Mtx_unlock(&DAT_1803e87e0);
  return;
}


)B1801440b0",
    "657fa3f4243ef42bf973da096ac620d906ba80fefe3d72dd5d5e75f5eb4db82c",
    R"F1801440b0C(FUN_180013ba0
FUN_180140b70
FUN_18016d4c0
FUN_18020e450
FUN_180214300
FUN_18022a630)F1801440b0C",
    R"F1801440b0D(LAB_1801442a0
DAT_1803da4c0
DAT_1803e87e0
DAT_1803e882c
DAT_1803e9d08
DAT_1803e9d10)F1801440b0D",
    R"F1801440b0T()F1801440b0T",
    R"F1801440b0F(47: if (iVar4 != 0) {
51: return;
53: if (DAT_1803e882c == 0x7fffffff) {
59: if (DAT_1803e9d08 != DAT_1803e9d10) {
60: do {
70: while (cVar1 == '\0') {
72: if ((ulonglong)plVar7[4] < 0x6b9862461e517991) {
80: if (((*(char *)((longlong)plVar16 + 0x19) == '\0') && ((ulonglong)plVar16[4] < 0x6b9862461e517992)
85: if (0xf < (ulonglong)plVar16[8]) {
90: if (-1 < local_f4[1]) {
94: if (local_f4[1] < 0x41) {
99: if (0 < iVar4) {
100: do {
112: if (uStack_d0 < 0x10) {
114: goto LAB_1801442a0;
116: for (; pppppppbVar13 != (byte *******)0x0;
118: LAB_1801442a0:
119: if (*(byte *)pppppppbVar13 == 0) break;
126: while (cVar1 == '\0') {
128: if ((ulonglong)plVar7[4] < uVar11) {
136: if ((*(char *)((longlong)plVar16 + 0x19) != '\0') || (uVar11 < (ulonglong)plVar16[4])) {
142: if (plVar16 != (longlong *)*param_1) {
146: if (local_68 != 0) {
156: return;)F1801440b0F",
    R"F1801440b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1801442a0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e87e0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e882c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9d08.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9d10.
TODO: resolve the indirect call in body 49: pcVar2 = (code *)swi(3);.
TODO: resolve the indirect call in body 50: (*pcVar2)();.)F1801440b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801440b0() noexcept {
    return kFunction_0x1801440b0;
}

// 0x180144390 Features_ChatSpam_ChatSpamFeature_vfunc01
// source: re/dump/decompile/0x180144390_Features_ChatSpam_ChatSpamFeature_vfunc01.c
// size: 2205 bytes; thunk: false
// body sha256: f1dd81f740ffe3cdd21b9e3636ef73fe5bf3dd164e7b57d9791d8748933e6fdf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180144390{
    "0x180144390",
    "Features_ChatSpam_ChatSpamFeature_vfunc01",
    R"F180144390S(undefined Features_ChatSpam_ChatSpamFeature_vfunc01())F180144390S",
    R"B180144390(// 0x180144390  Features_ChatSpam_ChatSpamFeature_vfunc01
// size=2205 thunk=false
// signature: undefined Features_ChatSpam_ChatSpamFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_ChatSpam_ChatSpamFeature_vfunc01(longlong param_1)

{
  float *pfVar1;
  undefined8 ****ppppuVar2;
  float fVar3;
  longlong lVar4;
  void *pvVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  int iVar11;
  longlong *plVar12;
  char *pcVar13;
  float *pfVar14;
  ulonglong uVar15;
  undefined8 **ppuVar16;
  undefined1 *puVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  float *pfVar20;
  ulonglong uVar21;
  undefined8 ***_Memory;
  void *_Memory_00;
  float *pfVar22;
  undefined8 ****ppppuVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined8 ***pppuVar26;
  ulonglong uVar27;
  float fVar28;
  undefined8 uStack_3e0;
  undefined1 auStack_3d8 [64];
  undefined4 local_398;
  undefined1 local_390 [32];
  undefined1 local_370 [144];
  float local_2e0 [2];
  undefined8 **local_2d8;
  undefined8 **ppuStack_2d0;
  ulonglong local_2c8;
  undefined8 uStack_2c0;
  float local_2b8 [2];
  undefined8 ***local_2b0;
  undefined8 uStack_2a8;
  ulonglong local_2a0;
  ulonglong local_298;
  float *local_290 [2];
  undefined *local_280 [69];
  ulonglong local_58;
  
  puVar24 = auStack_3d8;
  puVar25 = auStack_3d8;
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_3d8;
  pppuVar26 = (undefined8 ***)0x0;
  local_398 = 0;
  local_2e0[0] = -2.7634367e-25;
  local_2e0[1] = -6.395108e-27;
  plVar12 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_290,local_2e0);
  local_2b8[0] = 4.1613102e-11;
  local_2b8[1] = -0.00017231477;
  plVar12 = (longlong *)FUN_180241a30(*plVar12 + 0x28,local_280,local_2b8);
  pcVar13 = (char *)FUN_1801fcfc0(*plVar12 + 0x28);
  if (((*pcVar13 == '\0') || (DAT_1803fa608 == (float *)0x0)) || (DAT_1803fa668 == 0)) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    fVar3 = *DAT_1803fa608;
    local_2e0[0] = fVar3;
    pfVar1 = (float *)(param_1 + 8);
    fVar28 = *pfVar1;
    if (fVar3 + DAT_180381138 < fVar28) {
      *pfVar1 = 0.0;
      fVar28 = 0.0;
    }
    fVar10 = DAT_180380ac0;
    if (fVar28 <= 0.0) {
      local_2e0[0] = 60.0;
      local_2b8[0] = 0.5;
      local_280[0] = (undefined *)0x93fd561a96ab0c67;
      local_290[0] = (float *)0xd2ed0559eaf6a240;
      plVar12 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_370,local_280);
      plVar12 = (longlong *)FUN_180241a30(*plVar12 + 0x28,local_390,local_290);
      pfVar14 = (float *)FUN_180202dc0(*plVar12 + 0x28);
      pfVar22 = local_2b8;
      if (fVar10 <= *pfVar14) {
        pfVar22 = pfVar14;
      }
      pfVar20 = local_2e0;
      if (*pfVar14 <= DAT_1803810c8) {
        pfVar20 = pfVar22;
      }
      *pfVar1 = fVar3 + *pfVar20;
      puVar25 = auStack_3d8;
    }
    else {
      puVar25 = auStack_3d8;
      if (fVar28 <= fVar3) {
        uStack_2a8 = 0;
        local_2a0 = 0;
        local_298 = 0xf;
        local_2b0 = (undefined8 ****)0x0;
        local_280[0] = &DAT_1803e87e0;
        local_290[0] = pfVar1;
        iVar11 = _Mtx_lock(&DAT_1803e87e0);
        if (iVar11 != 0) {
          std::_Throw_Cpp_error(5);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (DAT_1803e882c == 0x7fffffff) {
          DAT_1803e882c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
        }
        if (DAT_1803e9d08 == DAT_1803e9d10) {
          *pfVar1 = fVar3 + DAT_180380bb0;
          _Mtx_unlock(&DAT_1803e87e0);
          FUN_18020e450(&local_2b0);
          puVar25 = auStack_3d8;
        }
        else {
          iVar11 = FUN_180022680(0,DAT_1803e9d10 - DAT_1803e9d08 >> 5);
          uVar21 = DAT_1803e9d10 - DAT_1803e9d08 >> 5;
          if ((1 < uVar21) && (iVar11 == *(int *)(param_1 + 0xc))) {
            iVar11 = (iVar11 + 1) % (int)uVar21;
          }
          *(int *)(param_1 + 0xc) = iVar11;
          ppppuVar23 = (undefined8 ****)((longlong)iVar11 * 0x20 + DAT_1803e9d08);
          if (&local_2b0 != ppppuVar23) {
            ppppuVar2 = ppppuVar23 + 2;
            if ((undefined8 ***)0xf < ppppuVar23[3]) {
              ppppuVar23 = (undefined8 ****)*ppppuVar23;
            }
            FUN_180212700(&local_2b0,ppppuVar23,*ppppuVar2);
          }
          _Mtx_unlock(&DAT_1803e87e0);
          uVar21 = local_2a0;
          local_2d8 = (undefined8 ***)0x0;
          ppuStack_2d0 = (undefined8 ***)0x0;
          local_2c8 = 0;
          uStack_2c0 = 0;
          ppppuVar23 = &local_2b0;
          if (0xf < local_298) {
            ppppuVar23 = (undefined8 ****)local_2b0;
          }
          if (0x7fffffffffffffff < local_2a0) {
                    /* WARNING: Subroutine does not return */
            FUN_1800130a0();
          }
          if (local_2a0 < 0x10) {
            local_2c8 = local_2a0;
            uVar27 = 0xf;
            uStack_2c0 = 0xf;
            pppuVar26 = *ppppuVar23;
            local_2d8 = pppuVar26;
            ppuStack_2d0 = ppppuVar23[1];
            puVar25 = auStack_3d8;
          }
          else {
            uVar27 = local_2a0 | 0xf;
            if (uVar27 < 0x8000000000000000) goto LAB_180144731;
            uVar27 = 0x7fffffffffffffff;
            uVar15 = 0x8000000000000027;
            puVar24 = auStack_3d8;
            while( true ) {
              *(undefined8 *)(puVar24 + -8) = 0x180144725;
              ppuVar16 = (undefined8 **)FUN_1802d8350(uVar15);
              if (ppuVar16 != (undefined8 **)0x0) break;
              pcVar6 = (code *)swi(0x29);
              (*pcVar6)(5);
              puVar24 = puVar24 + 8;
LAB_180144731:
              if (uVar27 < 0x16) {
                uVar27 = 0x16;
              }
              if (uVar27 == 0xffffffffffffffff) goto LAB_180144779;
              if (uVar27 + 1 < 0x1000) {
                *(undefined8 *)(puVar24 + -8) = 0x180144776;
                pppuVar26 = (undefined8 ***)FUN_1802d8350();
                goto LAB_180144779;
              }
              uVar15 = uVar27 + 0x28;
              if (uVar15 <= uVar27 + 1) {
                    /* WARNING: Subroutine does not return */
                *(undefined8 *)(puVar24 + -8) = 0x180144c57;
                FUN_180012fe0();
              }
            }
            pppuVar26 = (undefined8 ***)((longlong)ppuVar16 + 0x27U & 0xffffffffffffffe0);
            pppuVar26[-1] = ppuVar16;
LAB_180144779:
            *(undefined8 ****)(puVar24 + 0x100) = pppuVar26;
            *(ulonglong *)(puVar24 + 0x110) = uVar21;
            *(ulonglong *)(puVar24 + 0x118) = uVar27;
            *(undefined8 *)(puVar24 + -8) = 0x1801447a0;
            memcpy(pppuVar26,ppppuVar23,uVar21 + 1);
            puVar25 = puVar24;
          }
          lVar4 = *(longlong *)(puVar25 + 0x138);
          puVar24 = puVar25 + 0x128;
          if (0xf < *(ulonglong *)(puVar25 + 0x140)) {
            puVar24 = *(undefined1 **)(puVar25 + 0x128);
          }
          if (lVar4 != 0) {
            *(undefined8 *)(puVar25 + -8) = 0x1801447de;
            puVar17 = (undefined1 *)thunk_FUN_1802d5c20(puVar24,puVar24 + lVar4,0x7b);
            if ((puVar17 != puVar24 + lVar4) && ((longlong)puVar17 - (longlong)puVar24 != -1)) {
              *(undefined8 *)(puVar25 + -8) = 0x180144801;
              FUN_180142db0(puVar25 + 400);
              *(undefined8 *)(puVar25 + 0x48) = 0;
              *(undefined8 *)(puVar25 + 0x50) = 0;
              *(undefined8 *)(puVar25 + 0x58) = 0;
              *(undefined8 *)(puVar25 + 0x60) = 0;
              *(undefined8 *)(puVar25 + -8) = 0x180144828;
              FUN_18001d080(puVar25 + 0x48,&DAT_18033e5ea,0);
              *(undefined8 *)(puVar25 + -8) = 0x180144844;
              FUN_1801410a0(puVar25 + 400,puVar25 + 0x48,0xffffffff);
              *(undefined8 *)(puVar25 + -8) = 0x18014484f;
              FUN_18020e450(puVar25 + 0x48);
              *(undefined8 *)(puVar25 + -8) = 0x1801448a7;
              puVar18 = (undefined4 *)FUN_180142220(puVar25 + 0x98,puVar25 + 0x128,puVar25 + 400);
              if ((undefined4 *)(puVar25 + 0x100) != puVar18) {
                if (0xf < uVar27) {
                  _Memory = pppuVar26;
                  if (0xfff < uVar27 + 1) {
                    _Memory = (undefined8 ***)pppuVar26[-1];
                    pppuVar26 = (undefined8 ***)((longlong)pppuVar26 + (-8 - (longlong)_Memory));
                    if ((undefined8 ***)0x1f < pppuVar26) {
                      pcVar6 = (code *)swi(0x29);
                      (*pcVar6)(5);
                      puVar25 = puVar25 + 8;
                      _Memory = pppuVar26;
                    }
                  }
                  *(undefined8 *)(puVar25 + -8) = 0x1801448f0;
                  free(_Memory);
                }
                *(undefined8 *)(puVar25 + 0x110) = 0;
                *(undefined8 *)(puVar25 + 0x118) = 0xf;
                puVar25[0x100] = 0;
                uVar7 = puVar18[1];
                uVar8 = puVar18[2];
                uVar9 = puVar18[3];
                *(undefined4 *)(puVar25 + 0x100) = *puVar18;
                *(undefined4 *)(puVar25 + 0x104) = uVar7;
                *(undefined4 *)(puVar25 + 0x108) = uVar8;
                *(undefined4 *)(puVar25 + 0x10c) = uVar9;
                uVar19 = *(undefined8 *)(puVar18 + 6);
                *(undefined8 *)(puVar25 + 0x110) = *(undefined8 *)(puVar18 + 4);
                *(undefined8 *)(puVar25 + 0x118) = uVar19;
                *(undefined8 *)(puVar18 + 4) = 0;
                *(undefined8 *)(puVar18 + 6) = 0xf;
                *(undefined1 *)puVar18 = 0;
              }
              *(undefined8 *)(puVar25 + -8) = 0x18014493f;
              FUN_18020e450(puVar25 + 0x98);
              *(undefined8 *)(puVar25 + -8) = 0x18014494d;
              FUN_180142f70(puVar25 + 400);
            }
          }
          *(undefined1 **)(puVar25 + 0x148) = puVar25 + 0xb8;
          *(undefined8 *)(puVar25 + -8) = 0x18014497e;
          uVar19 = FUN_18016d4c0(puVar25 + 0xb8,puVar25 + 0x100);
          *(undefined8 *)(puVar25 + -8) = 0x18014498f;
          puVar18 = (undefined4 *)FUN_180140b70(puVar25 + 0xd8,uVar19);
          if ((undefined4 *)(puVar25 + 0x100) != puVar18) {
            if (0xf < *(ulonglong *)(puVar25 + 0x118)) {
              pvVar5 = *(void **)(puVar25 + 0x100);
              _Memory_00 = pvVar5;
              if ((0xfff < *(ulonglong *)(puVar25 + 0x118) + 1) &&
                 (_Memory_00 = *(void **)((longlong)pvVar5 + -8),
                 0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)_Memory_00)))) {
                _Memory_00 = (void *)0x5;
                pcVar6 = (code *)swi(0x29);
                (*pcVar6)();
                puVar25 = puVar25 + 8;
              }
              *(undefined8 *)(puVar25 + -8) = 0x1801449ee;
              free(_Memory_00);
            }
            *(undefined8 *)(puVar25 + 0x110) = 0;
            *(undefined8 *)(puVar25 + 0x118) = 0xf;
            puVar25[0x100] = 0;
            uVar7 = puVar18[1];
            uVar8 = puVar18[2];
            uVar9 = puVar18[3];
            *(undefined4 *)(puVar25 + 0x100) = *puVar18;
            *(undefined4 *)(puVar25 + 0x104) = uVar7;
            *(undefined4 *)(puVar25 + 0x108) = uVar8;
            *(undefined4 *)(puVar25 + 0x10c) = uVar9;
            uVar19 = *(undefined8 *)(puVar18 + 6);
            *(undefined8 *)(puVar25 + 0x110) = *(undefined8 *)(puVar18 + 4);
            *(undefined8 *)(puVar25 + 0x118) = uVar19;
            *(undefined8 *)(puVar18 + 4) = 0;
            *(undefined8 *)(puVar18 + 6) = 0xf;
            *(undefined1 *)puVar18 = 0;
          }
          *(undefined8 *)(puVar25 + -8) = 0x180144a3d;
          FUN_18020e450(puVar25 + 0xd8);
          fVar28 = DAT_180380ac0;
          *(undefined4 *)(puVar25 + 0x120) = 0x42700000;
          *(undefined4 *)(puVar25 + 0xf8) = 0x3f000000;
          *(undefined8 *)(puVar25 + 0x148) = 0x93fd561a96ab0c67;
          *(undefined8 *)(puVar25 + -8) = 0x180144a7c;
          plVar12 = (longlong *)FUN_180241a30(&DAT_1803fadf0,puVar25 + 0x48,puVar25 + 0x148);
          *(undefined8 *)(puVar25 + 0x158) = 0xd2ed0559eaf6a240;
          lVar4 = *plVar12;
          *(undefined8 *)(puVar25 + -8) = 0x180144aa7;
          plVar12 = (longlong *)FUN_180241a30(lVar4 + 0x28,puVar25 + 0x68,puVar25 + 0x158);
          lVar4 = *plVar12;
          *(undefined8 *)(puVar25 + -8) = 0x180144ab3;
          pfVar14 = (float *)FUN_180202dc0(lVar4 + 0x28);
          pfVar22 = (float *)(puVar25 + 0xf8);
          if (fVar28 <= *pfVar14) {
            pfVar22 = pfVar14;
          }
          pfVar20 = (float *)(puVar25 + 0x120);
          if (*pfVar14 <= DAT_1803810c8) {
            pfVar20 = pfVar22;
          }
          *pfVar1 = fVar3 + *pfVar20;
          lVar4 = *(longlong *)(puVar25 + 0x110);
          if (lVar4 != 0) {
            if (0x7fffffffffffffffU - lVar4 < 5) {
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar25 + -8) = &UNK_180144c5d;
              FUN_1800130a0();
            }
            puVar24 = puVar25 + 0x100;
            if (0xf < *(ulonglong *)(puVar25 + 0x118)) {
              puVar24 = *(undefined1 **)(puVar25 + 0x100);
            }
            *(longlong *)(puVar25 + 0x30) = lVar4;
            *(undefined1 **)(puVar25 + 0x28) = puVar24;
            *(undefined8 *)(puVar25 + 0x20) = 5;
            *(undefined8 *)(puVar25 + -8) = 0x180144b3f;
            FUN_18020e930(puVar25 + 0x78);
            *(undefined4 *)(puVar25 + 0x40) = 1;
            *(undefined8 *)(puVar25 + -8) = 0x180144b5e;
            puVar18 = (undefined4 *)FUN_18021aef0(puVar25 + 0x78,&DAT_18033f5a8,1);
            *(undefined8 *)(puVar25 + 0x168) = 0;
            *(undefined8 *)(puVar25 + 0x170) = 0;
            *(undefined8 *)(puVar25 + 0x178) = 0;
            *(undefined8 *)(puVar25 + 0x180) = 0;
            uVar7 = puVar18[1];
            uVar8 = puVar18[2];
            uVar9 = puVar18[3];
            *(undefined4 *)(puVar25 + 0x168) = *puVar18;
            *(undefined4 *)(puVar25 + 0x16c) = uVar7;
            *(undefined4 *)(puVar25 + 0x170) = uVar8;
            *(undefined4 *)(puVar25 + 0x174) = uVar9;
            uVar7 = puVar18[5];
            uVar8 = puVar18[6];
            uVar9 = puVar18[7];
            *(undefined4 *)(puVar25 + 0x178) = puVar18[4];
            *(undefined4 *)(puVar25 + 0x17c) = uVar7;
            *(undefined4 *)(puVar25 + 0x180) = uVar8;
            *(undefined4 *)(puVar25 + 0x184) = uVar9;
            *(undefined8 *)(puVar18 + 4) = 0;
            *(undefined8 *)(puVar18 + 6) = 0xf;
            *(undefined1 *)puVar18 = 0;
            *(undefined4 *)(puVar25 + 0x40) = 3;
            *(undefined4 *)(puVar25 + 0x40) = 2;
            *(undefined8 *)(puVar25 + -8) = 0x180144bb9;
            FUN_18020e450(puVar25 + 0x78);
            puVar24 = puVar25 + 0x168;
            if (0xf < *(ulonglong *)(puVar25 + 0x180)) {
              puVar24 = *(undefined1 **)(puVar25 + 0x168);
            }
            *(undefined8 *)(puVar25 + -8) = 0x180144bdf;
            FUN_1801424f0(DAT_1803fa668,puVar24);
            *(undefined4 *)(puVar25 + 0x40) = 0;
            *(undefined8 *)(puVar25 + -8) = 0x180144bf3;
            FUN_18020e450(puVar25 + 0x168);
          }
          *(undefined8 *)(puVar25 + -8) = 0x180144c01;
          FUN_18020e450(puVar25 + 0x100);
          *(undefined8 *)(puVar25 + -8) = 0x180144c0f;
          FUN_18020e450(puVar25 + 0x128);
        }
      }
    }
  }
  *(undefined8 *)(puVar25 + -8) = 0x180144c25;
  return;
}


)B180144390",
    "f1dd81f740ffe3cdd21b9e3636ef73fe5bf3dd164e7b57d9791d8748933e6fdf",
    R"F180144390C(FUN_180012fe0
FUN_1800130a0
FUN_18001d080
FUN_180022680
FUN_180140b70
FUN_1801410a0
FUN_180142220
FUN_1801424f0
FUN_180142db0
FUN_180142f70
FUN_18016d4c0
FUN_1801fcfc0
FUN_180202dc0
FUN_18020e450
FUN_18020e930
FUN_180212700
FUN_18021aef0
FUN_180241a30
FUN_1802d8350)F180144390C",
    R"F180144390D(LAB_180144731
LAB_180144779
UNK_180144c5d
DAT_18033e5ea
DAT_18033f5a8
DAT_180380ac0
DAT_180380bb0
DAT_1803810c8
DAT_180381138
DAT_1803da4c0
DAT_1803e87e0
DAT_1803e882c
DAT_1803e9d08
DAT_1803e9d10
DAT_1803fa608
DAT_1803fa668
DAT_1803fadf0)F180144390D",
    R"F180144390T()F180144390T",
    R"F180144390F(73: if (((*pcVar13 == '\0') || (DAT_1803fa608 == (float *)0x0)) || (DAT_1803fa668 == 0)) {
76: else {
81: if (fVar3 + DAT_180381138 < fVar28) {
86: if (fVar28 <= 0.0) {
95: if (fVar10 <= *pfVar14) {
99: if (*pfVar14 <= DAT_1803810c8) {
105: else {
107: if (fVar28 <= fVar3) {
115: if (iVar11 != 0) {
119: return;
121: if (DAT_1803e882c == 0x7fffffff) {
125: if (DAT_1803e9d08 == DAT_1803e9d10) {
131: else {
134: if ((1 < uVar21) && (iVar11 == *(int *)(param_1 + 0xc))) {
139: if (&local_2b0 != ppppuVar23) {
141: if ((undefined8 ***)0xf < ppppuVar23[3]) {
153: if (0xf < local_298) {
156: if (0x7fffffffffffffff < local_2a0) {
160: if (local_2a0 < 0x10) {
169: else {
171: if (uVar27 < 0x8000000000000000) goto LAB_180144731;
175: while( true ) {
178: if (ppuVar16 != (undefined8 **)0x0) break;
182: LAB_180144731:
183: if (uVar27 < 0x16) {
186: if (uVar27 == 0xffffffffffffffff) goto LAB_180144779;
187: if (uVar27 + 1 < 0x1000) {
190: goto LAB_180144779;
193: if (uVar15 <= uVar27 + 1) {
201: LAB_180144779:
211: if (0xf < *(ulonglong *)(puVar25 + 0x140)) {
214: if (lVar4 != 0) {
217: if ((puVar17 != puVar24 + lVar4) && ((longlong)puVar17 - (longlong)puVar24 != -1)) {
232: if ((undefined4 *)(puVar25 + 0x100) != puVar18) {
233: if (0xf < uVar27) {
235: if (0xfff < uVar27 + 1) {
238: if ((undefined8 ***)0x1f < pppuVar26) {
276: if ((undefined4 *)(puVar25 + 0x100) != puVar18) {
277: if (0xf < *(ulonglong *)(puVar25 + 0x118)) {
280: if ((0xfff < *(ulonglong *)(puVar25 + 0x118) + 1) &&
324: if (fVar28 <= *pfVar14) {
328: if (*pfVar14 <= DAT_1803810c8) {
333: if (lVar4 != 0) {
334: if (0x7fffffffffffffffU - lVar4 < 5) {
340: if (0xf < *(ulonglong *)(puVar25 + 0x118)) {
377: if (0xf < *(ulonglong *)(puVar25 + 0x180)) {
395: return;)F180144390F",
    R"F180144390U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180144731.
TODO: recover the declaration, type and value for global/data reference LAB_180144779.
TODO: recover the declaration, type and value for global/data reference UNK_180144c5d.
TODO: recover the declaration, type and value for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type and value for global/data reference DAT_18033f5a8.
TODO: recover the declaration, type and value for global/data reference DAT_180380ac0.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_1803810c8.
TODO: recover the declaration, type and value for global/data reference DAT_180381138.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e87e0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e882c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9d08.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9d10.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa608.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: resolve the indirect call in body 117: pcVar6 = (code *)swi(3);.
TODO: resolve the indirect call in body 118: (*pcVar6)();.
TODO: resolve the indirect call in body 179: pcVar6 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 180: (*pcVar6)(5);.
TODO: resolve the indirect call in body 239: pcVar6 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 240: (*pcVar6)(5);.
TODO: resolve the indirect call in body 284: pcVar6 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 285: (*pcVar6)();.)F180144390U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180144390() noexcept {
    return kFunction_0x180144390;
}

// 0x180144c60 FUN_180144c60
// source: re/dump/decompile/0x180144c60_FUN_180144c60.c
// size: 133 bytes; thunk: false
// body sha256: 805a7ac2c0333c5eb2dc9f71039532e1fa54eed02a13432a02ba1369aa409b03
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180144c60{
    "0x180144c60",
    "FUN_180144c60",
    R"F180144c60S(undefined FUN_180144c60())F180144c60S",
    R"B180144c60(// 0x180144c60  FUN_180144c60
// size=133 thunk=false
// signature: undefined FUN_180144c60()
// status: ok


void FUN_180144c60(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = _Mtx_lock(&DAT_1803e83b0);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e83fc == 0x7fffffff) {
    DAT_1803e83fc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  FUN_18020e8a0(&DAT_1803e9f28,param_1);
  _Mtx_unlock(&DAT_1803e83b0);
  FUN_18020e450(param_1);
  return;
}


)B180144c60",
    "805a7ac2c0333c5eb2dc9f71039532e1fa54eed02a13432a02ba1369aa409b03",
    R"F180144c60C(FUN_18020e450
FUN_18020e8a0)F180144c60C",
    R"F180144c60D(DAT_1803e83b0
DAT_1803e83fc
DAT_1803e9f28)F180144c60D",
    R"F180144c60T()F180144c60T",
    R"F180144c60F(14: if (iVar2 != 0) {
18: return;
20: if (DAT_1803e83fc == 0x7fffffff) {
27: return;)F180144c60F",
    R"F180144c60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e83b0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e83fc.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f28.
TODO: resolve the indirect call in body 16: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 17: (*pcVar1)();.)F180144c60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180144c60() noexcept {
    return kFunction_0x180144c60;
}

// 0x180144cf0 FUN_180144cf0
// source: re/dump/decompile/0x180144cf0_FUN_180144cf0.c
// size: 143 bytes; thunk: false
// body sha256: 582c6a894ab09c4f256ccf5da2edf9a9f6954ab2198f662df8e59d576cefb774
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180144cf0{
    "0x180144cf0",
    "FUN_180144cf0",
    R"F180144cf0S(undefined FUN_180144cf0())F180144cf0S",
    R"B180144cf0(// 0x180144cf0  FUN_180144cf0
// size=143 thunk=false
// signature: undefined FUN_180144cf0()
// status: ok


undefined8
FUN_180144cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar2 = _Mtx_lock(&DAT_1803e83b0);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (DAT_1803e83fc == 0x7fffffff) {
    DAT_1803e83fc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  FUN_18016d4c0(param_1,&DAT_1803e9f28,param_3,param_4,uVar4);
  _Mtx_unlock(&DAT_1803e83b0);
  return param_1;
}


)B180144cf0",
    "582c6a894ab09c4f256ccf5da2edf9a9f6954ab2198f662df8e59d576cefb774",
    R"F180144cf0C(FUN_18016d4c0)F180144cf0C",
    R"F180144cf0D(DAT_1803e83b0
DAT_1803e83fc
DAT_1803e9f28)F180144cf0D",
    R"F180144cf0T()F180144cf0T",
    R"F180144cf0F(18: if (iVar2 != 0) {
22: return uVar3;
24: if (DAT_1803e83fc == 0x7fffffff) {
30: return param_1;)F180144cf0F",
    R"F180144cf0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e83b0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e83fc.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f28.
TODO: resolve the indirect call in body 20: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 21: uVar3 = (*pcVar1)();.)F180144cf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180144cf0() noexcept {
    return kFunction_0x180144cf0;
}

}  // namespace sf::reconstructed
