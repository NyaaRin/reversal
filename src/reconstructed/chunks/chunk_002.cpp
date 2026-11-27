// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"

namespace sf::reconstructed {

// 0x18001e3e0 vfunc_shared_18001e3e0
// source: re/dump/decompile/0x18001e3e0_vfunc_shared_18001e3e0.c
// size: 3 bytes; thunk: false
// body sha256: 5a5350db45b64664f8ece6693065358a3737cf6bdf53ee7aa57a46223e7f7cd5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001e3e0{
    "0x18001e3e0",
    "vfunc_shared_18001e3e0",
    R"F18001e3e0S(undefined vfunc_shared_18001e3e0())F18001e3e0S",
    R"B18001e3e0(// 0x18001e3e0  vfunc_shared_18001e3e0
// size=3 thunk=false
// signature: undefined vfunc_shared_18001e3e0()
// status: ok


void vfunc_shared_18001e3e0(void)

{
  return;
}


)B18001e3e0",
    "5a5350db45b64664f8ece6693065358a3737cf6bdf53ee7aa57a46223e7f7cd5",
    R"F18001e3e0C()F18001e3e0C",
    R"F18001e3e0D()F18001e3e0D",
    R"F18001e3e0T()F18001e3e0T",
    R"F18001e3e0F(10: return;)F18001e3e0F",
    R"F18001e3e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18001e3e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001e3e0() noexcept {
    return kFunction_0x18001e3e0;
}

// 0x18001e3f0 FUN_18001e3f0
// source: re/dump/decompile/0x18001e3f0_FUN_18001e3f0.c
// size: 30 bytes; thunk: false
// body sha256: 6a165f501bb1b75aa73c697596331604dc7fb301cb44f294dfa214a1bfda8089
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001e3f0{
    "0x18001e3f0",
    "FUN_18001e3f0",
    R"F18001e3f0S(undefined FUN_18001e3f0())F18001e3f0S",
    R"B18001e3f0(// 0x18001e3f0  FUN_18001e3f0
// size=30 thunk=false
// signature: undefined FUN_18001e3f0()
// status: ok


void FUN_18001e3f0(void)

{
  if (DAT_1803fae80 == (code *)0x0) {
    return;
  }
  (*DAT_1803fae80)();
  return;
}


)B18001e3f0",
    "6a165f501bb1b75aa73c697596331604dc7fb301cb44f294dfa214a1bfda8089",
    R"F18001e3f0C()F18001e3f0C",
    R"F18001e3f0D(DAT_1803fae80)F18001e3f0D",
    R"F18001e3f0T()F18001e3f0T",
    R"F18001e3f0F(10: if (DAT_1803fae80 == (code *)0x0) {
11: return;
14: return;)F18001e3f0F",
    R"F18001e3f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fae80.
TODO: resolve the indirect call in body 10: if (DAT_1803fae80 == (code *)0x0) {.
TODO: resolve the indirect call in body 13: (*DAT_1803fae80)();.)F18001e3f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001e3f0() noexcept {
    return kFunction_0x18001e3f0;
}

// 0x18001e410 FUN_18001e410
// source: re/dump/decompile/0x18001e410_FUN_18001e410.c
// size: 198 bytes; thunk: false
// body sha256: 7e9d0a0ca9ecf70a5081d2ae571bbc2ed83ecf47b1ecfad0ea6ff6967accc756
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001e410{
    "0x18001e410",
    "FUN_18001e410",
    R"F18001e410S(undefined FUN_18001e410())F18001e410S",
    R"B18001e410(// 0x18001e410  FUN_18001e410
// size=198 thunk=false
// signature: undefined FUN_18001e410()
// status: ok


void FUN_18001e410(undefined8 param_1)

{
  longlong lVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (DAT_1803fa805 == '\0') {
    DAT_1803fa805 = '\x01';
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_18001d080(&local_48,"E8 ? ? ? ? 4D 8B 47 10",0x16);
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_10 = 0;
    FUN_18001d080(&local_28,"client.dll",10);
    lVar1 = FUN_180015f40(&local_28,&local_48);
    if (lVar1 != 0) {
      DAT_1803fae80 = lVar1 + 5 + (longlong)*(int *)(lVar1 + 1);
    }
  }
  FUN_18001e3f0(param_1);
  return;
}


)B18001e410",
    "7e9d0a0ca9ecf70a5081d2ae571bbc2ed83ecf47b1ecfad0ea6ff6967accc756",
    R"F18001e410C(FUN_180015f40
FUN_18001d080
FUN_18001e3f0)F18001e410C",
    R"F18001e410D(DAT_1803fa805
DAT_1803fae80)F18001e410D",
    R"F18001e410T("client.dll"
"E8 ? ? ? ? 4D 8B 47 10")F18001e410T",
    R"F18001e410F(20: if (DAT_1803fa805 == '\0') {
33: if (lVar1 != 0) {
38: return;)F18001e410F",
    R"F18001e410U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa805.
TODO: recover the declaration, type and value for global/data reference DAT_1803fae80.)F18001e410U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001e410() noexcept {
    return kFunction_0x18001e410;
}

// 0x18001e4e0 FUN_18001e4e0
// source: re/dump/decompile/0x18001e4e0_FUN_18001e4e0.c
// size: 201 bytes; thunk: false
// body sha256: 3777583f327b71ae453dd9c9ae2c6ea6e98ca58184eaad07ba149dd0a0271365
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001e4e0{
    "0x18001e4e0",
    "FUN_18001e4e0",
    R"F18001e4e0S(undefined FUN_18001e4e0())F18001e4e0S",
    R"B18001e4e0(// 0x18001e4e0  FUN_18001e4e0
// size=201 thunk=false
// signature: undefined FUN_18001e4e0()
// status: ok


char * FUN_18001e4e0(longlong *param_1)

{
  int iVar1;
  char *_Str1;
  longlong lVar2;
  
  _Str1 = (char *)FUN_18001e410();
  if (((((_Str1 == (char *)0x0) || (*_Str1 == '\0')) || (_Str1 < (char *)0x10001)) ||
      (iVar1 = strcmp(_Str1,"CWeaponSWEP"), iVar1 == 0)) &&
     (((lVar2 = (**(code **)(*param_1 + 0x78))(param_1), lVar2 == 0 ||
       (_Str1 = *(char **)(lVar2 + 0x10), _Str1 < (char *)0x10001)) ||
      (iVar1 = strcmp(_Str1,"CWeaponSWEP"), iVar1 == 0)))) {
    if ((DAT_1803de128 == 0) || (DAT_1803fa798 != param_1)) {
      if ((lVar2 == 0) ||
         (_Str1 = *(char **)(lVar2 + 0x10), *(char **)(lVar2 + 0x10) < (char *)0x10001)) {
        _Str1 = (char *)0x0;
      }
    }
    else {
      _Str1 = (char *)&DAT_1803de118;
      if (0xf < DAT_1803de130) {
        _Str1 = DAT_1803de118;
      }
    }
  }
  return _Str1;
}


)B18001e4e0",
    "3777583f327b71ae453dd9c9ae2c6ea6e98ca58184eaad07ba149dd0a0271365",
    R"F18001e4e0C(FUN_18001e410)F18001e4e0C",
    R"F18001e4e0D(DAT_1803de118
DAT_1803de128
DAT_1803de130
DAT_1803fa798)F18001e4e0D",
    R"F18001e4e0T("CWeaponSWEP")F18001e4e0T",
    R"F18001e4e0F(15: if (((((_Str1 == (char *)0x0) || (*_Str1 == '\0')) || (_Str1 < (char *)0x10001)) ||
20: if ((DAT_1803de128 == 0) || (DAT_1803fa798 != param_1)) {
21: if ((lVar2 == 0) ||
26: else {
28: if (0xf < DAT_1803de130) {
33: return _Str1;)F18001e4e0F",
    R"F18001e4e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803de118.
TODO: recover the declaration, type and value for global/data reference DAT_1803de128.
TODO: recover the declaration, type and value for global/data reference DAT_1803de130.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa798.
TODO: resolve the indirect call in body 17: (((lVar2 = (**(code **)(*param_1 + 0x78))(param_1), lVar2 == 0 ||.)F18001e4e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001e4e0() noexcept {
    return kFunction_0x18001e4e0;
}

// 0x18001e5b0 FUN_18001e5b0
// source: re/dump/decompile/0x18001e5b0_FUN_18001e5b0.c
// size: 317 bytes; thunk: false
// body sha256: beb31de0756f1199f94039b3232b635a9877316cdb1c63a19f4d2faa03c59f0e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001e5b0{
    "0x18001e5b0",
    "FUN_18001e5b0",
    R"F18001e5b0S(undefined FUN_18001e5b0())F18001e5b0S",
    R"B18001e5b0(// 0x18001e5b0  FUN_18001e5b0
// size=317 thunk=false
// signature: undefined FUN_18001e5b0()
// status: ok


undefined4 FUN_18001e5b0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [32];
  
  bVar5 = false;
  if (DAT_1803fd334 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_18001d080(&local_68,"DT_BaseCombatWeapon",0x13);
    uVar3 = FUN_18016d4c0(local_28,&local_68);
    uVar3 = FUN_180018ef0(&DAT_1803fac80,uVar3);
    FUN_18020e450(&local_68);
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_18001d080(&local_48,"m_iClip1",8);
    uVar4 = FUN_18016d4c0(local_28,&local_48);
    iVar1 = FUN_180018c10(uVar3,uVar4);
    FUN_18020e450(&local_48);
    bVar5 = iVar1 == 0;
    DAT_1803fd334 = iVar1;
  }
  if (bVar5 || DAT_1803fd334 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(DAT_1803fd334 + param_1);
  }
  return uVar2;
}


)B18001e5b0",
    "beb31de0756f1199f94039b3232b635a9877316cdb1c63a19f4d2faa03c59f0e",
    R"F18001e5b0C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001e5b0C",
    R"F18001e5b0D(DAT_1803fac80
DAT_1803fd334)F18001e5b0D",
    R"F18001e5b0T("m_iClip1"
"DT_BaseCombatWeapon")F18001e5b0T",
    R"F18001e5b0F(26: if (DAT_1803fd334 == 0) {
46: if (bVar5 || DAT_1803fd334 < 0) {
49: else {
52: return uVar2;)F18001e5b0F",
    R"F18001e5b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.
TODO: recover the declaration, type and value for global/data reference DAT_1803fd334.)F18001e5b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001e5b0() noexcept {
    return kFunction_0x18001e5b0;
}

// 0x18001e700 FUN_18001e700
// source: re/dump/decompile/0x18001e700_FUN_18001e700.c
// size: 317 bytes; thunk: false
// body sha256: d514889b9b84bff06e8a9031a5ad87ed4bee5abc1df018f59eeb1886794b0cc8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001e700{
    "0x18001e700",
    "FUN_18001e700",
    R"F18001e700S(undefined FUN_18001e700())F18001e700S",
    R"B18001e700(// 0x18001e700  FUN_18001e700
// size=317 thunk=false
// signature: undefined FUN_18001e700()
// status: ok


undefined4 FUN_18001e700(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [32];
  
  bVar5 = false;
  if (DAT_180426104 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_18001d080(&local_68,"DT_BaseCombatWeapon",0x13);
    uVar3 = FUN_18016d4c0(local_28,&local_68);
    uVar3 = FUN_180018ef0(&DAT_1803fac80,uVar3);
    FUN_18020e450(&local_68);
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_18001d080(&local_48,"m_iPrimaryAmmoType",0x12);
    uVar4 = FUN_18016d4c0(local_28,&local_48);
    iVar1 = FUN_180018c10(uVar3,uVar4);
    FUN_18020e450(&local_48);
    bVar5 = iVar1 == 0;
    DAT_180426104 = iVar1;
  }
  if (bVar5 || DAT_180426104 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(DAT_180426104 + param_1);
  }
  return uVar2;
}


)B18001e700",
    "d514889b9b84bff06e8a9031a5ad87ed4bee5abc1df018f59eeb1886794b0cc8",
    R"F18001e700C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001e700C",
    R"F18001e700D(DAT_1803fac80
DAT_180426104)F18001e700D",
    R"F18001e700T("m_iPrimaryAmmoType"
"DT_BaseCombatWeapon")F18001e700T",
    R"F18001e700F(26: if (DAT_180426104 == 0) {
46: if (bVar5 || DAT_180426104 < 0) {
49: else {
52: return uVar2;)F18001e700F",
    R"F18001e700U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.
TODO: recover the declaration, type and value for global/data reference DAT_180426104.)F18001e700U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001e700() noexcept {
    return kFunction_0x18001e700;
}

// 0x18001e850 FUN_18001e850
// source: re/dump/decompile/0x18001e850_FUN_18001e850.c
// size: 478 bytes; thunk: false
// body sha256: 2f57cf898b192f69714df6b5ba781eab4ad6cf582761f6dd4c3e14994fa74818
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001e850{
    "0x18001e850",
    "FUN_18001e850",
    R"F18001e850S(undefined FUN_18001e850())F18001e850S",
    R"B18001e850(// 0x18001e850  FUN_18001e850
// size=478 thunk=false
// signature: undefined FUN_18001e850()
// status: ok


uint FUN_18001e850(void)

{
  uint uVar1;
  HMODULE pHVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  HMODULE pHVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  
  if (DAT_180425394 == 0) {
    DAT_180425394 = 0xffffffff;
    pHVar2 = GetModuleHandleA("client.dll");
    if (((pHVar2 != (HMODULE)0x0) && ((short)pHVar2->unused == 0x5a4d)) &&
       (*(int *)((longlong)&pHVar2->unused + (longlong)pHVar2[0xf].unused) == 0x4550)) {
      uVar7 = (ulonglong)*(uint *)((longlong)&pHVar2[0x14].unused + (longlong)pHVar2[0xf].unused);
      for (lVar4 = 0;
          (plVar10 = (longlong *)0x0, lVar4 + 0xdU <= uVar7 &&
          (((plVar10 = (longlong *)((longlong)&pHVar2->unused + lVar4), (char)*plVar10 != 'G' ||
            (*plVar10 != s_GetPrintName_180339018._0_8_)) ||
           (((int)plVar10[1] != s_GetPrintName_180339018._8_4_ ||
            (*(char *)((longlong)plVar10 + 0xc) != s_GetPrintName_180339018[0xc]))))));
          lVar4 = lVar4 + 1) {
      }
      if (plVar10 != (longlong *)0x0) {
        lVar3 = 0;
        while (pHVar9 = (HMODULE)0x0, lVar3 + 0x18U <= uVar7) {
          if (*(longlong **)((longlong)&pHVar2->unused + lVar3) == plVar10) {
            pHVar9 = *(HMODULE *)((longlong)&pHVar2[4].unused + lVar3);
            if ((pHVar2 <= pHVar9) && (pHVar9 < (HMODULE)((longlong)&pHVar2->unused + uVar7)))
            break;
            lVar3 = lVar3 + 8;
          }
          else {
            lVar3 = lVar3 + 8;
          }
        }
        if (pHVar9 != (HMODULE)0x0) {
          uVar7 = 0;
          do {
            uVar12 = uVar7;
            uVar7 = uVar12 + 1;
            uVar8 = 0x140;
            if (0x13f < uVar7) break;
          } while ((*(char *)((longlong)&pHVar9->unused + uVar12) != -0x34) ||
                  (uVar8 = uVar12, *(char *)((longlong)&pHVar9->unused + uVar12 + 1) != -0x34));
          uVar6 = 0;
          lVar5 = 0;
          uVar11 = 0;
          while (lVar5 + 6U <= uVar8) {
            if ((*(char *)((longlong)&pHVar9->unused + lVar5) == -1) &&
               ((byte)(*(char *)((longlong)&pHVar9->unused + lVar5 + 1) + 0x70U) < 8)) {
              uVar1 = *(uint *)((longlong)&pHVar9->unused + lVar5 + 2);
              pHVar2 = (HMODULE)(ulonglong)uVar1;
              if ((uVar1 - 0x100 < 0x1f01) && ((uVar1 & 7) == 0)) {
                if (uVar6 < uVar1) {
                  uVar6 = uVar1;
                }
                lVar5 = lVar5 + 1;
                uVar11 = uVar6;
              }
              else {
                lVar5 = lVar5 + 1;
              }
            }
            else {
              lVar5 = lVar5 + 1;
            }
          }
          if (uVar6 != 0) {
            DAT_180425394 = uVar6 >> 3;
          }
          FUN_180014410("[WEAP] GetPrintName vtable index = %d\n",DAT_180425394,pHVar2,uVar8,uVar11,
                        lVar4,lVar3,uVar12,lVar5);
        }
      }
    }
  }
  return DAT_180425394;
}


)B18001e850",
    "2f57cf898b192f69714df6b5ba781eab4ad6cf582761f6dd4c3e14994fa74818",
    R"F18001e850C(FUN_180014410)F18001e850C",
    R"F18001e850D(DAT_180425394)F18001e850D",
    R"F18001e850T("client.dll"
"[WEAP] GetPrintName vtable index = %d\\n")F18001e850T",
    R"F18001e850F(23: if (DAT_180425394 == 0) {
26: if (((pHVar2 != (HMODULE)0x0) && ((short)pHVar2->unused == 0x5a4d)) &&
29: for (lVar4 = 0;
37: if (plVar10 != (longlong *)0x0) {
39: while (pHVar9 = (HMODULE)0x0, lVar3 + 0x18U <= uVar7) {
40: if (*(longlong **)((longlong)&pHVar2->unused + lVar3) == plVar10) {
42: if ((pHVar2 <= pHVar9) && (pHVar9 < (HMODULE)((longlong)&pHVar2->unused + uVar7)))
43: break;
46: else {
50: if (pHVar9 != (HMODULE)0x0) {
52: do {
56: if (0x13f < uVar7) break;
62: while (lVar5 + 6U <= uVar8) {
63: if ((*(char *)((longlong)&pHVar9->unused + lVar5) == -1) &&
67: if ((uVar1 - 0x100 < 0x1f01) && ((uVar1 & 7) == 0)) {
68: if (uVar6 < uVar1) {
74: else {
78: else {
82: if (uVar6 != 0) {
91: return DAT_180425394;)F18001e850F",
    R"F18001e850U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180425394.)F18001e850U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001e850() noexcept {
    return kFunction_0x18001e850;
}

// 0x18001ea40 FUN_18001ea40
// source: re/dump/decompile/0x18001ea40_FUN_18001ea40.c
// size: 104 bytes; thunk: false
// body sha256: 634bb7ce887e2b39604b75ab90a09fa158b24ff3d39d109aacad17904d4cadfd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001ea40{
    "0x18001ea40",
    "FUN_18001ea40",
    R"F18001ea40S(undefined FUN_18001ea40())F18001ea40S",
    R"B18001ea40(// 0x18001ea40  FUN_18001ea40
// size=104 thunk=false
// signature: undefined FUN_18001ea40()
// status: ok


undefined1 * FUN_18001ea40(longlong *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if ((param_1 != (longlong *)0x0) && (iVar1 = FUN_18001e850(), 0 < iVar1)) {
    if (*param_1 != 0) {
      puVar2 = (undefined1 *)(**(code **)(*param_1 + (longlong)iVar1 * 8))(param_1);
      puVar3 = &DAT_18033e5ea;
      if ((undefined1 *)0x10000 < puVar2) {
        puVar3 = puVar2;
      }
      return puVar3;
    }
  }
  return &DAT_18033e5ea;
}


)B18001ea40",
    "634bb7ce887e2b39604b75ab90a09fa158b24ff3d39d109aacad17904d4cadfd",
    R"F18001ea40C(FUN_18001e850)F18001ea40C",
    R"F18001ea40D(DAT_18033e5ea)F18001ea40D",
    R"F18001ea40T()F18001ea40T",
    R"F18001ea40F(14: if ((param_1 != (longlong *)0x0) && (iVar1 = FUN_18001e850(), 0 < iVar1)) {
15: if (*param_1 != 0) {
18: if ((undefined1 *)0x10000 < puVar2) {
21: return puVar3;
24: return &DAT_18033e5ea;)F18001ea40F",
    R"F18001ea40U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033e5ea.
TODO: resolve the indirect call in body 16: puVar2 = (undefined1 *)(**(code **)(*param_1 + (longlong)iVar1 * 8))(param_1);.)F18001ea40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001ea40() noexcept {
    return kFunction_0x18001ea40;
}

// 0x18001eac0 FUN_18001eac0
// source: re/dump/decompile/0x18001eac0_FUN_18001eac0.c
// size: 649 bytes; thunk: false
// body sha256: e6cf9c74542c441708e17a0e44f1b70686f41165d9b27cdf67437b377a2d50b5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001eac0{
    "0x18001eac0",
    "FUN_18001eac0",
    R"F18001eac0S(undefined FUN_18001eac0())F18001eac0S",
    R"B18001eac0(// 0x18001eac0  FUN_18001eac0
// size=649 thunk=false
// signature: undefined FUN_18001eac0()
// status: ok


undefined8 * FUN_18001eac0(void)

{
  char cVar1;
  HMODULE pHVar2;
  HMODULE pHVar3;
  HMODULE pHVar4;
  uint uVar5;
  uint uVar6;
  HMODULE pHVar7;
  HMODULE pHVar8;
  longlong lVar9;
  HMODULE pHVar10;
  
  if (DAT_1804257a8 == '\0') {
    DAT_1804257a8 = '\x01';
    pHVar2 = GetModuleHandleA("client.dll");
    if (((pHVar2 != (HMODULE)0x0) && ((short)pHVar2->unused == 0x5a4d)) &&
       (*(int *)((longlong)&pHVar2->unused + (longlong)pHVar2[0xf].unused) == 0x4550)) {
      pHVar8 = (HMODULE)(ulonglong)
                        *(uint *)((longlong)&pHVar2[0x14].unused + (longlong)pHVar2[0xf].unused);
      pHVar4 = (HMODULE)0x0;
      pHVar3 = pHVar4;
      while ((pHVar10 = pHVar4, (HMODULE)((longlong)&pHVar3[2].unused + 2U) <= pHVar8 &&
             (((pHVar10 = (HMODULE)((longlong)&pHVar2->unused + (longlong)&pHVar3->unused),
               (char)pHVar10->unused != 'G' || (*(longlong *)pHVar10 != s_GetPhrase_180339b08._0_8_)
               ) || ((short)pHVar10[2].unused != s_GetPhrase_180339b08._8_2_))))) {
        pHVar3 = (HMODULE)((longlong)&pHVar3->unused + 1);
      }
      pHVar3 = pHVar4;
      if (pHVar10 != (HMODULE)0x0) {
        while (pHVar7 = pHVar4, pHVar3 + 6 <= pHVar8) {
          if (*(HMODULE *)((longlong)&pHVar2->unused + (longlong)&pHVar3->unused) == pHVar10) {
            pHVar7 = *(HMODULE *)((longlong)&pHVar2->unused + (longlong)&pHVar3[4].unused);
            if ((pHVar2 <= pHVar7) &&
               (pHVar7 < (HMODULE)((longlong)&pHVar2->unused + (longlong)&pHVar8->unused))) break;
            pHVar3 = pHVar3 + 2;
          }
          else {
            pHVar3 = pHVar3 + 2;
          }
        }
        pHVar2 = pHVar4;
        pHVar3 = pHVar4;
        if (pHVar7 != (HMODULE)0x0) {
          for (; (undefined1 *)((longlong)&pHVar2[1].unused + 1U) < (undefined1 *)0x61;
              pHVar2 = (HMODULE)((longlong)&pHVar2->unused + 1)) {
            cVar1 = *(char *)((longlong)&pHVar7->unused + (longlong)&pHVar2->unused);
            if ((cVar1 == -0x34) &&
               (*(char *)((longlong)&pHVar7->unused + (longlong)((longlong)&pHVar2->unused + 1)) ==
                -0x34)) break;
            if (cVar1 == -0x17) {
              pHVar3 = (HMODULE)((longlong)&pHVar2[1].unused +
                                (longlong)&pHVar7->unused +
                                (longlong)
                                *(int *)((longlong)&pHVar7->unused +
                                        (longlong)((longlong)&pHVar2->unused + 1)) + 1);
            }
          }
          lVar9 = DAT_1803e6f28;
          uVar6 = DAT_1803e6f34;
          uVar5 = DAT_1803e6f30;
          if (pHVar3 != (HMODULE)0x0) {
            for (; (undefined1 *)((longlong)&pHVar4[1].unused + 3U) < (undefined1 *)0x81;
                pHVar4 = (HMODULE)((longlong)&pHVar4->unused + 1)) {
              if (((lVar9 == 0) &&
                  (*(char *)((longlong)&pHVar3->unused + (longlong)&pHVar4->unused) == 'H')) &&
                 ((((undefined1 *)((longlong)&pHVar4->unused + 1))[(longlong)pHVar3] == -0x75 &&
                  (((undefined1 *)((longlong)&pHVar4->unused + 2))[(longlong)pHVar3] == '\r')))) {
                lVar9 = (longlong)&pHVar4[1].unused +
                        (longlong)&pHVar3->unused +
                        (longlong)
                        *(int *)((undefined1 *)((longlong)&pHVar4->unused + 3) + (longlong)pHVar3) +
                        3;
                DAT_1803e6f28 = lVar9;
              }
              else if ((((int)uVar5 < 0) &&
                       (*(char *)((longlong)&pHVar3->unused + (longlong)&pHVar4->unused) == -1)) &&
                      (((undefined1 *)((longlong)&pHVar4->unused + 1))[(longlong)pHVar3] == -0x70))
              {
                DAT_1803e6f30 =
                     *(uint *)((undefined1 *)((longlong)&pHVar4->unused + 2) + (longlong)pHVar3) >>
                     3;
                uVar5 = DAT_1803e6f30;
              }
              else if ((((int)uVar6 < 0) &&
                       (*(char *)((longlong)&pHVar3->unused + (longlong)&pHVar4->unused) == -1)) &&
                      (((undefined1 *)((longlong)&pHVar4->unused + 1))[(longlong)pHVar3] == 'W')) {
                DAT_1803e6f34 =
                     (uint)((byte)((undefined1 *)((longlong)&pHVar4->unused + 2))[(longlong)pHVar3]
                           >> 3);
                uVar6 = DAT_1803e6f34;
              }
            }
            if (((lVar9 == 0) || ((int)uVar5 < 1)) || ((int)uVar6 < 0)) {
              DAT_1803e6f38 = '\0';
            }
            else {
              DAT_1803e6f38 = '\x01';
            }
            FUN_180014410("[WEAP] Localize holder=%p getSlot=%d findSlot=%d valid=%d\n",lVar9,uVar5,
                          uVar6,DAT_1803e6f38 != '\0');
          }
        }
      }
    }
  }
  return &DAT_1803e6f28;
}


)B18001eac0",
    "e6cf9c74542c441708e17a0e44f1b70686f41165d9b27cdf67437b377a2d50b5",
    R"F18001eac0C(FUN_180014410)F18001eac0C",
    R"F18001eac0D(DAT_1803e6f28
DAT_1803e6f30
DAT_1803e6f34
DAT_1803e6f38
DAT_1804257a8)F18001eac0D",
    R"F18001eac0T("client.dll"
"[WEAP] Localize holder=%p getSlot=%d findSlot=%d valid=%d\\n")F18001eac0T",
    R"F18001eac0F(21: if (DAT_1804257a8 == '\0') {
24: if (((pHVar2 != (HMODULE)0x0) && ((short)pHVar2->unused == 0x5a4d)) &&
30: while ((pHVar10 = pHVar4, (HMODULE)((longlong)&pHVar3[2].unused + 2U) <= pHVar8 &&
37: if (pHVar10 != (HMODULE)0x0) {
38: while (pHVar7 = pHVar4, pHVar3 + 6 <= pHVar8) {
39: if (*(HMODULE *)((longlong)&pHVar2->unused + (longlong)&pHVar3->unused) == pHVar10) {
41: if ((pHVar2 <= pHVar7) &&
45: else {
51: if (pHVar7 != (HMODULE)0x0) {
52: for (; (undefined1 *)((longlong)&pHVar2[1].unused + 1U) < (undefined1 *)0x61;
55: if ((cVar1 == -0x34) &&
58: if (cVar1 == -0x17) {
69: if (pHVar3 != (HMODULE)0x0) {
70: for (; (undefined1 *)((longlong)&pHVar4[1].unused + 3U) < (undefined1 *)0x81;
72: if (((lVar9 == 0) &&
83: else if ((((int)uVar5 < 0) &&
92: else if ((((int)uVar6 < 0) &&
101: if (((lVar9 == 0) || ((int)uVar5 < 1)) || ((int)uVar6 < 0)) {
104: else {
114: return &DAT_1803e6f28;)F18001eac0F",
    R"F18001eac0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e6f28.
TODO: recover the declaration, type and value for global/data reference DAT_1803e6f30.
TODO: recover the declaration, type and value for global/data reference DAT_1803e6f34.
TODO: recover the declaration, type and value for global/data reference DAT_1803e6f38.
TODO: recover the declaration, type and value for global/data reference DAT_1804257a8.)F18001eac0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001eac0() noexcept {
    return kFunction_0x18001eac0;
}

// 0x18001ed70 FUN_18001ed70
// source: re/dump/decompile/0x18001ed70_FUN_18001ed70.c
// size: 399 bytes; thunk: false
// body sha256: bf377bb2c1888cdcfe32a8f03a0e4f8421e2921d69cddeeb4059b7adf1c28543
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001ed70{
    "0x18001ed70",
    "FUN_18001ed70",
    R"F18001ed70S(undefined FUN_18001ed70())F18001ed70S",
    R"B18001ed70(// 0x18001ed70  FUN_18001ed70
// size=399 thunk=false
// signature: undefined FUN_18001ed70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18001ed70(char *param_1,LPSTR param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  uint7 uVar9;
  longlong *plVar7;
  char *pcVar8;
  byte bVar10;
  int iVar11;
  undefined1 auStackY_498 [32];
  char *local_450 [3];
  WCHAR local_438 [512];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStackY_498;
  puVar5 = (undefined8 *)FUN_18001eac0();
  if (*(char *)(puVar5 + 2) == '\0') {
    uVar6 = (ulonglong)puVar5 & 0xffffffffffffff00;
  }
  else {
    bVar10 = 0;
    plVar7 = *(longlong **)*puVar5;
    uVar9 = (uint7)((ulonglong)*puVar5 >> 8);
    if (plVar7 == (longlong *)0x0) {
      uVar6 = (ulonglong)uVar9 << 8;
    }
    else {
      lVar1 = *plVar7;
      if (lVar1 == 0) {
        uVar6 = (ulonglong)uVar9 << 8;
      }
      else {
        plVar7 = (longlong *)(**(code **)(lVar1 + (longlong)*(int *)(puVar5 + 1) * 8))();
        uVar6 = 0;
        if (plVar7 != (longlong *)0x0) {
          if (*plVar7 == 0) {
            uVar6 = (ulonglong)plVar7 & 0xffffffffffffff00;
          }
          else {
            pcVar2 = *(code **)(*plVar7 + (longlong)*(int *)((longlong)puVar5 + 0xc) * 8);
            pcVar8 = param_1 + 1;
            if (*param_1 != '#') {
              pcVar8 = param_1;
            }
            local_450[0] = pcVar8;
            local_450[1] = param_1;
            for (iVar11 = 0; iVar11 < (int)((pcVar8 != param_1) + 1); iVar11 = iVar11 + 1) {
              local_438[0] = L'\0';
              cVar3 = (*pcVar2)(plVar7,local_450[iVar11],local_438,0x200);
              if ((cVar3 != '\0') && (local_438[0] != L'\0')) {
                iVar4 = WideCharToMultiByte(0xfde9,0,local_438,-1,param_2,0xc0,(LPCSTR)0x0,
                                            (LPBOOL)0x0);
                if (1 < iVar4) {
                  bVar10 = 1;
                  break;
                }
              }
            }
            if (DAT_1803feeec < 10) {
              DAT_1803feeec = DAT_1803feeec + 1;
              pcVar8 = "<none>";
              if (bVar10 != 0) {
                pcVar8 = param_2;
              }
              FUN_180014410("[WEAP] localize \'%s\' -> %s\n",param_1,pcVar8);
            }
            uVar6 = (ulonglong)bVar10;
          }
        }
      }
    }
  }
  return uVar6;
}


)B18001ed70",
    "bf377bb2c1888cdcfe32a8f03a0e4f8421e2921d69cddeeb4059b7adf1c28543",
    R"F18001ed70C(FUN_180014410
FUN_18001eac0)F18001ed70C",
    R"F18001ed70D(DAT_1803da4c0
DAT_1803feeec)F18001ed70D",
    R"F18001ed70T("<none>"
"[WEAP] localize \\'%s\\' -> %s\\n")F18001ed70T",
    R"F18001ed70F(30: if (*(char *)(puVar5 + 2) == '\0') {
33: else {
37: if (plVar7 == (longlong *)0x0) {
40: else {
42: if (lVar1 == 0) {
45: else {
48: if (plVar7 != (longlong *)0x0) {
49: if (*plVar7 == 0) {
52: else {
55: if (*param_1 != '#') {
60: for (iVar11 = 0; iVar11 < (int)((pcVar8 != param_1) + 1); iVar11 = iVar11 + 1) {
63: if ((cVar3 != '\0') && (local_438[0] != L'\0')) {
66: if (1 < iVar4) {
68: break;
72: if (DAT_1803feeec < 10) {
75: if (bVar10 != 0) {
86: return uVar6;)F18001ed70F",
    R"F18001ed70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803feeec.
TODO: resolve the indirect call in body 46: plVar7 = (longlong *)(**(code **)(lVar1 + (longlong)*(int *)(puVar5 + 1) * 8))();.
TODO: resolve the indirect call in body 53: pcVar2 = *(code **)(*plVar7 + (longlong)*(int *)((longlong)puVar5 + 0xc) * 8);.
TODO: resolve the indirect call in body 62: cVar3 = (*pcVar2)(plVar7,local_450[iVar11],local_438,0x200);.)F18001ed70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001ed70() noexcept {
    return kFunction_0x18001ed70;
}

// 0x18001ef10 FUN_18001ef10
// source: re/dump/decompile/0x18001ef10_FUN_18001ef10.c
// size: 213 bytes; thunk: false
// body sha256: e86247cae63079d9f5935ae46321c91bbc32e714ecea699ac77d2ccb5c097550
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001ef10{
    "0x18001ef10",
    "FUN_18001ef10",
    R"F18001ef10S(undefined FUN_18001ef10())F18001ef10S",
    R"B18001ef10(// 0x18001ef10  FUN_18001ef10
// size=213 thunk=false
// signature: undefined FUN_18001ef10()
// status: ok


bool FUN_18001ef10(longlong param_1,char *param_2,char *param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  byte *_Src;
  
  if (param_1 == 0) {
    return false;
  }
  if (param_3 == (char *)0x0) {
    return false;
  }
  _Src = (byte *)FUN_18001ea40();
  if ((_Src == (byte *)0x0) || (*_Src != 0x23)) {
    bVar1 = false;
    bVar2 = false;
    if ((_Src != (byte *)0x0) &&
       ((0x3c < *_Src || ((0x1000000800000001U >> ((longlong)(char)*_Src & 0x3fU) & 1) == 0)))) {
      bVar2 = true;
      goto LAB_18001ef48;
    }
  }
  else {
    bVar2 = true;
  }
  bVar1 = bVar2;
  bVar2 = false;
LAB_18001ef48:
  if ((((bVar1) && (_Src != (byte *)0x0)) && (*_Src != 0)) &&
     (cVar3 = FUN_18001ed70(_Src,param_3), cVar3 != '\0')) {
    return true;
  }
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
     (cVar3 = FUN_18001ed70(param_2,param_3), cVar3 != '\0')) {
    return true;
  }
  if (!bVar2) {
    return false;
  }
  strncpy_s(param_3,0xc0,(char *)_Src,0xffffffffffffffff);
  return *param_3 != '\0';
}


)B18001ef10",
    "e86247cae63079d9f5935ae46321c91bbc32e714ecea699ac77d2ccb5c097550",
    R"F18001ef10C(FUN_18001ea40
FUN_18001ed70)F18001ef10C",
    R"F18001ef10D(LAB_18001ef48)F18001ef10D",
    R"F18001ef10T()F18001ef10T",
    R"F18001ef10F(15: if (param_1 == 0) {
16: return false;
18: if (param_3 == (char *)0x0) {
19: return false;
22: if ((_Src == (byte *)0x0) || (*_Src != 0x23)) {
25: if ((_Src != (byte *)0x0) &&
28: goto LAB_18001ef48;
31: else {
36: LAB_18001ef48:
37: if ((((bVar1) && (_Src != (byte *)0x0)) && (*_Src != 0)) &&
39: return true;
41: if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
43: return true;
45: if (!bVar2) {
46: return false;
49: return *param_3 != '\0';)F18001ef10F",
    R"F18001ef10U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18001ef48.)F18001ef10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001ef10() noexcept {
    return kFunction_0x18001ef10;
}

// 0x18001eff0 FUN_18001eff0
// source: re/dump/decompile/0x18001eff0_FUN_18001eff0.c
// size: 607 bytes; thunk: false
// body sha256: d376a84baa649bdb04ec192760ac976e328870628fe943cca07ae69a8f2fa4c2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001eff0{
    "0x18001eff0",
    "FUN_18001eff0",
    R"F18001eff0S(undefined FUN_18001eff0())F18001eff0S",
    R"B18001eff0(// 0x18001eff0  FUN_18001eff0
// size=607 thunk=false
// signature: undefined FUN_18001eff0()
// status: ok


double FUN_18001eff0(longlong param_1)

{
  double dVar1;
  double dVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [80];
  
  if (param_1 == 0) {
    return 0.0;
  }
  if (DAT_1803ffc40 == 0) {
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    FUN_18001d080(&local_c8,"DT_BaseCombatWeapon",0x13);
    uVar5 = FUN_18016d4c0(local_88,&local_c8);
    uVar5 = FUN_180018ef0(&DAT_1803fac80,uVar5);
    FUN_18020e450(&local_c8);
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    FUN_18001d080(&local_a8,"m_flNextPrimaryAttack",0x15);
    uVar6 = FUN_18016d4c0(local_68,&local_a8);
    iVar4 = FUN_180018c10(uVar5,uVar6);
    FUN_18020e450(&local_a8);
    DAT_1803ffc40 = iVar4;
    FUN_180014410("[WEAP] m_flNextPrimaryAttack netvar offset = 0x%X (hardcoded 0x%X)\n",iVar4,
                  0x1bd8);
  }
  if (DAT_1803fa608 == 0) {
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    uVar8 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
    uVar9 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x10) >> 0x20);
  }
  if (DAT_1803ffc40 < 1) {
    dVar1 = (double)CONCAT44(uVar9,uVar8) + DAT_180380f10;
  }
  else {
    lVar7 = (longlong)DAT_1803ffc40;
    dVar1 = *(double *)(lVar7 + param_1);
    sVar3 = _dclass(SUB84(dVar1,0));
    if (((sVar3 < 1) && (0.0 <= dVar1)) && (dVar1 <= (double)CONCAT44(uVar9,uVar8) + DAT_180380f10))
    {
      return dVar1;
    }
    dVar1 = (double)CONCAT44(uVar9,uVar8) + DAT_180380f10;
    dVar2 = (double)*(float *)(lVar7 + param_1);
    sVar3 = _dclass(SUB84(dVar2,0));
    if (((sVar3 < 1) && (0.0 <= dVar2)) && (dVar2 <= dVar1)) {
      return dVar2;
    }
  }
  dVar2 = *(double *)(param_1 + 0x1bd8);
  sVar3 = _dclass(SUB84(dVar2,0));
  if (((0 < sVar3) || (dVar2 < 0.0)) || (dVar1 < dVar2)) {
    dVar2 = (double)*(float *)(param_1 + 0x1bd8);
    sVar3 = _dclass(SUB84(dVar2,0));
    if (((0 < sVar3) || (dVar2 < 0.0)) || (dVar1 < dVar2)) {
      dVar2 = 0.0;
    }
  }
  return dVar2;
}


)B18001eff0",
    "d376a84baa649bdb04ec192760ac976e328870628fe943cca07ae69a8f2fa4c2",
    R"F18001eff0C(FUN_180014410
FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001eff0C",
    R"F18001eff0D(DAT_180380f10
DAT_1803fa608
DAT_1803fac80
DAT_1803ffc40)F18001eff0D",
    R"F18001eff0T("DT_BaseCombatWeapon"
"m_flNextPrimaryAttack"
"[WEAP] m_flNextPrimaryAttack netvar offset = 0x%X (hardcoded 0x%X)\\n")F18001eff0T",
    R"F18001eff0F(30: if (param_1 == 0) {
31: return 0.0;
33: if (DAT_1803ffc40 == 0) {
54: if (DAT_1803fa608 == 0) {
58: else {
62: if (DAT_1803ffc40 < 1) {
65: else {
69: if (((sVar3 < 1) && (0.0 <= dVar1)) && (dVar1 <= (double)CONCAT44(uVar9,uVar8) + DAT_180380f10))
71: return dVar1;
76: if (((sVar3 < 1) && (0.0 <= dVar2)) && (dVar2 <= dVar1)) {
77: return dVar2;
82: if (((0 < sVar3) || (dVar2 < 0.0)) || (dVar1 < dVar2)) {
85: if (((0 < sVar3) || (dVar2 < 0.0)) || (dVar1 < dVar2)) {
89: return dVar2;)F18001eff0F",
    R"F18001eff0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380f10.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa608.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.
TODO: recover the declaration, type and value for global/data reference DAT_1803ffc40.)F18001eff0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001eff0() noexcept {
    return kFunction_0x18001eff0;
}

// 0x18001f260 FUN_18001f260
// source: re/dump/decompile/0x18001f260_FUN_18001f260.c
// size: 1217 bytes; thunk: false
// body sha256: 403a1d7d24347b9d8795148b9a4eb594942d827e05c2dd7a75ab97cad7d11768
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001f260{
    "0x18001f260",
    "FUN_18001f260",
    R"F18001f260S(undefined FUN_18001f260())F18001f260S",
    R"B18001f260(// 0x18001f260  FUN_18001f260
// size=1217 thunk=false
// signature: undefined FUN_18001f260()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18001f260(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  size_t sVar4;
  char *pcVar5;
  char *_Str;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  longlong local_130;
  undefined4 local_127;
  undefined2 local_123;
  undefined1 local_121;
  longlong *local_120;
  undefined8 uStack_118;
  longlong local_110;
  undefined8 *local_108;
  undefined4 local_f7;
  undefined2 local_f3;
  undefined1 local_f1;
  longlong local_f0;
  undefined4 local_e7;
  undefined2 local_e3;
  undefined1 local_e1;
  undefined4 local_d7;
  undefined2 local_d3;
  undefined1 local_d1;
  longlong local_d0;
  undefined4 local_c7;
  undefined2 local_c3;
  undefined1 local_c1;
  undefined4 local_b7;
  undefined2 local_b3;
  undefined1 local_b1;
  char local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  local_138 = 0;
  local_108 = param_2;
  if (((DAT_1804253e0 != (code *)0x0) &&
      (plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))(), plVar3 != (longlong *)0x0)) &&
     (iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3), 0 < iVar2)) {
    local_a8[0] = '\0';
    local_a8[1] = '\0';
    local_a8[2] = '\0';
    local_a8[3] = '\0';
    local_a8[4] = '\0';
    local_a8[5] = '\0';
    local_a8[6] = '\0';
    local_a8[7] = '\0';
    local_a8[8] = '\0';
    local_a8[9] = '\0';
    local_a8[10] = '\0';
    local_a8[0xb] = '\0';
    local_a8[0xc] = '\0';
    local_a8[0xd] = '\0';
    local_a8[0xe] = '\0';
    local_a8[0xf] = '\0';
    local_a8[0x10] = '\0';
    local_a8[0x11] = '\0';
    local_a8[0x12] = '\0';
    local_a8[0x13] = '\0';
    local_a8[0x14] = '\0';
    local_a8[0x15] = '\0';
    local_a8[0x16] = '\0';
    local_a8[0x17] = '\0';
    local_a8[0x18] = '\0';
    local_a8[0x19] = '\0';
    local_a8[0x1a] = '\0';
    local_a8[0x1b] = '\0';
    local_a8[0x1c] = '\0';
    local_a8[0x1d] = '\0';
    local_a8[0x1e] = '\0';
    local_a8[0x1f] = '\0';
    local_a8[0x20] = '\0';
    local_a8[0x21] = '\0';
    local_a8[0x22] = '\0';
    local_a8[0x23] = '\0';
    local_a8[0x24] = '\0';
    local_a8[0x25] = '\0';
    local_a8[0x26] = '\0';
    local_a8[0x27] = '\0';
    local_a8[0x28] = '\0';
    local_a8[0x29] = '\0';
    local_a8[0x2a] = '\0';
    local_a8[0x2b] = '\0';
    local_a8[0x2c] = '\0';
    local_a8[0x2d] = '\0';
    local_a8[0x2e] = '\0';
    local_a8[0x2f] = '\0';
    local_a8[0x30] = '\0';
    local_a8[0x31] = '\0';
    local_a8[0x32] = '\0';
    local_a8[0x33] = '\0';
    local_a8[0x34] = '\0';
    local_a8[0x35] = '\0';
    local_a8[0x36] = '\0';
    local_a8[0x37] = '\0';
    local_a8[0x38] = '\0';
    local_a8[0x39] = '\0';
    local_a8[0x3a] = '\0';
    local_a8[0x3b] = '\0';
    local_a8[0x3c] = '\0';
    local_a8[0x3d] = '\0';
    local_a8[0x3e] = '\0';
    local_a8[0x3f] = '\0';
    local_a8[0x40] = '\0';
    local_a8[0x41] = '\0';
    local_a8[0x42] = '\0';
    local_a8[0x43] = '\0';
    local_a8[0x44] = '\0';
    local_a8[0x45] = '\0';
    local_a8[0x46] = '\0';
    local_a8[0x47] = '\0';
    local_a8[0x48] = '\0';
    local_a8[0x49] = '\0';
    local_a8[0x4a] = '\0';
    local_a8[0x4b] = '\0';
    local_a8[0x4c] = '\0';
    local_a8[0x4d] = '\0';
    local_a8[0x4e] = '\0';
    local_a8[0x4f] = '\0';
    local_a8[0x50] = '\0';
    local_a8[0x51] = '\0';
    local_a8[0x52] = '\0';
    local_a8[0x53] = '\0';
    local_a8[0x54] = '\0';
    local_a8[0x55] = '\0';
    local_a8[0x56] = '\0';
    local_a8[0x57] = '\0';
    local_a8[0x58] = '\0';
    local_a8[0x59] = '\0';
    local_a8[0x5a] = '\0';
    local_a8[0x5b] = '\0';
    local_a8[0x5c] = '\0';
    local_a8[0x5d] = '\0';
    local_a8[0x5e] = '\0';
    local_a8[0x5f] = '\0';
    local_a8[0x60] = '\0';
    local_a8[0x61] = '\0';
    local_a8[0x62] = '\0';
    local_a8[99] = '\0';
    local_a8[100] = '\0';
    local_a8[0x65] = '\0';
    local_a8[0x66] = '\0';
    local_a8[0x67] = '\0';
    local_a8[0x68] = '\0';
    local_a8[0x69] = '\0';
    local_a8[0x6a] = '\0';
    local_a8[0x6b] = '\0';
    local_a8[0x6c] = '\0';
    local_a8[0x6d] = '\0';
    local_a8[0x6e] = '\0';
    local_a8[0x6f] = '\0';
    local_a8[0x70] = '\0';
    local_a8[0x71] = '\0';
    local_a8[0x72] = '\0';
    local_a8[0x73] = '\0';
    local_a8[0x74] = '\0';
    local_a8[0x75] = '\0';
    local_a8[0x76] = '\0';
    local_a8[0x77] = '\0';
    local_a8[0x78] = '\0';
    local_a8[0x79] = '\0';
    local_a8[0x7a] = '\0';
    local_a8[0x7b] = '\0';
    local_a8[0x7c] = '\0';
    local_a8[0x7d] = '\0';
    local_a8[0x7e] = '\0';
    local_a8[0x7f] = '\0';
    cVar1 = (*DAT_1804253e0)(iVar2,local_a8,0x80);
    if ((cVar1 != '\0') && (local_a8[0] != '\0')) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      sVar4 = strlen(local_a8);
      FUN_18001d080(param_2,local_a8,sVar4);
      return param_2;
    }
  }
  local_120 = (longlong *)0x0;
  uStack_118 = 0;
  local_110 = 0;
  FUN_18001bcd0(0,&local_120);
  if (local_120 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    FUN_18001d080(param_2,&DAT_18033e5ea,0);
    local_138 = 1;
    if (local_120 != (longlong *)0x0) {
      (**(code **)*local_120)();
      DAT_1803fa338 = local_110 != 0;
      DAT_1803fa330 = local_110;
      if (!(bool)DAT_1803fa338) {
        DAT_1803fa330 = local_130;
      }
      DAT_1803fa339 = local_127;
      DAT_1803fa33d = local_123;
      DAT_1803fa33f = local_121;
    }
  }
  else {
    cVar1 = FUN_18001e2b0(param_1,local_120);
    if (cVar1 == '\0') {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      FUN_18001d080(param_2,&DAT_18033e5ea,0);
      local_138 = 1;
      if (local_120 != (longlong *)0x0) {
        (**(code **)*local_120)();
        if (local_110 == 0) {
          DAT_1803fa330 = local_f0;
          DAT_1803fa339 = local_e7;
          DAT_1803fa33d = local_e3;
          local_f1 = local_e1;
        }
        else {
          DAT_1803fa330 = local_110;
          DAT_1803fa339 = local_f7;
          DAT_1803fa33d = local_f3;
        }
        DAT_1803fa338 = local_110 != 0;
        DAT_1803fa33f = local_f1;
      }
    }
    else {
      (**(code **)(*local_120 + 0x20))(local_120,0xffffffff,&DAT_1803401d4);
      cVar1 = (**(code **)(*local_120 + 0x138))(local_120,0xffffffff,4);
      if (cVar1 == '\0') {
        (**(code **)(*local_120 + 0x10))(local_120,2);
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        FUN_18001d080(param_2,&DAT_18033e5ea,0);
        local_138 = 1;
        if (local_120 != (longlong *)0x0) {
          (**(code **)*local_120)();
          if (local_110 == 0) {
            DAT_1803fa330 = local_d0;
            DAT_1803fa339 = local_c7;
            DAT_1803fa33d = local_c3;
            local_d1 = local_c1;
          }
          else {
            DAT_1803fa330 = local_110;
            DAT_1803fa339 = local_d7;
            DAT_1803fa33d = local_d3;
          }
          DAT_1803fa338 = local_110 != 0;
          DAT_1803fa33f = local_d1;
        }
      }
      else {
        pcVar5 = (char *)(**(code **)(*local_120 + 0xb8))(local_120,0xffffffff,0);
        (**(code **)(*local_120 + 0x10))(local_120,2);
        _Str = "";
        if (pcVar5 != (char *)0x0) {
          _Str = pcVar5;
        }
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        sVar4 = strlen(_Str);
        FUN_18001d080(param_2,_Str,sVar4);
        local_138 = 1;
        if (local_120 != (longlong *)0x0) {
          (**(code **)*local_120)();
          if (local_110 == 0) {
            DAT_1803fa330 = local_130;
            DAT_1803fa339 = local_127;
            DAT_1803fa33d = local_123;
            local_b1 = local_121;
          }
          else {
            DAT_1803fa330 = local_110;
            DAT_1803fa339 = local_b7;
            DAT_1803fa33d = local_b3;
          }
          DAT_1803fa338 = local_110 != 0;
          DAT_1803fa33f = local_b1;
        }
      }
    }
  }
  return param_2;
}


)B18001f260",
    "403a1d7d24347b9d8795148b9a4eb594942d827e05c2dd7a75ab97cad7d11768",
    R"F18001f260C(FUN_18001bcd0
FUN_18001d080
FUN_18001e2b0)F18001f260C",
    R"F18001f260D(DAT_18033e5ea
DAT_1803401d4
DAT_1803da4c0
DAT_1803fa330
DAT_1803fa338
DAT_1803fa339
DAT_1803fa33d
DAT_1803fa33f
DAT_1804253e0)F18001f260D",
    R"F18001f260T("")F18001f260T",
    R"F18001f260F(51: if (((DAT_1804253e0 != (code *)0x0) &&
183: if ((cVar1 != '\0') && (local_a8[0] != '\0')) {
190: return param_2;
197: if (local_120 == (longlong *)0x0) {
204: if (local_120 != (longlong *)0x0) {
208: if (!(bool)DAT_1803fa338) {
216: else {
218: if (cVar1 == '\0') {
225: if (local_120 != (longlong *)0x0) {
227: if (local_110 == 0) {
233: else {
242: else {
245: if (cVar1 == '\0') {
253: if (local_120 != (longlong *)0x0) {
255: if (local_110 == 0) {
261: else {
270: else {
274: if (pcVar5 != (char *)0x0) {
284: if (local_120 != (longlong *)0x0) {
286: if (local_110 == 0) {
292: else {
303: return param_2;)F18001f260F",
    R"F18001f260U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type and value for global/data reference DAT_1803401d4.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa330.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa338.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa339.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa33d.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa33f.
TODO: recover the declaration, type and value for global/data reference DAT_1804253e0.
TODO: resolve the indirect call in body 51: if (((DAT_1804253e0 != (code *)0x0) &&.
TODO: resolve the indirect call in body 52: (plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))(), plVar3 != (longlong *)0x0)) &&.
TODO: resolve the indirect call in body 53: (iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3), 0 < iVar2)) {.
TODO: resolve the indirect call in body 182: cVar1 = (*DAT_1804253e0)(iVar2,local_a8,0x80);.
TODO: resolve the indirect call in body 205: (**(code **)*local_120)();.
TODO: resolve the indirect call in body 226: (**(code **)*local_120)();.
TODO: resolve the indirect call in body 243: (**(code **)(*local_120 + 0x20))(local_120,0xffffffff,&DAT_1803401d4);.
TODO: resolve the indirect call in body 244: cVar1 = (**(code **)(*local_120 + 0x138))(local_120,0xffffffff,4);.
TODO: resolve the indirect call in body 246: (**(code **)(*local_120 + 0x10))(local_120,2);.
TODO: resolve the indirect call in body 254: (**(code **)*local_120)();.
TODO: resolve the indirect call in body 271: pcVar5 = (char *)(**(code **)(*local_120 + 0xb8))(local_120,0xffffffff,0);.
TODO: resolve the indirect call in body 272: (**(code **)(*local_120 + 0x10))(local_120,2);.
TODO: resolve the indirect call in body 285: (**(code **)*local_120)();.)F18001f260U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001f260() noexcept {
    return kFunction_0x18001f260;
}

// 0x18001f750 FUN_18001f750
// source: re/dump/decompile/0x18001f750_FUN_18001f750.c
// size: 120 bytes; thunk: false
// body sha256: 0b42e7cb3c133690f23362214bcf98dfc456466da390d2bb5ffde7d9f37776b6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001f750{
    "0x18001f750",
    "FUN_18001f750",
    R"F18001f750S(undefined FUN_18001f750())F18001f750S",
    R"B18001f750(// 0x18001f750  FUN_18001f750
// size=120 thunk=false
// signature: undefined FUN_18001f750()
// status: ok


char * FUN_18001f750(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char *pcVar4;
  char *pcVar5;
  
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))();
  if (plVar3 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
    if (DAT_1803fa668 != (longlong *)0x0) {
      pcVar5 = (char *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x1fb0)
      ;
      cVar1 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,uVar2,pcVar5);
      pcVar4 = "unknown";
      if (cVar1 != '\0') {
        pcVar4 = pcVar5;
      }
      return pcVar4;
    }
  }
  return "unknown";
}


)B18001f750",
    "0b42e7cb3c133690f23362214bcf98dfc456466da390d2bb5ffde7d9f37776b6",
    R"F18001f750C()F18001f750C",
    R"F18001f750D(DAT_1803fa668)F18001f750D",
    R"F18001f750T("unknown")F18001f750T",
    R"F18001f750F(17: if (plVar3 != (longlong *)0x0) {
19: if (DAT_1803fa668 != (longlong *)0x0) {
25: if (cVar1 != '\0') {
28: return pcVar4;
31: return "unknown";)F18001f750F",
    R"F18001f750U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 16: plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))();.
TODO: resolve the indirect call in body 18: uVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);.
TODO: resolve the indirect call in body 23: cVar1 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,uVar2,pcVar5);.)F18001f750U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001f750() noexcept {
    return kFunction_0x18001f750;
}

// 0x18001f7d0 FUN_18001f7d0
// source: re/dump/decompile/0x18001f7d0_FUN_18001f7d0.c
// size: 387 bytes; thunk: false
// body sha256: 312c8f203888f5316f6891ffa56de1910100ad47be02937e0eed57964637f297
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001f7d0{
    "0x18001f7d0",
    "FUN_18001f7d0",
    R"F18001f7d0S(undefined FUN_18001f7d0())F18001f7d0S",
    R"B18001f7d0(// 0x18001f7d0  FUN_18001f7d0
// size=387 thunk=false
// signature: undefined FUN_18001f7d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_18001f7d0(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_378 [32];
  undefined4 local_358;
  char local_348 [15];
  undefined1 uStack_339;
  char local_338 [800];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_378;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x20))();
  if ((plVar5 != (longlong *)0x0) &&
     (uVar4 = (**(code **)(*plVar5 + 0x48))(plVar5), DAT_1803fa668 != (longlong *)0x0)) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar9 = lVar2 + 0x3940;
    cVar3 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,uVar4,lVar9);
    if (cVar3 != '\0') {
      if (DAT_1803ff25c == '\0') {
        DAT_1803ff25c = '\x01';
        FUN_180014410("[DIAG] player_info_t: name=\'%s\' userID=%d sizeof=%d\n",lVar9,
                      *(undefined4 *)(lVar2 + 0x39c0),0x144);
        local_358 = 0xa8;
        FUN_180014410("[DIAG] offsets: name=%d userID=%d guid=%d friendsID=%d\n",0,0x80,0x84);
        lVar8 = 0;
        local_338[0] = '\0';
        do {
          FUN_180012a00(local_348,"%02X ",*(undefined1 *)(lVar9 + lVar8));
          puVar6 = &uStack_339;
          do {
            pcVar1 = puVar6 + 1;
            puVar6 = puVar6 + 1;
          } while (*pcVar1 != '\0');
          lVar7 = 0;
          do {
            cVar3 = local_348[lVar7];
            puVar6[lVar7] = cVar3;
            lVar7 = lVar7 + 1;
          } while (cVar3 != '\0');
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x100);
        FUN_180014410("[DIAG] raw: %s\n",local_338);
      }
      return *(undefined4 *)(lVar2 + 0x39c0);
    }
  }
  return 0xffffffff;
}


)B18001f7d0",
    "312c8f203888f5316f6891ffa56de1910100ad47be02937e0eed57964637f297",
    R"F18001f7d0C(FUN_180012a00
FUN_180014410)F18001f7d0C",
    R"F18001f7d0D(DAT_1803da4c0
DAT_1803fa668
DAT_1803ff25c)F18001f7d0D",
    R"F18001f7d0T("%02X "
"[DIAG] raw: %s\\n"
"[DIAG] player_info_t: name=\\'%s\\' userID=%d sizeof=%d\\n"
"[DIAG] offsets: name=%d userID=%d guid=%d friendsID=%d\\n")F18001f7d0T",
    R"F18001f7d0F(30: if ((plVar5 != (longlong *)0x0) &&
35: if (cVar3 != '\0') {
36: if (DAT_1803ff25c == '\0') {
44: do {
47: do {
52: do {
61: return *(undefined4 *)(lVar2 + 0x39c0);
64: return 0xffffffff;)F18001f7d0F",
    R"F18001f7d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff25c.
TODO: resolve the indirect call in body 29: plVar5 = (longlong *)(**(code **)(*param_1 + 0x20))();.
TODO: resolve the indirect call in body 31: (uVar4 = (**(code **)(*plVar5 + 0x48))(plVar5), DAT_1803fa668 != (longlong *)0x0)) {.
TODO: resolve the indirect call in body 34: cVar3 = (**(code **)(*DAT_1803fa668 + 0x40))(DAT_1803fa668,uVar4,lVar9);.)F18001f7d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001f7d0() noexcept {
    return kFunction_0x18001f7d0;
}

// 0x18001f960 FUN_18001f960
// source: re/dump/decompile/0x18001f960_FUN_18001f960.c
// size: 107 bytes; thunk: false
// body sha256: 063221932a0581093b7ed49a7ef8b6a20ca22c7beb6436985e3b0b3fc7b9ee48
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001f960{
    "0x18001f960",
    "FUN_18001f960",
    R"F18001f960S(undefined FUN_18001f960())F18001f960S",
    R"B18001f960(// 0x18001f960  FUN_18001f960
// size=107 thunk=false
// signature: undefined FUN_18001f960()
// status: ok


char * FUN_18001f960(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  char *pcVar3;
  
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x20))();
  if ((plVar2 != (longlong *)0x0) && (iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2), 0 < iVar1)) {
    if ((DAT_180426150 != (code *)0x0) &&
       ((pcVar3 = (char *)(*DAT_180426150)(iVar1), pcVar3 != (char *)0x0 && (*pcVar3 != '\0')))) {
      return pcVar3;
    }
    if (DAT_1803fe9e8 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00018001f9bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pcVar3 = (char *)(*DAT_1803fe9e8)(iVar1,"UserGroup",&DAT_180340268);
      return pcVar3;
    }
  }
  return "user";
}


)B18001f960",
    "063221932a0581093b7ed49a7ef8b6a20ca22c7beb6436985e3b0b3fc7b9ee48",
    R"F18001f960C()F18001f960C",
    R"F18001f960D(DAT_180340268
DAT_1803fe9e8
DAT_180426150)F18001f960D",
    R"F18001f960T("user"
"UserGroup")F18001f960T",
    R"F18001f960F(15: if ((plVar2 != (longlong *)0x0) && (iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2), 0 < iVar1)) {
16: if ((DAT_180426150 != (code *)0x0) &&
18: return pcVar3;
20: if (DAT_1803fe9e8 != (code *)0x0) {
24: return pcVar3;
27: return "user";)F18001f960F",
    R"F18001f960U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180340268.
TODO: recover the declaration, type and value for global/data reference DAT_1803fe9e8.
TODO: recover the declaration, type and value for global/data reference DAT_180426150.
TODO: resolve the indirect call in body 14: plVar2 = (longlong *)(**(code **)(*param_1 + 0x20))();.
TODO: resolve the indirect call in body 15: if ((plVar2 != (longlong *)0x0) && (iVar1 = (**(code **)(*plVar2 + 0x48))(plVar2), 0 < iVar1)) {.
TODO: resolve the indirect call in body 16: if ((DAT_180426150 != (code *)0x0) &&.
TODO: resolve the indirect call in body 17: ((pcVar3 = (char *)(*DAT_180426150)(iVar1), pcVar3 != (char *)0x0 && (*pcVar3 != '\0')))) {.
TODO: resolve the indirect call in body 20: if (DAT_1803fe9e8 != (code *)0x0) {.
TODO: resolve the indirect call in body 23: pcVar3 = (char *)(*DAT_1803fe9e8)(iVar1,"UserGroup",&DAT_180340268);.)F18001f960U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001f960() noexcept {
    return kFunction_0x18001f960;
}

// 0x18001f9d0 FUN_18001f9d0
// source: re/dump/decompile/0x18001f9d0_FUN_18001f9d0.c
// size: 250 bytes; thunk: false
// body sha256: c6595290c63dc7d8a5d646c690398ed4fb11a7fe62b076e0bcd8b452b60ca182
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001f9d0{
    "0x18001f9d0",
    "FUN_18001f9d0",
    R"F18001f9d0S(undefined FUN_18001f9d0())F18001f9d0S",
    R"B18001f9d0(// 0x18001f9d0  FUN_18001f9d0
// size=250 thunk=false
// signature: undefined FUN_18001f9d0()
// status: ok


undefined8 * FUN_18001f9d0(longlong param_1,undefined8 *param_2)

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
  FUN_18001d080(&local_98,"m_vecPunchAngle",0xf);
  local_78 = &local_98;
  local_70 = local_48;
  uVar3 = FUN_18016d4c0(local_48,&local_98);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_98);
  *param_2 = *(undefined8 *)(iVar1 + param_1);
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}


)B18001f9d0",
    "c6595290c63dc7d8a5d646c690398ed4fb11a7fe62b076e0bcd8b452b60ca182",
    R"F18001f9d0C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001f9d0C",
    R"F18001f9d0D(DAT_1803fac80)F18001f9d0D",
    R"F18001f9d0T("DT_BasePlayer"
"m_vecPunchAngle")F18001f9d0T",
    R"F18001f9d0F(46: return param_2;)F18001f9d0F",
    R"F18001f9d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F18001f9d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001f9d0() noexcept {
    return kFunction_0x18001f9d0;
}

// 0x18001fad0 FUN_18001fad0
// source: re/dump/decompile/0x18001fad0_FUN_18001fad0.c
// size: 229 bytes; thunk: false
// body sha256: 034adfc59f7651d15a7bf7b0a23ec2909e7a7be023dc825560e16baa10f16d7e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001fad0{
    "0x18001fad0",
    "FUN_18001fad0",
    R"F18001fad0S(undefined FUN_18001fad0())F18001fad0S",
    R"B18001fad0(// 0x18001fad0  FUN_18001fad0
// size=229 thunk=false
// signature: undefined FUN_18001fad0()
// status: ok


undefined4 FUN_18001fad0(longlong param_1)

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
  FUN_18001d080(&local_98,"m_iObserverMode",0xf);
  local_78 = &local_98;
  local_70 = local_48;
  uVar3 = FUN_18016d4c0(local_48,&local_98);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_98);
  return *(undefined4 *)(iVar1 + param_1);
}


)B18001fad0",
    "034adfc59f7651d15a7bf7b0a23ec2909e7a7be023dc825560e16baa10f16d7e",
    R"F18001fad0C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001fad0C",
    R"F18001fad0D(DAT_1803fac80)F18001fad0D",
    R"F18001fad0T("DT_BasePlayer"
"m_iObserverMode")F18001fad0T",
    R"F18001fad0F(44: return *(undefined4 *)(iVar1 + param_1);)F18001fad0F",
    R"F18001fad0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F18001fad0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001fad0() noexcept {
    return kFunction_0x18001fad0;
}

// 0x18001fbc0 FUN_18001fbc0
// source: re/dump/decompile/0x18001fbc0_FUN_18001fbc0.c
// size: 297 bytes; thunk: false
// body sha256: 649f13ab0d45e6bf53bb5651f2313f038872c7d5f836bcac41981c1d9918b7e9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001fbc0{
    "0x18001fbc0",
    "FUN_18001fbc0",
    R"F18001fbc0S(undefined FUN_18001fbc0())F18001fbc0S",
    R"B18001fbc0(// 0x18001fbc0  FUN_18001fbc0
// size=297 thunk=false
// signature: undefined FUN_18001fbc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18001fbc0(longlong param_1)

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
  int local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  FUN_18001d080(&local_e8,"DT_BasePlayer",0xd);
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
  FUN_18001d080(&local_c8,"m_hObserverTarget",0x11);
  local_90 = &local_c8;
  local_88 = local_60;
  uVar3 = FUN_18016d4c0(local_60,&local_c8);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_c8);
  local_40[0] = *(int *)(iVar1 + param_1);
  if ((local_40[0] - 1U < 0xfffffffe) && (DAT_1803fa360 != (longlong *)0x0)) {
    uVar2 = (**(code **)(*DAT_1803fa360 + 0x20))(DAT_1803fa360,local_40);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


)B18001fbc0",
    "649f13ab0d45e6bf53bb5651f2313f038872c7d5f836bcac41981c1d9918b7e9",
    R"F18001fbc0C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001fbc0C",
    R"F18001fbc0D(DAT_1803da4c0
DAT_1803fa360
DAT_1803fac80)F18001fbc0D",
    R"F18001fbc0T("DT_BasePlayer"
"m_hObserverTarget")F18001fbc0T",
    R"F18001fbc0F(57: if ((local_40[0] - 1U < 0xfffffffe) && (DAT_1803fa360 != (longlong *)0x0)) {
60: else {
63: return uVar2;)F18001fbc0F",
    R"F18001fbc0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.
TODO: resolve the indirect call in body 58: uVar2 = (**(code **)(*DAT_1803fa360 + 0x20))(DAT_1803fa360,local_40);.)F18001fbc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001fbc0() noexcept {
    return kFunction_0x18001fbc0;
}

// 0x18001fcf0 FUN_18001fcf0
// source: re/dump/decompile/0x18001fcf0_FUN_18001fcf0.c
// size: 230 bytes; thunk: false
// body sha256: 9757622d43a4d2f54cdc2b0bc62c95b20e22badc762d50d7004c6c087cf4e085
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001fcf0{
    "0x18001fcf0",
    "FUN_18001fcf0",
    R"F18001fcf0S(undefined FUN_18001fcf0())F18001fcf0S",
    R"B18001fcf0(// 0x18001fcf0  FUN_18001fcf0
// size=230 thunk=false
// signature: undefined FUN_18001fcf0()
// status: ok


undefined1 FUN_18001fcf0(longlong param_1)

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
  FUN_18001d080(&local_b8,"DT_GMOD_Player",0xe);
  uVar2 = FUN_18016d4c0(local_68,&local_b8);
  uVar2 = FUN_180018ef0(&DAT_1803fac80,uVar2);
  FUN_18020e450(&local_b8);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_18001d080(&local_98,"m_nWaterLevel",0xd);
  local_78 = &local_98;
  local_70 = local_48;
  uVar3 = FUN_18016d4c0(local_48,&local_98);
  iVar1 = FUN_180018c10(uVar2,uVar3);
  FUN_18020e450(&local_98);
  return *(undefined1 *)(iVar1 + param_1);
}


)B18001fcf0",
    "9757622d43a4d2f54cdc2b0bc62c95b20e22badc762d50d7004c6c087cf4e085",
    R"F18001fcf0C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18016d4c0
FUN_18020e450)F18001fcf0C",
    R"F18001fcf0D(DAT_1803fac80)F18001fcf0D",
    R"F18001fcf0T("m_nWaterLevel"
"DT_GMOD_Player")F18001fcf0T",
    R"F18001fcf0F(44: return *(undefined1 *)(iVar1 + param_1);)F18001fcf0F",
    R"F18001fcf0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F18001fcf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001fcf0() noexcept {
    return kFunction_0x18001fcf0;
}

// 0x18001fde0 FUN_18001fde0
// source: re/dump/decompile/0x18001fde0_FUN_18001fde0.c
// size: 169 bytes; thunk: false
// body sha256: 52959cc3e7e3a1ef6c45e50d72187c34df083636b2c54198344376980d039659
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001fde0{
    "0x18001fde0",
    "FUN_18001fde0",
    R"F18001fde0S(undefined FUN_18001fde0())F18001fde0S",
    R"B18001fde0(// 0x18001fde0  FUN_18001fde0
// size=169 thunk=false
// signature: undefined FUN_18001fde0()
// status: ok


void FUN_18001fde0(float *param_1,float *param_2,float *param_3)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  puVar1 = PTR_FUN_1803da018;
  fVar4 = *param_3 - *param_2;
  fVar2 = param_3[1] - param_2[1];
  fVar3 = param_3[2] - param_2[2];
  param_1[4] = fVar4;
  param_1[5] = fVar2;
  param_1[6] = fVar3;
  fVar2 = (float)(*(code *)puVar1)(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
  *(bool *)((longlong)param_1 + 0x49) = fVar2 != 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0x10] = 0.0;
  param_1[0x11] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[8] = 0.0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  fVar2 = param_2[2];
  fVar3 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = fVar2;
  *param_1 = fVar3;
  return;
}


)B18001fde0",
    "52959cc3e7e3a1ef6c45e50d72187c34df083636b2c54198344376980d039659",
    R"F18001fde0C()F18001fde0C",
    R"F18001fde0D()F18001fde0D",
    R"F18001fde0T()F18001fde0T",
    R"F18001fde0F(38: return;)F18001fde0F",
    R"F18001fde0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 22: fVar2 = (float)(*(code *)puVar1)(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);.)F18001fde0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001fde0() noexcept {
    return kFunction_0x18001fde0;
}

// 0x18001fe90 FUN_18001fe90
// source: re/dump/decompile/0x18001fe90_FUN_18001fe90.c
// size: 376 bytes; thunk: false
// body sha256: 2b479862857692e5c6fa9b1c5a1d0078ed6b608f673174289ad00bd7886fcff8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18001fe90{
    "0x18001fe90",
    "FUN_18001fe90",
    R"F18001fe90S(undefined FUN_18001fe90())F18001fe90S",
    R"B18001fe90(// 0x18001fe90  FUN_18001fe90
// size=376 thunk=false
// signature: undefined FUN_18001fe90()
// status: ok


void FUN_18001fe90(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = param_3[2] - param_2[2];
  fVar4 = param_3[1] - param_2[1];
  fVar3 = *param_3 - *param_2;
  param_1[6] = fVar2;
  param_1[5] = fVar4;
  param_1[4] = fVar3;
  fVar6 = DAT_180380ac0;
  *(bool *)((longlong)param_1 + 0x49) = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 != 0.0;
  fVar2 = *param_5;
  fVar3 = *param_4;
  param_1[0xc] = fVar2 - fVar3;
  fVar4 = param_5[1];
  fVar1 = param_4[1];
  fVar5 = (fVar2 - fVar3) * fVar6;
  param_1[0xd] = fVar4 - fVar1;
  fVar2 = param_5[2];
  fVar3 = param_4[2];
  param_1[0xc] = fVar5;
  fVar4 = (fVar4 - fVar1) * fVar6;
  param_1[0x10] = 0.0;
  param_1[0x11] = 0.0;
  param_1[0xd] = fVar4;
  fVar2 = (fVar2 - fVar3) * fVar6;
  param_1[0xe] = fVar2;
  *(bool *)(param_1 + 0x12) =
       (double)(fVar4 * fVar4 + fVar5 * fVar5 + fVar2 * fVar2) < DAT_180380a80;
  fVar2 = *param_4;
  fVar3 = *param_5;
  param_1[8] = fVar2 + fVar3;
  fVar4 = param_4[1];
  fVar1 = param_5[1];
  fVar5 = (fVar2 + fVar3) * fVar6;
  param_1[9] = fVar4 + fVar1;
  fVar2 = param_5[2];
  fVar3 = param_4[2];
  param_1[8] = fVar5;
  fVar4 = (fVar4 + fVar1) * fVar6;
  fVar6 = (fVar2 + fVar3) * fVar6;
  param_1[9] = fVar4;
  param_1[10] = fVar6;
  *param_1 = fVar5 + *param_2;
  param_1[1] = fVar4 + param_2[1];
  fVar2 = param_2[2];
  fVar4 = fVar4 * DAT_180381384;
  fVar3 = fVar6 * DAT_180381384;
  param_1[8] = fVar5 * DAT_180381384;
  param_1[9] = fVar4;
  param_1[10] = fVar3;
  param_1[2] = fVar6 + fVar2;
  return;
}


)B18001fe90",
    "2b479862857692e5c6fa9b1c5a1d0078ed6b608f673174289ad00bd7886fcff8",
    R"F18001fe90C()F18001fe90C",
    R"F18001fe90D(DAT_180380a80
DAT_180380ac0
DAT_180381384)F18001fe90D",
    R"F18001fe90T()F18001fe90T",
    R"F18001fe90F(66: return;)F18001fe90F",
    R"F18001fe90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380a80.
TODO: recover the declaration, type and value for global/data reference DAT_180380ac0.
TODO: recover the declaration, type and value for global/data reference DAT_180381384.)F18001fe90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18001fe90() noexcept {
    return kFunction_0x18001fe90;
}

// 0x180020010 vfunc_shared_180020010
// source: re/dump/decompile/0x180020010_vfunc_shared_180020010.c
// size: 3 bytes; thunk: false
// body sha256: a5a995bc00a4995a206d050abb1e51897ca8c2a76a9fc78d30db3dbfe1b5886d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180020010{
    "0x180020010",
    "vfunc_shared_180020010",
    R"F180020010S(undefined vfunc_shared_180020010())F180020010S",
    R"B180020010(// 0x180020010  vfunc_shared_180020010
// size=3 thunk=false
// signature: undefined vfunc_shared_180020010()
// status: ok


undefined1 vfunc_shared_180020010(void)

{
  return 0;
}


)B180020010",
    "a5a995bc00a4995a206d050abb1e51897ca8c2a76a9fc78d30db3dbfe1b5886d",
    R"F180020010C()F180020010C",
    R"F180020010D()F180020010D",
    R"F180020010T()F180020010T",
    R"F180020010F(10: return 0;)F180020010F",
    R"F180020010U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180020010U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180020010() noexcept {
    return kFunction_0x180020010;
}

// 0x180020020 CTraceFilter_vfunc00
// source: re/dump/decompile/0x180020020_CTraceFilter_vfunc00.c
// size: 8 bytes; thunk: false
// body sha256: 99deddbe4989daa5ae91d2d490c9bf5a7086ecf2a467256bb6929d7db3ed36a1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180020020{
    "0x180020020",
    "CTraceFilter_vfunc00",
    R"F180020020S(undefined CTraceFilter_vfunc00())F180020020S",
    R"B180020020(// 0x180020020  CTraceFilter_vfunc00
// size=8 thunk=false
// signature: undefined CTraceFilter_vfunc00()
// status: ok


bool CTraceFilter_vfunc00(longlong param_1,longlong param_2)

{
  return param_2 != *(longlong *)(param_1 + 8);
}


)B180020020",
    "99deddbe4989daa5ae91d2d490c9bf5a7086ecf2a467256bb6929d7db3ed36a1",
    R"F180020020C()F180020020C",
    R"F180020020D()F180020020D",
    R"F180020020T()F180020020T",
    R"F180020020F(10: return param_2 != *(longlong *)(param_1 + 8);)F180020020F",
    R"F180020020U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180020020U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180020020() noexcept {
    return kFunction_0x180020020;
}

// 0x180020030 CDoubleTraceFilter_vfunc00
// source: re/dump/decompile/0x180020030_CDoubleTraceFilter_vfunc00.c
// size: 18 bytes; thunk: false
// body sha256: 62e38621c26a14ed45c5001c042131fe0da133aff7cef5f77e3fb88de8eb3936
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180020030{
    "0x180020030",
    "CDoubleTraceFilter_vfunc00",
    R"F180020030S(undefined CDoubleTraceFilter_vfunc00())F180020030S",
    R"B180020030(// 0x180020030  CDoubleTraceFilter_vfunc00
// size=18 thunk=false
// signature: undefined CDoubleTraceFilter_vfunc00()
// status: ok


undefined1 CDoubleTraceFilter_vfunc00(longlong param_1,longlong param_2)

{
  if ((param_2 != *(longlong *)(param_1 + 8)) && (param_2 != *(longlong *)(param_1 + 0x10))) {
    return 1;
  }
  return 0;
}


)B180020030",
    "62e38621c26a14ed45c5001c042131fe0da133aff7cef5f77e3fb88de8eb3936",
    R"F180020030C()F180020030C",
    R"F180020030D()F180020030D",
    R"F180020030T()F180020030T",
    R"F180020030F(10: if ((param_2 != *(longlong *)(param_1 + 8)) && (param_2 != *(longlong *)(param_1 + 0x10))) {
11: return 1;
13: return 0;)F180020030F",
    R"F180020030U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180020030U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180020030() noexcept {
    return kFunction_0x180020030;
}

// 0x180020050 CTripleTraceFilter_vfunc00
// source: re/dump/decompile/0x180020050_CTripleTraceFilter_vfunc00.c
// size: 24 bytes; thunk: false
// body sha256: 4dd7c921979a1ef291ca3ef09d9d38028e23c6938950a0ffdce757355fd035e6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180020050{
    "0x180020050",
    "CTripleTraceFilter_vfunc00",
    R"F180020050S(undefined CTripleTraceFilter_vfunc00())F180020050S",
    R"B180020050(// 0x180020050  CTripleTraceFilter_vfunc00
// size=24 thunk=false
// signature: undefined CTripleTraceFilter_vfunc00()
// status: ok


undefined1 CTripleTraceFilter_vfunc00(longlong param_1,longlong param_2)

{
  if (((param_2 != *(longlong *)(param_1 + 8)) && (param_2 != *(longlong *)(param_1 + 0x10))) &&
     (param_2 != *(longlong *)(param_1 + 0x18))) {
    return 1;
  }
  return 0;
}


)B180020050",
    "4dd7c921979a1ef291ca3ef09d9d38028e23c6938950a0ffdce757355fd035e6",
    R"F180020050C()F180020050C",
    R"F180020050D()F180020050D",
    R"F180020050T()F180020050T",
    R"F180020050F(10: if (((param_2 != *(longlong *)(param_1 + 8)) && (param_2 != *(longlong *)(param_1 + 0x10))) &&
12: return 1;
14: return 0;)F180020050F",
    R"F180020050U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180020050U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180020050() noexcept {
    return kFunction_0x180020050;
}

// 0x180020080 IGameEventListener_vfunc00
// source: re/dump/decompile/0x180020080_IGameEventListener_vfunc00.c
// size: 43 bytes; thunk: false
// body sha256: 06ae432aa171efe0ed88625496d751b80b22554533eab1ff7ea2f8d2c4aa110f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180020080{
    "0x180020080",
    "IGameEventListener_vfunc00",
    R"F180020080S(undefined IGameEventListener_vfunc00())F180020080S",
    R"B180020080(// 0x180020080  IGameEventListener_vfunc00
// size=43 thunk=false
// signature: undefined IGameEventListener_vfunc00()
// status: ok


undefined8 * IGameEventListener_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_IGameEventListener;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


)B180020080",
    "06ae432aa171efe0ed88625496d751b80b22554533eab1ff7ea2f8d2c4aa110f",
    R"F180020080C()F180020080C",
    R"F180020080D()F180020080D",
    R"F180020080T()F180020080T",
    R"F180020080F(11: if ((param_2 & 1) != 0) {
14: return param_1;)F180020080F",
    R"F180020080U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180020080U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180020080() noexcept {
    return kFunction_0x180020080;
}

// 0x1800200b0 FUN_1800200b0
// source: re/dump/decompile/0x1800200b0_FUN_1800200b0.c
// size: 464 bytes; thunk: false
// body sha256: 54f149f9c65b55e417ce1d3851bfafb38f1463a89dd960d54e816ff131671db5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800200b0{
    "0x1800200b0",
    "FUN_1800200b0",
    R"F1800200b0S(undefined FUN_1800200b0())F1800200b0S",
    R"B1800200b0(// 0x1800200b0  FUN_1800200b0
// size=464 thunk=false
// signature: undefined FUN_1800200b0()
// status: ok


void FUN_1800200b0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  if (DAT_1803f925a == '\0') {
    DAT_1803f925a = '\x01';
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_18001d080(&local_58,
                  "48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 30 48 89 91 28 03 00 00"
                  ,0x50);
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0;
    FUN_18001d080(&local_38,"client.dll",10);
    DAT_1803f9268 = FUN_180015f40(&local_38,&local_58);
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0;
    FUN_18001d080(&local_38,
                  "4C 8B DC 49 89 5B 18 49 89 6B 20 57 48 81 EC 90 00 00 00 8B 81 14 03 00 00",0x4a)
    ;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_18001d080(&local_58,"client.dll",10);
    DAT_1803f9270 = FUN_180015f40(&local_58,&local_38);
    puVar1 = &local_38;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0;
    FUN_18001d080(&local_38,"48 83 79 10 00 74 09 48 C7 41 10 00 00 00 00 C3 48 83 C1 20",0x3b);
    puVar2 = &local_58;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    FUN_18001d080(&local_58,"client.dll",10);
    DAT_1803f9260 = FUN_180015f40(&local_58,&local_38);
    FUN_180014410("[PAT] BeamSeg Start=%p NextSeg=%p End=%p\n",DAT_1803f9268,DAT_1803f9270,
                  DAT_1803f9260,puVar1,puVar2);
    if (((DAT_1803f9268 != 0) && (DAT_1803f9270 != 0)) && (DAT_1803f9260 != 0)) {
      DAT_1803f9259 = 1;
      return;
    }
    DAT_1803f9259 = 0;
    FUN_180014410("[PAT-WARN] CBeamSegDraw x64 incomplete\n");
  }
  return;
}


)B1800200b0",
    "54f149f9c65b55e417ce1d3851bfafb38f1463a89dd960d54e816ff131671db5",
    R"F1800200b0C(FUN_180014410
FUN_180015f40
FUN_18001d080)F1800200b0C",
    R"F1800200b0D(DAT_1803f9259
DAT_1803f925a
DAT_1803f9260
DAT_1803f9268
DAT_1803f9270)F1800200b0D",
    R"F1800200b0T("client.dll"
"[PAT-WARN] CBeamSegDraw x64 incomplete\\n"
"[PAT] BeamSeg Start=%p NextSeg=%p End=%p\\n"
"48 83 79 10 00 74 09 48 C7 41 10 00 00 00 00 C3 48 83 C1 20"
"4C 8B DC 49 89 5B 18 49 89 6B 20 57 48 81 EC 90 00 00 00 8B 81 14 03 00 00"
"48 89 5C 24 08 48 89 6C 24 10 48 89 74 24 18 57 48 83 EC 30 48 89 91 28 03 00 00")F1800200b0T",
    R"F1800200b0F(21: if (DAT_1803f925a == '\0') {
64: if (((DAT_1803f9268 != 0) && (DAT_1803f9270 != 0)) && (DAT_1803f9260 != 0)) {
66: return;
71: return;)F1800200b0F",
    R"F1800200b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9259.
TODO: recover the declaration, type and value for global/data reference DAT_1803f925a.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9260.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9268.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9270.)F1800200b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800200b0() noexcept {
    return kFunction_0x1800200b0;
}

// 0x180020280 FUN_180020280
// source: re/dump/decompile/0x180020280_FUN_180020280.c
// size: 353 bytes; thunk: false
// body sha256: 846352afa872d9e120154a6b6fabf2fc403f98dc0159f8733cd5c6ada6e43f67
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180020280{
    "0x180020280",
    "FUN_180020280",
    R"F180020280S(undefined FUN_180020280())F180020280S",
    R"B180020280(// 0x180020280  FUN_180020280
// size=353 thunk=false
// signature: undefined FUN_180020280()
// status: ok


longlong FUN_180020280(char *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char *pcVar5;
  
  plVar3 = DAT_1803fa640;
  if (((DAT_1803fa640 != (longlong *)0x0) && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
    pcVar5 = &DAT_1803fe7b0;
    do {
      lVar4 = *(longlong *)(pcVar5 + 0x80);
      if (lVar4 != 0) {
        iVar2 = strcmp(pcVar5,param_1);
        if (iVar2 == 0) {
          return lVar4;
        }
      }
      pcVar5 = pcVar5 + 0x88;
    } while (pcVar5 != &DAT_1803fe9d0);
    plVar3 = (longlong *)(**(code **)(*plVar3 + 600))(plVar3,param_1,"Model textures",1,0);
    if (plVar3 != (longlong *)0x0) {
      cVar1 = (**(code **)(*plVar3 + 0x150))(plVar3);
      if (cVar1 == '\0') {
        (**(code **)(*plVar3 + 0x60))(plVar3);
        pcVar5 = &DAT_1803fe7b0;
        do {
          if (*(longlong *)(pcVar5 + 0x80) == 0) goto LAB_180020390;
          pcVar5 = pcVar5 + 0x88;
        } while (pcVar5 != &DAT_1803fe9d0);
        lVar4 = (longlong)(int)DAT_1803fe7a0;
        pcVar5 = &DAT_1803fe7b0 + lVar4 * 0x88;
        DAT_1803fe7a0 = DAT_1803fe7a0 + 1 & 0x80000003;
        if ((int)DAT_1803fe7a0 < 0) {
          DAT_1803fe7a0 = (DAT_1803fe7a0 - 1 | 0xfffffffc) + 1;
        }
        if ((longlong *)(&DAT_1803fe830)[lVar4 * 0x11] != (longlong *)0x0) {
          (**(code **)(*(longlong *)(&DAT_1803fe830)[lVar4 * 0x11] + 0x68))();
        }
LAB_180020390:
        *(longlong **)(pcVar5 + 0x80) = plVar3;
        strncpy_s(pcVar5,0x80,param_1,0x7f);
        return *(longlong *)(pcVar5 + 0x80);
      }
    }
  }
  return 0;
}


)B180020280",
    "846352afa872d9e120154a6b6fabf2fc403f98dc0159f8733cd5c6ada6e43f67",
    R"F180020280C()F180020280C",
    R"F180020280D(LAB_180020390
DAT_1803fa640
DAT_1803fe7a0
DAT_1803fe7b0
DAT_1803fe830
DAT_1803fe9d0)F180020280D",
    R"F180020280T("Model textures")F180020280T",
    R"F180020280F(17: if (((DAT_1803fa640 != (longlong *)0x0) && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
19: do {
21: if (lVar4 != 0) {
23: if (iVar2 == 0) {
24: return lVar4;
30: if (plVar3 != (longlong *)0x0) {
32: if (cVar1 == '\0') {
35: do {
36: if (*(longlong *)(pcVar5 + 0x80) == 0) goto LAB_180020390;
42: if ((int)DAT_1803fe7a0 < 0) {
45: if ((longlong *)(&DAT_1803fe830)[lVar4 * 0x11] != (longlong *)0x0) {
48: LAB_180020390:
51: return *(longlong *)(pcVar5 + 0x80);
55: return 0;)F180020280F",
    R"F180020280U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180020390.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa640.
TODO: recover the declaration, type and value for global/data reference DAT_1803fe7a0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fe7b0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fe830.
TODO: recover the declaration, type and value for global/data reference DAT_1803fe9d0.
TODO: resolve the indirect call in body 29: plVar3 = (longlong *)(**(code **)(*plVar3 + 600))(plVar3,param_1,"Model textures",1,0);.
TODO: resolve the indirect call in body 31: cVar1 = (**(code **)(*plVar3 + 0x150))(plVar3);.
TODO: resolve the indirect call in body 33: (**(code **)(*plVar3 + 0x60))(plVar3);.
TODO: resolve the indirect call in body 46: (**(code **)(*(longlong *)(&DAT_1803fe830)[lVar4 * 0x11] + 0x68))();.)F180020280U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180020280() noexcept {
    return kFunction_0x180020280;
}

// 0x1800203f0 FUN_1800203f0
// source: re/dump/decompile/0x1800203f0_FUN_1800203f0.c
// size: 894 bytes; thunk: false
// body sha256: 9c76ca7f31c8443b33c3d3afbb26e5a96ee13eec6386ce25468c148f519487d2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800203f0{
    "0x1800203f0",
    "FUN_1800203f0",
    R"F1800203f0S(undefined FUN_1800203f0())F1800203f0S",
    R"B1800203f0(// 0x1800203f0  FUN_1800203f0
// size=894 thunk=false
// signature: undefined FUN_1800203f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800203f0(float *param_1,float *param_2,undefined4 param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,longlong param_9,int param_10)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_628 [32];
  undefined8 local_608;
  undefined4 local_600;
  undefined4 local_5f8;
  float local_5f4;
  float local_5f0;
  float local_5ec;
  float local_5e8;
  undefined1 local_5e0;
  undefined1 local_5df;
  undefined1 local_5de;
  undefined1 local_5dd;
  float local_5dc;
  undefined4 local_5d8;
  undefined1 local_5c8 [1280];
  ulonglong local_c8;
  
  local_c8 = DAT_1803da4c0 ^ (ulonglong)auStack_628;
  if (((param_9 != 0) && (DAT_1803fa640 != (longlong *)0x0)) &&
     (local_5f8 = param_3, local_5f4 = param_4, lVar3 = (**(code **)(*DAT_1803fa640 + 0x330))(),
     lVar3 != 0)) {
    iVar5 = 2;
    if (1 < param_10) {
      iVar5 = param_10;
    }
    if (0x20 < iVar5) {
      iVar5 = 0x20;
    }
    memset(local_5c8,0,0x500);
    FUN_1800200b0();
    if (DAT_1803f9259 != '\0') {
      if (DAT_1803f9268 != (code *)0x0) {
        local_600 = 0;
        local_608 = 0;
        (*DAT_1803f9268)(local_5c8,lVar3,iVar5,param_9);
      }
      fVar11 = *param_2 - *param_1;
      fVar12 = param_2[1] - param_1[1];
      fVar13 = param_2[2] - param_1[2];
      fVar7 = (float)(*(code *)PTR_FUN_1803da018)
                               (fVar12 * fVar12 + fVar11 * fVar11 + fVar13 * fVar13);
      fVar2 = DAT_1803811c8;
      fVar1 = DAT_180380bb0;
      fVar10 = DAT_180380bb0;
      if (DAT_180381148 < fVar7) {
        fVar10 = fVar7 * _DAT_180380978;
      }
      iVar4 = 0;
      if (0 < iVar5) {
        pcVar6 = DAT_1803f9270;
        do {
          fVar9 = (float)iVar4 / (float)(iVar5 + -1);
          fVar8 = fVar9 * (param_8 - param_7) + param_7;
          fVar7 = 0.0;
          if (0.0 <= fVar8) {
            fVar7 = fVar8;
          }
          fVar8 = fVar1;
          if (fVar7 <= fVar1) {
            fVar8 = fVar7;
          }
          local_5f0 = fVar9 * fVar11 + *param_1;
          local_5ec = fVar9 * fVar12 + param_1[1];
          local_5d8 = local_5f8;
          local_5dc = fVar9 * fVar10;
          local_5e8 = fVar9 * fVar13 + param_1[2];
          local_5e0 = (undefined1)(int)(fVar8 * local_5f4 * fVar2);
          local_5df = (undefined1)(int)(fVar8 * param_5 * fVar2);
          local_5de = (undefined1)(int)(fVar8 * param_6 * fVar2);
          local_5dd = (undefined1)(int)(fVar8 * fVar2);
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(local_5c8,&local_5f0);
            pcVar6 = DAT_1803f9270;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
      if (DAT_1803f9260 != (code *)0x0) {
        (*DAT_1803f9260)(local_5c8);
      }
    }
  }
  return;
}


)B1800203f0",
    "9c76ca7f31c8443b33c3d3afbb26e5a96ee13eec6386ce25468c148f519487d2",
    R"F1800203f0C(FUN_1800200b0)F1800203f0C",
    R"F1800203f0D(DAT_180380bb0
DAT_180381148
DAT_1803811c8
DAT_1803da4c0
DAT_1803f9259
DAT_1803f9260
DAT_1803f9268
DAT_1803f9270
DAT_1803fa640)F1800203f0D",
    R"F1800203f0T()F1800203f0T",
    R"F1800203f0F(45: if (((param_9 != 0) && (DAT_1803fa640 != (longlong *)0x0)) &&
49: if (1 < param_10) {
52: if (0x20 < iVar5) {
57: if (DAT_1803f9259 != '\0') {
58: if (DAT_1803f9268 != (code *)0x0) {
71: if (DAT_180381148 < fVar7) {
75: if (0 < iVar5) {
77: do {
81: if (0.0 <= fVar8) {
85: if (fVar7 <= fVar1) {
97: if (pcVar6 != (code *)0x0) {
104: if (DAT_1803f9260 != (code *)0x0) {
109: return;)F1800203f0F",
    R"F1800203f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_180381148.
TODO: recover the declaration, type and value for global/data reference DAT_1803811c8.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9259.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9260.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9268.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9270.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa640.
TODO: resolve the indirect call in body 46: (local_5f8 = param_3, local_5f4 = param_4, lVar3 = (**(code **)(*DAT_1803fa640 + 0x330))(),.
TODO: resolve the indirect call in body 58: if (DAT_1803f9268 != (code *)0x0) {.
TODO: resolve the indirect call in body 61: (*DAT_1803f9268)(local_5c8,lVar3,iVar5,param_9);.
TODO: resolve the indirect call in body 66: fVar7 = (float)(*(code *)PTR_FUN_1803da018).
TODO: resolve the indirect call in body 97: if (pcVar6 != (code *)0x0) {.
TODO: resolve the indirect call in body 98: (*pcVar6)(local_5c8,&local_5f0);.
TODO: resolve the indirect call in body 104: if (DAT_1803f9260 != (code *)0x0) {.
TODO: resolve the indirect call in body 105: (*DAT_1803f9260)(local_5c8);.)F1800203f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800203f0() noexcept {
    return kFunction_0x1800203f0;
}

// 0x180020770 FUN_180020770
// source: re/dump/decompile/0x180020770_FUN_180020770.c
// size: 97 bytes; thunk: false
// body sha256: 40f2ad8c2ba813996be6ded74d992fe7885c704612f1cccad07fc080bcff496b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180020770{
    "0x180020770",
    "FUN_180020770",
    R"F180020770S(undefined FUN_180020770())F180020770S",
    R"B180020770(// 0x180020770  FUN_180020770
// size=97 thunk=false
// signature: undefined FUN_180020770()
// status: ok


void FUN_180020770(double param_1)

{
  HMODULE hModule;
  
  if ((DAT_180426240 & 1) == 0) {
    DAT_180426240 = DAT_180426240 | 1;
    hModule = GetModuleHandleA("vstdlib.dll");
    DAT_180427618 = GetProcAddress(hModule,"RandomSeed");
  }
  if (DAT_180427618 != (FARPROC)0x0) {
    (*DAT_180427618)((ulonglong)(uint)(int)param_1);
  }
  return;
}


)B180020770",
    "40f2ad8c2ba813996be6ded74d992fe7885c704612f1cccad07fc080bcff496b",
    R"F180020770C()F180020770C",
    R"F180020770D(DAT_180426240
DAT_180427618)F180020770D",
    R"F180020770T("RandomSeed"
"vstdlib.dll")F180020770T",
    R"F180020770F(12: if ((DAT_180426240 & 1) == 0) {
17: if (DAT_180427618 != (FARPROC)0x0) {
20: return;)F180020770F",
    R"F180020770U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180426240.
TODO: recover the declaration, type and value for global/data reference DAT_180427618.
TODO: resolve the indirect call in body 18: (*DAT_180427618)((ulonglong)(uint)(int)param_1);.)F180020770U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180020770() noexcept {
    return kFunction_0x180020770;
}

// 0x1800207e0 FUN_1800207e0
// source: re/dump/decompile/0x1800207e0_FUN_1800207e0.c
// size: 452 bytes; thunk: false
// body sha256: dfae3d2e5059287d7f85d95618a096e0238f39708f4747d8a4ec1656471817ab
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800207e0{
    "0x1800207e0",
    "FUN_1800207e0",
    R"F1800207e0S(undefined FUN_1800207e0())F1800207e0S",
    R"B1800207e0(// 0x1800207e0  FUN_1800207e0
// size=452 thunk=false
// signature: undefined FUN_1800207e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800207e0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_78 [32];
  int local_58;
  uint local_54;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar10 = fVar2 * param_3[0xd] + fVar1 * param_3[0xc] + fVar3 * param_3[0xe] + param_3[0xf];
  uVar8 = _fdclass(fVar10);
  if (((short)uVar8 < 1) && (DAT_180380964 <= fVar10)) {
    fVar9 = fVar2 * param_3[1] + fVar1 * *param_3 + fVar3 * param_3[2] + param_3[3];
    *param_2 = fVar9;
    fVar4 = param_3[5];
    fVar5 = param_3[4];
    fVar6 = param_3[6];
    fVar9 = fVar9 / fVar10;
    fVar7 = param_3[7];
    *param_2 = fVar9;
    fVar10 = (fVar2 * fVar4 + fVar1 * fVar5 + fVar3 * fVar6 + fVar7) / fVar10;
    param_2[1] = fVar10;
    uVar8 = _fdclass(fVar9);
    if (((short)uVar8 < 1) &&
       ((uVar8 = _fdclass(fVar10), (short)uVar8 < 1 && (DAT_1803fa668 != (longlong *)0x0)))) {
      local_58 = 0;
      local_54 = 0;
      uVar8 = (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_58,&local_54);
      fVar1 = DAT_180380ac0;
      if ((1 < local_58) && (uVar8 = (ulonglong)local_54, 1 < (int)local_54)) {
        *param_2 = (float)local_58 * *param_2 * DAT_180380ac0 + (float)local_58 * DAT_180380ac0;
        param_2[1] = (float)(int)local_54 * fVar1 - (float)(int)local_54 * param_2[1] * fVar1;
        return CONCAT71((uint7)(uint3)(local_54 >> 8),1);
      }
    }
  }
  return uVar8 & 0xffffffffffffff00;
}


)B1800207e0",
    "dfae3d2e5059287d7f85d95618a096e0238f39708f4747d8a4ec1656471817ab",
    R"F1800207e0C()F1800207e0C",
    R"F1800207e0D(DAT_180380964
DAT_180380ac0
DAT_1803da4c0
DAT_1803fa668)F1800207e0D",
    R"F1800207e0T()F1800207e0T",
    R"F1800207e0F(33: if (((short)uVar8 < 1) && (DAT_180380964 <= fVar10)) {
45: if (((short)uVar8 < 1) &&
51: if ((1 < local_58) && (uVar8 = (ulonglong)local_54, 1 < (int)local_54)) {
54: return CONCAT71((uint7)(uint3)(local_54 >> 8),1);
58: return uVar8 & 0xffffffffffffff00;)F1800207e0F",
    R"F1800207e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380964.
TODO: recover the declaration, type and value for global/data reference DAT_180380ac0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 49: uVar8 = (**(code **)(*DAT_1803fa668 + 0x28))(DAT_1803fa668,&local_58,&local_54);.)F1800207e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800207e0() noexcept {
    return kFunction_0x1800207e0;
}

// 0x1800209b0 FUN_1800209b0
// source: re/dump/decompile/0x1800209b0_FUN_1800209b0.c
// size: 50 bytes; thunk: false
// body sha256: 0322ae49711535d396d1a4749a1a92fc154c55e2f838bed09d481779a772cf22
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800209b0{
    "0x1800209b0",
    "FUN_1800209b0",
    R"F1800209b0S(undefined FUN_1800209b0())F1800209b0S",
    R"B1800209b0(// 0x1800209b0  FUN_1800209b0
// size=50 thunk=false
// signature: undefined FUN_1800209b0()
// status: ok


undefined8 * FUN_1800209b0(undefined8 *param_1)

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
  return param_1;
}


)B1800209b0",
    "0322ae49711535d396d1a4749a1a92fc154c55e2f838bed09d481779a772cf22",
    R"F1800209b0C()F1800209b0C",
    R"F1800209b0D()F1800209b0D",
    R"F1800209b0T()F1800209b0T",
    R"F1800209b0F(20: return param_1;)F1800209b0F",
    R"F1800209b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800209b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800209b0() noexcept {
    return kFunction_0x1800209b0;
}

// 0x1800209f0 FUN_1800209f0
// source: re/dump/decompile/0x1800209f0_FUN_1800209f0.c
// size: 29 bytes; thunk: false
// body sha256: c6107aca44249fdb22a54ed404febef87ad495aeecf549fc03512905ae6f9d8c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800209f0{
    "0x1800209f0",
    "FUN_1800209f0",
    R"F1800209f0S(undefined FUN_1800209f0())F1800209f0S",
    R"B1800209f0(// 0x1800209f0  FUN_1800209f0
// size=29 thunk=false
// signature: undefined FUN_1800209f0()
// status: ok


undefined8 * FUN_1800209f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return param_1;
}


)B1800209f0",
    "c6107aca44249fdb22a54ed404febef87ad495aeecf549fc03512905ae6f9d8c",
    R"F1800209f0C()F1800209f0C",
    R"F1800209f0D()F1800209f0D",
    R"F1800209f0T()F1800209f0T",
    R"F1800209f0F(15: return param_1;)F1800209f0F",
    R"F1800209f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800209f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800209f0() noexcept {
    return kFunction_0x1800209f0;
}

// 0x180020a10 FUN_180020a10
// source: re/dump/decompile/0x180020a10_FUN_180020a10.c
// size: 20 bytes; thunk: false
// body sha256: 45b41830993fd22fbc8ce4ae83796fc220101aea7f92f69a923fab0b389b78b6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180020a10{
    "0x180020a10",
    "FUN_180020a10",
    R"F180020a10S(undefined FUN_180020a10())F180020a10S",
    R"B180020a10(// 0x180020a10  FUN_180020a10
// size=20 thunk=false
// signature: undefined FUN_180020a10()
// status: ok


void FUN_180020a10(undefined1 *param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0xf;
  *param_1 = 0;
  return;
}


)B180020a10",
    "45b41830993fd22fbc8ce4ae83796fc220101aea7f92f69a923fab0b389b78b6",
    R"F180020a10C()F180020a10C",
    R"F180020a10D()F180020a10D",
    R"F180020a10T()F180020a10T",
    R"F180020a10F(13: return;)F180020a10F",
    R"F180020a10U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180020a10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180020a10() noexcept {
    return kFunction_0x180020a10;
}

// 0x180020a30 FUN_180020a30
// source: re/dump/decompile/0x180020a30_FUN_180020a30.c
// size: 36 bytes; thunk: false
// body sha256: e152eb4ea7432ebaefa5db26eded0290983f3a772a9dfd1ef54c5c8f5f5c53b7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180020a30{
    "0x180020a30",
    "FUN_180020a30",
    R"F180020a30S(undefined FUN_180020a30())F180020a30S",
    R"B180020a30(// 0x180020a30  FUN_180020a30
// size=36 thunk=false
// signature: undefined FUN_180020a30()
// status: ok


void FUN_180020a30(longlong param_1)

{
  FUN_18020e450(param_1 + 0x20);
  FUN_18020e450(param_1);
  return;
}


)B180020a30",
    "e152eb4ea7432ebaefa5db26eded0290983f3a772a9dfd1ef54c5c8f5f5c53b7",
    R"F180020a30C(FUN_18020e450)F180020a30C",
    R"F180020a30D()F180020a30D",
    R"F180020a30T()F180020a30T",
    R"F180020a30F(12: return;)F180020a30F",
    R"F180020a30U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180020a30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180020a30() noexcept {
    return kFunction_0x180020a30;
}

// 0x180020a60 FUN_180020a60
// source: re/dump/decompile/0x180020a60_FUN_180020a60.c
// size: 258 bytes; thunk: false
// body sha256: 299efe21efd7d09d251ffd8baafc4b205a9e14181bd2e957d73d0d9b0cd13bb4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180020a60{
    "0x180020a60",
    "FUN_180020a60",
    R"F180020a60S(undefined FUN_180020a60())F180020a60S",
    R"B180020a60(// 0x180020a60  FUN_180020a60
// size=258 thunk=false
// signature: undefined FUN_180020a60()
// status: ok


undefined8 * FUN_180020a60(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if (0x7f < param_2 - 1U) {
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
    return param_1;
  }
  iVar2 = _Mtx_lock(&DAT_1803e73b0);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined8 *)(*pcVar1)();
    return puVar3;
  }
  if (DAT_1803e73fc == 0x7fffffff) {
    DAT_1803e73fc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  FUN_18016d4c0(param_1,&DAT_1803ebbe0 + (longlong)param_2 * 0x40,param_3,param_4,uVar4);
  FUN_18016d4c0(param_1 + 4,&DAT_1803ebc00 + (longlong)param_2 * 0x40);
  _Mtx_unlock(&DAT_1803e73b0);
  return param_1;
}


)B180020a60",
    "299efe21efd7d09d251ffd8baafc4b205a9e14181bd2e957d73d0d9b0cd13bb4",
    R"F180020a60C(FUN_18016d4c0)F180020a60C",
    R"F180020a60D(DAT_1803e73b0
DAT_1803e73fc
DAT_1803ebbe0
DAT_1803ebc00)F180020a60D",
    R"F180020a60T()F180020a60T",
    R"F180020a60F(16: if (0x7f < param_2 - 1U) {
27: return param_1;
30: if (iVar2 != 0) {
34: return puVar3;
36: if (DAT_1803e73fc == 0x7fffffff) {
43: return param_1;)F180020a60F",
    R"F180020a60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e73b0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e73fc.
TODO: recover the declaration, type and value for global/data reference DAT_1803ebbe0.
TODO: recover the declaration, type and value for global/data reference DAT_1803ebc00.
TODO: resolve the indirect call in body 32: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 33: puVar3 = (undefined8 *)(*pcVar1)();.)F180020a60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180020a60() noexcept {
    return kFunction_0x180020a60;
}

// 0x180020b70 FUN_180020b70
// source: re/dump/decompile/0x180020b70_FUN_180020b70.c
// size: 449 bytes; thunk: false
// body sha256: b507e13d4d9fe537f91abe49a372bbc0a4bf251edbd30f8d23af9933fc2b066f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180020b70{
    "0x180020b70",
    "FUN_180020b70",
    R"F180020b70S(undefined FUN_180020b70())F180020b70S",
    R"B180020b70(// 0x180020b70  FUN_180020b70
// size=449 thunk=false
// signature: undefined FUN_180020b70()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180020b70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 ***local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 ***local_98 [4];
  undefined1 local_78 [56];
  
  uVar9 = 0;
  local_a8 = &DAT_1803e73b0;
  iVar4 = _Mtx_lock(&DAT_1803e73b0);
  if (iVar4 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e73fc == 0x7fffffff) {
    DAT_1803e73fc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  uVar3 = _UNK_1803814b8;
  uVar2 = _DAT_1803814b0;
  lVar10 = 0;
  do {
    lVar8 = lVar10 * 0x40;
    if (param_1 == 0) {
      uStack_e0 = 0;
      local_d8 = uVar2;
      uStack_d0 = uVar3;
      local_e8 = (undefined8 ****)0x0;
      uStack_c0 = 0;
      local_b8 = uVar2;
      uStack_b0 = uVar3;
      local_c8 = 0;
      ppppuVar7 = &local_e8;
      uVar9 = uVar9 | 0xe;
      ppppuVar5 = (undefined8 ****)local_e8;
    }
    else {
      FUN_18016d4c0(local_98,lVar8 + param_1);
      FUN_18016d4c0(local_78,lVar8 + param_1 + 0x20);
      ppppuVar7 = local_98;
      uVar9 = uVar9 | 1;
      ppppuVar5 = (undefined8 ****)local_98[0];
    }
    uVar11 = uVar9;
    if ((undefined8 ****)(&DAT_1803ebbe0 + lVar8) != ppppuVar7) {
      ppppuVar6 = ppppuVar7;
      if ((undefined8 ***)0xf < ppppuVar7[3]) {
        ppppuVar6 = ppppuVar5;
      }
      FUN_180212700(&DAT_1803ebbe0 + lVar8,ppppuVar6,ppppuVar7[2],param_4,uVar9);
    }
    ppppuVar5 = ppppuVar7 + 4;
    if ((undefined8 ****)(&DAT_1803ebc00 + lVar8) != ppppuVar5) {
      if ((undefined8 ***)0xf < ppppuVar7[7]) {
        ppppuVar5 = (undefined8 ****)*ppppuVar5;
      }
      FUN_180212700(&DAT_1803ebc00 + lVar8,ppppuVar5,ppppuVar7[6],param_4,uVar11);
    }
    if ((uVar9 & 8) != 0) {
      uVar9 = uVar9 & 0xfffffff7;
      FUN_18020e450(&local_c8);
      FUN_18020e450(&local_e8);
    }
    if ((uVar9 & 1) != 0) {
      uVar9 = uVar9 & 0xfffffffe;
      FUN_18020e450(local_78);
      FUN_18020e450(local_98);
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 0x81);
                    /* WARNING: Could not recover jumptable at 0x000180020d2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Mtx_unlock(&DAT_1803e73b0);
  return;
}


)B180020b70",
    "b507e13d4d9fe537f91abe49a372bbc0a4bf251edbd30f8d23af9933fc2b066f",
    R"F180020b70C(FUN_18016d4c0
FUN_18020e450
FUN_180212700)F180020b70C",
    R"F180020b70D(DAT_1803e73b0
DAT_1803e73fc
DAT_1803ebbe0
DAT_1803ebc00)F180020b70D",
    R"F180020b70T()F180020b70T",
    R"F180020b70F(38: if (iVar4 != 0) {
42: return;
44: if (DAT_1803e73fc == 0x7fffffff) {
51: do {
53: if (param_1 == 0) {
66: else {
74: if ((undefined8 ****)(&DAT_1803ebbe0 + lVar8) != ppppuVar7) {
76: if ((undefined8 ***)0xf < ppppuVar7[3]) {
82: if ((undefined8 ****)(&DAT_1803ebc00 + lVar8) != ppppuVar5) {
83: if ((undefined8 ***)0xf < ppppuVar7[7]) {
88: if ((uVar9 & 8) != 0) {
93: if ((uVar9 & 1) != 0) {
103: return;)F180020b70F",
    R"F180020b70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e73b0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e73fc.
TODO: recover the declaration, type and value for global/data reference DAT_1803ebbe0.
TODO: recover the declaration, type and value for global/data reference DAT_1803ebc00.
TODO: resolve the indirect call in body 40: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 41: (*pcVar1)();.)F180020b70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180020b70() noexcept {
    return kFunction_0x180020b70;
}

// 0x180020d40 FUN_180020d40
// source: re/dump/decompile/0x180020d40_FUN_180020d40.c
// size: 845 bytes; thunk: false
// body sha256: 872312b176e89b10d59c6a3ee71c05084ff245d6198c2c500b5a10741b87da5c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180020d40{
    "0x180020d40",
    "FUN_180020d40",
    R"F180020d40S(undefined FUN_180020d40())F180020d40S",
    R"B180020d40(// 0x180020d40  FUN_180020d40
// size=845 thunk=false
// signature: undefined FUN_180020d40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180020d40(int param_1,int param_2,undefined8 *param_3,undefined1 param_4,
                  undefined4 *param_5,undefined4 param_6)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ULONGLONG UVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined1 auStackY_118 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  int local_b8 [4];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined *local_58;
  int *local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  if ((0 < param_1) && (local_40 = DAT_1803da4c0 ^ (ulonglong)auStackY_118, param_2 - 1U < 4)) {
    local_58 = &DAT_1803e92b0;
    local_b8[0] = param_2;
    iVar7 = _Mtx_lock(&DAT_1803e92b0);
    if (iVar7 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (DAT_1803e92fc == 0x7fffffff) {
      DAT_1803e92fc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    puVar8 = DAT_1805ba360;
    if (param_3[2] == 0) {
      cVar1 = *(char *)((longlong)DAT_1805ba360[1] + 0x19);
      puVar8 = (undefined8 *)DAT_1805ba360[1];
      puVar10 = DAT_1805ba360;
      while (puVar9 = puVar8, cVar1 == '\0') {
        if (*(int *)(puVar9 + 4) < param_1) {
          puVar8 = (undefined8 *)puVar9[2];
          puVar9 = puVar10;
        }
        else {
          puVar8 = (undefined8 *)*puVar9;
        }
        cVar1 = *(char *)((longlong)puVar8 + 0x19);
        puVar10 = puVar9;
      }
      if ((*(char *)((longlong)puVar10 + 0x19) != '\0') || (param_1 < *(int *)(puVar10 + 4))) {
        puVar10 = DAT_1805ba360;
      }
      if (puVar10 != DAT_1805ba360) {
        uStack_a0 = 0;
        local_98 = 0;
        local_90 = 0xf;
        local_a8 = 0;
        local_88 = 0;
        local_84 = 0x3f800000;
        uStack_80 = 0x3f800000;
        uStack_7c = 0x3f800000;
        uStack_78 = 0x3f800000;
        local_70 = 0;
        local_68 = 0;
        puVar8 = puVar10 + 5;
        FUN_18020e8a0(puVar8 + (longlong)param_2 * 9 + -9,&local_a8);
        *(undefined1 *)(puVar8 + (longlong)param_2 * 9 + -5) = local_88;
        *(undefined4 *)((longlong)puVar8 + (longlong)param_2 * 0x48 + -0x24) = local_84;
        *(undefined4 *)(puVar8 + (longlong)param_2 * 9 + -4) = uStack_80;
        *(undefined4 *)((longlong)puVar8 + (longlong)param_2 * 0x48 + -0x1c) = uStack_7c;
        *(undefined4 *)(puVar8 + (longlong)param_2 * 9 + -3) = uStack_78;
        puVar8[(longlong)param_2 * 9 + -2] = local_70;
        *(undefined4 *)(puVar8 + (longlong)param_2 * 9 + -1) = local_68;
        uVar13 = FUN_18020e450(&local_a8);
        for (; puVar8 != puVar10 + 0x29; puVar8 = puVar8 + 9) {
          if (puVar8[2] != 0) goto LAB_180021054;
        }
        FUN_1801fce40(uVar13,local_b8,puVar10);
      }
    }
    else {
      puVar9 = (undefined8 *)DAT_1805ba360[1];
      uVar12 = 0;
      cVar1 = *(char *)((longlong)puVar9 + 0x19);
      puVar6 = puVar9;
      puVar10 = DAT_1805ba360;
      while (puVar5 = puVar9, cVar1 == '\0') {
        if (param_1 <= *(int *)(puVar5 + 4)) {
          puVar9 = (undefined8 *)*puVar5;
          puVar10 = puVar5;
        }
        else {
          puVar9 = (undefined8 *)puVar5[2];
        }
        uVar12 = (uint)(param_1 <= *(int *)(puVar5 + 4));
        cVar1 = *(char *)((longlong)puVar9 + 0x19);
        puVar6 = puVar5;
      }
      if ((*(char *)((longlong)puVar10 + 0x19) != '\0') || (param_1 < *(int *)(puVar10 + 4))) {
        if (DAT_1805ba368 == 0xc7ce0c7ce0c7ce) {
                    /* WARNING: Subroutine does not return */
          FUN_180013b80();
        }
        local_d8 = &DAT_1805ba360;
        local_d0 = (undefined8 *)0x0;
        puVar9 = (undefined8 *)FUN_1802d8350(0x148);
        local_50 = (int *)(puVar9 + 4);
        *local_50 = param_1;
        puVar10 = puVar9 + 5;
        local_d0 = puVar9;
        memset(puVar10,0,0x120);
        local_48 = puVar10;
        _eh_vector_constructor_iterator_(puVar10,0x48,4,FUN_1800ea1b0,FUN_180021090);
        *puVar9 = puVar8;
        puVar9[1] = puVar8;
        puVar9[2] = puVar8;
        *(undefined2 *)(puVar9 + 3) = 0;
        local_d0 = (undefined8 *)(ulonglong)uVar12;
        local_d8 = puVar6;
        puVar10 = (undefined8 *)FUN_18022bb90(&DAT_1805ba360,&local_d8,puVar9);
      }
      puVar10 = puVar10 + (longlong)local_b8[0] * 9 + -4;
      if (puVar10 != param_3) {
        puVar8 = param_3 + 2;
        if (0xf < (ulonglong)param_3[3]) {
          param_3 = (undefined8 *)*param_3;
        }
        FUN_180212700(puVar10,param_3,*puVar8);
      }
      *(undefined1 *)(puVar10 + 4) = param_4;
      uVar13 = param_5[1];
      uVar3 = param_5[2];
      uVar4 = param_5[3];
      *(undefined4 *)((longlong)puVar10 + 0x24) = *param_5;
      *(undefined4 *)(puVar10 + 5) = uVar13;
      *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar3;
      *(undefined4 *)(puVar10 + 6) = uVar4;
      UVar11 = GetTickCount64();
      puVar10[7] = UVar11;
      *(undefined4 *)(puVar10 + 8) = param_6;
    }
LAB_180021054:
    _Mtx_unlock(&DAT_1803e92b0);
  }
  return;
}


)B180020d40",
    "872312b176e89b10d59c6a3ee71c05084ff245d6198c2c500b5a10741b87da5c",
    R"F180020d40C(FUN_180013b80
FUN_180021090
FUN_1800ea1b0
FUN_1801fce40
FUN_18020e450
FUN_18020e8a0
FUN_180212700
FUN_18022bb90
FUN_1802d8350)F180020d40C",
    R"F180020d40D(LAB_180021054
DAT_1803da4c0
DAT_1803e92b0
DAT_1803e92fc
DAT_1805ba360
DAT_1805ba368)F180020d40D",
    R"F180020d40T()F180020d40T",
    R"F180020d40F(46: if ((0 < param_1) && (local_40 = DAT_1803da4c0 ^ (ulonglong)auStackY_118, param_2 - 1U < 4)) {
50: if (iVar7 != 0) {
54: return;
56: if (DAT_1803e92fc == 0x7fffffff) {
61: if (param_3[2] == 0) {
65: while (puVar9 = puVar8, cVar1 == '\0') {
66: if (*(int *)(puVar9 + 4) < param_1) {
70: else {
76: if ((*(char *)((longlong)puVar10 + 0x19) != '\0') || (param_1 < *(int *)(puVar10 + 4))) {
79: if (puVar10 != DAT_1805ba360) {
101: for (; puVar8 != puVar10 + 0x29; puVar8 = puVar8 + 9) {
102: if (puVar8[2] != 0) goto LAB_180021054;
107: else {
113: while (puVar5 = puVar9, cVar1 == '\0') {
114: if (param_1 <= *(int *)(puVar5 + 4)) {
118: else {
125: if ((*(char *)((longlong)puVar10 + 0x19) != '\0') || (param_1 < *(int *)(puVar10 + 4))) {
126: if (DAT_1805ba368 == 0xc7ce0c7ce0c7ce) {
149: if (puVar10 != param_3) {
151: if (0xf < (ulonglong)param_3[3]) {
168: LAB_180021054:
171: return;)F180020d40F",
    R"F180020d40U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180021054.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e92b0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e92fc.
TODO: recover the declaration, type and value for global/data reference DAT_1805ba360.
TODO: recover the declaration, type and value for global/data reference DAT_1805ba368.
TODO: resolve the indirect call in body 52: pcVar2 = (code *)swi(3);.
TODO: resolve the indirect call in body 53: (*pcVar2)();.)F180020d40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180020d40() noexcept {
    return kFunction_0x180020d40;
}

// 0x180021090 FUN_180021090
// source: re/dump/decompile/0x180021090_FUN_180021090.c
// size: 18 bytes; thunk: false
// body sha256: ebbd100772e5b1b527d83e6520ff584fb37aafa4493acb4ebe7ecce6a5ee48b8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180021090{
    "0x180021090",
    "FUN_180021090",
    R"F180021090S(undefined FUN_180021090())F180021090S",
    R"B180021090(// 0x180021090  FUN_180021090
// size=18 thunk=false
// signature: undefined FUN_180021090()
// status: ok


void FUN_180021090(void)

{
  FUN_18020e450();
  return;
}


)B180021090",
    "ebbd100772e5b1b527d83e6520ff584fb37aafa4493acb4ebe7ecce6a5ee48b8",
    R"F180021090C(FUN_18020e450)F180021090C",
    R"F180021090D()F180021090D",
    R"F180021090T()F180021090T",
    R"F180021090F(11: return;)F180021090F",
    R"F180021090U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180021090U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180021090() noexcept {
    return kFunction_0x180021090;
}

// 0x1800210b0 FUN_1800210b0
// source: re/dump/decompile/0x1800210b0_FUN_1800210b0.c
// size: 739 bytes; thunk: false
// body sha256: f4f61ed20ce109fa35ab1dfd42819d044955e24982cdc7510a8d75fa522069e4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800210b0{
    "0x1800210b0",
    "FUN_1800210b0",
    R"F1800210b0S(undefined FUN_1800210b0())F1800210b0S",
    R"B1800210b0(// 0x1800210b0  FUN_1800210b0
// size=739 thunk=false
// signature: undefined FUN_1800210b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800210b0(int param_1,int param_2)

{
  undefined8 *puVar1;
  char cVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  longlong local_80;
  undefined4 local_78;
  undefined *local_68;
  undefined1 local_60 [8];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  lVar10 = (longlong)param_2;
  local_68 = &DAT_1803e92b0;
  iVar6 = _Mtx_lock(&DAT_1803e92b0);
  if (iVar6 == 0) {
    if (DAT_1803e92fc == 0x7fffffff) {
      DAT_1803e92fc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    plVar7 = DAT_1805ba360;
    uVar5 = _UNK_1803814b8;
    uVar4 = _DAT_1803814b0;
    if (param_1 < 1) {
      if (param_2 < 1) {
        FUN_180219580(&DAT_1805ba360,&DAT_1805ba360,DAT_1805ba360[1]);
        plVar7[1] = (longlong)plVar7;
        *plVar7 = (longlong)plVar7;
        plVar7[2] = (longlong)plVar7;
        DAT_1805ba368 = 0;
      }
      else if (param_2 < 5) {
        plVar7 = (longlong *)*DAT_1805ba360;
        cVar2 = *(char *)((longlong)plVar7 + 0x19);
        while (cVar2 == '\0') {
          uStack_b0 = 0;
          local_a8 = uVar4;
          uStack_a0 = uVar5;
          local_b8 = 0;
          local_98 = 0;
          local_94 = 0x3f800000;
          uStack_90 = 0x3f800000;
          uStack_8c = 0x3f800000;
          uStack_88 = 0x3f800000;
          local_80 = 0;
          local_78 = 0;
          FUN_18020e8a0(plVar7 + lVar10 * 9 + -4,&local_b8);
          *(undefined1 *)(plVar7 + lVar10 * 9) = local_98;
          puVar1 = (undefined8 *)((longlong)plVar7 + lVar10 * 0x48 + 4);
          *puVar1 = CONCAT44(uStack_90,local_94);
          puVar1[1] = CONCAT44(uStack_88,uStack_8c);
          plVar7[lVar10 * 9 + 3] = local_80;
          *(undefined4 *)(plVar7 + lVar10 * 9 + 4) = local_78;
          FUN_18020e450(&local_b8);
          plVar9 = (longlong *)plVar7[2];
          if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
            cVar2 = *(char *)(*plVar9 + 0x19);
            plVar7 = plVar9;
            plVar9 = (longlong *)*plVar9;
            while (cVar2 == '\0') {
              cVar2 = *(char *)(*plVar9 + 0x19);
              plVar7 = plVar9;
              plVar9 = (longlong *)*plVar9;
            }
          }
          else {
            cVar2 = *(char *)(plVar7[1] + 0x19);
            plVar8 = (longlong *)plVar7[1];
            plVar9 = plVar7;
            while ((plVar7 = plVar8, cVar2 == '\0' && (plVar9 == (longlong *)plVar7[2]))) {
              cVar2 = *(char *)(plVar7[1] + 0x19);
              plVar8 = (longlong *)plVar7[1];
              plVar9 = plVar7;
            }
          }
          cVar2 = *(char *)((longlong)plVar7 + 0x19);
        }
      }
    }
    else {
      plVar7 = (longlong *)DAT_1805ba360[1];
      cVar2 = *(char *)((longlong)plVar7 + 0x19);
      plVar9 = DAT_1805ba360;
      while (cVar2 == '\0') {
        plVar8 = plVar7;
        if ((int)plVar7[4] < param_1) {
          plVar7 = plVar7 + 2;
          plVar8 = plVar9;
        }
        plVar7 = (longlong *)*plVar7;
        plVar9 = plVar8;
        cVar2 = *(char *)((longlong)plVar7 + 0x19);
      }
      if ((*(char *)((longlong)plVar9 + 0x19) != '\0') || (param_1 < (int)plVar9[4])) {
        plVar9 = DAT_1805ba360;
      }
      if (plVar9 != DAT_1805ba360) {
        if (param_2 < 1) {
          FUN_1801fce40(DAT_1805ba360,local_60,plVar9);
        }
        else if (param_2 < 5) {
          uStack_b0 = 0;
          local_a8 = _DAT_1803814b0;
          uStack_a0 = _UNK_1803814b8;
          local_b8 = 0;
          local_98 = 0;
          local_94 = 0x3f800000;
          uStack_90 = 0x3f800000;
          uStack_8c = 0x3f800000;
          uStack_88 = 0x3f800000;
          local_80 = 0;
          local_78 = 0;
          FUN_18020e8a0(plVar9 + lVar10 * 9 + -4,&local_b8);
          *(undefined1 *)(plVar9 + lVar10 * 9) = local_98;
          *(ulonglong *)((longlong)plVar9 + lVar10 * 0x48 + 4) = CONCAT44(uStack_90,local_94);
          *(ulonglong *)((longlong)plVar9 + lVar10 * 0x48 + 0xc) = CONCAT44(uStack_88,uStack_8c);
          plVar9[lVar10 * 9 + 3] = local_80;
          *(undefined4 *)(plVar9 + lVar10 * 9 + 4) = local_78;
          FUN_18020e450(&local_b8);
        }
      }
    }
    _Mtx_unlock(&DAT_1803e92b0);
    return;
  }
  std::_Throw_Cpp_error(5);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


)B1800210b0",
    "f4f61ed20ce109fa35ab1dfd42819d044955e24982cdc7510a8d75fa522069e4",
    R"F1800210b0C(FUN_1801fce40
FUN_18020e450
FUN_18020e8a0
FUN_180219580)F1800210b0C",
    R"F1800210b0D(DAT_1803da4c0
DAT_1803e92b0
DAT_1803e92fc
DAT_1805ba360
DAT_1805ba368)F1800210b0D",
    R"F1800210b0T()F1800210b0T",
    R"F1800210b0F(43: if (iVar6 == 0) {
44: if (DAT_1803e92fc == 0x7fffffff) {
51: if (param_1 < 1) {
52: if (param_2 < 1) {
59: else if (param_2 < 5) {
62: while (cVar2 == '\0') {
83: if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
87: while (cVar2 == '\0') {
93: else {
97: while ((plVar7 = plVar8, cVar2 == '\0' && (plVar9 == (longlong *)plVar7[2]))) {
107: else {
111: while (cVar2 == '\0') {
113: if ((int)plVar7[4] < param_1) {
121: if ((*(char *)((longlong)plVar9 + 0x19) != '\0') || (param_1 < (int)plVar9[4])) {
124: if (plVar9 != DAT_1805ba360) {
125: if (param_2 < 1) {
128: else if (param_2 < 5) {
151: return;
156: return;)F1800210b0F",
    R"F1800210b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e92b0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e92fc.
TODO: recover the declaration, type and value for global/data reference DAT_1805ba360.
TODO: recover the declaration, type and value for global/data reference DAT_1805ba368.
TODO: resolve the indirect call in body 154: pcVar3 = (code *)swi(3);.
TODO: resolve the indirect call in body 155: (*pcVar3)();.)F1800210b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800210b0() noexcept {
    return kFunction_0x1800210b0;
}

// 0x1800213a0 FUN_1800213a0
// source: re/dump/decompile/0x1800213a0_FUN_1800213a0.c
// size: 333 bytes; thunk: false
// body sha256: a39705de9aa34458df6ed2744bdb5f7c1d63a88433a7342bd1842acf2ff0ef50
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800213a0{
    "0x1800213a0",
    "FUN_1800213a0",
    R"F1800213a0S(undefined FUN_1800213a0())F1800213a0S",
    R"B1800213a0(// 0x1800213a0  FUN_1800213a0
// size=333 thunk=false
// signature: undefined FUN_1800213a0()
// status: ok


ulonglong FUN_1800213a0(int param_1,int param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong in_RAX;
  ulonglong uVar8;
  longlong *plVar9;
  ULONGLONG UVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined *puVar13;
  
  if ((param_1 < 1) || (in_RAX = (ulonglong)(param_2 - 1U), 3 < param_2 - 1U)) {
    return in_RAX & 0xffffffffffffff00;
  }
  puVar13 = &DAT_1803e92b0;
  iVar7 = _Mtx_lock(&DAT_1803e92b0);
  if (iVar7 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return uVar8;
  }
  if (DAT_1803e92fc == 0x7fffffff) {
    DAT_1803e92fc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  plVar9 = (longlong *)DAT_1805ba360[1];
  cVar1 = *(char *)((longlong)plVar9 + 0x19);
  plVar12 = DAT_1805ba360;
  while (cVar1 == '\0') {
    plVar11 = plVar9;
    if ((int)plVar9[4] < param_1) {
      plVar9 = plVar9 + 2;
      plVar11 = plVar12;
    }
    plVar9 = (longlong *)*plVar9;
    plVar12 = plVar11;
    cVar1 = *(char *)((longlong)plVar9 + 0x19);
  }
  if ((*(char *)((longlong)plVar12 + 0x19) != '\0') || (param_1 < (int)plVar12[4])) {
    plVar12 = DAT_1805ba360;
  }
  if (plVar12 != DAT_1805ba360) {
    plVar12 = plVar12 + (longlong)param_2 * 9;
    plVar9 = plVar12 + -4;
    if ((plVar12[-2] != 0) &&
       ((uVar2 = *(uint *)(plVar12 + 4), uVar2 == 0 ||
        (UVar10 = GetTickCount64(), UVar10 - plVar12[3] <= (ulonglong)uVar2)))) {
      if ((longlong *)param_3 != plVar9) {
        if (0xf < (ulonglong)plVar12[-1]) {
          plVar9 = (longlong *)*plVar9;
        }
        FUN_180212700(param_3,plVar9,plVar12[-2],param_4,puVar13);
      }
      *(char *)(param_3 + 0x20) = (char)*plVar12;
      lVar5 = plVar12[1];
      uVar4 = *(undefined4 *)((longlong)plVar12 + 0xc);
      lVar6 = plVar12[2];
      *(undefined4 *)(param_3 + 0x24) = *(undefined4 *)((longlong)plVar12 + 4);
      *(int *)(param_3 + 0x28) = (int)lVar5;
      *(undefined4 *)(param_3 + 0x2c) = uVar4;
      *(int *)(param_3 + 0x30) = (int)lVar6;
      *(longlong *)(param_3 + 0x38) = plVar12[3];
      *(int *)(param_3 + 0x40) = (int)plVar12[4];
      uVar8 = 1;
      goto LAB_1800214bd;
    }
  }
  uVar8 = 0;
LAB_1800214bd:
  _Mtx_unlock(&DAT_1803e92b0);
  return uVar8;
}


)B1800213a0",
    "a39705de9aa34458df6ed2744bdb5f7c1d63a88433a7342bd1842acf2ff0ef50",
    R"F1800213a0C(FUN_180212700)F1800213a0C",
    R"F1800213a0D(LAB_1800214bd
DAT_1803e92b0
DAT_1803e92fc
DAT_1805ba360)F1800213a0D",
    R"F1800213a0T()F1800213a0T",
    R"F1800213a0F(25: if ((param_1 < 1) || (in_RAX = (ulonglong)(param_2 - 1U), 3 < param_2 - 1U)) {
26: return in_RAX & 0xffffffffffffff00;
30: if (iVar7 != 0) {
34: return uVar8;
36: if (DAT_1803e92fc == 0x7fffffff) {
43: while (cVar1 == '\0') {
45: if ((int)plVar9[4] < param_1) {
53: if ((*(char *)((longlong)plVar12 + 0x19) != '\0') || (param_1 < (int)plVar12[4])) {
56: if (plVar12 != DAT_1805ba360) {
59: if ((plVar12[-2] != 0) &&
62: if ((longlong *)param_3 != plVar9) {
63: if (0xf < (ulonglong)plVar12[-1]) {
79: goto LAB_1800214bd;
83: LAB_1800214bd:
85: return uVar8;)F1800213a0F",
    R"F1800213a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1800214bd.
TODO: recover the declaration, type and value for global/data reference DAT_1803e92b0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e92fc.
TODO: recover the declaration, type and value for global/data reference DAT_1805ba360.
TODO: resolve the indirect call in body 32: pcVar3 = (code *)swi(3);.
TODO: resolve the indirect call in body 33: uVar8 = (*pcVar3)();.)F1800213a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800213a0() noexcept {
    return kFunction_0x1800213a0;
}

// 0x1800214f0 FUN_1800214f0
// source: re/dump/decompile/0x1800214f0_FUN_1800214f0.c
// size: 267 bytes; thunk: false
// body sha256: 622cf18229809f0040685448147efc304969cadb44b8ba04dffc0b06378fe6e5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800214f0{
    "0x1800214f0",
    "FUN_1800214f0",
    R"F1800214f0S(undefined FUN_1800214f0())F1800214f0S",
    R"B1800214f0(// 0x1800214f0  FUN_1800214f0
// size=267 thunk=false
// signature: undefined FUN_1800214f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1800214f0(int param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  if (param_1 - 1U < 0x80) {
    lVar2 = 0;
    local_38 = 0;
    uStack_30 = 0;
    if ((DAT_180423a38 != (code *)0x0) &&
       (cVar1 = (*DAT_180423a38)(0,param_2,&local_38), cVar1 != '\0')) {
      lVar2 = 1;
      *(undefined4 *)param_3 = (undefined4)local_38;
      *(undefined4 *)((longlong)param_3 + 4) = local_38._4_4_;
      *(undefined4 *)(param_3 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_30._4_4_;
    }
    if ((DAT_180425ff8 != (code *)0x0) &&
       (cVar1 = (*DAT_180425ff8)(param_1,param_2 & 0xffffffff,&local_38), cVar1 != '\0')) {
      lVar2 = 1;
      *(undefined4 *)param_3 = (undefined4)local_38;
      *(undefined4 *)((longlong)param_3 + 4) = local_38._4_4_;
      *(undefined4 *)(param_3 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_30._4_4_;
    }
    if ((DAT_180426120 != (code *)0x0) &&
       (cVar1 = (*DAT_180426120)(param_1,param_2 & 0xffffffff,&local_38), cVar1 != '\0')) {
      lVar2 = 1;
      *(undefined4 *)param_3 = (undefined4)local_38;
      *(undefined4 *)((longlong)param_3 + 4) = local_38._4_4_;
      *(undefined4 *)(param_3 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_30._4_4_;
    }
    if ((DAT_180425898 != (code *)0x0) &&
       (cVar1 = (*DAT_180425898)(param_1,&local_38), cVar1 != '\0')) {
      lVar2 = 1;
      *(undefined4 *)param_3 = (undefined4)local_38;
      *(undefined4 *)((longlong)param_3 + 4) = local_38._4_4_;
      *(undefined4 *)(param_3 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_30._4_4_;
    }
    if ((DAT_1804258c8 != (code *)0x0) &&
       (cVar1 = (*DAT_1804258c8)(param_1,&local_38), cVar1 != '\0')) {
      lVar2 = 1;
      *param_3 = local_38;
      param_3[1] = uStack_30;
    }
  }
  else {
    lVar2 = (ulonglong)(uint3)(param_1 - 1U >> 8) << 8;
  }
  return lVar2;
}


)B1800214f0",
    "622cf18229809f0040685448147efc304969cadb44b8ba04dffc0b06378fe6e5",
    R"F1800214f0C()F1800214f0C",
    R"F1800214f0D(DAT_1803da4c0
DAT_180423a38
DAT_180425898
DAT_1804258c8
DAT_180425ff8
DAT_180426120)F1800214f0D",
    R"F1800214f0T()F1800214f0T",
    R"F1800214f0F(20: if (param_1 - 1U < 0x80) {
24: if ((DAT_180423a38 != (code *)0x0) &&
32: if ((DAT_180425ff8 != (code *)0x0) &&
40: if ((DAT_180426120 != (code *)0x0) &&
48: if ((DAT_180425898 != (code *)0x0) &&
56: if ((DAT_1804258c8 != (code *)0x0) &&
63: else {
66: return lVar2;)F1800214f0F",
    R"F1800214f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_180423a38.
TODO: recover the declaration, type and value for global/data reference DAT_180425898.
TODO: recover the declaration, type and value for global/data reference DAT_1804258c8.
TODO: recover the declaration, type and value for global/data reference DAT_180425ff8.
TODO: recover the declaration, type and value for global/data reference DAT_180426120.
TODO: resolve the indirect call in body 24: if ((DAT_180423a38 != (code *)0x0) &&.
TODO: resolve the indirect call in body 25: (cVar1 = (*DAT_180423a38)(0,param_2,&local_38), cVar1 != '\0')) {.
TODO: resolve the indirect call in body 32: if ((DAT_180425ff8 != (code *)0x0) &&.
TODO: resolve the indirect call in body 33: (cVar1 = (*DAT_180425ff8)(param_1,param_2 & 0xffffffff,&local_38), cVar1 != '\0')) {.
TODO: resolve the indirect call in body 40: if ((DAT_180426120 != (code *)0x0) &&.
TODO: resolve the indirect call in body 41: (cVar1 = (*DAT_180426120)(param_1,param_2 & 0xffffffff,&local_38), cVar1 != '\0')) {.
TODO: resolve the indirect call in body 48: if ((DAT_180425898 != (code *)0x0) &&.
TODO: resolve the indirect call in body 49: (cVar1 = (*DAT_180425898)(param_1,&local_38), cVar1 != '\0')) {.
TODO: resolve the indirect call in body 56: if ((DAT_1804258c8 != (code *)0x0) &&.
TODO: resolve the indirect call in body 57: (cVar1 = (*DAT_1804258c8)(param_1,&local_38), cVar1 != '\0')) {.)F1800214f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800214f0() noexcept {
    return kFunction_0x1800214f0;
}

// 0x180021600 FUN_180021600
// source: re/dump/decompile/0x180021600_FUN_180021600.c
// size: 1206 bytes; thunk: false
// body sha256: be5199a4bc20fcd33436f791b5285ca6a7d764cdbc2a3e42d5edca184e365253
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180021600{
    "0x180021600",
    "FUN_180021600",
    R"F180021600S(undefined FUN_180021600())F180021600S",
    R"B180021600(// 0x180021600  FUN_180021600
// size=1206 thunk=false
// signature: undefined FUN_180021600()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180021600(longlong param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  short sVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_1b8 [32];
  float local_198;
  float local_194;
  float local_190;
  float local_188;
  float local_184;
  float local_180;
  float local_178;
  float local_174;
  float local_170;
  float local_168;
  float local_164;
  float local_160;
  uint local_15c;
  float local_158;
  float local_154;
  float local_150;
  uint local_14c;
  float local_148;
  float local_144;
  float local_140;
  uint local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  float local_128 [6];
  undefined8 local_110;
  undefined8 local_108;
  float local_100;
  float local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  uint local_e8 [12];
  uint local_b8;
  uint local_b4;
  uint local_b0;
  ulonglong local_a8;
  
  local_a8 = DAT_1803da4c0 ^ (ulonglong)auStack_1b8;
  fVar11 = 0.0;
  fVar8 = *(float *)(param_1 + 0x6c);
  if (((*(float *)(param_1 + 0x6c) <= 0.0) && (fVar8 = DAT_180380cc0, 0 < *(int *)(param_1 + 0x10)))
     && (0 < *(int *)(param_1 + 0x18))) {
    fVar8 = (float)*(int *)(param_1 + 0x10) / (float)*(int *)(param_1 + 0x18);
  }
  fVar12 = *(float *)(param_1 + 0x58);
  if (*(float *)(param_1 + 0x58) <= 0.0) {
    fVar12 = DAT_180380f90;
  }
  fVar13 = *(float *)(param_1 + 0x5c);
  if (*(float *)(param_1 + 0x5c) <= 0.0) {
    fVar13 = DAT_1803812c8;
  }
  fVar14 = *(float *)(param_1 + 0x38);
  if (*(float *)(param_1 + 0x38) <= 0.0) {
    fVar14 = DAT_18038110c;
  }
  sVar3 = _fdclass();
  if (((((sVar3 < 1) && (DAT_180380980 < fVar8)) &&
       ((fVar8 <= DAT_180380fcc &&
        ((sVar3 = _fdclass(), sVar3 < 1 && (sVar3 = _fdclass(), fVar2 = DAT_180380964, sVar3 < 1))))
       )) && (0.0 < fVar12)) &&
     ((((fVar12 + DAT_180380964 < fVar13 &&
        (sVar3 = _fdclass(), local_128[0] = DAT_180380bb0, sVar3 < 1)) && (DAT_180380bb0 < fVar14))
      && (fVar14 < DAT_180381184)))) {
    FUN_1802d3e70(param_1 + 0x4c,&local_178,&local_198,&local_188);
    uVar10 = DAT_1803817f0;
    fVar9 = *(float *)(param_1 + 0x44);
    fVar7 = *(float *)(param_1 + 0x48);
    fVar1 = *(float *)(param_1 + 0x40);
    local_168 = local_198;
    local_164 = local_194;
    local_160 = local_190;
    local_158 = local_188;
    local_154 = local_184;
    local_15c = (uint)(fVar1 * local_198 + fVar9 * local_194 + fVar7 * local_190) ^ DAT_1803817f0;
    local_148 = local_178;
    local_138 = _DAT_180381630;
    uStack_130 = _UNK_180381638;
    local_150 = local_180;
    local_14c = (uint)(fVar1 * local_188 + fVar9 * local_184 + fVar7 * local_180) ^ DAT_1803817f0;
    local_144 = local_174;
    local_140 = local_170;
    local_13c = (uint)(fVar1 * local_178 + fVar9 * local_174 + fVar7 * local_170) ^ DAT_1803817f0;
    fVar7 = tanf(fVar14 * DAT_180380ac0 * DAT_180380994);
    fVar9 = DAT_180380948;
    if (DAT_180380948 <= fVar7) {
      fVar9 = fVar7;
    }
    local_128[1] = 0.0;
    local_128[2] = 0.0;
    local_128[3] = 0.0;
    local_128[4] = 0.0;
    local_110 = 0;
    local_108 = 0;
    local_128[0] = local_128[0] / fVar9;
    local_100 = fVar13 / (fVar13 - fVar12);
    local_fc = (float)((uint)fVar12 ^ uVar10) * local_100;
    local_128[5] = local_128[0] * fVar8;
    local_f8 = _DAT_1803814d0;
    uStack_f0 = _UNK_1803814d8;
    FUN_1802d47f0(local_128,&local_168);
    uVar6 = 0;
    do {
      uVar5 = 0;
      do {
        if ((local_e8[uVar6 * 4 + uVar5] & 0x7f800000) == 0x7f800000) {
          return 0;
        }
        uVar10 = (uint)_DAT_1803817c0;
        fVar8 = (float)(local_e8[uVar6 * 4 + uVar5] & uVar10);
        if (DAT_1803812f8 < fVar8) {
          return 0;
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        fVar11 = fVar11 + fVar8;
      } while ((int)uVar4 < 4);
      uVar4 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar4;
    } while ((int)uVar4 < 4);
    if ((fVar2 < fVar11) &&
       (DAT_180380938 <
        (float)(local_b8 & uVar10) + (float)(local_b4 & uVar10) + (float)(local_b0 & uVar10))) {
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_1804260d8);
      FUN_1802d4780(&DAT_1805707c0,local_e8);
      DAT_1805c7c00 = *(undefined4 *)(param_1 + 0x40);
      DAT_1805c7c04 = *(undefined4 *)(param_1 + 0x44);
      DAT_1805c7c08 = *(undefined4 *)(param_1 + 0x48);
      DAT_1803fe650 = 1;
      DAT_180425428 = 1;
      DAT_1803da5c0 = fVar14;
      DAT_1803e7498 = param_2;
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_1804260d8);
      return 1;
    }
  }
  return 0;
}


)B180021600",
    "be5199a4bc20fcd33436f791b5285ca6a7d764cdbc2a3e42d5edca184e365253",
    R"F180021600C(FUN_1802d3e70
FUN_1802d4780
FUN_1802d47f0)F180021600C",
    R"F180021600D(DAT_180380938
DAT_180380948
DAT_180380964
DAT_180380980
DAT_180380994
DAT_180380ac0
DAT_180380bb0
DAT_180380cc0
DAT_180380f90
DAT_180380fcc
DAT_18038110c
DAT_180381184
DAT_1803812c8
DAT_1803812f8
DAT_1803817f0
DAT_1803da4c0
DAT_1803da5c0
DAT_1803e7498
DAT_1803fe650
DAT_180425428
DAT_1804260d8
DAT_1805707c0
DAT_1805c7c00
DAT_1805c7c04
DAT_1805c7c08)F180021600D",
    R"F180021600T()F180021600T",
    R"F180021600F(67: if (((*(float *)(param_1 + 0x6c) <= 0.0) && (fVar8 = DAT_180380cc0, 0 < *(int *)(param_1 + 0x10)))
72: if (*(float *)(param_1 + 0x58) <= 0.0) {
76: if (*(float *)(param_1 + 0x5c) <= 0.0) {
80: if (*(float *)(param_1 + 0x38) <= 0.0) {
84: if (((((sVar3 < 1) && (DAT_180380980 < fVar8)) &&
112: if (DAT_180380948 <= fVar7) {
129: do {
131: do {
132: if ((local_e8[uVar6 * 4 + uVar5] & 0x7f800000) == 0x7f800000) {
133: return 0;
137: if (DAT_1803812f8 < fVar8) {
138: return 0;
147: if ((fVar2 < fVar11) &&
160: return 1;
163: return 0;)F180021600F",
    R"F180021600U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380938.
TODO: recover the declaration, type and value for global/data reference DAT_180380948.
TODO: recover the declaration, type and value for global/data reference DAT_180380964.
TODO: recover the declaration, type and value for global/data reference DAT_180380980.
TODO: recover the declaration, type and value for global/data reference DAT_180380994.
TODO: recover the declaration, type and value for global/data reference DAT_180380ac0.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_180380cc0.
TODO: recover the declaration, type and value for global/data reference DAT_180380f90.
TODO: recover the declaration, type and value for global/data reference DAT_180380fcc.
TODO: recover the declaration, type and value for global/data reference DAT_18038110c.
TODO: recover the declaration, type and value for global/data reference DAT_180381184.
TODO: recover the declaration, type and value for global/data reference DAT_1803812c8.
TODO: recover the declaration, type and value for global/data reference DAT_1803812f8.
TODO: recover the declaration, type and value for global/data reference DAT_1803817f0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da5c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7498.
TODO: recover the declaration, type and value for global/data reference DAT_1803fe650.
TODO: recover the declaration, type and value for global/data reference DAT_180425428.
TODO: recover the declaration, type and value for global/data reference DAT_1804260d8.
TODO: recover the declaration, type and value for global/data reference DAT_1805707c0.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7c00.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7c04.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7c08.)F180021600U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180021600() noexcept {
    return kFunction_0x180021600;
}

// 0x180021ac0 FUN_180021ac0
// source: re/dump/decompile/0x180021ac0_FUN_180021ac0.c
// size: 284 bytes; thunk: false
// body sha256: 99bc5a8b899e7b34e2a7813db44fe64ac9e3569d6f968dba106332b2987aff7a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180021ac0{
    "0x180021ac0",
    "FUN_180021ac0",
    R"F180021ac0S(undefined FUN_180021ac0())F180021ac0S",
    R"B180021ac0(// 0x180021ac0  FUN_180021ac0
// size=284 thunk=false
// signature: undefined FUN_180021ac0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180021ac0(undefined8 *param_1,undefined8 param_2)

{
  ulonglong extraout_RAX;
  ulonglong uVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [64];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_a8;
  local_2c = 0x42b40000;
  local_28 = 0xffffffff;
  local_24 = 0;
  AcquireSRWLockShared((PSRWLOCK)&DAT_1804260d8);
  FUN_1802d4780(local_78,&DAT_1805707c0);
  local_28 = DAT_1803e7498;
  local_38 = DAT_1805c7c00;
  local_34 = DAT_1805c7c04;
  local_24 = CONCAT11(DAT_1803fe650,DAT_180425428);
  local_30 = DAT_1805c7c08;
  local_2c = DAT_1803da5c0;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_1804260d8);
  if ((char)local_24 == '\0') {
    uVar1 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    local_88 = *param_1;
    local_80 = *(undefined4 *)(param_1 + 1);
    uVar1 = FUN_1800207e0(&local_88,param_2,local_78);
  }
  return uVar1;
}


)B180021ac0",
    "99bc5a8b899e7b34e2a7813db44fe64ac9e3569d6f968dba106332b2987aff7a",
    R"F180021ac0C(FUN_1800207e0
FUN_1802d4780)F180021ac0C",
    R"F180021ac0D(DAT_1803da4c0
DAT_1803da5c0
DAT_1803e7498
DAT_1803fe650
DAT_180425428
DAT_1804260d8
DAT_1805707c0
DAT_1805c7c00
DAT_1805c7c04
DAT_1805c7c08)F180021ac0D",
    R"F180021ac0T()F180021ac0T",
    R"F180021ac0F(39: if ((char)local_24 == '\0') {
42: else {
47: return uVar1;)F180021ac0F",
    R"F180021ac0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da5c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7498.
TODO: recover the declaration, type and value for global/data reference DAT_1803fe650.
TODO: recover the declaration, type and value for global/data reference DAT_180425428.
TODO: recover the declaration, type and value for global/data reference DAT_1804260d8.
TODO: recover the declaration, type and value for global/data reference DAT_1805707c0.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7c00.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7c04.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7c08.)F180021ac0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180021ac0() noexcept {
    return kFunction_0x180021ac0;
}

// 0x180021be0 FUN_180021be0
// source: re/dump/decompile/0x180021be0_FUN_180021be0.c
// size: 848 bytes; thunk: false
// body sha256: b95ced3f0c1bc2fe5ba5126d6c1b1b37d39be495a23bf043c7991d295cf4831c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180021be0{
    "0x180021be0",
    "FUN_180021be0",
    R"F180021be0S(undefined FUN_180021be0())F180021be0S",
    R"B180021be0(// 0x180021be0  FUN_180021be0
// size=848 thunk=false
// signature: undefined FUN_180021be0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180021be0(float *param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_148 [32];
  float local_128;
  float local_124;
  float local_120;
  undefined1 local_118 [48];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined2 local_c4;
  ulonglong local_b8;
  
  local_b8 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  local_cc = 0x42b40000;
  local_c8 = 0xffffffff;
  local_c4 = 0;
  AcquireSRWLockShared((PSRWLOCK)&DAT_1804260d8);
  FUN_1802d4780(local_118,&DAT_1805707c0);
  local_c8 = DAT_1803e7498;
  local_d8 = DAT_1805c7c00;
  local_d4 = DAT_1805c7c04;
  local_c4 = CONCAT11(DAT_1803fe650,DAT_180425428);
  local_d0 = DAT_1805c7c08;
  local_cc = DAT_1803da5c0;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_1804260d8);
  if ((char)local_c4 == '\0') {
    return 0;
  }
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = fVar4 * local_e4 + fVar3 * local_e8 + fVar5 * local_e0 + local_dc;
  sVar2 = _fdclass(fVar6);
  if (sVar2 < 1) {
    fVar8 = *param_2;
    fVar9 = param_2[1];
    fVar10 = param_2[2];
    fVar7 = fVar9 * local_e4 + fVar8 * local_e8 + fVar10 * local_e0 + local_dc;
    sVar2 = _fdclass(fVar7);
    if (sVar2 < 1) {
      if (fVar6 < DAT_180380980) {
        if (fVar7 < DAT_180380980) {
          return 0;
        }
        if ((float)((uint)(fVar7 - fVar6) & _DAT_1803817c0) < DAT_180380938) {
          return 0;
        }
        fVar6 = (DAT_180380980 - fVar6) / (fVar7 - fVar6);
        fVar3 = (fVar8 - fVar3) * fVar6 + fVar3;
        fVar4 = (fVar9 - fVar4) * fVar6 + fVar4;
        fVar5 = (fVar10 - fVar5) * fVar6 + fVar5;
      }
      else if (fVar7 < DAT_180380980) {
        if ((float)((uint)(fVar6 - fVar7) & _DAT_1803817c0) < DAT_180380938) {
          return 0;
        }
        fVar6 = (DAT_180380980 - fVar7) / (fVar6 - fVar7);
        fVar8 = (fVar3 - fVar8) * fVar6 + fVar8;
        fVar9 = (fVar4 - fVar9) * fVar6 + fVar9;
        fVar10 = (fVar5 - fVar10) * fVar6 + fVar10;
      }
      local_128 = fVar3;
      local_124 = fVar4;
      local_120 = fVar5;
      cVar1 = FUN_1800207e0(&local_128,param_3,local_118);
      if ((cVar1 != '\0') &&
         (local_128 = fVar8, local_124 = fVar9, local_120 = fVar10,
         cVar1 = FUN_1800207e0(&local_128,param_4,local_118), cVar1 != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}


)B180021be0",
    "b95ced3f0c1bc2fe5ba5126d6c1b1b37d39be495a23bf043c7991d295cf4831c",
    R"F180021be0C(FUN_1800207e0
FUN_1802d4780)F180021be0C",
    R"F180021be0D(DAT_180380938
DAT_180380980
DAT_1803da4c0
DAT_1803da5c0
DAT_1803e7498
DAT_1803fe650
DAT_180425428
DAT_1804260d8
DAT_1805707c0
DAT_1805c7c00
DAT_1805c7c04
DAT_1805c7c08)F180021be0D",
    R"F180021be0T()F180021be0T",
    R"F180021be0F(53: if ((char)local_c4 == '\0') {
54: return 0;
61: if (sVar2 < 1) {
67: if (sVar2 < 1) {
68: if (fVar6 < DAT_180380980) {
69: if (fVar7 < DAT_180380980) {
70: return 0;
72: if ((float)((uint)(fVar7 - fVar6) & _DAT_1803817c0) < DAT_180380938) {
73: return 0;
80: else if (fVar7 < DAT_180380980) {
81: if ((float)((uint)(fVar6 - fVar7) & _DAT_1803817c0) < DAT_180380938) {
82: return 0;
93: if ((cVar1 != '\0') &&
96: return 1;
100: return 0;)F180021be0F",
    R"F180021be0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380938.
TODO: recover the declaration, type and value for global/data reference DAT_180380980.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da5c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7498.
TODO: recover the declaration, type and value for global/data reference DAT_1803fe650.
TODO: recover the declaration, type and value for global/data reference DAT_180425428.
TODO: recover the declaration, type and value for global/data reference DAT_1804260d8.
TODO: recover the declaration, type and value for global/data reference DAT_1805707c0.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7c00.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7c04.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7c08.)F180021be0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180021be0() noexcept {
    return kFunction_0x180021be0;
}

// 0x180021f30 FUN_180021f30
// source: re/dump/decompile/0x180021f30_FUN_180021f30.c
// size: 470 bytes; thunk: false
// body sha256: 0b8ca22ba6dd5bc96436098326a1b83f4d6ed3672048e0653b8571b6477ad99c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180021f30{
    "0x180021f30",
    "FUN_180021f30",
    R"F180021f30S(undefined FUN_180021f30())F180021f30S",
    R"B180021f30(// 0x180021f30  FUN_180021f30
// size=470 thunk=false
// signature: undefined FUN_180021f30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_180021f30(float *param_1,longlong param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  float fVar7;
  float extraout_XMM0_Da;
  float fVar8;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined **local_158;
  longlong local_150;
  undefined8 local_148;
  undefined1 local_138 [44];
  float local_10c;
  longlong local_e0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_7f;
  ulonglong local_78;
  
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();
  local_150 = (*pcVar4)(DAT_1803fa360,uVar6);
  bVar5 = false;
  if (local_150 != 0) {
    fVar1 = *param_1;
    local_b8 = *param_3 - fVar1;
    fVar2 = param_1[1];
    local_b4 = param_3[1] - fVar2;
    fVar3 = param_1[2];
    local_b0 = param_3[2] - fVar3;
    local_148 = DAT_1803ff0f0;
    local_158 = vftable_CDoubleTraceFilter;
    local_88 = 0;
    fVar8 = local_b4 * local_b4 + local_b8 * local_b8 + local_b0 * local_b0;
    fVar7 = (float)(*(code *)PTR_FUN_1803da018)(fVar8);
    local_7f = fVar7 != 0.0;
    local_168 = local_138;
    local_94 = 0;
    local_98 = 0;
    local_88 = 0;
    local_80 = 1;
    local_a4 = 0;
    local_a8 = 0;
    local_c8 = fVar1;
    local_c4 = fVar2;
    local_c0 = fVar3;
    (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,&local_c8,0x46004003,&local_158);
    if ((local_e0 == param_2) ||
       ((*(code *)PTR_FUN_1803da018)(fVar8), extraout_XMM0_Da <= DAT_180380f40)) {
      bVar5 = true;
    }
    else {
      bVar5 = DAT_180380bb0 - DAT_180380f40 / extraout_XMM0_Da <= local_10c;
    }
  }
  return bVar5;
}


)B180021f30",
    "0b8ca22ba6dd5bc96436098326a1b83f4d6ed3672048e0653b8571b6477ad99c",
    R"F180021f30C()F180021f30C",
    R"F180021f30D(DAT_180380bb0
DAT_180380f40
DAT_1803da4c0
DAT_1803fa360
DAT_1803fa610
DAT_1803fa668
DAT_1803ff0f0)F180021f30D",
    R"F180021f30T()F180021f30T",
    R"F180021f30F(49: if (local_150 != 0) {
73: if ((local_e0 == param_2) ||
77: else {
81: return bVar5;)F180021f30F",
    R"F180021f30U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_180380f40.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa610.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff0f0.
TODO: resolve the indirect call in body 45: pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);.
TODO: resolve the indirect call in body 46: uVar6 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 47: local_150 = (*pcVar4)(DAT_1803fa360,uVar6);.
TODO: resolve the indirect call in body 60: fVar7 = (float)(*(code *)PTR_FUN_1803da018)(fVar8);.
TODO: resolve the indirect call in body 72: (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,&local_c8,0x46004003,&local_158);.
TODO: resolve the indirect call in body 74: ((*(code *)PTR_FUN_1803da018)(fVar8), extraout_XMM0_Da <= DAT_180380f40)) {.)F180021f30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180021f30() noexcept {
    return kFunction_0x180021f30;
}

// 0x180022110 FUN_180022110
// source: re/dump/decompile/0x180022110_FUN_180022110.c
// size: 119 bytes; thunk: false
// body sha256: 785f63ddcb8a9fe64dab36f75dd881855215f136a51182bbb9e41b99697da1a5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180022110{
    "0x180022110",
    "FUN_180022110",
    R"F180022110S(undefined FUN_180022110())F180022110S",
    R"B180022110(// 0x180022110  FUN_180022110
// size=119 thunk=false
// signature: undefined FUN_180022110()
// status: ok


float FUN_180022110(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = fmodf(param_1 - param_2,DAT_18038120c);
  if (param_1 <= param_2) {
    if (fVar1 <= DAT_180381420) {
      fVar1 = fVar1 + DAT_18038120c;
    }
  }
  else if (DAT_180381188 <= fVar1) {
    return fVar1 - DAT_18038120c;
  }
  return fVar1;
}


)B180022110",
    "785f63ddcb8a9fe64dab36f75dd881855215f136a51182bbb9e41b99697da1a5",
    R"F180022110C()F180022110C",
    R"F180022110D(DAT_180381188
DAT_18038120c
DAT_180381420)F180022110D",
    R"F180022110T()F180022110T",
    R"F180022110F(13: if (param_1 <= param_2) {
14: if (fVar1 <= DAT_180381420) {
18: else if (DAT_180381188 <= fVar1) {
19: return fVar1 - DAT_18038120c;
21: return fVar1;)F180022110F",
    R"F180022110U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180381188.
TODO: recover the declaration, type and value for global/data reference DAT_18038120c.
TODO: recover the declaration, type and value for global/data reference DAT_180381420.)F180022110U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180022110() noexcept {
    return kFunction_0x180022110;
}

// 0x180022190 FUN_180022190
// source: re/dump/decompile/0x180022190_FUN_180022190.c
// size: 43 bytes; thunk: false
// body sha256: a90212e6f16519168a37d5e672fafae58defc99dd5cffb15e687fe3ec8742ede
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180022190{
    "0x180022190",
    "FUN_180022190",
    R"F180022190S(undefined FUN_180022190())F180022190S",
    R"B180022190(// 0x180022190  FUN_180022190
// size=43 thunk=false
// signature: undefined FUN_180022190()
// status: ok


void FUN_180022190(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1802d3e00(*param_1);
  *param_1 = uVar1;
  uVar1 = FUN_1802d3e00(param_1[1]);
  param_1[1] = uVar1;
  return;
}


)B180022190",
    "a90212e6f16519168a37d5e672fafae58defc99dd5cffb15e687fe3ec8742ede",
    R"F180022190C(FUN_1802d3e00)F180022190C",
    R"F180022190D()F180022190D",
    R"F180022190T()F180022190T",
    R"F180022190F(16: return;)F180022190F",
    R"F180022190U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180022190U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180022190() noexcept {
    return kFunction_0x180022190;
}

// 0x1800221c0 FUN_1800221c0
// source: re/dump/decompile/0x1800221c0_FUN_1800221c0.c
// size: 143 bytes; thunk: false
// body sha256: f541f2da9a974bf45b699d82b3b6266ff395e37da0abad363eb5de755179cbf2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800221c0{
    "0x1800221c0",
    "FUN_1800221c0",
    R"F1800221c0S(undefined FUN_1800221c0())F1800221c0S",
    R"B1800221c0(// 0x1800221c0  FUN_1800221c0
// size=143 thunk=false
// signature: undefined FUN_1800221c0()
// status: ok


void FUN_1800221c0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = DAT_180381188;
  fVar3 = *param_1;
  if (DAT_180381108 < fVar3) {
    do {
      fVar3 = fVar3 - DAT_180381188;
    } while (DAT_180381108 < fVar3);
    *param_1 = fVar3;
  }
  if (fVar3 < DAT_180381410) {
    do {
      fVar3 = fVar3 + fVar1;
    } while (fVar3 < DAT_180381410);
    *param_1 = fVar3;
  }
  fVar2 = DAT_18038120c;
  fVar3 = param_1[1];
  if (fVar1 < fVar3) {
    do {
      fVar3 = fVar3 - DAT_18038120c;
    } while (fVar1 < fVar3);
    param_1[1] = fVar3;
  }
  if (fVar3 < DAT_180381420) {
    do {
      fVar3 = fVar3 + fVar2;
    } while (fVar3 < DAT_180381420);
    param_1[1] = fVar3;
  }
  return;
}


)B1800221c0",
    "f541f2da9a974bf45b699d82b3b6266ff395e37da0abad363eb5de755179cbf2",
    R"F1800221c0C()F1800221c0C",
    R"F1800221c0D(DAT_180381108
DAT_180381188
DAT_18038120c
DAT_180381410
DAT_180381420)F1800221c0D",
    R"F1800221c0T()F1800221c0T",
    R"F1800221c0F(16: if (DAT_180381108 < fVar3) {
17: do {
22: if (fVar3 < DAT_180381410) {
23: do {
30: if (fVar1 < fVar3) {
31: do {
36: if (fVar3 < DAT_180381420) {
37: do {
42: return;)F1800221c0F",
    R"F1800221c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180381108.
TODO: recover the declaration, type and value for global/data reference DAT_180381188.
TODO: recover the declaration, type and value for global/data reference DAT_18038120c.
TODO: recover the declaration, type and value for global/data reference DAT_180381410.
TODO: recover the declaration, type and value for global/data reference DAT_180381420.)F1800221c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800221c0() noexcept {
    return kFunction_0x1800221c0;
}

// 0x180022250 FUN_180022250
// source: re/dump/decompile/0x180022250_FUN_180022250.c
// size: 601 bytes; thunk: false
// body sha256: ba866fb368aace31342021145ee38f1198ef08e0b952f432073ae5ab3eff1614
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180022250{
    "0x180022250",
    "FUN_180022250",
    R"F180022250S(undefined FUN_180022250())F180022250S",
    R"B180022250(// 0x180022250  FUN_180022250
// size=601 thunk=false
// signature: undefined FUN_180022250()
// status: ok


undefined8
FUN_180022250(longlong param_1,longlong param_2,char *param_3,undefined8 param_4,undefined4 param_5,
             float param_6)

{
  ushort uVar1;
  float fVar2;
  int iVar3;
  size_t sVar4;
  longlong lVar5;
  byte *pbVar6;
  float fVar7;
  float fVar8;
  float local_res8;
  float local_resc;
  float fStack_54;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 == (char *)0x0) {
    return 0;
  }
  if (*param_3 == '\0') {
    return 0;
  }
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar5 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(longlong *)(param_2 + 8) != *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x60)) {
    return 0;
  }
  param_6 = param_6 + DAT_180380ac0;
  iVar3 = (int)param_6;
  if ((param_6 < 0.0) && ((float)iVar3 != param_6)) {
    iVar3 = iVar3 + -1;
  }
  fVar8 = (float)iVar3;
  if (fVar8 < DAT_180380bb0) {
    return 0;
  }
  local_res8 = 0.0;
  sVar4 = strlen(param_3);
  FUN_180268c20(&local_res8,param_3,param_3 + sVar4);
  fVar2 = local_res8;
  if (0xfffe < (int)local_res8 - 1U) {
    return 0;
  }
  lVar5 = FUN_18029db30(param_2,fVar8,DAT_180381384);
  if (lVar5 == 0) {
    return 0;
  }
  if (*(float *)(lVar5 + 0x14) <= 0.0) {
    return 0;
  }
  if ((ulonglong)((uint)fVar2 & 0xffff) < (ulonglong)(longlong)*(int *)(lVar5 + 0x20)) {
    uVar1 = *(ushort *)(*(longlong *)(lVar5 + 0x28) + (ulonglong)((uint)fVar2 & 0xffff) * 2);
    if (uVar1 == 0xfffe) {
      return 0;
    }
    if (uVar1 != 0xffff) {
      pbVar6 = (byte *)((ulonglong)uVar1 * 0x2c + *(longlong *)(lVar5 + 0x38));
      goto LAB_1800223e5;
    }
  }
  *(uint *)(lVar5 + 0x4c) = *(uint *)(lVar5 + 0x4c) | 0x8000000;
  pbVar6 = (byte *)FUN_18029c810(lVar5,(uint)fVar2 & 0xffff,0);
  *(uint *)(lVar5 + 0x4c) = *(uint *)(lVar5 + 0x4c) & 0xf7ffffff;
LAB_1800223e5:
  if ((pbVar6 != (byte *)0x0) && ((*pbVar6 & 2) != 0)) {
    fVar7 = fVar8 / *(float *)(lVar5 + 0x14);
    local_res8 = (float)param_4 -
                 (*(float *)(pbVar6 + 0x10) + *(float *)(pbVar6 + 8)) * DAT_180380ac0 * fVar7;
    fStack_54 = (float)((ulonglong)param_4 >> 0x20);
    local_resc = fStack_54 -
                 (*(float *)(pbVar6 + 0x14) + *(float *)(pbVar6 + 0xc)) * DAT_180380ac0 * fVar7;
    FUN_18029e680(param_2,param_1,fVar8,&local_res8,param_5,SUB42(fVar2,0),0);
    return 1;
  }
  return 0;
}


)B180022250",
    "ba866fb368aace31342021145ee38f1198ef08e0b952f432073ae5ab3eff1614",
    R"F180022250C(FUN_180268c20
FUN_18029c810
FUN_18029db30
FUN_18029e680)F180022250C",
    R"F180022250D(LAB_1800223e5
DAT_180380ac0
DAT_180380bb0
DAT_180381384)F180022250D",
    R"F180022250T()F180022250T",
    R"F180022250F(24: if (param_1 == 0) {
25: return 0;
27: if (param_2 == 0) {
28: return 0;
30: if (param_3 == (char *)0x0) {
31: return 0;
33: if (*param_3 == '\0') {
34: return 0;
37: if (*(char *)(lVar5 + 0x10) == '\0') {
40: if (*(longlong *)(param_2 + 8) != *(longlong *)(*(longlong *)(lVar5 + 0xec0) + 0x60)) {
41: return 0;
45: if ((param_6 < 0.0) && ((float)iVar3 != param_6)) {
49: if (fVar8 < DAT_180380bb0) {
50: return 0;
56: if (0xfffe < (int)local_res8 - 1U) {
57: return 0;
60: if (lVar5 == 0) {
61: return 0;
63: if (*(float *)(lVar5 + 0x14) <= 0.0) {
64: return 0;
66: if ((ulonglong)((uint)fVar2 & 0xffff) < (ulonglong)(longlong)*(int *)(lVar5 + 0x20)) {
68: if (uVar1 == 0xfffe) {
69: return 0;
71: if (uVar1 != 0xffff) {
73: goto LAB_1800223e5;
79: LAB_1800223e5:
80: if ((pbVar6 != (byte *)0x0) && ((*pbVar6 & 2) != 0)) {
88: return 1;
90: return 0;)F180022250F",
    R"F180022250U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1800223e5.
TODO: recover the declaration, type and value for global/data reference DAT_180380ac0.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_180381384.)F180022250U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180022250() noexcept {
    return kFunction_0x180022250;
}

// 0x1800224b0 FUN_1800224b0
// source: re/dump/decompile/0x1800224b0_FUN_1800224b0.c
// size: 432 bytes; thunk: false
// body sha256: 0d94234a7f0c02635aa19d5263e308bbcbd1c09edc1f0994c69d0ec66926c987
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800224b0{
    "0x1800224b0",
    "FUN_1800224b0",
    R"F1800224b0S(undefined FUN_1800224b0())F1800224b0S",
    R"B1800224b0(// 0x1800224b0  FUN_1800224b0
// size=432 thunk=false
// signature: undefined FUN_1800224b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1800224b0(void)

{
  uint uVar1;
  uint uVar2;
  DWORD DVar3;
  uint uVar4;
  ULONGLONG UVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  uint *puVar7;
  int iVar8;
  undefined1 auStack_a28 [32];
  uint local_a08 [2];
  uint local_a00 [3];
  uint local_9f4;
  undefined8 local_9f0;
  uint *puStack_9e8;
  uint *local_9e0;
  uint local_9d8 [624];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_a28;
  uVar2 = std::_Random_device();
  UVar5 = GetTickCount64();
  DVar3 = GetCurrentProcessId();
  uVar6 = rdtsc();
  uVar6 = (CONCAT44(extraout_var,(int)uVar6) | uVar6 & 0xffffffff00000000) ^
          UVar5 * 2 ^ (ulonglong)uVar2;
  local_a00[1] = (uint)(uVar6 >> 0x20) ^ DVar3;
  local_9f0 = 0;
  puStack_9e8 = (uint *)0x0;
  local_9e0 = (uint *)0x0;
  local_a00[0] = (uint)uVar6;
  local_a00[2] = std::_Random_device();
  local_9f0 = 0;
  puStack_9e8 = (uint *)0x0;
  local_9e0 = (uint *)0x0;
  puVar7 = local_a00;
  do {
    local_a08[0] = *puVar7;
    if (puStack_9e8 == local_9e0) {
      FUN_180229d20(&local_9f0,puStack_9e8,local_a08);
    }
    else {
      *puStack_9e8 = local_a08[0];
      puStack_9e8 = puStack_9e8 + 1;
    }
    puVar7 = puVar7 + 1;
  } while (puVar7 != &local_9f4);
  _DAT_1804275f4 = 0xffffffff;
  uVar2 = 0x1571;
  DAT_180426274 = 0x1571;
  uVar6 = 1;
  do {
    uVar2 = (uVar2 >> 0x1e ^ uVar2) * 0x6c078965 + (int)uVar6;
    (&DAT_180426274)[uVar6] = uVar2;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x270);
  _DAT_180426270 = 0x270;
  FUN_18021f0c0(&local_9f0);
  iVar8 = 0;
  uVar2 = 0;
  uVar6 = 0;
  do {
    uVar1 = local_9d8[iVar8];
    (&DAT_180426274)[uVar6] = uVar1;
    uVar4 = uVar1 | uVar2;
    uVar2 = uVar1 >> 0x1f;
    if (uVar6 != 0) {
      uVar2 = uVar4;
    }
    uVar6 = uVar6 + 1;
    iVar8 = iVar8 + 1;
  } while (uVar6 < 0x270);
  if (uVar2 == 0) {
    DAT_180426274 = 0x80000000;
  }
  _DAT_180426270 = 0x270;
  FUN_18021e060(&local_9f0);
  return &DAT_180426270;
}


)B1800224b0",
    "0d94234a7f0c02635aa19d5263e308bbcbd1c09edc1f0994c69d0ec66926c987",
    R"F1800224b0C(FUN_18021e060
FUN_18021f0c0
FUN_180229d20)F1800224b0C",
    R"F1800224b0D(DAT_1803da4c0
DAT_180426270
DAT_180426274)F1800224b0D",
    R"F1800224b0T()F1800224b0T",
    R"F1800224b0F(49: do {
51: if (puStack_9e8 == local_9e0) {
54: else {
64: do {
74: do {
79: if (uVar6 != 0) {
85: if (uVar2 == 0) {
90: return &DAT_180426270;)F1800224b0F",
    R"F1800224b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_180426270.
TODO: recover the declaration, type and value for global/data reference DAT_180426274.)F1800224b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800224b0() noexcept {
    return kFunction_0x1800224b0;
}

// 0x180022660 FUN_180022660
// source: re/dump/decompile/0x180022660_FUN_180022660.c
// size: 18 bytes; thunk: false
// body sha256: 30056976464754edd562b182e94fa75cce0abbe2eb6edddfa6ccf41c693835e8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180022660{
    "0x180022660",
    "FUN_180022660",
    R"F180022660S(undefined FUN_180022660())F180022660S",
    R"B180022660(// 0x180022660  FUN_180022660
// size=18 thunk=false
// signature: undefined FUN_180022660()
// status: ok


void FUN_180022660(void)

{
  FUN_18021e060();
  return;
}


)B180022660",
    "30056976464754edd562b182e94fa75cce0abbe2eb6edddfa6ccf41c693835e8",
    R"F180022660C(FUN_18021e060)F180022660C",
    R"F180022660D()F180022660D",
    R"F180022660T()F180022660T",
    R"F180022660F(11: return;)F180022660F",
    R"F180022660U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180022660U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180022660() noexcept {
    return kFunction_0x180022660;
}

// 0x180022680 FUN_180022680
// source: re/dump/decompile/0x180022680_FUN_180022680.c
// size: 180 bytes; thunk: false
// body sha256: c3b5bbcee2a12c78affd82d7722b701a726f9a148f4d5b0a565c1c7fc606f64a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180022680{
    "0x180022680",
    "FUN_180022680",
    R"F180022680S(undefined FUN_180022680())F180022680S",
    R"B180022680(// 0x180022680  FUN_180022680
// size=180 thunk=false
// signature: undefined FUN_180022680()
// status: ok


uint FUN_180022680(uint param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  
  if ((int)param_1 < param_2) {
    if ((DAT_18042f170 & 1) == 0) {
      DAT_18042f170 = DAT_18042f170 | 1;
      FUN_1800224b0();
    }
    iVar3 = (param_2 - 1U ^ 0x80000000) - (param_1 ^ 0x80000000);
    if (iVar3 == -1) {
      iVar3 = FUN_18021dbf0(&DAT_180426270);
    }
    else {
      uVar4 = iVar3 + 1;
      uVar1 = FUN_18021dbf0(&DAT_180426270);
      lVar2 = (ulonglong)uVar1 * (ulonglong)uVar4;
      uVar1 = (uint)lVar2;
      if (uVar1 < uVar4) {
        while (uVar1 < -uVar4 % uVar4) {
          uVar1 = FUN_18021dbf0(&DAT_180426270);
          lVar2 = (ulonglong)uVar1 * (ulonglong)uVar4;
          uVar1 = (uint)lVar2;
        }
      }
      iVar3 = (int)((ulonglong)lVar2 >> 0x20);
    }
    return iVar3 + (param_1 ^ 0x80000000) ^ 0x80000000;
  }
  return param_1;
}


)B180022680",
    "c3b5bbcee2a12c78affd82d7722b701a726f9a148f4d5b0a565c1c7fc606f64a",
    R"F180022680C(FUN_1800224b0
FUN_18021dbf0)F180022680C",
    R"F180022680D(DAT_180426270
DAT_18042f170)F180022680D",
    R"F180022680T()F180022680T",
    R"F180022680F(15: if ((int)param_1 < param_2) {
16: if ((DAT_18042f170 & 1) == 0) {
21: if (iVar3 == -1) {
24: else {
29: if (uVar1 < uVar4) {
30: while (uVar1 < -uVar4 % uVar4) {
38: return iVar3 + (param_1 ^ 0x80000000) ^ 0x80000000;
40: return param_1;)F180022680F",
    R"F180022680U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180426270.
TODO: recover the declaration, type and value for global/data reference DAT_18042f170.)F180022680U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180022680() noexcept {
    return kFunction_0x180022680;
}

// 0x180022740 FUN_180022740
// source: re/dump/decompile/0x180022740_FUN_180022740.c
// size: 258 bytes; thunk: false
// body sha256: 7851d38293360d94197c7fea44ddced46c416679e2b03883fcf049369fb49a3f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180022740{
    "0x180022740",
    "FUN_180022740",
    R"F180022740S(undefined FUN_180022740())F180022740S",
    R"B180022740(// 0x180022740  FUN_180022740
// size=258 thunk=false
// signature: undefined FUN_180022740()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180022740(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  
  if ((DAT_1805c7bf8 & 1) == 0) {
    DAT_1805c7bf8 = DAT_1805c7bf8 | 1;
    DAT_1805c7ad0 = (undefined8 *)0x0;
    uRam00000001805c7ad8 = 0;
    _DAT_1805c7ae0 = 0;
    DAT_1805c7ae8 = 0;
    FUN_18001d080(&DAT_1805c7ad0,"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",
                  0x3e,param_4,0,param_1);
    atexit((_func_5014 *)&LAB_180308ad0);
  }
  FUN_18020ea80(param_1,param_2,0);
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  if (param_2 != 0) {
    iVar1 = FUN_180022680(0,_DAT_1805c7ae0 & 0xffffffff);
    uVar3 = (ulonglong)iVar1;
    if (uVar3 < _DAT_1805c7ae0) {
      do {
        puVar2 = &DAT_1805c7ad0;
        if (0xf < DAT_1805c7ae8) {
          puVar2 = DAT_1805c7ad0;
        }
        *(undefined1 *)puVar4 = *(undefined1 *)((longlong)puVar2 + uVar3);
        param_2 = param_2 + -1;
        if (param_2 == 0) {
          return param_1;
        }
        puVar4 = (undefined8 *)((longlong)puVar4 + 1);
        iVar1 = FUN_180022680(0,_DAT_1805c7ae0 & 0xffffffff);
        uVar3 = (ulonglong)iVar1;
      } while (uVar3 < _DAT_1805c7ae0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_18022ec00();
  }
  return param_1;
}


)B180022740",
    "7851d38293360d94197c7fea44ddced46c416679e2b03883fcf049369fb49a3f",
    R"F180022740C(FUN_18001d080
FUN_180022680
FUN_18020ea80
FUN_18022ec00)F180022740C",
    R"F180022740D(LAB_180308ad0
DAT_1805c7ad0
DAT_1805c7ae8
DAT_1805c7bf8)F180022740D",
    R"F180022740T("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz")F180022740T",
    R"F180022740F(17: if ((DAT_1805c7bf8 & 1) == 0) {
29: if (0xf < (ulonglong)param_1[3]) {
32: if (param_2 != 0) {
35: if (uVar3 < _DAT_1805c7ae0) {
36: do {
38: if (0xf < DAT_1805c7ae8) {
43: if (param_2 == 0) {
44: return param_1;
54: return param_1;)F180022740F",
    R"F180022740U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180308ad0.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7ad0.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7ae8.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7bf8.)F180022740U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180022740() noexcept {
    return kFunction_0x180022740;
}

// 0x180022850 FUN_180022850
// source: re/dump/decompile/0x180022850_FUN_180022850.c
// size: 92 bytes; thunk: false
// body sha256: dce446dbd7919793748a5fe5dcc5fb21edd908dd91c1874a18480b1d11b876f1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180022850{
    "0x180022850",
    "FUN_180022850",
    R"F180022850S(undefined FUN_180022850())F180022850S",
    R"B180022850(// 0x180022850  FUN_180022850
// size=92 thunk=false
// signature: undefined FUN_180022850()
// status: ok


void FUN_180022850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  HMODULE hModule;
  
  if (DAT_1803feb68 == (FARPROC)0x0) {
    hModule = GetModuleHandleA("lua_shared.dll");
    DAT_1803feb68 = GetProcAddress(hModule,"luaL_loadbufferx");
  }
                    /* WARNING: Could not recover jumptable at 0x0001800228a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1803feb68)(param_1,param_2,param_3,param_4);
  return;
}


)B180022850",
    "dce446dbd7919793748a5fe5dcc5fb21edd908dd91c1874a18480b1d11b876f1",
    R"F180022850C()F180022850C",
    R"F180022850D(DAT_1803feb68)F180022850D",
    R"F180022850T("lua_shared.dll"
"luaL_loadbufferx")F180022850T",
    R"F180022850F(12: if (DAT_1803feb68 == (FARPROC)0x0) {
19: return;)F180022850F",
    R"F180022850U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803feb68.
TODO: resolve the indirect call in body 18: (*DAT_1803feb68)(param_1,param_2,param_3,param_4);.)F180022850U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180022850() noexcept {
    return kFunction_0x180022850;
}

// 0x1800228e0 FUN_1800228e0
// source: re/dump/decompile/0x1800228e0_FUN_1800228e0.c
// size: 1285 bytes; thunk: false
// body sha256: 866623d98f523391a54b7d652afd67dc8970433ccf4cbe0bc48b5559af771f30
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800228e0{
    "0x1800228e0",
    "FUN_1800228e0",
    R"F1800228e0S(undefined FUN_1800228e0())F1800228e0S",
    R"B1800228e0(// 0x1800228e0  FUN_1800228e0
// size=1285 thunk=false
// signature: undefined FUN_1800228e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1800228e0(undefined8 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char ****_Str;
  longlong *plVar4;
  undefined1 auStack_148 [32];
  longlong local_128;
  char *local_120;
  undefined8 local_118;
  undefined4 local_108;
  char ***local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulonglong uStack_e8;
  longlong local_e0;
  longlong lStack_d8;
  undefined8 *local_c8;
  char *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong alStack_50 [2];
  char acStack_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  local_108 = 1;
  local_c8 = param_1;
  local_b8 = param_2;
  if ((DAT_18042f188 & 1) == 0) {
    DAT_18042f188 = DAT_18042f188 | 1;
    _DAT_1805c7bd0 = 0;
    _DAT_1805c7bd8 = 0;
    _DAT_1805c7be0 = 0;
    uRam00000001805c7be8 = 0;
    DAT_1805c7bf0 = 0;
    FUN_18020df40(&DAT_1805c7bd0,"\\[string \"(.+)\"\\]:([0-9]+): (.*)");
    atexit(FUN_180308b30);
  }
  if ((DAT_18042f188 & 2) == 0) {
    DAT_18042f188 = DAT_18042f188 | 2;
    _DAT_180430130 = 0;
    _DAT_180430138 = 0;
    _DAT_180430140 = 0;
    uRam0000000180430148 = 0;
    DAT_180430150 = 0;
    FUN_18020df40(&DAT_180430130,"^(.*[^\\]]):([0-9]+): (.*)$");
    atexit(FUN_180308ae0);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  lStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  alStack_50[0] = 0;
  alStack_50[1] = 0;
  acStack_40[0] = '\0';
  acStack_40[1] = '\0';
  acStack_40[2] = '\0';
  acStack_40[3] = '\0';
  acStack_40[4] = '\0';
  acStack_40[5] = '\0';
  acStack_40[6] = '\0';
  acStack_40[7] = '\0';
  plVar4 = (longlong *)(param_2 + 0x10);
  local_120 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    local_120 = *(char **)param_2;
  }
  cVar1 = FUN_180210750(local_120,local_120 + *plVar4,&local_a8,&DAT_1805c7bd0);
  if (cVar1 == '\0') {
    local_120 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      local_120 = *(char **)param_2;
    }
    cVar1 = FUN_180210750(local_120,local_120 + *plVar4,&local_a8,&DAT_180430130);
    if (cVar1 == '\0') {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0xf;
      *(undefined1 *)param_1 = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0xf;
      *(undefined1 *)(param_1 + 5) = 0;
      local_108 = 3;
      *(undefined4 *)(param_1 + 4) = 1;
      local_128 = *plVar4;
      if (0x7fffffffffffffffU - local_128 < 0x1d) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_118 = 0x1d;
      local_120 = " (Failed to parse the error!)";
      FUN_18020e930(&local_100);
      local_108 = 0x83;
      FUN_18020e8a0(param_1 + 5,&local_100);
      local_108 = 3;
      FUN_18020e450(&local_100);
      local_108 = 1;
      goto LAB_180022da8;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xf;
  *(undefined1 *)(param_1 + 5) = 0;
  local_108 = 1;
  if ((ulonglong)((lStack_90 - local_98 >> 3) * -0x5555555555555555) < 2) {
    plVar4 = alStack_50;
    pcVar3 = acStack_40;
  }
  else {
    plVar4 = (longlong *)(local_98 + 0x18);
    pcVar3 = (char *)(local_98 + 0x28);
  }
  if (*pcVar3 == '\0') {
    local_e0 = 0;
    lStack_d8 = 0;
  }
  else {
    local_e0 = *plVar4;
    lStack_d8 = plVar4[1];
  }
  local_100 = (char ***)0x0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  if (local_e0 == lStack_d8) {
    local_f0 = _DAT_1803814b0;
    uStack_e8 = _UNK_1803814b8;
    local_100 = (char ***)0x0;
  }
  else {
    FUN_18001d080(&local_100,local_e0,lStack_d8 - local_e0);
  }
  local_108 = 5;
  FUN_18020e8a0(param_1,&local_100);
  local_108 = 1;
  FUN_18020e450(&local_100);
  if ((ulonglong)((lStack_90 - local_98 >> 3) * -0x5555555555555555) < 3) {
    plVar4 = alStack_50;
    pcVar3 = acStack_40;
  }
  else {
    plVar4 = (longlong *)(local_98 + 0x30);
    pcVar3 = (char *)(local_98 + 0x40);
  }
  if (*pcVar3 == '\0') {
    local_e0 = 0;
    lStack_d8 = 0;
  }
  else {
    local_e0 = *plVar4;
    lStack_d8 = plVar4[1];
  }
  local_100 = (char ***)0x0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  if (local_e0 == lStack_d8) {
    local_f0 = _DAT_1803814b0;
    uStack_e8 = _UNK_1803814b8;
    local_100 = (char ***)0x0;
  }
  else {
    FUN_18001d080(&local_100,local_e0,lStack_d8 - local_e0);
  }
  local_108 = 0x11;
  _Str = &local_100;
  if (0xf < uStack_e8) {
    _Str = (char ****)local_100;
  }
  iVar2 = atoi((char *)_Str);
  *(int *)(param_1 + 4) = iVar2;
  local_108 = 1;
  FUN_18020e450(&local_100);
  if ((ulonglong)((lStack_90 - local_98 >> 3) * -0x5555555555555555) < 4) {
    plVar4 = alStack_50;
    pcVar3 = acStack_40;
  }
  else {
    plVar4 = (longlong *)(local_98 + 0x48);
    pcVar3 = (char *)(local_98 + 0x58);
  }
  if (*pcVar3 == '\0') {
    local_e0 = 0;
    lStack_d8 = 0;
  }
  else {
    local_e0 = *plVar4;
    lStack_d8 = plVar4[1];
  }
  local_100 = (char ***)0x0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  if (local_e0 == lStack_d8) {
    local_f0 = _DAT_1803814b0;
    uStack_e8 = _UNK_1803814b8;
    local_100 = (char ***)0x0;
  }
  else {
    FUN_18001d080(&local_100,local_e0,lStack_d8 - local_e0);
  }
  local_108 = 0x21;
  FUN_18020e8a0(param_1 + 5,&local_100);
  local_108 = 1;
  FUN_18020e450(&local_100);
  local_108 = 0;
LAB_180022da8:
  FUN_18020abf0(&local_98);
  FUN_18020e450(param_2);
  return param_1;
}


)B1800228e0",
    "866623d98f523391a54b7d652afd67dc8970433ccf4cbe0bc48b5559af771f30",
    R"F1800228e0C(FUN_1800130a0
FUN_18001d080
FUN_18020abf0
FUN_18020df40
FUN_18020e450
FUN_18020e8a0
FUN_18020e930
FUN_180210750
FUN_180308ae0
FUN_180308b30)F1800228e0C",
    R"F1800228e0D(LAB_180022da8
DAT_1803da4c0
DAT_18042f188
DAT_180430130
DAT_180430150
DAT_1805c7bd0
DAT_1805c7bf0)F1800228e0D",
    R"F1800228e0T("^(.*[^\\\\]]):([0-9]+): (.*)$"
" (Failed to parse the error!)"
"\\\\[string \\\"(.+)\\\"\\\\]:([0-9]+): (.*)")F1800228e0T",
    R"F1800228e0F(50: if ((DAT_18042f188 & 1) == 0) {
60: if ((DAT_18042f188 & 2) == 0) {
93: if (0xf < *(ulonglong *)(param_2 + 0x18)) {
97: if (cVar1 == '\0') {
99: if (0xf < *(ulonglong *)(param_2 + 0x18)) {
103: if (cVar1 == '\0') {
117: if (0x7fffffffffffffffU - local_128 < 0x1d) {
129: goto LAB_180022da8;
143: if ((ulonglong)((lStack_90 - local_98 >> 3) * -0x5555555555555555) < 2) {
147: else {
151: if (*pcVar3 == '\0') {
155: else {
163: if (local_e0 == lStack_d8) {
168: else {
175: if ((ulonglong)((lStack_90 - local_98 >> 3) * -0x5555555555555555) < 3) {
179: else {
183: if (*pcVar3 == '\0') {
187: else {
195: if (local_e0 == lStack_d8) {
200: else {
205: if (0xf < uStack_e8) {
212: if ((ulonglong)((lStack_90 - local_98 >> 3) * -0x5555555555555555) < 4) {
216: else {
220: if (*pcVar3 == '\0') {
224: else {
232: if (local_e0 == lStack_d8) {
237: else {
245: LAB_180022da8:
248: return param_1;)F1800228e0F",
    R"F1800228e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180022da8.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_18042f188.
TODO: recover the declaration, type and value for global/data reference DAT_180430130.
TODO: recover the declaration, type and value for global/data reference DAT_180430150.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7bd0.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7bf0.)F1800228e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800228e0() noexcept {
    return kFunction_0x1800228e0;
}

// 0x180022df0 FUN_180022df0
// source: re/dump/decompile/0x180022df0_FUN_180022df0.c
// size: 129 bytes; thunk: false
// body sha256: be859d966082fe56090fed0b824418ede8be8164614c32a38997bb5cc979ea91
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180022df0{
    "0x180022df0",
    "FUN_180022df0",
    R"F180022df0S(undefined FUN_180022df0())F180022df0S",
    R"B180022df0(// 0x180022df0  FUN_180022df0
// size=129 thunk=false
// signature: undefined FUN_180022df0()
// status: ok


void FUN_180022df0(longlong param_1)

{
  code *pcVar1;
  void *_Memory;
  void *pvVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  longlong local_18;
  
  pvVar2 = *(void **)(param_1 + 0x10);
  if (pvVar2 != (void *)0x0) {
    _Memory = pvVar2;
    puVar3 = auStack_38;
    local_18 = param_1;
    if (0xfff < (ulonglong)((*(longlong *)(param_1 + 0x20) - (longlong)pvVar2 >> 3) * 8)) {
      _Memory = *(void **)((longlong)pvVar2 + -8);
      pvVar2 = (void *)((longlong)pvVar2 + (-8 - (longlong)_Memory));
      puVar3 = auStack_38;
      if ((void *)0x1f < pvVar2) {
        pcVar1 = (code *)swi(0x29);
        _Memory = pvVar2;
        (*pcVar1)(5);
        puVar3 = auStack_30;
      }
    }
    *(undefined8 *)(puVar3 + -8) = 0x180022e5d;
    free(_Memory);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


)B180022df0",
    "be859d966082fe56090fed0b824418ede8be8164614c32a38997bb5cc979ea91",
    R"F180022df0C()F180022df0C",
    R"F180022df0D()F180022df0D",
    R"F180022df0T()F180022df0T",
    R"F180022df0F(19: if (pvVar2 != (void *)0x0) {
23: if (0xfff < (ulonglong)((*(longlong *)(param_1 + 0x20) - (longlong)pvVar2 >> 3) * 8)) {
27: if ((void *)0x1f < pvVar2) {
40: return;)F180022df0F",
    R"F180022df0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 28: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 30: (*pcVar1)(5);.)F180022df0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180022df0() noexcept {
    return kFunction_0x180022df0;
}

// 0x180022e80 FUN_180022e80
// source: re/dump/decompile/0x180022e80_FUN_180022e80.c
// size: 36 bytes; thunk: false
// body sha256: a00c5e0d1117aab6b6c0b9c1c9623942ea7ecc751c2ecfdd1275d2b2da826224
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180022e80{
    "0x180022e80",
    "FUN_180022e80",
    R"F180022e80S(undefined FUN_180022e80())F180022e80S",
    R"B180022e80(// 0x180022e80  FUN_180022e80
// size=36 thunk=false
// signature: undefined FUN_180022e80()
// status: ok


void FUN_180022e80(longlong param_1)

{
  FUN_18020e450(param_1 + 0x28);
  FUN_18020e450(param_1);
  return;
}


)B180022e80",
    "a00c5e0d1117aab6b6c0b9c1c9623942ea7ecc751c2ecfdd1275d2b2da826224",
    R"F180022e80C(FUN_18020e450)F180022e80C",
    R"F180022e80D()F180022e80D",
    R"F180022e80T()F180022e80T",
    R"F180022e80F(12: return;)F180022e80F",
    R"F180022e80U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180022e80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180022e80() noexcept {
    return kFunction_0x180022e80;
}

// 0x180022eb0 FUN_180022eb0
// source: re/dump/decompile/0x180022eb0_FUN_180022eb0.c
// size: 76 bytes; thunk: false
// body sha256: 78eb435995f5ad4d64ca13fccd31c8bdc43190717ad9a6942bbade6c60a81afa
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180022eb0{
    "0x180022eb0",
    "FUN_180022eb0",
    R"F180022eb0S(undefined FUN_180022eb0())F180022eb0S",
    R"B180022eb0(// 0x180022eb0  FUN_180022eb0
// size=76 thunk=false
// signature: undefined FUN_180022eb0()
// status: ok


void FUN_180022eb0(undefined8 param_1)

{
  HMODULE hModule;
  
  if (DAT_180425fe8 == (FARPROC)0x0) {
    hModule = GetModuleHandleA("lua_shared.dll");
    DAT_180425fe8 = GetProcAddress(hModule,"luaL_checklstring");
  }
                    /* WARNING: Could not recover jumptable at 0x000180022ef9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_180425fe8)(param_1,0xffffffff,0);
  return;
}


)B180022eb0",
    "78eb435995f5ad4d64ca13fccd31c8bdc43190717ad9a6942bbade6c60a81afa",
    R"F180022eb0C()F180022eb0C",
    R"F180022eb0D(DAT_180425fe8)F180022eb0D",
    R"F180022eb0T("lua_shared.dll"
"luaL_checklstring")F180022eb0T",
    R"F180022eb0F(12: if (DAT_180425fe8 == (FARPROC)0x0) {
19: return;)F180022eb0F",
    R"F180022eb0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180425fe8.
TODO: resolve the indirect call in body 18: (*DAT_180425fe8)(param_1,0xffffffff,0);.)F180022eb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180022eb0() noexcept {
    return kFunction_0x180022eb0;
}

// 0x180022f00 FUN_180022f00
// source: re/dump/decompile/0x180022f00_FUN_180022f00.c
// size: 81 bytes; thunk: false
// body sha256: 93db6c72dfb8bc7bf08ba38135cdcc1f72a0a0fa73792f942aec18272f3e9344
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180022f00{
    "0x180022f00",
    "FUN_180022f00",
    R"F180022f00S(undefined FUN_180022f00())F180022f00S",
    R"B180022f00(// 0x180022f00  FUN_180022f00
// size=81 thunk=false
// signature: undefined FUN_180022f00()
// status: ok


void FUN_180022f00(undefined8 param_1,uint param_2)

{
  HMODULE hModule;
  
  if (DAT_180423ad0 == (FARPROC)0x0) {
    hModule = GetModuleHandleA("lua_shared.dll");
    DAT_180423ad0 = GetProcAddress(hModule,"lua_pushvalue");
  }
                    /* WARNING: Could not recover jumptable at 0x000180022f4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_180423ad0)(param_1,(ulonglong)param_2);
  return;
}


)B180022f00",
    "93db6c72dfb8bc7bf08ba38135cdcc1f72a0a0fa73792f942aec18272f3e9344",
    R"F180022f00C()F180022f00C",
    R"F180022f00D(DAT_180423ad0)F180022f00D",
    R"F180022f00T("lua_pushvalue"
"lua_shared.dll")F180022f00T",
    R"F180022f00F(12: if (DAT_180423ad0 == (FARPROC)0x0) {
19: return;)F180022f00F",
    R"F180022f00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180423ad0.
TODO: resolve the indirect call in body 18: (*DAT_180423ad0)(param_1,(ulonglong)param_2);.)F180022f00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180022f00() noexcept {
    return kFunction_0x180022f00;
}

// 0x180022f60 FUN_180022f60
// source: re/dump/decompile/0x180022f60_FUN_180022f60.c
// size: 68 bytes; thunk: false
// body sha256: 09989b048918ba528d8457e3ba8925fbeb3e3effdf5885f9fdef20cb723356bb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180022f60{
    "0x180022f60",
    "FUN_180022f60",
    R"F180022f60S(undefined FUN_180022f60())F180022f60S",
    R"B180022f60(// 0x180022f60  FUN_180022f60
// size=68 thunk=false
// signature: undefined FUN_180022f60()
// status: ok


void FUN_180022f60(undefined8 param_1)

{
  HMODULE hModule;
  
  if (DAT_1803fcfa0 == (FARPROC)0x0) {
    hModule = GetModuleHandleA("lua_shared.dll");
    DAT_1803fcfa0 = GetProcAddress(hModule,"lua_gettop");
  }
                    /* WARNING: Could not recover jumptable at 0x000180022fa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1803fcfa0)(param_1);
  return;
}


)B180022f60",
    "09989b048918ba528d8457e3ba8925fbeb3e3effdf5885f9fdef20cb723356bb",
    R"F180022f60C()F180022f60C",
    R"F180022f60D(DAT_1803fcfa0)F180022f60D",
    R"F180022f60T("lua_gettop"
"lua_shared.dll")F180022f60T",
    R"F180022f60F(12: if (DAT_1803fcfa0 == (FARPROC)0x0) {
19: return;)F180022f60F",
    R"F180022f60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcfa0.
TODO: resolve the indirect call in body 18: (*DAT_1803fcfa0)(param_1);.)F180022f60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180022f60() noexcept {
    return kFunction_0x180022f60;
}

// 0x180022fb0 FUN_180022fb0
// source: re/dump/decompile/0x180022fb0_FUN_180022fb0.c
// size: 81 bytes; thunk: false
// body sha256: 9e4337973cf3de4358b8eeb877e9b0ba458bd096adab56f69c2d94e8187f09cd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180022fb0{
    "0x180022fb0",
    "FUN_180022fb0",
    R"F180022fb0S(undefined FUN_180022fb0())F180022fb0S",
    R"B180022fb0(// 0x180022fb0  FUN_180022fb0
// size=81 thunk=false
// signature: undefined FUN_180022fb0()
// status: ok


void FUN_180022fb0(undefined8 param_1,uint param_2)

{
  HMODULE hModule;
  
  if (DAT_180425540 == (FARPROC)0x0) {
    hModule = GetModuleHandleA("lua_shared.dll");
    DAT_180425540 = GetProcAddress(hModule,"lua_settop");
  }
                    /* WARNING: Could not recover jumptable at 0x000180022ffe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_180425540)(param_1,(ulonglong)param_2);
  return;
}


)B180022fb0",
    "9e4337973cf3de4358b8eeb877e9b0ba458bd096adab56f69c2d94e8187f09cd",
    R"F180022fb0C()F180022fb0C",
    R"F180022fb0D(DAT_180425540)F180022fb0D",
    R"F180022fb0T("lua_settop"
"lua_shared.dll")F180022fb0T",
    R"F180022fb0F(12: if (DAT_180425540 == (FARPROC)0x0) {
19: return;)F180022fb0F",
    R"F180022fb0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180425540.
TODO: resolve the indirect call in body 18: (*DAT_180425540)(param_1,(ulonglong)param_2);.)F180022fb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180022fb0() noexcept {
    return kFunction_0x180022fb0;
}

// 0x180023010 FUN_180023010
// source: re/dump/decompile/0x180023010_FUN_180023010.c
// size: 313 bytes; thunk: false
// body sha256: ae3c73a7e726e420a88e1a8e0b5e98a2cf1fb4e67dff605c35d777bf3e89bbcd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180023010{
    "0x180023010",
    "FUN_180023010",
    R"F180023010S(undefined FUN_180023010())F180023010S",
    R"B180023010(// 0x180023010  FUN_180023010
// size=313 thunk=false
// signature: undefined FUN_180023010()
// status: ok


longlong * FUN_180023010(longlong *param_1,longlong param_2)

{
  uint uVar1;
  HMODULE hModule;
  INT_PTR IVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_2 != 0) {
    if (DAT_1803fa806 == '\0') {
      hModule = GetModuleHandleA("lua_shared.dll");
      if (hModule == (HMODULE)0x0) {
        return param_1;
      }
      DAT_1803fa806 = '\x01';
      DAT_1803fae90 = GetProcAddress(hModule,"lua_sethook");
      DAT_1803fae98 = GetProcAddress(hModule,"lua_gethook");
      DAT_1803faea0 = GetProcAddress(hModule,"lua_gethookmask");
      DAT_1803faea8 = GetProcAddress(hModule,"lua_gethookcount");
    }
    if ((((DAT_1803fae90 != (FARPROC)0x0) && (DAT_1803fae98 != (FARPROC)0x0)) &&
        (DAT_1803faea0 != (FARPROC)0x0)) && (DAT_1803faea8 != (FARPROC)0x0)) {
      IVar2 = (*DAT_1803fae98)(*param_1);
      param_1[1] = IVar2;
      IVar2 = (*DAT_1803faea0)(*param_1);
      *(int *)(param_1 + 2) = (int)IVar2;
      IVar2 = (*DAT_1803faea8)(*param_1);
      *(int *)((longlong)param_1 + 0x14) = (int)IVar2;
      uVar1 = *(uint *)(param_1 + 2);
      if (((uVar1 != 0) || (param_1[1] != 0)) && (((uVar1 & 8) == 0 && ((uVar1 & 7) != 0)))) {
        *(undefined1 *)(param_1 + 3) = 1;
        (*DAT_1803fae90)(*param_1,0,0,0);
      }
    }
  }
  return param_1;
}


)B180023010",
    "ae3c73a7e726e420a88e1a8e0b5e98a2cf1fb4e67dff605c35d777bf3e89bbcd",
    R"F180023010C()F180023010C",
    R"F180023010D(DAT_1803fa806
DAT_1803fae90
DAT_1803fae98
DAT_1803faea0
DAT_1803faea8)F180023010D",
    R"F180023010T("lua_gethook"
"lua_sethook"
"lua_shared.dll"
"lua_gethookmask"
"lua_gethookcount")F180023010T",
    R"F180023010F(18: if (param_2 != 0) {
19: if (DAT_1803fa806 == '\0') {
21: if (hModule == (HMODULE)0x0) {
22: return param_1;
30: if ((((DAT_1803fae90 != (FARPROC)0x0) && (DAT_1803fae98 != (FARPROC)0x0)) &&
39: if (((uVar1 != 0) || (param_1[1] != 0)) && (((uVar1 & 8) == 0 && ((uVar1 & 7) != 0)))) {
45: return param_1;)F180023010F",
    R"F180023010U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa806.
TODO: recover the declaration, type and value for global/data reference DAT_1803fae90.
TODO: recover the declaration, type and value for global/data reference DAT_1803fae98.
TODO: recover the declaration, type and value for global/data reference DAT_1803faea0.
TODO: recover the declaration, type and value for global/data reference DAT_1803faea8.
TODO: resolve the indirect call in body 32: IVar2 = (*DAT_1803fae98)(*param_1);.
TODO: resolve the indirect call in body 34: IVar2 = (*DAT_1803faea0)(*param_1);.
TODO: resolve the indirect call in body 36: IVar2 = (*DAT_1803faea8)(*param_1);.
TODO: resolve the indirect call in body 41: (*DAT_1803fae90)(*param_1,0,0,0);.)F180023010U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180023010() noexcept {
    return kFunction_0x180023010;
}

// 0x180023150 FUN_180023150
// source: re/dump/decompile/0x180023150_FUN_180023150.c
// size: 45 bytes; thunk: false
// body sha256: a4b0719740429b6294f1e49dca5674a8128757155a822459625131ef0d570212
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180023150{
    "0x180023150",
    "FUN_180023150",
    R"F180023150S(undefined FUN_180023150())F180023150S",
    R"B180023150(// 0x180023150  FUN_180023150
// size=45 thunk=false
// signature: undefined FUN_180023150()
// status: ok


void FUN_180023150(undefined8 *param_1)

{
  if ((*(char *)(param_1 + 3) != '\0') && (DAT_1803fae90 != (code *)0x0)) {
    (*DAT_1803fae90)(*param_1,param_1[1],*(undefined4 *)(param_1 + 2),
                     *(undefined4 *)((longlong)param_1 + 0x14));
  }
  return;
}


)B180023150",
    "a4b0719740429b6294f1e49dca5674a8128757155a822459625131ef0d570212",
    R"F180023150C()F180023150C",
    R"F180023150D(DAT_1803fae90)F180023150D",
    R"F180023150T()F180023150T",
    R"F180023150F(10: if ((*(char *)(param_1 + 3) != '\0') && (DAT_1803fae90 != (code *)0x0)) {
14: return;)F180023150F",
    R"F180023150U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fae90.
TODO: resolve the indirect call in body 10: if ((*(char *)(param_1 + 3) != '\0') && (DAT_1803fae90 != (code *)0x0)) {.
TODO: resolve the indirect call in body 11: (*DAT_1803fae90)(*param_1,param_1[1],*(undefined4 *)(param_1 + 2),.)F180023150U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180023150() noexcept {
    return kFunction_0x180023150;
}

// 0x180023180 FUN_180023180
// source: re/dump/decompile/0x180023180_FUN_180023180.c
// size: 191 bytes; thunk: false
// body sha256: cdf9e5df996dbcbb0ed451aa547221238ba4d6fe3bd9f287495be1ae34ed7395
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180023180{
    "0x180023180",
    "FUN_180023180",
    R"F180023180S(undefined FUN_180023180())F180023180S",
    R"B180023180(// 0x180023180  FUN_180023180
// size=191 thunk=false
// signature: undefined FUN_180023180()
// status: ok


ulonglong FUN_180023180(undefined8 param_1,uint param_2,uint param_3)

{
  HMODULE hModule;
  ulonglong uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  char local_10;
  
  if (DAT_180426008 == (FARPROC)0x0) {
    hModule = GetModuleHandleA("lua_shared.dll");
    DAT_180426008 = GetProcAddress(hModule,"lua_pcall");
    if (DAT_180426008 == (FARPROC)0x0) {
      return 0xffffffff;
    }
  }
  FUN_180023010(&local_28,param_1);
  uVar1 = (*DAT_180426008)(param_1,(ulonglong)param_2,(ulonglong)param_3,0);
  if ((local_10 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
    (*DAT_1803fae90)(local_28,local_20,local_18,local_14);
  }
  return uVar1 & 0xffffffff;
}


)B180023180",
    "cdf9e5df996dbcbb0ed451aa547221238ba4d6fe3bd9f287495be1ae34ed7395",
    R"F180023180C(FUN_180023010)F180023180C",
    R"F180023180D(DAT_1803fae90
DAT_180426008)F180023180D",
    R"F180023180T("lua_pcall"
"lua_shared.dll")F180023180T",
    R"F180023180F(18: if (DAT_180426008 == (FARPROC)0x0) {
21: if (DAT_180426008 == (FARPROC)0x0) {
22: return 0xffffffff;
27: if ((local_10 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
30: return uVar1 & 0xffffffff;)F180023180F",
    R"F180023180U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fae90.
TODO: recover the declaration, type and value for global/data reference DAT_180426008.
TODO: resolve the indirect call in body 26: uVar1 = (*DAT_180426008)(param_1,(ulonglong)param_2,(ulonglong)param_3,0);.
TODO: resolve the indirect call in body 27: if ((local_10 != '\0') && (DAT_1803fae90 != (code *)0x0)) {.
TODO: resolve the indirect call in body 28: (*DAT_1803fae90)(local_28,local_20,local_18,local_14);.)F180023180U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180023180() noexcept {
    return kFunction_0x180023180;
}

// 0x180023240 FUN_180023240
// source: re/dump/decompile/0x180023240_FUN_180023240.c
// size: 68 bytes; thunk: false
// body sha256: 78c19dc403f5b16e50ee90575a68cd5b5219e48980ff0593c7d56cee3d9a36a0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180023240{
    "0x180023240",
    "FUN_180023240",
    R"F180023240S(undefined FUN_180023240())F180023240S",
    R"B180023240(// 0x180023240  FUN_180023240
// size=68 thunk=false
// signature: undefined FUN_180023240()
// status: ok


void FUN_180023240(undefined8 param_1)

{
  HMODULE hModule;
  
  if (DAT_1803ff2a8 == (FARPROC)0x0) {
    hModule = GetModuleHandleA("lua_shared.dll");
    DAT_1803ff2a8 = GetProcAddress(hModule,"lua_pushnil");
  }
                    /* WARNING: Could not recover jumptable at 0x000180023281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1803ff2a8)(param_1);
  return;
}


)B180023240",
    "78c19dc403f5b16e50ee90575a68cd5b5219e48980ff0593c7d56cee3d9a36a0",
    R"F180023240C()F180023240C",
    R"F180023240D(DAT_1803ff2a8)F180023240D",
    R"F180023240T("lua_pushnil"
"lua_shared.dll")F180023240T",
    R"F180023240F(12: if (DAT_1803ff2a8 == (FARPROC)0x0) {
19: return;)F180023240F",
    R"F180023240U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff2a8.
TODO: resolve the indirect call in body 18: (*DAT_1803ff2a8)(param_1);.)F180023240U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180023240() noexcept {
    return kFunction_0x180023240;
}

// 0x180023290 FUN_180023290
// source: re/dump/decompile/0x180023290_FUN_180023290.c
// size: 156 bytes; thunk: false
// body sha256: fd4aedfd66c19723cb02ad993f1f7f8039d9c417a2029bddcfc83c538f931f13
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180023290{
    "0x180023290",
    "FUN_180023290",
    R"F180023290S(undefined FUN_180023290())F180023290S",
    R"B180023290(// 0x180023290  FUN_180023290
// size=156 thunk=false
// signature: undefined FUN_180023290()
// status: ok


void FUN_180023290(void)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (DAT_1803fd090 == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_18001d080(&local_48,
                  "48 89 5C 24 08 57 48 83 EC 20 48 8B DA 48 8B F9 0F B6 52 09 0F B6 43 08 24 FC 88 43 08 83 FA 0C"
                  ,0x5f);
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_10 = 0;
    FUN_18001d080(&local_28,"lua_shared.dll",0xe);
    DAT_1803fd090 = FUN_180015f40(&local_28,&local_48);
  }
  return;
}


)B180023290",
    "fd4aedfd66c19723cb02ad993f1f7f8039d9c417a2029bddcfc83c538f931f13",
    R"F180023290C(FUN_180015f40
FUN_18001d080)F180023290C",
    R"F180023290D(DAT_1803fd090)F180023290D",
    R"F180023290T("lua_shared.dll"
"48 89 5C 24 08 57 48 83 EC 20 48 8B DA 48 8B F9 0F B6 52 09 0F B6 43 08 24 FC 88 43 08 83 FA 0C")F180023290T",
    R"F180023290F(19: if (DAT_1803fd090 == 0) {
34: return;)F180023290F",
    R"F180023290U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fd090.)F180023290U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180023290() noexcept {
    return kFunction_0x180023290;
}

// 0x180023330 FUN_180023330
// source: re/dump/decompile/0x180023330_FUN_180023330.c
// size: 411 bytes; thunk: false
// body sha256: 6d31864a2a76865a3805bd034db1bc9501169b427a5a92b4386a7df86ed2224b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180023330{
    "0x180023330",
    "FUN_180023330",
    R"F180023330S(undefined FUN_180023330())F180023330S",
    R"B180023330(// 0x180023330  FUN_180023330
// size=411 thunk=false
// signature: undefined FUN_180023330()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180023330(ulonglong param_1)

{
  char cVar1;
  ulonglong uVar2;
  HMODULE hModule;
  void *_Memory;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  if ((DAT_1803fb0b0 == (FARPROC)0x0) &&
     (hModule = GetModuleHandleA("lua_shared.dll"), hModule != (HMODULE)0x0)) {
    DAT_1803fb0b0 = GetProcAddress(hModule,"luaL_ref");
    DAT_1803fb0a8 = GetProcAddress(hModule,"luaL_unref");
  }
  cVar1 = *(char *)((longlong)DAT_1803fac68[1] + 0x19);
  puVar3 = (undefined8 *)DAT_1803fac68[1];
  puVar4 = DAT_1803fac68;
  while (puVar5 = puVar3, cVar1 == '\0') {
    if ((ulonglong)puVar5[4] < param_1) {
      puVar3 = (undefined8 *)puVar5[2];
      puVar5 = puVar4;
    }
    else {
      puVar3 = (undefined8 *)*puVar5;
    }
    cVar1 = *(char *)((longlong)puVar3 + 0x19);
    puVar4 = puVar5;
  }
  if ((*(char *)((longlong)puVar4 + 0x19) != '\0') || (param_1 < (ulonglong)puVar4[4])) {
    puVar4 = DAT_1803fac68;
  }
  if (puVar4 != DAT_1803fac68) {
    if ((DAT_1803fb0a8 != (FARPROC)0x0) && (0 < *(int *)(puVar4 + 5))) {
      (*DAT_1803fb0a8)(param_1,0xffffd8f0);
    }
    _Memory = (void *)FUN_18022e0e0(&DAT_1803fac68,puVar4);
    free(_Memory);
  }
  if ((param_1 != 0) && (uVar2 = *(ulonglong *)(param_1 + 0x10), uVar2 != 0)) {
    puVar3 = (undefined8 *)DAT_1803fa7f0[1];
    cVar1 = *(char *)((longlong)puVar3 + 0x19);
    puVar4 = puVar3;
    local_20 = DAT_1803fa7f0;
    local_28 = DAT_1803fa7f0;
    while (puVar5 = puVar4, cVar1 == '\0') {
      if ((ulonglong)puVar5[4] < uVar2) {
        puVar4 = (undefined8 *)puVar5[2];
        puVar5 = local_28;
      }
      else {
        if ((*(char *)((longlong)local_20 + 0x19) != '\0') && (uVar2 < (ulonglong)puVar5[4])) {
          local_20 = puVar5;
        }
        puVar4 = (undefined8 *)*puVar5;
      }
      cVar1 = *(char *)((longlong)puVar4 + 0x19);
      local_28 = puVar5;
    }
    if (*(char *)((longlong)local_20 + 0x19) == '\0') {
      puVar3 = (undefined8 *)*local_20;
    }
    cVar1 = *(char *)((longlong)puVar3 + 0x19);
    while (cVar1 == '\0') {
      if (uVar2 < (ulonglong)puVar3[4]) {
        puVar4 = (undefined8 *)*puVar3;
        local_20 = puVar3;
      }
      else {
        puVar4 = (undefined8 *)puVar3[2];
      }
      puVar3 = puVar4;
      cVar1 = *(char *)((longlong)puVar4 + 0x19);
    }
    FUN_18021d9b0(puVar5,&local_28);
  }
  return;
}


)B180023330",
    "6d31864a2a76865a3805bd034db1bc9501169b427a5a92b4386a7df86ed2224b",
    R"F180023330C(FUN_18021d9b0
FUN_18022e0e0)F180023330C",
    R"F180023330D(DAT_1803da4c0
DAT_1803fa7f0
DAT_1803fac68
DAT_1803fb0a8
DAT_1803fb0b0)F180023330D",
    R"F180023330T("luaL_ref"
"luaL_unref"
"lua_shared.dll")F180023330T",
    R"F180023330F(25: if ((DAT_1803fb0b0 == (FARPROC)0x0) &&
33: while (puVar5 = puVar3, cVar1 == '\0') {
34: if ((ulonglong)puVar5[4] < param_1) {
38: else {
44: if ((*(char *)((longlong)puVar4 + 0x19) != '\0') || (param_1 < (ulonglong)puVar4[4])) {
47: if (puVar4 != DAT_1803fac68) {
48: if ((DAT_1803fb0a8 != (FARPROC)0x0) && (0 < *(int *)(puVar4 + 5))) {
54: if ((param_1 != 0) && (uVar2 = *(ulonglong *)(param_1 + 0x10), uVar2 != 0)) {
60: while (puVar5 = puVar4, cVar1 == '\0') {
61: if ((ulonglong)puVar5[4] < uVar2) {
65: else {
66: if ((*(char *)((longlong)local_20 + 0x19) != '\0') && (uVar2 < (ulonglong)puVar5[4])) {
74: if (*(char *)((longlong)local_20 + 0x19) == '\0') {
78: while (cVar1 == '\0') {
79: if (uVar2 < (ulonglong)puVar3[4]) {
83: else {
91: return;)F180023330F",
    R"F180023330U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa7f0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac68.
TODO: recover the declaration, type and value for global/data reference DAT_1803fb0a8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fb0b0.
TODO: resolve the indirect call in body 49: (*DAT_1803fb0a8)(param_1,0xffffd8f0);.)F180023330U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180023330() noexcept {
    return kFunction_0x180023330;
}

// 0x1800234d0 FUN_1800234d0
// source: re/dump/decompile/0x1800234d0_FUN_1800234d0.c
// size: 158 bytes; thunk: false
// body sha256: 3200977a825492a3a648bb921c2bde7a313dee216d876abc81f1dba4846c90a2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800234d0{
    "0x1800234d0",
    "FUN_1800234d0",
    R"F1800234d0S(undefined FUN_1800234d0())F1800234d0S",
    R"B1800234d0(// 0x1800234d0  FUN_1800234d0
// size=158 thunk=false
// signature: undefined FUN_1800234d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1800234d0(LPCVOID param_1)

{
  undefined1 auStack_68 [32];
  _MEMORY_BASIC_INFORMATION local_48;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if (param_1 != (LPCVOID)0x0) {
    local_48.BaseAddress = (PVOID)0x0;
    local_48.AllocationBase = (PVOID)0x0;
    local_48.AllocationProtect = 0;
    local_48._20_4_ = 0;
    local_48.RegionSize = 0;
    local_48.State = 0;
    local_48.Protect = 0;
    local_48.Type = 0;
    local_48._44_4_ = 0;
    local_18 = VirtualQuery(param_1,&local_48,0x30);
    if ((local_18 != 0) && (local_48.State == 0x1000)) {
      local_18 = (ulonglong)local_48.Protect;
      if (((local_48.Protect >> 8 & 1) == 0) &&
         (((local_48._32_8_ & 0xee00000000) != 0 &&
          ((char *)((longlong)param_1 + 9) <
           (char *)((longlong)local_48.BaseAddress + local_48.RegionSize))))) {
        return (ulonglong)CONCAT31(local_48.Protect._1_3_,*(char *)((longlong)param_1 + 9) == '\v');
      }
    }
  }
  return local_18 & 0xffffffffffffff00;
}


)B1800234d0",
    "3200977a825492a3a648bb921c2bde7a313dee216d876abc81f1dba4846c90a2",
    R"F1800234d0C()F1800234d0C",
    R"F1800234d0D(DAT_1803da4c0)F1800234d0D",
    R"F1800234d0T()F1800234d0T",
    R"F1800234d0F(17: if (param_1 != (LPCVOID)0x0) {
28: if ((local_18 != 0) && (local_48.State == 0x1000)) {
30: if (((local_48.Protect >> 8 & 1) == 0) &&
34: return (ulonglong)CONCAT31(local_48.Protect._1_3_,*(char *)((longlong)param_1 + 9) == '\v');
38: return local_18 & 0xffffffffffffff00;)F1800234d0F",
    R"F1800234d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F1800234d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800234d0() noexcept {
    return kFunction_0x1800234d0;
}

// 0x1800235f0 FUN_1800235f0
// source: re/dump/decompile/0x1800235f0_FUN_1800235f0.c
// size: 81 bytes; thunk: false
// body sha256: 73509bdcbf01af06a081fd7dff06019ad3229c25013200dea1eb56b5c2b706b4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800235f0{
    "0x1800235f0",
    "FUN_1800235f0",
    R"F1800235f0S(undefined FUN_1800235f0())F1800235f0S",
    R"B1800235f0(// 0x1800235f0  FUN_1800235f0
// size=81 thunk=false
// signature: undefined FUN_1800235f0()
// status: ok


void FUN_1800235f0(undefined8 param_1,uint param_2)

{
  HMODULE hModule;
  
  if (DAT_1803fe490 == (FARPROC)0x0) {
    hModule = GetModuleHandleA("lua_shared.dll");
    DAT_1803fe490 = GetProcAddress(hModule,"lua_type");
  }
                    /* WARNING: Could not recover jumptable at 0x00018002363e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1803fe490)(param_1,(ulonglong)param_2);
  return;
}


)B1800235f0",
    "73509bdcbf01af06a081fd7dff06019ad3229c25013200dea1eb56b5c2b706b4",
    R"F1800235f0C()F1800235f0C",
    R"F1800235f0D(DAT_1803fe490)F1800235f0D",
    R"F1800235f0T("lua_type"
"lua_shared.dll")F1800235f0T",
    R"F1800235f0F(12: if (DAT_1803fe490 == (FARPROC)0x0) {
19: return;)F1800235f0F",
    R"F1800235f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fe490.
TODO: resolve the indirect call in body 18: (*DAT_1803fe490)(param_1,(ulonglong)param_2);.)F1800235f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800235f0() noexcept {
    return kFunction_0x1800235f0;
}

// 0x180023650 FUN_180023650
// source: re/dump/decompile/0x180023650_FUN_180023650.c
// size: 207 bytes; thunk: false
// body sha256: 22bef067d508712f19ae38d62f41b2f798a71099d03ed5c3a746562b5132003e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180023650{
    "0x180023650",
    "FUN_180023650",
    R"F180023650S(undefined FUN_180023650())F180023650S",
    R"B180023650(// 0x180023650  FUN_180023650
// size=207 thunk=false
// signature: undefined FUN_180023650()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180023650(ulonglong param_1)

{
  char cVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  plVar2 = (longlong *)DAT_1803fa7f0[1];
  cVar1 = *(char *)((longlong)plVar2 + 0x19);
  plVar5 = DAT_1803fa7f0;
  while (cVar1 == '\0') {
    plVar4 = plVar2;
    if ((ulonglong)plVar2[4] < param_1) {
      plVar2 = plVar2 + 2;
      plVar4 = plVar5;
    }
    plVar2 = (longlong *)*plVar2;
    plVar5 = plVar4;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (param_1 < (ulonglong)plVar5[4])) {
    plVar5 = DAT_1803fa7f0;
  }
  if (plVar5 != DAT_1803fa7f0) {
    uVar6 = plVar5[5] & 0x7fffffffffff;
    cVar1 = FUN_1800234d0(uVar6);
    if (cVar1 == '\0') {
      FUN_18021db70();
    }
    else if (((*(byte *)(uVar6 + 8) & 3) != 0) &&
            (pcVar3 = (code *)FUN_180023290(), pcVar3 != (code *)0x0)) {
      (*pcVar3)(param_1,uVar6);
    }
  }
  if (DAT_1803fa5b8 != (code *)0x0) {
    (*DAT_1803fa5b8)(param_1);
  }
  return;
}


)B180023650",
    "22bef067d508712f19ae38d62f41b2f798a71099d03ed5c3a746562b5132003e",
    R"F180023650C(FUN_180023290
FUN_1800234d0
FUN_18021db70)F180023650C",
    R"F180023650D(DAT_1803da4c0
DAT_1803fa5b8
DAT_1803fa7f0)F180023650D",
    R"F180023650T()F180023650T",
    R"F180023650F(25: while (cVar1 == '\0') {
27: if ((ulonglong)plVar2[4] < param_1) {
35: if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (param_1 < (ulonglong)plVar5[4])) {
38: if (plVar5 != DAT_1803fa7f0) {
41: if (cVar1 == '\0') {
44: else if (((*(byte *)(uVar6 + 8) & 3) != 0) &&
49: if (DAT_1803fa5b8 != (code *)0x0) {
52: return;)F180023650F",
    R"F180023650U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa5b8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa7f0.
TODO: resolve the indirect call in body 45: (pcVar3 = (code *)FUN_180023290(), pcVar3 != (code *)0x0)) {.
TODO: resolve the indirect call in body 46: (*pcVar3)(param_1,uVar6);.
TODO: resolve the indirect call in body 49: if (DAT_1803fa5b8 != (code *)0x0) {.
TODO: resolve the indirect call in body 50: (*DAT_1803fa5b8)(param_1);.)F180023650U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180023650() noexcept {
    return kFunction_0x180023650;
}

// 0x180023720 FUN_180023720
// source: re/dump/decompile/0x180023720_FUN_180023720.c
// size: 1852 bytes; thunk: false
// body sha256: ba34fc6654f58bd0aba52f412dfc7fb65cde38bea7f1811f34842fa3cd71c435
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180023720{
    "0x180023720",
    "FUN_180023720",
    R"F180023720S(undefined FUN_180023720())F180023720S",
    R"B180023720(// 0x180023720  FUN_180023720
// size=1852 thunk=false
// signature: undefined FUN_180023720()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180023720(longlong *param_1)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  HMODULE pHVar7;
  ulonglong uVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  undefined8 **ppuVar11;
  undefined8 *puVar12;
  undefined8 **ppuVar13;
  char *pcVar14;
  char *pcVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [32];
  undefined8 **local_78;
  undefined8 **local_70;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  if ((param_1 == (longlong *)0x0) || (DAT_1803fa648 == (code *)0x0)) {
    FUN_180014410("[LUA] persist init skipped: lua=%p index2adr=%p\n",param_1);
    return 0;
  }
  pcVar15 = "menu";
  if ((param_1[1] != 0) && (uVar16 = *(ulonglong *)(param_1[1] + 0x10), uVar16 != 0)) {
    cVar3 = *(char *)((longlong)DAT_1803fa7f0[1] + 0x19);
    puVar5 = (undefined8 *)DAT_1803fa7f0[1];
    puVar10 = DAT_1803fa7f0;
    while (puVar12 = puVar5, cVar3 == '\0') {
      if ((ulonglong)puVar12[4] < uVar16) {
        puVar5 = (undefined8 *)puVar12[2];
        puVar12 = puVar10;
      }
      else {
        puVar5 = (undefined8 *)*puVar12;
      }
      cVar3 = *(char *)((longlong)puVar5 + 0x19);
      puVar10 = puVar12;
    }
    if ((*(char *)((longlong)puVar10 + 0x19) != '\0') || (uVar16 < (ulonglong)puVar10[4])) {
      puVar10 = DAT_1803fa7f0;
    }
    if ((puVar10 != DAT_1803fa7f0) && (puVar1 = puVar10 + 5, puVar1 != (ulonglong *)0x0)) {
      cVar3 = FUN_1800234d0(*puVar1 & 0x7fffffffffff);
      if (cVar3 != '\0') {
        return 1;
      }
      uVar16 = *puVar1;
      cVar3 = (**(code **)(*param_1 + 0x268))(param_1);
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*param_1 + 600))(param_1);
        if (cVar3 == '\0') {
          cVar3 = (**(code **)(*param_1 + 0x260))(param_1);
          pcVar14 = "client";
          if (cVar3 == '\0') {
            pcVar14 = "unknown";
          }
        }
        else {
          pcVar14 = "server";
        }
      }
      else {
        pcVar14 = "menu";
      }
      FUN_180014410("[LUA] dropping stale persist entry for %s (tv=%llx)\n",pcVar14,uVar16);
      puVar5 = (undefined8 *)param_1[1];
      ppuVar13 = (undefined8 **)DAT_1803fac68[1];
      cVar3 = *(char *)((longlong)ppuVar13 + 0x19);
      ppuVar11 = ppuVar13;
      local_70 = (undefined8 **)DAT_1803fac68;
      local_78 = (undefined8 **)DAT_1803fac68;
      while (ppuVar9 = ppuVar11, cVar3 == '\0') {
        if (ppuVar9[4] < puVar5) {
          ppuVar11 = (undefined8 **)ppuVar9[2];
          ppuVar9 = local_78;
        }
        else {
          if ((*(char *)((longlong)local_70 + 0x19) != '\0') && (puVar5 < ppuVar9[4])) {
            local_70 = ppuVar9;
          }
          ppuVar11 = (undefined8 **)*ppuVar9;
        }
        cVar3 = *(char *)((longlong)ppuVar11 + 0x19);
        local_78 = ppuVar9;
      }
      if (*(char *)((longlong)local_70 + 0x19) == '\0') {
        ppuVar13 = (undefined8 **)*local_70;
      }
      cVar3 = *(char *)((longlong)ppuVar13 + 0x19);
      while (cVar3 == '\0') {
        if (puVar5 < ppuVar13[4]) {
          ppuVar11 = (undefined8 **)*ppuVar13;
          local_70 = ppuVar13;
        }
        else {
          ppuVar11 = (undefined8 **)ppuVar13[2];
        }
        ppuVar13 = ppuVar11;
        cVar3 = *(char *)((longlong)ppuVar11 + 0x19);
      }
      FUN_18021d7f0(ppuVar13,&local_78);
      if ((puVar5 != (undefined8 *)0x0) &&
         (puVar5 = (undefined8 *)puVar5[2], puVar5 != (undefined8 *)0x0)) {
        ppuVar13 = (undefined8 **)DAT_1803fa7f0[1];
        cVar3 = *(char *)((longlong)ppuVar13 + 0x19);
        ppuVar11 = ppuVar13;
        local_70 = (undefined8 **)DAT_1803fa7f0;
        local_78 = (undefined8 **)DAT_1803fa7f0;
        while (ppuVar9 = ppuVar11, cVar3 == '\0') {
          if (ppuVar9[4] < puVar5) {
            ppuVar11 = (undefined8 **)ppuVar9[2];
            ppuVar9 = local_78;
          }
          else {
            if ((*(char *)((longlong)local_70 + 0x19) != '\0') && (puVar5 < ppuVar9[4])) {
              local_70 = ppuVar9;
            }
            ppuVar11 = (undefined8 **)*ppuVar9;
          }
          cVar3 = *(char *)((longlong)ppuVar11 + 0x19);
          local_78 = ppuVar9;
        }
        if (*(char *)((longlong)local_70 + 0x19) == '\0') {
          ppuVar13 = (undefined8 **)*local_70;
        }
        cVar3 = *(char *)((longlong)ppuVar13 + 0x19);
        while (cVar3 == '\0') {
          if (puVar5 < ppuVar13[4]) {
            ppuVar11 = (undefined8 **)*ppuVar13;
            local_70 = ppuVar13;
          }
          else {
            ppuVar11 = (undefined8 **)ppuVar13[2];
          }
          ppuVar13 = ppuVar11;
          cVar3 = *(char *)((longlong)ppuVar11 + 0x19);
        }
        FUN_18021d9b0(ppuVar13,&local_78);
      }
    }
  }
  if (param_1[1] == 0) {
    local_58 = 0;
  }
  else {
    local_58 = *(longlong *)(param_1[1] + 0x10);
    if (local_58 != 0) {
      uVar4 = (**(code **)*param_1)(param_1);
      uVar16 = (ulonglong)uVar4;
      (**(code **)(*param_1 + 0x30))(param_1);
      puVar5 = (undefined8 *)(*DAT_1803fa648)(param_1[1],0xffffffff);
      if (puVar5 == (undefined8 *)0x0) {
        lVar6 = param_1[1];
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar7 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar7,"lua_settop");
        }
        (*DAT_180425540)(lVar6,uVar16);
        cVar3 = (**(code **)(*param_1 + 0x268))(param_1);
        if (cVar3 == '\0') {
          cVar3 = (**(code **)(*param_1 + 600))(param_1);
          if (cVar3 != '\0') {
            FUN_180014410("[LUA] persist init failed for %s: index2adr returned null\n","server");
            return 0;
          }
          cVar3 = (**(code **)(*param_1 + 0x260))(param_1);
          pcVar15 = "client";
          if (cVar3 == '\0') {
            pcVar15 = "unknown";
          }
        }
        FUN_180014410("[LUA] persist init failed for %s: index2adr returned null\n",pcVar15);
        return 0;
      }
      uVar2 = *puVar5;
      if ((DAT_1803fa56c != '\0') && (lVar6 = FUN_180023290(), lVar6 != 0)) {
        puVar5 = (undefined8 *)FUN_18020cfa0();
        *puVar5 = uVar2;
        lVar6 = param_1[1];
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar7 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar7,"lua_settop");
        }
        (*DAT_180425540)(lVar6,uVar16);
        cVar3 = (**(code **)(*param_1 + 0x268))(param_1);
        if (cVar3 == '\0') {
          cVar3 = (**(code **)(*param_1 + 600))(param_1);
          if (cVar3 == '\0') {
            cVar3 = (**(code **)(*param_1 + 0x260))(param_1);
            pcVar15 = "client";
            if (cVar3 == '\0') {
              pcVar15 = "unknown";
            }
          }
          else {
            pcVar15 = "server";
          }
        }
        FUN_180014410("[LUA] persist cache initialized for %s (x64 gcroot tv=%llx)\n",pcVar15,uVar2)
        ;
        return 1;
      }
      if (DAT_1803fb0b0 == (FARPROC)0x0) {
        pHVar7 = GetModuleHandleA("lua_shared.dll");
        if (pHVar7 != (HMODULE)0x0) {
          DAT_1803fb0b0 = GetProcAddress(pHVar7,"luaL_ref");
          DAT_1803fb0a8 = GetProcAddress(pHVar7,"luaL_unref");
        }
        if (DAT_1803fb0b0 == (FARPROC)0x0) {
          lVar6 = param_1[1];
          if (DAT_180425540 == (FARPROC)0x0) {
            pHVar7 = GetModuleHandleA("lua_shared.dll");
            DAT_180425540 = GetProcAddress(pHVar7,"lua_settop");
          }
          (*DAT_180425540)(lVar6,uVar16);
          FUN_180014410("[LUA] persist init failed: no gc_mark_root hook and luaL_ref not found\n");
          return 0;
        }
      }
      uVar8 = (*DAT_1803fb0b0)(param_1[1],0xffffd8f0);
      puVar5 = DAT_1803fac68;
      if ((int)uVar8 < 1) {
        lVar6 = param_1[1];
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar7 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar7,"lua_settop");
        }
        (*DAT_180425540)(lVar6,uVar16);
        cVar3 = (**(code **)(*param_1 + 0x268))(param_1);
        if (cVar3 == '\0') {
          cVar3 = (**(code **)(*param_1 + 600))(param_1);
          if (cVar3 == '\0') {
            cVar3 = (**(code **)(*param_1 + 0x260))(param_1);
            pcVar15 = "client";
            if (cVar3 == '\0') {
              pcVar15 = "unknown";
            }
          }
          else {
            pcVar15 = "server";
          }
        }
        FUN_180014410("[LUA] persist init failed for %s: luaL_ref=%d\n",pcVar15,uVar8 & 0xffffffff);
        return 0;
      }
      ppuVar13 = (undefined8 **)DAT_1803fac68[1];
      uVar4 = 0;
      ppuVar11 = (undefined8 **)DAT_1803fac68;
      if (*(char *)((longlong)ppuVar13 + 0x19) == '\0') {
        ppuVar9 = ppuVar13;
        do {
          ppuVar13 = ppuVar9;
          if ((undefined8 *)param_1[1] <= ppuVar13[4]) {
            ppuVar9 = (undefined8 **)*ppuVar13;
            ppuVar11 = ppuVar13;
          }
          else {
            ppuVar9 = (undefined8 **)ppuVar13[2];
          }
          uVar4 = (uint)((undefined8 *)param_1[1] <= ppuVar13[4]);
        } while (*(char *)((longlong)ppuVar9 + 0x19) == '\0');
      }
      if ((*(char *)((longlong)ppuVar11 + 0x19) != '\0') || ((undefined8 *)param_1[1] < ppuVar11[4])
         ) {
        if (DAT_1803fac70 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
          FUN_180013b80();
        }
        local_78 = &DAT_1803fac68;
        local_70 = (undefined8 **)0x0;
        puVar10 = (undefined8 *)FUN_1802d8350(0x30);
        puVar10[4] = param_1[1];
        *(undefined4 *)(puVar10 + 5) = 0;
        *puVar10 = puVar5;
        puVar10[1] = puVar5;
        puVar10[2] = puVar5;
        *(undefined2 *)(puVar10 + 3) = 0;
        local_70 = (undefined8 **)(ulonglong)uVar4;
        local_78 = ppuVar13;
        ppuVar11 = (undefined8 **)FUN_18022bb90(&DAT_1803fac68,&local_78,puVar10);
      }
      *(int *)(ppuVar11 + 5) = (int)uVar8;
      puVar5 = (undefined8 *)FUN_18020cfa0(ppuVar11,&local_58);
      *puVar5 = uVar2;
      cVar3 = (**(code **)(*param_1 + 0x268))(param_1);
      if (cVar3 == '\0') {
        cVar3 = (**(code **)(*param_1 + 600))(param_1);
        if (cVar3 == '\0') {
          cVar3 = (**(code **)(*param_1 + 0x260))(param_1);
          pcVar15 = "client";
          if (cVar3 == '\0') {
            pcVar15 = "unknown";
          }
        }
        else {
          pcVar15 = "server";
        }
      }
      FUN_180014410("[LUA] persist cache initialized for %s (x64 registry ref=%d tv=%llx)\n",pcVar15
                    ,uVar8 & 0xffffffff,uVar2);
      return 1;
    }
  }
  cVar3 = (*(code *)((undefined8 *)*param_1)[0x4d])(param_1);
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*param_1 + 600))(param_1);
    if (cVar3 != '\0') {
      FUN_180014410("[LUA] persist init failed: glref null for %s\n","server");
      return 0;
    }
    cVar3 = (**(code **)(*param_1 + 0x260))(param_1);
    pcVar15 = "client";
    if (cVar3 == '\0') {
      pcVar15 = "unknown";
    }
  }
  FUN_180014410("[LUA] persist init failed: glref null for %s\n",pcVar15);
  return 0;
}


)B180023720",
    "ba34fc6654f58bd0aba52f412dfc7fb65cde38bea7f1811f34842fa3cd71c435",
    R"F180023720C(FUN_180013b80
FUN_180014410
FUN_180023290
FUN_1800234d0
FUN_18020cfa0
FUN_18021d7f0
FUN_18021d9b0
FUN_18022bb90
FUN_1802d8350)F180023720C",
    R"F180023720D(DAT_1803da4c0
DAT_1803fa56c
DAT_1803fa648
DAT_1803fa7f0
DAT_1803fac68
DAT_1803fac70
DAT_1803fb0a8
DAT_1803fb0b0
DAT_180425540)F180023720D",
    R"F180023720T("menu"
"client"
"server"
"unknown"
"luaL_ref"
"luaL_unref"
"lua_settop"
"lua_shared.dll"
"[LUA] persist init failed: glref null for %s\\n"
"[LUA] persist init failed for %s: luaL_ref=%d\\n"
"[LUA] persist init skipped: lua=%p index2adr=%p\\n"
"[LUA] dropping stale persist entry for %s (tv=%llx)\\n"
"[LUA] persist init failed for %s: index2adr returned null\\n"
"[LUA] persist cache initialized for %s (x64 gcroot tv=%llx)\\n"
"[LUA] persist cache initialized for %s (x64 registry ref=%d tv=%llx)\\n"
"[LUA] persist init failed: no gc_mark_root hook and luaL_ref not found\\n")F180023720T",
    R"F180023720F(35: if ((param_1 == (longlong *)0x0) || (DAT_1803fa648 == (code *)0x0)) {
37: return 0;
40: if ((param_1[1] != 0) && (uVar16 = *(ulonglong *)(param_1[1] + 0x10), uVar16 != 0)) {
44: while (puVar12 = puVar5, cVar3 == '\0') {
45: if ((ulonglong)puVar12[4] < uVar16) {
49: else {
55: if ((*(char *)((longlong)puVar10 + 0x19) != '\0') || (uVar16 < (ulonglong)puVar10[4])) {
58: if ((puVar10 != DAT_1803fa7f0) && (puVar1 = puVar10 + 5, puVar1 != (ulonglong *)0x0)) {
60: if (cVar3 != '\0') {
61: return 1;
65: if (cVar3 == '\0') {
67: if (cVar3 == '\0') {
70: if (cVar3 == '\0') {
74: else {
78: else {
88: while (ppuVar9 = ppuVar11, cVar3 == '\0') {
89: if (ppuVar9[4] < puVar5) {
93: else {
94: if ((*(char *)((longlong)local_70 + 0x19) != '\0') && (puVar5 < ppuVar9[4])) {
102: if (*(char *)((longlong)local_70 + 0x19) == '\0') {
106: while (cVar3 == '\0') {
107: if (puVar5 < ppuVar13[4]) {
111: else {
118: if ((puVar5 != (undefined8 *)0x0) &&
125: while (ppuVar9 = ppuVar11, cVar3 == '\0') {
126: if (ppuVar9[4] < puVar5) {
130: else {
131: if ((*(char *)((longlong)local_70 + 0x19) != '\0') && (puVar5 < ppuVar9[4])) {
139: if (*(char *)((longlong)local_70 + 0x19) == '\0') {
143: while (cVar3 == '\0') {
144: if (puVar5 < ppuVar13[4]) {
148: else {
158: if (param_1[1] == 0) {
161: else {
163: if (local_58 != 0) {
168: if (puVar5 == (undefined8 *)0x0) {
170: if (DAT_180425540 == (FARPROC)0x0) {
176: if (cVar3 == '\0') {
178: if (cVar3 != '\0') {
180: return 0;
184: if (cVar3 == '\0') {
189: return 0;
192: if ((DAT_1803fa56c != '\0') && (lVar6 = FUN_180023290(), lVar6 != 0)) {
196: if (DAT_180425540 == (FARPROC)0x0) {
202: if (cVar3 == '\0') {
204: if (cVar3 == '\0') {
207: if (cVar3 == '\0') {
211: else {
217: return 1;
219: if (DAT_1803fb0b0 == (FARPROC)0x0) {
221: if (pHVar7 != (HMODULE)0x0) {
225: if (DAT_1803fb0b0 == (FARPROC)0x0) {
227: if (DAT_180425540 == (FARPROC)0x0) {
233: return 0;
238: if ((int)uVar8 < 1) {
240: if (DAT_180425540 == (FARPROC)0x0) {
246: if (cVar3 == '\0') {
248: if (cVar3 == '\0') {
251: if (cVar3 == '\0') {
255: else {
260: return 0;
265: if (*(char *)((longlong)ppuVar13 + 0x19) == '\0') {
267: do {
269: if ((undefined8 *)param_1[1] <= ppuVar13[4]) {
273: else {
279: if ((*(char *)((longlong)ppuVar11 + 0x19) != '\0') || ((undefined8 *)param_1[1] < ppuVar11[4])
281: if (DAT_1803fac70 == 0x555555555555555) {
302: if (cVar3 == '\0') {
304: if (cVar3 == '\0') {
307: if (cVar3 == '\0') {
311: else {
317: return 1;
321: if (cVar3 == '\0') {
323: if (cVar3 != '\0') {
325: return 0;
329: if (cVar3 == '\0') {
334: return 0;)F180023720F",
    R"F180023720U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa56c.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa648.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa7f0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac68.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac70.
TODO: recover the declaration, type and value for global/data reference DAT_1803fb0a8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fb0b0.
TODO: recover the declaration, type and value for global/data reference DAT_180425540.
TODO: resolve the indirect call in body 35: if ((param_1 == (longlong *)0x0) || (DAT_1803fa648 == (code *)0x0)) {.
TODO: resolve the indirect call in body 64: cVar3 = (**(code **)(*param_1 + 0x268))(param_1);.
TODO: resolve the indirect call in body 66: cVar3 = (**(code **)(*param_1 + 600))(param_1);.
TODO: resolve the indirect call in body 68: cVar3 = (**(code **)(*param_1 + 0x260))(param_1);.
TODO: resolve the indirect call in body 164: uVar4 = (**(code **)*param_1)(param_1);.
TODO: resolve the indirect call in body 166: (**(code **)(*param_1 + 0x30))(param_1);.
TODO: resolve the indirect call in body 167: puVar5 = (undefined8 *)(*DAT_1803fa648)(param_1[1],0xffffffff);.
TODO: resolve the indirect call in body 174: (*DAT_180425540)(lVar6,uVar16);.
TODO: resolve the indirect call in body 175: cVar3 = (**(code **)(*param_1 + 0x268))(param_1);.
TODO: resolve the indirect call in body 177: cVar3 = (**(code **)(*param_1 + 600))(param_1);.
TODO: resolve the indirect call in body 182: cVar3 = (**(code **)(*param_1 + 0x260))(param_1);.
TODO: resolve the indirect call in body 200: (*DAT_180425540)(lVar6,uVar16);.
TODO: resolve the indirect call in body 201: cVar3 = (**(code **)(*param_1 + 0x268))(param_1);.
TODO: resolve the indirect call in body 203: cVar3 = (**(code **)(*param_1 + 600))(param_1);.
TODO: resolve the indirect call in body 205: cVar3 = (**(code **)(*param_1 + 0x260))(param_1);.
TODO: resolve the indirect call in body 231: (*DAT_180425540)(lVar6,uVar16);.
TODO: resolve the indirect call in body 236: uVar8 = (*DAT_1803fb0b0)(param_1[1],0xffffd8f0);.
TODO: resolve the indirect call in body 244: (*DAT_180425540)(lVar6,uVar16);.
TODO: resolve the indirect call in body 245: cVar3 = (**(code **)(*param_1 + 0x268))(param_1);.
TODO: resolve the indirect call in body 247: cVar3 = (**(code **)(*param_1 + 600))(param_1);.
TODO: resolve the indirect call in body 249: cVar3 = (**(code **)(*param_1 + 0x260))(param_1);.
TODO: resolve the indirect call in body 301: cVar3 = (**(code **)(*param_1 + 0x268))(param_1);.
TODO: resolve the indirect call in body 303: cVar3 = (**(code **)(*param_1 + 600))(param_1);.
TODO: resolve the indirect call in body 305: cVar3 = (**(code **)(*param_1 + 0x260))(param_1);.
TODO: resolve the indirect call in body 320: cVar3 = (*(code *)((undefined8 *)*param_1)[0x4d])(param_1);.
TODO: resolve the indirect call in body 322: cVar3 = (**(code **)(*param_1 + 600))(param_1);.
TODO: resolve the indirect call in body 327: cVar3 = (**(code **)(*param_1 + 0x260))(param_1);.)F180023720U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180023720() noexcept {
    return kFunction_0x180023720;
}

// 0x180023e60 FUN_180023e60
// source: re/dump/decompile/0x180023e60_FUN_180023e60.c
// size: 351 bytes; thunk: false
// body sha256: 2ed39261c201754e945a1fc99e34b32b9d14c9cecb0d82307773229bfa2b3279
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180023e60{
    "0x180023e60",
    "FUN_180023e60",
    R"F180023e60S(undefined FUN_180023e60())F180023e60S",
    R"B180023e60(// 0x180023e60  FUN_180023e60
// size=351 thunk=false
// signature: undefined FUN_180023e60()
// status: ok


void FUN_180023e60(longlong *param_1,int param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_2 == -0x2714) {
    if ((param_1[1] != 0) && (uVar2 = *(ulonglong *)(param_1[1] + 0x10), uVar2 != 0)) {
      plVar3 = (longlong *)DAT_1803fa7f0[1];
      cVar1 = *(char *)((longlong)plVar3 + 0x19);
      plVar5 = DAT_1803fa7f0;
      while (cVar1 == '\0') {
        plVar4 = plVar3;
        if ((ulonglong)plVar3[4] < uVar2) {
          plVar3 = plVar3 + 2;
          plVar4 = plVar5;
        }
        plVar3 = (longlong *)*plVar3;
        plVar5 = plVar4;
        cVar1 = *(char *)((longlong)plVar3 + 0x19);
      }
      if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (uVar2 < (ulonglong)plVar5[4])) {
        plVar5 = DAT_1803fa7f0;
      }
      lVar6 = *param_1;
      if ((plVar5 != DAT_1803fa7f0) && (plVar5 != (longlong *)0xffffffffffffffd8)) {
        (**(code **)(lVar6 + 8))(param_1,0xffffd8ed);
        (**(code **)(*param_1 + 0x20))(param_1,0xffffffff,"SCRIPTENV");
                    /* WARNING: Could not recover jumptable at 0x000180023fa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x78))(param_1,0xfffffffe);
        return;
      }
      goto LAB_180023fb0;
    }
  }
  else {
    if (param_2 != -0x2713) {
                    /* WARNING: Could not recover jumptable at 0x000180023e85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x130))();
      return;
    }
    if ((param_1[1] != 0) && (uVar2 = *(ulonglong *)(param_1[1] + 0x10), uVar2 != 0)) {
      plVar3 = (longlong *)DAT_1803fa7f0[1];
      cVar1 = *(char *)((longlong)plVar3 + 0x19);
      plVar5 = DAT_1803fa7f0;
      while (cVar1 == '\0') {
        plVar4 = plVar3;
        if ((ulonglong)plVar3[4] < uVar2) {
          plVar3 = plVar3 + 2;
          plVar4 = plVar5;
        }
        plVar3 = (longlong *)*plVar3;
        plVar5 = plVar4;
        cVar1 = *(char *)((longlong)plVar3 + 0x19);
      }
      if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (uVar2 < (ulonglong)plVar5[4])) {
        plVar5 = DAT_1803fa7f0;
      }
      lVar6 = *param_1;
      if ((plVar5 != DAT_1803fa7f0) && (plVar5 != (longlong *)0xffffffffffffffd8)) {
                    /* WARNING: Could not recover jumptable at 0x000180023f0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 8))(param_1,0xffffd8ed);
        return;
      }
      goto LAB_180023fb0;
    }
  }
  lVar6 = *param_1;
LAB_180023fb0:
                    /* WARNING: Could not recover jumptable at 0x000180023fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0xe0))(param_1);
  return;
}


)B180023e60",
    "2ed39261c201754e945a1fc99e34b32b9d14c9cecb0d82307773229bfa2b3279",
    R"F180023e60C()F180023e60C",
    R"F180023e60D(LAB_180023fb0
DAT_1803fa7f0)F180023e60D",
    R"F180023e60T("SCRIPTENV")F180023e60T",
    R"F180023e60F(17: if (param_2 == -0x2714) {
18: if ((param_1[1] != 0) && (uVar2 = *(ulonglong *)(param_1[1] + 0x10), uVar2 != 0)) {
22: while (cVar1 == '\0') {
24: if ((ulonglong)plVar3[4] < uVar2) {
32: if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (uVar2 < (ulonglong)plVar5[4])) {
36: if ((plVar5 != DAT_1803fa7f0) && (plVar5 != (longlong *)0xffffffffffffffd8)) {
42: return;
44: goto LAB_180023fb0;
47: else {
48: if (param_2 != -0x2713) {
52: return;
54: if ((param_1[1] != 0) && (uVar2 = *(ulonglong *)(param_1[1] + 0x10), uVar2 != 0)) {
58: while (cVar1 == '\0') {
60: if ((ulonglong)plVar3[4] < uVar2) {
68: if ((*(char *)((longlong)plVar5 + 0x19) != '\0') || (uVar2 < (ulonglong)plVar5[4])) {
72: if ((plVar5 != DAT_1803fa7f0) && (plVar5 != (longlong *)0xffffffffffffffd8)) {
76: return;
78: goto LAB_180023fb0;
82: LAB_180023fb0:
86: return;)F180023e60F",
    R"F180023e60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180023fb0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa7f0.
TODO: resolve the indirect call in body 37: (**(code **)(lVar6 + 8))(param_1,0xffffd8ed);.
TODO: resolve the indirect call in body 38: (**(code **)(*param_1 + 0x20))(param_1,0xffffffff,"SCRIPTENV");.
TODO: resolve the indirect call in body 41: (**(code **)(*param_1 + 0x78))(param_1,0xfffffffe);.
TODO: resolve the indirect call in body 51: (**(code **)(*param_1 + 0x130))();.
TODO: resolve the indirect call in body 75: (**(code **)(lVar6 + 8))(param_1,0xffffd8ed);.
TODO: resolve the indirect call in body 85: (**(code **)(lVar6 + 0xe0))(param_1);.)F180023e60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180023e60() noexcept {
    return kFunction_0x180023e60;
}

// 0x180023fc0 FUN_180023fc0
// source: re/dump/decompile/0x180023fc0_FUN_180023fc0.c
// size: 298 bytes; thunk: false
// body sha256: f7f8b70f24618c191d5decd819c877d4f9e037270adca29d539854cde4b689df
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180023fc0{
    "0x180023fc0",
    "FUN_180023fc0",
    R"F180023fc0S(undefined FUN_180023fc0())F180023fc0S",
    R"B180023fc0(// 0x180023fc0  FUN_180023fc0
// size=298 thunk=false
// signature: undefined FUN_180023fc0()
// status: ok


void FUN_180023fc0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  HMODULE hModule;
  longlong *plVar8;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  iVar4 = (**(code **)*param_1)();
  lVar2 = param_1[1];
  if ((lVar2 != 0) && (uVar3 = *(ulonglong *)(lVar2 + 0x10), uVar3 != 0)) {
    cVar1 = *(char *)(DAT_1803fa7f0[1] + 0x19);
    plVar8 = (longlong *)DAT_1803fa7f0[1];
    plVar7 = DAT_1803fa7f0;
    while (plVar6 = plVar8, cVar1 == '\0') {
      plVar8 = plVar6;
      if ((ulonglong)plVar6[4] < uVar3) {
        plVar8 = plVar6 + 2;
        plVar6 = plVar7;
      }
      cVar1 = *(char *)(*plVar8 + 0x19);
      plVar8 = (longlong *)*plVar8;
      plVar7 = plVar6;
    }
    if ((*(char *)((longlong)plVar7 + 0x19) != '\0') || (uVar3 < (ulonglong)plVar7[4])) {
      plVar7 = DAT_1803fa7f0;
    }
    if ((plVar7 != DAT_1803fa7f0) && (plVar7 != (longlong *)0xffffffffffffffd8)) {
      if (DAT_180423ad0 == (FARPROC)0x0) {
        hModule = GetModuleHandleA("lua_shared.dll");
        DAT_180423ad0 = GetProcAddress(hModule,"lua_pushvalue");
      }
      (*DAT_180423ad0)(lVar2,0xffffd8ed);
      (**(code **)(*param_1 + 8))(param_1,iVar4);
      (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"COPYCACHE");
      (**(code **)(*param_1 + 0x10))(param_1,1);
      goto LAB_1800240cf;
    }
  }
  FUN_180014410("[LUA] persist object \'%s\' skipped: cache is not ready\n","COPYCACHE");
  if (iVar4 < 1) {
    return;
  }
  iVar5 = (**(code **)*param_1)(param_1);
  if (iVar5 < iVar4) {
    return;
  }
LAB_1800240cf:
  (**(code **)(*param_1 + 0x78))(param_1,iVar4);
  return;
}


)B180023fc0",
    "f7f8b70f24618c191d5decd819c877d4f9e037270adca29d539854cde4b689df",
    R"F180023fc0C(FUN_180014410)F180023fc0C",
    R"F180023fc0D(LAB_1800240cf
DAT_1803fa7f0
DAT_180423ad0)F180023fc0D",
    R"F180023fc0T("COPYCACHE"
"lua_pushvalue"
"lua_shared.dll"
"[LUA] persist object \\'%s\\' skipped: cache is not ready\\n")F180023fc0T",
    R"F180023fc0F(20: if (param_1 == (longlong *)0x0) {
21: return;
25: if ((lVar2 != 0) && (uVar3 = *(ulonglong *)(lVar2 + 0x10), uVar3 != 0)) {
29: while (plVar6 = plVar8, cVar1 == '\0') {
31: if ((ulonglong)plVar6[4] < uVar3) {
39: if ((*(char *)((longlong)plVar7 + 0x19) != '\0') || (uVar3 < (ulonglong)plVar7[4])) {
42: if ((plVar7 != DAT_1803fa7f0) && (plVar7 != (longlong *)0xffffffffffffffd8)) {
43: if (DAT_180423ad0 == (FARPROC)0x0) {
51: goto LAB_1800240cf;
55: if (iVar4 < 1) {
56: return;
59: if (iVar5 < iVar4) {
60: return;
62: LAB_1800240cf:
64: return;)F180023fc0F",
    R"F180023fc0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1800240cf.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa7f0.
TODO: recover the declaration, type and value for global/data reference DAT_180423ad0.
TODO: resolve the indirect call in body 23: iVar4 = (**(code **)*param_1)();.
TODO: resolve the indirect call in body 47: (*DAT_180423ad0)(lVar2,0xffffd8ed);.
TODO: resolve the indirect call in body 48: (**(code **)(*param_1 + 8))(param_1,iVar4);.
TODO: resolve the indirect call in body 49: (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"COPYCACHE");.
TODO: resolve the indirect call in body 50: (**(code **)(*param_1 + 0x10))(param_1,1);.
TODO: resolve the indirect call in body 58: iVar5 = (**(code **)*param_1)(param_1);.
TODO: resolve the indirect call in body 63: (**(code **)(*param_1 + 0x78))(param_1,iVar4);.)F180023fc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180023fc0() noexcept {
    return kFunction_0x180023fc0;
}

// 0x1800240f0 FUN_1800240f0
// source: re/dump/decompile/0x1800240f0_FUN_1800240f0.c
// size: 346 bytes; thunk: false
// body sha256: cf0ecbc3f1442001a3e63b7459b3523ab03f753ec0ab9413bc2baf8a45c59d1c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800240f0{
    "0x1800240f0",
    "FUN_1800240f0",
    R"F1800240f0S(undefined FUN_1800240f0())F1800240f0S",
    R"B1800240f0(// 0x1800240f0  FUN_1800240f0
// size=346 thunk=false
// signature: undefined FUN_1800240f0()
// status: ok


void FUN_1800240f0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  HMODULE hModule;
  INT_PTR IVar7;
  undefined8 uVar8;
  uint uVar9;
  
  if (param_1 != (longlong *)0x0) {
    uVar9 = param_2;
    if ((int)param_2 < 1) {
      iVar5 = (**(code **)*param_1)();
      uVar9 = param_2 + 1 + iVar5;
    }
    lVar1 = param_1[1];
    if (DAT_1803fe490 == (FARPROC)0x0) {
      hModule = GetModuleHandleA("lua_shared.dll");
      DAT_1803fe490 = GetProcAddress(hModule,"lua_type");
    }
    lVar2 = *param_1;
    IVar7 = (*DAT_1803fe490)(lVar1,(ulonglong)param_2);
    iVar5 = (int)IVar7;
    if (iVar5 == 0) {
      (**(code **)(lVar2 + 0xe0))(param_1);
    }
    else if (iVar5 == 1) {
      uVar4 = (**(code **)(lVar2 + 200))(param_1,param_2);
      (**(code **)(lVar2 + 0xf8))(param_1,uVar4);
    }
    else if (iVar5 == 3) {
      uVar6 = (**(code **)(lVar2 + 0xc0))(param_1,param_2);
      (**(code **)(lVar2 + 0xf0))(param_1,uVar6);
    }
    else if (iVar5 == 4) {
      uVar6 = (**(code **)(lVar2 + 0x168))(param_1,param_2);
      uVar8 = (**(code **)(*param_1 + 0xb8))(param_1,param_2,0);
      (**(code **)(lVar2 + 0xe8))(param_1,uVar8,uVar6);
    }
    else if (iVar5 == 5) {
      (**(code **)(lVar2 + 0x30))();
      (**(code **)(*param_1 + 8))(param_1,uVar9);
      cVar3 = FUN_180024400(param_1);
      if (cVar3 == '\0') {
        FUN_180014410("FAILED COPY\n");
      }
    }
    else {
      (**(code **)(lVar2 + 8))(param_1,uVar9);
    }
    (**(code **)(*param_1 + 0x78))(param_1,uVar9);
  }
  return;
}


)B1800240f0",
    "cf0ecbc3f1442001a3e63b7459b3523ab03f753ec0ab9413bc2baf8a45c59d1c",
    R"F1800240f0C(FUN_180014410
FUN_180024400)F1800240f0C",
    R"F1800240f0D(DAT_1803fe490)F1800240f0D",
    R"F1800240f0T("lua_type"
"FAILED COPY\\n"
"lua_shared.dll")F1800240f0T",
    R"F1800240f0F(21: if (param_1 != (longlong *)0x0) {
23: if ((int)param_2 < 1) {
28: if (DAT_1803fe490 == (FARPROC)0x0) {
35: if (iVar5 == 0) {
38: else if (iVar5 == 1) {
42: else if (iVar5 == 3) {
46: else if (iVar5 == 4) {
51: else if (iVar5 == 5) {
55: if (cVar3 == '\0') {
59: else {
64: return;)F1800240f0F",
    R"F1800240f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fe490.
TODO: resolve the indirect call in body 24: iVar5 = (**(code **)*param_1)();.
TODO: resolve the indirect call in body 33: IVar7 = (*DAT_1803fe490)(lVar1,(ulonglong)param_2);.
TODO: resolve the indirect call in body 36: (**(code **)(lVar2 + 0xe0))(param_1);.
TODO: resolve the indirect call in body 39: uVar4 = (**(code **)(lVar2 + 200))(param_1,param_2);.
TODO: resolve the indirect call in body 40: (**(code **)(lVar2 + 0xf8))(param_1,uVar4);.
TODO: resolve the indirect call in body 43: uVar6 = (**(code **)(lVar2 + 0xc0))(param_1,param_2);.
TODO: resolve the indirect call in body 44: (**(code **)(lVar2 + 0xf0))(param_1,uVar6);.
TODO: resolve the indirect call in body 47: uVar6 = (**(code **)(lVar2 + 0x168))(param_1,param_2);.
TODO: resolve the indirect call in body 48: uVar8 = (**(code **)(*param_1 + 0xb8))(param_1,param_2,0);.
TODO: resolve the indirect call in body 49: (**(code **)(lVar2 + 0xe8))(param_1,uVar8,uVar6);.
TODO: resolve the indirect call in body 52: (**(code **)(lVar2 + 0x30))();.
TODO: resolve the indirect call in body 53: (**(code **)(*param_1 + 8))(param_1,uVar9);.
TODO: resolve the indirect call in body 60: (**(code **)(lVar2 + 8))(param_1,uVar9);.
TODO: resolve the indirect call in body 62: (**(code **)(*param_1 + 0x78))(param_1,uVar9);.)F1800240f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800240f0() noexcept {
    return kFunction_0x1800240f0;
}

// 0x180024250 FUN_180024250
// source: re/dump/decompile/0x180024250_FUN_180024250.c
// size: 120 bytes; thunk: false
// body sha256: 78c0761809281d1a06efb1d4f0469591d9ef3ec198ec600c028fd535b01ad569
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180024250{
    "0x180024250",
    "FUN_180024250",
    R"F180024250S(undefined FUN_180024250())F180024250S",
    R"B180024250(// 0x180024250  FUN_180024250
// size=120 thunk=false
// signature: undefined FUN_180024250()
// status: ok


void FUN_180024250(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_180023e60(param_1,0xffffd8ed);
  (**(code **)(*param_1 + 0x20))(param_1,0xffffffff,"COPYCACHE");
  (**(code **)(*param_1 + 8))(param_1,param_2);
  (**(code **)(*param_1 + 8))(param_1,param_3);
  (**(code **)(*param_1 + 0x38))(param_1,0xfffffffd);
                    /* WARNING: Could not recover jumptable at 0x0001800242c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,2);
  return;
}


)B180024250",
    "78c0761809281d1a06efb1d4f0469591d9ef3ec198ec600c028fd535b01ad569",
    R"F180024250C(FUN_180023e60)F180024250C",
    R"F180024250D()F180024250D",
    R"F180024250T("COPYCACHE")F180024250T",
    R"F180024250F(18: return;)F180024250F",
    R"F180024250U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 11: (**(code **)(*param_1 + 0x20))(param_1,0xffffffff,"COPYCACHE");.
TODO: resolve the indirect call in body 12: (**(code **)(*param_1 + 8))(param_1,param_2);.
TODO: resolve the indirect call in body 13: (**(code **)(*param_1 + 8))(param_1,param_3);.
TODO: resolve the indirect call in body 14: (**(code **)(*param_1 + 0x38))(param_1,0xfffffffd);.
TODO: resolve the indirect call in body 17: (**(code **)(*param_1 + 0x10))(param_1,2);.)F180024250U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180024250() noexcept {
    return kFunction_0x180024250;
}

// 0x1800242d0 FUN_1800242d0
// source: re/dump/decompile/0x1800242d0_FUN_1800242d0.c
// size: 295 bytes; thunk: false
// body sha256: f458e7a6b6e29222f0bc253523ff258d1a225ee063b2fd5ec878c5cb7fbda7a5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800242d0{
    "0x1800242d0",
    "FUN_1800242d0",
    R"F1800242d0S(undefined FUN_1800242d0())F1800242d0S",
    R"B1800242d0(// 0x1800242d0  FUN_1800242d0
// size=295 thunk=false
// signature: undefined FUN_1800242d0()
// status: ok


void FUN_1800242d0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)*param_1)();
  iVar1 = iVar1 + -1;
  FUN_180023e60(param_1,0xffffd8ed);
  (**(code **)(*param_1 + 0x20))(param_1,0xffffffff,"COPYCACHE");
  (**(code **)(*param_1 + 8))(param_1,iVar1);
  (**(code **)(*param_1 + 0x18))(param_1,0xfffffffe);
  iVar2 = (**(code **)(*param_1 + 0x140))(param_1,0xffffffff);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x78))(param_1,0xfffffffe);
                    /* WARNING: Could not recover jumptable at 0x000180024359. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x78))(param_1,0xfffffffe);
    return;
  }
  (**(code **)(*param_1 + 0x10))(param_1,3);
  (**(code **)(*param_1 + 8))(param_1,iVar1);
  FUN_1800240f0(param_1,0xffffffff,1);
  uVar3 = (**(code **)*param_1)(param_1);
  FUN_180023e60(param_1,0xffffd8ed);
  (**(code **)(*param_1 + 0x20))(param_1,0xffffffff,"COPYCACHE");
  (**(code **)(*param_1 + 8))(param_1,iVar1);
  (**(code **)(*param_1 + 8))(param_1,uVar3);
  (**(code **)(*param_1 + 0x38))(param_1,0xfffffffd);
                    /* WARNING: Could not recover jumptable at 0x0001800243f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,2);
  return;
}


)B1800242d0",
    "f458e7a6b6e29222f0bc253523ff258d1a225ee063b2fd5ec878c5cb7fbda7a5",
    R"F1800242d0C(FUN_180023e60
FUN_1800240f0)F1800242d0C",
    R"F1800242d0D()F1800242d0D",
    R"F1800242d0T("COPYCACHE")F1800242d0T",
    R"F1800242d0F(21: if (iVar2 != 0) {
26: return;
40: return;)F1800242d0F",
    R"F1800242d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 14: iVar1 = (**(code **)*param_1)();.
TODO: resolve the indirect call in body 17: (**(code **)(*param_1 + 0x20))(param_1,0xffffffff,"COPYCACHE");.
TODO: resolve the indirect call in body 18: (**(code **)(*param_1 + 8))(param_1,iVar1);.
TODO: resolve the indirect call in body 19: (**(code **)(*param_1 + 0x18))(param_1,0xfffffffe);.
TODO: resolve the indirect call in body 20: iVar2 = (**(code **)(*param_1 + 0x140))(param_1,0xffffffff);.
TODO: resolve the indirect call in body 22: (**(code **)(*param_1 + 0x78))(param_1,0xfffffffe);.
TODO: resolve the indirect call in body 25: (**(code **)(*param_1 + 0x78))(param_1,0xfffffffe);.
TODO: resolve the indirect call in body 28: (**(code **)(*param_1 + 0x10))(param_1,3);.
TODO: resolve the indirect call in body 29: (**(code **)(*param_1 + 8))(param_1,iVar1);.
TODO: resolve the indirect call in body 31: uVar3 = (**(code **)*param_1)(param_1);.
TODO: resolve the indirect call in body 33: (**(code **)(*param_1 + 0x20))(param_1,0xffffffff,"COPYCACHE");.
TODO: resolve the indirect call in body 34: (**(code **)(*param_1 + 8))(param_1,iVar1);.
TODO: resolve the indirect call in body 35: (**(code **)(*param_1 + 8))(param_1,uVar3);.
TODO: resolve the indirect call in body 36: (**(code **)(*param_1 + 0x38))(param_1,0xfffffffd);.
TODO: resolve the indirect call in body 39: (**(code **)(*param_1 + 0x10))(param_1,2);.)F1800242d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800242d0() noexcept {
    return kFunction_0x1800242d0;
}

// 0x180024400 FUN_180024400
// source: re/dump/decompile/0x180024400_FUN_180024400.c
// size: 315 bytes; thunk: false
// body sha256: 83763e198b049bb8f9ff58adae51ea46e1507caa87fe5b088e7f77556cfabf32
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180024400{
    "0x180024400",
    "FUN_180024400",
    R"F180024400S(undefined FUN_180024400())F180024400S",
    R"B180024400(// 0x180024400  FUN_180024400
// size=315 thunk=false
// signature: undefined FUN_180024400()
// status: ok


undefined8 FUN_180024400(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (**(code **)*param_1)();
  iVar2 = (**(code **)*param_1)(param_1);
  iVar3 = (**(code **)(*param_1 + 0x140))(param_1,uVar1);
  if (iVar3 == 5) {
    iVar2 = iVar2 + -1;
    iVar3 = (**(code **)(*param_1 + 0x140))(param_1,iVar2);
    if (iVar3 == 5) {
      if (param_3 == '\0') {
        FUN_180014410("create cache\n");
        (**(code **)(*param_1 + 0x30))(param_1);
        FUN_180023fc0(param_1);
      }
      FUN_180024250(param_1,uVar1,iVar2);
      (**(code **)(*param_1 + 0xe0))(param_1);
      iVar3 = (**(code **)(*param_1 + 0x80))(param_1,uVar1);
      while (iVar3 != 0) {
        FUN_1800242d0(param_1);
        FUN_1800242d0(param_1);
        (**(code **)(*param_1 + 0x38))(param_1,iVar2);
        (**(code **)(*param_1 + 0x10))(param_1,1);
        iVar3 = (**(code **)(*param_1 + 0x80))(param_1,uVar1);
      }
      (**(code **)(*param_1 + 0x10))(param_1,1);
      if (param_3 == '\0') {
        FUN_180014410("remove cache\n");
        (**(code **)(*param_1 + 0xe0))(param_1);
        FUN_180023fc0(param_1);
      }
      return 1;
    }
  }
  return 0;
}


)B180024400",
    "83763e198b049bb8f9ff58adae51ea46e1507caa87fe5b088e7f77556cfabf32",
    R"F180024400C(FUN_180014410
FUN_180023fc0
FUN_180024250
FUN_1800242d0)F180024400C",
    R"F180024400D()F180024400D",
    R"F180024400T("create cache\\n"
"remove cache\\n")F180024400T",
    R"F180024400F(17: if (iVar3 == 5) {
20: if (iVar3 == 5) {
21: if (param_3 == '\0') {
29: while (iVar3 != 0) {
37: if (param_3 == '\0') {
42: return 1;
45: return 0;)F180024400F",
    R"F180024400U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 14: uVar1 = (**(code **)*param_1)();.
TODO: resolve the indirect call in body 15: iVar2 = (**(code **)*param_1)(param_1);.
TODO: resolve the indirect call in body 16: iVar3 = (**(code **)(*param_1 + 0x140))(param_1,uVar1);.
TODO: resolve the indirect call in body 19: iVar3 = (**(code **)(*param_1 + 0x140))(param_1,iVar2);.
TODO: resolve the indirect call in body 23: (**(code **)(*param_1 + 0x30))(param_1);.
TODO: resolve the indirect call in body 27: (**(code **)(*param_1 + 0xe0))(param_1);.
TODO: resolve the indirect call in body 28: iVar3 = (**(code **)(*param_1 + 0x80))(param_1,uVar1);.
TODO: resolve the indirect call in body 32: (**(code **)(*param_1 + 0x38))(param_1,iVar2);.
TODO: resolve the indirect call in body 33: (**(code **)(*param_1 + 0x10))(param_1,1);.
TODO: resolve the indirect call in body 34: iVar3 = (**(code **)(*param_1 + 0x80))(param_1,uVar1);.
TODO: resolve the indirect call in body 36: (**(code **)(*param_1 + 0x10))(param_1,1);.
TODO: resolve the indirect call in body 39: (**(code **)(*param_1 + 0xe0))(param_1);.)F180024400U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180024400() noexcept {
    return kFunction_0x180024400;
}

// 0x180024540 FUN_180024540
// source: re/dump/decompile/0x180024540_FUN_180024540.c
// size: 170 bytes; thunk: false
// body sha256: 8fb472cc51cd427f6ee271ac79df4f6f3392114ea57e85adb60c2f74597c3fda
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180024540{
    "0x180024540",
    "FUN_180024540",
    R"F180024540S(undefined FUN_180024540())F180024540S",
    R"B180024540(// 0x180024540  FUN_180024540
// size=170 thunk=false
// signature: undefined FUN_180024540()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180024540(void)

{
  char cVar1;
  BOOL BVar2;
  HWND pHVar3;
  undefined1 auStack_48 [32];
  tagCURSORINFO local_28;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  if ((DAT_1803fa668 == (longlong *)0x0) ||
     (cVar1 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar1 == '\0')) {
    return 0;
  }
  if (DAT_1803fa618 != (HWND)0x0) {
    pHVar3 = GetForegroundWindow();
    if (pHVar3 != DAT_1803fa618) {
      return 0;
    }
    if (DAT_1803fa618 != (HWND)0x0) {
      local_28.cbSize = 0x18;
      local_28._4_8_ = 0;
      local_28._12_8_ = 0;
      local_28.ptScreenPos.y = 0;
      BVar2 = GetCursorInfo(&local_28);
      if (((BVar2 != 0) && ((local_28._4_8_ & 1) != 0)) && (DAT_1803fa545 == '\0')) {
        return 0;
      }
    }
  }
  return 1;
}


)B180024540",
    "8fb472cc51cd427f6ee271ac79df4f6f3392114ea57e85adb60c2f74597c3fda",
    R"F180024540C()F180024540C",
    R"F180024540D(DAT_1803da4c0
DAT_1803fa545
DAT_1803fa618
DAT_1803fa668)F180024540D",
    R"F180024540T()F180024540T",
    R"F180024540F(20: if ((DAT_1803fa668 == (longlong *)0x0) ||
22: return 0;
24: if (DAT_1803fa618 != (HWND)0x0) {
26: if (pHVar3 != DAT_1803fa618) {
27: return 0;
29: if (DAT_1803fa618 != (HWND)0x0) {
35: if (((BVar2 != 0) && ((local_28._4_8_ & 1) != 0)) && (DAT_1803fa545 == '\0')) {
36: return 0;
40: return 1;)F180024540F",
    R"F180024540U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa545.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa618.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 21: (cVar1 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar1 == '\0')) {.)F180024540U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180024540() noexcept {
    return kFunction_0x180024540;
}

// 0x1800245f0 FUN_1800245f0
// source: re/dump/decompile/0x1800245f0_FUN_1800245f0.c
// size: 165 bytes; thunk: false
// body sha256: 5d0c293b962541e1360e187fd604b5450e5c7727da103d50b19d9935b40c1507
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800245f0{
    "0x1800245f0",
    "FUN_1800245f0",
    R"F1800245f0S(undefined FUN_1800245f0())F1800245f0S",
    R"B1800245f0(// 0x1800245f0  FUN_1800245f0
// size=165 thunk=false
// signature: undefined FUN_1800245f0()
// status: ok


ulonglong FUN_1800245f0(int param_1)

{
  SHORT SVar1;
  undefined6 extraout_var;
  ulonglong uVar2;
  undefined6 extraout_var_00;
  int vKey;
  
  uVar2 = (ulonglong)(param_1 - 1U);
  if (0xfd < param_1 - 1U) goto switchD_180024635_caseD_6a;
  SVar1 = GetAsyncKeyState(param_1);
  uVar2 = CONCAT62(extraout_var,SVar1);
  if (SVar1 < 0) {
LAB_180024611:
    return CONCAT71((int7)(uVar2 >> 8),1);
  }
  if (param_1 - 0x60U < 0xf) {
    uVar2 = (ulonglong)(int)(param_1 - 0x60U);
    switch(param_1) {
    case 0x60:
      vKey = 0x2d;
      break;
    case 0x61:
      vKey = 0x23;
      break;
    case 0x62:
      vKey = 0x28;
      break;
    case 99:
      vKey = 0x22;
      break;
    case 100:
      vKey = 0x25;
      break;
    case 0x65:
      vKey = 0xc;
      break;
    case 0x66:
      vKey = 0x27;
      break;
    case 0x67:
      vKey = 0x24;
      break;
    case 0x68:
      vKey = 0x26;
      break;
    case 0x69:
      vKey = 0x21;
      break;
    default:
      goto switchD_180024635_caseD_6a;
    case 0x6e:
      vKey = 0x2e;
    }
    SVar1 = GetAsyncKeyState(vKey);
    uVar2 = CONCAT62(extraout_var_00,SVar1);
    if (SVar1 < 0) goto LAB_180024611;
  }
switchD_180024635_caseD_6a:
  return uVar2 & 0xffffffffffffff00;
}


)B1800245f0",
    "5d0c293b962541e1360e187fd604b5450e5c7727da103d50b19d9935b40c1507",
    R"F1800245f0C()F1800245f0C",
    R"F1800245f0D(LAB_180024611)F1800245f0D",
    R"F1800245f0T()F1800245f0T",
    R"F1800245f0F(17: if (0xfd < param_1 - 1U) goto switchD_180024635_caseD_6a;
20: if (SVar1 < 0) {
21: LAB_180024611:
22: return CONCAT71((int7)(uVar2 >> 8),1);
24: if (param_1 - 0x60U < 0xf) {
26: switch(param_1) {
27: case 0x60:
29: break;
30: case 0x61:
32: break;
33: case 0x62:
35: break;
36: case 99:
38: break;
39: case 100:
41: break;
42: case 0x65:
44: break;
45: case 0x66:
47: break;
48: case 0x67:
50: break;
51: case 0x68:
53: break;
54: case 0x69:
56: break;
58: goto switchD_180024635_caseD_6a;
59: case 0x6e:
64: if (SVar1 < 0) goto LAB_180024611;
67: return uVar2 & 0xffffffffffffff00;)F1800245f0F",
    R"F1800245f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180024611.)F1800245f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800245f0() noexcept {
    return kFunction_0x1800245f0;
}

// 0x1800246e0 FUN_1800246e0
// source: re/dump/decompile/0x1800246e0_FUN_1800246e0.c
// size: 56 bytes; thunk: false
// body sha256: 39af14fb57c8db5bdcf750bf0183fcd046e28725fb542c6cc0a9182b9140f8fc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800246e0{
    "0x1800246e0",
    "FUN_1800246e0",
    R"F1800246e0S(undefined FUN_1800246e0())F1800246e0S",
    R"B1800246e0(// 0x1800246e0  FUN_1800246e0
// size=56 thunk=false
// signature: undefined FUN_1800246e0()
// status: ok


ulonglong FUN_1800246e0(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)(param_1 - 1U);
  if (param_1 - 1U < 0xfe) {
    uVar1 = FUN_180024540();
    if (((char)uVar1 != '\0') && (DAT_1803fa545 == '\0')) {
      uVar1 = FUN_1800245f0(param_1);
      return uVar1;
    }
  }
  return uVar1 & 0xffffffffffffff00;
}


)B1800246e0",
    "39af14fb57c8db5bdcf750bf0183fcd046e28725fb542c6cc0a9182b9140f8fc",
    R"F1800246e0C(FUN_180024540
FUN_1800245f0)F1800246e0C",
    R"F1800246e0D(DAT_1803fa545)F1800246e0D",
    R"F1800246e0T()F1800246e0T",
    R"F1800246e0F(13: if (param_1 - 1U < 0xfe) {
15: if (((char)uVar1 != '\0') && (DAT_1803fa545 == '\0')) {
17: return uVar1;
20: return uVar1 & 0xffffffffffffff00;)F1800246e0F",
    R"F1800246e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa545.)F1800246e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800246e0() noexcept {
    return kFunction_0x1800246e0;
}

// 0x180024720 FUN_180024720
// source: re/dump/decompile/0x180024720_FUN_180024720.c
// size: 319 bytes; thunk: false
// body sha256: 9bff636d1d03e70f9acb1c292c51a1b03fd9b23f5c3348101a187d4a82db362f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180024720{
    "0x180024720",
    "FUN_180024720",
    R"F180024720S(undefined FUN_180024720())F180024720S",
    R"B180024720(// 0x180024720  FUN_180024720
// size=319 thunk=false
// signature: undefined FUN_180024720()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_180024720(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Da_02;
  undefined1 auStack_38 [32];
  int local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  local_18[0] = param_2;
  if ((DAT_1805c392c & 1) == 0) {
    DAT_1805c392c = DAT_1805c392c | 1;
    DAT_1805b8828 = (undefined8 *)0x0;
    DAT_1805b8830 = 0;
    DAT_1805b8828 = (undefined8 *)FUN_1802d8350(0x28);
    *DAT_1805b8828 = DAT_1805b8828;
    DAT_1805b8828[1] = DAT_1805b8828;
    DAT_1805b8828[2] = DAT_1805b8828;
    *(undefined2 *)(DAT_1805b8828 + 3) = 0x101;
    atexit(FUN_180308ba0);
  }
  cVar4 = *(char *)((longlong)DAT_1805b8828[1] + 0x19);
  puVar6 = (undefined8 *)DAT_1805b8828[1];
  puVar2 = DAT_1805b8828;
  while (puVar8 = puVar6, cVar4 == '\0') {
    if (*(int *)((longlong)puVar8 + 0x1c) < local_18[0]) {
      puVar6 = (undefined8 *)puVar8[2];
      puVar8 = puVar2;
    }
    else {
      puVar6 = (undefined8 *)*puVar8;
    }
    cVar4 = *(char *)((longlong)puVar6 + 0x19);
    puVar2 = puVar8;
  }
  if ((*(char *)((longlong)puVar2 + 0x19) != '\0') ||
     (local_18[0] < *(int *)((longlong)puVar2 + 0x1c))) {
    puVar7 = (undefined1 *)FUN_18020ce90(puVar2,local_18);
    *puVar7 = 0;
  }
  puVar7 = (undefined1 *)FUN_18020ce90();
  iVar3 = local_18[0];
  uVar1 = *puVar7;
  uVar9 = extraout_XMM0_Da;
  if (((local_18[0] - 1U < 0xfe) &&
      (cVar4 = FUN_180024540(), uVar9 = extraout_XMM0_Da_00, cVar4 != '\0')) &&
     (DAT_1803fa545 == '\0')) {
    uVar5 = FUN_1800245f0(iVar3);
    uVar9 = extraout_XMM0_Da_01;
  }
  else {
    uVar5 = 0;
  }
  puVar7 = (undefined1 *)FUN_18020ce90(uVar9,local_18);
  *puVar7 = uVar5;
  puVar7 = (undefined1 *)FUN_18020ce90(extraout_XMM0_Da_02,local_18);
  *param_1 = uVar1;
  param_1[1] = *puVar7;
  return param_1;
}


)B180024720",
    "9bff636d1d03e70f9acb1c292c51a1b03fd9b23f5c3348101a187d4a82db362f",
    R"F180024720C(FUN_180024540
FUN_1800245f0
FUN_18020ce90
FUN_1802d8350
FUN_180308ba0)F180024720C",
    R"F180024720D(DAT_1803da4c0
DAT_1803fa545
DAT_1805b8828
DAT_1805b8830
DAT_1805c392c)F180024720D",
    R"F180024720T()F180024720T",
    R"F180024720F(31: if ((DAT_1805c392c & 1) == 0) {
45: while (puVar8 = puVar6, cVar4 == '\0') {
46: if (*(int *)((longlong)puVar8 + 0x1c) < local_18[0]) {
50: else {
56: if ((*(char *)((longlong)puVar2 + 0x19) != '\0') ||
65: if (((local_18[0] - 1U < 0xfe) &&
71: else {
79: return param_1;)F180024720F",
    R"F180024720U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa545.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8828.
TODO: recover the declaration, type and value for global/data reference DAT_1805b8830.
TODO: recover the declaration, type and value for global/data reference DAT_1805c392c.)F180024720U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180024720() noexcept {
    return kFunction_0x180024720;
}

// 0x180024860 FUN_180024860
// source: re/dump/decompile/0x180024860_FUN_180024860.c
// size: 564 bytes; thunk: false
// body sha256: 05d381e0a000a456c6417676124088aa1bacd97d9ef931da6b84653c74e3c994
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180024860{
    "0x180024860",
    "FUN_180024860",
    R"F180024860S(undefined FUN_180024860())F180024860S",
    R"B180024860(// 0x180024860  FUN_180024860
// size=564 thunk=false
// signature: undefined FUN_180024860()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180024860(void)

{
  SHORT SVar1;
  UINT UVar2;
  ulonglong uVar3;
  UINT uCode;
  ulonglong lParam;
  ulonglong wParam;
  undefined1 auStack_48 [32];
  tagPOINT local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  if (DAT_1803fa618 != (HWND)0x0) {
    local_28.x = 0;
    local_28.y = 0;
    GetCursorPos(&local_28);
    ScreenToClient(DAT_1803fa618,&local_28);
    uCode = 1;
    lParam = (ulonglong)CONCAT22((undefined2)local_28.y,(undefined2)local_28.x);
LAB_1800248f0:
    do {
      wParam = (ulonglong)(int)uCode;
      if ((&DAT_180425430)[wParam] != '\0') {
        if (0xff < wParam) {
                    /* WARNING: Subroutine does not return */
          FUN_1802d8348();
        }
        (&DAT_180425430)[wParam] = 0;
        SVar1 = GetAsyncKeyState(uCode);
        if (-1 < SVar1) {
          if (uCode == 1) {
            PostMessageW(DAT_1803fa618,0x202,0,lParam);
            uCode = 2;
            goto LAB_1800248f0;
          }
          if (uCode == 2) {
            PostMessageW(DAT_1803fa618,0x205,0,lParam);
            uCode = 3;
            goto LAB_1800248f0;
          }
          if (uCode == 4) {
            PostMessageW(DAT_1803fa618,0x208,0,lParam);
            uCode = 5;
            goto LAB_1800248f0;
          }
          if (uCode == 5) {
            PostMessageW(DAT_1803fa618,0x20c,0x10000,lParam);
            uCode = 6;
            goto LAB_1800248f0;
          }
          if (uCode == 6) {
            PostMessageW(DAT_1803fa618,0x20c,0x20000,lParam);
            uCode = 7;
            goto LAB_1800248f0;
          }
          UVar2 = MapVirtualKeyW(uCode,0);
          if (UVar2 != 0) {
            switch(uCode) {
            case 3:
            case 0x21:
            case 0x22:
            case 0x23:
            case 0x24:
            case 0x25:
            case 0x26:
            case 0x27:
            case 0x28:
            case 0x2c:
            case 0x2d:
            case 0x2e:
            case 0x6f:
            case 0x90:
            case 0xa3:
            case 0xa5:
              uVar3 = 0xc1000001;
              break;
            default:
              uVar3 = 0xc0000001;
            }
            PostMessageW(DAT_1803fa618,0x101,wParam,(ulonglong)(UVar2 & 0xff) << 0x10 | uVar3);
          }
        }
      }
      uCode = uCode + 1;
    } while ((int)uCode < 0xff);
  }
  return;
}


)B180024860",
    "05d381e0a000a456c6417676124088aa1bacd97d9ef931da6b84653c74e3c994",
    R"F180024860C(FUN_1802d8348)F180024860C",
    R"F180024860D(LAB_1800248f0
DAT_1803da4c0
DAT_1803fa618
DAT_180425430)F180024860D",
    R"F180024860T()F180024860T",
    R"F180024860F(23: if (DAT_1803fa618 != (HWND)0x0) {
30: LAB_1800248f0:
31: do {
33: if ((&DAT_180425430)[wParam] != '\0') {
34: if (0xff < wParam) {
40: if (-1 < SVar1) {
41: if (uCode == 1) {
44: goto LAB_1800248f0;
46: if (uCode == 2) {
49: goto LAB_1800248f0;
51: if (uCode == 4) {
54: goto LAB_1800248f0;
56: if (uCode == 5) {
59: goto LAB_1800248f0;
61: if (uCode == 6) {
64: goto LAB_1800248f0;
67: if (UVar2 != 0) {
68: switch(uCode) {
69: case 3:
70: case 0x21:
71: case 0x22:
72: case 0x23:
73: case 0x24:
74: case 0x25:
75: case 0x26:
76: case 0x27:
77: case 0x28:
78: case 0x2c:
79: case 0x2d:
80: case 0x2e:
81: case 0x6f:
82: case 0x90:
83: case 0xa3:
84: case 0xa5:
86: break;
97: return;)F180024860F",
    R"F180024860U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1800248f0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa618.
TODO: recover the declaration, type and value for global/data reference DAT_180425430.)F180024860U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180024860() noexcept {
    return kFunction_0x180024860;
}

// 0x180024b50 FUN_180024b50
// source: re/dump/decompile/0x180024b50_FUN_180024b50.c
// size: 265 bytes; thunk: false
// body sha256: a7421269721d762fc0d4dd54f054d7b5a72b1d3bf5c7a00d8caba3d3d4953ffb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180024b50{
    "0x180024b50",
    "FUN_180024b50",
    R"F180024b50S(undefined FUN_180024b50())F180024b50S",
    R"B180024b50(// 0x180024b50  FUN_180024b50
// size=265 thunk=false
// signature: undefined FUN_180024b50()
// status: ok


undefined8 * FUN_180024b50(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (DAT_1803fa368 == (undefined8 *)0x0) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_18001d080(&local_48,"48 8B 0D ? ? ? ? 48 83 3D ? ? ? ? 00 75 ? 48 8D 0D ? ? ? ? FF 15",0x40)
    ;
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_10 = 0;
    FUN_18001d080(&local_28,"client.dll",10);
    lVar2 = FUN_180015f40(&local_28,&local_48);
    if (lVar2 == 0) {
      DAT_1803fa368 = (undefined8 *)0xffffffffffffffff;
      FUN_180014410("[LuaHooks-WARN] x64 gGM pattern NOT FOUND\n");
    }
    else {
      DAT_1803fa368 = (undefined8 *)((longlong)*(int *)(lVar2 + 10) + lVar2 + 0xf);
      FUN_180014410("[LuaHooks] x64 gGM = %p\n");
    }
    if (DAT_1803fa368 == (undefined8 *)0x0) {
      return param_1;
    }
  }
  puVar1 = DAT_1803fa368;
  if (DAT_1803fa368 != (undefined8 *)0xffffffffffffffff) {
    *param_1 = *DAT_1803fa368;
    *puVar1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return param_1;
}


)B180024b50",
    "a7421269721d762fc0d4dd54f054d7b5a72b1d3bf5c7a00d8caba3d3d4953ffb",
    R"F180024b50C(FUN_180014410
FUN_180015f40
FUN_18001d080)F180024b50C",
    R"F180024b50D(DAT_1803fa368)F180024b50D",
    R"F180024b50T("client.dll"
"[LuaHooks] x64 gGM = %p\\n"
"[LuaHooks-WARN] x64 gGM pattern NOT FOUND\\n"
"48 8B 0D ? ? ? ? 48 83 3D ? ? ? ? 00 75 ? 48 8D 0D ? ? ? ? FF 15")F180024b50T",
    R"F180024b50F(23: if (DAT_1803fa368 == (undefined8 *)0x0) {
36: if (lVar2 == 0) {
40: else {
44: if (DAT_1803fa368 == (undefined8 *)0x0) {
45: return param_1;
49: if (DAT_1803fa368 != (undefined8 *)0xffffffffffffffff) {
54: return param_1;)F180024b50F",
    R"F180024b50U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa368.)F180024b50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180024b50() noexcept {
    return kFunction_0x180024b50;
}

// 0x180024cd0 FUN_180024cd0
// source: re/dump/decompile/0x180024cd0_FUN_180024cd0.c
// size: 539 bytes; thunk: false
// body sha256: ae1c34904bab3af80c31446a4e7d944536c0bcba6e4617cc7a99ab6c8de0418b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180024cd0{
    "0x180024cd0",
    "FUN_180024cd0",
    R"F180024cd0S(undefined FUN_180024cd0())F180024cd0S",
    R"B180024cd0(// 0x180024cd0  FUN_180024cd0
// size=539 thunk=false
// signature: undefined FUN_180024cd0()
// status: ok


void FUN_180024cd0(void)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  HMODULE pHVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  HMODULE pHVar13;
  HMODULE pHVar14;
  
  if (DAT_1803fe3f5 == '\0') {
    DAT_1803fe3f5 = '\x01';
    pHVar6 = GetModuleHandleA("client.dll");
    if (((pHVar6 != (HMODULE)0x0) && ((short)pHVar6->unused == 0x5a4d)) &&
       (piVar8 = (int *)((longlong)&pHVar6->unused + (longlong)pHVar6[0xf].unused),
       *piVar8 == 0x4550)) {
      uVar10 = 0;
      uVar2 = *(ushort *)((longlong)piVar8 + 6);
      uVar3 = *(ushort *)(piVar8 + 5);
      pHVar13 = (HMODULE)0x0;
      if (uVar2 != 0) {
        do {
          pHVar14 = pHVar13;
          if (pHVar13 != (HMODULE)0x0) goto LAB_180024de9;
          if (((*(uint *)((longlong)piVar8 + uVar10 * 0x28 + (ulonglong)uVar3 + 0x3c) & 0x40000000)
               != 0) &&
             (uVar11 = (ulonglong)
                       *(uint *)((longlong)piVar8 + uVar10 * 0x28 + (ulonglong)uVar3 + 0x20),
             0x11 < uVar11)) {
            uVar12 = *(uint *)((longlong)piVar8 + uVar10 * 0x28 + (ulonglong)uVar3 + 0x24);
            lVar7 = 0;
            do {
              pHVar14 = (HMODULE)((longlong)&pHVar6->unused + lVar7 + (ulonglong)uVar12);
              if ((((*(char *)((longlong)&pHVar6->unused + lVar7 + (ulonglong)uVar12) == 'm') &&
                   (*(longlong *)pHVar14 == s_m_flStepSoundTime_18033bd08._0_8_)) &&
                  ((*(longlong *)(pHVar14 + 2) == s_m_flStepSoundTime_18033bd08._8_8_ &&
                   ((short)pHVar14[4].unused == s_m_flStepSoundTime_18033bd08._16_2_)))) &&
                 ((pHVar14 == pHVar6 || (*(char *)((longlong)&pHVar14[-1].unused + 3) == '\0'))))
              break;
              uVar1 = lVar7 + 0x13;
              lVar7 = lVar7 + 1;
              pHVar14 = pHVar13;
            } while (uVar1 <= uVar11);
          }
          uVar12 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar12;
          pHVar13 = pHVar14;
        } while ((int)uVar12 < (int)(uint)uVar2);
        if (pHVar14 != (HMODULE)0x0) {
LAB_180024de9:
          iVar9 = 0;
          do {
            lVar7 = (longlong)iVar9;
            if ((((*(int *)((longlong)piVar8 + lVar7 * 0x28 + (ulonglong)uVar3 + 0x18) == 0x6164722e
                  ) && (*(short *)((longlong)piVar8 + lVar7 * 0x28 + (ulonglong)uVar3 + 0x1c) ==
                        0x6174)) ||
                ((*(int *)((longlong)piVar8 + lVar7 * 0x28 + (ulonglong)uVar3 + 0x18) == 0x7461642e
                 && (*(char *)((longlong)piVar8 + lVar7 * 0x28 + (ulonglong)uVar3 + 0x1c) == 'a'))))
               && (uVar10 = (ulonglong)
                            *(uint *)((longlong)piVar8 + lVar7 * 0x28 + (ulonglong)uVar3 + 0x20),
                  0x1f < uVar10)) {
              uVar12 = *(uint *)((longlong)piVar8 + lVar7 * 0x28 + (ulonglong)uVar3 + 0x24);
              lVar7 = 8;
              do {
                if (*(HMODULE *)((longlong)&pHVar6->unused + lVar7 + (ulonglong)uVar12) == pHVar14)
                {
                  iVar4 = *(int *)((longlong)&pHVar6[-2].unused + lVar7 + (ulonglong)uVar12);
                  iVar5 = *(int *)((longlong)&pHVar6[2].unused + lVar7 + (ulonglong)uVar12);
                  if ((iVar4 == 1) && (iVar5 - 0x100U < 0x1ff01)) {
                    DAT_1803e6ed0 = iVar5;
                    FUN_180014410(
                                 "[STEPSND] m_flStepSoundTime = +0x%X (from client.dll prediction datamap)\n"
                                 );
                    return;
                  }
                  FUN_180014410("[STEPSND] datamap entry rejected (type=%d off=0x%X)\n",iVar4,iVar5)
                  ;
                }
                uVar11 = lVar7 + 0x18;
                lVar7 = lVar7 + 8;
              } while (uVar11 <= uVar10);
            }
            iVar9 = iVar9 + 1;
            if ((int)(uint)uVar2 <= iVar9) {
              FUN_180014410(&DAT_180340ae0);
              return;
            }
          } while( true );
        }
      }
      FUN_180014410(&DAT_180340a00);
    }
  }
  return;
}


)B180024cd0",
    "ae1c34904bab3af80c31446a4e7d944536c0bcba6e4617cc7a99ab6c8de0418b",
    R"F180024cd0C(FUN_180014410)F180024cd0C",
    R"F180024cd0D(LAB_180024de9
DAT_180340a00
DAT_180340ae0
DAT_1803e6ed0
DAT_1803fe3f5)F180024cd0D",
    R"F180024cd0T("client.dll"
"[STEPSND] datamap entry rejected (type=%d off=0x%X)\\n"
"[STEPSND] m_flStepSoundTime = +0x%X (from client.dll prediction datamap)\\n")F180024cd0T",
    R"F180024cd0F(25: if (DAT_1803fe3f5 == '\0') {
28: if (((pHVar6 != (HMODULE)0x0) && ((short)pHVar6->unused == 0x5a4d)) &&
35: if (uVar2 != 0) {
36: do {
38: if (pHVar13 != (HMODULE)0x0) goto LAB_180024de9;
39: if (((*(uint *)((longlong)piVar8 + uVar10 * 0x28 + (ulonglong)uVar3 + 0x3c) & 0x40000000)
46: do {
48: if ((((*(char *)((longlong)&pHVar6->unused + lVar7 + (ulonglong)uVar12) == 'm') &&
53: break;
63: if (pHVar14 != (HMODULE)0x0) {
64: LAB_180024de9:
66: do {
68: if ((((*(int *)((longlong)piVar8 + lVar7 * 0x28 + (ulonglong)uVar3 + 0x18) == 0x6164722e
78: do {
79: if (*(HMODULE *)((longlong)&pHVar6->unused + lVar7 + (ulonglong)uVar12) == pHVar14)
83: if ((iVar4 == 1) && (iVar5 - 0x100U < 0x1ff01)) {
88: return;
98: if ((int)(uint)uVar2 <= iVar9) {
100: return;
108: return;)F180024cd0F",
    R"F180024cd0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180024de9.
TODO: recover the declaration, type and value for global/data reference DAT_180340a00.
TODO: recover the declaration, type and value for global/data reference DAT_180340ae0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e6ed0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fe3f5.)F180024cd0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180024cd0() noexcept {
    return kFunction_0x180024cd0;
}

// 0x180024f00 FUN_180024f00
// source: re/dump/decompile/0x180024f00_FUN_180024f00.c
// size: 1094 bytes; thunk: false
// body sha256: 325719f4c5c80ea93abe38f92845d918d852e714e73ca4c07ffe0b4ecd11368a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180024f00{
    "0x180024f00",
    "FUN_180024f00",
    R"F180024f00S(undefined FUN_180024f00())F180024f00S",
    R"B180024f00(// 0x180024f00  FUN_180024f00
// size=1094 thunk=false
// signature: undefined FUN_180024f00()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180024f00(undefined8 param_1,int *param_2)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  HMODULE hModule;
  int *piVar12;
  undefined8 uVar13;
  char *pcVar14;
  undefined4 *puVar15;
  undefined8 *local_a0;
  undefined8 uStack_98;
  longlong local_90;
  int *local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_88 = param_2;
  if (DAT_1803de065 != '\0') {
    FUN_180025360();
  }
  _DAT_1803de066 = 0;
  _DAT_1803de050 = param_2;
  if ((param_2 != (int *)0x0) && (DAT_1803fa608 != 0)) {
    DAT_1803ddea0 = *(undefined8 *)(DAT_1803fa608 + 0x10);
    DAT_1803ddea8 = *(undefined4 *)(DAT_1803fa608 + 0x18);
    DAT_1803de065 = '\x01';
    pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar8 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar10 = (*pcVar4)(DAT_1803fa360,uVar8);
    if (lVar10 != 0) {
      puVar15 = (undefined4 *)0x0;
      local_90 = lVar10;
      if (DAT_1804253fc == '\0') {
        DAT_1804253fc = '\x01';
        local_80 = &local_70;
        local_70 = 0;
        uStack_68 = 0;
        local_60 = 0;
        local_58 = 0;
        FUN_18001d080(&local_70,"48 85 C9 75 0B C7 05 ?? ?? ?? ?? FF FF FF FF C3",0x2f);
        local_a0 = &local_50;
        local_50 = 0;
        uStack_48 = 0;
        local_40 = 0;
        local_38 = 0;
        FUN_18001d080(&local_50,"client.dll",10);
        lVar11 = FUN_180015f40(&local_50,&local_70);
        if (lVar11 == 0) {
          DAT_1803de058 = (uint *)0x0;
          FUN_180014410("[PRED-WARN] x64 m_pPredictionRandomSeed pattern NOT FOUND\n");
        }
        else {
          DAT_1803de058 = (uint *)(lVar11 + 0xf + (longlong)*(int *)(lVar11 + 7));
          FUN_180014410("[PRED] x64 m_pPredictionRandomSeed = %p (disp=0x%X)\n");
        }
      }
      uVar9 = FUN_180015e50(*param_2);
      if (DAT_1803de058 != (uint *)0x0) {
        DAT_1803de060 = *DAT_1803de058;
        DAT_1803de064 = 1;
        *DAT_1803de058 = uVar9 & 0x7fffffff;
      }
      if ((DAT_1805c7ba4 & 1) == 0) {
        DAT_1805c7ba4 = DAT_1805c7ba4 | 1;
        hModule = GetModuleHandleA("vstdlib.dll");
        DAT_1805c7af8 = GetProcAddress(hModule,"RandomSeed");
      }
      if (DAT_1805c7af8 != (FARPROC)0x0) {
        (*DAT_1805c7af8)((ulonglong)(uVar9 & 0x7fffffff));
      }
      piVar12 = (int *)FUN_18001dfb0(lVar10);
      lVar11 = DAT_1803fa608;
      iVar2 = *piVar12;
      iVar3 = *param_2;
      DAT_1803de068 = iVar2;
      iVar6 = iVar2;
      iVar7 = iVar3;
      if (((iVar2 == DAT_1803de06c) && (DAT_1803de070 < iVar3)) &&
         (DAT_1803de068 = (iVar3 - DAT_1803de070) + iVar2, iVar6 = DAT_1803de06c,
         iVar7 = DAT_1803de070, 0x3e < (iVar3 - DAT_1803de070) - 1U)) {
        DAT_1803de068 = iVar2;
      }
      DAT_1803de070 = iVar7;
      DAT_1803de06c = iVar6;
      pdVar1 = (double *)(DAT_1803fa608 + 0x28);
      *(double *)(DAT_1803fa608 + 0x10) = (double)DAT_1803de068 * *pdVar1;
      *(float *)(lVar11 + 0x18) = (float)*pdVar1;
      uVar13 = FUN_180241610(&DAT_1803fadf0,0x237bcfbdef3b6800);
      uVar13 = FUN_180241610(uVar13,0x402819404e703058);
      pcVar14 = (char *)FUN_1801fcfc0(uVar13);
      if (*pcVar14 == '\0') {
        uVar13 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
        uVar13 = FUN_180241610(uVar13,0xfc192b983f5bff62);
        pcVar14 = (char *)FUN_1801fcfc0(uVar13);
        if (*pcVar14 != '\0') {
          local_a0 = (undefined8 *)0x0;
          uStack_98 = 0;
          FUN_180024b50(&local_a0);
          if ((((char)uStack_98 != '\0') && (DAT_1803fa658 != (longlong *)0x0)) &&
             ((DAT_1803f9290 != (longlong *)0x0 && (DAT_1803fa5a0 != 0)))) {
            local_80 = (undefined8 *)0x0;
            uVar8 = 0;
            local_78 = 0;
            FUN_180024cd0();
            if (-1 < DAT_1803e6ed0) {
              puVar15 = (undefined4 *)(lVar10 + DAT_1803e6ed0);
              uVar8 = *puVar15;
              *puVar15 = 0x4e6e6b28;
              local_80 = (undefined8 *)puVar15;
              local_78 = uVar8;
            }
            uVar5 = DAT_1803fe4ac;
            DAT_1803fe4ac = 1;
            (**(code **)(*DAT_1803fa658 + 0x10))();
            _DAT_1803de066 = CONCAT11(DAT_1803de067,1);
            memset(&DAT_1803ddeac,0,0x1a4);
            (**(code **)(*DAT_1803f9290 + 0x90))
                      (DAT_1803f9290,lVar10,param_2,DAT_1803fa5a0,&DAT_1803ddeac);
            (**(code **)(*DAT_1803fa658 + 8))(DAT_1803fa658,lVar10,&DAT_1803ddeac);
            (**(code **)(*DAT_1803f9290 + 0x98))(DAT_1803f9290,lVar10,param_2,&DAT_1803ddeac);
            _DAT_1803de066 = CONCAT11(1,DAT_1803de066);
            DAT_1803fe4ac = uVar5;
            if (puVar15 != (undefined4 *)0x0) {
              *puVar15 = uVar8;
            }
          }
          if (((char)uStack_98 != '\0') && ((longlong)DAT_1803fa368 - 1U < 0xfffffffffffffffe)) {
            *DAT_1803fa368 = local_a0;
          }
        }
      }
    }
  }
  return;
}


)B180024f00",
    "325719f4c5c80ea93abe38f92845d918d852e714e73ca4c07ffe0b4ecd11368a",
    R"F180024f00C(FUN_180014410
FUN_180015e50
FUN_180015f40
FUN_18001d080
FUN_18001dfb0
FUN_180024b50
FUN_180024cd0
FUN_180025360
FUN_1801fcfc0
FUN_180241610)F180024f00C",
    R"F180024f00D(DAT_1803ddea0
DAT_1803ddea8
DAT_1803ddeac
DAT_1803de058
DAT_1803de060
DAT_1803de064
DAT_1803de065
DAT_1803de066
DAT_1803de067
DAT_1803de068
DAT_1803de06c
DAT_1803de070
DAT_1803e6ed0
DAT_1803f9290
DAT_1803fa360
DAT_1803fa368
DAT_1803fa5a0
DAT_1803fa608
DAT_1803fa658
DAT_1803fa668
DAT_1803fadf0
DAT_1803fe4ac
DAT_1804253fc
DAT_1805c7af8
DAT_1805c7ba4)F180024f00D",
    R"F180024f00T("RandomSeed"
"client.dll"
"vstdlib.dll"
"48 85 C9 75 0B C7 05 ?? ?? ?? ?? FF FF FF FF C3"
"[PRED] x64 m_pPredictionRandomSeed = %p (disp=0x%X)\\n"
"[PRED-WARN] x64 m_pPredictionRandomSeed pattern NOT FOUND\\n")F180024f00T",
    R"F180024f00F(44: if (DAT_1803de065 != '\0') {
49: if ((param_2 != (int *)0x0) && (DAT_1803fa608 != 0)) {
56: if (lVar10 != 0) {
59: if (DAT_1804253fc == '\0') {
74: if (lVar11 == 0) {
78: else {
84: if (DAT_1803de058 != (uint *)0x0) {
89: if ((DAT_1805c7ba4 & 1) == 0) {
94: if (DAT_1805c7af8 != (FARPROC)0x0) {
104: if (((iVar2 == DAT_1803de06c) && (DAT_1803de070 < iVar3)) &&
117: if (*pcVar14 == '\0') {
121: if (*pcVar14 != '\0') {
125: if ((((char)uStack_98 != '\0') && (DAT_1803fa658 != (longlong *)0x0)) &&
131: if (-1 < DAT_1803e6ed0) {
149: if (puVar15 != (undefined4 *)0x0) {
153: if (((char)uStack_98 != '\0') && ((longlong)DAT_1803fa368 - 1U < 0xfffffffffffffffe)) {
160: return;)F180024f00F",
    R"F180024f00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803ddea0.
TODO: recover the declaration, type and value for global/data reference DAT_1803ddea8.
TODO: recover the declaration, type and value for global/data reference DAT_1803ddeac.
TODO: recover the declaration, type and value for global/data reference DAT_1803de058.
TODO: recover the declaration, type and value for global/data reference DAT_1803de060.
TODO: recover the declaration, type and value for global/data reference DAT_1803de064.
TODO: recover the declaration, type and value for global/data reference DAT_1803de065.
TODO: recover the declaration, type and value for global/data reference DAT_1803de066.
TODO: recover the declaration, type and value for global/data reference DAT_1803de067.
TODO: recover the declaration, type and value for global/data reference DAT_1803de068.
TODO: recover the declaration, type and value for global/data reference DAT_1803de06c.
TODO: recover the declaration, type and value for global/data reference DAT_1803de070.
TODO: recover the declaration, type and value for global/data reference DAT_1803e6ed0.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9290.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa368.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa5a0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa608.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa658.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fe4ac.
TODO: recover the declaration, type and value for global/data reference DAT_1804253fc.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7af8.
TODO: recover the declaration, type and value for global/data reference DAT_1805c7ba4.
TODO: resolve the indirect call in body 53: pcVar4 = *(code **)(*DAT_1803fa360 + 0x18);.
TODO: resolve the indirect call in body 54: uVar8 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 55: lVar10 = (*pcVar4)(DAT_1803fa360,uVar8);.
TODO: resolve the indirect call in body 95: (*DAT_1805c7af8)((ulonglong)(uVar9 & 0x7fffffff));.
TODO: resolve the indirect call in body 140: (**(code **)(*DAT_1803fa658 + 0x10))();.
TODO: resolve the indirect call in body 143: (**(code **)(*DAT_1803f9290 + 0x90)).
TODO: resolve the indirect call in body 145: (**(code **)(*DAT_1803fa658 + 8))(DAT_1803fa658,lVar10,&DAT_1803ddeac);.
TODO: resolve the indirect call in body 146: (**(code **)(*DAT_1803f9290 + 0x98))(DAT_1803f9290,lVar10,param_2,&DAT_1803ddeac);.)F180024f00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180024f00() noexcept {
    return kFunction_0x180024f00;
}

// 0x180025360 FUN_180025360
// source: re/dump/decompile/0x180025360_FUN_180025360.c
// size: 202 bytes; thunk: false
// body sha256: 23397e8d748dc6271e3f45cad456ff19818ff3bc6cdc488b8922826de8f65c1b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180025360{
    "0x180025360",
    "FUN_180025360",
    R"F180025360S(undefined FUN_180025360())F180025360S",
    R"B180025360(// 0x180025360  FUN_180025360
// size=202 thunk=false
// signature: undefined FUN_180025360()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180025360(void)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (DAT_1803de066 != '\0') {
    DAT_1803de066 = '\0';
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);
    if ((lVar3 != 0) && (DAT_1803fa658 != (longlong *)0x0)) {
      (**(code **)(*DAT_1803fa658 + 0x18))(DAT_1803fa658,lVar3);
    }
  }
  if ((DAT_1803de064 != '\0') && (DAT_1803de058 != (undefined4 *)0x0)) {
    *DAT_1803de058 = DAT_1803de060;
  }
  lVar3 = DAT_1803fa608;
  DAT_1803de064 = 0;
  if ((DAT_1803de065 != '\0') && (DAT_1803fa608 != 0)) {
    *(undefined8 *)(DAT_1803fa608 + 0x10) = DAT_1803ddea0;
    *(undefined4 *)(lVar3 + 0x18) = DAT_1803ddea8;
  }
  DAT_1803de065 = 0;
  DAT_1803de067 = 0;
  _DAT_1803de050 = 0;
  return;
}


)B180025360",
    "23397e8d748dc6271e3f45cad456ff19818ff3bc6cdc488b8922826de8f65c1b",
    R"F180025360C()F180025360C",
    R"F180025360D(DAT_1803ddea0
DAT_1803ddea8
DAT_1803de058
DAT_1803de060
DAT_1803de064
DAT_1803de065
DAT_1803de066
DAT_1803de067
DAT_1803fa360
DAT_1803fa608
DAT_1803fa658
DAT_1803fa668)F180025360D",
    R"F180025360T()F180025360T",
    R"F180025360F(16: if (DAT_1803de066 != '\0') {
21: if ((lVar3 != 0) && (DAT_1803fa658 != (longlong *)0x0)) {
25: if ((DAT_1803de064 != '\0') && (DAT_1803de058 != (undefined4 *)0x0)) {
30: if ((DAT_1803de065 != '\0') && (DAT_1803fa608 != 0)) {
37: return;)F180025360F",
    R"F180025360U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803ddea0.
TODO: recover the declaration, type and value for global/data reference DAT_1803ddea8.
TODO: recover the declaration, type and value for global/data reference DAT_1803de058.
TODO: recover the declaration, type and value for global/data reference DAT_1803de060.
TODO: recover the declaration, type and value for global/data reference DAT_1803de064.
TODO: recover the declaration, type and value for global/data reference DAT_1803de065.
TODO: recover the declaration, type and value for global/data reference DAT_1803de066.
TODO: recover the declaration, type and value for global/data reference DAT_1803de067.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa608.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa658.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 18: pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);.
TODO: resolve the indirect call in body 19: uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 20: lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);.
TODO: resolve the indirect call in body 22: (**(code **)(*DAT_1803fa658 + 0x18))(DAT_1803fa658,lVar3);.)F180025360U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180025360() noexcept {
    return kFunction_0x180025360;
}

// 0x180025450 FUN_180025450
// source: re/dump/decompile/0x180025450_FUN_180025450.c
// size: 454 bytes; thunk: false
// body sha256: 8ba21f8a972fc94258711613221debd7ed38b057badcde63016836ca533e0601
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180025450{
    "0x180025450",
    "FUN_180025450",
    R"F180025450S(undefined FUN_180025450())F180025450S",
    R"B180025450(// 0x180025450  FUN_180025450
// size=454 thunk=false
// signature: undefined FUN_180025450()
// status: ok


bool FUN_180025450(void)

{
  HMODULE hModule;
  
  if (DAT_1803facfc != '\0') {
    return DAT_1803fcbd8 != (FARPROC)0x0;
  }
  hModule = GetModuleHandleA("lua_shared.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_1803facfc = '\x01';
    DAT_1803fcbd8 = GetProcAddress(hModule,"lua_pushstring");
    GetProcAddress(hModule,"lua_pushlstring");
    DAT_1803fcbc0 = GetProcAddress(hModule,"lua_pushcclosure");
    DAT_1803fcbd0 = GetProcAddress(hModule,"lua_pushboolean");
    DAT_1803fcbb0 = GetProcAddress(hModule,"lua_rawget");
    DAT_1803fcbb8 = GetProcAddress(hModule,"lua_rawset");
    DAT_1803fcba8 = GetProcAddress(hModule,"lua_getfield");
    DAT_1803fcbe0 = GetProcAddress(hModule,"lua_setfield");
    DAT_1803fcb90 = GetProcAddress(hModule,"lua_setmetatable");
    DAT_1803fcbc8 = GetProcAddress(hModule,"lua_insert");
    DAT_1803fcba0 = GetProcAddress(hModule,"lua_remove");
    DAT_1803fcb98 = GetProcAddress(hModule,"lua_pushnumber");
    if ((((((DAT_1803fcbd8 != (FARPROC)0x0) && (DAT_1803fcbc0 != (FARPROC)0x0)) &&
          (DAT_1803fcbb0 != (FARPROC)0x0)) &&
         ((DAT_1803fcbb8 != (FARPROC)0x0 && (DAT_1803fcba8 != (FARPROC)0x0)))) &&
        ((DAT_1803fcbe0 != (FARPROC)0x0 &&
         ((DAT_1803fcb90 != (FARPROC)0x0 && (DAT_1803fcbc8 != (FARPROC)0x0)))))) &&
       ((DAT_1803fcba0 != (FARPROC)0x0 && (DAT_1803fcb98 != (FARPROC)0x0)))) {
      return true;
    }
  }
  return false;
}


)B180025450",
    "8ba21f8a972fc94258711613221debd7ed38b057badcde63016836ca533e0601",
    R"F180025450C()F180025450C",
    R"F180025450D(DAT_1803facfc
DAT_1803fcb90
DAT_1803fcb98
DAT_1803fcba0
DAT_1803fcba8
DAT_1803fcbb0
DAT_1803fcbb8
DAT_1803fcbc0
DAT_1803fcbc8
DAT_1803fcbd0
DAT_1803fcbd8
DAT_1803fcbe0)F180025450D",
    R"F180025450T("lua_insert"
"lua_rawget"
"lua_rawset"
"lua_remove"
"lua_getfield"
"lua_setfield"
"lua_pushnumber"
"lua_pushstring"
"lua_shared.dll"
"lua_pushboolean"
"lua_pushlstring"
"lua_pushcclosure"
"lua_setmetatable")F180025450T",
    R"F180025450F(12: if (DAT_1803facfc != '\0') {
13: return DAT_1803fcbd8 != (FARPROC)0x0;
16: if (hModule != (HMODULE)0x0) {
30: if ((((((DAT_1803fcbd8 != (FARPROC)0x0) && (DAT_1803fcbc0 != (FARPROC)0x0)) &&
36: return true;
39: return false;)F180025450F",
    R"F180025450U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803facfc.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcb90.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcb98.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcba0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcba8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcbb0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcbb8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcbc0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcbc8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcbd0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcbd8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcbe0.)F180025450U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180025450() noexcept {
    return kFunction_0x180025450;
}

// 0x180025620 FUN_180025620
// source: re/dump/decompile/0x180025620_FUN_180025620.c
// size: 540 bytes; thunk: false
// body sha256: 0ac2bf4f195b84f477caae2be2940dfdec6b05c4afb0a9c649d7921e8a81942f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180025620{
    "0x180025620",
    "FUN_180025620",
    R"F180025620S(undefined FUN_180025620())F180025620S",
    R"B180025620(// 0x180025620  FUN_180025620
// size=540 thunk=false
// signature: undefined FUN_180025620()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180025620(ulonglong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  size_t sVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_60;
  ulonglong *local_58;
  char local_50 [12];
  undefined4 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_88;
  if ((DAT_180426234 & 1) == 0) {
    DAT_180426234 = DAT_180426234 | 1;
    DAT_180427668 = (undefined8 *)0x0;
    DAT_180427670 = 0;
    DAT_180427668 = (undefined8 *)FUN_1802d8350(0x48);
    *DAT_180427668 = DAT_180427668;
    DAT_180427668[1] = DAT_180427668;
    DAT_180427668[2] = DAT_180427668;
    *(undefined2 *)(DAT_180427668 + 3) = 0x101;
    atexit(FUN_180308bb0);
  }
  cVar1 = *(char *)((longlong)DAT_180427668[1] + 0x19);
  puVar3 = (undefined8 *)DAT_180427668[1];
  puVar5 = DAT_180427668;
  while (puVar4 = puVar3, cVar1 == '\0') {
    if ((ulonglong)puVar4[4] < param_1) {
      puVar3 = (undefined8 *)puVar4[2];
      puVar4 = puVar5;
    }
    else {
      puVar3 = (undefined8 *)*puVar4;
    }
    cVar1 = *(char *)((longlong)puVar3 + 0x19);
    puVar5 = puVar4;
  }
  if ((*(char *)((longlong)puVar5 + 0x19) != '\0') || (param_1 < (ulonglong)puVar5[4])) {
    puVar5 = DAT_180427668;
  }
  if (puVar5 == DAT_180427668) {
    FUN_180012ac0(local_50,0x11,"%016llx",param_1);
    puVar2 = DAT_180427668;
    puVar3 = (undefined8 *)DAT_180427668[1];
    puVar4 = puVar3;
    puVar5 = DAT_180427668;
    if (*(char *)((longlong)puVar3 + 0x19) == '\0') {
      do {
        puVar3 = puVar4;
        if (param_1 <= (ulonglong)puVar3[4]) {
          puVar4 = (undefined8 *)*puVar3;
          puVar5 = puVar3;
        }
        else {
          puVar4 = (undefined8 *)puVar3[2];
        }
        uVar7 = (uint)(param_1 <= (ulonglong)puVar3[4]);
      } while (*(char *)((longlong)puVar4 + 0x19) == '\0');
    }
    else {
      uVar7 = 0;
    }
    if ((*(char *)((longlong)puVar5 + 0x19) != '\0') || (param_1 < (ulonglong)puVar5[4])) {
      if (DAT_180427670 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
        FUN_180013b80();
      }
      local_68 = &DAT_180427668;
      local_60 = (undefined8 *)0x0;
      puVar5 = (undefined8 *)FUN_1802d8350(0x48);
      local_58 = puVar5 + 4;
      *local_58 = param_1;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      local_60 = puVar5;
      sVar6 = strlen(local_50);
      FUN_18001d080(puVar5 + 5,local_50,sVar6);
      *puVar5 = puVar2;
      puVar5[1] = puVar2;
      puVar5[2] = puVar2;
      *(undefined2 *)(puVar5 + 3) = 0;
      local_60 = (undefined8 *)CONCAT44(local_44,uVar7);
      local_68 = puVar3;
      puVar5 = (undefined8 *)FUN_18022bb90(&DAT_180427668,&local_68,puVar5);
    }
  }
  return puVar5 + 5;
}


)B180025620",
    "0ac2bf4f195b84f477caae2be2940dfdec6b05c4afb0a9c649d7921e8a81942f",
    R"F180025620C(FUN_180012ac0
FUN_180013b80
FUN_18001d080
FUN_18022bb90
FUN_1802d8350
FUN_180308bb0)F180025620C",
    R"F180025620D(DAT_1803da4c0
DAT_180426234
DAT_180427668
DAT_180427670)F180025620D",
    R"F180025620T("%016llx")F180025620T",
    R"F180025620F(28: if ((DAT_180426234 & 1) == 0) {
42: while (puVar4 = puVar3, cVar1 == '\0') {
43: if ((ulonglong)puVar4[4] < param_1) {
47: else {
53: if ((*(char *)((longlong)puVar5 + 0x19) != '\0') || (param_1 < (ulonglong)puVar5[4])) {
56: if (puVar5 == DAT_180427668) {
62: if (*(char *)((longlong)puVar3 + 0x19) == '\0') {
63: do {
65: if (param_1 <= (ulonglong)puVar3[4]) {
69: else {
75: else {
78: if ((*(char *)((longlong)puVar5 + 0x19) != '\0') || (param_1 < (ulonglong)puVar5[4])) {
79: if (DAT_180427670 == 0x38e38e38e38e38e) {
104: return puVar5 + 5;)F180025620F",
    R"F180025620U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_180426234.
TODO: recover the declaration, type and value for global/data reference DAT_180427668.
TODO: recover the declaration, type and value for global/data reference DAT_180427670.)F180025620U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180025620() noexcept {
    return kFunction_0x180025620;
}

// 0x180025840 FUN_180025840
// source: re/dump/decompile/0x180025840_FUN_180025840.c
// size: 18 bytes; thunk: false
// body sha256: 97bac26c593d18d36a300c168a0d8188d577cd0004af1963f50b6d42c3dbb241
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180025840{
    "0x180025840",
    "FUN_180025840",
    R"F180025840S(undefined FUN_180025840())F180025840S",
    R"B180025840(// 0x180025840  FUN_180025840
// size=18 thunk=false
// signature: undefined FUN_180025840()
// status: ok


void FUN_180025840(void)

{
  FUN_180209a80();
  return;
}


)B180025840",
    "97bac26c593d18d36a300c168a0d8188d577cd0004af1963f50b6d42c3dbb241",
    R"F180025840C(FUN_180209a80)F180025840C",
    R"F180025840D()F180025840D",
    R"F180025840T()F180025840T",
    R"F180025840F(11: return;)F180025840F",
    R"F180025840U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180025840U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180025840() noexcept {
    return kFunction_0x180025840;
}

// 0x180025860 FUN_180025860
// source: re/dump/decompile/0x180025860_FUN_180025860.c
// size: 6 bytes; thunk: false
// body sha256: c5677176ca63a96e812030b4285f5a51e21aecb3770527793f21fbe5a254416d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180025860{
    "0x180025860",
    "FUN_180025860",
    R"F180025860S(undefined FUN_180025860())F180025860S",
    R"B180025860(// 0x180025860  FUN_180025860
// size=6 thunk=false
// signature: undefined FUN_180025860()
// status: ok


void FUN_180025860(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}


)B180025860",
    "c5677176ca63a96e812030b4285f5a51e21aecb3770527793f21fbe5a254416d",
    R"F180025860C()F180025860C",
    R"F180025860D()F180025860D",
    R"F180025860T()F180025860T",
    R"F180025860F(11: return;)F180025860F",
    R"F180025860U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180025860U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180025860() noexcept {
    return kFunction_0x180025860;
}

// 0x180025890 FUN_180025890
// source: re/dump/decompile/0x180025890_FUN_180025890.c
// size: 506 bytes; thunk: false
// body sha256: 5ce6a476fa28a90d8f0bbf91d24799f349ae22f7419605996998f7fe412ab41f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180025890{
    "0x180025890",
    "FUN_180025890",
    R"F180025890S(undefined FUN_180025890())F180025890S",
    R"B180025890(// 0x180025890  FUN_180025890
// size=506 thunk=false
// signature: undefined FUN_180025890()
// status: ok


longlong * FUN_180025890(longlong *param_1,longlong param_2)

{
  char cVar1;
  HMODULE pHVar2;
  ulonglong uVar3;
  INT_PTR IVar4;
  longlong lVar5;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  if ((param_2 == 0) || (cVar1 = FUN_180025450(), cVar1 == '\0')) {
    return param_1;
  }
  if (DAT_180425550 == (FARPROC)0x0) {
    pHVar2 = GetModuleHandleA("lua_shared.dll");
    if (pHVar2 == (HMODULE)0x0) {
      return param_1;
    }
    DAT_180425550 = GetProcAddress(pHVar2,"luaL_ref");
    DAT_180426148 = GetProcAddress(pHVar2,"luaL_unref");
    if (DAT_180425550 == (FARPROC)0x0) {
      return param_1;
    }
  }
  if (DAT_180426148 == (FARPROC)0x0) {
    return param_1;
  }
  lVar5 = *param_1;
  if (DAT_1803fcfa0 == (FARPROC)0x0) {
    pHVar2 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fcfa0 = GetProcAddress(pHVar2,"lua_gettop");
  }
  uVar3 = (*DAT_1803fcfa0)(lVar5);
  (*DAT_1803fcba8)(*param_1,0xffffd8f0,"_VMEVENTS");
  lVar5 = *param_1;
  if (DAT_1803fe490 == (FARPROC)0x0) {
    pHVar2 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fe490 = GetProcAddress(pHVar2,"lua_type");
  }
  IVar4 = (*DAT_1803fe490)(lVar5,0xffffffff);
  lVar5 = *param_1;
  if ((int)IVar4 != 0) {
    IVar4 = (*DAT_180425550)(lVar5,0xffffd8f0);
    lVar5 = *param_1;
    *(int *)(param_1 + 1) = (int)IVar4;
    if (0 < (int)IVar4) {
      if (DAT_1803ff2a8 == (FARPROC)0x0) {
        pHVar2 = GetModuleHandleA("lua_shared.dll");
        DAT_1803ff2a8 = GetProcAddress(pHVar2,"lua_pushnil");
      }
      (*DAT_1803ff2a8)(lVar5);
      (*DAT_1803fcbe0)(*param_1,0xffffd8f0,"_VMEVENTS");
      lVar5 = *param_1;
      *(undefined1 *)((longlong)param_1 + 0xc) = 1;
    }
  }
  if (DAT_180425540 == (FARPROC)0x0) {
    pHVar2 = GetModuleHandleA("lua_shared.dll");
    DAT_180425540 = GetProcAddress(pHVar2,"lua_settop");
  }
  (*DAT_180425540)(lVar5,uVar3 & 0xffffffff);
  return param_1;
}


)B180025890",
    "5ce6a476fa28a90d8f0bbf91d24799f349ae22f7419605996998f7fe412ab41f",
    R"F180025890C(FUN_180025450)F180025890C",
    R"F180025890D(DAT_1803fcba8
DAT_1803fcbe0
DAT_1803fcfa0
DAT_1803fe490
DAT_1803ff2a8
DAT_180425540
DAT_180425550
DAT_180426148)F180025890D",
    R"F180025890T("luaL_ref"
"lua_type"
"_VMEVENTS"
"luaL_unref"
"lua_gettop"
"lua_settop"
"lua_pushnil"
"lua_shared.dll")F180025890T",
    R"F180025890F(19: if ((param_2 == 0) || (cVar1 = FUN_180025450(), cVar1 == '\0')) {
20: return param_1;
22: if (DAT_180425550 == (FARPROC)0x0) {
24: if (pHVar2 == (HMODULE)0x0) {
25: return param_1;
29: if (DAT_180425550 == (FARPROC)0x0) {
30: return param_1;
33: if (DAT_180426148 == (FARPROC)0x0) {
34: return param_1;
37: if (DAT_1803fcfa0 == (FARPROC)0x0) {
44: if (DAT_1803fe490 == (FARPROC)0x0) {
50: if ((int)IVar4 != 0) {
54: if (0 < (int)IVar4) {
55: if (DAT_1803ff2a8 == (FARPROC)0x0) {
65: if (DAT_180425540 == (FARPROC)0x0) {
70: return param_1;)F180025890F",
    R"F180025890U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcba8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcbe0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcfa0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fe490.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff2a8.
TODO: recover the declaration, type and value for global/data reference DAT_180425540.
TODO: recover the declaration, type and value for global/data reference DAT_180425550.
TODO: recover the declaration, type and value for global/data reference DAT_180426148.
TODO: resolve the indirect call in body 41: uVar3 = (*DAT_1803fcfa0)(lVar5);.
TODO: resolve the indirect call in body 42: (*DAT_1803fcba8)(*param_1,0xffffd8f0,"_VMEVENTS");.
TODO: resolve the indirect call in body 48: IVar4 = (*DAT_1803fe490)(lVar5,0xffffffff);.
TODO: resolve the indirect call in body 51: IVar4 = (*DAT_180425550)(lVar5,0xffffd8f0);.
TODO: resolve the indirect call in body 59: (*DAT_1803ff2a8)(lVar5);.
TODO: resolve the indirect call in body 60: (*DAT_1803fcbe0)(*param_1,0xffffd8f0,"_VMEVENTS");.
TODO: resolve the indirect call in body 69: (*DAT_180425540)(lVar5,uVar3 & 0xffffffff);.)F180025890U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180025890() noexcept {
    return kFunction_0x180025890;
}

// 0x180025a90 FUN_180025a90
// source: re/dump/decompile/0x180025a90_FUN_180025a90.c
// size: 360 bytes; thunk: false
// body sha256: c71e9b9d81c05e57ae81c279fdd3cfd71a43de70e152366aa6bfc4860e101254
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180025a90{
    "0x180025a90",
    "FUN_180025a90",
    R"F180025a90S(undefined FUN_180025a90())F180025a90S",
    R"B180025a90(// 0x180025a90  FUN_180025a90
// size=360 thunk=false
// signature: undefined FUN_180025a90()
// status: ok


void FUN_180025a90(longlong *param_1)

{
  longlong lVar1;
  HMODULE pHVar2;
  ulonglong uVar3;
  
  if ((*(char *)((longlong)param_1 + 0xc) != '\0') && (*param_1 != 0)) {
    if ((DAT_18042cd60 & 1) == 0) {
      DAT_18042cd60 = DAT_18042cd60 | 1;
      pHVar2 = GetModuleHandleA("lua_shared.dll");
      DAT_1804277b0 = GetProcAddress(pHVar2,"luaL_unref");
    }
    if ((DAT_18042cd60 & 2) == 0) {
      DAT_18042cd60 = DAT_18042cd60 | 2;
      pHVar2 = GetModuleHandleA("lua_shared.dll");
      DAT_180426250 = GetProcAddress(pHVar2,"lua_rawgeti");
    }
    if ((DAT_1804277b0 != (FARPROC)0x0) && (DAT_180426250 != (FARPROC)0x0)) {
      lVar1 = *param_1;
      if (DAT_1803fcfa0 == (FARPROC)0x0) {
        pHVar2 = GetModuleHandleA("lua_shared.dll");
        DAT_1803fcfa0 = GetProcAddress(pHVar2,"lua_gettop");
      }
      uVar3 = (*DAT_1803fcfa0)(lVar1);
      (*DAT_180426250)(*param_1,0xffffd8f0,(ulonglong)*(uint *)(param_1 + 1));
      (*DAT_1803fcbe0)(*param_1,0xffffd8f0,"_VMEVENTS");
      (*DAT_1804277b0)(*param_1,0xffffd8f0,(ulonglong)*(uint *)(param_1 + 1));
      lVar1 = *param_1;
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar2 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar2,"lua_settop");
      }
      (*DAT_180425540)(lVar1,uVar3 & 0xffffffff);
    }
  }
  return;
}


)B180025a90",
    "c71e9b9d81c05e57ae81c279fdd3cfd71a43de70e152366aa6bfc4860e101254",
    R"F180025a90C()F180025a90C",
    R"F180025a90D(DAT_1803fcbe0
DAT_1803fcfa0
DAT_180425540
DAT_180426250
DAT_1804277b0
DAT_18042cd60)F180025a90D",
    R"F180025a90T("_VMEVENTS"
"luaL_unref"
"lua_gettop"
"lua_settop"
"lua_rawgeti"
"lua_shared.dll")F180025a90T",
    R"F180025a90F(14: if ((*(char *)((longlong)param_1 + 0xc) != '\0') && (*param_1 != 0)) {
15: if ((DAT_18042cd60 & 1) == 0) {
20: if ((DAT_18042cd60 & 2) == 0) {
25: if ((DAT_1804277b0 != (FARPROC)0x0) && (DAT_180426250 != (FARPROC)0x0)) {
27: if (DAT_1803fcfa0 == (FARPROC)0x0) {
36: if (DAT_180425540 == (FARPROC)0x0) {
43: return;)F180025a90F",
    R"F180025a90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcbe0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcfa0.
TODO: recover the declaration, type and value for global/data reference DAT_180425540.
TODO: recover the declaration, type and value for global/data reference DAT_180426250.
TODO: recover the declaration, type and value for global/data reference DAT_1804277b0.
TODO: recover the declaration, type and value for global/data reference DAT_18042cd60.
TODO: resolve the indirect call in body 31: uVar3 = (*DAT_1803fcfa0)(lVar1);.
TODO: resolve the indirect call in body 32: (*DAT_180426250)(*param_1,0xffffd8f0,(ulonglong)*(uint *)(param_1 + 1));.
TODO: resolve the indirect call in body 33: (*DAT_1803fcbe0)(*param_1,0xffffd8f0,"_VMEVENTS");.
TODO: resolve the indirect call in body 34: (*DAT_1804277b0)(*param_1,0xffffd8f0,(ulonglong)*(uint *)(param_1 + 1));.
TODO: resolve the indirect call in body 40: (*DAT_180425540)(lVar1,uVar3 & 0xffffffff);.)F180025a90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180025a90() noexcept {
    return kFunction_0x180025a90;
}

// 0x180025c00 FUN_180025c00
// source: re/dump/decompile/0x180025c00_FUN_180025c00.c
// size: 85 bytes; thunk: false
// body sha256: 43888f70d747145bbec7f9d1c31963a0fdc12d92620d6d927824a619c2d9b15a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180025c00{
    "0x180025c00",
    "FUN_180025c00",
    R"F180025c00S(undefined FUN_180025c00())F180025c00S",
    R"B180025c00(// 0x180025c00  FUN_180025c00
// size=85 thunk=false
// signature: undefined FUN_180025c00()
// status: ok


undefined8 FUN_180025c00(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  while ((uVar1 + 1 < 0xc0 && (*(char *)(uVar1 + param_1) != '\0'))) {
    *(char *)(uVar1 + param_2) = *(char *)(uVar1 + param_1);
    uVar1 = uVar1 + 1;
  }
  *(undefined1 *)(uVar1 + param_2) = 0;
  return CONCAT71((int7)(uVar1 >> 8),uVar1 != 0);
}


)B180025c00",
    "43888f70d747145bbec7f9d1c31963a0fdc12d92620d6d927824a619c2d9b15a",
    R"F180025c00C()F180025c00C",
    R"F180025c00D()F180025c00D",
    R"F180025c00T()F180025c00T",
    R"F180025c00F(13: while ((uVar1 + 1 < 0xc0 && (*(char *)(uVar1 + param_1) != '\0'))) {
18: return CONCAT71((int7)(uVar1 >> 8),uVar1 != 0);)F180025c00F",
    R"F180025c00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180025c00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180025c00() noexcept {
    return kFunction_0x180025c00;
}

// 0x180025c60 FUN_180025c60
// source: re/dump/decompile/0x180025c60_FUN_180025c60.c
// size: 385 bytes; thunk: false
// body sha256: 091d9a4ed879320d9be1ff25fd572071af54c4a55c74f228509cd4acc4c79927
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180025c60{
    "0x180025c60",
    "FUN_180025c60",
    R"F180025c60S(undefined FUN_180025c60())F180025c60S",
    R"B180025c60(// 0x180025c60  FUN_180025c60
// size=385 thunk=false
// signature: undefined FUN_180025c60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180025c60(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *_Buf1;
  undefined8 *puVar8;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 local_e0;
  char local_d8 [192];
  ulonglong local_18;
  
  if (param_1 != 0) {
    local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_108;
    cVar2 = FUN_180025c00(param_1,local_d8);
    if (((cVar2 != '\0') && (sVar4 = strlen(local_d8), 7 < sVar4)) && (local_d8[0] == '@')) {
      lVar6 = 0;
      do {
        lVar7 = lVar6 + 1;
        if (local_d8[lVar6 + sVar4 + -4] != (&DAT_180340d34)[lVar6]) {
          return;
        }
        lVar6 = lVar7;
      } while (lVar7 != 5);
      local_e0 = &DAT_1803e7570;
      iVar3 = _Mtx_lock(&DAT_1803e7570);
      if (iVar3 != 0) {
        std::_Throw_Cpp_error(5);
      }
      if (DAT_1803e75bc == 0x7fffffff) {
        DAT_1803e75bc = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      puVar1 = DAT_1803eb400;
      puVar8 = DAT_1803eb3f8;
      if ((ulonglong)((longlong)DAT_1803eb400 - (longlong)DAT_1803eb3f8 >> 5) < 0x40) {
        for (; local_e8 = puVar8, puVar8 != puVar1; puVar8 = puVar8 + 4) {
          sVar5 = strlen(local_d8);
          sVar4 = puVar8[2];
          _Buf1 = puVar8;
          if (0xf < (ulonglong)puVar8[3]) {
            _Buf1 = (undefined8 *)*puVar8;
          }
          if ((sVar4 == sVar5) &&
             ((sVar4 == 0 || (iVar3 = memcmp(_Buf1,local_d8,sVar4), iVar3 == 0)))) {
            _Mtx_unlock(&DAT_1803e7570);
            return;
          }
        }
        FUN_180210940();
        _Mtx_unlock(&DAT_1803e7570);
      }
      else {
        _Mtx_unlock(&DAT_1803e7570);
      }
    }
  }
  return;
}


)B180025c60",
    "091d9a4ed879320d9be1ff25fd572071af54c4a55c74f228509cd4acc4c79927",
    R"F180025c60C(FUN_180025c00
FUN_180210940)F180025c60C",
    R"F180025c60D(DAT_180340d34
DAT_1803da4c0
DAT_1803e7570
DAT_1803e75bc
DAT_1803eb3f8
DAT_1803eb400)F180025c60D",
    R"F180025c60T()F180025c60T",
    R"F180025c60F(27: if (param_1 != 0) {
30: if (((cVar2 != '\0') && (sVar4 = strlen(local_d8), 7 < sVar4)) && (local_d8[0] == '@')) {
32: do {
34: if (local_d8[lVar6 + sVar4 + -4] != (&DAT_180340d34)[lVar6]) {
35: return;
41: if (iVar3 != 0) {
44: if (DAT_1803e75bc == 0x7fffffff) {
50: if ((ulonglong)((longlong)DAT_1803eb400 - (longlong)DAT_1803eb3f8 >> 5) < 0x40) {
51: for (; local_e8 = puVar8, puVar8 != puVar1; puVar8 = puVar8 + 4) {
55: if (0xf < (ulonglong)puVar8[3]) {
58: if ((sVar4 == sVar5) &&
61: return;
67: else {
72: return;)F180025c60F",
    R"F180025c60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180340d34.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7570.
TODO: recover the declaration, type and value for global/data reference DAT_1803e75bc.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb3f8.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb400.)F180025c60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180025c60() noexcept {
    return kFunction_0x180025c60;
}

// 0x180025df0 FUN_180025df0
// source: re/dump/decompile/0x180025df0_FUN_180025df0.c
// size: 222 bytes; thunk: false
// body sha256: 64ba5df2bb2574e5dae0a987ccba99966cdc00d020cdfdcc82dd97af2ee78624
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180025df0{
    "0x180025df0",
    "FUN_180025df0",
    R"F180025df0S(undefined FUN_180025df0())F180025df0S",
    R"B180025df0(// 0x180025df0  FUN_180025df0
// size=222 thunk=false
// signature: undefined FUN_180025df0()
// status: ok


undefined8
FUN_180025df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar2 = _Mtx_lock(&DAT_1803e7570);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (DAT_1803e75bc == 0x7fffffff) {
    DAT_1803e75bc = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  if (DAT_1803eb3f8 != DAT_1803eb400) {
    iVar2 = FUN_180022680(0,DAT_1803eb400 - DAT_1803eb3f8 >> 5,param_3,param_4,uVar4);
    FUN_18016d4c0(param_1,(longlong)iVar2 * 0x20 + DAT_1803eb3f8);
    _Mtx_unlock(&DAT_1803e7570);
    return param_1;
  }
  _Mtx_unlock(&DAT_1803e7570);
  FUN_180025ed0(param_1);
  return param_1;
}


)B180025df0",
    "64ba5df2bb2574e5dae0a987ccba99966cdc00d020cdfdcc82dd97af2ee78624",
    R"F180025df0C(FUN_180022680
FUN_180025ed0
FUN_18016d4c0)F180025df0C",
    R"F180025df0D(DAT_1803e7570
DAT_1803e75bc
DAT_1803eb3f8
DAT_1803eb400)F180025df0D",
    R"F180025df0T()F180025df0T",
    R"F180025df0F(18: if (iVar2 != 0) {
22: return uVar3;
24: if (DAT_1803e75bc == 0x7fffffff) {
28: if (DAT_1803eb3f8 != DAT_1803eb400) {
32: return param_1;
36: return param_1;)F180025df0F",
    R"F180025df0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7570.
TODO: recover the declaration, type and value for global/data reference DAT_1803e75bc.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb3f8.
TODO: recover the declaration, type and value for global/data reference DAT_1803eb400.
TODO: resolve the indirect call in body 20: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 21: uVar3 = (*pcVar1)();.)F180025df0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180025df0() noexcept {
    return kFunction_0x180025df0;
}

// 0x180025ed0 FUN_180025ed0
// source: re/dump/decompile/0x180025ed0_FUN_180025ed0.c
// size: 493 bytes; thunk: false
// body sha256: d0d33c3708b84b0c19cadaa92c0ad7c341c815bab528205f19ad235c731203a8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180025ed0{
    "0x180025ed0",
    "FUN_180025ed0",
    R"F180025ed0S(undefined FUN_180025ed0())F180025ed0S",
    R"B180025ed0(// 0x180025ed0  FUN_180025ed0
// size=493 thunk=false
// signature: undefined FUN_180025ed0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180025ed0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  size_t sVar7;
  undefined1 auStack_138 [32];
  undefined *local_118;
  undefined8 *local_110;
  undefined4 local_108;
  undefined8 *local_100;
  undefined1 local_f8 [32];
  char local_d8 [160];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_138;
  local_108 = 0;
  local_100 = param_1;
  if ((DAT_18042f170 & 1) == 0) {
    DAT_18042f170 = DAT_18042f170 | 1;
    FUN_1800224b0();
  }
  uVar4 = FUN_18021dbf0(&DAT_180426270);
  uVar6 = (ulonglong)uVar4 * 0xf;
  iVar5 = (int)uVar6;
  while (iVar5 == 0) {
    uVar4 = FUN_18021dbf0(&DAT_180426270);
    uVar6 = (ulonglong)uVar4 * 0xf;
    iVar5 = (int)uVar6;
  }
  puVar1 = (&PTR_s_wiremod_18033b0c0)[(uVar6 >> 0x20) - 0x80000000 ^ 0xffffffff80000000];
  if ((DAT_18042f170 & 1) == 0) {
    DAT_18042f170 = DAT_18042f170 | 1;
    FUN_1800224b0();
  }
  uVar4 = FUN_18021dbf0(&DAT_180426270);
  uVar6 = (ulonglong)uVar4 * 0xc;
  uVar4 = (uint)uVar6;
  while (uVar4 < 4) {
    uVar4 = FUN_18021dbf0(&DAT_180426270);
    uVar6 = (ulonglong)uVar4 * 0xc;
    uVar4 = (uint)uVar6;
  }
  puVar2 = (&PTR_DAT_18033b8d0)[(uVar6 >> 0x20) - 0x80000000 ^ 0xffffffff80000000];
  if ((DAT_18042f170 & 1) == 0) {
    DAT_18042f170 = DAT_18042f170 | 1;
    FUN_1800224b0();
  }
  uVar4 = FUN_18021dbf0(&DAT_180426270);
  lVar3 = (ulonglong)uVar4 * 5;
  iVar5 = (int)lVar3;
  while (iVar5 == 0) {
    uVar4 = FUN_18021dbf0(&DAT_180426270);
    lVar3 = (ulonglong)uVar4 * 5;
    iVar5 = (int)lVar3;
  }
  local_110 = (undefined8 *)
              FUN_180022740(local_f8,(int)((ulonglong)lVar3 >> 0x20) + 0x80000003U ^ 0x80000000);
  if (0xf < (ulonglong)local_110[3]) {
    local_110 = (undefined8 *)*local_110;
  }
  local_118 = puVar2;
  FUN_180012ac0(local_d8,0xa0,"@addons/%s/lua/autorun/client/%s_%s.lua",puVar1);
  FUN_18020e450(local_f8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar7 = strlen(local_d8);
  FUN_18001d080(param_1,local_d8,sVar7);
  return param_1;
}


)B180025ed0",
    "d0d33c3708b84b0c19cadaa92c0ad7c341c815bab528205f19ad235c731203a8",
    R"F180025ed0C(FUN_180012ac0
FUN_18001d080
FUN_1800224b0
FUN_180022740
FUN_18020e450
FUN_18021dbf0)F180025ed0C",
    R"F180025ed0D(DAT_1803da4c0
DAT_180426270
DAT_18042f170)F180025ed0D",
    R"F180025ed0T("@addons/%s/lua/autorun/client/%s_%s.lua")F180025ed0T",
    R"F180025ed0F(31: if ((DAT_18042f170 & 1) == 0) {
38: while (iVar5 == 0) {
44: if ((DAT_18042f170 & 1) == 0) {
51: while (uVar4 < 4) {
57: if ((DAT_18042f170 & 1) == 0) {
64: while (iVar5 == 0) {
71: if (0xf < (ulonglong)local_110[3]) {
83: return param_1;)F180025ed0F",
    R"F180025ed0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_180426270.
TODO: recover the declaration, type and value for global/data reference DAT_18042f170.)F180025ed0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180025ed0() noexcept {
    return kFunction_0x180025ed0;
}

// 0x1800260c0 FUN_1800260c0
// source: re/dump/decompile/0x1800260c0_FUN_1800260c0.c
// size: 666 bytes; thunk: false
// body sha256: 7401ac3bab975f77f475b3acc786114f78bb5801c764cf8909def6537249a3a5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800260c0{
    "0x1800260c0",
    "FUN_1800260c0",
    R"F1800260c0S(undefined FUN_1800260c0())F1800260c0S",
    R"B1800260c0(// 0x1800260c0  FUN_1800260c0
// size=666 thunk=false
// signature: undefined FUN_1800260c0()
// status: ok


undefined8 FUN_1800260c0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  HMODULE pHVar5;
  INT_PTR IVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  
  if (((param_1 != 0) && (cVar2 = FUN_180025450(), cVar2 != '\0')) &&
     (uVar1 = *(ulonglong *)(param_1 + 0x10), uVar1 != 0)) {
    plVar3 = (longlong *)DAT_1803fa7f0[1];
    cVar2 = *(char *)((longlong)plVar3 + 0x19);
    plVar8 = DAT_1803fa7f0;
    while (cVar2 == '\0') {
      plVar7 = plVar3;
      if ((ulonglong)plVar3[4] < uVar1) {
        plVar3 = plVar3 + 2;
        plVar7 = plVar8;
      }
      plVar3 = (longlong *)*plVar3;
      plVar8 = plVar7;
      cVar2 = *(char *)((longlong)plVar3 + 0x19);
    }
    if ((*(char *)((longlong)plVar8 + 0x19) != '\0') || (uVar1 < (ulonglong)plVar8[4])) {
      plVar8 = DAT_1803fa7f0;
    }
    if ((plVar8 != DAT_1803fa7f0) && (plVar8 != (longlong *)0xffffffffffffffd8)) {
      puVar4 = (undefined8 *)FUN_180025620(param_2);
      if (DAT_180423ad0 == (FARPROC)0x0) {
        pHVar5 = GetModuleHandleA("lua_shared.dll");
        DAT_180423ad0 = GetProcAddress(pHVar5,"lua_pushvalue");
      }
      (*DAT_180423ad0)(param_1,0xffffd8ed);
      if (DAT_1803fe490 == (FARPROC)0x0) {
        pHVar5 = GetModuleHandleA("lua_shared.dll");
        DAT_1803fe490 = GetProcAddress(pHVar5,"lua_type");
      }
      IVar6 = (*DAT_1803fe490)(param_1,0xffffffff);
      if ((int)IVar6 == 5) {
        puVar9 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar9 = (undefined8 *)*puVar4;
        }
        (*DAT_1803fcba8)(param_1,0xffffffff,puVar9);
        if (DAT_1803fe490 == (FARPROC)0x0) {
          pHVar5 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(pHVar5,"lua_type");
        }
        IVar6 = (*DAT_1803fe490)(param_1,0xffffffff);
        if ((int)IVar6 != 5) {
          if (DAT_180425540 == (FARPROC)0x0) {
            pHVar5 = GetModuleHandleA("lua_shared.dll");
            DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
          }
          (*DAT_180425540)(param_1,0xfffffffe);
          if (DAT_1803fd0f8 == (FARPROC)0x0) {
            pHVar5 = GetModuleHandleA("lua_shared.dll");
            DAT_1803fd0f8 = GetProcAddress(pHVar5,"lua_createtable");
          }
          (*DAT_1803fd0f8)(param_1,0,8);
          if (DAT_180423ad0 == (FARPROC)0x0) {
            pHVar5 = GetModuleHandleA("lua_shared.dll");
            DAT_180423ad0 = GetProcAddress(pHVar5,"lua_pushvalue");
          }
          (*DAT_180423ad0)(param_1,0xffffffff);
          if (0xf < (ulonglong)puVar4[3]) {
            puVar4 = (undefined8 *)*puVar4;
          }
          (*DAT_1803fcbe0)(param_1,0xfffffffd,puVar4);
        }
        (*DAT_1803fcba0)(param_1,0xfffffffe);
        return 1;
      }
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar5 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
      }
      (*DAT_180425540)(param_1,0xfffffffe);
    }
  }
  return 0;
}


)B1800260c0",
    "7401ac3bab975f77f475b3acc786114f78bb5801c764cf8909def6537249a3a5",
    R"F1800260c0C(FUN_180025450
FUN_180025620)F1800260c0C",
    R"F1800260c0D(DAT_1803fa7f0
DAT_1803fcba0
DAT_1803fcba8
DAT_1803fcbe0
DAT_1803fd0f8
DAT_1803fe490
DAT_180423ad0
DAT_180425540)F1800260c0D",
    R"F1800260c0T("lua_type"
"lua_settop"
"lua_pushvalue"
"lua_shared.dll"
"lua_createtable")F1800260c0T",
    R"F1800260c0F(20: if (((param_1 != 0) && (cVar2 = FUN_180025450(), cVar2 != '\0')) &&
25: while (cVar2 == '\0') {
27: if ((ulonglong)plVar3[4] < uVar1) {
35: if ((*(char *)((longlong)plVar8 + 0x19) != '\0') || (uVar1 < (ulonglong)plVar8[4])) {
38: if ((plVar8 != DAT_1803fa7f0) && (plVar8 != (longlong *)0xffffffffffffffd8)) {
40: if (DAT_180423ad0 == (FARPROC)0x0) {
45: if (DAT_1803fe490 == (FARPROC)0x0) {
50: if ((int)IVar6 == 5) {
52: if (0xf < (ulonglong)puVar4[3]) {
56: if (DAT_1803fe490 == (FARPROC)0x0) {
61: if ((int)IVar6 != 5) {
62: if (DAT_180425540 == (FARPROC)0x0) {
67: if (DAT_1803fd0f8 == (FARPROC)0x0) {
72: if (DAT_180423ad0 == (FARPROC)0x0) {
77: if (0xf < (ulonglong)puVar4[3]) {
83: return 1;
85: if (DAT_180425540 == (FARPROC)0x0) {
92: return 0;)F1800260c0F",
    R"F1800260c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa7f0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcba0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcba8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcbe0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fd0f8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fe490.
TODO: recover the declaration, type and value for global/data reference DAT_180423ad0.
TODO: recover the declaration, type and value for global/data reference DAT_180425540.
TODO: resolve the indirect call in body 44: (*DAT_180423ad0)(param_1,0xffffd8ed);.
TODO: resolve the indirect call in body 49: IVar6 = (*DAT_1803fe490)(param_1,0xffffffff);.
TODO: resolve the indirect call in body 55: (*DAT_1803fcba8)(param_1,0xffffffff,puVar9);.
TODO: resolve the indirect call in body 60: IVar6 = (*DAT_1803fe490)(param_1,0xffffffff);.
TODO: resolve the indirect call in body 66: (*DAT_180425540)(param_1,0xfffffffe);.
TODO: resolve the indirect call in body 71: (*DAT_1803fd0f8)(param_1,0,8);.
TODO: resolve the indirect call in body 76: (*DAT_180423ad0)(param_1,0xffffffff);.
TODO: resolve the indirect call in body 80: (*DAT_1803fcbe0)(param_1,0xfffffffd,puVar4);.
TODO: resolve the indirect call in body 82: (*DAT_1803fcba0)(param_1,0xfffffffe);.
TODO: resolve the indirect call in body 89: (*DAT_180425540)(param_1,0xfffffffe);.)F1800260c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800260c0() noexcept {
    return kFunction_0x1800260c0;
}

// 0x180026360 FUN_180026360
// source: re/dump/decompile/0x180026360_FUN_180026360.c
// size: 442 bytes; thunk: false
// body sha256: 9ac546fba8730c2621192a1cb99b2d3238abcf82dcb5f8557d68f3096b48c397
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180026360{
    "0x180026360",
    "FUN_180026360",
    R"F180026360S(undefined FUN_180026360())F180026360S",
    R"B180026360(// 0x180026360  FUN_180026360
// size=442 thunk=false
// signature: undefined FUN_180026360()
// status: ok


undefined8 FUN_180026360(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  HMODULE pHVar3;
  
  cVar1 = FUN_180025450();
  if ((cVar1 != '\0') && (iVar2 = FUN_180022f60(param_1), 1 < iVar2)) {
    if (0 < DAT_1803ff8e8) {
      if (((DAT_1803ff8ed != '\0') || (DAT_1803ff8ec != '\0')) &&
         (cVar1 = FUN_1800260c0(param_1,0xa66cb242adaa3914), cVar1 != '\0')) {
        FUN_180022f00(param_1,2);
        (*DAT_1803fcbb0)(param_1,0xfffffffe);
        iVar2 = FUN_1800235f0(param_1,0xffffffff);
        if (iVar2 != 0) {
          (*DAT_1803fcba0)(param_1,0xfffffffe);
          return 1;
        }
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar3 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar3,"lua_settop");
        }
        (*DAT_180425540)(param_1,0xfffffffd);
      }
      if ((0 < DAT_1803ff8e8) && (cVar1 = FUN_1800260c0(param_1,0x2736efefe1fb290), cVar1 != '\0'))
      {
        FUN_180022f00(param_1,2);
        (*DAT_1803fcbb0)(param_1,0xfffffffe);
        iVar2 = FUN_1800235f0(param_1,0xffffffff);
        if (iVar2 != 0) {
          (*DAT_1803fcba0)(param_1,0xfffffffe);
          return 1;
        }
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar3 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar3,"lua_settop");
        }
        (*DAT_180425540)(param_1,0xfffffffd);
      }
    }
    FUN_180022f00(param_1,2);
    (*DAT_1803fcbb0)(param_1,0xffffd8ee);
    return 1;
  }
  FUN_180023240(param_1);
  return 1;
}


)B180026360",
    "9ac546fba8730c2621192a1cb99b2d3238abcf82dcb5f8557d68f3096b48c397",
    R"F180026360C(FUN_180022f00
FUN_180022f60
FUN_180023240
FUN_1800235f0
FUN_180025450
FUN_1800260c0)F180026360C",
    R"F180026360D(DAT_1803fcba0
DAT_1803fcbb0
DAT_1803ff8e8
DAT_1803ff8ec
DAT_1803ff8ed
DAT_180425540)F180026360D",
    R"F180026360T("lua_settop"
"lua_shared.dll")F180026360T",
    R"F180026360F(15: if ((cVar1 != '\0') && (iVar2 = FUN_180022f60(param_1), 1 < iVar2)) {
16: if (0 < DAT_1803ff8e8) {
17: if (((DAT_1803ff8ed != '\0') || (DAT_1803ff8ec != '\0')) &&
22: if (iVar2 != 0) {
24: return 1;
26: if (DAT_180425540 == (FARPROC)0x0) {
32: if ((0 < DAT_1803ff8e8) && (cVar1 = FUN_1800260c0(param_1,0x2736efefe1fb290), cVar1 != '\0'))
37: if (iVar2 != 0) {
39: return 1;
41: if (DAT_180425540 == (FARPROC)0x0) {
50: return 1;
53: return 1;)F180026360F",
    R"F180026360U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcba0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcbb0.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff8e8.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff8ec.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff8ed.
TODO: recover the declaration, type and value for global/data reference DAT_180425540.
TODO: resolve the indirect call in body 20: (*DAT_1803fcbb0)(param_1,0xfffffffe);.
TODO: resolve the indirect call in body 23: (*DAT_1803fcba0)(param_1,0xfffffffe);.
TODO: resolve the indirect call in body 30: (*DAT_180425540)(param_1,0xfffffffd);.
TODO: resolve the indirect call in body 35: (*DAT_1803fcbb0)(param_1,0xfffffffe);.
TODO: resolve the indirect call in body 38: (*DAT_1803fcba0)(param_1,0xfffffffe);.
TODO: resolve the indirect call in body 45: (*DAT_180425540)(param_1,0xfffffffd);.
TODO: resolve the indirect call in body 49: (*DAT_1803fcbb0)(param_1,0xffffd8ee);.)F180026360U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180026360() noexcept {
    return kFunction_0x180026360;
}

// 0x180026560 FUN_180026560
// source: re/dump/decompile/0x180026560_FUN_180026560.c
// size: 85 bytes; thunk: false
// body sha256: aea9c9726aeefde5eff12d36c6e362532cdd048e034d076cf44a09a343292fb9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180026560{
    "0x180026560",
    "FUN_180026560",
    R"F180026560S(undefined FUN_180026560())F180026560S",
    R"B180026560(// 0x180026560  FUN_180026560
// size=85 thunk=false
// signature: undefined FUN_180026560()
// status: ok


undefined8 FUN_180026560(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_180025450();
  if ((cVar1 != '\0') && (iVar2 = FUN_180022f60(param_1), 2 < iVar2)) {
    FUN_180022f00(param_1,2);
    FUN_180022f00(param_1,3);
    (*DAT_1803fcbb8)(param_1,1);
  }
  return 0;
}


)B180026560",
    "aea9c9726aeefde5eff12d36c6e362532cdd048e034d076cf44a09a343292fb9",
    R"F180026560C(FUN_180022f00
FUN_180022f60
FUN_180025450)F180026560C",
    R"F180026560D(DAT_1803fcbb8)F180026560D",
    R"F180026560T()F180026560T",
    R"F180026560F(14: if ((cVar1 != '\0') && (iVar2 = FUN_180022f60(param_1), 2 < iVar2)) {
19: return 0;)F180026560F",
    R"F180026560U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcbb8.
TODO: resolve the indirect call in body 17: (*DAT_1803fcbb8)(param_1,1);.)F180026560U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180026560() noexcept {
    return kFunction_0x180026560;
}

// 0x1800265c0 FUN_1800265c0
// source: re/dump/decompile/0x1800265c0_FUN_1800265c0.c
// size: 705 bytes; thunk: false
// body sha256: cb7c333159c2a8d2293c704edef6c9d6705b4f2d992b8865ea7c4ace1955aee8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800265c0{
    "0x1800265c0",
    "FUN_1800265c0",
    R"F1800265c0S(undefined FUN_1800265c0())F1800265c0S",
    R"B1800265c0(// 0x1800265c0  FUN_1800265c0
// size=705 thunk=false
// signature: undefined FUN_1800265c0()
// status: ok


undefined8 FUN_1800265c0(longlong param_1)

{
  char cVar1;
  HMODULE pHVar2;
  ulonglong uVar3;
  INT_PTR IVar4;
  ulonglong uVar5;
  
  if (param_1 != 0) {
    cVar1 = FUN_180025450();
    if (cVar1 != '\0') {
      cVar1 = FUN_1800260c0(param_1,0x20cf586ef656cb7a);
      if (cVar1 != '\0') {
        if (DAT_1803fcfa0 == (FARPROC)0x0) {
          pHVar2 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fcfa0 = GetProcAddress(pHVar2,"lua_gettop");
        }
        uVar3 = (*DAT_1803fcfa0)(param_1);
        (*DAT_1803fcb98)(param_1,0);
        (*DAT_1803fcbb0)(param_1,uVar3 & 0xffffffff);
        if (DAT_1803fe490 == (FARPROC)0x0) {
          pHVar2 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(pHVar2,"lua_type");
        }
        IVar4 = (*DAT_1803fe490)(param_1,0xffffffff);
        if ((int)IVar4 == 5) {
          (*DAT_1803fcba0)(param_1,uVar3 & 0xffffffff);
          return 1;
        }
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar2 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar2,"lua_settop");
        }
        (*DAT_180425540)(param_1,0xfffffffe);
        if (DAT_1803fd0f8 == (FARPROC)0x0) {
          pHVar2 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fd0f8 = GetProcAddress(pHVar2,"lua_createtable");
        }
        (*DAT_1803fd0f8)(param_1,0,8);
        if (DAT_1803fcfa0 == (FARPROC)0x0) {
          pHVar2 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fcfa0 = GetProcAddress(pHVar2,"lua_gettop");
        }
        uVar5 = (*DAT_1803fcfa0)(param_1);
        if (DAT_1803fd0f8 == (FARPROC)0x0) {
          pHVar2 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fd0f8 = GetProcAddress(pHVar2,"lua_createtable");
        }
        (*DAT_1803fd0f8)(param_1,0,3);
        (*DAT_1803fcbc0)(param_1,FUN_180026360,0);
        (*DAT_1803fcbe0)(param_1,0xfffffffe,"__index");
        (*DAT_1803fcbc0)(param_1,FUN_180026560,0);
        (*DAT_1803fcbe0)(param_1,0xfffffffe,"__newindex");
        (*DAT_1803fcbd0)(param_1,0);
        (*DAT_1803fcbe0)(param_1,0xfffffffe,"__metatable");
        (*DAT_1803fcb90)(param_1,uVar5 & 0xffffffff);
        (*DAT_1803fcb98)(param_1,0);
        if (DAT_180423ad0 == (FARPROC)0x0) {
          pHVar2 = GetModuleHandleA("lua_shared.dll");
          DAT_180423ad0 = GetProcAddress(pHVar2,"lua_pushvalue");
        }
        (*DAT_180423ad0)(param_1,uVar5 & 0xffffffff);
        (*DAT_1803fcbb8)(param_1,uVar3 & 0xffffffff);
        (*DAT_1803fcba0)(param_1,uVar3 & 0xffffffff);
        return 1;
      }
    }
  }
  return 0;
}


)B1800265c0",
    "cb7c333159c2a8d2293c704edef6c9d6705b4f2d992b8865ea7c4ace1955aee8",
    R"F1800265c0C(FUN_180025450
FUN_1800260c0
FUN_180026360
FUN_180026560)F1800265c0C",
    R"F1800265c0D(DAT_1803fcb90
DAT_1803fcb98
DAT_1803fcba0
DAT_1803fcbb0
DAT_1803fcbb8
DAT_1803fcbc0
DAT_1803fcbd0
DAT_1803fcbe0
DAT_1803fcfa0
DAT_1803fd0f8
DAT_1803fe490
DAT_180423ad0
DAT_180425540)F1800265c0D",
    R"F1800265c0T("__index"
"lua_type"
"__newindex"
"lua_gettop"
"lua_settop"
"__metatable"
"lua_pushvalue"
"lua_shared.dll"
"lua_createtable")F1800265c0T",
    R"F1800265c0F(16: if (param_1 != 0) {
18: if (cVar1 != '\0') {
20: if (cVar1 != '\0') {
21: if (DAT_1803fcfa0 == (FARPROC)0x0) {
28: if (DAT_1803fe490 == (FARPROC)0x0) {
33: if ((int)IVar4 == 5) {
35: return 1;
37: if (DAT_180425540 == (FARPROC)0x0) {
42: if (DAT_1803fd0f8 == (FARPROC)0x0) {
47: if (DAT_1803fcfa0 == (FARPROC)0x0) {
52: if (DAT_1803fd0f8 == (FARPROC)0x0) {
65: if (DAT_180423ad0 == (FARPROC)0x0) {
72: return 1;
76: return 0;)F1800265c0F",
    R"F1800265c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcb90.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcb98.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcba0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcbb0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcbb8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcbc0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcbd0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcbe0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fcfa0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fd0f8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fe490.
TODO: recover the declaration, type and value for global/data reference DAT_180423ad0.
TODO: recover the declaration, type and value for global/data reference DAT_180425540.
TODO: resolve the indirect call in body 25: uVar3 = (*DAT_1803fcfa0)(param_1);.
TODO: resolve the indirect call in body 26: (*DAT_1803fcb98)(param_1,0);.
TODO: resolve the indirect call in body 27: (*DAT_1803fcbb0)(param_1,uVar3 & 0xffffffff);.
TODO: resolve the indirect call in body 32: IVar4 = (*DAT_1803fe490)(param_1,0xffffffff);.
TODO: resolve the indirect call in body 34: (*DAT_1803fcba0)(param_1,uVar3 & 0xffffffff);.
TODO: resolve the indirect call in body 41: (*DAT_180425540)(param_1,0xfffffffe);.
TODO: resolve the indirect call in body 46: (*DAT_1803fd0f8)(param_1,0,8);.
TODO: resolve the indirect call in body 51: uVar5 = (*DAT_1803fcfa0)(param_1);.
TODO: resolve the indirect call in body 56: (*DAT_1803fd0f8)(param_1,0,3);.
TODO: resolve the indirect call in body 57: (*DAT_1803fcbc0)(param_1,FUN_180026360,0);.
TODO: resolve the indirect call in body 58: (*DAT_1803fcbe0)(param_1,0xfffffffe,"__index");.
TODO: resolve the indirect call in body 59: (*DAT_1803fcbc0)(param_1,FUN_180026560,0);.
TODO: resolve the indirect call in body 60: (*DAT_1803fcbe0)(param_1,0xfffffffe,"__newindex");.
TODO: resolve the indirect call in body 61: (*DAT_1803fcbd0)(param_1,0);.
TODO: resolve the indirect call in body 62: (*DAT_1803fcbe0)(param_1,0xfffffffe,"__metatable");.
TODO: resolve the indirect call in body 63: (*DAT_1803fcb90)(param_1,uVar5 & 0xffffffff);.
TODO: resolve the indirect call in body 64: (*DAT_1803fcb98)(param_1,0);.
TODO: resolve the indirect call in body 69: (*DAT_180423ad0)(param_1,uVar5 & 0xffffffff);.
TODO: resolve the indirect call in body 70: (*DAT_1803fcbb8)(param_1,uVar3 & 0xffffffff);.
TODO: resolve the indirect call in body 71: (*DAT_1803fcba0)(param_1,uVar3 & 0xffffffff);.)F1800265c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800265c0() noexcept {
    return kFunction_0x1800265c0;
}

// 0x180026890 FUN_180026890
// source: re/dump/decompile/0x180026890_FUN_180026890.c
// size: 183 bytes; thunk: false
// body sha256: d4e1a7da141394dff78cab53c6f2a2dc0d5bf0854974a2eee7b4b4a5340291ec
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180026890{
    "0x180026890",
    "FUN_180026890",
    R"F180026890S(undefined FUN_180026890())F180026890S",
    R"B180026890(// 0x180026890  FUN_180026890
// size=183 thunk=false
// signature: undefined FUN_180026890()
// status: ok


bool FUN_180026890(longlong param_1)

{
  char cVar1;
  HMODULE pHVar2;
  INT_PTR IVar3;
  
  if (param_1 != 0) {
    cVar1 = FUN_180025450();
    if (cVar1 != '\0') {
      if (DAT_1803fe490 == (FARPROC)0x0) {
        pHVar2 = GetModuleHandleA("lua_shared.dll");
        DAT_1803fe490 = GetProcAddress(pHVar2,"lua_type");
      }
      IVar3 = (*DAT_1803fe490)(param_1,0xffffffff);
      if ((int)IVar3 == 6) {
        cVar1 = FUN_1800265c0(param_1);
        if (cVar1 != '\0') {
          if (DAT_1804253c0 == (FARPROC)0x0) {
            pHVar2 = GetModuleHandleA("lua_shared.dll");
            DAT_1804253c0 = GetProcAddress(pHVar2,"lua_setfenv");
          }
          IVar3 = (*DAT_1804253c0)(param_1,0xfffffffe);
          return (int)IVar3 != 0;
        }
      }
    }
  }
  return false;
}


)B180026890",
    "d4e1a7da141394dff78cab53c6f2a2dc0d5bf0854974a2eee7b4b4a5340291ec",
    R"F180026890C(FUN_180025450
FUN_1800265c0)F180026890C",
    R"F180026890D(DAT_1803fe490
DAT_1804253c0)F180026890D",
    R"F180026890T("lua_type"
"lua_setfenv"
"lua_shared.dll")F180026890T",
    R"F180026890F(14: if (param_1 != 0) {
16: if (cVar1 != '\0') {
17: if (DAT_1803fe490 == (FARPROC)0x0) {
22: if ((int)IVar3 == 6) {
24: if (cVar1 != '\0') {
25: if (DAT_1804253c0 == (FARPROC)0x0) {
30: return (int)IVar3 != 0;
35: return false;)F180026890F",
    R"F180026890U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fe490.
TODO: recover the declaration, type and value for global/data reference DAT_1804253c0.
TODO: resolve the indirect call in body 21: IVar3 = (*DAT_1803fe490)(param_1,0xffffffff);.
TODO: resolve the indirect call in body 29: IVar3 = (*DAT_1804253c0)(param_1,0xfffffffe);.)F180026890U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180026890() noexcept {
    return kFunction_0x180026890;
}

// 0x180026950 FUN_180026950
// source: re/dump/decompile/0x180026950_FUN_180026950.c
// size: 111 bytes; thunk: false
// body sha256: a97eb33e157f73ae0bea0c3bf36560ecda747df60fa4fa43d4f8aa4e4f990a35
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180026950{
    "0x180026950",
    "FUN_180026950",
    R"F180026950S(undefined FUN_180026950())F180026950S",
    R"B180026950(// 0x180026950  FUN_180026950
// size=111 thunk=false
// signature: undefined FUN_180026950()
// status: ok


byte FUN_180026950(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar1 = param_1 + 2;
  plVar3 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    plVar3 = (longlong *)*param_1;
  }
  if (*plVar1 == 7) {
    iVar2 = (int)*plVar3 + -0x76776e40;
    if ((iVar2 == 0) && (iVar2 = *(ushort *)((longlong)plVar3 + 4) - 0x7261, iVar2 == 0)) {
      iVar2 = *(byte *)((longlong)plVar3 + 6) - 0x73;
    }
    if (iVar2 == 0) {
      return 1;
    }
  }
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (longlong *)*param_1;
  }
  if (*plVar1 == 8) {
    return -(*param_1 == 0x7372617632776e40) & 2;
  }
  return 0;
}


)B180026950",
    "a97eb33e157f73ae0bea0c3bf36560ecda747df60fa4fa43d4f8aa4e4f990a35",
    R"F180026950C()F180026950C",
    R"F180026950D()F180026950D",
    R"F180026950T()F180026950T",
    R"F180026950F(16: if (0xf < (ulonglong)param_1[3]) {
19: if (*plVar1 == 7) {
21: if ((iVar2 == 0) && (iVar2 = *(ushort *)((longlong)plVar3 + 4) - 0x7261, iVar2 == 0)) {
24: if (iVar2 == 0) {
25: return 1;
28: if (0xf < (ulonglong)param_1[3]) {
31: if (*plVar1 == 8) {
32: return -(*param_1 == 0x7372617632776e40) & 2;
34: return 0;)F180026950F",
    R"F180026950U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180026950U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180026950() noexcept {
    return kFunction_0x180026950;
}

// 0x1800269c0 FUN_1800269c0
// source: re/dump/decompile/0x1800269c0_FUN_1800269c0.c
// size: 317 bytes; thunk: false
// body sha256: 8351c09fca5317d3fa9481301fdb90c36dcca5abe5b2ae238b98ad50d5218307
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800269c0{
    "0x1800269c0",
    "FUN_1800269c0",
    R"F1800269c0S(undefined FUN_1800269c0())F1800269c0S",
    R"B1800269c0(// 0x1800269c0  FUN_1800269c0
// size=317 thunk=false
// signature: undefined FUN_1800269c0()
// status: ok


undefined8 *
FUN_1800269c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined *local_28;
  undefined8 local_20;
  
  uVar7 = 0;
  local_28 = &DAT_1803e90e0;
  local_30 = param_1;
  iVar3 = _Mtx_lock(&DAT_1803e90e0);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined8 *)(*pcVar1)();
    return puVar4;
  }
  if (DAT_1803e912c == 0x7fffffff) {
    DAT_1803e912c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar5 = DAT_1803ea2b0 - DAT_1803ea2a8 >> 5;
  if (uVar5 != 0) {
    if (0x7ffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    FUN_180238ad0();
    lVar2 = DAT_1803ea2b0;
    local_50 = *param_1;
    uStack_48 = local_50;
    local_40 = param_1;
    local_38 = param_1;
    for (lVar6 = DAT_1803ea2a8; lVar6 != lVar2; lVar6 = lVar6 + 0x20) {
      FUN_180233130(&local_50,lVar6,param_3,param_4,uVar7);
    }
    param_1[1] = uStack_48;
    local_38 = (undefined8 *)0x0;
    local_50 = uStack_48;
    local_20 = uStack_48;
  }
  _Mtx_unlock(&DAT_1803e90e0);
  return param_1;
}


)B1800269c0",
    "8351c09fca5317d3fa9481301fdb90c36dcca5abe5b2ae238b98ad50d5218307",
    R"F1800269c0C(FUN_18020cc40
FUN_180233130
FUN_180238ad0)F1800269c0C",
    R"F1800269c0D(DAT_1803e90e0
DAT_1803e912c
DAT_1803ea2a8
DAT_1803ea2b0)F1800269c0D",
    R"F1800269c0T()F1800269c0T",
    R"F1800269c0F(30: if (iVar3 != 0) {
34: return puVar4;
36: if (DAT_1803e912c == 0x7fffffff) {
44: if (uVar5 != 0) {
45: if (0x7ffffffffffffff < uVar5) {
55: for (lVar6 = DAT_1803ea2a8; lVar6 != lVar2; lVar6 = lVar6 + 0x20) {
64: return param_1;)F1800269c0F",
    R"F1800269c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e90e0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e912c.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea2a8.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea2b0.
TODO: resolve the indirect call in body 32: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 33: puVar4 = (undefined8 *)(*pcVar1)();.)F1800269c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800269c0() noexcept {
    return kFunction_0x1800269c0;
}

// 0x180026b00 FUN_180026b00
// source: re/dump/decompile/0x180026b00_FUN_180026b00.c
// size: 180 bytes; thunk: false
// body sha256: 04e9b9772a8135e86032147d009c78bff3802a1368de99a95676954ef0b50608
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180026b00{
    "0x180026b00",
    "FUN_180026b00",
    R"F180026b00S(undefined FUN_180026b00())F180026b00S",
    R"B180026b00(// 0x180026b00  FUN_180026b00
// size=180 thunk=false
// signature: undefined FUN_180026b00()
// status: ok


undefined8 * FUN_180026b00(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar2 = _Mtx_lock(&DAT_1803e91a0);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined8 *)(*pcVar1)();
    return puVar3;
  }
  if (DAT_1803e91ec == 0x7fffffff) {
    DAT_1803e91ec = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_180218b50(param_1,DAT_1803e9b28 - DAT_1803e9b20 >> 6,param_3,&DAT_1803e9b28,uVar4);
  _Mtx_unlock(&DAT_1803e91a0);
  return param_1;
}


)B180026b00",
    "04e9b9772a8135e86032147d009c78bff3802a1368de99a95676954ef0b50608",
    R"F180026b00C(FUN_180218b50)F180026b00C",
    R"F180026b00D(DAT_1803e91a0
DAT_1803e91ec
DAT_1803e9b20
DAT_1803e9b28)F180026b00D",
    R"F180026b00T()F180026b00T",
    R"F180026b00F(17: if (iVar2 != 0) {
21: return puVar3;
23: if (DAT_1803e91ec == 0x7fffffff) {
32: return param_1;)F180026b00F",
    R"F180026b00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e91a0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e91ec.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b20.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b28.
TODO: resolve the indirect call in body 19: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 20: puVar3 = (undefined8 *)(*pcVar1)();.)F180026b00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180026b00() noexcept {
    return kFunction_0x180026b00;
}

// 0x180026bc0 FUN_180026bc0
// source: re/dump/decompile/0x180026bc0_FUN_180026bc0.c
// size: 1126 bytes; thunk: false
// body sha256: cda243c4e18447ab26402dc5c06fe9027df83f9c0e4b04c29b6a48c8cbbc97a8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180026bc0{
    "0x180026bc0",
    "FUN_180026bc0",
    R"F180026bc0S(undefined FUN_180026bc0())F180026bc0S",
    R"B180026bc0(// 0x180026bc0  FUN_180026bc0
// size=1126 thunk=false
// signature: undefined FUN_180026bc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180026bc0(byte *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  byte *pbVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  byte *******pppppppbVar7;
  byte *pbVar8;
  byte *******pppppppbVar9;
  char *pcVar10;
  longlong lVar11;
  byte *pbVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 *******pppppppuVar15;
  undefined1 auStack_218 [32];
  uint local_1f8;
  undefined8 *local_1f0;
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [32];
  char local_1a8 [256];
  byte ******local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined8 ******local_88 [2];
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_218;
  uVar13 = 0;
  local_1f8 = 0;
  lVar3 = param_2[1];
  lVar11 = *param_2;
  local_1f0 = param_3;
  if (lVar11 != lVar3) {
    do {
      FUN_18020e450(lVar11);
      lVar11 = lVar11 + 0x20;
    } while (lVar11 != lVar3);
    param_2[1] = *param_2;
  }
  param_3[2] = 0;
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  *(undefined1 *)param_3 = 0;
  lVar3 = *(longlong *)(param_1 + 0x10);
  pbVar12 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pbVar12 = *(byte **)param_1;
  }
  if (lVar3 != 0) {
    if (lVar3 + 2U < 0x10) {
      memset(local_1a8,0,0x100);
      pbVar8 = &DAT_180340eb4;
      do {
        local_1a8[*pbVar8] = '\x01';
        pbVar8 = pbVar8 + 1;
        pbVar2 = pbVar12;
      } while (pbVar8 != &DAT_180340eb6);
      for (; pbVar2 < pbVar12 + lVar3; pbVar2 = pbVar2 + 1) {
        if (local_1a8[*pbVar2] == '\0') {
          lVar3 = (longlong)pbVar2 - (longlong)pbVar12;
          goto LAB_180026d42;
        }
      }
    }
    else {
      lVar3 = FUN_1802d6fd0(pbVar12,lVar3,&DAT_180340eb4,2);
LAB_180026d42:
      pbVar12 = &DAT_180340eb4;
      if (lVar3 != -1) {
        pbVar8 = param_1;
        if (0xf < *(ulonglong *)(param_1 + 0x18)) {
          pbVar8 = *(byte **)param_1;
        }
        if (*(longlong *)(param_1 + 0x10) == 0) {
LAB_180026d63:
          lVar11 = -1;
        }
        else {
          lVar5 = *(longlong *)(param_1 + 0x10) + -1;
          lVar11 = -1;
          if (lVar5 != -1) {
            lVar11 = lVar5;
          }
          if (lVar11 + 3U < 0x10) {
            memset(local_1a8,0,0x100);
            do {
              local_1a8[*pbVar12] = '\x01';
              pbVar12 = pbVar12 + 1;
            } while (pbVar12 != &DAT_180340eb6);
            pbVar12 = pbVar8 + lVar11;
            cVar1 = local_1a8[*pbVar12];
            while (cVar1 != '\0') {
              if (pbVar12 == pbVar8) goto LAB_180026d63;
              pbVar12 = pbVar12 + -1;
              cVar1 = local_1a8[*pbVar12];
            }
            lVar11 = (longlong)pbVar12 - (longlong)pbVar8;
          }
          else {
            lVar11 = thunk_FUN_1802d4c50(pbVar8,lVar11 + 1,&DAT_180340eb4,2);
          }
        }
        FUN_18020e670(param_1,local_88,lVar3,(lVar11 - lVar3) + 1);
        if (local_78 < 0x81) {
          uVar4 = 0;
          do {
            pppppppuVar15 = local_88;
            if (0xf < local_70) {
              pppppppuVar15 = (undefined8 *******)local_88[0];
            }
            if ((uVar4 < local_78) &&
               (lVar3 = local_78 + (longlong)pppppppuVar15,
               lVar11 = thunk_FUN_1802d5c20((longlong)pppppppuVar15 + uVar4,lVar3,0x2e),
               lVar11 != lVar3)) {
              lVar11 = lVar11 - (longlong)pppppppuVar15;
              if (lVar11 == -1) goto LAB_180026eb7;
              puVar6 = (undefined8 *)FUN_18020e670(local_88,local_1e8,uVar4,lVar11 - uVar4);
              uVar13 = uVar13 | 2;
            }
            else {
              lVar11 = -1;
LAB_180026eb7:
              puVar6 = (undefined8 *)FUN_18020e670(local_88,local_1c8,uVar4,0xffffffffffffffff);
              uVar13 = uVar13 | 1;
            }
            pppppppbVar7 = (byte *******)*puVar6;
            local_a8 = (byte ******)pppppppbVar7;
            uStack_a0 = puVar6[1];
            lVar3 = puVar6[2];
            uVar4 = puVar6[3];
            local_98 = lVar3;
            uStack_90 = uVar4;
            *(undefined1 *)puVar6 = 0;
            puVar6[2] = 0;
            puVar6[3] = 0xf;
            local_1f8 = uVar13;
            if ((uVar13 & 2) != 0) {
              uVar13 = uVar13 & 0xfffffffd;
              local_1f8 = uVar13;
              FUN_18020e450(local_1e8);
            }
            if ((uVar13 & 1) != 0) {
              uVar13 = uVar13 & 0xfffffffe;
              local_1f8 = uVar13;
              FUN_18020e450(local_1c8);
            }
            if (lVar3 == 0) {
              pcVar10 = "empty segment (doubled, leading or trailing \'.\')";
              uVar14 = 0x30;
LAB_180026ffc:
              FUN_180212700(local_1f0,pcVar10,uVar14);
              FUN_18020e450(&local_a8);
              goto LAB_180027010;
            }
            if (uVar4 < 0x10) {
              pppppppbVar7 = &local_a8;
            }
            pppppppbVar9 = (byte *******)((longlong)pppppppbVar7 + lVar3);
            for (; pppppppbVar7 != pppppppbVar9;
                pppppppbVar7 = (byte *******)((longlong)pppppppbVar7 + 1)) {
              if ((*(byte *)pppppppbVar7 < 0x20) || (*(byte *)pppppppbVar7 == 0x7f)) {
                pcVar10 = "segment contains a control character";
                uVar14 = 0x24;
                goto LAB_180026ffc;
              }
            }
            if (7 < (int)(param_2[1] - *param_2 >> 5)) {
              uVar14 = 0x10;
              pcVar10 = "path is too deep";
              goto LAB_180026ffc;
            }
            FUN_18020d6f0(param_2,&local_a8);
            if (lVar11 == -1) goto LAB_180026fd3;
            uVar4 = lVar11 + 1;
            FUN_18020e450(&local_a8);
          } while( true );
        }
        FUN_180212700(local_1f0,"path is too long",0x10);
LAB_180027010:
        uVar4 = 0;
        goto LAB_180027012;
      }
    }
  }
  uVar4 = FUN_180212700(local_1f0,"path is empty",0xd);
  return uVar4 & 0xffffffffffffff00;
LAB_180026fd3:
  FUN_18020e450(&local_a8);
  uVar4 = 1;
LAB_180027012:
  FUN_18020e450(local_88);
  return uVar4;
}


)B180026bc0",
    "cda243c4e18447ab26402dc5c06fe9027df83f9c0e4b04c29b6a48c8cbbc97a8",
    R"F180026bc0C(FUN_18020d6f0
FUN_18020e450
FUN_18020e670
FUN_180212700
FUN_1802d6fd0)F180026bc0C",
    R"F180026bc0D(LAB_180026d42
LAB_180026d63
LAB_180026eb7
LAB_180026fd3
LAB_180026ffc
LAB_180027010
LAB_180027012
DAT_180340eb4
DAT_180340eb6
DAT_1803da4c0)F180026bc0D",
    R"F180026bc0T("path is empty"
"path is too deep"
"path is too long"
"segment contains a control character"
"empty segment (doubled, leading or trailing \\'.\\')")F180026bc0T",
    R"F180026bc0F(48: if (lVar11 != lVar3) {
49: do {
56: if (0xf < (ulonglong)param_3[3]) {
62: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
65: if (lVar3 != 0) {
66: if (lVar3 + 2U < 0x10) {
69: do {
74: for (; pbVar2 < pbVar12 + lVar3; pbVar2 = pbVar2 + 1) {
75: if (local_1a8[*pbVar2] == '\0') {
77: goto LAB_180026d42;
81: else {
83: LAB_180026d42:
85: if (lVar3 != -1) {
87: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
90: if (*(longlong *)(param_1 + 0x10) == 0) {
91: LAB_180026d63:
94: else {
97: if (lVar5 != -1) {
100: if (lVar11 + 3U < 0x10) {
102: do {
108: while (cVar1 != '\0') {
109: if (pbVar12 == pbVar8) goto LAB_180026d63;
115: else {
120: if (local_78 < 0x81) {
122: do {
124: if (0xf < local_70) {
127: if ((uVar4 < local_78) &&
132: if (lVar11 == -1) goto LAB_180026eb7;
136: else {
138: LAB_180026eb7:
153: if ((uVar13 & 2) != 0) {
158: if ((uVar13 & 1) != 0) {
163: if (lVar3 == 0) {
166: LAB_180026ffc:
169: goto LAB_180027010;
171: if (uVar4 < 0x10) {
175: for (; pppppppbVar7 != pppppppbVar9;
177: if ((*(byte *)pppppppbVar7 < 0x20) || (*(byte *)pppppppbVar7 == 0x7f)) {
180: goto LAB_180026ffc;
183: if (7 < (int)(param_2[1] - *param_2 >> 5)) {
186: goto LAB_180026ffc;
189: if (lVar11 == -1) goto LAB_180026fd3;
195: LAB_180027010:
197: goto LAB_180027012;
202: return uVar4 & 0xffffffffffffff00;
203: LAB_180026fd3:
206: LAB_180027012:
208: return uVar4;)F180026bc0F",
    R"F180026bc0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180026d42.
TODO: recover the declaration, type and value for global/data reference LAB_180026d63.
TODO: recover the declaration, type and value for global/data reference LAB_180026eb7.
TODO: recover the declaration, type and value for global/data reference LAB_180026fd3.
TODO: recover the declaration, type and value for global/data reference LAB_180026ffc.
TODO: recover the declaration, type and value for global/data reference LAB_180027010.
TODO: recover the declaration, type and value for global/data reference LAB_180027012.
TODO: recover the declaration, type and value for global/data reference DAT_180340eb4.
TODO: recover the declaration, type and value for global/data reference DAT_180340eb6.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180026bc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180026bc0() noexcept {
    return kFunction_0x180026bc0;
}

// 0x180027030 FUN_180027030
// source: re/dump/decompile/0x180027030_FUN_180027030.c
// size: 252 bytes; thunk: false
// body sha256: 1d7af94642f4c8b421b8e5b5b70f1b498e43f7e949677253d9bb9249e4729b60
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180027030{
    "0x180027030",
    "FUN_180027030",
    R"F180027030S(undefined FUN_180027030())F180027030S",
    R"B180027030(// 0x180027030  FUN_180027030
// size=252 thunk=false
// signature: undefined FUN_180027030()
// status: ok


longlong FUN_180027030(undefined8 *param_1,byte *param_2,ulonglong param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  size_t sVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  char local_128 [256];
  
  sVar3 = strlen((char *)param_2);
  uVar2 = param_1[2];
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (param_3 < uVar2) {
    pbVar6 = (byte *)(param_3 + (longlong)param_1);
    if (sVar3 + (uVar2 - param_3) < 0x10) {
      memset(local_128,0,0x100);
      pbVar1 = param_2 + sVar3;
      for (; param_2 != pbVar1; param_2 = param_2 + 1) {
        local_128[*param_2] = '\x01';
      }
      for (; pbVar6 < (byte *)(uVar2 + (longlong)param_1); pbVar6 = pbVar6 + 1) {
        if (local_128[*pbVar6] == '\0') {
          return (longlong)pbVar6 - (longlong)param_1;
        }
      }
      lVar5 = -1;
    }
    else {
      lVar4 = FUN_1802d6fd0(pbVar6,uVar2 - param_3,param_2,sVar3);
      lVar5 = lVar4 + param_3;
      if (lVar4 == -1) {
        lVar5 = -1;
      }
    }
    return lVar5;
  }
  return -1;
}


)B180027030",
    "1d7af94642f4c8b421b8e5b5b70f1b498e43f7e949677253d9bb9249e4729b60",
    R"F180027030C(FUN_1802d6fd0)F180027030C",
    R"F180027030D()F180027030D",
    R"F180027030T()F180027030T",
    R"F180027030F(20: if (0xf < (ulonglong)param_1[3]) {
23: if (param_3 < uVar2) {
25: if (sVar3 + (uVar2 - param_3) < 0x10) {
28: for (; param_2 != pbVar1; param_2 = param_2 + 1) {
31: for (; pbVar6 < (byte *)(uVar2 + (longlong)param_1); pbVar6 = pbVar6 + 1) {
32: if (local_128[*pbVar6] == '\0') {
33: return (longlong)pbVar6 - (longlong)param_1;
38: else {
41: if (lVar4 == -1) {
45: return lVar5;
47: return -1;)F180027030F",
    R"F180027030U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180027030U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180027030() noexcept {
    return kFunction_0x180027030;
}

// 0x180027130 FUN_180027130
// source: re/dump/decompile/0x180027130_FUN_180027130.c
// size: 243 bytes; thunk: false
// body sha256: eed6df1769c3855fb58962f725f58e74094c6e3ebe4e94fabc23d453054c1296
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180027130{
    "0x180027130",
    "FUN_180027130",
    R"F180027130S(undefined FUN_180027130())F180027130S",
    R"B180027130(// 0x180027130  FUN_180027130
// size=243 thunk=false
// signature: undefined FUN_180027130()
// status: ok


longlong FUN_180027130(undefined8 *param_1,byte *param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  char cVar3;
  size_t sVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char local_118 [256];
  
  sVar4 = strlen((char *)param_2);
  plVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (*plVar1 != 0) {
    lVar5 = *plVar1 + -1;
    lVar6 = -1;
    if (lVar5 != -1) {
      lVar6 = lVar5;
    }
    if (lVar6 + 1 + sVar4 < 0x10) {
      memset(local_118,0,0x100);
      pbVar2 = param_2 + sVar4;
      for (; param_2 != pbVar2; param_2 = param_2 + 1) {
        local_118[*param_2] = '\x01';
      }
      puVar7 = (undefined8 *)(lVar6 + (longlong)param_1);
      cVar3 = local_118[*(byte *)(lVar6 + (longlong)param_1)];
      while (cVar3 != '\0') {
        if (puVar7 == param_1) {
          return -1;
        }
        pbVar2 = (byte *)((longlong)puVar7 + -1);
        puVar7 = (undefined8 *)((longlong)puVar7 + -1);
        cVar3 = local_118[*pbVar2];
      }
      lVar6 = (longlong)puVar7 - (longlong)param_1;
    }
    else {
      lVar6 = thunk_FUN_1802d4c50(param_1,lVar6 + 1,param_2,sVar4);
    }
    return lVar6;
  }
  return -1;
}


)B180027130",
    "eed6df1769c3855fb58962f725f58e74094c6e3ebe4e94fabc23d453054c1296",
    R"F180027130C()F180027130C",
    R"F180027130D()F180027130D",
    R"F180027130T()F180027130T",
    R"F180027130F(21: if (0xf < (ulonglong)param_1[3]) {
24: if (*plVar1 != 0) {
27: if (lVar5 != -1) {
30: if (lVar6 + 1 + sVar4 < 0x10) {
33: for (; param_2 != pbVar2; param_2 = param_2 + 1) {
38: while (cVar3 != '\0') {
39: if (puVar7 == param_1) {
40: return -1;
48: else {
51: return lVar6;
53: return -1;)F180027130F",
    R"F180027130U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180027130U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180027130() noexcept {
    return kFunction_0x180027130;
}

// 0x180027230 FUN_180027230
// source: re/dump/decompile/0x180027230_FUN_180027230.c
// size: 215 bytes; thunk: false
// body sha256: 64b982fa12d6c25980a0bf931e7b42c73848db6e7f7f5899c2f3f9e2d5a3caf3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180027230{
    "0x180027230",
    "FUN_180027230",
    R"F180027230S(undefined FUN_180027230())F180027230S",
    R"B180027230(// 0x180027230  FUN_180027230
// size=215 thunk=false
// signature: undefined FUN_180027230()
// status: ok


longlong * FUN_180027230(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  if (param_2[1] - *param_2 >> 5 != 0) {
    do {
      if (uVar4 != 0) {
        uVar2 = param_1[2];
        if (uVar2 < (ulonglong)param_1[3]) {
          param_1[2] = uVar2 + 1;
          if ((ulonglong)param_1[3] < 0x10) {
            *(undefined2 *)(uVar2 + (longlong)param_1) = 0x2e;
          }
          else {
            *(undefined2 *)(uVar2 + *param_1) = 0x2e;
          }
        }
        else {
          FUN_18021abd0(param_1);
        }
      }
      puVar3 = (undefined8 *)(uVar4 * 0x20 + *param_2);
      puVar1 = puVar3 + 2;
      if (0xf < (ulonglong)puVar3[3]) {
        puVar3 = (undefined8 *)*puVar3;
      }
      FUN_18021aef0(param_1,puVar3,*puVar1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulonglong)(param_2[1] - *param_2 >> 5));
  }
  return param_1;
}


)B180027230",
    "64b982fa12d6c25980a0bf931e7b42c73848db6e7f7f5899c2f3f9e2d5a3caf3",
    R"F180027230C(FUN_18021abd0
FUN_18021aef0)F180027230C",
    R"F180027230D()F180027230D",
    R"F180027230T()F180027230T",
    R"F180027230F(21: if (param_2[1] - *param_2 >> 5 != 0) {
22: do {
23: if (uVar4 != 0) {
25: if (uVar2 < (ulonglong)param_1[3]) {
27: if ((ulonglong)param_1[3] < 0x10) {
30: else {
34: else {
40: if (0xf < (ulonglong)puVar3[3]) {
47: return param_1;)F180027230F",
    R"F180027230U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180027230U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180027230() noexcept {
    return kFunction_0x180027230;
}

// 0x180027310 FUN_180027310
// source: re/dump/decompile/0x180027310_FUN_180027310.c
// size: 373 bytes; thunk: false
// body sha256: 029b935cccf05a9b436a785ae528f43b5f312ddae21d1ec510c636c8117e130b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180027310{
    "0x180027310",
    "FUN_180027310",
    R"F180027310S(undefined FUN_180027310())F180027310S",
    R"B180027310(// 0x180027310  FUN_180027310
// size=373 thunk=false
// signature: undefined FUN_180027310()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180027310(longlong *param_1,int param_2)

{
  size_t _Size;
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  piVar3 = DAT_1803e9b10;
  uVar2 = _UNK_1803814b8;
  uVar1 = _DAT_1803814b0;
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_b8;
  piVar8 = DAT_1803e9b08;
  do {
    if (piVar8 == piVar3) {
      return 0;
    }
    if (*piVar8 != param_2) {
      local_98 = (undefined8 *)0x0;
      puStack_90 = (undefined8 *)0x0;
      local_88 = 0;
      uStack_78 = 0;
      local_70 = uVar1;
      uStack_68 = uVar2;
      local_80 = 0;
      cVar5 = FUN_180026bc0(piVar8 + 2,&local_98,&local_80);
      puVar4 = puStack_90;
      if ((cVar5 != '\0') &&
         (puVar9 = (undefined8 *)*param_1,
         (longlong)puStack_90 - (longlong)local_98 == param_1[1] - (longlong)puVar9)) {
        puVar7 = local_98;
        if (local_98 == puStack_90) {
LAB_18002746c:
          FUN_18020e450(&local_80);
          FUN_18020d5c0(&local_98);
          return 1;
        }
        while( true ) {
          _Buf2 = puVar9;
          if (0xf < (ulonglong)puVar9[3]) {
            _Buf2 = (undefined8 *)*puVar9;
          }
          _Size = puVar7[2];
          _Buf1 = puVar7;
          if (0xf < (ulonglong)puVar7[3]) {
            _Buf1 = (undefined8 *)*puVar7;
          }
          if ((_Size != puVar9[2]) ||
             ((_Size != 0 && (iVar6 = memcmp(_Buf1,_Buf2,_Size), iVar6 != 0)))) break;
          if (puVar7 + 4 == puVar4) goto LAB_18002746c;
          puVar9 = puVar9 + 4;
          puVar7 = puVar7 + 4;
        }
      }
      FUN_18020e450(&local_80);
      FUN_18020d5c0(&local_98);
    }
    piVar8 = piVar8 + 0x1a;
  } while( true );
}


)B180027310",
    "029b935cccf05a9b436a785ae528f43b5f312ddae21d1ec510c636c8117e130b",
    R"F180027310C(FUN_180026bc0
FUN_18020d5c0
FUN_18020e450)F180027310C",
    R"F180027310D(LAB_18002746c
DAT_1803da4c0
DAT_1803e9b08
DAT_1803e9b10)F180027310D",
    R"F180027310T()F180027310T",
    R"F180027310F(40: do {
41: if (piVar8 == piVar3) {
42: return 0;
44: if (*piVar8 != param_2) {
54: if ((cVar5 != '\0') &&
58: if (local_98 == puStack_90) {
59: LAB_18002746c:
62: return 1;
64: while( true ) {
66: if (0xf < (ulonglong)puVar9[3]) {
71: if (0xf < (ulonglong)puVar7[3]) {
74: if ((_Size != puVar9[2]) ||
76: if (puVar7 + 4 == puVar4) goto LAB_18002746c;)F180027310F",
    R"F180027310U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18002746c.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b08.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b10.)F180027310U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180027310() noexcept {
    return kFunction_0x180027310;
}

// 0x180027490 FUN_180027490
// source: re/dump/decompile/0x180027490_FUN_180027490.c
// size: 281 bytes; thunk: false
// body sha256: 7388c0430956269be64e2f492b453b170ee69cb166ac6cc2c1865c9cd51b7832
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180027490{
    "0x180027490",
    "FUN_180027490",
    R"F180027490S(undefined FUN_180027490())F180027490S",
    R"B180027490(// 0x180027490  FUN_180027490
// size=281 thunk=false
// signature: undefined FUN_180027490()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180027490(undefined8 *param_1,double param_2)

{
  double dVar1;
  short sVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  char local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  local_78 = 0;
  local_70 = param_1;
  sVar2 = _dclass(SUB84(param_2,0));
  if (sVar2 < 1) {
    dVar1 = floor(param_2);
    if ((param_2 != dVar1) ||
       (uVar4 = SUB84(param_2,0) & _DAT_1803817d0,
       uVar5 = (uint)((ulonglong)param_2 >> 0x20) & _UNK_1803817d4,
       DAT_180381160 < (double)CONCAT44(uVar5,uVar4) ||
       DAT_180381160 == (double)CONCAT44(uVar5,uVar4))) {
      FUN_180012ac0(local_68,0x40,"%.14g",param_2);
    }
    else {
      FUN_180012ac0(local_68,0x40,&DAT_18033f574,(longlong)param_2);
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    sVar3 = strlen(local_68);
    FUN_18001d080(param_1,local_68,sVar3);
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


)B180027490",
    "7388c0430956269be64e2f492b453b170ee69cb166ac6cc2c1865c9cd51b7832",
    R"F180027490C(FUN_180012ac0
FUN_18001d080)F180027490C",
    R"F180027490D(DAT_18033f574
DAT_180381160
DAT_1803da4c0)F180027490D",
    R"F180027490T("%.14g")F180027490T",
    R"F180027490F(28: if (sVar2 < 1) {
30: if ((param_2 != dVar1) ||
37: else {
47: else {
54: return param_1;)F180027490F",
    R"F180027490U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033f574.
TODO: recover the declaration, type and value for global/data reference DAT_180381160.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180027490U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180027490() noexcept {
    return kFunction_0x180027490;
}

// 0x1800275b0 FUN_1800275b0
// source: re/dump/decompile/0x1800275b0_FUN_1800275b0.c
// size: 5735 bytes; thunk: false
// body sha256: accd68ad7ce5c4054d0b54cada9db0d962526eb40052111da3cbe99dfd83046e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800275b0{
    "0x1800275b0",
    "FUN_1800275b0",
    R"F1800275b0S(undefined FUN_1800275b0())F1800275b0S",
    R"B1800275b0(// 0x1800275b0  FUN_1800275b0
// size=5735 thunk=false
// signature: undefined FUN_1800275b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800275b0(longlong *param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  byte *pbVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  char *****pppppcVar9;
  undefined8 *****pppppuVar10;
  undefined8 *puVar11;
  longlong lVar12;
  void *_Memory;
  char *****_Memory_00;
  undefined8 *****_Memory_01;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined8 ****ppppuVar24;
  uint uVar25;
  longlong *plVar26;
  ulonglong uVar27;
  bool bVar28;
  undefined8 extraout_XMM0_Qa;
  double dVar29;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uStack_430;
  undefined1 auStack_428 [8];
  undefined1 auStack_420 [24];
  undefined8 local_408;
  undefined8 ****local_400;
  longlong local_3f8;
  uint local_3e8 [2];
  longlong *local_3e0 [2];
  undefined8 ****local_3d0;
  undefined8 uStack_3c8;
  ulonglong local_3c0;
  ulonglong uStack_3b8;
  char ****local_3b0;
  undefined8 uStack_3a8;
  ulonglong local_3a0;
  ulonglong uStack_398;
  undefined8 ****local_390;
  undefined8 ***pppuStack_388;
  undefined8 ***local_380;
  undefined8 ***pppuStack_378;
  void *local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  ulonglong uStack_358;
  undefined8 ****local_350;
  undefined8 ***pppuStack_348;
  undefined8 ***local_340;
  undefined8 ***pppuStack_338;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  double local_2b0;
  undefined2 local_2a8;
  uint local_2a4;
  ushort local_2a0;
  longlong local_298;
  longlong *local_288;
  undefined1 *local_278;
  undefined1 *local_270;
  undefined1 local_268 [32];
  undefined1 local_248 [32];
  undefined1 local_228 [32];
  undefined1 local_208 [32];
  undefined1 local_1e8 [32];
  char *local_1c8;
  undefined8 ****local_1c0;
  undefined8 ***pppuStack_1b8;
  undefined8 ***local_1b0;
  undefined8 ***pppuStack_1a8;
  undefined8 ****local_198;
  undefined8 uStack_190;
  ulonglong local_188;
  ulonglong local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong local_158;
  longlong lStack_150;
  undefined8 local_148;
  char ****local_140;
  char ***pppcStack_138;
  char ***local_130;
  char ***local_128;
  double local_120;
  undefined2 local_118;
  uint local_114;
  undefined2 local_110;
  undefined8 ****local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  char ****local_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  ulonglong uStack_d0;
  void *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined8 ****local_a8 [2];
  ulonglong local_98;
  ulonglong local_90;
  undefined8 ****local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong local_70;
  ulonglong local_68;
  
  puVar14 = auStack_428;
  puVar15 = auStack_428;
  puVar16 = auStack_428;
  puVar17 = auStack_428;
  puVar18 = auStack_428;
  puVar19 = auStack_428;
  puVar20 = auStack_428;
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_428;
  uVar21 = 1;
  uVar22 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  plVar26 = param_1 + 4;
  *plVar26 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)plVar26 = 0;
  local_3e8[0] = 1;
  local_3e0[0] = plVar26;
  local_3e0[1] = param_1;
  local_288 = param_1;
  if ((ulonglong)param_2[2] < 0x81) {
    uStack_190 = 0;
    local_188 = 0;
    local_180 = 0xf;
    local_198 = (undefined8 *****)0x0;
    uStack_170 = 0;
    local_168 = 0;
    local_160 = 0xf;
    local_178 = 0;
    local_158 = 0;
    lStack_150 = 0;
    local_148 = 0;
    pppcStack_138 = (char ***)0x0;
    local_130 = (char ***)0x0;
    local_128 = (char ***)0xf;
    local_140 = (char ****)0x0;
    local_120 = 0.0;
    local_118 = 0;
    local_114 = 0;
    local_110 = 0;
    uVar27 = param_2[2];
    if (uVar27 != 0) {
      do {
        uVar13 = local_188;
        uVar23 = param_2[3];
        puVar11 = param_2;
        if (0xf < uVar23) {
          puVar11 = (undefined8 *)*param_2;
        }
        bVar3 = *(byte *)((longlong)puVar11 + uVar22);
        if (bVar3 == 0x7b) {
          uVar13 = uVar22 + 1;
          if (uVar13 < uVar27) {
            puVar11 = param_2;
            if (0xf < uVar23) {
              puVar11 = (undefined8 *)*param_2;
            }
            if (*(char *)((longlong)puVar11 + uVar22 + 1) == '{') {
              if (local_188 < local_180) {
                pppppuVar10 = &local_198;
                if (0xf < local_180) {
                  pppppuVar10 = (undefined8 *****)local_198;
                }
                puVar1 = (undefined2 *)(local_188 + (longlong)pppppuVar10);
                local_188 = local_188 + 1;
                *puVar1 = 0x7b;
                uVar22 = uVar22 + 2;
              }
              else {
                FUN_18021abd0(&local_198);
                uVar22 = uVar22 + 2;
              }
              goto LAB_1800284ac;
            }
          }
          puVar11 = param_2;
          if (0xf < uVar23) {
            puVar11 = (undefined8 *)*param_2;
          }
          if (((uVar27 <= uVar13) ||
              (lVar12 = thunk_FUN_1802d5c20(uVar13 + (longlong)puVar11,(longlong)puVar11 + uVar27,
                                            0x7d), lVar12 == (longlong)puVar11 + uVar27)) ||
             (local_298 = lVar12 - (longlong)puVar11, local_298 == -1)) {
            FUN_180212700(local_3e0[0],"unclosed \'{\'",0xc);
            local_3e8[0] = 0;
            FUN_18020e450(&local_140);
            FUN_18020d5c0(&local_158);
            FUN_18020e450(&local_178);
            puVar20 = auStack_428;
            goto LAB_180028bc9;
          }
          FUN_18020e670(param_2,local_a8,uVar13,(local_298 - uVar22) + -1);
          FUN_18016d4c0(&local_108,local_a8);
          uStack_e0 = 0;
          uVar22 = 0;
          local_d8 = 0;
          uVar27 = 0xf;
          uStack_d0 = 0xf;
          local_e8 = (char ****)0x0;
          pppppuVar10 = local_a8;
          if (0xf < local_90) {
            pppppuVar10 = (undefined8 *****)local_a8[0];
          }
          if (local_98 == 0) {
            uVar23 = 0xffffffffffffffff;
          }
          else {
            lVar12 = (longlong)pppppuVar10 + local_98;
            lVar7 = thunk_FUN_1802d5c20(pppppuVar10,lVar12,0x3a);
            uVar23 = 0xffffffffffffffff;
            if (lVar7 != lVar12) {
              uVar23 = lVar7 - (longlong)pppppuVar10;
            }
          }
          if (uVar23 != 0xffffffffffffffff) {
            local_3d0 = (undefined8 *****)0x0;
            uStack_3c8 = 0;
            local_3c0 = 0;
            uStack_3b8 = 0;
            uVar22 = uVar23;
            if (local_98 < uVar23) {
              uVar22 = local_98;
            }
            pppppuVar10 = local_a8;
            if (0xf < local_90) {
              pppppuVar10 = (undefined8 *****)local_a8[0];
            }
            FUN_18001d080(local_3e0 + 2,pppppuVar10,uVar22);
            uVar25 = 5;
            if (uStack_f0 < 0x10) {
LAB_18002796e:
              local_108 = local_3d0;
              uStack_100 = uStack_3c8;
              local_f8 = local_3c0;
              uStack_f0 = uStack_3b8;
              local_3c0 = 0;
              uStack_3b8 = 0xf;
              local_3d0 = (undefined8 ****)((ulonglong)local_3d0 & 0xffffffffffffff00);
              local_3e8[0] = uVar21;
              FUN_18020e450(local_3e0 + 2);
              uVar23 = uVar23 + 1;
              local_3b0 = (char ****)0x0;
              uStack_3a8 = 0;
              local_3a0 = 0;
              uStack_398 = 0;
              if (local_98 < uVar23) {
                    /* WARNING: Subroutine does not return */
                FUN_18022ec00();
              }
              lVar12 = -1;
              if (local_98 - uVar23 != -1) {
                lVar12 = local_98 - uVar23;
              }
              pppppuVar10 = local_a8;
              if (0xf < local_90) {
                pppppuVar10 = (undefined8 *****)local_a8[0];
              }
              FUN_18001d080(&local_3b0,(longlong)pppppuVar10 + uVar23,lVar12);
              uVar27 = uStack_398;
              uVar22 = local_3a0;
              local_e8 = local_3b0;
              uStack_e0 = uStack_3a8;
              local_d8 = local_3a0;
              uStack_d0 = uStack_398;
              local_3a0 = 0;
              uStack_398 = 0xf;
              local_3b0 = (char ****)((ulonglong)local_3b0 & 0xffffffffffffff00);
              local_3e8[0] = uVar21;
              FUN_18020e450(&local_3b0);
              goto LAB_180027a87;
            }
            pppppuVar10 = (undefined8 *****)local_108;
            local_3e8[0] = uVar25;
            if ((uStack_f0 + 1 < 0x1000) ||
               (pppppuVar10 = (undefined8 *****)local_108[-1],
               (ulonglong)((longlong)local_108 + (-8 - (longlong)pppppuVar10)) < 0x20)) {
              free(pppppuVar10);
              goto LAB_18002796e;
            }
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar14 = auStack_420;
LAB_1800284f9:
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar15 = puVar14 + 8;
LAB_180028500:
            uVar21 = uVar25;
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar16 = puVar15 + 8;
LAB_180028507:
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar17 = puVar16 + 8;
            uVar25 = uVar21;
LAB_18002850e:
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar18 = puVar17 + 8;
LAB_180028515:
            *(undefined8 *)(puVar18 + -8) = 0x18002852c;
            FUN_180212700(*(undefined8 *)(puVar18 + 0x48),"default is too long",0x13);
            *(uint *)(puVar18 + 0x40) = uVar25 & 0xfffffffe;
            *(undefined8 *)(puVar18 + -8) = 0x18002853f;
            FUN_18020e450(&local_c8);
            *(undefined8 *)(puVar18 + -8) = 0x18002854c;
            FUN_18020e450(&local_1c0);
            *(undefined8 *)(puVar18 + -8) = 0x180028559;
            FUN_18020e450(&local_e8);
            *(undefined8 *)(puVar18 + -8) = 0x180028566;
            FUN_18020e450(&local_108);
            *(undefined8 *)(puVar18 + -8) = 0x180028573;
            FUN_18020e450(local_a8);
            *(undefined8 *)(puVar18 + -8) = 0x180028580;
            FUN_18020e450(&local_140);
            *(undefined8 *)(puVar18 + -8) = 0x18002858d;
            FUN_18020d5c0(&local_158);
            *(undefined8 *)(puVar18 + -8) = 0x18002859a;
            FUN_18020e450(&local_178);
            puVar20 = puVar18;
            goto LAB_180028bc9;
          }
LAB_180027a87:
          FUN_18016d4c0(&local_1c0,&local_108);
          uStack_c0 = 0;
          local_b8 = 0;
          uStack_b0 = 0xf;
          local_c8 = (void *)0x0;
          pppppuVar10 = &local_108;
          if (0xf < uStack_f0) {
            pppppuVar10 = (undefined8 *****)local_108;
          }
          if (local_f8 == 0) {
            uVar23 = 0xffffffffffffffff;
          }
          else {
            lVar12 = local_f8 + (longlong)pppppuVar10;
            lVar7 = thunk_FUN_1802d5c20(pppppuVar10,lVar12,0x40);
            uVar23 = 0xffffffffffffffff;
            if (lVar7 != lVar12) {
              uVar23 = lVar7 - (longlong)pppppuVar10;
            }
          }
          if (uVar23 != 0xffffffffffffffff) {
            local_390 = (undefined8 *****)0x0;
            pppuStack_388 = (undefined8 ****)0x0;
            local_380 = (undefined8 ****)0x0;
            pppuStack_378 = (undefined8 ****)0x0;
            uVar13 = uVar23;
            if (local_f8 < uVar23) {
              uVar13 = local_f8;
            }
            pppppuVar10 = &local_108;
            if (0xf < uStack_f0) {
              pppppuVar10 = (undefined8 *****)local_108;
            }
            FUN_18001d080(&local_390,pppppuVar10,uVar13);
            uVar25 = 0x11;
            if ((undefined8 ****)0xf < pppuStack_1a8) {
              pppppuVar10 = (undefined8 *****)local_1c0;
              local_3e8[0] = uVar25;
              if ((0xfff < (longlong)pppuStack_1a8 + 1U) &&
                 (pppppuVar10 = (undefined8 *****)local_1c0[-1],
                 0x1f < (ulonglong)((longlong)local_1c0 + (-8 - (longlong)pppppuVar10))))
              goto LAB_1800284f9;
              free(pppppuVar10);
            }
            local_1c0 = local_390;
            pppuStack_1b8 = pppuStack_388;
            local_1b0 = local_380;
            pppuStack_1a8 = pppuStack_378;
            local_380 = (undefined8 ****)0x0;
            pppuStack_378 = (undefined8 ****)0xf;
            local_390 = (undefined8 ****)((ulonglong)local_390 & 0xffffffffffffff00);
            local_3e8[0] = uVar21;
            FUN_18020e450(&local_390);
            uVar13 = uVar23 + 1;
            local_370 = (void *)0x0;
            uStack_368 = 0;
            local_360 = 0;
            uStack_358 = 0;
            if (local_f8 < uVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_18022ec00();
            }
            lVar12 = -1;
            if (local_f8 - uVar13 != -1) {
              lVar12 = local_f8 - uVar13;
            }
            pppppuVar10 = &local_108;
            if (0xf < uStack_f0) {
              pppppuVar10 = (undefined8 *****)local_108;
            }
            FUN_18001d080(&local_370,(longlong)pppppuVar10 + uVar13,lVar12);
            local_3e8[0] = 0x21;
            if (0xf < uStack_b0) {
              _Memory = local_c8;
              if ((0xfff < uStack_b0 + 1) &&
                 (_Memory = *(void **)((longlong)local_c8 + -8), uVar25 = local_3e8[0],
                 0x1f < (ulonglong)((longlong)local_c8 + (-8 - (longlong)_Memory))))
              goto LAB_180028500;
              free(_Memory);
            }
            local_c8 = local_370;
            uStack_c0 = uStack_368;
            local_b8 = local_360;
            uStack_b0 = uStack_358;
            local_360 = 0;
            uStack_358 = 0xf;
            local_370 = (void *)((ulonglong)local_370 & 0xffffffffffffff00);
            local_3e8[0] = uVar21;
            FUN_18020e450(&local_370);
          }
          pppppuVar10 = &local_1c0;
          if ((undefined8 ****)0xf < pppuStack_1a8) {
            pppppuVar10 = (undefined8 *****)local_1c0;
          }
          if ((undefined8 ****)local_1b0 == (undefined8 ****)0x0) {
            ppppuVar24 = (undefined8 ****)0xffffffffffffffff;
          }
          else {
            lVar12 = (longlong)local_1b0 + (longlong)pppppuVar10;
            lVar7 = thunk_FUN_1802d5c20(pppppuVar10,lVar12,0x3d);
            ppppuVar24 = (undefined8 ****)0xffffffffffffffff;
            if (lVar7 != lVar12) {
              ppppuVar24 = (undefined8 ****)(lVar7 - (longlong)pppppuVar10);
            }
          }
          if (ppppuVar24 != (undefined8 ****)0xffffffffffffffff) {
            local_278 = local_248;
            uVar8 = FUN_18020e670(&local_1c0,local_248,(longlong)ppppuVar24 + 1,0xffffffffffffffff);
            pppppcVar9 = (char *****)FUN_180028c30(extraout_XMM0_Qa,local_228,uVar8);
            if (&local_140 != pppppcVar9) {
              if ((char ****)0xf < local_128) {
                _Memory_00 = (char *****)local_140;
                if ((0xfff < (longlong)local_128 + 1U) &&
                   (_Memory_00 = (char *****)local_140[-1],
                   (char *)0x1f < (char *)((longlong)local_140 + (-8 - (longlong)_Memory_00))))
                goto LAB_180028507;
                free(_Memory_00);
              }
              local_140 = *pppppcVar9;
              pppcStack_138 = (char ***)pppppcVar9[1];
              local_130 = (char ***)pppppcVar9[2];
              local_128 = (char ***)pppppcVar9[3];
              pppppcVar9[2] = (char ****)0x0;
              pppppcVar9[3] = (char ****)0xf;
              *(undefined1 *)pppppcVar9 = 0;
            }
            FUN_18020e450(local_228);
            local_118 = CONCAT11(local_118._1_1_,1);
            local_350 = (undefined8 *****)0x0;
            pppuStack_348 = (undefined8 ****)0x0;
            local_340 = (undefined8 ****)0x0;
            pppuStack_338 = (undefined8 ****)0x0;
            if (local_1b0 < ppppuVar24) {
              ppppuVar24 = (undefined8 ****)local_1b0;
            }
            pppppuVar10 = &local_1c0;
            if ((undefined8 ****)0xf < pppuStack_1a8) {
              pppppuVar10 = (undefined8 *****)local_1c0;
            }
            FUN_18001d080(&local_350,pppppuVar10,ppppuVar24);
            local_3e8[0] = 0x81;
            if ((undefined8 ****)0xf < pppuStack_1a8) {
              pppppuVar10 = (undefined8 *****)local_1c0;
              if ((0xfff < (longlong)pppuStack_1a8 + 1U) &&
                 (pppppuVar10 = (undefined8 *****)local_1c0[-1], uVar25 = local_3e8[0],
                 0x1f < (ulonglong)((longlong)local_1c0 + (-8 - (longlong)pppppuVar10))))
              goto LAB_18002850e;
              free(pppppuVar10);
            }
            local_1c0 = local_350;
            pppuStack_1b8 = pppuStack_348;
            local_1b0 = local_340;
            pppuStack_1a8 = pppuStack_338;
            local_340 = (undefined8 ****)0x0;
            pppuStack_338 = (undefined8 ****)0xf;
            local_350 = (undefined8 ****)((ulonglong)local_350 & 0xffffffffffffff00);
            local_3e8[0] = uVar21;
            FUN_18020e450(&local_350);
            uVar25 = uVar21;
            if ((char ****)0x40 < local_130) goto LAB_180028515;
            if ((char ****)local_130 != (char ****)0x0) {
              local_1c8 = (char *)0x0;
              pppppcVar9 = &local_140;
              if ((char ****)0xf < local_128) {
                pppppcVar9 = (char *****)local_140;
              }
              dVar29 = strtod((char *)pppppcVar9,&local_1c8);
              if (((local_1c8 != (char *)0x0) && (*local_1c8 == '\0')) &&
                 (((uint)((ulonglong)dVar29 >> 0x34) & 0x7ff) != 0x7ff)) {
                local_118 = CONCAT11(1,(undefined1)local_118);
                local_120 = dVar29;
              }
            }
          }
          local_270 = local_208;
          uVar8 = FUN_18016d4c0(local_208,&local_1c0);
          pppppuVar10 = (undefined8 *****)FUN_180028c30(extraout_XMM0_Qa_00,local_1e8,uVar8);
          if (&local_1c0 != pppppuVar10) {
            if (pppuStack_1a8 < (undefined8 ****)0x10) {
LAB_180028017:
              local_1c0 = *pppppuVar10;
              pppuStack_1b8 = pppppuVar10[1];
              local_1b0 = pppppuVar10[2];
              pppuStack_1a8 = pppppuVar10[3];
              pppppuVar10[2] = (undefined8 ****)0x0;
              pppppuVar10[3] = (undefined8 ****)0xf;
              *(undefined1 *)pppppuVar10 = 0;
              goto LAB_180028054;
            }
            _Memory_01 = (undefined8 *****)local_1c0;
            if (((longlong)pppuStack_1a8 + 1U < 0x1000) ||
               (_Memory_01 = (undefined8 *****)local_1c0[-1],
               (ulonglong)((longlong)local_1c0 + (-8 - (longlong)_Memory_01)) < 0x20)) {
              free(_Memory_01);
              goto LAB_180028017;
            }
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar19 = auStack_420;
LAB_1800285a7:
            *(undefined8 *)(puVar19 + -8) = 0x1800285be;
            FUN_180212700(*(undefined8 *)(puVar19 + 0x48),
                          "lookup needs table.field, e.g. ba.ranks.Stored.Name",0x33);
            *(undefined4 *)(puVar19 + 0x40) = 0;
            *(undefined8 *)(puVar19 + -8) = 0x1800285d1;
            FUN_18020e450(&local_88);
            *(undefined8 *)(puVar19 + -8) = 0x1800285de;
            FUN_18020e450(&local_c8);
            *(undefined8 *)(puVar19 + -8) = 0x1800285eb;
            FUN_18020e450(&local_1c0);
            *(undefined8 *)(puVar19 + -8) = 0x1800285f8;
            FUN_18020e450(&local_e8);
            *(undefined8 *)(puVar19 + -8) = 0x180028605;
            FUN_18020e450(&local_108);
            *(undefined8 *)(puVar19 + -8) = 0x180028612;
            FUN_18020e450(local_a8);
            *(undefined8 *)(puVar19 + -8) = 0x18002861f;
            FUN_18020e450(&local_140);
            *(undefined8 *)(puVar19 + -8) = 0x18002862c;
            FUN_18020d5c0(&local_158);
            *(undefined8 *)(puVar19 + -8) = 0x180028639;
            FUN_18020e450(&local_178);
            puVar20 = puVar19;
            goto LAB_180028bc9;
          }
LAB_180028054:
          FUN_18020e450(local_1e8);
          if ((undefined8 ****)local_1b0 == (undefined8 ****)0x0) {
            FUN_180212700(local_3e0[0],"placeholder has no key",0x16);
            local_3e8[0] = 0;
            FUN_18020e450(&local_c8);
            FUN_18020e450(&local_1c0);
            FUN_18020e450(&local_e8);
            FUN_18020e450(&local_108);
            FUN_18020e450(local_a8);
            FUN_18020e450(&local_140);
            FUN_18020d5c0(&local_158);
            FUN_18020e450(&local_178);
            puVar20 = auStack_428;
            goto LAB_180028bc9;
          }
          if ((undefined8 ****)0x40 < local_1b0) {
            FUN_180212700(local_3e0[0],"placeholder key is too long",0x1b);
            local_3e8[0] = 0;
            FUN_18020e450(&local_c8);
            FUN_18020e450(&local_1c0);
            FUN_18020e450(&local_e8);
            FUN_18020e450(&local_108);
            FUN_18020e450(local_a8);
            FUN_18020e450(&local_140);
            FUN_18020d5c0(&local_158);
            FUN_18020e450(&local_178);
            puVar20 = auStack_428;
            goto LAB_180028bc9;
          }
          if (uVar23 != 0xffffffffffffffff) {
            uStack_80 = 0;
            local_78 = 0;
            local_70 = 0xf;
            local_88 = (undefined8 *****)0x0;
            cVar6 = FUN_180026bc0(&local_c8,&local_158,&local_88);
            if (cVar6 == '\0') {
              if (0x7fffffffffffffffU - local_78 < 0xd) {
                    /* WARNING: Subroutine does not return */
                FUN_1800130a0();
              }
              local_400 = &local_88;
              if (0xf < local_70) {
                local_400 = local_88;
              }
              local_3f8 = local_78;
              local_408 = 0xd;
              FUN_18020e930(local_268);
              local_3e8[0] = 0x101;
              FUN_18020e8a0(local_3e0[0],local_268);
              local_3e8[0] = uVar21;
              FUN_18020e450(local_268);
              local_3e8[0] = 0;
              FUN_18020e450(&local_88);
              FUN_18020e450(&local_c8);
              FUN_18020e450(&local_1c0);
              FUN_18020e450(&local_e8);
              FUN_18020e450(&local_108);
              FUN_18020e450(local_a8);
              FUN_18020e450(&local_140);
              FUN_18020d5c0(&local_158);
              FUN_18020e450(&local_178);
              puVar20 = auStack_428;
              goto LAB_180028bc9;
            }
            if ((ulonglong)(lStack_150 - local_158 >> 5) < 2) goto LAB_1800285a7;
            FUN_18020e450(&local_88);
          }
          uVar23 = 0;
          pppppuVar10 = &local_1c0;
          if ((undefined8 ****)0xf < pppuStack_1a8) {
            pppppuVar10 = (undefined8 *****)local_1c0;
          }
          FUN_180212700(&local_178,pppppuVar10,local_1b0);
          param_1 = local_3e0[1];
          uVar13 = uVar23;
          if (uVar22 != 0) {
            pppppcVar9 = &local_e8;
            if (0xf < uVar27) {
              pppppcVar9 = (char *****)local_e8;
            }
            if (*(char *)pppppcVar9 == '0') {
              local_110 = CONCAT11(local_110._1_1_,1);
              uVar13 = 1;
            }
          }
          bVar5 = false;
          bVar28 = uVar13 == uVar22;
          if (uVar13 < uVar22) {
            do {
              pppppcVar9 = &local_e8;
              if (0xf < uVar27) {
                pppppcVar9 = (char *****)local_e8;
              }
              if (*(char *)((longlong)pppppcVar9 + uVar13) < '0') {
LAB_1800281cf:
                uVar25 = (uint)uVar23;
                if (!bVar5) goto LAB_1800281da;
                break;
              }
              pppppcVar9 = &local_e8;
              if (0xf < uVar27) {
                pppppcVar9 = (char *****)local_e8;
              }
              if ('9' < *(char *)((longlong)pppppcVar9 + uVar13)) goto LAB_1800281cf;
              pppppcVar9 = &local_e8;
              if (0xf < uVar27) {
                pppppcVar9 = (char *****)local_e8;
              }
              uVar25 = (int)*(char *)((longlong)pppppcVar9 + uVar13) +
                       ((uint)uVar23 * 5 + -0x18) * 2;
              uVar23 = (ulonglong)uVar25;
              if (0x40 < (int)uVar25) {
                FUN_180212700(local_3e0[0],"width above 64",0xe);
                local_3e8[0] = 0;
                FUN_18020e450(&local_c8);
                FUN_18020e450(&local_1c0);
                FUN_18020e450(&local_e8);
                FUN_18020e450(&local_108);
                FUN_18020e450(local_a8);
                FUN_18020e450(&local_140);
                FUN_18020d5c0(&local_158);
                FUN_18020e450(&local_178);
                puVar20 = auStack_428;
                goto LAB_180028bc9;
              }
              bVar5 = true;
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar22);
            local_114 = uVar25;
LAB_1800281da:
            bVar28 = uVar13 == uVar22;
            if (uVar13 < uVar22) {
              pppppcVar9 = &local_e8;
              if (0xf < uVar27) {
                pppppcVar9 = (char *****)local_e8;
              }
              if (*(char *)((longlong)pppppcVar9 + uVar13) == 'd') {
                local_110 = CONCAT11(1,(undefined1)local_110);
              }
              else {
                pppppcVar9 = &local_e8;
                if (0xf < uVar27) {
                  pppppcVar9 = (char *****)local_e8;
                }
                if (*(char *)((longlong)pppppcVar9 + uVar13) != 's') {
                  FUN_180212700(local_3e0[0],"unknown format, expected \'d\' or \'s\'",0x23);
                  local_3e8[0] = 0;
                  FUN_18020e450(&local_c8);
                  FUN_18020e450(&local_1c0);
                  FUN_18020e450(&local_e8);
                  FUN_18020e450(&local_108);
                  FUN_18020e450(local_a8);
                  FUN_18020e450(&local_140);
                  FUN_18020d5c0(&local_158);
                  FUN_18020e450(&local_178);
                  puVar20 = auStack_428;
                  goto LAB_180028bc9;
                }
                local_110 = local_110 & 0xff;
              }
              bVar28 = uVar13 + 1 == uVar22;
            }
          }
          if (!bVar28) {
            FUN_180212700(local_3e0[0],"trailing characters in format",0x1d);
            local_3e8[0] = 0;
            FUN_18020e450(&local_c8);
            FUN_18020e450(&local_1c0);
            FUN_18020e450(&local_e8);
            FUN_18020e450(&local_108);
            FUN_18020e450(local_a8);
            FUN_18020e450(&local_140);
            FUN_18020d5c0(&local_158);
            FUN_18020e450(&local_178);
            puVar20 = auStack_428;
            goto LAB_180028bc9;
          }
          uVar22 = local_298 + 1;
          if (local_3e0[1][1] == local_3e0[1][2]) {
            FUN_180228bb0(local_3e0[1],local_3e0[1][1],&local_198);
          }
          else {
            FUN_180232e30();
            param_1[1] = param_1[1] + 0x90;
          }
          uStack_320 = 0;
          local_318 = 0;
          local_310 = 0xf;
          local_328 = 0;
          uStack_300 = 0;
          local_2f8 = 0;
          local_2f0 = 0xf;
          local_308 = 0;
          local_2e8 = 0;
          uStack_2e0 = 0;
          local_2d8 = 0;
          uStack_2c8 = 0;
          local_2c0 = 0;
          local_2b8 = 0xf;
          local_2d0 = 0;
          local_2b0 = 0.0;
          local_2a8 = 0;
          local_2a4 = 0;
          local_2a0 = 0;
          FUN_18020e8a0(&local_198,&local_328);
          FUN_18020e8a0(&local_178,&local_308);
          FUN_18020d830(&local_158,&local_2e8);
          FUN_18020e8a0(&local_140,&local_2d0);
          local_120 = local_2b0;
          local_118 = local_2a8;
          local_114 = local_2a4;
          local_110 = local_2a0;
          FUN_18020e450(&local_2d0);
          FUN_18020d5c0(&local_2e8);
          FUN_18020e450(&local_308);
          FUN_18020e450(&local_328);
          FUN_18020e450(&local_c8);
          FUN_18020e450(&local_1c0);
          FUN_18020e450(&local_e8);
          FUN_18020e450(&local_108);
          FUN_18020e450(local_a8);
        }
        else {
          if (bVar3 == 0x7d) {
            if (uVar22 + 1 < uVar27) {
              puVar11 = param_2;
              if (0xf < uVar23) {
                puVar11 = (undefined8 *)*param_2;
              }
              if (*(char *)(uVar22 + 1 + (longlong)puVar11) == '}') {
                if (local_188 < local_180) {
                  pppppuVar10 = &local_198;
                  if (0xf < local_180) {
                    pppppuVar10 = (undefined8 *****)local_198;
                  }
                  puVar1 = (undefined2 *)((longlong)pppppuVar10 + local_188);
                  local_188 = local_188 + 1;
                  *puVar1 = 0x7d;
                  uVar22 = uVar22 + 2;
                }
                else {
                  FUN_18021abd0(&local_198);
                  uVar22 = uVar22 + 2;
                }
                goto LAB_1800284ac;
              }
            }
            FUN_180212700(local_3e0[0],"stray \'}\' (write \'}}\' for a literal)",0x24);
            local_3e8[0] = 0;
            FUN_18020e450(&local_140);
            FUN_18020d5c0(&local_158);
            FUN_18020e450(&local_178);
            puVar20 = auStack_428;
            goto LAB_180028bc9;
          }
          if (bVar3 < 0x20) {
            FUN_180212700(local_3e0[0],"control character",0x11);
            local_3e8[0] = 0;
            FUN_18020e450(&local_140);
            FUN_18020d5c0(&local_158);
            FUN_18020e450(&local_178);
            goto LAB_180028bc9;
          }
          if (local_188 < local_180) {
            pppppuVar10 = &local_198;
            if (0xf < local_180) {
              pppppuVar10 = (undefined8 *****)local_198;
            }
            pbVar2 = (byte *)((longlong)pppppuVar10 + local_188);
            local_188 = local_188 + 1;
            *pbVar2 = bVar3;
            *(undefined1 *)((longlong)pppppuVar10 + uVar13 + 1) = 0;
          }
          else {
            FUN_18021abd0(&local_198);
          }
          uVar22 = uVar22 + 1;
        }
LAB_1800284ac:
        uVar27 = param_2[2];
      } while (uVar22 < uVar27);
      plVar26 = param_1 + 4;
    }
    if (local_188 != 0) {
      if (param_1[1] == param_1[2]) {
        FUN_180228bb0(param_1,param_1[1],&local_198);
      }
      else {
        FUN_180232e30();
        param_1[1] = param_1[1] + 0x90;
      }
    }
    lVar12 = *param_1;
    if (lVar12 == param_1[1]) {
      FUN_180212700(plVar26,"template is empty",0x11);
      local_3e8[0] = 0;
      FUN_18020e450(&local_140);
      FUN_18020d5c0(&local_158);
      FUN_18020e450(&local_178);
      puVar20 = auStack_428;
    }
    else {
      do {
        if (*(longlong *)(lVar12 + 0x30) != 0) {
          *(undefined1 *)(param_1 + 3) = 1;
          local_3e8[0] = 0;
          FUN_18020e450(&local_140);
          FUN_18020d5c0(&local_158);
          FUN_18020e450(&local_178);
          puVar20 = auStack_428;
          goto LAB_180028bc9;
        }
        lVar12 = lVar12 + 0x90;
      } while (lVar12 != param_1[1]);
      FUN_180212700(plVar26,"no {key} in the template",0x18);
      local_3e8[0] = 0;
      FUN_18020e450(&local_140);
      FUN_18020d5c0(&local_158);
      FUN_18020e450(&local_178);
      puVar20 = auStack_428;
    }
LAB_180028bc9:
    *(undefined8 *)(puVar20 + -8) = 0x180028bd5;
    FUN_18020e450(&local_198);
  }
  else {
    FUN_180212700(plVar26,"template is too long",0x14);
    puVar20 = auStack_428;
  }
  *(undefined8 *)(puVar20 + -8) = 0x180028bea;
  return *(undefined8 *)(puVar20 + 0x50);
}


)B1800275b0",
    "accd68ad7ce5c4054d0b54cada9db0d962526eb40052111da3cbe99dfd83046e",
    R"F1800275b0C(FUN_1800130a0
FUN_18001d080
FUN_180026bc0
FUN_180028c30
FUN_18016d4c0
FUN_18020d5c0
FUN_18020d830
FUN_18020e450
FUN_18020e670
FUN_18020e8a0
FUN_18020e930
FUN_180212700
FUN_18021abd0
FUN_180228bb0
FUN_18022ec00
FUN_180232e30)F1800275b0C",
    R"F1800275b0D(LAB_18002796e
LAB_180027a87
LAB_180028017
LAB_180028054
LAB_1800281cf
LAB_1800281da
LAB_1800284ac
LAB_1800284f9
LAB_180028500
LAB_180028507
LAB_18002850e
LAB_180028515
LAB_1800285a7
LAB_180028bc9
DAT_1803da4c0)F1800275b0D",
    R"F1800275b0T("unclosed \\'{\\'"
"width above 64"
"control character"
"template is empty"
"default is too long"
"template is too long"
"placeholder has no key"
"no {key} in the template"
"placeholder key is too long"
"trailing characters in format"
"unknown format, expected \\'d\\' or \\'s\\'"
"stray \\'}\\' (write \\'}}\\' for a literal)"
"lookup needs table.field, e.g. ba.ranks.Stored.Name")F1800275b0T",
    R"F1800275b0F(171: if ((ulonglong)param_2[2] < 0x81) {
192: if (uVar27 != 0) {
193: do {
197: if (0xf < uVar23) {
201: if (bVar3 == 0x7b) {
203: if (uVar13 < uVar27) {
205: if (0xf < uVar23) {
208: if (*(char *)((longlong)puVar11 + uVar22 + 1) == '{') {
209: if (local_188 < local_180) {
211: if (0xf < local_180) {
219: else {
223: goto LAB_1800284ac;
227: if (0xf < uVar23) {
230: if (((uVar27 <= uVar13) ||
240: goto LAB_180028bc9;
251: if (0xf < local_90) {
254: if (local_98 == 0) {
257: else {
261: if (lVar7 != lVar12) {
265: if (uVar23 != 0xffffffffffffffff) {
271: if (local_98 < uVar23) {
275: if (0xf < local_90) {
280: if (uStack_f0 < 0x10) {
281: LAB_18002796e:
296: if (local_98 < uVar23) {
301: if (local_98 - uVar23 != -1) {
305: if (0xf < local_90) {
320: goto LAB_180027a87;
324: if ((uStack_f0 + 1 < 0x1000) ||
328: goto LAB_18002796e;
333: LAB_1800284f9:
337: LAB_180028500:
342: LAB_180028507:
347: LAB_18002850e:
351: LAB_180028515:
372: goto LAB_180028bc9;
374: LAB_180027a87:
381: if (0xf < uStack_f0) {
384: if (local_f8 == 0) {
387: else {
391: if (lVar7 != lVar12) {
395: if (uVar23 != 0xffffffffffffffff) {
401: if (local_f8 < uVar23) {
405: if (0xf < uStack_f0) {
410: if ((undefined8 ****)0xf < pppuStack_1a8) {
413: if ((0xfff < (longlong)pppuStack_1a8 + 1U) &&
416: goto LAB_1800284f9;
433: if (local_f8 < uVar13) {
438: if (local_f8 - uVar13 != -1) {
442: if (0xf < uStack_f0) {
447: if (0xf < uStack_b0) {
449: if ((0xfff < uStack_b0 + 1) &&
452: goto LAB_180028500;
466: if ((undefined8 ****)0xf < pppuStack_1a8) {
469: if ((undefined8 ****)local_1b0 == (undefined8 ****)0x0) {
472: else {
476: if (lVar7 != lVar12) {
480: if (ppppuVar24 != (undefined8 ****)0xffffffffffffffff) {
484: if (&local_140 != pppppcVar9) {
485: if ((char ****)0xf < local_128) {
487: if ((0xfff < (longlong)local_128 + 1U) &&
490: goto LAB_180028507;
507: if (local_1b0 < ppppuVar24) {
511: if ((undefined8 ****)0xf < pppuStack_1a8) {
516: if ((undefined8 ****)0xf < pppuStack_1a8) {
518: if ((0xfff < (longlong)pppuStack_1a8 + 1U) &&
521: goto LAB_18002850e;
534: if ((char ****)0x40 < local_130) goto LAB_180028515;
535: if ((char ****)local_130 != (char ****)0x0) {
538: if ((char ****)0xf < local_128) {
542: if (((local_1c8 != (char *)0x0) && (*local_1c8 == '\0')) &&
552: if (&local_1c0 != pppppuVar10) {
553: if (pppuStack_1a8 < (undefined8 ****)0x10) {
554: LAB_180028017:
562: goto LAB_180028054;
565: if (((longlong)pppuStack_1a8 + 1U < 0x1000) ||
569: goto LAB_180028017;
574: LAB_1800285a7:
598: goto LAB_180028bc9;
600: LAB_180028054:
602: if ((undefined8 ****)local_1b0 == (undefined8 ****)0x0) {
614: goto LAB_180028bc9;
616: if ((undefined8 ****)0x40 < local_1b0) {
628: goto LAB_180028bc9;
630: if (uVar23 != 0xffffffffffffffff) {
636: if (cVar6 == '\0') {
637: if (0x7fffffffffffffffU - local_78 < 0xd) {
642: if (0xf < local_70) {
663: goto LAB_180028bc9;
665: if ((ulonglong)(lStack_150 - local_158 >> 5) < 2) goto LAB_1800285a7;
670: if ((undefined8 ****)0xf < pppuStack_1a8) {
676: if (uVar22 != 0) {
678: if (0xf < uVar27) {
681: if (*(char *)pppppcVar9 == '0') {
688: if (uVar13 < uVar22) {
689: do {
691: if (0xf < uVar27) {
694: if (*(char *)((longlong)pppppcVar9 + uVar13) < '0') {
695: LAB_1800281cf:
697: if (!bVar5) goto LAB_1800281da;
698: break;
701: if (0xf < uVar27) {
704: if ('9' < *(char *)((longlong)pppppcVar9 + uVar13)) goto LAB_1800281cf;
706: if (0xf < uVar27) {
712: if (0x40 < (int)uVar25) {
724: goto LAB_180028bc9;
730: LAB_1800281da:
732: if (uVar13 < uVar22) {
734: if (0xf < uVar27) {
737: if (*(char *)((longlong)pppppcVar9 + uVar13) == 'd') {
740: else {
742: if (0xf < uVar27) {
745: if (*(char *)((longlong)pppppcVar9 + uVar13) != 's') {
757: goto LAB_180028bc9;
764: if (!bVar28) {
776: goto LAB_180028bc9;
779: if (local_3e0[1][1] == local_3e0[1][2]) {
782: else {
823: else {
824: if (bVar3 == 0x7d) {
825: if (uVar22 + 1 < uVar27) {
827: if (0xf < uVar23) {
830: if (*(char *)(uVar22 + 1 + (longlong)puVar11) == '}') {
831: if (local_188 < local_180) {
833: if (0xf < local_180) {
841: else {
845: goto LAB_1800284ac;
854: goto LAB_180028bc9;
856: if (bVar3 < 0x20) {
862: goto LAB_180028bc9;
864: if (local_188 < local_180) {
866: if (0xf < local_180) {
874: else {
879: LAB_1800284ac:
884: if (local_188 != 0) {
885: if (param_1[1] == param_1[2]) {
888: else {
894: if (lVar12 == param_1[1]) {
902: else {
903: do {
904: if (*(longlong *)(lVar12 + 0x30) != 0) {
911: goto LAB_180028bc9;
922: LAB_180028bc9:
926: else {
931: return *(undefined8 *)(puVar20 + 0x50);)F1800275b0F",
    R"F1800275b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18002796e.
TODO: recover the declaration, type and value for global/data reference LAB_180027a87.
TODO: recover the declaration, type and value for global/data reference LAB_180028017.
TODO: recover the declaration, type and value for global/data reference LAB_180028054.
TODO: recover the declaration, type and value for global/data reference LAB_1800281cf.
TODO: recover the declaration, type and value for global/data reference LAB_1800281da.
TODO: recover the declaration, type and value for global/data reference LAB_1800284ac.
TODO: recover the declaration, type and value for global/data reference LAB_1800284f9.
TODO: recover the declaration, type and value for global/data reference LAB_180028500.
TODO: recover the declaration, type and value for global/data reference LAB_180028507.
TODO: recover the declaration, type and value for global/data reference LAB_18002850e.
TODO: recover the declaration, type and value for global/data reference LAB_180028515.
TODO: recover the declaration, type and value for global/data reference LAB_1800285a7.
TODO: recover the declaration, type and value for global/data reference LAB_180028bc9.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 330: pcVar4 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 331: (*pcVar4)(5);.
TODO: resolve the indirect call in body 334: pcVar4 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 335: (*pcVar4)(5);.
TODO: resolve the indirect call in body 339: pcVar4 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 340: (*pcVar4)(5);.
TODO: resolve the indirect call in body 343: pcVar4 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 344: (*pcVar4)(5);.
TODO: resolve the indirect call in body 348: pcVar4 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 349: (*pcVar4)(5);.
TODO: resolve the indirect call in body 571: pcVar4 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 572: (*pcVar4)(5);.)F1800275b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800275b0() noexcept {
    return kFunction_0x1800275b0;
}

// 0x180028c30 FUN_180028c30
// source: re/dump/decompile/0x180028c30_FUN_180028c30.c
// size: 607 bytes; thunk: false
// body sha256: 750c61e5ea343a32d9ee2f972cc3e8d932119ce6d15cf4097d23f45776cef381
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180028c30{
    "0x180028c30",
    "FUN_180028c30",
    R"F180028c30S(undefined FUN_180028c30())F180028c30S",
    R"B180028c30(// 0x180028c30  FUN_180028c30
// size=607 thunk=false
// signature: undefined FUN_180028c30()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180028c30(undefined8 param_1,undefined8 *param_2,byte *param_3)

{
  char cVar1;
  byte *pbVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte *pbVar6;
  longlong lVar7;
  byte *pbVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined8 *local_150;
  char local_148 [256];
  byte *local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_178;
  local_158 = 0;
  lVar7 = *(longlong *)(param_3 + 0x10);
  pbVar8 = param_3;
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    pbVar8 = *(byte **)param_3;
  }
  local_150 = param_2;
  local_48 = param_3;
  if (lVar7 != 0) {
    if (lVar7 + 2U < 0x10) {
      memset(local_148,0,0x100);
      pbVar6 = &DAT_180340eb4;
      do {
        local_148[*pbVar6] = '\x01';
        pbVar6 = pbVar6 + 1;
        pbVar2 = pbVar8;
      } while (pbVar6 != &DAT_180340eb6);
      for (; pbVar2 < pbVar8 + lVar7; pbVar2 = pbVar2 + 1) {
        if (local_148[*pbVar2] == '\0') {
          uVar3 = (longlong)pbVar2 - (longlong)pbVar8;
          goto LAB_180028d7b;
        }
      }
    }
    else {
      uVar3 = FUN_1802d6fd0(pbVar8,lVar7,&DAT_180340eb4,2);
LAB_180028d7b:
      pbVar8 = &DAT_180340eb4;
      if (uVar3 != 0xffffffffffffffff) {
        pbVar6 = param_3;
        if (0xf < *(ulonglong *)(param_3 + 0x18)) {
          pbVar6 = *(byte **)param_3;
        }
        lVar7 = -1;
        if (*(longlong *)(param_3 + 0x10) != 0) {
          lVar4 = *(longlong *)(param_3 + 0x10) + -1;
          lVar10 = -1;
          if (lVar4 != -1) {
            lVar10 = lVar4;
          }
          if (lVar10 + 3U < 0x10) {
            memset(local_148,0,0x100);
            do {
              local_148[*pbVar8] = '\x01';
              pbVar8 = pbVar8 + 1;
            } while (pbVar8 != &DAT_180340eb6);
            pbVar8 = pbVar6 + lVar10;
            cVar1 = local_148[*pbVar8];
            while (cVar1 != '\0') {
              if (pbVar8 == pbVar6) goto LAB_180028e28;
              pbVar8 = pbVar8 + -1;
              cVar1 = local_148[*pbVar8];
            }
            lVar7 = (longlong)pbVar8 - (longlong)pbVar6;
          }
          else {
            lVar7 = thunk_FUN_1802d4c50(pbVar6,lVar10 + 1,&DAT_180340eb4,2);
          }
        }
LAB_180028e28:
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        if (*(ulonglong *)(param_3 + 0x10) < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_18022ec00();
        }
        uVar9 = (lVar7 - uVar3) + 1;
        uVar5 = *(ulonglong *)(param_3 + 0x10) - uVar3;
        if (uVar5 < uVar9) {
          uVar9 = uVar5;
        }
        pbVar8 = param_3;
        if (0xf < *(ulonglong *)(param_3 + 0x18)) {
          pbVar8 = *(byte **)param_3;
        }
        FUN_18001d080(param_2,pbVar8 + uVar3,uVar9);
        goto LAB_180028d42;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
LAB_180028d42:
  local_158 = 1;
  FUN_18020e450(param_3);
  return param_2;
}


)B180028c30",
    "750c61e5ea343a32d9ee2f972cc3e8d932119ce6d15cf4097d23f45776cef381",
    R"F180028c30C(FUN_18001d080
FUN_18020e450
FUN_18022ec00
FUN_1802d6fd0)F180028c30C",
    R"F180028c30D(LAB_180028d42
LAB_180028d7b
LAB_180028e28
DAT_180340eb4
DAT_180340eb6
DAT_1803da4c0)F180028c30D",
    R"F180028c30T()F180028c30T",
    R"F180028c30F(33: if (0xf < *(ulonglong *)(param_3 + 0x18)) {
38: if (lVar7 != 0) {
39: if (lVar7 + 2U < 0x10) {
42: do {
47: for (; pbVar2 < pbVar8 + lVar7; pbVar2 = pbVar2 + 1) {
48: if (local_148[*pbVar2] == '\0') {
50: goto LAB_180028d7b;
54: else {
56: LAB_180028d7b:
58: if (uVar3 != 0xffffffffffffffff) {
60: if (0xf < *(ulonglong *)(param_3 + 0x18)) {
64: if (*(longlong *)(param_3 + 0x10) != 0) {
67: if (lVar4 != -1) {
70: if (lVar10 + 3U < 0x10) {
72: do {
78: while (cVar1 != '\0') {
79: if (pbVar8 == pbVar6) goto LAB_180028e28;
85: else {
89: LAB_180028e28:
94: if (*(ulonglong *)(param_3 + 0x10) < uVar3) {
100: if (uVar5 < uVar9) {
104: if (0xf < *(ulonglong *)(param_3 + 0x18)) {
108: goto LAB_180028d42;
117: LAB_180028d42:
120: return param_2;)F180028c30F",
    R"F180028c30U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180028d42.
TODO: recover the declaration, type and value for global/data reference LAB_180028d7b.
TODO: recover the declaration, type and value for global/data reference LAB_180028e28.
TODO: recover the declaration, type and value for global/data reference DAT_180340eb4.
TODO: recover the declaration, type and value for global/data reference DAT_180340eb6.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180028c30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180028c30() noexcept {
    return kFunction_0x180028c30;
}

// 0x180028e90 FUN_180028e90
// source: re/dump/decompile/0x180028e90_FUN_180028e90.c
// size: 100 bytes; thunk: false
// body sha256: a470c3d3ef4eea01572c0933328004ec6d43a24d17d63176c2048cd2ad2d3310
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180028e90{
    "0x180028e90",
    "FUN_180028e90",
    R"F180028e90S(undefined FUN_180028e90())F180028e90S",
    R"B180028e90(// 0x180028e90  FUN_180028e90
// size=100 thunk=false
// signature: undefined FUN_180028e90()
// status: ok


longlong FUN_180028e90(undefined8 *param_1,undefined1 param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (*puVar1 <= param_3) {
    return -1;
  }
  lVar2 = *puVar1 + (longlong)param_1;
  lVar3 = thunk_FUN_1802d5c20(param_3 + (longlong)param_1,lVar2,param_2);
  lVar4 = -1;
  if (lVar3 != lVar2) {
    lVar4 = lVar3 - (longlong)param_1;
  }
  return lVar4;
}


)B180028e90",
    "a470c3d3ef4eea01572c0933328004ec6d43a24d17d63176c2048cd2ad2d3310",
    R"F180028e90C()F180028e90C",
    R"F180028e90D()F180028e90D",
    R"F180028e90T()F180028e90T",
    R"F180028e90F(16: if (0xf < (ulonglong)param_1[3]) {
19: if (*puVar1 <= param_3) {
20: return -1;
25: if (lVar3 != lVar2) {
28: return lVar4;)F180028e90F",
    R"F180028e90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180028e90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180028e90() noexcept {
    return kFunction_0x180028e90;
}

// 0x180028f00 FUN_180028f00
// source: re/dump/decompile/0x180028f00_FUN_180028f00.c
// size: 36 bytes; thunk: false
// body sha256: f078fd7ecf29248b1ccc7c07270430d8dfbe70909bf6519405e9a8922caf7249
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180028f00{
    "0x180028f00",
    "FUN_180028f00",
    R"F180028f00S(undefined FUN_180028f00())F180028f00S",
    R"B180028f00(// 0x180028f00  FUN_180028f00
// size=36 thunk=false
// signature: undefined FUN_180028f00()
// status: ok


void FUN_180028f00(longlong param_1)

{
  FUN_18020e450(param_1 + 0x20);
  FUN_18021d530(param_1);
  return;
}


)B180028f00",
    "f078fd7ecf29248b1ccc7c07270430d8dfbe70909bf6519405e9a8922caf7249",
    R"F180028f00C(FUN_18020e450
FUN_18021d530)F180028f00C",
    R"F180028f00D()F180028f00D",
    R"F180028f00T()F180028f00T",
    R"F180028f00F(12: return;)F180028f00F",
    R"F180028f00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180028f00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180028f00() noexcept {
    return kFunction_0x180028f00;
}

// 0x180028f30 FUN_180028f30
// source: re/dump/decompile/0x180028f30_FUN_180028f30.c
// size: 56 bytes; thunk: false
// body sha256: dde9dd6cd716a3b27db26865393014ce3aff481e8f9eaf963a6d1d9fbdd569cc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180028f30{
    "0x180028f30",
    "FUN_180028f30",
    R"F180028f30S(undefined FUN_180028f30())F180028f30S",
    R"B180028f30(// 0x180028f30  FUN_180028f30
// size=56 thunk=false
// signature: undefined FUN_180028f30()
// status: ok


void FUN_180028f30(longlong param_1)

{
  FUN_18020e450(param_1 + 0x58);
  FUN_18020d5c0(param_1 + 0x40);
  FUN_18020e450(param_1 + 0x20);
  FUN_18020e450(param_1);
  return;
}


)B180028f30",
    "dde9dd6cd716a3b27db26865393014ce3aff481e8f9eaf963a6d1d9fbdd569cc",
    R"F180028f30C(FUN_18020d5c0
FUN_18020e450)F180028f30C",
    R"F180028f30D()F180028f30D",
    R"F180028f30T()F180028f30T",
    R"F180028f30F(14: return;)F180028f30F",
    R"F180028f30U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180028f30U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180028f30() noexcept {
    return kFunction_0x180028f30;
}

// 0x180028f70 FUN_180028f70
// source: re/dump/decompile/0x180028f70_FUN_180028f70.c
// size: 1905 bytes; thunk: false
// body sha256: 49291b267a0f381f88c05f2f313a3009677cbf3a074d64c75a2f92a22d14e5a6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180028f70{
    "0x180028f70",
    "FUN_180028f70",
    R"F180028f70S(undefined FUN_180028f70())F180028f70S",
    R"B180028f70(// 0x180028f70  FUN_180028f70
// size=1905 thunk=false
// signature: undefined FUN_180028f70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_180028f70(longlong param_1,char ****param_2,double param_3,char param_4,longlong param_5)

{
  code *pcVar1;
  ulonglong uVar2;
  bool bVar3;
  size_t sVar4;
  char ****ppppcVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  void *_Dst;
  longlong *plVar10;
  char ****ppppcVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  int iVar16;
  undefined8 uStack_250;
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [24];
  undefined4 local_228;
  char **local_220;
  char **ppcStack_218;
  ulonglong local_210;
  undefined8 uStack_208;
  undefined1 local_200 [32];
  undefined1 local_1e0 [24];
  undefined8 local_1c8;
  char ***local_1c0;
  longlong lStack_1b8;
  ulonglong local_1b0;
  ulonglong uStack_1a8;
  char ***local_1a0;
  longlong lStack_198;
  ulonglong local_190;
  ulonglong uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined4 local_100 [8];
  undefined4 local_e0 [8];
  char ***local_c0;
  longlong lStack_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  ulonglong uStack_88;
  char local_80 [32];
  ulonglong local_60;
  
  puVar15 = auStack_248;
  puVar14 = auStack_248;
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_248;
  _Dst = (void *)0x0;
  local_228 = 0;
  lStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0xf;
  local_c0 = (char ***)0x0;
  if (*(char *)(param_1 + 0x89) == '\0') {
    if (param_2[2] == (char ***)0x0) goto LAB_180029695;
    if (&local_c0 != param_2) {
      if ((char ***)0xf < param_2[3]) {
        param_2 = (char ****)*param_2;
      }
      FUN_180212700(&local_c0,param_2);
    }
    iVar16 = *(int *)(param_1 + 0x84);
    puVar15 = auStack_248;
    if ((iVar16 < 1) || (puVar15 = auStack_248, iVar16 <= (int)local_b0)) goto LAB_18002965c;
    uVar12 = FUN_18020ea80(local_e0,(longlong)(iVar16 - (int)local_b0),0x20);
    ppppcVar5 = &local_c0;
    if (0xf < uStack_a8) {
      ppppcVar5 = (char ****)local_c0;
    }
    plVar10 = (longlong *)FUN_18021aef0(uVar12,ppppcVar5,local_b0);
    ppppcVar5 = (char ****)*plVar10;
    lVar9 = plVar10[1];
    uVar2 = plVar10[2];
    uVar7 = plVar10[3];
    plVar10[2] = 0;
    plVar10[3] = 0xf;
    *(undefined1 *)plVar10 = 0;
    local_228 = 0x10;
    puVar14 = auStack_248;
    local_1a0 = (char ***)ppppcVar5;
    lStack_198 = lVar9;
    if (0xf < uStack_a8) {
      ppppcVar11 = (char ****)local_c0;
      puVar14 = auStack_248;
      local_190 = uVar2;
      uStack_188 = uVar7;
      if ((0xfff < uStack_a8 + 1) &&
         (ppppcVar11 = (char ****)local_c0[-1], puVar14 = auStack_248,
         (char *)0x1f < (char *)((longlong)local_c0 + (-8 - (longlong)ppppcVar11)))) {
        pcVar1 = (code *)swi(0x29);
        ppppcVar11 = (char ****)(*pcVar1)(5);
        puVar14 = auStack_240;
      }
      *(undefined8 *)(puVar14 + -8) = 0x18002960b;
      free(ppppcVar11);
    }
    local_190 = 0;
    uStack_188 = 0xf;
    local_1a0 = (char ***)((ulonglong)local_1a0 & 0xffffffffffffff00);
    *(undefined4 *)(puVar14 + 0x20) = 0;
    *(undefined8 *)(puVar14 + -8) = 0x180029652;
    local_c0 = (char ***)ppppcVar5;
    lStack_b8 = lVar9;
    local_b0 = uVar2;
    uStack_a8 = uVar7;
    FUN_18020e450(&local_1a0);
    puVar6 = local_e0;
LAB_180029657:
    *(undefined8 *)(puVar14 + -8) = 0x18002965c;
    FUN_18020e450(puVar6);
    puVar15 = puVar14;
LAB_18002965c:
    if (*(longlong *)(param_5 + 0x10) + local_b0 < 0x101) {
      ppppcVar5 = &local_c0;
      if (0xf < uStack_a8) {
        ppppcVar5 = (char ****)local_c0;
      }
      *(undefined8 *)(puVar15 + -8) = 0x180029691;
      FUN_18021aef0(param_5,ppppcVar5);
      uVar12 = 1;
      goto LAB_180029697;
    }
  }
  else {
    puVar15 = auStack_248;
    if ((((param_4 != '\0') &&
         (puVar15 = auStack_248, ((uint)((ulonglong)param_3 >> 0x34) & 0x7ff) != 0x7ff)) &&
        (puVar15 = auStack_248, DAT_180381430 <= param_3)) &&
       (puVar15 = auStack_248, param_3 <= _DAT_180381230)) {
      FUN_180012ac0(local_80,0x20,&DAT_18033f574,(longlong)param_3);
      sVar4 = strlen(local_80);
      FUN_180212700(&local_c0,local_80,sVar4);
      uVar2 = local_b0;
      iVar16 = *(int *)(param_1 + 0x84);
      puVar15 = auStack_248;
      if ((0 < iVar16) && (puVar15 = auStack_248, (int)local_b0 < iVar16)) {
        iVar16 = iVar16 - (int)local_b0;
        if (*(char *)(param_1 + 0x88) == '\0') {
          uVar12 = FUN_18020ea80(local_100,(longlong)iVar16,0x20);
          ppppcVar5 = &local_c0;
          if (0xf < uStack_a8) {
            ppppcVar5 = (char ****)local_c0;
          }
          plVar10 = (longlong *)FUN_18021aef0(uVar12,ppppcVar5,local_b0);
          ppppcVar5 = (char ****)*plVar10;
          lVar9 = plVar10[1];
          uVar2 = plVar10[2];
          uVar7 = plVar10[3];
          plVar10[2] = 0;
          plVar10[3] = 0xf;
          *(undefined1 *)plVar10 = 0;
          local_228 = 0x20;
          puVar14 = auStack_248;
          local_1c0 = (char ***)ppppcVar5;
          lStack_1b8 = lVar9;
          if (0xf < uStack_a8) {
            ppppcVar11 = (char ****)local_c0;
            puVar14 = auStack_248;
            local_1b0 = uVar2;
            uStack_1a8 = uVar7;
            if ((0xfff < uStack_a8 + 1) &&
               (ppppcVar11 = (char ****)local_c0[-1], puVar14 = auStack_248,
               (char *)0x1f < (char *)((longlong)local_c0 + (-8 - (longlong)ppppcVar11)))) {
              pcVar1 = (code *)swi(0x29);
              ppppcVar11 = (char ****)(*pcVar1)(5);
              puVar14 = auStack_240;
            }
            *(undefined8 *)(puVar14 + -8) = 0x1800294c2;
            free(ppppcVar11);
          }
          local_1b0 = 0;
          uStack_1a8 = 0xf;
          local_1c0 = (char ***)((ulonglong)local_1c0 & 0xffffffffffffff00);
          *(undefined4 *)(puVar14 + 0x20) = 0;
          *(undefined8 *)(puVar14 + -8) = 0x180029509;
          local_c0 = (char ***)ppppcVar5;
          lStack_b8 = lVar9;
          local_b0 = uVar2;
          uStack_a8 = uVar7;
          FUN_18020e450(&local_1c0);
          puVar6 = local_100;
          goto LAB_180029657;
        }
        if (local_b0 == 0) {
LAB_180029100:
          local_220 = (char **)0x0;
          ppcStack_218 = (char **)0x0;
          local_210 = 0;
          uStack_208 = 0;
          ppppcVar5 = &local_c0;
          if (0xf < uStack_a8) {
            ppppcVar5 = (char ****)local_c0;
          }
          if (0x7fffffffffffffff < local_b0) {
                    /* WARNING: Subroutine does not return */
            FUN_1800130a0();
          }
          if (local_b0 < 0x10) {
            local_210 = local_b0;
            uStack_208 = 0xf;
            local_220 = (char **)*ppppcVar5;
            ppcStack_218 = (char **)ppppcVar5[1];
            puVar14 = auStack_248;
          }
          else {
            uVar7 = local_b0 | 0xf;
            if (uVar7 < 0x8000000000000000) goto LAB_180029183;
            uVar8 = 0x8000000000000027;
            uVar7 = 0x7fffffffffffffff;
            puVar14 = auStack_248;
            while( true ) {
              *(undefined8 *)(puVar14 + -8) = 0x180029174;
              lVar9 = FUN_1802d8350(uVar8);
              if (lVar9 != 0) break;
              pcVar1 = (code *)swi(0x29);
              uVar7 = (*pcVar1)(5);
              puVar14 = puVar14 + 8;
LAB_180029183:
              if (uVar7 < 0x16) {
                uVar7 = 0x16;
              }
              if (uVar7 == 0xffffffffffffffff) goto LAB_1800291cb;
              if (uVar7 + 1 < 0x1000) {
                *(undefined8 *)(puVar14 + -8) = 0x1800291cb;
                _Dst = (void *)FUN_1802d8350();
                goto LAB_1800291cb;
              }
              uVar8 = uVar7 + 0x28;
              if (uVar8 <= uVar7 + 1) {
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar14 + -8) = &UNK_1800296e2;
                FUN_180012fe0();
              }
            }
            _Dst = (void *)(lVar9 + 0x27U & 0xffffffffffffffe0);
            *(longlong *)((longlong)_Dst - 8) = lVar9;
LAB_1800291cb:
            *(void **)(puVar14 + 0x28) = _Dst;
            *(ulonglong *)(puVar14 + 0x38) = uVar2;
            *(ulonglong *)(puVar14 + 0x40) = uVar7;
            *(undefined8 *)(puVar14 + -8) = 0x1800291e9;
            memcpy(_Dst,ppppcVar5,uVar2 + 1);
          }
          bVar3 = false;
          puVar6 = (undefined4 *)(puVar14 + 0x28);
          uVar13 = 2;
        }
        else {
          ppppcVar5 = &local_c0;
          if (0xf < uStack_a8) {
            ppppcVar5 = (char ****)local_c0;
          }
          if (*(char *)ppppcVar5 != '-') goto LAB_180029100;
          bVar3 = true;
          puVar6 = (undefined4 *)FUN_18020e670(&local_c0,local_140,1,0xffffffffffffffff);
          uVar13 = 1;
          puVar14 = auStack_248;
        }
        *(uint *)(puVar14 + 0x20) = uVar13;
        local_90 = 0;
        uStack_88 = 0;
        local_a0 = *puVar6;
        uStack_9c = puVar6[1];
        uStack_98 = puVar6[2];
        uStack_94 = puVar6[3];
        local_90 = *(undefined8 *)(puVar6 + 4);
        uStack_88 = *(ulonglong *)(puVar6 + 6);
        *(undefined8 *)(puVar6 + 4) = 0;
        *(undefined8 *)(puVar6 + 6) = 0xf;
        *(undefined1 *)puVar6 = 0;
        if ((uVar13 & 2) != 0) {
          uVar13 = uVar13 & 0xfffffffd;
          *(uint *)(puVar14 + 0x20) = uVar13;
          *(undefined8 *)(puVar14 + -8) = 0x180029242;
          FUN_18020e450(puVar14 + 0x28);
        }
        if ((uVar13 & 1) != 0) {
          uVar13 = uVar13 & 0xfffffffe;
          *(uint *)(puVar14 + 0x20) = uVar13;
          *(undefined8 *)(puVar14 + -8) = 0x180029258;
          FUN_18020e450(local_140);
        }
        *(undefined8 *)(puVar14 + -8) = 0x180029267;
        FUN_18020ea80(local_120,(longlong)iVar16,0x30);
        if (bVar3) {
          local_180 = 0;
          uStack_178 = 0;
          local_170 = 0;
          local_168 = 0;
          *(undefined8 *)(puVar14 + -8) = 0x180029294;
          FUN_18001d080(&local_180,&DAT_1803410ec,1);
          uVar13 = uVar13 | 4;
        }
        else {
          *(undefined8 *)(puVar14 + 0x68) = 0;
          *(undefined8 *)(puVar14 + 0x70) = 0;
          *(undefined8 *)(puVar14 + 0x78) = 0;
          *(undefined8 *)(puVar14 + 0x78) = 0;
          local_1c8 = 0xf;
          puVar14[0x68] = 0;
          uVar13 = uVar13 | 8;
        }
        *(uint *)(puVar14 + 0x20) = uVar13;
        *(undefined8 *)(puVar14 + -8) = 0x1800292d5;
        FUN_18021e540(local_160);
        *(uint *)(puVar14 + 0x20) = uVar13 | 0x80;
        uVar12 = local_90;
        puVar6 = &local_a0;
        if (0xf < uStack_88) {
          puVar6 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
        }
        *(undefined8 *)(puVar14 + -8) = 0x180029304;
        plVar10 = (longlong *)FUN_18021aef0(local_160,puVar6,uVar12);
        *(undefined8 *)(puVar14 + 0x58) = 0;
        *(undefined8 *)(puVar14 + 0x60) = 0;
        ppppcVar5 = (char ****)*plVar10;
        lVar9 = plVar10[1];
        *(char *****)(puVar14 + 0x48) = ppppcVar5;
        *(longlong *)(puVar14 + 0x50) = lVar9;
        uVar2 = plVar10[2];
        uVar7 = plVar10[3];
        *(ulonglong *)(puVar14 + 0x58) = uVar2;
        *(ulonglong *)(puVar14 + 0x60) = uVar7;
        plVar10[2] = 0;
        plVar10[3] = 0xf;
        *(undefined1 *)plVar10 = 0;
        *(uint *)(puVar14 + 0x20) = uVar13 | 0xc0;
        if (0xf < uStack_a8) {
          ppppcVar11 = (char ****)local_c0;
          if ((0xfff < uStack_a8 + 1) &&
             (ppppcVar11 = (char ****)local_c0[-1],
             (char *)0x1f < (char *)((longlong)local_c0 + (-8 - (longlong)ppppcVar11)))) {
            pcVar1 = (code *)swi(0x29);
            ppppcVar11 = (char ****)(*pcVar1)(5);
            puVar14 = puVar14 + 8;
          }
          *(undefined8 *)(puVar14 + -8) = 0x18002937b;
          free(ppppcVar11);
        }
        local_c0 = (char ***)ppppcVar5;
        lStack_b8 = lVar9;
        local_b0 = uVar2;
        uStack_a8 = uVar7;
        *(undefined8 *)(puVar14 + 0x58) = 0;
        *(undefined8 *)(puVar14 + 0x60) = 0xf;
        puVar14[0x48] = 0;
        *(uint *)(puVar14 + 0x20) = uVar13 | 0x80;
        *(undefined8 *)(puVar14 + -8) = 0x1800293c6;
        FUN_18020e450(puVar14 + 0x48);
        *(uint *)(puVar14 + 0x20) = uVar13;
        *(undefined8 *)(puVar14 + -8) = 0x1800293d7;
        FUN_18020e450(local_160);
        if ((uVar13 & 8) != 0) {
          uVar13 = uVar13 & 0xffffff37;
          *(uint *)(puVar14 + 0x20) = uVar13;
          *(undefined8 *)(puVar14 + -8) = 0x1800293ee;
          FUN_18020e450(puVar14 + 0x68);
        }
        if ((uVar13 & 4) != 0) {
          *(uint *)(puVar14 + 0x20) = uVar13 & 0xfffffffb;
          *(undefined8 *)(puVar14 + -8) = 0x180029404;
          FUN_18020e450(&local_180);
        }
        *(undefined8 *)(puVar14 + -8) = 0x18002940e;
        FUN_18020e450(local_120);
        puVar6 = &local_a0;
        goto LAB_180029657;
      }
      goto LAB_18002965c;
    }
  }
LAB_180029695:
  uVar12 = 0;
LAB_180029697:
  *(undefined8 *)(puVar15 + -8) = 0x1800296a3;
  FUN_18020e450(&local_c0);
  *(undefined8 *)(puVar15 + -8) = 0x1800296b5;
  return uVar12;
}


)B180028f70",
    "49291b267a0f381f88c05f2f313a3009677cbf3a074d64c75a2f92a22d14e5a6",
    R"F180028f70C(FUN_180012ac0
FUN_180012fe0
FUN_1800130a0
FUN_18001d080
FUN_18020e450
FUN_18020e670
FUN_18020ea80
FUN_180212700
FUN_18021aef0
FUN_18021e540
FUN_1802d8350)F180028f70C",
    R"F180028f70D(LAB_180029100
LAB_180029183
LAB_1800291cb
LAB_180029657
LAB_18002965c
LAB_180029695
LAB_180029697
UNK_1800296e2
DAT_18033f574
DAT_1803410ec
DAT_180381430
DAT_1803da4c0)F180028f70D",
    R"F180028f70T()F180028f70T",
    R"F180028f70F(81: if (*(char *)(param_1 + 0x89) == '\0') {
82: if (param_2[2] == (char ***)0x0) goto LAB_180029695;
83: if (&local_c0 != param_2) {
84: if ((char ***)0xf < param_2[3]) {
91: if ((iVar16 < 1) || (puVar15 = auStack_248, iVar16 <= (int)local_b0)) goto LAB_18002965c;
94: if (0xf < uStack_a8) {
109: if (0xf < uStack_a8) {
114: if ((0xfff < uStack_a8 + 1) &&
135: LAB_180029657:
139: LAB_18002965c:
140: if (*(longlong *)(param_5 + 0x10) + local_b0 < 0x101) {
142: if (0xf < uStack_a8) {
148: goto LAB_180029697;
151: else {
153: if ((((param_4 != '\0') &&
163: if ((0 < iVar16) && (puVar15 = auStack_248, (int)local_b0 < iVar16)) {
165: if (*(char *)(param_1 + 0x88) == '\0') {
168: if (0xf < uStack_a8) {
183: if (0xf < uStack_a8) {
188: if ((0xfff < uStack_a8 + 1) &&
209: goto LAB_180029657;
211: if (local_b0 == 0) {
212: LAB_180029100:
218: if (0xf < uStack_a8) {
221: if (0x7fffffffffffffff < local_b0) {
225: if (local_b0 < 0x10) {
232: else {
234: if (uVar7 < 0x8000000000000000) goto LAB_180029183;
238: while( true ) {
241: if (lVar9 != 0) break;
245: LAB_180029183:
246: if (uVar7 < 0x16) {
249: if (uVar7 == 0xffffffffffffffff) goto LAB_1800291cb;
250: if (uVar7 + 1 < 0x1000) {
253: goto LAB_1800291cb;
256: if (uVar8 <= uVar7 + 1) {
264: LAB_1800291cb:
275: else {
277: if (0xf < uStack_a8) {
280: if (*(char *)ppppcVar5 != '-') goto LAB_180029100;
298: if ((uVar13 & 2) != 0) {
304: if ((uVar13 & 1) != 0) {
312: if (bVar3) {
321: else {
336: if (0xf < uStack_88) {
355: if (0xf < uStack_a8) {
357: if ((0xfff < uStack_a8 + 1) &&
380: if ((uVar13 & 8) != 0) {
386: if ((uVar13 & 4) != 0) {
394: goto LAB_180029657;
396: goto LAB_18002965c;
399: LAB_180029695:
401: LAB_180029697:
405: return uVar12;)F180028f70F",
    R"F180028f70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180029100.
TODO: recover the declaration, type and value for global/data reference LAB_180029183.
TODO: recover the declaration, type and value for global/data reference LAB_1800291cb.
TODO: recover the declaration, type and value for global/data reference LAB_180029657.
TODO: recover the declaration, type and value for global/data reference LAB_18002965c.
TODO: recover the declaration, type and value for global/data reference LAB_180029695.
TODO: recover the declaration, type and value for global/data reference LAB_180029697.
TODO: recover the declaration, type and value for global/data reference UNK_1800296e2.
TODO: recover the declaration, type and value for global/data reference DAT_18033f574.
TODO: recover the declaration, type and value for global/data reference DAT_1803410ec.
TODO: recover the declaration, type and value for global/data reference DAT_180381430.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 117: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 118: ppppcVar11 = (char ****)(*pcVar1)(5);.
TODO: resolve the indirect call in body 191: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 192: ppppcVar11 = (char ****)(*pcVar1)(5);.
TODO: resolve the indirect call in body 242: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 243: uVar7 = (*pcVar1)(5);.
TODO: resolve the indirect call in body 360: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 361: ppppcVar11 = (char ****)(*pcVar1)(5);.)F180028f70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180028f70() noexcept {
    return kFunction_0x180028f70;
}

// 0x1800296f0 FUN_1800296f0
// source: re/dump/decompile/0x1800296f0_FUN_1800296f0.c
// size: 9 bytes; thunk: false
// body sha256: 2e93f253c5427600b6702d495a2dab170da34ab90256d6c60ca01b08784e0b1e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1800296f0{
    "0x1800296f0",
    "FUN_1800296f0",
    R"F1800296f0S(undefined FUN_1800296f0())F1800296f0S",
    R"B1800296f0(// 0x1800296f0  FUN_1800296f0
// size=9 thunk=false
// signature: undefined FUN_1800296f0()
// status: ok


bool FUN_1800296f0(longlong param_1)

{
  return *(longlong *)(param_1 + 0x10) == 0;
}


)B1800296f0",
    "2e93f253c5427600b6702d495a2dab170da34ab90256d6c60ca01b08784e0b1e",
    R"F1800296f0C()F1800296f0C",
    R"F1800296f0D()F1800296f0D",
    R"F1800296f0T()F1800296f0T",
    R"F1800296f0F(10: return *(longlong *)(param_1 + 0x10) == 0;)F1800296f0F",
    R"F1800296f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1800296f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1800296f0() noexcept {
    return kFunction_0x1800296f0;
}

// 0x180029700 FUN_180029700
// source: re/dump/decompile/0x180029700_FUN_180029700.c
// size: 378 bytes; thunk: false
// body sha256: 375cfaf61e5213dec850a060f18b9a782bae828f7b49c65bf345a96c0720791c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180029700{
    "0x180029700",
    "FUN_180029700",
    R"F180029700S(undefined FUN_180029700())F180029700S",
    R"B180029700(// 0x180029700  FUN_180029700
// size=378 thunk=false
// signature: undefined FUN_180029700()
// status: ok


bool FUN_180029700(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  size_t sVar2;
  ulonglong uVar3;
  size_t _Size;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *_Buf1;
  undefined8 *puVar7;
  undefined8 *_Buf2;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 uVar10;
  
  param_3[2] = 0;
  puVar6 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar6 = (undefined8 *)*param_3;
  }
  *(undefined1 *)puVar6 = 0;
  if (*(char *)(param_1 + 3) == '\0') {
LAB_180029851:
    bVar9 = false;
  }
  else {
    puVar6 = (undefined8 *)param_1[1];
    for (param_1 = (undefined8 *)*param_1; param_1 != puVar6; param_1 = param_1 + 0x12) {
      if (0x100 < (ulonglong)(param_3[2] + param_1[2])) goto LAB_180029851;
      puVar7 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        puVar7 = (undefined8 *)*param_1;
      }
      FUN_18021aef0(param_3,puVar7);
      sVar2 = param_1[6];
      if (sVar2 != 0) {
        if (param_1[8] != param_1[9]) goto LAB_180029851;
        puVar7 = (undefined8 *)*param_2;
        puVar8 = (undefined8 *)param_2[1];
        if (puVar7 != puVar8) {
          uVar3 = param_1[7];
          do {
            _Buf2 = param_1 + 4;
            if (0xf < uVar3) {
              _Buf2 = (undefined8 *)*_Buf2;
            }
            _Size = puVar7[2];
            _Buf1 = puVar7;
            if (0xf < (ulonglong)puVar7[3]) {
              _Buf1 = (undefined8 *)*puVar7;
            }
            if ((_Size == sVar2) &&
               ((_Size == 0 || (iVar5 = memcmp(_Buf1,_Buf2,_Size), iVar5 == 0)))) {
              uVar1 = *(undefined1 *)(puVar7 + 9);
              puVar8 = puVar7 + 4;
              uVar10 = puVar7[8];
              goto LAB_180029816;
            }
            puVar7 = puVar7 + 10;
          } while (puVar7 != puVar8);
        }
        if (*(char *)(param_1 + 0x10) == '\0') goto LAB_180029851;
        uVar1 = *(undefined1 *)((longlong)param_1 + 0x81);
        puVar8 = param_1 + 0xb;
        uVar10 = param_1[0xf];
LAB_180029816:
        cVar4 = FUN_180028f70(param_1,puVar8,uVar10,uVar1,param_3);
        if (cVar4 == '\0') goto LAB_180029851;
      }
    }
    bVar9 = param_3[2] != 0;
  }
  return bVar9;
}


)B180029700",
    "375cfaf61e5213dec850a060f18b9a782bae828f7b49c65bf345a96c0720791c",
    R"F180029700C(FUN_180028f70
FUN_18021aef0)F180029700C",
    R"F180029700D(LAB_180029816
LAB_180029851)F180029700D",
    R"F180029700T()F180029700T",
    R"F180029700F(26: if (0xf < (ulonglong)param_3[3]) {
30: if (*(char *)(param_1 + 3) == '\0') {
31: LAB_180029851:
34: else {
36: for (param_1 = (undefined8 *)*param_1; param_1 != puVar6; param_1 = param_1 + 0x12) {
37: if (0x100 < (ulonglong)(param_3[2] + param_1[2])) goto LAB_180029851;
39: if (0xf < (ulonglong)param_1[3]) {
44: if (sVar2 != 0) {
45: if (param_1[8] != param_1[9]) goto LAB_180029851;
48: if (puVar7 != puVar8) {
50: do {
52: if (0xf < uVar3) {
57: if (0xf < (ulonglong)puVar7[3]) {
60: if ((_Size == sVar2) &&
65: goto LAB_180029816;
70: if (*(char *)(param_1 + 0x10) == '\0') goto LAB_180029851;
74: LAB_180029816:
76: if (cVar4 == '\0') goto LAB_180029851;
81: return bVar9;)F180029700F",
    R"F180029700U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180029816.
TODO: recover the declaration, type and value for global/data reference LAB_180029851.)F180029700U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180029700() noexcept {
    return kFunction_0x180029700;
}

// 0x180029880 FUN_180029880
// source: re/dump/decompile/0x180029880_FUN_180029880.c
// size: 1087 bytes; thunk: false
// body sha256: 084b7c41cd0b3c1459137bf9f34a7a2c21ef7e94b3ead74a978d4512d4468386
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180029880{
    "0x180029880",
    "FUN_180029880",
    R"F180029880S(undefined FUN_180029880())F180029880S",
    R"B180029880(// 0x180029880  FUN_180029880
// size=1087 thunk=false
// signature: undefined FUN_180029880()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180029880(undefined8 *param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  code *pcVar3;
  byte *pbVar4;
  ulonglong uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [40];
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 *local_178;
  char local_168 [256];
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  puVar9 = auStack_1d8;
  puVar10 = auStack_1d8;
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_1d8;
  local_1a8 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0xf;
  local_68 = (byte *)0x0;
  uVar5 = *(ulonglong *)(param_2 + 0x10);
  local_180 = param_3;
  local_178 = param_1;
  if (0xf < uVar5) {
    FUN_18021aa80(&local_68);
    uVar5 = *(ulonglong *)(param_2 + 0x10);
  }
  local_58 = 0;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(byte **)param_2;
  }
  pbVar6 = param_2 + uVar5;
  uVar5 = local_58;
  uVar11 = uStack_50;
  for (; local_58 = uVar5, param_2 != pbVar6; param_2 = param_2 + 1) {
    bVar1 = *param_2;
    if ((0x1f < bVar1) && (bVar1 != 0x7f)) {
      if (uVar5 < uVar11) {
        local_58 = uVar5 + 1;
        pbVar8 = (byte *)&local_68;
        if (0xf < uVar11) {
          pbVar8 = local_68;
        }
        pbVar8[uVar5] = bVar1;
        pbVar8[uVar5 + 1] = 0;
        uVar11 = uStack_50;
      }
      else {
        FUN_18021abd0(&local_68);
        uVar11 = uStack_50;
      }
    }
    uVar5 = local_58;
  }
  pbVar6 = (byte *)&local_68;
  if (0xf < uVar11) {
    pbVar6 = local_68;
  }
  if (uVar5 != 0) {
    if (uVar5 + 2 < 0x10) {
      memset(local_168,0,0x100);
      pbVar8 = &DAT_180340eb4;
      do {
        local_168[*pbVar8] = '\x01';
        pbVar8 = pbVar8 + 1;
        pbVar4 = pbVar6;
      } while (pbVar8 != &DAT_180340eb6);
      for (; pbVar4 < pbVar6 + uVar5; pbVar4 = pbVar4 + 1) {
        if (local_168[*pbVar4] == '\0') {
          uVar5 = (longlong)pbVar4 - (longlong)pbVar6;
          goto LAB_180029abe;
        }
      }
    }
    else {
      uVar5 = FUN_1802d6fd0(pbVar6,uVar5,&DAT_180340eb4,2);
      uVar11 = uStack_50;
LAB_180029abe:
      pbVar6 = &DAT_180340eb4;
      if (uVar5 != 0xffffffffffffffff) {
        pbVar8 = (byte *)&local_68;
        if (0xf < uVar11) {
          pbVar8 = local_68;
        }
        lVar12 = -1;
        if (local_58 != 0) {
          lVar13 = -1;
          if (local_58 - 1 != -1) {
            lVar13 = local_58 - 1;
          }
          if (lVar13 + 3U < 0x10) {
            memset(local_168,0,0x100);
            do {
              local_168[*pbVar6] = '\x01';
              pbVar6 = pbVar6 + 1;
            } while (pbVar6 != &DAT_180340eb6);
            pbVar6 = pbVar8 + lVar13;
            cVar2 = local_168[*pbVar6];
            while (cVar2 != '\0') {
              if (pbVar6 == pbVar8) goto LAB_180029b68;
              pbVar6 = pbVar6 + -1;
              cVar2 = local_168[*pbVar6];
            }
            lVar12 = (longlong)pbVar6 - (longlong)pbVar8;
          }
          else {
            lVar12 = thunk_FUN_1802d4c50(pbVar8,lVar13 + 1,&DAT_180340eb4,2);
          }
        }
LAB_180029b68:
        local_1a0 = 0;
        uStack_198 = 0;
        local_190 = 0;
        uStack_188 = 0;
        if (local_58 < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_18022ec00();
        }
        uVar11 = (lVar12 - uVar5) + 1;
        if (local_58 - uVar5 < uVar11) {
          uVar11 = local_58 - uVar5;
        }
        pbVar6 = (byte *)&local_68;
        if (0xf < uStack_50) {
          pbVar6 = local_68;
        }
        FUN_18001d080(&local_1a0,pbVar6 + uVar5,uVar11);
        local_1a8 = 2;
        if (0xf < uStack_50) {
          pbVar6 = local_68;
          puVar10 = auStack_1d8;
          if ((0xfff < uStack_50 + 1) &&
             (pbVar6 = *(byte **)(local_68 + -8), puVar10 = auStack_1d8,
             (byte *)0x1f < local_68 + (-8 - (longlong)pbVar6))) {
            pcVar3 = (code *)swi(0x29);
            pbVar6 = (byte *)(*pcVar3)(5);
            puVar10 = auStack_1d0;
          }
          *(undefined8 *)(puVar10 + -8) = 0x180029c03;
          free(pbVar6);
        }
        local_58 = 0;
        uStack_50 = 0xf;
        local_68 = (byte *)((ulonglong)local_68 & 0xffffffffffffff00);
        local_68 = (byte *)*(undefined8 **)(puVar10 + 0x38);
        uStack_60 = *(undefined8 *)(puVar10 + 0x40);
        local_58 = *(ulonglong *)(puVar10 + 0x48);
        uStack_50 = *(ulonglong *)(puVar10 + 0x50);
        *(undefined8 *)(puVar10 + 0x48) = 0;
        *(undefined8 *)(puVar10 + 0x50) = 0xf;
        puVar10[0x38] = 0;
        *(undefined4 *)(puVar10 + 0x30) = 0;
        *(undefined8 *)(puVar10 + -8) = 0x180029c54;
        FUN_18020e450(puVar10 + 0x38);
        uVar5 = *(ulonglong *)(puVar10 + 0x58);
        if (uVar5 < local_58) {
          puVar7 = &local_68;
          if (0xf < uStack_50) {
            puVar7 = (undefined8 *)local_68;
          }
          local_58 = uVar5;
          *(undefined1 *)(uVar5 + (longlong)puVar7) = 0;
        }
        *(undefined4 *)param_1 = (undefined4)local_68;
        *(undefined4 *)((longlong)param_1 + 4) = local_68._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_60._4_4_;
        param_1[2] = local_58;
        param_1[3] = uStack_50;
        local_58 = 0;
        uStack_50 = 0xf;
        local_68 = (byte *)((ulonglong)local_68 & 0xffffffffffffff00);
        *(undefined4 *)(puVar10 + 0x30) = 1;
        puVar9 = puVar10;
        goto LAB_180029a85;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_1a8 = 1;
LAB_180029a85:
  *(undefined8 *)(puVar9 + -8) = 0x180029a8e;
  FUN_18020e450(&local_68);
  *(undefined8 *)(puVar9 + -8) = 0x180029aa0;
  return param_1;
}


)B180029880",
    "084b7c41cd0b3c1459137bf9f34a7a2c21ef7e94b3ead74a978d4512d4468386",
    R"F180029880C(FUN_18001d080
FUN_18020e450
FUN_18021aa80
FUN_18021abd0
FUN_18022ec00
FUN_1802d6fd0)F180029880C",
    R"F180029880D(LAB_180029a85
LAB_180029abe
LAB_180029b68
DAT_180340eb4
DAT_180340eb6
DAT_1803da4c0)F180029880D",
    R"F180029880T()F180029880T",
    R"F180029880F(52: if (0xf < uVar5) {
57: if (0xf < *(ulonglong *)(param_2 + 0x18)) {
63: for (; local_58 = uVar5, param_2 != pbVar6; param_2 = param_2 + 1) {
65: if ((0x1f < bVar1) && (bVar1 != 0x7f)) {
66: if (uVar5 < uVar11) {
69: if (0xf < uVar11) {
76: else {
84: if (0xf < uVar11) {
87: if (uVar5 != 0) {
88: if (uVar5 + 2 < 0x10) {
91: do {
96: for (; pbVar4 < pbVar6 + uVar5; pbVar4 = pbVar4 + 1) {
97: if (local_168[*pbVar4] == '\0') {
99: goto LAB_180029abe;
103: else {
106: LAB_180029abe:
108: if (uVar5 != 0xffffffffffffffff) {
110: if (0xf < uVar11) {
114: if (local_58 != 0) {
116: if (local_58 - 1 != -1) {
119: if (lVar13 + 3U < 0x10) {
121: do {
127: while (cVar2 != '\0') {
128: if (pbVar6 == pbVar8) goto LAB_180029b68;
134: else {
138: LAB_180029b68:
143: if (local_58 < uVar5) {
148: if (local_58 - uVar5 < uVar11) {
152: if (0xf < uStack_50) {
157: if (0xf < uStack_50) {
160: if ((0xfff < uStack_50 + 1) &&
184: if (uVar5 < local_58) {
186: if (0xf < uStack_50) {
203: goto LAB_180029a85;
213: LAB_180029a85:
217: return param_1;)F180029880F",
    R"F180029880U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180029a85.
TODO: recover the declaration, type and value for global/data reference LAB_180029abe.
TODO: recover the declaration, type and value for global/data reference LAB_180029b68.
TODO: recover the declaration, type and value for global/data reference DAT_180340eb4.
TODO: recover the declaration, type and value for global/data reference DAT_180340eb6.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 163: pcVar3 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 164: pbVar6 = (byte *)(*pcVar3)(5);.)F180029880U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180029880() noexcept {
    return kFunction_0x180029880;
}

// 0x180029cc0 FUN_180029cc0
// source: re/dump/decompile/0x180029cc0_FUN_180029cc0.c
// size: 175 bytes; thunk: false
// body sha256: 146ec46337ff05ff5be271aa794b04542a4d11d08c60e14ec242c02603919696
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180029cc0{
    "0x180029cc0",
    "FUN_180029cc0",
    R"F180029cc0S(undefined FUN_180029cc0())F180029cc0S",
    R"B180029cc0(// 0x180029cc0  FUN_180029cc0
// size=175 thunk=false
// signature: undefined FUN_180029cc0()
// status: ok


undefined8 * FUN_180029cc0(void)

{
  char **local_48;
  undefined1 *local_40;
  char *local_38;
  char *local_30;
  char *local_28;
  char *local_20;
  char *local_18;
  undefined1 local_10 [8];
  
  if ((DAT_1805c5a1c & 1) == 0) {
    DAT_1805c5a1c = DAT_1805c5a1c | 1;
    DAT_18042a8b8 = 0;
    uRam000000018042a8c0 = 0;
    DAT_18042a8c8 = 0;
    local_38 = "netvars.stored";
    local_30 = "axe.netvar.data";
    local_28 = "nw.Data";
    local_20 = "@nwvars";
    local_18 = "@nw2vars";
    local_48 = &local_38;
    local_40 = local_10;
    FUN_180029d70(&DAT_18042a8b8,&local_48);
    atexit(FUN_180308c30);
    return &DAT_18042a8b8;
  }
  return &DAT_18042a8b8;
}


)B180029cc0",
    "146ec46337ff05ff5be271aa794b04542a4d11d08c60e14ec242c02603919696",
    R"F180029cc0C(FUN_180029d70
FUN_180308c30)F180029cc0C",
    R"F180029cc0D(DAT_18042a8b8
DAT_18042a8c8
DAT_1805c5a1c)F180029cc0D",
    R"F180029cc0T("@nwvars"
"nw.Data"
"@nw2vars"
"netvars.stored"
"axe.netvar.data")F180029cc0T",
    R"F180029cc0F(19: if ((DAT_1805c5a1c & 1) == 0) {
33: return &DAT_18042a8b8;
35: return &DAT_18042a8b8;)F180029cc0F",
    R"F180029cc0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18042a8b8.
TODO: recover the declaration, type and value for global/data reference DAT_18042a8c8.
TODO: recover the declaration, type and value for global/data reference DAT_1805c5a1c.)F180029cc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180029cc0() noexcept {
    return kFunction_0x180029cc0;
}

// 0x180029d70 FUN_180029d70
// source: re/dump/decompile/0x180029d70_FUN_180029d70.c
// size: 235 bytes; thunk: false
// body sha256: 7ff75c5ca41f7164dfa26d39366e0df1d5d7abf1f0a0c7eccd29270b9057873d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180029d70{
    "0x180029d70",
    "FUN_180029d70",
    R"F180029d70S(undefined FUN_180029d70())F180029d70S",
    R"B180029d70(// 0x180029d70  FUN_180029d70
// size=235 thunk=false
// signature: undefined FUN_180029d70()
// status: ok


ulonglong * FUN_180029d70(ulonglong *param_1,undefined8 *param_2)

{
  void *_Src;
  void *_Dst;
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  size_t _Size;
  ulonglong uVar7;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [40];
  
  puVar6 = auStack_58;
  puVar5 = auStack_58;
  uVar3 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _Src = (void *)*param_2;
  _Size = param_2[1] - (longlong)_Src;
  uVar7 = (longlong)_Size >> 3;
  if (uVar7 != 0) {
    if (0x1fffffffffffffff < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18020cc40();
    }
    uVar7 = uVar7 * 8;
    if (uVar7 != 0) {
      if (uVar7 < 0x1000) {
        uVar3 = FUN_1802d8350(uVar7);
        puVar6 = auStack_58;
      }
      else {
        if (uVar7 + 0x27 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_180012fe0();
        }
        lVar2 = FUN_1802d8350();
        lVar4 = lVar2;
        if (lVar2 == 0) {
          lVar4 = 5;
          pcVar1 = (code *)swi(0x29);
          lVar2 = (*pcVar1)();
          puVar5 = auStack_50;
        }
        uVar3 = lVar2 + 0x27U & 0xffffffffffffffe0;
        *(longlong *)(uVar3 - 8) = lVar4;
        puVar6 = puVar5;
      }
    }
    *param_1 = uVar3;
    param_1[1] = uVar3;
    param_1[2] = uVar3 + uVar7;
    *(ulonglong **)(puVar6 + 0x20) = param_1;
    _Dst = (void *)*param_1;
    *(undefined8 *)(puVar6 + -8) = 0x180029e30;
    memmove(_Dst,_Src,_Size);
    param_1[1] = (ulonglong)((longlong)_Dst + uVar7);
    *(undefined8 *)(puVar6 + 0x20) = 0;
  }
  return param_1;
}


)B180029d70",
    "7ff75c5ca41f7164dfa26d39366e0df1d5d7abf1f0a0c7eccd29270b9057873d",
    R"F180029d70C(FUN_180012fe0
FUN_18020cc40
FUN_1802d8350)F180029d70C",
    R"F180029d70D()F180029d70D",
    R"F180029d70T()F180029d70T",
    R"F180029d70F(32: if (uVar7 != 0) {
33: if (0x1fffffffffffffff < uVar7) {
38: if (uVar7 != 0) {
39: if (uVar7 < 0x1000) {
43: else {
44: if (uVar7 + 0x27 <= uVar7) {
50: if (lVar2 == 0) {
71: return param_1;)F180029d70F",
    R"F180029d70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 52: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 53: lVar2 = (*pcVar1)();.)F180029d70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180029d70() noexcept {
    return kFunction_0x180029d70;
}

// 0x180029e60 FUN_180029e60
// source: re/dump/decompile/0x180029e60_FUN_180029e60.c
// size: 110 bytes; thunk: false
// body sha256: ddd0b4485491ead82291547b44056c240e5d8b9bd1c599f118bf4767e2f9321b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180029e60{
    "0x180029e60",
    "FUN_180029e60",
    R"F180029e60S(undefined FUN_180029e60())F180029e60S",
    R"B180029e60(// 0x180029e60  FUN_180029e60
// size=110 thunk=false
// signature: undefined FUN_180029e60()
// status: ok


void FUN_180029e60(undefined8 *param_1)

{
  longlong *plVar1;
  void *pvVar2;
  code *pcVar3;
  void *_Memory;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [24];
  
  plVar1 = (longlong *)*param_1;
  if ((plVar1 != (longlong *)0x0) && (pvVar2 = (void *)*plVar1, pvVar2 != (void *)0x0)) {
    _Memory = pvVar2;
    puVar4 = auStack_28;
    if ((0xfff < (ulonglong)((plVar1[2] - (longlong)pvVar2 >> 3) * 8)) &&
       (_Memory = *(void **)((longlong)pvVar2 + -8), puVar4 = auStack_28,
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
      _Memory = (void *)0x5;
      pcVar3 = (code *)swi(0x29);
      (*pcVar3)();
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x180029ebb;
    free(_Memory);
    *plVar1 = 0;
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
  return;
}


)B180029e60",
    "ddd0b4485491ead82291547b44056c240e5d8b9bd1c599f118bf4767e2f9321b",
    R"F180029e60C()F180029e60C",
    R"F180029e60D()F180029e60D",
    R"F180029e60T()F180029e60T",
    R"F180029e60F(19: if ((plVar1 != (longlong *)0x0) && (pvVar2 = (void *)*plVar1, pvVar2 != (void *)0x0)) {
22: if ((0xfff < (ulonglong)((plVar1[2] - (longlong)pvVar2 >> 3) * 8)) &&
36: return;)F180029e60F",
    R"F180029e60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: resolve the indirect call in body 26: pcVar3 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 27: (*pcVar3)();.)F180029e60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180029e60() noexcept {
    return kFunction_0x180029e60;
}

// 0x180029ed0 FUN_180029ed0
// source: re/dump/decompile/0x180029ed0_FUN_180029ed0.c
// size: 239 bytes; thunk: false
// body sha256: 81610df7bb1bfd462c77bc0bcae271e5065c6578be4fc0083fbe6efbe03c07e7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180029ed0{
    "0x180029ed0",
    "FUN_180029ed0",
    R"F180029ed0S(undefined FUN_180029ed0())F180029ed0S",
    R"B180029ed0(// 0x180029ed0  FUN_180029ed0
// size=239 thunk=false
// signature: undefined FUN_180029ed0()
// status: ok


undefined8 * FUN_180029ed0(void)

{
  char **local_68;
  undefined1 *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  undefined *local_38;
  undefined *local_30;
  char *local_28;
  undefined *local_20;
  undefined *local_18;
  char *local_10;
  
  if ((DAT_180426264 & 1) == 0) {
    DAT_180426264 = DAT_180426264 | 1;
    DAT_1805beef0 = 0;
    uRam00000001805beef8 = 0;
    DAT_1805bef00 = 0;
    local_58 = "DRPVar.rpname";
    local_50 = "rpname";
    local_48 = "sRPName";
    local_40 = "RPName";
    local_38 = &DAT_180341140;
    local_30 = &DAT_180341148;
    local_28 = "sName";
    local_20 = &DAT_180341158;
    local_18 = &DAT_180341160;
    local_10 = "dro.Nick";
    local_68 = &local_58;
    local_60 = &stack0xfffffffffffffff8;
    FUN_180029d70(&DAT_1805beef0,&local_68);
    atexit(FUN_180308cb0);
    return &DAT_1805beef0;
  }
  return &DAT_1805beef0;
}


)B180029ed0",
    "81610df7bb1bfd462c77bc0bcae271e5065c6578be4fc0083fbe6efbe03c07e7",
    R"F180029ed0C(FUN_180029d70
FUN_180308cb0)F180029ed0C",
    R"F180029ed0D(DAT_180341140
DAT_180341148
DAT_180341158
DAT_180341160
DAT_180426264
DAT_1805beef0
DAT_1805bef00)F180029ed0D",
    R"F180029ed0T("sName"
"RPName"
"rpname"
"sRPName"
"dro.Nick"
"DRPVar.rpname")F180029ed0T",
    R"F180029ed0F(23: if ((DAT_180426264 & 1) == 0) {
42: return &DAT_1805beef0;
44: return &DAT_1805beef0;)F180029ed0F",
    R"F180029ed0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180341140.
TODO: recover the declaration, type and value for global/data reference DAT_180341148.
TODO: recover the declaration, type and value for global/data reference DAT_180341158.
TODO: recover the declaration, type and value for global/data reference DAT_180341160.
TODO: recover the declaration, type and value for global/data reference DAT_180426264.
TODO: recover the declaration, type and value for global/data reference DAT_1805beef0.
TODO: recover the declaration, type and value for global/data reference DAT_1805bef00.)F180029ed0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180029ed0() noexcept {
    return kFunction_0x180029ed0;
}

// 0x180029fc0 FUN_180029fc0
// source: re/dump/decompile/0x180029fc0_FUN_180029fc0.c
// size: 452 bytes; thunk: false
// body sha256: 9a76222f9bc82e2f13c9e63d7c2eb806a9aae9db2a46557393f36f3b49bdac45
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180029fc0{
    "0x180029fc0",
    "FUN_180029fc0",
    R"F180029fc0S(undefined FUN_180029fc0())F180029fc0S",
    R"B180029fc0(// 0x180029fc0  FUN_180029fc0
// size=452 thunk=false
// signature: undefined FUN_180029fc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180029fc0(void)

{
  undefined8 *puVar1;
  char *_Str;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  size_t sVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_e8 [32];
  longlong local_c8 [2];
  int local_b8 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  lVar3 = DAT_1803e9b10;
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  lVar7 = DAT_1803e9b08;
  if (DAT_1803e9b08 != DAT_1803e9b10) {
    do {
      local_c8[0] = lVar7;
      FUN_18020e450(lVar7 + 0x48);
      FUN_18020d5c0(lVar7 + 0x28);
      FUN_18020e450(lVar7 + 8);
      local_c8[0] = lVar7 + 0x68;
      lVar7 = local_c8[0];
    } while (local_c8[0] != lVar3);
    DAT_1803e9b10 = DAT_1803e9b08;
  }
  puVar4 = (undefined8 *)FUN_180029cc0();
  puVar1 = (undefined8 *)puVar4[1];
  local_b8[0] = DAT_1803e9130;
  for (puVar4 = (undefined8 *)*puVar4; puVar4 != puVar1; puVar4 = puVar4 + 1) {
    _Str = (char *)*puVar4;
    uStack_a8 = 0;
    local_a0 = 0;
    local_98 = 0xf;
    local_b0 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 1;
    local_76 = 1;
    uStack_68 = 0;
    local_60 = 0;
    local_58 = 0xf;
    local_70 = 0;
    DAT_1803e9130 = local_b8[0] + 1;
    sVar5 = strlen(_Str);
    FUN_180212700(&local_b0,_Str,sVar5);
    puVar6 = (undefined8 *)FUN_180029ed0();
    plVar2 = (longlong *)puVar6[1];
    for (plVar8 = (longlong *)*puVar6; plVar8 != plVar2; plVar8 = plVar8 + 1) {
      local_c8[0] = *plVar8;
      FUN_180210ae0(&local_90,local_c8);
    }
    if (DAT_1803e9b10 == DAT_1803e9b18) {
      FUN_180229690(&DAT_1803e9b08,DAT_1803e9b10,local_b8);
    }
    else {
      FUN_180210160(DAT_1803e9b10,local_b8);
      DAT_1803e9b10 = DAT_1803e9b10 + 0x68;
    }
    FUN_18020e450(&local_70);
    FUN_18020d5c0(&local_90);
    FUN_18020e450(&local_b0);
    local_b8[0] = DAT_1803e9130;
  }
  DAT_1803e9130 = local_b8[0];
  DAT_180423751 = 1;
  return;
}


)B180029fc0",
    "9a76222f9bc82e2f13c9e63d7c2eb806a9aae9db2a46557393f36f3b49bdac45",
    R"F180029fc0C(FUN_180029cc0
FUN_180029ed0
FUN_18020d5c0
FUN_18020e450
FUN_180210160
FUN_180210ae0
FUN_180212700
FUN_180229690)F180029fc0C",
    R"F180029fc0D(DAT_1803da4c0
DAT_1803e9130
DAT_1803e9b08
DAT_1803e9b10
DAT_1803e9b18
DAT_180423751)F180029fc0D",
    R"F180029fc0T()F180029fc0T",
    R"F180029fc0F(42: if (DAT_1803e9b08 != DAT_1803e9b10) {
43: do {
56: for (puVar4 = (undefined8 *)*puVar4; puVar4 != puVar1; puVar4 = puVar4 + 1) {
76: for (plVar8 = (longlong *)*puVar6; plVar8 != plVar2; plVar8 = plVar8 + 1) {
80: if (DAT_1803e9b10 == DAT_1803e9b18) {
83: else {
94: return;)F180029fc0F",
    R"F180029fc0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9130.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b08.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b10.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b18.
TODO: recover the declaration, type and value for global/data reference DAT_180423751.)F180029fc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180029fc0() noexcept {
    return kFunction_0x180029fc0;
}

// 0x18002a190 FUN_18002a190
// source: re/dump/decompile/0x18002a190_FUN_18002a190.c
// size: 47 bytes; thunk: false
// body sha256: 57845f78ff06b2a6e7d41af77efc7ba2405cf525cf507dee25c69ab5be56384f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18002a190{
    "0x18002a190",
    "FUN_18002a190",
    R"F18002a190S(undefined FUN_18002a190())F18002a190S",
    R"B18002a190(// 0x18002a190  FUN_18002a190
// size=47 thunk=false
// signature: undefined FUN_18002a190()
// status: ok


void FUN_18002a190(longlong param_1)

{
  FUN_18020e450(param_1 + 0x48);
  FUN_18020d5c0(param_1 + 0x28);
  FUN_18020e450(param_1 + 8);
  return;
}


)B18002a190",
    "57845f78ff06b2a6e7d41af77efc7ba2405cf525cf507dee25c69ab5be56384f",
    R"F18002a190C(FUN_18020d5c0
FUN_18020e450)F18002a190C",
    R"F18002a190D()F18002a190D",
    R"F18002a190T()F18002a190T",
    R"F18002a190F(13: return;)F18002a190F",
    R"F18002a190U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18002a190U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18002a190() noexcept {
    return kFunction_0x18002a190;
}

// 0x18002a1c0 FUN_18002a1c0
// source: re/dump/decompile/0x18002a1c0_FUN_18002a1c0.c
// size: 4985 bytes; thunk: false
// body sha256: 628bda660a1ae80cf6ec9708735835ccd4c5fdf41a501c416bcda9beef699abd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18002a1c0{
    "0x18002a1c0",
    "FUN_18002a1c0",
    R"F18002a1c0S(undefined FUN_18002a1c0())F18002a1c0S",
    R"B18002a1c0(// 0x18002a1c0  FUN_18002a1c0
// size=4985 thunk=false
// signature: undefined FUN_18002a1c0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18002a1c0(undefined8 param_1)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  size_t sVar4;
  undefined8 uVar5;
  basic_ostream<char,std::char_traits<char>_> *pbVar6;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  byte ****ppppbVar11;
  undefined8 ****ppppuVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 auStack_538 [32];
  longlong local_518;
  char *local_510;
  undefined8 local_508;
  undefined4 local_4f8;
  ulonglong local_4f0;
  undefined8 ***local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  ulonglong uStack_4d0;
  undefined8 ***local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  ulonglong uStack_4b0;
  undefined8 ***local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  ulonglong uStack_490;
  undefined8 ***local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  ulonglong uStack_470;
  undefined8 ***local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  ulonglong uStack_450;
  undefined8 ***local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  ulonglong uStack_430;
  undefined8 ***local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  ulonglong uStack_410;
  undefined8 ***local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  ulonglong uStack_3f0;
  undefined8 ***local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  ulonglong uStack_3d0;
  undefined8 ***local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  ulonglong uStack_3b0;
  undefined8 ***local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  ulonglong uStack_390;
  byte ***local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  ulonglong uStack_370;
  byte ***local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  ulonglong uStack_350;
  byte ***local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  ulonglong uStack_330;
  byte ***local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  ulonglong uStack_310;
  byte ***local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  ulonglong uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  byte ***local_2c8 [3];
  ulonglong local_2b0;
  byte ***local_2a8 [3];
  ulonglong local_290;
  byte ***local_288 [3];
  ulonglong local_270;
  byte ***local_268 [3];
  ulonglong local_250;
  byte ***local_248 [3];
  ulonglong local_230;
  byte ***local_228 [3];
  ulonglong local_210;
  undefined *local_208;
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_e0 [32];
  undefined1 local_c0 [32];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong local_90;
  undefined8 uStack_88;
  char local_80 [24];
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_538;
  local_4f8 = 0;
  local_208 = &DAT_1803e9140;
  iVar3 = _Mtx_lock(&DAT_1803e9140);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e918c == 0x7fffffff) {
    DAT_1803e918c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  if (DAT_180423751 == '\0') {
    FUN_180029fc0();
  }
  FUN_1801fc280(param_1,"\n# Netvar sources\n");
  local_328 = (byte ***)0x0;
  uStack_320 = 0;
  local_318 = 0;
  uStack_310 = 0;
  FUN_18001d080(&local_328,"netvars.version",0xf);
  uVar13 = 0x14650fb0739d0383;
  ppppbVar11 = (byte ****)local_328;
  if (uStack_310 < 0x10) {
    ppppbVar11 = &local_328;
    goto LAB_18002a2d0;
  }
  for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
LAB_18002a2d0:
    if (*(byte *)ppppbVar11 == 0) break;
    uVar13 = (uVar13 ^ *(byte *)ppppbVar11) * 0x100000001b3;
  }
  FUN_180012ac0(local_80,0x11,"%016llx",uVar13);
  local_488 = (undefined8 ****)0x0;
  uStack_480 = 0;
  local_478 = 0;
  uStack_470 = 0;
  sVar4 = strlen(local_80);
  FUN_18001d080(&local_488,local_80,sVar4);
  local_4f8 = 0x400000;
  ppppuVar12 = &local_488;
  if (0xf < uStack_470) {
    ppppuVar12 = (undefined8 ****)local_488;
  }
  uVar5 = FUN_180210c60(param_1,ppppuVar12,local_478);
  pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar5,&DAT_18034118c);
  pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar6,6);
  FUN_1801fc280(pbVar7,&DAT_18033e92c);
  local_4f8 = 0;
  FUN_18020e450(&local_488);
  FUN_18020e450(&local_328);
  local_308 = (byte ***)0x0;
  uStack_300 = 0;
  local_2f8 = 0;
  uStack_2f0 = 0;
  FUN_18001d080(&local_308,"netvars.override.name",0x15);
  uVar13 = 0x14650fb0739d0383;
  ppppbVar11 = (byte ****)local_308;
  if (uStack_2f0 < 0x10) {
    ppppbVar11 = &local_308;
    goto LAB_18002a3f8;
  }
  for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
LAB_18002a3f8:
    if (*(byte *)ppppbVar11 == 0) break;
    uVar13 = (uVar13 ^ *(byte *)ppppbVar11) * 0x100000001b3;
  }
  FUN_180012ac0(local_80,0x11,"%016llx",uVar13);
  local_468 = (undefined8 ****)0x0;
  uStack_460 = 0;
  local_458 = 0;
  uStack_450 = 0;
  sVar4 = strlen(local_80);
  FUN_18001d080(&local_468,local_80,sVar4);
  local_4f8 = 0x1000000;
  ppppuVar12 = &local_468;
  if (0xf < uStack_450) {
    ppppuVar12 = (undefined8 ****)local_468;
  }
  uVar5 = FUN_180210c60(param_1,ppppuVar12,local_458);
  uVar5 = FUN_1801fc280(uVar5,&DAT_18034118c);
  puVar8 = (undefined8 *)FUN_180029880(local_1c0,&DAT_1803ebb90,0x80);
  puVar9 = puVar8 + 2;
  if (0xf < (ulonglong)puVar8[3]) {
    puVar8 = (undefined8 *)*puVar8;
  }
  uVar5 = FUN_180210c60(uVar5,puVar8,*puVar9);
  FUN_1801fc280(uVar5,&DAT_18033e92c);
  FUN_18020e450(local_1c0);
  local_4f8 = 0;
  FUN_18020e450(&local_468);
  FUN_18020e450(&local_308);
  local_388 = (byte ***)0x0;
  uStack_380 = 0;
  local_378 = 0;
  uStack_370 = 0;
  FUN_18001d080(&local_388,"netvars.override.group",0x16);
  uVar13 = 0x14650fb0739d0383;
  ppppbVar11 = (byte ****)local_388;
  if (uStack_370 < 0x10) {
    ppppbVar11 = &local_388;
    goto LAB_18002a554;
  }
  for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
LAB_18002a554:
    if (*(byte *)ppppbVar11 == 0) break;
    uVar13 = (uVar13 ^ *(byte *)ppppbVar11) * 0x100000001b3;
  }
  FUN_180012ac0(local_80,0x11,"%016llx",uVar13);
  local_448 = (undefined8 ****)0x0;
  uStack_440 = 0;
  local_438 = 0;
  uStack_430 = 0;
  sVar4 = strlen(local_80);
  FUN_18001d080(&local_448,local_80,sVar4);
  local_4f8 = 0x4000000;
  ppppuVar12 = &local_448;
  if (0xf < uStack_430) {
    ppppuVar12 = (undefined8 ****)local_448;
  }
  uVar5 = FUN_180210c60(param_1,ppppuVar12,local_438);
  uVar5 = FUN_1801fc280(uVar5,&DAT_18034118c);
  puVar8 = (undefined8 *)FUN_180029880(local_1a0,&DAT_1803e9ae8,0x80);
  puVar9 = puVar8 + 2;
  if (0xf < (ulonglong)puVar8[3]) {
    puVar8 = (undefined8 *)*puVar8;
  }
  uVar5 = FUN_180210c60(uVar5,puVar8,*puVar9);
  FUN_1801fc280(uVar5,&DAT_18033e92c);
  FUN_18020e450(local_1a0);
  local_4f8 = 0;
  FUN_18020e450(&local_448);
  FUN_18020e450(&local_388);
  local_368 = (byte ***)0x0;
  uStack_360 = 0;
  local_358 = 0;
  uStack_350 = 0;
  FUN_18001d080(&local_368,"netvars.override.job",0x14);
  uVar13 = 0x14650fb0739d0383;
  ppppbVar11 = (byte ****)local_368;
  if (uStack_350 < 0x10) {
    ppppbVar11 = &local_368;
    goto LAB_18002a6b0;
  }
  for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
LAB_18002a6b0:
    if (*(byte *)ppppbVar11 == 0) break;
    uVar13 = (uVar13 ^ *(byte *)ppppbVar11) * 0x100000001b3;
  }
  FUN_180012ac0(local_80,0x11,"%016llx",uVar13);
  local_428 = (undefined8 ****)0x0;
  uStack_420 = 0;
  local_418 = 0;
  uStack_410 = 0;
  sVar4 = strlen(local_80);
  FUN_18001d080(&local_428,local_80,sVar4);
  local_4f8 = 0x40000000;
  ppppuVar12 = &local_428;
  if (0xf < uStack_410) {
    ppppuVar12 = (undefined8 ****)local_428;
  }
  uVar5 = FUN_180210c60(param_1,ppppuVar12,local_418);
  uVar5 = FUN_1801fc280(uVar5,&DAT_18034118c);
  puVar8 = (undefined8 *)FUN_180029880(local_180,&DAT_1803ea258,0x80);
  puVar9 = puVar8 + 2;
  if (0xf < (ulonglong)puVar8[3]) {
    puVar8 = (undefined8 *)*puVar8;
  }
  uVar5 = FUN_180210c60(uVar5,puVar8,*puVar9);
  FUN_1801fc280(uVar5,&DAT_18033e92c);
  FUN_18020e450(local_180);
  local_4f8 = 0;
  FUN_18020e450(&local_428);
  FUN_18020e450(&local_368);
  local_348 = (byte ***)0x0;
  uStack_340 = 0;
  local_338 = 0;
  uStack_330 = 0;
  FUN_18001d080(&local_348,"netvars.count",0xd);
  uVar13 = 0x14650fb0739d0383;
  if (uStack_330 < 0x10) {
    ppppbVar11 = &local_348;
  }
  else {
    ppppbVar11 = (byte ****)local_348;
    if ((byte ****)local_348 == (byte ****)0x0) goto LAB_18002a824;
  }
  do {
    if (*(byte *)ppppbVar11 == 0) break;
    uVar13 = (uVar13 ^ *(byte *)ppppbVar11) * 0x100000001b3;
    ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1);
  } while (ppppbVar11 != (byte ****)0x0);
LAB_18002a824:
  FUN_180012ac0(local_80,0x11,"%016llx",uVar13);
  local_408 = (undefined8 ****)0x0;
  uStack_400 = 0;
  local_3f8 = 0;
  uStack_3f0 = 0;
  sVar4 = strlen(local_80);
  FUN_18001d080(&local_408,local_80,sVar4);
  local_4f8 = 0x10000000;
  ppppuVar12 = &local_408;
  if (0xf < uStack_3f0) {
    ppppuVar12 = (undefined8 ****)local_408;
  }
  uVar5 = FUN_180210c60(param_1,ppppuVar12,local_3f8);
  pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar5,&DAT_18034118c);
  pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     (pbVar6,(DAT_1803e9b10 - DAT_1803e9b08 >> 3) * 0x4ec4ec4ec4ec4ec5);
  FUN_1801fc280(pbVar7);
  local_4f8 = 0;
  FUN_18020e450(&local_408);
  FUN_18020e450(&local_348);
  local_4f0 = 0;
  if ((DAT_1803e9b10 - DAT_1803e9b08 >> 3) * 0x4ec4ec4ec4ec4ec5 != 0) {
    do {
      lVar14 = local_4f0 * 0x68 + DAT_1803e9b08;
      uVar5 = FUN_180013d70(local_160);
      puVar9 = (undefined8 *)FUN_18022a630(uVar5);
      local_2e8 = *puVar9;
      uStack_2e0 = puVar9[1];
      local_2d8 = puVar9[2];
      uStack_2d0 = puVar9[3];
      puVar9[3] = 0xf;
      *(undefined1 *)puVar9 = 0;
      puVar9[2] = 0;
      local_4f8 = 0x800;
      puVar10 = (undefined4 *)FUN_18021aef0(&local_2e8,&DAT_18033ea54,1);
      local_a0 = *puVar10;
      uStack_9c = puVar10[1];
      uStack_98 = puVar10[2];
      uStack_94 = puVar10[3];
      lVar2 = *(longlong *)(puVar10 + 4);
      uStack_88 = *(undefined8 *)(puVar10 + 6);
      *(undefined1 *)puVar10 = 0;
      *(undefined8 *)(puVar10 + 4) = 0;
      *(undefined8 *)(puVar10 + 6) = 0xf;
      local_4f8 = 0x1000;
      local_90 = lVar2;
      FUN_18020e450(&local_2e8);
      FUN_18020e450(local_160);
      if (0x7fffffffffffffffU - lVar2 < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_508 = 4;
      local_510 = "path";
      local_518 = lVar2;
      FUN_18020e930(local_2c8);
      local_4f8 = 0x3000;
      uVar13 = 0x14650fb0739d0383;
      ppppbVar11 = (byte ****)local_2c8[0];
      if (local_2b0 < 0x10) {
        ppppbVar11 = local_2c8;
        goto LAB_18002aa95;
      }
      for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
LAB_18002aa95:
        if (*(byte *)ppppbVar11 == 0) break;
        uVar13 = (uVar13 ^ *(byte *)ppppbVar11) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar13);
      local_3e8 = (undefined8 ****)0x0;
      uStack_3e0 = 0;
      local_3d8 = 0;
      uStack_3d0 = 0;
      sVar4 = strlen(local_80);
      FUN_18001d080(&local_3e8,local_80,sVar4);
      local_4f8 = 0x7000;
      ppppuVar12 = &local_3e8;
      if (0xf < uStack_3d0) {
        ppppuVar12 = (undefined8 ****)local_3e8;
      }
      uVar5 = FUN_180210c60(param_1,ppppuVar12,local_3d8);
      uVar5 = FUN_1801fc280(uVar5,&DAT_18034118c);
      puVar8 = (undefined8 *)FUN_180029880(local_140,lVar14 + 8,0x80);
      puVar9 = puVar8 + 2;
      if (0xf < (ulonglong)puVar8[3]) {
        puVar8 = (undefined8 *)*puVar8;
      }
      uVar5 = FUN_180210c60(uVar5,puVar8,*puVar9);
      FUN_1801fc280(uVar5,&DAT_18033e92c);
      FUN_18020e450(local_140);
      local_4f8 = 0x3000;
      FUN_18020e450(&local_3e8);
      local_4f8 = 0x1000;
      FUN_18020e450(local_2c8);
      if (0x7fffffffffffffffU - local_90 < 7) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_508 = 7;
      local_510 = "enabled";
      local_518 = local_90;
      FUN_18020e930(local_2a8);
      local_4f8 = 0x11000;
      uVar13 = 0x14650fb0739d0383;
      ppppbVar11 = (byte ****)local_2a8[0];
      if (local_290 < 0x10) {
        ppppbVar11 = local_2a8;
        goto LAB_18002ac30;
      }
      for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
LAB_18002ac30:
        if (*(byte *)ppppbVar11 == 0) break;
        uVar13 = (uVar13 ^ *(byte *)ppppbVar11) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar13);
      local_3c8 = (undefined8 ****)0x0;
      uStack_3c0 = 0;
      local_3b8 = 0;
      uStack_3b0 = 0;
      sVar4 = strlen(local_80);
      FUN_18001d080(&local_3c8,local_80,sVar4);
      local_4f8 = 0x31000;
      ppppuVar12 = &local_3c8;
      if (0xf < uStack_3b0) {
        ppppuVar12 = (undefined8 ****)local_3c8;
      }
      uVar5 = FUN_180210c60(param_1,ppppuVar12,local_3b8);
      pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar5);
      pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar6,(uint)(*(char *)(lVar14 + 0x40) != '\0'));
      FUN_1801fc280(pbVar7,&DAT_18033e92c);
      local_4f8 = 0x11000;
      FUN_18020e450(&local_3c8);
      local_4f8 = 0x1000;
      FUN_18020e450(local_2a8);
      if (0x7fffffffffffffffU - local_90 < 0xb) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_508 = 0xb;
      local_510 = "tpl_enabled";
      local_518 = local_90;
      FUN_18020e930(local_288);
      local_4f8 = 0x81000;
      uVar13 = 0x14650fb0739d0383;
      ppppbVar11 = (byte ****)local_288[0];
      if (local_270 < 0x10) {
        ppppbVar11 = local_288;
        goto LAB_18002ada0;
      }
      for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
LAB_18002ada0:
        if (*(byte *)ppppbVar11 == 0) break;
        uVar13 = (uVar13 ^ *(byte *)ppppbVar11) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar13);
      local_3a8 = (undefined8 ****)0x0;
      uStack_3a0 = 0;
      local_398 = 0;
      uStack_390 = 0;
      sVar4 = strlen(local_80);
      FUN_18001d080(&local_3a8,local_80,sVar4);
      local_4f8 = 0x181000;
      ppppuVar12 = &local_3a8;
      if (0xf < uStack_390) {
        ppppuVar12 = (undefined8 ****)local_3a8;
      }
      uVar5 = FUN_180210c60(param_1,ppppuVar12,local_398);
      pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar5);
      pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar6,(uint)(*(char *)(lVar14 + 0x41) != '\0'));
      FUN_1801fc280(pbVar7,&DAT_18033e92c);
      local_4f8 = 0x81000;
      FUN_18020e450(&local_3a8);
      local_4f8 = 0x1000;
      FUN_18020e450(local_288);
      if (0x7fffffffffffffffU - local_90 < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_508 = 3;
      local_510 = "tpl";
      local_518 = local_90;
      FUN_18020e930(local_268);
      local_4f8 = 0x1004;
      uVar13 = 0x14650fb0739d0383;
      ppppbVar11 = (byte ****)local_268[0];
      if (local_250 < 0x10) {
        ppppbVar11 = local_268;
        goto LAB_18002af17;
      }
      for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
LAB_18002af17:
        if (*(byte *)ppppbVar11 == 0) break;
        uVar13 = (uVar13 ^ *(byte *)ppppbVar11) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar13);
      local_4e8 = (undefined8 ****)0x0;
      uStack_4e0 = 0;
      local_4d8 = 0;
      uStack_4d0 = 0;
      sVar4 = strlen(local_80);
      FUN_18001d080(&local_4e8,local_80,sVar4);
      local_4f8 = 0x100c;
      ppppuVar12 = &local_4e8;
      if (0xf < uStack_4d0) {
        ppppuVar12 = (undefined8 ****)local_4e8;
      }
      uVar5 = FUN_180210c60(param_1,ppppuVar12,local_4d8);
      uVar5 = FUN_1801fc280(uVar5,&DAT_18034118c);
      puVar8 = (undefined8 *)FUN_180029880(local_120,lVar14 + 0x48,0x80);
      puVar9 = puVar8 + 2;
      if (0xf < (ulonglong)puVar8[3]) {
        puVar8 = (undefined8 *)*puVar8;
      }
      uVar5 = FUN_180210c60(uVar5,puVar8,*puVar9);
      FUN_1801fc280(uVar5,&DAT_18033e92c);
      FUN_18020e450(local_120);
      local_4f8 = 0x1004;
      FUN_18020e450(&local_4e8);
      local_4f8 = 0x1000;
      FUN_18020e450(local_268);
      if (0x7fffffffffffffffU - local_90 < 9) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_508 = 9;
      local_510 = "tpl_first";
      local_518 = local_90;
      FUN_18020e930(local_248);
      local_4f8 = 0x1020;
      uVar13 = 0x14650fb0739d0383;
      ppppbVar11 = (byte ****)local_248[0];
      if (local_230 < 0x10) {
        ppppbVar11 = local_248;
        goto LAB_18002b0b1;
      }
      for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
LAB_18002b0b1:
        if (*(byte *)ppppbVar11 == 0) break;
        uVar13 = (uVar13 ^ *(byte *)ppppbVar11) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar13);
      local_4c8 = (undefined8 ****)0x0;
      uStack_4c0 = 0;
      local_4b8 = 0;
      uStack_4b0 = 0;
      sVar4 = strlen(local_80);
      FUN_18001d080(&local_4c8,local_80,sVar4);
      local_4f8 = 0x1060;
      ppppuVar12 = &local_4c8;
      if (0xf < uStack_4b0) {
        ppppuVar12 = (undefined8 ****)local_4c8;
      }
      uVar5 = FUN_180210c60(param_1,ppppuVar12,local_4b8);
      pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar5);
      pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar6,(uint)(*(char *)(lVar14 + 0x42) != '\0'));
      FUN_1801fc280(pbVar7,&DAT_18033e92c);
      local_4f8 = 0x1020;
      FUN_18020e450(&local_4c8);
      local_4f8 = 0x1000;
      FUN_18020e450(local_248);
      if (0x7fffffffffffffffU - local_90 < 8) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      local_508 = 8;
      local_510 = "keycount";
      local_518 = local_90;
      FUN_18020e930(local_228);
      local_4f8 = 0x1100;
      uVar13 = 0x14650fb0739d0383;
      ppppbVar11 = (byte ****)local_228[0];
      if (local_210 < 0x10) {
        ppppbVar11 = local_228;
        goto LAB_18002b213;
      }
      for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
LAB_18002b213:
        if (*(byte *)ppppbVar11 == 0) break;
        uVar13 = (uVar13 ^ *(byte *)ppppbVar11) * 0x100000001b3;
      }
      FUN_180012ac0(local_80,0x11,"%016llx",uVar13);
      local_4a8 = (undefined8 ****)0x0;
      uStack_4a0 = 0;
      local_498 = 0;
      uStack_490 = 0;
      sVar4 = strlen(local_80);
      FUN_18001d080(&local_4a8,local_80,sVar4);
      local_4f8 = 0x1300;
      ppppuVar12 = &local_4a8;
      if (0xf < uStack_490) {
        ppppuVar12 = (undefined8 ****)local_4a8;
      }
      uVar5 = FUN_180210c60(param_1,ppppuVar12,local_498);
      pbVar6 = (basic_ostream<char,std::char_traits<char>_> *)FUN_1801fc280(uVar5,&DAT_18034118c);
      pbVar7 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         (pbVar6,*(longlong *)(lVar14 + 0x30) - *(longlong *)(lVar14 + 0x28) >> 5);
      FUN_1801fc280(pbVar7,&DAT_18033e92c);
      local_4f8 = 0x1100;
      FUN_18020e450(&local_4a8);
      local_4f8 = 0x1000;
      FUN_18020e450(local_228);
      uVar13 = 0;
      if (*(longlong *)(lVar14 + 0x30) - *(longlong *)(lVar14 + 0x28) >> 5 != 0) {
        do {
          FUN_180013d70(local_c0,uVar13);
          if (0x7fffffffffffffffU - local_90 < 4) {
                    /* WARNING: Subroutine does not return */
            FUN_1800130a0();
          }
          local_508 = 4;
          local_510 = "key.";
          local_518 = local_90;
          FUN_18020e930(local_1e0);
          local_4f8 = 0x1001;
          FUN_18021e540(local_200);
          local_4f8 = 0x1003;
          puVar8 = (undefined8 *)FUN_180014fa0(local_e0,local_200);
          puVar9 = puVar8 + 2;
          if (0xf < (ulonglong)puVar8[3]) {
            puVar8 = (undefined8 *)*puVar8;
          }
          uVar5 = FUN_180210c60(param_1,puVar8,*puVar9);
          uVar5 = FUN_1801fc280(uVar5,&DAT_18034118c);
          puVar8 = (undefined8 *)
                   FUN_180029880(local_100,uVar13 * 0x20 + *(longlong *)(lVar14 + 0x28),0x40);
          puVar9 = puVar8 + 2;
          if (0xf < (ulonglong)puVar8[3]) {
            puVar8 = (undefined8 *)*puVar8;
          }
          uVar5 = FUN_180210c60(uVar5,puVar8,*puVar9);
          FUN_1801fc280(uVar5,&DAT_18033e92c);
          FUN_18020e450(local_100);
          FUN_18020e450(local_e0);
          local_4f8 = 0x1001;
          FUN_18020e450(local_200);
          local_4f8 = 0x1000;
          FUN_18020e450(local_1e0);
          FUN_18020e450(local_c0);
          uVar13 = uVar13 + 1;
        } while (uVar13 < (ulonglong)
                          (*(longlong *)(lVar14 + 0x30) - *(longlong *)(lVar14 + 0x28) >> 5));
      }
      local_4f8 = 0;
      FUN_18020e450(&local_a0);
      local_4f0 = local_4f0 + 1;
    } while (local_4f0 < (ulonglong)((DAT_1803e9b10 - DAT_1803e9b08 >> 3) * 0x4ec4ec4ec4ec4ec5));
  }
  _Mtx_unlock(&DAT_1803e9140);
  return;
}


)B18002a1c0",
    "628bda660a1ae80cf6ec9708735835ccd4c5fdf41a501c416bcda9beef699abd",
    R"F18002a1c0C(FUN_180012ac0
FUN_1800130a0
FUN_180013d70
FUN_180014fa0
FUN_18001d080
FUN_180029880
FUN_180029fc0
FUN_1801fc280
FUN_18020e450
FUN_18020e930
FUN_180210c60
FUN_18021aef0
FUN_18021e540
FUN_18022a630)F18002a1c0C",
    R"F18002a1c0D(LAB_18002a2d0
LAB_18002a3f8
LAB_18002a554
LAB_18002a6b0
LAB_18002a824
LAB_18002aa95
LAB_18002ac30
LAB_18002ada0
LAB_18002af17
LAB_18002b0b1
LAB_18002b213
DAT_18033e92c
DAT_18033ea54
DAT_18034118c
DAT_1803da4c0
DAT_1803e9140
DAT_1803e918c
DAT_1803e9ae8
DAT_1803e9b08
DAT_1803e9b10
DAT_1803ea258
DAT_1803ebb90
DAT_180423751)F18002a1c0D",
    R"F18002a1c0T("tpl"
"key."
"path"
"%016llx"
"enabled"
"keycount"
"tpl_first"
"tpl_enabled"
"netvars.count"
"netvars.version"
"\\n# Netvar sources\\n"
"netvars.override.job"
"netvars.override.name"
"netvars.override.group")F18002a1c0T",
    R"F18002a1c0F(137: if (iVar3 != 0) {
141: return;
143: if (DAT_1803e918c == 0x7fffffff) {
147: if (DAT_180423751 == '\0') {
158: if (uStack_310 < 0x10) {
160: goto LAB_18002a2d0;
162: for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
163: LAB_18002a2d0:
164: if (*(byte *)ppppbVar11 == 0) break;
176: if (0xf < uStack_470) {
193: if (uStack_2f0 < 0x10) {
195: goto LAB_18002a3f8;
197: for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
198: LAB_18002a3f8:
199: if (*(byte *)ppppbVar11 == 0) break;
211: if (0xf < uStack_450) {
218: if (0xf < (ulonglong)puVar8[3]) {
234: if (uStack_370 < 0x10) {
236: goto LAB_18002a554;
238: for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
239: LAB_18002a554:
240: if (*(byte *)ppppbVar11 == 0) break;
252: if (0xf < uStack_430) {
259: if (0xf < (ulonglong)puVar8[3]) {
275: if (uStack_350 < 0x10) {
277: goto LAB_18002a6b0;
279: for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
280: LAB_18002a6b0:
281: if (*(byte *)ppppbVar11 == 0) break;
293: if (0xf < uStack_410) {
300: if (0xf < (ulonglong)puVar8[3]) {
315: if (uStack_330 < 0x10) {
318: else {
320: if ((byte ****)local_348 == (byte ****)0x0) goto LAB_18002a824;
322: do {
323: if (*(byte *)ppppbVar11 == 0) break;
327: LAB_18002a824:
337: if (0xf < uStack_3f0) {
349: if ((DAT_1803e9b10 - DAT_1803e9b08 >> 3) * 0x4ec4ec4ec4ec4ec5 != 0) {
350: do {
376: if (0x7fffffffffffffffU - lVar2 < 4) {
387: if (local_2b0 < 0x10) {
389: goto LAB_18002aa95;
391: for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
392: LAB_18002aa95:
393: if (*(byte *)ppppbVar11 == 0) break;
405: if (0xf < uStack_3d0) {
412: if (0xf < (ulonglong)puVar8[3]) {
422: if (0x7fffffffffffffffU - local_90 < 7) {
433: if (local_290 < 0x10) {
435: goto LAB_18002ac30;
437: for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
438: LAB_18002ac30:
439: if (*(byte *)ppppbVar11 == 0) break;
451: if (0xf < uStack_3b0) {
463: if (0x7fffffffffffffffU - local_90 < 0xb) {
474: if (local_270 < 0x10) {
476: goto LAB_18002ada0;
478: for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
479: LAB_18002ada0:
480: if (*(byte *)ppppbVar11 == 0) break;
492: if (0xf < uStack_390) {
504: if (0x7fffffffffffffffU - local_90 < 3) {
515: if (local_250 < 0x10) {
517: goto LAB_18002af17;
519: for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
520: LAB_18002af17:
521: if (*(byte *)ppppbVar11 == 0) break;
533: if (0xf < uStack_4d0) {
540: if (0xf < (ulonglong)puVar8[3]) {
550: if (0x7fffffffffffffffU - local_90 < 9) {
561: if (local_230 < 0x10) {
563: goto LAB_18002b0b1;
565: for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
566: LAB_18002b0b1:
567: if (*(byte *)ppppbVar11 == 0) break;
579: if (0xf < uStack_4b0) {
591: if (0x7fffffffffffffffU - local_90 < 8) {
602: if (local_210 < 0x10) {
604: goto LAB_18002b213;
606: for (; ppppbVar11 != (byte ****)0x0; ppppbVar11 = (byte ****)((longlong)ppppbVar11 + 1)) {
607: LAB_18002b213:
608: if (*(byte *)ppppbVar11 == 0) break;
620: if (0xf < uStack_490) {
633: if (*(longlong *)(lVar14 + 0x30) - *(longlong *)(lVar14 + 0x28) >> 5 != 0) {
634: do {
636: if (0x7fffffffffffffffU - local_90 < 4) {
649: if (0xf < (ulonglong)puVar8[3]) {
657: if (0xf < (ulonglong)puVar8[3]) {
679: return;)F18002a1c0F",
    R"F18002a1c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18002a2d0.
TODO: recover the declaration, type and value for global/data reference LAB_18002a3f8.
TODO: recover the declaration, type and value for global/data reference LAB_18002a554.
TODO: recover the declaration, type and value for global/data reference LAB_18002a6b0.
TODO: recover the declaration, type and value for global/data reference LAB_18002a824.
TODO: recover the declaration, type and value for global/data reference LAB_18002aa95.
TODO: recover the declaration, type and value for global/data reference LAB_18002ac30.
TODO: recover the declaration, type and value for global/data reference LAB_18002ada0.
TODO: recover the declaration, type and value for global/data reference LAB_18002af17.
TODO: recover the declaration, type and value for global/data reference LAB_18002b0b1.
TODO: recover the declaration, type and value for global/data reference LAB_18002b213.
TODO: recover the declaration, type and value for global/data reference DAT_18033e92c.
TODO: recover the declaration, type and value for global/data reference DAT_18033ea54.
TODO: recover the declaration, type and value for global/data reference DAT_18034118c.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9140.
TODO: recover the declaration, type and value for global/data reference DAT_1803e918c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9ae8.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b08.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9b10.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea258.
TODO: recover the declaration, type and value for global/data reference DAT_1803ebb90.
TODO: recover the declaration, type and value for global/data reference DAT_180423751.
TODO: resolve the indirect call in body 139: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 140: (*pcVar1)();.)F18002a1c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18002a1c0() noexcept {
    return kFunction_0x18002a1c0;
}

}  // namespace sf::reconstructed
