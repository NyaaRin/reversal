// Generated complete-corpus translation chunk.
// Generator: re/tools/gen_reconstructed_source.py
#include "../reconstruction.h"

namespace sf::reconstructed {

// 0x180144d80 FUN_180144d80
// source: re/dump/decompile/0x180144d80_FUN_180144d80.c
// size: 477 bytes; thunk: false
// body sha256: ed5f8b5ec2fd6f05a2347efce609396a5ab733c140261ed6a10461b866a7a53c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180144d80{
    "0x180144d80",
    "FUN_180144d80",
    R"F180144d80S(undefined FUN_180144d80())F180144d80S",
    R"B180144d80(// 0x180144d80  FUN_180144d80
// size=477 thunk=false
// signature: undefined FUN_180144d80()
// status: ok


void FUN_180144d80(undefined4 param_1,undefined8 param_2,char *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  size_t sVar4;
  char *_Str;
  undefined4 uVar5;
  undefined4 local_98 [2];
  ulonglong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined *local_28;
  undefined4 *local_20;
  
  if (DAT_180409b00 == '\0') {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_18001d080(&local_48,"no cvar name",0xc);
    FUN_180144c60(&local_48);
  }
  else {
    local_28 = &DAT_1803e83b0;
    iVar3 = _Mtx_lock(&DAT_1803e83b0);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e83fc == 0x7fffffff) {
      DAT_1803e83fc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_98[0] = param_1;
    sVar4 = strlen(&DAT_180409b00);
    FUN_18001d080(&local_90,&DAT_180409b00,sVar4);
    _Str = "";
    if (param_3 != (char *)0x0) {
      _Str = param_3;
    }
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_58 = 0;
    sVar4 = strlen(_Str);
    uVar5 = FUN_18001d080(&local_70,_Str,sVar4);
    puVar2 = DAT_1803e9ee0;
    if (DAT_1803e9ee0 == DAT_1803e9ee8) {
      FUN_180224a50(uVar5,DAT_1803e9ee0,local_98);
    }
    else {
      local_20 = DAT_1803e9ee0;
      *DAT_1803e9ee0 = local_98[0];
      *(ulonglong *)(puVar2 + 2) = local_90;
      *(undefined8 *)(puVar2 + 4) = uStack_88;
      *(undefined8 *)(puVar2 + 6) = local_80;
      *(undefined8 *)(puVar2 + 8) = local_78;
      local_80 = 0;
      local_78 = 0xf;
      local_90 = local_90 & 0xffffffffffffff00;
      *(ulonglong *)(puVar2 + 10) = local_70;
      *(undefined8 *)(puVar2 + 0xc) = uStack_68;
      *(undefined8 *)(puVar2 + 0xe) = local_60;
      *(undefined8 *)(puVar2 + 0x10) = local_58;
      local_60 = 0;
      local_58 = 0xf;
      local_70 = local_70 & 0xffffffffffffff00;
      DAT_1803e9ee0 = DAT_1803e9ee0 + 0x12;
    }
    FUN_18020e450(&local_70);
    FUN_18020e450(&local_90);
    _Mtx_unlock(&DAT_1803e83b0);
  }
  return;
}


)B180144d80",
    "ed5f8b5ec2fd6f05a2347efce609396a5ab733c140261ed6a10461b866a7a53c",
    R"F180144d80C(FUN_18001d080
FUN_180144c60
FUN_18020e450
FUN_180224a50)F180144d80C",
    R"F180144d80D(DAT_1803e83b0
DAT_1803e83fc
DAT_1803e9ee0
DAT_1803e9ee8
DAT_180409b00)F180144d80D",
    R"F180144d80T(""
"no cvar name")F180144d80T",
    R"F180144d80F(32: if (DAT_180409b00 == '\0') {
40: else {
43: if (iVar3 != 0) {
47: return;
49: if (DAT_1803e83fc == 0x7fffffff) {
61: if (param_3 != (char *)0x0) {
71: if (DAT_1803e9ee0 == DAT_1803e9ee8) {
74: else {
97: return;)F180144d80F",
    R"F180144d80U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e83b0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e83fc.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9ee0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9ee8.
TODO: recover the declaration, type and value for global/data reference DAT_180409b00.
TODO: resolve the indirect call in body 45: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 46: (*pcVar1)();.)F180144d80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180144d80() noexcept {
    return kFunction_0x180144d80;
}

// 0x180144f60 FUN_180144f60
// source: re/dump/decompile/0x180144f60_FUN_180144f60.c
// size: 846 bytes; thunk: false
// body sha256: cd0f51a6a4d55351f53366d51a30fb1a3c9dd58921c9a0b77739fae4f1c30547
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180144f60{
    "0x180144f60",
    "FUN_180144f60",
    R"F180144f60S(undefined FUN_180144f60())F180144f60S",
    R"B180144f60(// 0x180144f60  FUN_180144f60
// size=846 thunk=false
// signature: undefined FUN_180144f60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180144f60(undefined8 *param_1,char *param_2)

{
  undefined1 *lp;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  BOOL BVar6;
  void *pvVar7;
  size_t sVar8;
  undefined4 *puVar9;
  void *pvVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  float fVar17;
  undefined1 auStack_258 [32];
  undefined1 *local_238;
  double local_230;
  undefined4 local_228;
  uint local_220;
  char *local_218;
  char *local_210;
  char *local_208;
  char *local_200;
  char *local_1f8;
  char *local_1f0;
  undefined1 *local_1e8;
  undefined4 local_1d8;
  uint local_1d4;
  void *local_1d0;
  undefined1 *local_1c8;
  char *local_1c0;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 *local_190;
  char local_188 [320];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_258;
  local_1d8 = 0;
  local_1c0 = param_2;
  local_1b8 = param_1;
  local_190 = param_1;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_18001d080(0,&DAT_18033e5ea,0);
    return param_1;
  }
  pvVar7 = (void *)FUN_180016fb0(param_2);
  local_1d0 = pvVar7;
  if (pvVar7 == (void *)0x0) {
    local_1b0 = 0;
    uStack_1a8 = 0;
    local_1a0 = 0;
    uStack_198 = 0;
    sVar8 = strlen(param_2);
    FUN_18001d080(&local_1b0,param_2,sVar8);
    puVar9 = (undefined4 *)FUN_18021aef0(&local_1b0," : not found",0xc);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    uVar1 = puVar9[1];
    uVar2 = puVar9[2];
    uVar3 = puVar9[3];
    *(undefined4 *)param_1 = *puVar9;
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
    *(undefined4 *)(param_1 + 1) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
    uVar1 = puVar9[5];
    uVar2 = puVar9[6];
    uVar3 = puVar9[7];
    *(undefined4 *)(param_1 + 2) = puVar9[4];
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 3) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    *(undefined1 *)puVar9 = 0;
    *(undefined8 *)(puVar9 + 4) = 0;
    *(undefined8 *)(puVar9 + 6) = 0xf;
    local_1d8 = 1;
    FUN_18020e450(&local_1b0);
    return param_1;
  }
  pvVar10 = *(void **)((longlong)pvVar7 + 0x38);
  if (((pvVar10 == (void *)0x0) || (pvVar10 == pvVar7)) ||
     (BVar6 = IsBadReadPtr(pvVar10,0x60), BVar6 != 0)) {
    pvVar10 = pvVar7;
  }
  lp = *(undefined1 **)((longlong)pvVar10 + 0x48);
  if (lp != (undefined1 *)0x0) {
    BVar6 = IsBadReadPtr(lp,2);
    bVar4 = true;
    if (BVar6 == 0) goto LAB_1801450cd;
  }
  bVar4 = false;
LAB_1801450cd:
  pcVar11 = "";
  local_1c8 = &DAT_18033e5ea;
  if (bVar4) {
    local_1c8 = lp;
  }
  local_1d4 = FUN_1800170a0(pvVar7);
  pvVar10 = (void *)FUN_180017070(pvVar7);
  if ((pvVar10 == (void *)0x0) || (bVar4 = true, pvVar10 == pvVar7)) {
    bVar4 = false;
  }
  local_228 = FUN_1800197a0(pvVar7);
  local_1e8 = &DAT_18033e5ea;
  if (bVar4) {
    local_1e8 = &DAT_18035d490;
  }
  pcVar16 = "";
  if ((local_1d4 >> 9 & 1) != 0) {
    pcVar16 = " USERINFO";
  }
  pcVar15 = "";
  if ((local_1d4 >> 0x16 & 1) != 0) {
    pcVar15 = " NOT_CONNECTED";
  }
  pcVar12 = "";
  if ((local_1d4 >> 0xd & 1) != 0) {
    pcVar12 = " REPLICATED";
  }
  pcVar13 = "";
  if ((local_1d4 & 0x10) != 0) {
    pcVar13 = " HIDDEN";
  }
  pcVar14 = "";
  if ((local_1d4 & 2) != 0) {
    pcVar14 = " DEVONLY";
  }
  if ((local_1d4 >> 0xe & 1) != 0) {
    pcVar11 = " CHEAT";
  }
  fVar17 = (float)FUN_180019700(local_1d0);
  local_230 = (double)fVar17;
  local_238 = &DAT_18033e5ea;
  if (local_1c8 != (undefined1 *)0x0) {
    local_238 = local_1c8;
  }
  local_220 = local_1d4;
  local_218 = pcVar11;
  local_210 = pcVar14;
  local_208 = pcVar13;
  local_200 = pcVar12;
  local_1f8 = pcVar15;
  local_1f0 = pcVar16;
  FUN_180012ac0(local_188,0x140,"%s = \"%s\" (float %.4f, int %d) flags=0x%X%s%s%s%s%s%s%s",
                local_1c0);
  puVar5 = local_1b8;
  *local_1b8 = 0;
  local_1b8[1] = 0;
  local_1b8[2] = 0;
  local_1b8[3] = 0;
  sVar8 = strlen(local_188);
  FUN_18001d080(puVar5,local_188,sVar8);
  return puVar5;
}


)B180144f60",
    "cd0f51a6a4d55351f53366d51a30fb1a3c9dd58921c9a0b77739fae4f1c30547",
    R"F180144f60C(FUN_180012ac0
FUN_180016fb0
FUN_180017070
FUN_1800170a0
FUN_180019700
FUN_1800197a0
FUN_18001d080
FUN_18020e450
FUN_18021aef0)F180144f60C",
    R"F180144f60D(LAB_1801450cd
DAT_18033e5ea
DAT_18035d490
DAT_1803da4c0)F180144f60D",
    R"F180144f60T(""
" CHEAT"
" HIDDEN"
" DEVONLY"
" USERINFO"
" REPLICATED"
" : not found"
" NOT_CONNECTED"
"%s = \\\"%s\\\" (float %.4f, int %d) flags=0x%X%s%s%s%s%s%s%s")F180144f60T",
    R"F180144f60F(61: if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
67: return param_1;
71: if (pvVar7 == (void *)0x0) {
102: return param_1;
105: if (((pvVar10 == (void *)0x0) || (pvVar10 == pvVar7)) ||
110: if (lp != (undefined1 *)0x0) {
113: if (BVar6 == 0) goto LAB_1801450cd;
116: LAB_1801450cd:
119: if (bVar4) {
124: if ((pvVar10 == (void *)0x0) || (bVar4 = true, pvVar10 == pvVar7)) {
129: if (bVar4) {
133: if ((local_1d4 >> 9 & 1) != 0) {
137: if ((local_1d4 >> 0x16 & 1) != 0) {
141: if ((local_1d4 >> 0xd & 1) != 0) {
145: if ((local_1d4 & 0x10) != 0) {
149: if ((local_1d4 & 2) != 0) {
152: if ((local_1d4 >> 0xe & 1) != 0) {
158: if (local_1c8 != (undefined1 *)0x0) {
177: return puVar5;)F180144f60F",
    R"F180144f60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1801450cd.
TODO: recover the declaration, type and value for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type and value for global/data reference DAT_18035d490.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180144f60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180144f60() noexcept {
    return kFunction_0x180144f60;
}

// 0x1801452b0 FUN_1801452b0
// source: re/dump/decompile/0x1801452b0_FUN_1801452b0.c
// size: 848 bytes; thunk: false
// body sha256: 1adeef25a34492b4e7a61f45cf12e08cd076d508abdd515a7c156f923f722b76
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801452b0{
    "0x1801452b0",
    "FUN_1801452b0",
    R"F1801452b0S(undefined FUN_1801452b0())F1801452b0S",
    R"B1801452b0(// 0x1801452b0  FUN_1801452b0
// size=848 thunk=false
// signature: undefined FUN_1801452b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801452b0(longlong param_1,undefined8 *param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 auStack_2b8 [32];
  char *local_298;
  char *local_290;
  char *local_288;
  char *local_280;
  char *local_278;
  uint local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 *local_200;
  undefined1 local_1f8 [32];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178;
  undefined8 local_177;
  undefined8 uStack_16f;
  undefined8 local_167;
  undefined8 uStack_15f;
  undefined8 local_157;
  undefined8 uStack_14f;
  undefined8 local_147;
  undefined8 uStack_13f;
  undefined8 local_137;
  undefined8 uStack_12f;
  undefined8 local_127;
  undefined8 uStack_11f;
  undefined8 local_117;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined8 uStack_100;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_2b8;
  uVar5 = 0;
  local_268 = 0;
  if ((param_1 != 0) && (cVar1 = FUN_1800170f0(), cVar1 == '\0')) {
    uVar2 = FUN_1800170a0(param_1);
    uVar5 = uVar2 & 0x406012;
    if (uVar5 != 0) {
      FUN_1800170c0(param_1,~uVar5 & uVar2);
    }
  }
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    param_3 = *(char **)param_3;
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  local_298 = param_3;
  FUN_180012ac0(local_f8,0xc0,"%s %s",param_2);
  cVar1 = FUN_180017040(local_f8);
  local_178 = 0;
  local_177 = 0;
  uStack_16f = 0;
  local_167 = 0;
  uStack_15f = 0;
  local_157 = 0;
  uStack_14f = 0;
  local_147 = 0;
  uStack_13f = 0;
  local_137 = 0;
  uStack_12f = 0;
  local_127 = 0;
  uStack_11f = 0;
  local_117 = 0;
  uStack_10f = 0;
  uStack_108 = 0;
  uStack_107 = 0;
  uStack_100 = 0;
  if (uVar5 != 0) {
    local_298 = "";
    local_278 = "";
    if (uVar5 >> 0x16 != 0) {
      local_278 = " NOT_CONNECTED";
    }
    local_280 = "";
    if ((uVar5 >> 0xd & 1) != 0) {
      local_280 = " REPLICATED";
    }
    local_288 = "";
    if ((uVar5 & 0x10) != 0) {
      local_288 = " HIDDEN";
    }
    local_290 = "";
    if ((uVar5 & 2) != 0) {
      local_290 = " DEVONLY";
    }
    if ((uVar5 >> 0xe & 1) != 0) {
      local_298 = " CHEAT";
    }
    FUN_180012ac0(&local_178,0x80," [cleared flags 0x%X:%s%s%s%s%s]",uVar5);
  }
  local_200 = &local_260;
  if (cVar1 == '\0') {
    local_240 = 0;
    uStack_238 = 0;
    local_230 = 0;
    uStack_228 = 0;
    FUN_18001d080(&local_240,"engine refused the command: ",0x1c);
    local_268 = 0x10;
    puVar4 = (undefined8 *)FUN_1801fc680(local_1f8,&local_240,local_f8);
    uVar5 = 0x30;
  }
  else {
    local_220 = 0;
    uStack_218 = 0;
    local_210 = 0;
    uStack_208 = 0;
    FUN_18001d080(&local_220,"sent: ",6);
    local_268 = 1;
    uVar3 = FUN_1801fc680(local_198,&local_220,local_f8);
    local_268 = 3;
    uVar3 = FUN_1801fc680(local_1b8,uVar3,&local_178);
    local_268 = 7;
    puVar4 = (undefined8 *)FUN_1801fc680(local_1d8,uVar3,&DAT_18035d598);
    uVar5 = 0xf;
  }
  local_260 = *puVar4;
  uStack_258 = puVar4[1];
  local_250 = puVar4[2];
  uStack_248 = puVar4[3];
  *(undefined1 *)puVar4 = 0;
  puVar4[2] = 0;
  puVar4[3] = 0xf;
  local_268 = uVar5;
  FUN_180144c60(&local_260);
  if ((uVar5 & 0x20) != 0) {
    uVar5 = uVar5 & 0xffffffdf;
    local_268 = uVar5;
    FUN_18020e450(local_1f8);
  }
  if ((uVar5 & 0x10) != 0) {
    uVar5 = uVar5 & 0xffffffef;
    local_268 = uVar5;
    FUN_18020e450(&local_240);
  }
  if ((uVar5 & 8) != 0) {
    uVar5 = uVar5 & 0xfffffff7;
    local_268 = uVar5;
    FUN_18020e450(local_1d8);
  }
  if ((uVar5 & 4) != 0) {
    uVar5 = uVar5 & 0xfffffffb;
    local_268 = uVar5;
    FUN_18020e450(local_1b8);
  }
  if ((uVar5 & 2) != 0) {
    uVar5 = uVar5 & 0xfffffffd;
    local_268 = uVar5;
    FUN_18020e450(local_198);
  }
  if ((uVar5 & 1) != 0) {
    local_268 = uVar5 & 0xfffffffe;
    FUN_18020e450(&local_220);
  }
  FUN_180014410("[CVAR] set \'%s\' -> sent=%d%s\n",local_f8,cVar1,&local_178);
  return;
}


)B1801452b0",
    "1adeef25a34492b4e7a61f45cf12e08cd076d508abdd515a7c156f923f722b76",
    R"F1801452b0C(FUN_180012ac0
FUN_180014410
FUN_180017040
FUN_1800170a0
FUN_1800170c0
FUN_1800170f0
FUN_18001d080
FUN_180144c60
FUN_1801fc680
FUN_18020e450)F1801452b0C",
    R"F1801452b0D(DAT_18035d598
DAT_1803da4c0)F1801452b0D",
    R"F1801452b0T(""
"%s %s"
" CHEAT"
"sent: "
" HIDDEN"
" DEVONLY"
" REPLICATED"
" NOT_CONNECTED"
"engine refused the command: "
" [cleared flags 0x%X:%s%s%s%s%s]"
"[CVAR] set \\'%s\\' -> sent=%d%s\\n")F1801452b0T",
    R"F1801452b0F(65: if ((param_1 != 0) && (cVar1 = FUN_1800170f0(), cVar1 == '\0')) {
68: if (uVar5 != 0) {
72: if (0xf < *(ulonglong *)(param_3 + 0x18)) {
75: if (0xf < (ulonglong)param_2[3]) {
99: if (uVar5 != 0) {
102: if (uVar5 >> 0x16 != 0) {
106: if ((uVar5 >> 0xd & 1) != 0) {
110: if ((uVar5 & 0x10) != 0) {
114: if ((uVar5 & 2) != 0) {
117: if ((uVar5 >> 0xe & 1) != 0) {
123: if (cVar1 == '\0') {
133: else {
156: if ((uVar5 & 0x20) != 0) {
161: if ((uVar5 & 0x10) != 0) {
166: if ((uVar5 & 8) != 0) {
171: if ((uVar5 & 4) != 0) {
176: if ((uVar5 & 2) != 0) {
181: if ((uVar5 & 1) != 0) {
186: return;)F1801452b0F",
    R"F1801452b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18035d598.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F1801452b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801452b0() noexcept {
    return kFunction_0x1801452b0;
}

// 0x180145600 FUN_180145600
// source: re/dump/decompile/0x180145600_FUN_180145600.c
// size: 466 bytes; thunk: false
// body sha256: d9a5a2893402343f793f1c0a85e9012bf56a769643692c84dc14d89ea964422e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180145600{
    "0x180145600",
    "FUN_180145600",
    R"F180145600S(undefined FUN_180145600())F180145600S",
    R"B180145600(// 0x180145600  FUN_180145600
// size=466 thunk=false
// signature: undefined FUN_180145600()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180145600(void *param_1,undefined8 *param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined1 *lp;
  bool bVar1;
  char cVar2;
  uint uVar3;
  BOOL BVar4;
  size_t sVar5;
  void *lp_00;
  undefined8 *puVar6;
  undefined1 *puVar7;
  float fVar8;
  undefined1 auStack_208 [32];
  undefined1 *local_1e8;
  char *local_1e0;
  undefined1 *local_1d8;
  double local_1d0;
  undefined1 *local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 *local_198;
  char local_188 [288];
  ulonglong local_68;
  
  local_68 = DAT_1803da4c0 ^ (ulonglong)auStack_208;
  puVar6 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar6 = (undefined8 *)*param_3;
  }
  if (puVar6 == (undefined8 *)0x0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = FUN_1801fcdc0();
  }
  uVar3 = FUN_1800170a0(param_1);
  puVar7 = &DAT_18033e5ea;
  if ((uVar3 >> 0xd & 1) != 0) {
    puVar7 = &DAT_18035d620;
  }
  fVar8 = (float)FUN_180019700(param_1);
  lp_00 = *(void **)((longlong)param_1 + 0x38);
  if ((lp_00 == (void *)0x0) || (lp_00 == param_1)) {
LAB_1801456a7:
    lp_00 = param_1;
  }
  else {
    BVar4 = IsBadReadPtr(lp_00,0x60);
    if (BVar4 != 0) goto LAB_1801456a7;
  }
  lp = *(undefined1 **)((longlong)lp_00 + 0x48);
  if (lp != (undefined1 *)0x0) {
    BVar4 = IsBadReadPtr(lp,2);
    bVar1 = true;
    if (BVar4 == 0) goto LAB_1801456ce;
  }
  bVar1 = false;
LAB_1801456ce:
  local_1d8 = &DAT_18033e5ea;
  if (bVar1) {
    local_1d8 = lp;
  }
  puVar6 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar6 = (undefined8 *)*param_2;
  }
  local_1e0 = "IConVar SetValue failed";
  if (cVar2 != '\0') {
    local_1e0 = "written directly (flags untouched)";
  }
  local_1e8 = &DAT_18033e5ea;
  if (param_4 != (undefined1 *)0x0) {
    local_1e8 = param_4;
  }
  local_1d0 = (double)fVar8;
  local_1c8 = puVar7;
  FUN_180012ac0(local_188,0x120,"%s : %s%s, now \"%s\" (float %.4f)%s",puVar6);
  local_198 = &local_1b8;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  sVar5 = strlen(local_188);
  FUN_18001d080(&local_1b8,local_188,sVar5);
  FUN_180144c60(&local_1b8);
  if (0xf < (ulonglong)param_3[3]) {
    param_3 = (undefined8 *)*param_3;
  }
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  FUN_180014410("[CVAR] force \'%s\' = \'%s\' -> ok=%d\n",param_2,param_3,cVar2);
  return;
}


)B180145600",
    "d9a5a2893402343f793f1c0a85e9012bf56a769643692c84dc14d89ea964422e",
    R"F180145600C(FUN_180012ac0
FUN_180014410
FUN_1800170a0
FUN_180019700
FUN_18001d080
FUN_180144c60
FUN_1801fcdc0)F180145600C",
    R"F180145600D(LAB_1801456a7
LAB_1801456ce
DAT_18033e5ea
DAT_18035d620
DAT_1803da4c0)F180145600D",
    R"F180145600T("IConVar SetValue failed"
"written directly (flags untouched)"
"%s : %s%s, now \\\"%s\\\" (float %.4f)%s"
"[CVAR] force \\'%s\\' = \\'%s\\' -> ok=%d\\n")F180145600T",
    R"F180145600F(38: if (0xf < (ulonglong)param_3[3]) {
41: if (puVar6 == (undefined8 *)0x0) {
44: else {
49: if ((uVar3 >> 0xd & 1) != 0) {
54: if ((lp_00 == (void *)0x0) || (lp_00 == param_1)) {
55: LAB_1801456a7:
58: else {
60: if (BVar4 != 0) goto LAB_1801456a7;
63: if (lp != (undefined1 *)0x0) {
66: if (BVar4 == 0) goto LAB_1801456ce;
69: LAB_1801456ce:
71: if (bVar1) {
75: if (0xf < (ulonglong)param_2[3]) {
79: if (cVar2 != '\0') {
83: if (param_4 != (undefined1 *)0x0) {
97: if (0xf < (ulonglong)param_3[3]) {
100: if (0xf < (ulonglong)param_2[3]) {
104: return;)F180145600F",
    R"F180145600U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1801456a7.
TODO: recover the declaration, type and value for global/data reference LAB_1801456ce.
TODO: recover the declaration, type and value for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type and value for global/data reference DAT_18035d620.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180145600U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180145600() noexcept {
    return kFunction_0x180145600;
}

// 0x1801457e0 FUN_1801457e0
// source: re/dump/decompile/0x1801457e0_FUN_1801457e0.c
// size: 568 bytes; thunk: false
// body sha256: 15f77d29893fbea397107caf92c19cd82de216671f4230ba5d9dbaabacc7c146
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801457e0{
    "0x1801457e0",
    "FUN_1801457e0",
    R"F1801457e0S(undefined FUN_1801457e0())F1801457e0S",
    R"B1801457e0(// 0x1801457e0  FUN_1801457e0
// size=568 thunk=false
// signature: undefined FUN_1801457e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801457e0(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  size_t sVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  undefined1 auStack_158 [32];
  uint local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  char local_e8 [176];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  plVar9 = (longlong *)(param_1 + 2);
  plVar8 = plVar9;
  if (0xf < *(ulonglong *)(param_1 + 8)) {
    plVar8 = (longlong *)*plVar9;
  }
  lVar5 = FUN_180016fb0(plVar8);
  if (lVar5 == 0) {
    local_118 = &local_110;
    uVar6 = FUN_18002cfb0(&local_110,plVar9," : not found");
    FUN_180144c60(uVar6);
  }
  else {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      cVar2 = FUN_1800170f0(lVar5);
      if (cVar2 == '\0') {
        FUN_1801452b0(lVar5,plVar9,param_1 + 10);
      }
      else {
        FUN_180145600(lVar5,plVar9,param_1 + 10,&DAT_18035d7e8);
      }
    }
    else if (iVar1 == 1) {
      FUN_180145600(lVar5,plVar9,param_1 + 10,&DAT_18033e5ea);
    }
    else if (iVar1 == 2) {
      cVar2 = FUN_1800170f0(lVar5);
      if (cVar2 == '\0') {
        uVar3 = FUN_1800170a0(lVar5);
        cVar2 = FUN_1800170f0(lVar5);
        if (cVar2 == '\0') {
          uVar4 = FUN_1800170a0(lVar5);
          uVar10 = uVar4 & 0x406012;
          if (uVar10 != 0) {
            FUN_1800170c0(lVar5,~uVar10 & uVar4);
          }
        }
        else {
          uVar10 = 0;
        }
        local_128 = FUN_1800170a0(lVar5);
        if (0xf < *(ulonglong *)(param_1 + 8)) {
          plVar9 = (longlong *)*plVar9;
        }
        local_138 = uVar10;
        local_130 = uVar3;
        FUN_180012ac0(local_e8,0xb0,"%s : cleared 0x%X, flags 0x%X -> 0x%X",plVar9);
        local_118 = &local_110;
        local_110 = 0;
        uStack_108 = 0;
        local_100 = 0;
        local_f8 = 0;
        sVar7 = strlen(local_e8);
        FUN_18001d080(&local_110,local_e8,sVar7);
        FUN_180144c60(&local_110);
        FUN_180014410("[CVAR] %s\n",local_e8);
      }
      else {
        local_118 = &local_110;
        uVar6 = FUN_18002cfb0(&local_110,plVar9,&DAT_18035d6f0);
        FUN_180144c60(uVar6);
        if (0xf < *(ulonglong *)(param_1 + 8)) {
          plVar9 = (longlong *)*plVar9;
        }
        FUN_180014410("[CVAR] refused flag unlock on guarded cvar \'%s\'\n",plVar9);
      }
    }
    else if (iVar1 == 3) {
      local_118 = &local_110;
      if (0xf < *(ulonglong *)(param_1 + 8)) {
        plVar9 = (longlong *)*plVar9;
      }
      uVar6 = FUN_180144f60(&local_110,plVar9);
      FUN_180144c60(uVar6);
    }
  }
  return;
}


)B1801457e0",
    "15f77d29893fbea397107caf92c19cd82de216671f4230ba5d9dbaabacc7c146",
    R"F1801457e0C(FUN_180012ac0
FUN_180014410
FUN_180016fb0
FUN_1800170a0
FUN_1800170c0
FUN_1800170f0
FUN_18001d080
FUN_18002cfb0
FUN_180144c60
FUN_180144f60
FUN_1801452b0
FUN_180145600)F1801457e0C",
    R"F1801457e0D(DAT_18033e5ea
DAT_18035d6f0
DAT_18035d7e8
DAT_1803da4c0)F1801457e0D",
    R"F1801457e0T("[CVAR] %s\\n"
" : not found"
"%s : cleared 0x%X, flags 0x%X -> 0x%X"
"[CVAR] refused flag unlock on guarded cvar \\'%s\\'\\n")F1801457e0T",
    R"F1801457e0F(37: if (0xf < *(ulonglong *)(param_1 + 8)) {
41: if (lVar5 == 0) {
46: else {
48: if (iVar1 == 0) {
50: if (cVar2 == '\0') {
53: else {
57: else if (iVar1 == 1) {
60: else if (iVar1 == 2) {
62: if (cVar2 == '\0') {
65: if (cVar2 == '\0') {
68: if (uVar10 != 0) {
72: else {
76: if (0xf < *(ulonglong *)(param_1 + 8)) {
92: else {
96: if (0xf < *(ulonglong *)(param_1 + 8)) {
102: else if (iVar1 == 3) {
104: if (0xf < *(ulonglong *)(param_1 + 8)) {
111: return;)F1801457e0F",
    R"F1801457e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type and value for global/data reference DAT_18035d6f0.
TODO: recover the declaration, type and value for global/data reference DAT_18035d7e8.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F1801457e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801457e0() noexcept {
    return kFunction_0x1801457e0;
}

// 0x180145a20 FUN_180145a20
// source: re/dump/decompile/0x180145a20_FUN_180145a20.c
// size: 143 bytes; thunk: false
// body sha256: c5efb16852aafd8708b6a84af152e981730612f209ee3e855f9a5dcfa6fd1549
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180145a20{
    "0x180145a20",
    "FUN_180145a20",
    R"F180145a20S(undefined FUN_180145a20())F180145a20S",
    R"B180145a20(// 0x180145a20  FUN_180145a20
// size=143 thunk=false
// signature: undefined FUN_180145a20()
// status: ok


undefined8
FUN_180145a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar2 = _Mtx_lock(&DAT_1803e8400);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (DAT_1803e844c == 0x7fffffff) {
    DAT_1803e844c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  FUN_18016d4c0(param_1,s_Ready_1803e9eb8,param_3,param_4,uVar4);
  _Mtx_unlock(&DAT_1803e8400);
  return param_1;
}


)B180145a20",
    "c5efb16852aafd8708b6a84af152e981730612f209ee3e855f9a5dcfa6fd1549",
    R"F180145a20C(FUN_18016d4c0)F180145a20C",
    R"F180145a20D(DAT_1803e8400
DAT_1803e844c)F180145a20D",
    R"F180145a20T()F180145a20T",
    R"F180145a20F(18: if (iVar2 != 0) {
22: return uVar3;
24: if (DAT_1803e844c == 0x7fffffff) {
30: return param_1;)F180145a20F",
    R"F180145a20U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8400.
TODO: recover the declaration, type and value for global/data reference DAT_1803e844c.
TODO: resolve the indirect call in body 20: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 21: uVar3 = (*pcVar1)();.)F180145a20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180145a20() noexcept {
    return kFunction_0x180145a20;
}

// 0x180145ab0 FUN_180145ab0
// source: re/dump/decompile/0x180145ab0_FUN_180145ab0.c
// size: 397 bytes; thunk: false
// body sha256: ec91f1928428abc4dfb6adacfbf5fe5e905779a32ad0228ea3d2bf8301380d38
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180145ab0{
    "0x180145ab0",
    "FUN_180145ab0",
    R"F180145ab0S(undefined FUN_180145ab0())F180145ab0S",
    R"B180145ab0(// 0x180145ab0  FUN_180145ab0
// size=397 thunk=false
// signature: undefined FUN_180145ab0()
// status: ok


longlong * FUN_180145ab0(longlong *param_1,byte *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(char *)param_1 = '\0';
  if (param_2 == (byte *)0x0) {
    return param_1;
  }
  if ((ulonglong)param_1[3] < 0x3f) {
    lVar4 = param_1[2];
    FUN_18021aa80();
    param_1[2] = lVar4;
  }
  bVar1 = *param_2;
  while ((bVar1 != 0 && (uVar2 = param_1[2], uVar2 < 0x3f))) {
    bVar1 = *param_2;
    if ((0x3b < bVar1) || ((0x8000004ffffffffU >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
      if (uVar2 < (ulonglong)param_1[3]) {
        param_1[2] = uVar2 + 1;
        if ((ulonglong)param_1[3] < 0x10) {
          *(byte *)(uVar2 + (longlong)param_1) = bVar1;
          *(char *)(uVar2 + 1 + (longlong)param_1) = '\0';
        }
        else {
          lVar4 = *param_1;
          *(byte *)(uVar2 + lVar4) = bVar1;
          *(undefined1 *)(uVar2 + 1 + lVar4) = 0;
        }
      }
      else {
        FUN_18021abd0(param_1);
      }
    }
    param_2 = param_2 + 1;
    bVar1 = *param_2;
  }
  lVar4 = param_1[2];
  while( true ) {
    if (lVar4 == 0) {
      return param_1;
    }
    plVar3 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar3 = (longlong *)*param_1;
    }
    if ((char)*plVar3 != ' ') break;
    plVar3 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar3 = (longlong *)*param_1;
    }
    bVar5 = lVar4 != 0;
    lVar4 = lVar4 - (ulonglong)bVar5;
    memmove(plVar3,(char *)((ulonglong)bVar5 + (longlong)plVar3),lVar4 + 1);
    param_1[2] = lVar4;
  }
  if (lVar4 == 0) {
    return param_1;
  }
  do {
    plVar3 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar3 = (longlong *)*param_1;
    }
    lVar4 = lVar4 + -1;
    if (*(char *)(lVar4 + (longlong)plVar3) != ' ') {
      return param_1;
    }
    param_1[2] = lVar4;
    plVar3 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar3 = (longlong *)*param_1;
    }
    *(char *)(lVar4 + (longlong)plVar3) = '\0';
    lVar4 = param_1[2];
  } while (lVar4 != 0);
  return param_1;
}


)B180145ab0",
    "ec91f1928428abc4dfb6adacfbf5fe5e905779a32ad0228ea3d2bf8301380d38",
    R"F180145ab0C(FUN_18021aa80
FUN_18021abd0)F180145ab0C",
    R"F180145ab0D()F180145ab0D",
    R"F180145ab0T()F180145ab0T",
    R"F180145ab0F(21: if (param_2 == (byte *)0x0) {
22: return param_1;
24: if ((ulonglong)param_1[3] < 0x3f) {
30: while ((bVar1 != 0 && (uVar2 = param_1[2], uVar2 < 0x3f))) {
32: if ((0x3b < bVar1) || ((0x8000004ffffffffU >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
33: if (uVar2 < (ulonglong)param_1[3]) {
35: if ((ulonglong)param_1[3] < 0x10) {
39: else {
45: else {
53: while( true ) {
54: if (lVar4 == 0) {
55: return param_1;
58: if (0xf < (ulonglong)param_1[3]) {
61: if ((char)*plVar3 != ' ') break;
63: if (0xf < (ulonglong)param_1[3]) {
71: if (lVar4 == 0) {
72: return param_1;
74: do {
76: if (0xf < (ulonglong)param_1[3]) {
80: if (*(char *)(lVar4 + (longlong)plVar3) != ' ') {
81: return param_1;
85: if (0xf < (ulonglong)param_1[3]) {
91: return param_1;)F180145ab0F",
    R"F180145ab0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180145ab0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180145ab0() noexcept {
    return kFunction_0x180145ab0;
}

// 0x180145c40 FUN_180145c40
// source: re/dump/decompile/0x180145c40_FUN_180145c40.c
// size: 763 bytes; thunk: false
// body sha256: 04d6ea0a0d7efb0462fd47c6ed8d52e25dc9f09e86433748293221b619f46cdc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180145c40{
    "0x180145c40",
    "FUN_180145c40",
    R"F180145c40S(undefined FUN_180145c40())F180145c40S",
    R"B180145c40(// 0x180145c40  FUN_180145c40
// size=763 thunk=false
// signature: undefined FUN_180145c40()
// status: ok


longlong * FUN_180145c40(longlong *param_1,byte *param_2)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  int *piVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 local_50 [32];
  longlong *local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(char *)param_1 = '\0';
  if (param_2 == (byte *)0x0) {
    return param_1;
  }
  local_30 = param_1;
  if ((ulonglong)param_1[3] < 0xf0) {
    lVar2 = param_1[2];
    FUN_18021aa80();
    param_1[2] = lVar2;
  }
  bVar1 = *param_2;
  while ((bVar1 != 0 && (uVar8 = param_1[2], uVar8 < 0xf0))) {
    bVar1 = *param_2;
    if ((0x3b < bVar1) || ((0x800000400002400U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
      if (bVar1 == 0x5c) {
        bVar1 = 0x2f;
      }
      if (uVar8 < (ulonglong)param_1[3]) {
        param_1[2] = uVar8 + 1;
        if ((ulonglong)param_1[3] < 0x10) {
          *(byte *)(uVar8 + (longlong)param_1) = bVar1;
          *(char *)(uVar8 + 1 + (longlong)param_1) = '\0';
        }
        else {
          lVar2 = *param_1;
          *(byte *)(uVar8 + lVar2) = bVar1;
          *(undefined1 *)(uVar8 + 1 + lVar2) = 0;
        }
      }
      else {
        FUN_18021abd0(param_1);
      }
    }
    param_2 = param_2 + 1;
    bVar1 = *param_2;
  }
  uVar8 = param_1[2];
  while( true ) {
    if (uVar8 == 0) {
      return param_1;
    }
    plVar5 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar5 = (longlong *)*param_1;
    }
    if ((char)*plVar5 != ' ') break;
    plVar5 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar5 = (longlong *)*param_1;
    }
    bVar9 = uVar8 != 0;
    uVar8 = uVar8 - bVar9;
    memmove(plVar5,(char *)((ulonglong)bVar9 + (longlong)plVar5),uVar8 + 1);
    param_1[2] = uVar8;
  }
  if (uVar8 == 0) {
    return param_1;
  }
  while( true ) {
    uVar3 = param_1[3];
    plVar5 = param_1;
    if (0xf < uVar3) {
      plVar5 = (longlong *)*param_1;
    }
    lVar2 = uVar8 - 1;
    if (*(char *)(lVar2 + (longlong)plVar5) != ' ') break;
    param_1[2] = lVar2;
    plVar5 = param_1;
    if (0xf < uVar3) {
      plVar5 = (longlong *)*param_1;
    }
    *(char *)((longlong)plVar5 + lVar2) = '\0';
    uVar8 = param_1[2];
    if (uVar8 == 0) {
      return param_1;
    }
  }
  if (uVar8 == 0) {
    return param_1;
  }
  plVar5 = param_1;
  if (0xf < uVar3) {
    plVar5 = (longlong *)*param_1;
  }
  if (((uVar8 < 7) ||
      (plVar6 = (longlong *)
                thunk_FUN_1802d5870(plVar5,(longlong *)((longlong)plVar5 + 7),"models/",7),
      plVar6 == (longlong *)((longlong)plVar5 + 7))) || (plVar6 != plVar5)) {
    if (0x7fffffffffffffffU - param_1[2] < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    FUN_18020e930(local_50);
    FUN_18020e8a0(param_1,local_50);
    FUN_18020e450(local_50);
  }
  bVar9 = false;
  if (3 < (ulonglong)param_1[2]) {
    piVar7 = (int *)FUN_18020e670(param_1,local_50,param_1[2] - 4,0xffffffffffffffff);
    bVar9 = true;
    plVar5 = (longlong *)(piVar7 + 4);
    if (0xf < *(ulonglong *)(piVar7 + 6)) {
      piVar7 = *(int **)piVar7;
    }
    if ((*plVar5 == 4) && (*piVar7 == 0x6c646d2e)) {
      bVar4 = false;
      goto LAB_180145ee4;
    }
  }
  bVar4 = true;
LAB_180145ee4:
  if (bVar9) {
    FUN_18020e450(local_50);
  }
  if (!bVar4) {
    return param_1;
  }
  FUN_18021aef0(param_1,&DAT_18035d820,4);
  return param_1;
}


)B180145c40",
    "04d6ea0a0d7efb0462fd47c6ed8d52e25dc9f09e86433748293221b619f46cdc",
    R"F180145c40C(FUN_1800130a0
FUN_18020e450
FUN_18020e670
FUN_18020e8a0
FUN_18020e930
FUN_18021aa80
FUN_18021abd0
FUN_18021aef0)F180145c40C",
    R"F180145c40D(LAB_180145ee4
DAT_18035d820)F180145c40D",
    R"F180145c40T("models/")F180145c40T",
    R"F180145c40F(27: if (param_2 == (byte *)0x0) {
28: return param_1;
31: if ((ulonglong)param_1[3] < 0xf0) {
37: while ((bVar1 != 0 && (uVar8 = param_1[2], uVar8 < 0xf0))) {
39: if ((0x3b < bVar1) || ((0x800000400002400U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
40: if (bVar1 == 0x5c) {
43: if (uVar8 < (ulonglong)param_1[3]) {
45: if ((ulonglong)param_1[3] < 0x10) {
49: else {
55: else {
63: while( true ) {
64: if (uVar8 == 0) {
65: return param_1;
68: if (0xf < (ulonglong)param_1[3]) {
71: if ((char)*plVar5 != ' ') break;
73: if (0xf < (ulonglong)param_1[3]) {
81: if (uVar8 == 0) {
82: return param_1;
84: while( true ) {
87: if (0xf < uVar3) {
91: if (*(char *)(lVar2 + (longlong)plVar5) != ' ') break;
94: if (0xf < uVar3) {
99: if (uVar8 == 0) {
100: return param_1;
103: if (uVar8 == 0) {
104: return param_1;
107: if (0xf < uVar3) {
110: if (((uVar8 < 7) ||
114: if (0x7fffffffffffffffU - param_1[2] < 7) {
123: if (3 < (ulonglong)param_1[2]) {
127: if (0xf < *(ulonglong *)(piVar7 + 6)) {
130: if ((*plVar5 == 4) && (*piVar7 == 0x6c646d2e)) {
132: goto LAB_180145ee4;
136: LAB_180145ee4:
137: if (bVar9) {
140: if (!bVar4) {
141: return param_1;
144: return param_1;)F180145c40F",
    R"F180145c40U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180145ee4.
TODO: recover the declaration, type and value for global/data reference DAT_18035d820.)F180145c40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180145c40() noexcept {
    return kFunction_0x180145c40;
}

// 0x180145f40 FUN_180145f40
// source: re/dump/decompile/0x180145f40_FUN_180145f40.c
// size: 1111 bytes; thunk: false
// body sha256: 6f89b7d78c41fe3e75b8632a79c041e2bc5dfc7fb2e45918dfba30296a5da1d1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180145f40{
    "0x180145f40",
    "FUN_180145f40",
    R"F180145f40S(undefined FUN_180145f40())F180145f40S",
    R"B180145f40(// 0x180145f40  FUN_180145f40
// size=1111 thunk=false
// signature: undefined FUN_180145f40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180145f40(undefined4 param_1,undefined8 param_2,char *param_3)

{
  code *pcVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  size_t sVar5;
  undefined4 *puVar6;
  void *_Memory;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [24];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  ulonglong uStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  ulonglong uStack_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  uint local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  puVar8 = auStack_158;
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  local_138 = 0;
  FUN_180145ab0(&local_40);
  if (local_30 == 0) {
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    sVar5 = strlen(param_3);
    FUN_18001d080(&local_c8,param_3,sVar5);
    puVar6 = (undefined4 *)FUN_18021aef0(&local_c8,": nothing to send",0x11);
    local_130 = *puVar6;
    uStack_12c = puVar6[1];
    uStack_128 = puVar6[2];
    uStack_124 = puVar6[3];
    local_120 = *(undefined8 *)(puVar6 + 4);
    uStack_118 = *(ulonglong *)(puVar6 + 6);
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    *(undefined1 *)puVar6 = 0;
    local_138 = 1;
    local_f0 = &DAT_1803e8400;
    iVar4 = _Mtx_lock(&DAT_1803e8400);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e844c == 0x7fffffff) {
      DAT_1803e844c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    puVar6 = &local_130;
    if (0xf < uStack_118) {
      puVar6 = (undefined4 *)CONCAT44(uStack_12c,local_130);
    }
    FUN_180212700(s_Ready_1803e9eb8,puVar6,local_120);
    _Mtx_unlock(&DAT_1803e8400);
    local_138 = 0;
    FUN_18020e450(&local_130);
    puVar7 = &local_c8;
  }
  else {
    if ((DAT_1803fa668 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar3 != '\0')) {
      local_48 = &DAT_1803e8400;
      iVar4 = _Mtx_lock(&DAT_1803e8400);
      if (iVar4 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e844c == 0x7fffffff) {
        DAT_1803e844c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      if (0xf < CONCAT44(DAT_1803e9f20._4_4_,(undefined4)DAT_1803e9f20)) {
        pvVar2 = (void *)CONCAT44(DAT_1803e9f08._4_4_,(uint)DAT_1803e9f08);
        _Memory = pvVar2;
        puVar8 = auStack_158;
        if ((0xfff < CONCAT44(DAT_1803e9f20._4_4_,(undefined4)DAT_1803e9f20) + 1) &&
           (_Memory = *(void **)((longlong)pvVar2 + -8), puVar8 = auStack_158,
           0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
          pcVar1 = (code *)swi(0x29);
          _Memory = (void *)(*pcVar1)(5);
          puVar8 = auStack_150;
        }
        *(undefined8 *)(puVar8 + -8) = 0x180146132;
        free(_Memory);
      }
      DAT_1803e9f08._0_4_ = local_40;
      DAT_1803e9f08._4_4_ = uStack_3c;
      _DAT_1803e9f10 = uStack_38;
      uRam00000001803e9f14 = uStack_34;
      _DAT_1803e9f18 = (undefined4)local_30;
      uRam00000001803e9f1c = local_30._4_4_;
      DAT_1803e9f20._0_4_ = (undefined4)uStack_28;
      DAT_1803e9f20._4_4_ = uStack_28._4_4_;
      local_30 = 0;
      uStack_28 = 0xf;
      local_40 = local_40 & 0xffffff00;
      *(undefined8 *)(puVar8 + -8) = 0x180146164;
      DAT_180409a70 = param_1;
      _DAT_180409af0 = GetTickCount64();
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0;
      *(undefined8 *)(puVar8 + -8) = 0x180146182;
      sVar5 = strlen(param_3);
      *(undefined8 *)(puVar8 + -8) = 0x180146191;
      FUN_18001d080(&local_88,param_3,sVar5);
      *(undefined8 *)(puVar8 + -8) = 0x1801461a8;
      puVar6 = (undefined4 *)FUN_18021aef0(&local_88," queued",7);
      local_a8 = *puVar6;
      uStack_a4 = puVar6[1];
      uStack_a0 = puVar6[2];
      uStack_9c = puVar6[3];
      local_98 = *(undefined8 *)(puVar6 + 4);
      uStack_90 = *(undefined8 *)(puVar6 + 6);
      *(undefined8 *)(puVar6 + 4) = 0;
      *(undefined8 *)(puVar6 + 6) = 0xf;
      *(undefined1 *)puVar6 = 0;
      *(undefined4 *)(puVar8 + 0x20) = 8;
      *(undefined8 *)(puVar8 + -8) = 0x1801461e7;
      FUN_18020e8a0(s_Ready_1803e9eb8,&local_a8);
      *(undefined4 *)(puVar8 + 0x20) = 0;
      *(undefined8 *)(puVar8 + -8) = 0x1801461f7;
      FUN_18020e450(&local_a8);
      *(undefined8 *)(puVar8 + -8) = 0x180146201;
      FUN_18020e450(&local_88);
      *(undefined8 *)(puVar8 + -8) = 0x18014620b;
      _Mtx_unlock(&DAT_1803e8400);
      goto LAB_18014636a;
    }
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_18001d080(&local_68,"Not in a server - ",0x12);
    sVar5 = strlen(param_3);
    puVar7 = (undefined8 *)FUN_18021aef0(&local_68,param_3,sVar5);
    local_e8 = *puVar7;
    uStack_e0 = puVar7[1];
    local_d8 = puVar7[2];
    uStack_d0 = puVar7[3];
    puVar7[2] = 0;
    puVar7[3] = 0xf;
    *(undefined1 *)puVar7 = 0;
    local_138 = 2;
    puVar6 = (undefined4 *)FUN_18021aef0(&local_e8," refused",8);
    local_110 = *puVar6;
    uStack_10c = puVar6[1];
    uStack_108 = puVar6[2];
    uStack_104 = puVar6[3];
    local_100 = *(undefined8 *)(puVar6 + 4);
    uStack_f8 = *(ulonglong *)(puVar6 + 6);
    *(undefined8 *)(puVar6 + 4) = 0;
    *(undefined8 *)(puVar6 + 6) = 0xf;
    *(undefined1 *)puVar6 = 0;
    local_138 = 6;
    local_f0 = &DAT_1803e8400;
    iVar4 = _Mtx_lock(&DAT_1803e8400);
    if (iVar4 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e844c == 0x7fffffff) {
      DAT_1803e844c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    puVar6 = &local_110;
    if (0xf < uStack_f8) {
      puVar6 = (undefined4 *)CONCAT44(uStack_10c,local_110);
    }
    FUN_180212700(s_Ready_1803e9eb8,puVar6,local_100);
    _Mtx_unlock(&DAT_1803e8400);
    local_138 = 2;
    FUN_18020e450(&local_110);
    local_138 = 0;
    FUN_18020e450(&local_e8);
    puVar7 = &local_68;
  }
  FUN_18020e450(puVar7);
  puVar8 = auStack_158;
LAB_18014636a:
  *(undefined8 *)(puVar8 + -8) = 0x180146373;
  FUN_18020e450(&local_40);
  *(undefined8 *)(puVar8 + -8) = 0x18014637f;
  return;
}


)B180145f40",
    "6f89b7d78c41fe3e75b8632a79c041e2bc5dfc7fb2e45918dfba30296a5da1d1",
    R"F180145f40C(FUN_18001d080
FUN_180145ab0
FUN_18020e450
FUN_18020e8a0
FUN_180212700
FUN_18021aef0)F180145f40C",
    R"F180145f40D(LAB_18014636a
DAT_1803da4c0
DAT_1803e8400
DAT_1803e844c
DAT_1803e9f08
DAT_1803e9f20
DAT_1803fa668
DAT_180409a70)F180145f40D",
    R"F180145f40T(" queued"
" refused"
": nothing to send"
"Not in a server - ")F180145f40T",
    R"F180145f40F(73: if (local_30 == 0) {
93: if (iVar4 != 0) {
97: return;
99: if (DAT_1803e844c == 0x7fffffff) {
104: if (0xf < uStack_118) {
113: else {
114: if ((DAT_1803fa668 != (longlong *)0x0) &&
118: if (iVar4 != 0) {
122: return;
124: if (DAT_1803e844c == 0x7fffffff) {
128: if (0xf < CONCAT44(DAT_1803e9f20._4_4_,(undefined4)DAT_1803e9f20)) {
132: if ((0xfff < CONCAT44(DAT_1803e9f20._4_4_,(undefined4)DAT_1803e9f20) + 1) &&
185: goto LAB_18014636a;
215: if (iVar4 != 0) {
219: return;
221: if (DAT_1803e844c == 0x7fffffff) {
226: if (0xf < uStack_f8) {
239: LAB_18014636a:
243: return;)F180145f40F",
    R"F180145f40U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18014636a.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8400.
TODO: recover the declaration, type and value for global/data reference DAT_1803e844c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f08.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f20.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_180409a70.
TODO: resolve the indirect call in body 95: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 96: (*pcVar1)();.
TODO: resolve the indirect call in body 115: (cVar3 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar3 != '\0')) {.
TODO: resolve the indirect call in body 120: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 121: (*pcVar1)();.
TODO: resolve the indirect call in body 135: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 136: _Memory = (void *)(*pcVar1)(5);.
TODO: resolve the indirect call in body 217: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 218: (*pcVar1)();.)F180145f40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180145f40() noexcept {
    return kFunction_0x180145f40;
}

// 0x1801463a0 Features_Toolbox_RawSetConVarMessage_vfunc01
// source: re/dump/decompile/0x1801463a0_Features_Toolbox_RawSetConVarMessage_vfunc01.c
// size: 5 bytes; thunk: false
// body sha256: fe2e599dbf7702f68a6a11e7b0cba5496669b2c3f65c0ba0f77d677d0a8731c2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801463a0{
    "0x1801463a0",
    "Features_Toolbox_RawSetConVarMessage_vfunc01",
    R"F1801463a0S(undefined Features_Toolbox_RawSetConVarMessage_vfunc01())F1801463a0S",
    R"B1801463a0(// 0x1801463a0  Features_Toolbox_RawSetConVarMessage_vfunc01
// size=5 thunk=false
// signature: undefined Features_Toolbox_RawSetConVarMessage_vfunc01()
// status: ok


void Features_Toolbox_RawSetConVarMessage_vfunc01(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}


)B1801463a0",
    "fe2e599dbf7702f68a6a11e7b0cba5496669b2c3f65c0ba0f77d677d0a8731c2",
    R"F1801463a0C()F1801463a0C",
    R"F1801463a0D()F1801463a0D",
    R"F1801463a0T()F1801463a0T",
    R"F1801463a0F(11: return;)F1801463a0F",
    R"F1801463a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1801463a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801463a0() noexcept {
    return kFunction_0x1801463a0;
}

// 0x1801463b0 Features_Toolbox_RawSetConVarMessage_vfunc02
// source: re/dump/decompile/0x1801463b0_Features_Toolbox_RawSetConVarMessage_vfunc02.c
// size: 4 bytes; thunk: false
// body sha256: fd82c85efc65d37b193f63f7e34c00544d664f3c5fd0ffcea77228660783749f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801463b0{
    "0x1801463b0",
    "Features_Toolbox_RawSetConVarMessage_vfunc02",
    R"F1801463b0S(undefined Features_Toolbox_RawSetConVarMessage_vfunc02())F1801463b0S",
    R"B1801463b0(// 0x1801463b0  Features_Toolbox_RawSetConVarMessage_vfunc02
// size=4 thunk=false
// signature: undefined Features_Toolbox_RawSetConVarMessage_vfunc02()
// status: ok


void Features_Toolbox_RawSetConVarMessage_vfunc02(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x20) = param_2;
  return;
}


)B1801463b0",
    "fd82c85efc65d37b193f63f7e34c00544d664f3c5fd0ffcea77228660783749f",
    R"F1801463b0C()F1801463b0C",
    R"F1801463b0D()F1801463b0D",
    R"F1801463b0T()F1801463b0T",
    R"F1801463b0F(11: return;)F1801463b0F",
    R"F1801463b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1801463b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801463b0() noexcept {
    return kFunction_0x1801463b0;
}

// 0x1801463c0 Features_Toolbox_RawSetConVarMessage_vfunc05
// source: re/dump/decompile/0x1801463c0_Features_Toolbox_RawSetConVarMessage_vfunc05.c
// size: 448 bytes; thunk: false
// body sha256: 2c1f4c384efc81406217271ef2e72027cf546a55d60e9de01f9abdee987ad186
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801463c0{
    "0x1801463c0",
    "Features_Toolbox_RawSetConVarMessage_vfunc05",
    R"F1801463c0S(undefined Features_Toolbox_RawSetConVarMessage_vfunc05())F1801463c0S",
    R"B1801463c0(// 0x1801463c0  Features_Toolbox_RawSetConVarMessage_vfunc05
// size=448 thunk=false
// signature: undefined Features_Toolbox_RawSetConVarMessage_vfunc05()
// status: ok


undefined8 Features_Toolbox_RawSetConVarMessage_vfunc05(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  sbyte sVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  char *pcVar8;
  uint uVar9;
  uint uVar10;
  
  iVar3 = (int)param_2[2];
  if (*(int *)((longlong)param_2 + 0xc) - iVar3 < 6) {
    *(int *)(param_2 + 2) = *(int *)((longlong)param_2 + 0xc);
    *(undefined1 *)((longlong)param_2 + 0x14) = 1;
  }
  else {
    *(int *)(param_2 + 2) = iVar3 + 6;
    bVar7 = (byte)iVar3 & 0x1f;
    uVar6 = *(uint *)(*param_2 + ((longlong)iVar3 >> 5) * 4);
    puVar1 = (uint *)(*param_2 + ((longlong)iVar3 >> 5) * 4);
    uVar10 = 5 << bVar7 | 5U >> 0x20 - bVar7;
    uVar9 = 0x1f >> (0x1f - bVar7 & 0x1f);
    uVar5 = uVar9 & 1;
    puVar1[uVar5] = puVar1[uVar5] ^ (puVar1[uVar5] ^ uVar10) & uVar9;
    *puVar1 = (uVar6 ^ uVar10) & 0x3f << bVar7 ^ uVar6;
  }
  uVar6 = *(uint *)(param_2 + 2);
  if ((int)(*(int *)((longlong)param_2 + 0xc) - uVar6) < 8) {
    *(int *)(param_2 + 2) = *(int *)((longlong)param_2 + 0xc);
    *(undefined1 *)((longlong)param_2 + 0x14) = 1;
  }
  else {
    *(uint *)(param_2 + 2) = uVar6 + 8;
    sVar4 = (sbyte)(uVar6 & 0x1f);
    uVar5 = *(uint *)(*param_2 + ((longlong)(int)uVar6 >> 5) * 4);
    puVar1 = (uint *)(*param_2 + ((longlong)(int)uVar6 >> 5) * 4);
    uVar9 = 0x7f >> (0x1fU - sVar4 & 0x1f);
    uVar10 = 1U >> (0x20U - sVar4 & 0x1f) | 1 << (uVar6 & 0x1f);
    uVar6 = uVar9 & 1;
    puVar1[uVar6] = puVar1[uVar6] ^ (puVar1[uVar6] ^ uVar10) & uVar9;
    *puVar1 = (uVar5 ^ uVar10) & 0xff << sVar4 ^ uVar5;
  }
  pcVar8 = *(char **)(param_1 + 8);
  if (*(char **)(param_1 + 8) == (char *)0x0) {
    FUN_180019830(param_2,0,8);
  }
  else {
    do {
      FUN_180019830(param_2,(int)*pcVar8,8);
      cVar2 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
  }
  pcVar8 = *(char **)(param_1 + 0x10);
  if (*(char **)(param_1 + 0x10) == (char *)0x0) {
    FUN_180019830(param_2,0,8);
    return 1;
  }
  do {
    FUN_180019830(param_2,(int)*pcVar8,8);
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  return 1;
}


)B1801463c0",
    "2c1f4c384efc81406217271ef2e72027cf546a55d60e9de01f9abdee987ad186",
    R"F1801463c0C(FUN_180019830)F1801463c0C",
    R"F1801463c0D()F1801463c0D",
    R"F1801463c0T()F1801463c0T",
    R"F1801463c0F(22: if (*(int *)((longlong)param_2 + 0xc) - iVar3 < 6) {
26: else {
38: if ((int)(*(int *)((longlong)param_2 + 0xc) - uVar6) < 8) {
42: else {
54: if (*(char **)(param_1 + 8) == (char *)0x0) {
57: else {
58: do {
65: if (*(char **)(param_1 + 0x10) == (char *)0x0) {
67: return 1;
69: do {
74: return 1;)F1801463c0F",
    R"F1801463c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1801463c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801463c0() noexcept {
    return kFunction_0x1801463c0;
}

// 0x180146580 Features_Toolbox_RawSetConVarMessage_vfunc06
// source: re/dump/decompile/0x180146580_Features_Toolbox_RawSetConVarMessage_vfunc06.c
// size: 5 bytes; thunk: false
// body sha256: cbb302b55bbab17e0e2fa1593d95f276aada9dbba6c6e729d8b5513b18443ca7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180146580{
    "0x180146580",
    "Features_Toolbox_RawSetConVarMessage_vfunc06",
    R"F180146580S(undefined Features_Toolbox_RawSetConVarMessage_vfunc06())F180146580S",
    R"B180146580(// 0x180146580  Features_Toolbox_RawSetConVarMessage_vfunc06
// size=5 thunk=false
// signature: undefined Features_Toolbox_RawSetConVarMessage_vfunc06()
// status: ok


undefined1 Features_Toolbox_RawSetConVarMessage_vfunc06(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}


)B180146580",
    "cbb302b55bbab17e0e2fa1593d95f276aada9dbba6c6e729d8b5513b18443ca7",
    R"F180146580C()F180146580C",
    R"F180146580D()F180146580D",
    R"F180146580T()F180146580T",
    R"F180146580F(10: return *(undefined1 *)(param_1 + 0x20);)F180146580F",
    R"F180146580U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180146580U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180146580() noexcept {
    return kFunction_0x180146580;
}

// 0x180146590 vfunc_shared_180146590
// source: re/dump/decompile/0x180146590_vfunc_shared_180146590.c
// size: 6 bytes; thunk: false
// body sha256: be85a6423a4de571720da3395cca89ddbadaca6327b894d3c1bb6e6fcdb90cf2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180146590{
    "0x180146590",
    "vfunc_shared_180146590",
    R"F180146590S(undefined vfunc_shared_180146590())F180146590S",
    R"B180146590(// 0x180146590  vfunc_shared_180146590
// size=6 thunk=false
// signature: undefined vfunc_shared_180146590()
// status: ok


undefined8 vfunc_shared_180146590(void)

{
  return 5;
}


)B180146590",
    "be85a6423a4de571720da3395cca89ddbadaca6327b894d3c1bb6e6fcdb90cf2",
    R"F180146590C()F180146590C",
    R"F180146590D()F180146590D",
    R"F180146590T()F180146590T",
    R"F180146590F(10: return 5;)F180146590F",
    R"F180146590U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180146590U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180146590() noexcept {
    return kFunction_0x180146590;
}

// 0x1801465a0 vfunc_shared_1801465a0
// source: re/dump/decompile/0x1801465a0_vfunc_shared_1801465a0.c
// size: 8 bytes; thunk: false
// body sha256: a57a2f5c4f6bebe567a3760dea12c263ee349ce04d82659316e61dff52ff3df9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801465a0{
    "0x1801465a0",
    "vfunc_shared_1801465a0",
    R"F1801465a0S(undefined vfunc_shared_1801465a0())F1801465a0S",
    R"B1801465a0(// 0x1801465a0  vfunc_shared_1801465a0
// size=8 thunk=false
// signature: undefined vfunc_shared_1801465a0()
// status: ok


char * vfunc_shared_1801465a0(void)

{
  return "net_SetConVar";
}


)B1801465a0",
    "a57a2f5c4f6bebe567a3760dea12c263ee349ce04d82659316e61dff52ff3df9",
    R"F1801465a0C()F1801465a0C",
    R"F1801465a0D()F1801465a0D",
    R"F1801465a0T("net_SetConVar")F1801465a0T",
    R"F1801465a0F(10: return "net_SetConVar";)F1801465a0F",
    R"F1801465a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1801465a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801465a0() noexcept {
    return kFunction_0x1801465a0;
}

// 0x1801465b0 Features_Toolbox_RawSetConVarMessage_vfunc10
// source: re/dump/decompile/0x1801465b0_Features_Toolbox_RawSetConVarMessage_vfunc10.c
// size: 5 bytes; thunk: false
// body sha256: 5d2114dfebeff3b452b23fe08f680cc4cc63c9cd5a6fa5003525228efdd207f7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801465b0{
    "0x1801465b0",
    "Features_Toolbox_RawSetConVarMessage_vfunc10",
    R"F1801465b0S(undefined Features_Toolbox_RawSetConVarMessage_vfunc10())F1801465b0S",
    R"B1801465b0(// 0x1801465b0  Features_Toolbox_RawSetConVarMessage_vfunc10
// size=5 thunk=false
// signature: undefined Features_Toolbox_RawSetConVarMessage_vfunc10()
// status: ok


undefined8 Features_Toolbox_RawSetConVarMessage_vfunc10(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


)B1801465b0",
    "5d2114dfebeff3b452b23fe08f680cc4cc63c9cd5a6fa5003525228efdd207f7",
    R"F1801465b0C()F1801465b0C",
    R"F1801465b0D()F1801465b0D",
    R"F1801465b0T()F1801465b0T",
    R"F1801465b0F(10: return *(undefined8 *)(param_1 + 0x18);)F1801465b0F",
    R"F1801465b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1801465b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801465b0() noexcept {
    return kFunction_0x1801465b0;
}

// 0x1801465c0 Features_Toolbox_RawSetConVarMessage_vfunc00
// source: re/dump/decompile/0x1801465c0_Features_Toolbox_RawSetConVarMessage_vfunc00.c
// size: 47 bytes; thunk: false
// body sha256: 8238a24fd017f66a0aae718cab0d5cf1e30240e03bae22d8cc99193fdeab1018
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801465c0{
    "0x1801465c0",
    "Features_Toolbox_RawSetConVarMessage_vfunc00",
    R"F1801465c0S(undefined Features_Toolbox_RawSetConVarMessage_vfunc00())F1801465c0S",
    R"B1801465c0(// 0x1801465c0  Features_Toolbox_RawSetConVarMessage_vfunc00
// size=47 thunk=false
// signature: undefined Features_Toolbox_RawSetConVarMessage_vfunc00()
// status: ok


undefined8 * Features_Toolbox_RawSetConVarMessage_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_INetMessage;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


)B1801465c0",
    "8238a24fd017f66a0aae718cab0d5cf1e30240e03bae22d8cc99193fdeab1018",
    R"F1801465c0C()F1801465c0C",
    R"F1801465c0D()F1801465c0D",
    R"F1801465c0T()F1801465c0T",
    R"F1801465c0F(11: if ((param_2 & 1) != 0) {
14: return param_1;)F1801465c0F",
    R"F1801465c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1801465c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801465c0() noexcept {
    return kFunction_0x1801465c0;
}

// 0x1801465f0 FUN_1801465f0
// source: re/dump/decompile/0x1801465f0_FUN_1801465f0.c
// size: 16 bytes; thunk: false
// body sha256: ee61bee6aeedaab43856501f3734ef35b4045bbd6faa8468fb84c9d814d8de30
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801465f0{
    "0x1801465f0",
    "FUN_1801465f0",
    R"F1801465f0S(undefined FUN_1801465f0())F1801465f0S",
    R"B1801465f0(// 0x1801465f0  FUN_1801465f0
// size=16 thunk=false
// signature: undefined FUN_1801465f0()
// status: ok


void FUN_1801465f0(undefined8 *param_1)

{
  *param_1 = vftable_INetMessage;
  return;
}


)B1801465f0",
    "ee61bee6aeedaab43856501f3734ef35b4045bbd6faa8468fb84c9d814d8de30",
    R"F1801465f0C()F1801465f0C",
    R"F1801465f0D()F1801465f0D",
    R"F1801465f0T()F1801465f0T",
    R"F1801465f0F(11: return;)F1801465f0F",
    R"F1801465f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1801465f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801465f0() noexcept {
    return kFunction_0x1801465f0;
}

// 0x180146600 Features_Toolbox_RawDisconnectMessage_vfunc01
// source: re/dump/decompile/0x180146600_Features_Toolbox_RawDisconnectMessage_vfunc01.c
// size: 5 bytes; thunk: false
// body sha256: 84c0d14edfcc0ec583af817038e69ca111d6a5bbf7e0e4dfabe73bb97f4ed837
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180146600{
    "0x180146600",
    "Features_Toolbox_RawDisconnectMessage_vfunc01",
    R"F180146600S(undefined Features_Toolbox_RawDisconnectMessage_vfunc01())F180146600S",
    R"B180146600(// 0x180146600  Features_Toolbox_RawDisconnectMessage_vfunc01
// size=5 thunk=false
// signature: undefined Features_Toolbox_RawDisconnectMessage_vfunc01()
// status: ok


void Features_Toolbox_RawDisconnectMessage_vfunc01(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}


)B180146600",
    "84c0d14edfcc0ec583af817038e69ca111d6a5bbf7e0e4dfabe73bb97f4ed837",
    R"F180146600C()F180146600C",
    R"F180146600D()F180146600D",
    R"F180146600T()F180146600T",
    R"F180146600F(11: return;)F180146600F",
    R"F180146600U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180146600U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180146600() noexcept {
    return kFunction_0x180146600;
}

// 0x180146610 Features_Toolbox_RawDisconnectMessage_vfunc02
// source: re/dump/decompile/0x180146610_Features_Toolbox_RawDisconnectMessage_vfunc02.c
// size: 4 bytes; thunk: false
// body sha256: e1fdcea98a34a5c5b799c05f98ef5ed18a08fc00c60c96ad3af8ca13264b1bb3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180146610{
    "0x180146610",
    "Features_Toolbox_RawDisconnectMessage_vfunc02",
    R"F180146610S(undefined Features_Toolbox_RawDisconnectMessage_vfunc02())F180146610S",
    R"B180146610(// 0x180146610  Features_Toolbox_RawDisconnectMessage_vfunc02
// size=4 thunk=false
// signature: undefined Features_Toolbox_RawDisconnectMessage_vfunc02()
// status: ok


void Features_Toolbox_RawDisconnectMessage_vfunc02(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x18) = param_2;
  return;
}


)B180146610",
    "e1fdcea98a34a5c5b799c05f98ef5ed18a08fc00c60c96ad3af8ca13264b1bb3",
    R"F180146610C()F180146610C",
    R"F180146610D()F180146610D",
    R"F180146610T()F180146610T",
    R"F180146610F(11: return;)F180146610F",
    R"F180146610U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180146610U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180146610() noexcept {
    return kFunction_0x180146610;
}

// 0x180146620 Features_Toolbox_RawDisconnectMessage_vfunc05
// source: re/dump/decompile/0x180146620_Features_Toolbox_RawDisconnectMessage_vfunc05.c
// size: 256 bytes; thunk: false
// body sha256: d51b23ce351f4e85ff7b10ec483ee5eaf31c28fbf7e82baa5d9704df6046060b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180146620{
    "0x180146620",
    "Features_Toolbox_RawDisconnectMessage_vfunc05",
    R"F180146620S(undefined Features_Toolbox_RawDisconnectMessage_vfunc05())F180146620S",
    R"B180146620(// 0x180146620  Features_Toolbox_RawDisconnectMessage_vfunc05
// size=256 thunk=false
// signature: undefined Features_Toolbox_RawDisconnectMessage_vfunc05()
// status: ok


undefined8 Features_Toolbox_RawDisconnectMessage_vfunc05(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  sbyte sVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  
  uVar5 = *(uint *)(param_2 + 2);
  if ((int)(*(int *)((longlong)param_2 + 0xc) - uVar5) < 6) {
    *(int *)(param_2 + 2) = *(int *)((longlong)param_2 + 0xc);
    *(undefined1 *)((longlong)param_2 + 0x14) = 1;
  }
  else {
    *(uint *)(param_2 + 2) = uVar5 + 6;
    uVar3 = *(uint *)(*param_2 + ((longlong)(int)uVar5 >> 5) * 4);
    puVar1 = (uint *)(*param_2 + ((longlong)(int)uVar5 >> 5) * 4);
    sVar4 = (sbyte)(uVar5 & 0x1f);
    uVar8 = 1U >> (0x20U - sVar4 & 0x1f) | 1 << (uVar5 & 0x1f);
    uVar5 = 0x1f >> (0x1fU - sVar4 & 0x1f);
    uVar6 = uVar5 & 1;
    puVar1[uVar6] = puVar1[uVar6] ^ (puVar1[uVar6] ^ uVar8) & uVar5;
    *puVar1 = (uVar3 ^ uVar8) & 0x3f << sVar4 ^ uVar3;
  }
  pcVar7 = *(char **)(param_1 + 8);
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    do {
      FUN_180019830(param_2,(int)*pcVar7,8);
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    return 1;
  }
  FUN_180019830(param_2,0,8);
  return 1;
}


)B180146620",
    "d51b23ce351f4e85ff7b10ec483ee5eaf31c28fbf7e82baa5d9704df6046060b",
    R"F180146620C(FUN_180019830)F180146620C",
    R"F180146620D()F180146620D",
    R"F180146620T()F180146620T",
    R"F180146620F(20: if ((int)(*(int *)((longlong)param_2 + 0xc) - uVar5) < 6) {
24: else {
36: if (*(char **)(param_1 + 8) != (char *)0x0) {
37: do {
42: return 1;
45: return 1;)F180146620F",
    R"F180146620U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180146620U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180146620() noexcept {
    return kFunction_0x180146620;
}

// 0x180146720 Features_Toolbox_RawDisconnectMessage_vfunc06
// source: re/dump/decompile/0x180146720_Features_Toolbox_RawDisconnectMessage_vfunc06.c
// size: 5 bytes; thunk: false
// body sha256: c5be86e6e00ecc5bb0f9b9094efc3285d674b549c7fb7cd250a9fafbc1ad91ec
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180146720{
    "0x180146720",
    "Features_Toolbox_RawDisconnectMessage_vfunc06",
    R"F180146720S(undefined Features_Toolbox_RawDisconnectMessage_vfunc06())F180146720S",
    R"B180146720(// 0x180146720  Features_Toolbox_RawDisconnectMessage_vfunc06
// size=5 thunk=false
// signature: undefined Features_Toolbox_RawDisconnectMessage_vfunc06()
// status: ok


undefined1 Features_Toolbox_RawDisconnectMessage_vfunc06(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}


)B180146720",
    "c5be86e6e00ecc5bb0f9b9094efc3285d674b549c7fb7cd250a9fafbc1ad91ec",
    R"F180146720C()F180146720C",
    R"F180146720D()F180146720D",
    R"F180146720T()F180146720T",
    R"F180146720F(10: return *(undefined1 *)(param_1 + 0x18);)F180146720F",
    R"F180146720U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180146720U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180146720() noexcept {
    return kFunction_0x180146720;
}

// 0x180146730 vfunc_shared_180146730
// source: re/dump/decompile/0x180146730_vfunc_shared_180146730.c
// size: 8 bytes; thunk: false
// body sha256: cdec855b241fba05564f2332fe0baafc7b864c1f186fb863c27b426061b79ce4
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180146730{
    "0x180146730",
    "vfunc_shared_180146730",
    R"F180146730S(undefined vfunc_shared_180146730())F180146730S",
    R"B180146730(// 0x180146730  vfunc_shared_180146730
// size=8 thunk=false
// signature: undefined vfunc_shared_180146730()
// status: ok


char * vfunc_shared_180146730(void)

{
  return "net_Disconnect";
}


)B180146730",
    "cdec855b241fba05564f2332fe0baafc7b864c1f186fb863c27b426061b79ce4",
    R"F180146730C()F180146730C",
    R"F180146730D()F180146730D",
    R"F180146730T("net_Disconnect")F180146730T",
    R"F180146730F(10: return "net_Disconnect";)F180146730F",
    R"F180146730U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180146730U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180146730() noexcept {
    return kFunction_0x180146730;
}

// 0x180146740 Features_Toolbox_RawDisconnectMessage_vfunc10
// source: re/dump/decompile/0x180146740_Features_Toolbox_RawDisconnectMessage_vfunc10.c
// size: 5 bytes; thunk: false
// body sha256: c978307fd0156cd95a273f870408534dc7121399fb642f14db34dfae5d778555
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180146740{
    "0x180146740",
    "Features_Toolbox_RawDisconnectMessage_vfunc10",
    R"F180146740S(undefined Features_Toolbox_RawDisconnectMessage_vfunc10())F180146740S",
    R"B180146740(// 0x180146740  Features_Toolbox_RawDisconnectMessage_vfunc10
// size=5 thunk=false
// signature: undefined Features_Toolbox_RawDisconnectMessage_vfunc10()
// status: ok


undefined8 Features_Toolbox_RawDisconnectMessage_vfunc10(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


)B180146740",
    "c978307fd0156cd95a273f870408534dc7121399fb642f14db34dfae5d778555",
    R"F180146740C()F180146740C",
    R"F180146740D()F180146740D",
    R"F180146740T()F180146740T",
    R"F180146740F(10: return *(undefined8 *)(param_1 + 0x10);)F180146740F",
    R"F180146740U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180146740U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180146740() noexcept {
    return kFunction_0x180146740;
}

// 0x180146750 Features_Toolbox_RawDisconnectMessage_vfunc00
// source: re/dump/decompile/0x180146750_Features_Toolbox_RawDisconnectMessage_vfunc00.c
// size: 47 bytes; thunk: false
// body sha256: 0fef16aff0ee1af99faf88b8a7db366619e6c617b9122415fa1e39c085daec60
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180146750{
    "0x180146750",
    "Features_Toolbox_RawDisconnectMessage_vfunc00",
    R"F180146750S(undefined Features_Toolbox_RawDisconnectMessage_vfunc00())F180146750S",
    R"B180146750(// 0x180146750  Features_Toolbox_RawDisconnectMessage_vfunc00
// size=47 thunk=false
// signature: undefined Features_Toolbox_RawDisconnectMessage_vfunc00()
// status: ok


undefined8 * Features_Toolbox_RawDisconnectMessage_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_INetMessage;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


)B180146750",
    "0fef16aff0ee1af99faf88b8a7db366619e6c617b9122415fa1e39c085daec60",
    R"F180146750C()F180146750C",
    R"F180146750D()F180146750D",
    R"F180146750T()F180146750T",
    R"F180146750F(11: if ((param_2 & 1) != 0) {
14: return param_1;)F180146750F",
    R"F180146750U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180146750U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180146750() noexcept {
    return kFunction_0x180146750;
}

// 0x180146780 FUN_180146780
// source: re/dump/decompile/0x180146780_FUN_180146780.c
// size: 170 bytes; thunk: false
// body sha256: 9a3ab049335b180721194da0f0fcf1def394a193a9b3e2c238ccd8858fdab587
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180146780{
    "0x180146780",
    "FUN_180146780",
    R"F180146780S(undefined FUN_180146780())F180146780S",
    R"B180146780(// 0x180146780  FUN_180146780
// size=170 thunk=false
// signature: undefined FUN_180146780()
// status: ok


ulonglong FUN_180146780(longlong param_1)

{
  void *lp;
  BOOL BVar1;
  undefined8 in_RAX;
  uint7 uVar3;
  undefined8 *lp_00;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar2;
  
  uVar3 = (uint7)((ulonglong)in_RAX >> 8);
  if (param_1 == 0) {
    return (ulonglong)uVar3 << 8;
  }
  if (DAT_1803fa668 == (longlong *)0x0) {
    uVar2 = (ulonglong)uVar3 << 8;
  }
  else {
    lp_00 = (undefined8 *)(**(code **)(*DAT_1803fa668 + 0x240))();
    uVar2 = 0;
    if (lp_00 != (undefined8 *)0x0) {
      BVar1 = IsBadReadPtr(lp_00,8);
      uVar2 = CONCAT44(extraout_var,BVar1);
      if (BVar1 == 0) {
        lp = (void *)*lp_00;
        if (lp != (void *)0x0) {
          BVar1 = IsBadReadPtr(lp,0x148);
          uVar2 = CONCAT44(extraout_var_00,BVar1);
          if (BVar1 == 0) {
            uVar2 = 0;
            if (*(code **)((longlong)lp + 0x140) != (code *)0x0) {
              uVar2 = (**(code **)((longlong)lp + 0x140))(lp_00,param_1,1,0);
              return uVar2;
            }
          }
        }
        return uVar2 & 0xffffffffffffff00;
      }
    }
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  return uVar2;
}


)B180146780",
    "9a3ab049335b180721194da0f0fcf1def394a193a9b3e2c238ccd8858fdab587",
    R"F180146780C()F180146780C",
    R"F180146780D(DAT_1803fa668)F180146780D",
    R"F180146780T()F180146780T",
    R"F180146780F(20: if (param_1 == 0) {
21: return (ulonglong)uVar3 << 8;
23: if (DAT_1803fa668 == (longlong *)0x0) {
26: else {
29: if (lp_00 != (undefined8 *)0x0) {
32: if (BVar1 == 0) {
34: if (lp != (void *)0x0) {
37: if (BVar1 == 0) {
39: if (*(code **)((longlong)lp + 0x140) != (code *)0x0) {
41: return uVar2;
45: return uVar2 & 0xffffffffffffff00;
50: return uVar2;)F180146780F",
    R"F180146780U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 27: lp_00 = (undefined8 *)(**(code **)(*DAT_1803fa668 + 0x240))();.
TODO: resolve the indirect call in body 39: if (*(code **)((longlong)lp + 0x140) != (code *)0x0) {.
TODO: resolve the indirect call in body 40: uVar2 = (**(code **)((longlong)lp + 0x140))(lp_00,param_1,1,0);.)F180146780U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180146780() noexcept {
    return kFunction_0x180146780;
}

// 0x180146830 FUN_180146830
// source: re/dump/decompile/0x180146830_FUN_180146830.c
// size: 92 bytes; thunk: false
// body sha256: e35f70a926f610d0b7980985b96f7847be071ff348c8b3a57013a35f2eeb18ad
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180146830{
    "0x180146830",
    "FUN_180146830",
    R"F180146830S(undefined FUN_180146830())F180146830S",
    R"B180146830(// 0x180146830  FUN_180146830
// size=92 thunk=false
// signature: undefined FUN_180146830()
// status: ok


longlong FUN_180146830(char *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((DAT_1803f9250 == (longlong *)0x0) || (param_1 == (char *)0x0)) || (*param_1 == '\0')) {
    lVar3 = 0;
  }
  else {
    lVar1 = (**(code **)(*DAT_1803f9250 + 0x138))(DAT_1803f9250,param_1);
    lVar3 = lVar1;
    if (lVar1 != 0) {
      lVar2 = (**(code **)(*DAT_1803f9250 + 0xe0))(DAT_1803f9250,lVar1);
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = lVar1;
      }
    }
  }
  return lVar3;
}


)B180146830",
    "e35f70a926f610d0b7980985b96f7847be071ff348c8b3a57013a35f2eeb18ad",
    R"F180146830C()F180146830C",
    R"F180146830D(DAT_1803f9250)F180146830D",
    R"F180146830T()F180146830T",
    R"F180146830F(14: if (((DAT_1803f9250 == (longlong *)0x0) || (param_1 == (char *)0x0)) || (*param_1 == '\0')) {
17: else {
20: if (lVar1 != 0) {
23: if (lVar2 != 0) {
28: return lVar3;)F180146830F",
    R"F180146830U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9250.
TODO: resolve the indirect call in body 18: lVar1 = (**(code **)(*DAT_1803f9250 + 0x138))(DAT_1803f9250,param_1);.
TODO: resolve the indirect call in body 21: lVar2 = (**(code **)(*DAT_1803f9250 + 0xe0))(DAT_1803f9250,lVar1);.)F180146830U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180146830() noexcept {
    return kFunction_0x180146830;
}

// 0x180146890 FUN_180146890
// source: re/dump/decompile/0x180146890_FUN_180146890.c
// size: 144 bytes; thunk: false
// body sha256: 9540fbf9c067607b3526def693af4938f65acddd4009a290bf2aa831006b808a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180146890{
    "0x180146890",
    "FUN_180146890",
    R"F180146890S(undefined FUN_180146890())F180146890S",
    R"B180146890(// 0x180146890  FUN_180146890
// size=144 thunk=false
// signature: undefined FUN_180146890()
// status: ok


undefined8 FUN_180146890(char *param_1,longlong *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_2 = 0;
  *param_3 = -1;
  if (((DAT_1803f9250 != (longlong *)0x0) && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
    lVar2 = FUN_180146830();
    *param_2 = lVar2;
    if (lVar2 != 0) {
      iVar1 = (**(code **)(*DAT_1803f9250 + 0x10))(DAT_1803f9250,param_1);
      if (-1 < iVar1) {
        lVar2 = *param_2;
        lVar3 = (**(code **)(*DAT_1803f9250 + 8))(DAT_1803f9250,iVar1);
        if (lVar3 == lVar2) {
          *param_3 = iVar1;
        }
      }
      return 1;
    }
  }
  return 0;
}


)B180146890",
    "9540fbf9c067607b3526def693af4938f65acddd4009a290bf2aa831006b808a",
    R"F180146890C(FUN_180146830)F180146890C",
    R"F180146890D(DAT_1803f9250)F180146890D",
    R"F180146890T()F180146890T",
    R"F180146890F(16: if (((DAT_1803f9250 != (longlong *)0x0) && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
19: if (lVar2 != 0) {
21: if (-1 < iVar1) {
24: if (lVar3 == lVar2) {
28: return 1;
31: return 0;)F180146890F",
    R"F180146890U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9250.
TODO: resolve the indirect call in body 20: iVar1 = (**(code **)(*DAT_1803f9250 + 0x10))(DAT_1803f9250,param_1);.
TODO: resolve the indirect call in body 23: lVar3 = (**(code **)(*DAT_1803f9250 + 8))(DAT_1803f9250,iVar1);.)F180146890U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180146890() noexcept {
    return kFunction_0x180146890;
}

// 0x180146930 FUN_180146930
// source: re/dump/decompile/0x180146930_FUN_180146930.c
// size: 52 bytes; thunk: false
// body sha256: cd506c77f5fdc8b225f70d81f8064cd5724231b1103c0a225b36419097d11165
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180146930{
    "0x180146930",
    "FUN_180146930",
    R"F180146930S(undefined FUN_180146930())F180146930S",
    R"B180146930(// 0x180146930  FUN_180146930
// size=52 thunk=false
// signature: undefined FUN_180146930()
// status: ok


undefined8 FUN_180146930(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((DAT_1803fa358 == (longlong *)0x0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*DAT_1803fa358 + 0x118))(DAT_1803fa358,param_1,&DAT_1803589e8,param_2);
  }
  return uVar1;
}


)B180146930",
    "cd506c77f5fdc8b225f70d81f8064cd5724231b1103c0a225b36419097d11165",
    R"F180146930C()F180146930C",
    R"F180146930D(DAT_1803589e8
DAT_1803fa358)F180146930D",
    R"F180146930T()F180146930T",
    R"F180146930F(12: if ((DAT_1803fa358 == (longlong *)0x0) || (param_1 == 0)) {
15: else {
18: return uVar1;)F180146930F",
    R"F180146930U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803589e8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa358.
TODO: resolve the indirect call in body 16: uVar1 = (**(code **)(*DAT_1803fa358 + 0x118))(DAT_1803fa358,param_1,&DAT_1803589e8,param_2);.)F180146930U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180146930() noexcept {
    return kFunction_0x180146930;
}

// 0x180146970 FUN_180146970
// source: re/dump/decompile/0x180146970_FUN_180146970.c
// size: 42 bytes; thunk: false
// body sha256: 3ec37662fccf8dce4d5d8417c3db0c9082d261a4c294fd07d596514375d177f9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180146970{
    "0x180146970",
    "FUN_180146970",
    R"F180146970S(undefined FUN_180146970())F180146970S",
    R"B180146970(// 0x180146970  FUN_180146970
// size=42 thunk=false
// signature: undefined FUN_180146970()
// status: ok


undefined8 FUN_180146970(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_1803fa358 == (longlong *)0x0) {
    return 0;
  }
  uVar1 = (**(code **)(*DAT_1803fa358 + 0x100))(DAT_1803fa358,param_1);
  return uVar1;
}


)B180146970",
    "3ec37662fccf8dce4d5d8417c3db0c9082d261a4c294fd07d596514375d177f9",
    R"F180146970C()F180146970C",
    R"F180146970D(DAT_1803fa358)F180146970D",
    R"F180146970T()F180146970T",
    R"F180146970F(12: if (DAT_1803fa358 == (longlong *)0x0) {
13: return 0;
16: return uVar1;)F180146970F",
    R"F180146970U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa358.
TODO: resolve the indirect call in body 15: uVar1 = (**(code **)(*DAT_1803fa358 + 0x100))(DAT_1803fa358,param_1);.)F180146970U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180146970() noexcept {
    return kFunction_0x180146970;
}

// 0x1801469a0 FUN_1801469a0
// source: re/dump/decompile/0x1801469a0_FUN_1801469a0.c
// size: 42 bytes; thunk: false
// body sha256: b706c8b1fcc2159423bce739dae01f08cbfa208d74b73dd6d9e36a01b619b4ef
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801469a0{
    "0x1801469a0",
    "FUN_1801469a0",
    R"F1801469a0S(undefined FUN_1801469a0())F1801469a0S",
    R"B1801469a0(// 0x1801469a0  FUN_1801469a0
// size=42 thunk=false
// signature: undefined FUN_1801469a0()
// status: ok


ulonglong FUN_1801469a0(undefined8 param_1)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (DAT_1803fa358 == (longlong *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar1 = (**(code **)(*DAT_1803fa358 + 0x108))(DAT_1803fa358,param_1);
  return uVar1;
}


)B1801469a0",
    "b706c8b1fcc2159423bce739dae01f08cbfa208d74b73dd6d9e36a01b619b4ef",
    R"F1801469a0C()F1801469a0C",
    R"F1801469a0D(DAT_1803fa358)F1801469a0D",
    R"F1801469a0T()F1801469a0T",
    R"F1801469a0F(13: if (DAT_1803fa358 == (longlong *)0x0) {
14: return in_RAX & 0xffffffffffffff00;
17: return uVar1;)F1801469a0F",
    R"F1801469a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa358.
TODO: resolve the indirect call in body 16: uVar1 = (**(code **)(*DAT_1803fa358 + 0x108))(DAT_1803fa358,param_1);.)F1801469a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801469a0() noexcept {
    return kFunction_0x1801469a0;
}

// 0x1801469d0 FUN_1801469d0
// source: re/dump/decompile/0x1801469d0_FUN_1801469d0.c
// size: 35 bytes; thunk: false
// body sha256: b25ab3c1ed5163a1a39dd8ec9627d53c6f20421ad501894bbfd0916ef1c94803
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801469d0{
    "0x1801469d0",
    "FUN_1801469d0",
    R"F1801469d0S(undefined FUN_1801469d0())F1801469d0S",
    R"B1801469d0(// 0x1801469d0  FUN_1801469d0
// size=35 thunk=false
// signature: undefined FUN_1801469d0()
// status: ok


void FUN_1801469d0(undefined8 param_1)

{
  if (DAT_1803fa358 != (longlong *)0x0) {
    (**(code **)(*DAT_1803fa358 + 0x110))(DAT_1803fa358,param_1);
  }
  return;
}


)B1801469d0",
    "b25ab3c1ed5163a1a39dd8ec9627d53c6f20421ad501894bbfd0916ef1c94803",
    R"F1801469d0C()F1801469d0C",
    R"F1801469d0D(DAT_1803fa358)F1801469d0D",
    R"F1801469d0T()F1801469d0T",
    R"F1801469d0F(10: if (DAT_1803fa358 != (longlong *)0x0) {
13: return;)F1801469d0F",
    R"F1801469d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa358.
TODO: resolve the indirect call in body 11: (**(code **)(*DAT_1803fa358 + 0x110))(DAT_1803fa358,param_1);.)F1801469d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801469d0() noexcept {
    return kFunction_0x1801469d0;
}

// 0x180146a00 FUN_180146a00
// source: re/dump/decompile/0x180146a00_FUN_180146a00.c
// size: 1823 bytes; thunk: false
// body sha256: 62a6dfecd2056e160bb7e165c669c7f605f0fb269d77624cd183f56445f2bf4a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180146a00{
    "0x180146a00",
    "FUN_180146a00",
    R"F180146a00S(undefined FUN_180146a00())F180146a00S",
    R"B180146a00(// 0x180146a00  FUN_180146a00
// size=1823 thunk=false
// signature: undefined FUN_180146a00()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_180146a00(void)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  void *_Dst;
  undefined8 *puVar9;
  size_t sVar10;
  longlong *plVar11;
  undefined8 *******pppppppuVar12;
  undefined8 **ppuVar13;
  undefined8 *puVar14;
  char *pcVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  void *pvVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  longlong lVar23;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [64];
  undefined4 local_178;
  undefined8 ******local_170;
  undefined8 ******ppppppuStack_168;
  ulonglong local_160;
  undefined8 local_158;
  undefined8 **local_138;
  undefined *local_130;
  undefined1 local_128 [32];
  undefined8 local_108;
  undefined8 *local_100;
  undefined8 *puStack_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 *puStack_e0;
  undefined8 *local_d8;
  undefined8 *******local_d0;
  undefined8 uStack_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 *******local_b0;
  longlong lStack_a8;
  ulonglong local_a0;
  ulonglong uStack_98;
  undefined1 local_90 [16];
  longlong local_80;
  undefined8 *******local_70 [3];
  ulonglong local_58;
  ulonglong local_50;
  
  puVar17 = auStack_1b8;
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_1b8;
  pvVar20 = (void *)0x0;
  local_178 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_b8 = 0xf;
  local_d0 = (undefined8 *******)0x0;
  local_130 = &DAT_1803e8400;
  iVar7 = _Mtx_lock(&DAT_1803e8400);
  if (iVar7 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e844c == 0x7fffffff) {
    DAT_1803e844c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  pcVar15 = s_models_player_1803ea2d8;
  if (0xf < DAT_1803ea2f0) {
    pcVar15 = (char *)s_models_player_1803ea2d8._0_8_;
  }
  FUN_180212700(&local_d0,pcVar15,DAT_1803ea2e8);
  _Mtx_unlock(&DAT_1803e8400);
  uVar2 = local_c0;
  while (uVar2 != 0) {
    pppppppuVar12 = &local_d0;
    if (0xf < local_b8) {
      pppppppuVar12 = local_d0;
    }
    local_c0 = uVar2 - 1;
    if (*(char *)(local_c0 + (longlong)pppppppuVar12) != '/') {
      pppppppuVar12 = &local_d0;
      if (0xf < local_b8) {
        pppppppuVar12 = local_d0;
      }
      if (*(char *)(local_c0 + (longlong)pppppppuVar12) != '\\') break;
    }
    pppppppuVar12 = &local_d0;
    if (0xf < local_b8) {
      pppppppuVar12 = local_d0;
    }
    *(undefined1 *)(local_c0 + (longlong)pppppppuVar12) = 0;
    uVar2 = local_c0;
  }
  local_100 = (undefined8 *)0x0;
  puStack_f8 = (undefined8 *)0x0;
  local_f0 = 0;
  local_e8 = (undefined8 *)0x0;
  puStack_e0 = (undefined8 *)0x0;
  local_d8 = (undefined8 *)0x0;
  local_170 = (undefined8 ******)0x0;
  ppppppuStack_168 = (undefined8 ******)0x0;
  local_160 = 0;
  local_158 = 0;
  pppppppuVar12 = &local_d0;
  if (0xf < local_b8) {
    pppppppuVar12 = local_d0;
  }
  local_c0 = uVar2;
  if (0x7fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  if (uVar2 < 0x10) {
    local_158 = 0xf;
    local_170 = *pppppppuVar12;
    ppppppuStack_168 = pppppppuVar12[1];
    puVar17 = auStack_1b8;
    local_160 = uVar2;
  }
  else {
    uVar18 = uVar2 | 0xf;
    if (uVar18 < 0x8000000000000000) goto LAB_180146bc6;
    uVar18 = 0x7fffffffffffffff;
    uVar8 = 0x8000000000000027;
    puVar17 = auStack_1b8;
    while( true ) {
      *(undefined8 *)(puVar17 + -8) = 0x180146bb7;
      lVar23 = FUN_1802d8350(uVar8);
      if (lVar23 != 0) break;
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(5);
      puVar17 = puVar17 + 8;
LAB_180146bc6:
      if (uVar18 < 0x16) {
        uVar18 = 0x16;
      }
      _Dst = pvVar20;
      if (uVar18 == 0xffffffffffffffff) goto LAB_180146c0b;
      if (uVar18 + 1 < 0x1000) {
        *(undefined8 *)(puVar17 + -8) = 0x180146c0b;
        _Dst = (void *)FUN_1802d8350();
        goto LAB_180146c0b;
      }
      uVar8 = uVar18 + 0x28;
      if (uVar8 <= uVar18 + 1) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar17 + -8) = &UNK_18014711b;
        FUN_180012fe0();
      }
    }
    _Dst = (void *)(lVar23 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar23;
LAB_180146c0b:
    *(void **)(puVar17 + 0x48) = _Dst;
    *(ulonglong *)(puVar17 + 0x58) = uVar2;
    *(ulonglong *)(puVar17 + 0x60) = uVar18;
    *(undefined8 *)(puVar17 + -8) = 0x180146c29;
    memcpy(_Dst,pppppppuVar12,uVar2 + 1);
  }
  local_e8 = (undefined8 *)0x0;
  puStack_e0 = (undefined8 *)0x0;
  local_d8 = (undefined8 *)0x0;
  *(undefined8 *)(puVar17 + -8) = 0x180146c40;
  puVar9 = (undefined8 *)FUN_18020dbc0(0,1);
  local_d8 = puVar9 + 4;
  local_138 = &local_e8;
  puVar19 = puVar17 + 0x48;
  local_e8 = puVar9;
  puStack_e0 = puVar9;
  *(undefined8 *)(puVar17 + 0x68) = 0;
  *(undefined8 *)(puVar17 + 0x70) = 0;
  *(undefined8 *)(puVar17 + 0x78) = 0;
  *(undefined8 **)(puVar17 + 0x68) = puVar9;
  *(undefined8 **)(puVar17 + 0x70) = puVar9;
  *(undefined8 ***)(puVar17 + 0x78) = &local_e8;
  do {
    *(undefined8 *)(puVar17 + -8) = 0x180146c8e;
    FUN_18016d4c0(puVar9,puVar19);
    puVar9 = puVar9 + 4;
    *(undefined8 **)(puVar17 + 0x70) = puVar9;
    puVar19 = puVar19 + 0x20;
  } while (puVar19 != puVar17 + 0x68);
  *(undefined8 **)(puVar17 + 0x68) = puVar9;
  local_138 = (undefined8 **)0x0;
  puStack_e0 = puVar9;
  *(undefined8 *)(puVar17 + -8) = 0x180146cce;
  _eh_vector_destructor_iterator_
            (puVar17 + 0x48,0x20,1,Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09);
  if ((longlong)puStack_e0 - (longlong)local_e8 >> 5 != 0) {
    do {
      if ((0x1fff < (ulonglong)((longlong)puStack_f8 - (longlong)local_100 >> 5)) ||
         (0x3ff < (ulonglong)((longlong)puStack_e0 - (longlong)local_e8 >> 5))) break;
      puVar9 = local_e8 + (longlong)pvVar20 * 4;
      *(undefined8 *)(puVar17 + -8) = 0x180146d45;
      FUN_18016d4c0(local_90,puVar9);
      *(undefined8 *)(puVar17 + -8) = 0x180146d5a;
      FUN_18002cfb0(local_70,local_90,&DAT_18035d8b0);
      local_108 = 0;
      pppppppuVar12 = local_70;
      if (0xf < local_58) {
        pppppppuVar12 = local_70[0];
      }
      *(undefined8 *)(puVar17 + -8) = 0x180146d76;
      pcVar15 = (char *)FUN_180146930(pppppppuVar12,&local_108);
      uVar3 = local_108;
      lVar23 = local_80;
      while ((local_108 = uVar3, local_80 = lVar23, pcVar15 != (char *)0x0 &&
             ((ulonglong)((longlong)puStack_f8 - (longlong)local_100 >> 5) < 0x2000))) {
        if ((*pcVar15 != '\0') && (*pcVar15 != '.')) {
          if (lVar23 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            *(undefined8 *)(puVar17 + -8) = 0x180147115;
            FUN_1800130a0();
          }
          *(undefined8 *)(puVar17 + 0x30) = 1;
          *(undefined **)(puVar17 + 0x28) = &DAT_18034f6d4;
          *(longlong *)(puVar17 + 0x20) = lVar23;
          *(undefined8 *)(puVar17 + -8) = 0x180146dec;
          FUN_18020e930(local_128);
          *(undefined4 *)(puVar17 + 0x40) = 1;
          *(undefined8 *)(puVar17 + -8) = 0x180146dfb;
          sVar10 = strlen(pcVar15);
          *(undefined8 *)(puVar17 + -8) = 0x180146e0a;
          plVar11 = (longlong *)FUN_18021aef0(local_128,pcVar15,sVar10);
          local_b0 = (undefined8 *******)*plVar11;
          lStack_a8 = plVar11[1];
          local_a0 = plVar11[2];
          uStack_98 = plVar11[3];
          plVar11[2] = 0;
          plVar11[3] = 0xf;
          *(undefined1 *)plVar11 = 0;
          *(undefined4 *)(puVar17 + 0x40) = 3;
          *(undefined4 *)(puVar17 + 0x40) = 2;
          *(undefined8 *)(puVar17 + -8) = 0x180146e4e;
          FUN_18020e450(local_128);
          uVar3 = local_108;
          *(undefined8 *)(puVar17 + -8) = 0x180146e57;
          cVar6 = FUN_1801469a0(uVar3);
          if (cVar6 == '\0') {
            if (4 < local_a0) {
              pppppppuVar12 = &local_b0;
              if (0xf < uStack_98) {
                pppppppuVar12 = local_b0;
              }
              lVar23 = local_a0 - 4;
              *(undefined8 *)(puVar17 + -8) = 0x180146ea1;
              iVar7 = _stricmp((char *)(lVar23 + (longlong)pppppppuVar12),".mdl");
              if (iVar7 == 0) {
                ppuVar13 = &local_100;
                goto LAB_180146ea9;
              }
            }
          }
          else if ((ulonglong)((longlong)puStack_e0 - (longlong)local_e8 >> 5) < 0x400) {
            ppuVar13 = &local_e8;
LAB_180146ea9:
            *(undefined8 *)(puVar17 + -8) = 0x180146eb2;
            FUN_180214300(ppuVar13,&local_b0);
          }
          *(undefined4 *)(puVar17 + 0x40) = 0;
          *(undefined8 *)(puVar17 + -8) = 0x180146ec2;
          FUN_18020e450(&local_b0);
        }
        uVar3 = local_108;
        *(undefined8 *)(puVar17 + -8) = 0x180146ecb;
        pcVar15 = (char *)FUN_180146970(uVar3);
        uVar3 = local_108;
        lVar23 = local_80;
      }
      pvVar20 = (void *)((longlong)pvVar20 + 1);
      *(undefined8 *)(puVar17 + -8) = 0x180146ee3;
      FUN_1801469d0(uVar3);
      *(undefined8 *)(puVar17 + -8) = 0x180146eed;
      FUN_18020e450(local_70);
      *(undefined8 *)(puVar17 + -8) = 0x180146ef7;
      FUN_18020e450(local_90);
    } while (pvVar20 < (void *)((longlong)puStack_e0 - (longlong)local_e8 >> 5));
  }
  puVar21 = puStack_f8;
  puVar9 = local_100;
  lVar23 = (longlong)puStack_f8 - (longlong)local_100;
  *(undefined8 *)(puVar17 + -8) = 0x180146f2f;
  FUN_180220450(puVar9,puVar21,lVar23 >> 5,0);
  puVar21 = puStack_f8;
  puVar16 = puStack_f8;
  puVar9 = local_100;
  if (local_100 != puStack_f8) {
    do {
      do {
        puVar22 = puVar9;
        puVar9 = puVar22 + 4;
        puVar16 = puStack_f8;
        if (puVar9 == puVar21) goto LAB_18014703c;
        puVar16 = puVar9;
        if (0xf < (ulonglong)puVar9[3]) {
          puVar16 = (undefined8 *)*puVar9;
        }
        sVar10 = puVar22[2];
        puVar14 = puVar22;
        if (0xf < (ulonglong)puVar22[3]) {
          puVar14 = (undefined8 *)*puVar22;
        }
      } while (sVar10 != puVar9[2]);
      puVar4 = puVar21;
      if (sVar10 == 0) break;
      *(undefined8 *)(puVar17 + -8) = 0x180146f85;
      iVar7 = memcmp(puVar14,puVar16,sVar10);
    } while (iVar7 != 0);
joined_r0x000180146fa1:
    puVar9 = (undefined8 *)((longlong)puVar9 + 0x20);
    if (puVar9 != puVar21) {
      puVar16 = puVar9;
      if (0xf < (ulonglong)puVar9[3]) {
        puVar16 = (undefined8 *)*puVar9;
      }
      sVar10 = puVar22[2];
      puVar14 = puVar22;
      if (0xf < (ulonglong)puVar22[3]) {
        puVar14 = (undefined8 *)*puVar22;
      }
      if (sVar10 == puVar9[2]) goto code_r0x000180146fcb;
      goto LAB_180146fd9;
    }
    puVar22 = puVar22 + 4;
    puVar16 = puStack_f8;
    puVar9 = puVar4;
    if (puVar22 != puVar21) {
      for (; puVar14 = puVar22, puVar21 != puVar4; puVar21 = puVar21 + 4) {
        *(undefined8 *)(puVar17 + -8) = 0x18014700e;
        FUN_18020e8a0(puVar22,puVar21);
        puVar22 = puVar22 + 4;
        puVar9 = puStack_f8;
      }
      for (; puVar16 = puVar22, puVar14 != puVar9; puVar14 = puVar14 + 4) {
        *(undefined8 *)(puVar17 + -8) = 0x18014702f;
        FUN_18020e450(puVar14);
      }
    }
  }
LAB_18014703c:
  puStack_f8 = puVar16;
  local_130 = &DAT_1803e8400;
  *(undefined8 *)(puVar17 + -8) = 0x180147049;
  iVar7 = _Mtx_lock(&DAT_1803e8400);
  if (iVar7 != 0) {
    *(undefined8 *)(puVar17 + -8) = 0x180147058;
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e844c == 0x7fffffff) {
    DAT_1803e844c = 0x7ffffffe;
    *(undefined8 *)(puVar17 + -8) = 0x180147079;
    std::_Throw_Cpp_error(6);
  }
  uVar5 = DAT_1803e9f00;
  uVar3 = DAT_1803e9ef8;
  puVar9 = DAT_1803e9ef0;
  DAT_1803e9ef0 = local_100;
  local_100 = puVar9;
  DAT_1803e9ef8 = puStack_f8;
  puStack_f8 = (undefined8 *)uVar3;
  DAT_1803e9f00 = local_f0;
  local_f0 = uVar5;
  *(undefined8 *)(puVar17 + -8) = 0x1801470c5;
  _Mtx_unlock(&DAT_1803e8400);
  LOCK();
  DAT_180409a6c = DAT_180409a6c + 1;
  UNLOCK();
  DAT_180409b80 = 0;
  *(undefined8 *)(puVar17 + -8) = 0x1801470dc;
  FUN_18020d5c0(&local_e8);
  *(undefined8 *)(puVar17 + -8) = 0x1801470e6;
  FUN_18020d5c0(&local_100);
  *(undefined8 *)(puVar17 + -8) = 0x1801470f0;
  FUN_18020e450(&local_d0);
  *(undefined8 *)(puVar17 + -8) = 0x1801470fc;
  return;
code_r0x000180146fcb:
  puVar4 = puStack_f8;
  if (sVar10 != 0) {
    *(undefined8 *)(puVar17 + -8) = 0x180146fd5;
    iVar7 = memcmp(puVar14,puVar16,sVar10);
    puVar4 = puStack_f8;
    if (iVar7 != 0) {
LAB_180146fd9:
      puVar22 = puVar22 + 4;
      *(undefined8 *)(puVar17 + -8) = 0x180146fe8;
      FUN_18020e8a0(puVar22,puVar9);
      puVar4 = puStack_f8;
    }
  }
  goto joined_r0x000180146fa1;
}


)B180146a00",
    "62a6dfecd2056e160bb7e165c669c7f605f0fb269d77624cd183f56445f2bf4a",
    R"F180146a00C(FUN_180012fe0
FUN_1800130a0
FUN_18002cfb0
FUN_180146930
FUN_180146970
FUN_1801469a0
FUN_1801469d0
FUN_18016d4c0
FUN_18020d5c0
FUN_18020dbc0
FUN_18020e450
FUN_18020e8a0
FUN_18020e930
FUN_180212700
FUN_180214300
FUN_18021aef0
FUN_180220450
FUN_1802d8350)F180146a00C",
    R"F180146a00D(LAB_180146bc6
LAB_180146c0b
LAB_180146ea9
LAB_180146fd9
LAB_18014703c
UNK_18014711b
DAT_18034f6d4
DAT_18035d8b0
DAT_1803da4c0
DAT_1803e8400
DAT_1803e844c
DAT_1803e9ef0
DAT_1803e9ef8
DAT_1803e9f00
DAT_1803ea2e8
DAT_1803ea2f0
DAT_180409a6c
DAT_180409b80)F180146a00D",
    R"F180146a00T(".mdl")F180146a00T",
    R"F180146a00F(78: if (iVar7 != 0) {
82: return;
84: if (DAT_1803e844c == 0x7fffffff) {
89: if (0xf < DAT_1803ea2f0) {
95: while (uVar2 != 0) {
97: if (0xf < local_b8) {
101: if (*(char *)(local_c0 + (longlong)pppppppuVar12) != '/') {
103: if (0xf < local_b8) {
106: if (*(char *)(local_c0 + (longlong)pppppppuVar12) != '\\') break;
109: if (0xf < local_b8) {
126: if (0xf < local_b8) {
130: if (0x7fffffffffffffff < uVar2) {
134: if (uVar2 < 0x10) {
141: else {
143: if (uVar18 < 0x8000000000000000) goto LAB_180146bc6;
147: while( true ) {
150: if (lVar23 != 0) break;
154: LAB_180146bc6:
155: if (uVar18 < 0x16) {
159: if (uVar18 == 0xffffffffffffffff) goto LAB_180146c0b;
160: if (uVar18 + 1 < 0x1000) {
163: goto LAB_180146c0b;
166: if (uVar8 <= uVar18 + 1) {
174: LAB_180146c0b:
197: do {
210: if ((longlong)puStack_e0 - (longlong)local_e8 >> 5 != 0) {
211: do {
212: if ((0x1fff < (ulonglong)((longlong)puStack_f8 - (longlong)local_100 >> 5)) ||
221: if (0xf < local_58) {
228: while ((local_108 = uVar3, local_80 = lVar23, pcVar15 != (char *)0x0 &&
230: if ((*pcVar15 != '\0') && (*pcVar15 != '.')) {
231: if (lVar23 == 0x7fffffffffffffff) {
260: if (cVar6 == '\0') {
261: if (4 < local_a0) {
263: if (0xf < uStack_98) {
269: if (iVar7 == 0) {
271: goto LAB_180146ea9;
275: else if ((ulonglong)((longlong)puStack_e0 - (longlong)local_e8 >> 5) < 0x400) {
277: LAB_180146ea9:
308: if (local_100 != puStack_f8) {
309: do {
310: do {
314: if (puVar9 == puVar21) goto LAB_18014703c;
316: if (0xf < (ulonglong)puVar9[3]) {
321: if (0xf < (ulonglong)puVar22[3]) {
326: if (sVar10 == 0) break;
332: if (puVar9 != puVar21) {
334: if (0xf < (ulonglong)puVar9[3]) {
339: if (0xf < (ulonglong)puVar22[3]) {
342: if (sVar10 == puVar9[2]) goto code_r0x000180146fcb;
343: goto LAB_180146fd9;
348: if (puVar22 != puVar21) {
349: for (; puVar14 = puVar22, puVar21 != puVar4; puVar21 = puVar21 + 4) {
355: for (; puVar16 = puVar22, puVar14 != puVar9; puVar14 = puVar14 + 4) {
361: LAB_18014703c:
366: if (iVar7 != 0) {
371: return;
373: if (DAT_1803e844c == 0x7fffffff) {
400: return;
403: if (sVar10 != 0) {
407: if (iVar7 != 0) {
408: LAB_180146fd9:
415: goto joined_r0x000180146fa1;)F180146a00F",
    R"F180146a00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180146bc6.
TODO: recover the declaration, type and value for global/data reference LAB_180146c0b.
TODO: recover the declaration, type and value for global/data reference LAB_180146ea9.
TODO: recover the declaration, type and value for global/data reference LAB_180146fd9.
TODO: recover the declaration, type and value for global/data reference LAB_18014703c.
TODO: recover the declaration, type and value for global/data reference UNK_18014711b.
TODO: recover the declaration, type and value for global/data reference DAT_18034f6d4.
TODO: recover the declaration, type and value for global/data reference DAT_18035d8b0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8400.
TODO: recover the declaration, type and value for global/data reference DAT_1803e844c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9ef0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9ef8.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f00.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea2e8.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea2f0.
TODO: recover the declaration, type and value for global/data reference DAT_180409a6c.
TODO: recover the declaration, type and value for global/data reference DAT_180409b80.
TODO: resolve the indirect call in body 80: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 81: (*pcVar1)();.
TODO: resolve the indirect call in body 151: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 152: (*pcVar1)(5);.
TODO: resolve the indirect call in body 369: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 370: (*pcVar1)();.)F180146a00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180146a00() noexcept {
    return kFunction_0x180146a00;
}

// 0x180147130 FUN_180147130
// source: re/dump/decompile/0x180147130_FUN_180147130.c
// size: 1196 bytes; thunk: false
// body sha256: 5b1030e1a72c57d16c43ceea1504a57214c4b9a5cc6cd7a72c4b98f8a3ed26f7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180147130{
    "0x180147130",
    "FUN_180147130",
    R"F180147130S(undefined FUN_180147130())F180147130S",
    R"B180147130(// 0x180147130  FUN_180147130
// size=1196 thunk=false
// signature: undefined FUN_180147130()
// status: ok


undefined8 * FUN_180147130(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  if (DAT_180423b18 == '\0') {
    DAT_180423b18 = '\x01';
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_18001d080(&local_68,"40 53 48 83 EC 20 66 89 91 ? ? ? ? 48 8B D9 83 FA FF",0x34);
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    lVar4 = 10;
    FUN_18001d080(&local_48,"client.dll",10);
    lVar3 = FUN_180015f40(&local_48,&local_68);
    if (lVar3 == 0) {
      FUN_180014410("[Toolbox] SetModelIndex sig OUTDATED - local model changer disabled\n");
    }
    else {
      if (((*(char *)(lVar3 + 6) == 'f') && (*(char *)(lVar3 + 7) == -0x77)) &&
         (*(char *)(lVar3 + 8) == -0x6f)) {
        DAT_1803e7300 = (longlong)*(int *)(lVar3 + 9);
      }
      lVar7 = 7;
      lVar6 = 8;
      lVar8 = 6;
      lVar5 = 9;
      lVar9 = DAT_1803e7310;
      lVar10 = DAT_1803e7308;
      lVar11 = DAT_1803e7320;
      iVar1 = DAT_1803e7318;
      do {
        if (((lVar10 == 0) && (*(char *)(lVar3 + lVar8) == 'H')) &&
           ((*(char *)(lVar3 + 1 + lVar8) == ';' && (*(char *)(lVar3 + 2 + lVar8) == -0x7d)))) {
          lVar10 = (longlong)*(int *)(lVar3 + 3 + lVar8);
          DAT_1803e7308 = lVar10;
        }
        else if (((lVar9 == 0) && (*(char *)(lVar3 + lVar8) == '\x0f')) &&
                ((*(char *)(lVar3 + 1 + lVar8) == -0x49 && (*(char *)(lVar3 + 2 + lVar8) == -0x6d)))
                ) {
          lVar9 = (longlong)*(int *)(lVar3 + 3 + lVar8);
          DAT_1803e7310 = lVar9;
        }
        else if (iVar1 < 0) {
          if ((*(char *)(lVar3 + lVar8) == -1) && (*(char *)(lVar3 + 1 + lVar8) == -0x70)) {
            iVar1 = *(int *)(lVar3 + 2 + lVar8);
            iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
            DAT_1803e7318 = iVar1;
          }
        }
        else if ((lVar11 == 0) && (*(char *)(lVar3 + lVar8) == -0x18)) {
          lVar11 = (longlong)*(int *)(lVar3 + 1 + lVar8) + 5 + lVar8 + lVar3;
          DAT_1803e7320 = lVar11;
        }
        if ((((lVar10 == 0) && (*(char *)(lVar3 + lVar7) == 'H')) &&
            (*(char *)(lVar3 + 2 + lVar8) == ';')) && (*(char *)(lVar3 + 3 + lVar8) == -0x7d)) {
          lVar10 = (longlong)*(int *)(lVar3 + 3 + lVar7);
          DAT_1803e7308 = lVar10;
        }
        else if (((lVar9 == 0) && (*(char *)(lVar3 + lVar7) == '\x0f')) &&
                ((*(char *)(lVar3 + 2 + lVar8) == -0x49 && (*(char *)(lVar3 + 3 + lVar8) == -0x6d)))
                ) {
          lVar9 = (longlong)*(int *)(lVar3 + 3 + lVar7);
          DAT_1803e7310 = lVar9;
        }
        else if (iVar1 < 0) {
          if ((*(char *)(lVar3 + lVar7) == -1) && (*(char *)(lVar3 + 2 + lVar8) == -0x70)) {
            iVar1 = *(int *)(lVar3 + 2 + lVar7);
            iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
            DAT_1803e7318 = iVar1;
          }
        }
        else if ((lVar11 == 0) && (*(char *)(lVar3 + lVar7) == -0x18)) {
          lVar11 = (longlong)*(int *)(lVar3 + 1 + lVar7) + 5 + lVar7 + lVar3;
          DAT_1803e7320 = lVar11;
        }
        if ((((lVar10 == 0) && (*(char *)(lVar3 + lVar6) == 'H')) &&
            (*(char *)(lVar3 + 3 + lVar8) == ';')) && (*(char *)(lVar3 + 4 + lVar8) == -0x7d)) {
          lVar10 = (longlong)*(int *)(lVar3 + 3 + lVar6);
          DAT_1803e7308 = lVar10;
        }
        else if (((lVar9 == 0) && (*(char *)(lVar3 + lVar6) == '\x0f')) &&
                ((*(char *)(lVar3 + 3 + lVar8) == -0x49 && (*(char *)(lVar3 + 4 + lVar8) == -0x6d)))
                ) {
          lVar9 = (longlong)*(int *)(lVar3 + 3 + lVar6);
          DAT_1803e7310 = lVar9;
        }
        else if (iVar1 < 0) {
          if ((*(char *)(lVar3 + lVar6) == -1) && (*(char *)(lVar3 + 3 + lVar8) == -0x70)) {
            iVar1 = *(int *)(lVar3 + 2 + lVar6);
            iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
            DAT_1803e7318 = iVar1;
          }
        }
        else if ((lVar11 == 0) && (*(char *)(lVar3 + lVar6) == -0x18)) {
          lVar11 = (longlong)*(int *)(lVar3 + 1 + lVar6) + 5 + lVar6 + lVar3;
          DAT_1803e7320 = lVar11;
        }
        if ((((lVar10 == 0) && (*(char *)(lVar3 + lVar5) == 'H')) &&
            (*(char *)(lVar3 + 4 + lVar8) == ';')) && (*(char *)(lVar3 + 5 + lVar8) == -0x7d)) {
          lVar10 = (longlong)*(int *)(lVar3 + 3 + lVar5);
          DAT_1803e7308 = lVar10;
        }
        else if (((lVar9 == 0) && (*(char *)(lVar3 + lVar5) == '\x0f')) &&
                ((*(char *)(lVar3 + 4 + lVar8) == -0x49 && (*(char *)(lVar3 + 5 + lVar8) == -0x6d)))
                ) {
          lVar9 = (longlong)*(int *)(lVar3 + 3 + lVar5);
          DAT_1803e7310 = lVar9;
        }
        else if (iVar1 < 0) {
          if ((*(char *)(lVar3 + lVar5) == -1) && (*(char *)(lVar3 + 4 + lVar8) == -0x70)) {
            iVar1 = *(int *)(lVar3 + 2 + lVar5);
            iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
            DAT_1803e7318 = iVar1;
          }
        }
        else if ((lVar11 == 0) && (*(char *)(lVar3 + lVar5) == -0x18)) {
          lVar11 = (longlong)*(int *)(lVar3 + 1 + lVar5) + 5 + lVar5 + lVar3;
          DAT_1803e7320 = lVar11;
        }
        if ((((lVar10 == 0) && (*(char *)(lVar3 + lVar4) == 'H')) &&
            (*(char *)(lVar3 + 5 + lVar8) == ';')) && (*(char *)(lVar3 + 6 + lVar8) == -0x7d)) {
          lVar10 = (longlong)*(int *)(lVar3 + 3 + lVar4);
          DAT_1803e7308 = lVar10;
        }
        else if (((lVar9 == 0) && (*(char *)(lVar3 + lVar4) == '\x0f')) &&
                ((*(char *)(lVar3 + 5 + lVar8) == -0x49 && (*(char *)(lVar3 + 6 + lVar8) == -0x6d)))
                ) {
          lVar9 = (longlong)*(int *)(lVar3 + 3 + lVar4);
          DAT_1803e7310 = lVar9;
        }
        else if (iVar1 < 0) {
          if ((*(char *)(lVar3 + lVar4) == -1) && (*(char *)(lVar3 + 5 + lVar8) == -0x70)) {
            iVar1 = *(int *)(lVar3 + 2 + lVar4);
            iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
            DAT_1803e7318 = iVar1;
          }
        }
        else if ((lVar11 == 0) && (*(char *)(lVar3 + lVar4) == -0x18)) {
          lVar11 = (longlong)*(int *)(lVar3 + 1 + lVar4) + 5 + lVar4 + lVar3;
          DAT_1803e7320 = lVar11;
        }
        lVar8 = lVar8 + 5;
        lVar7 = lVar7 + 5;
        lVar6 = lVar6 + 5;
        lVar5 = lVar5 + 5;
        lVar4 = lVar4 + 5;
      } while (lVar8 != 0x88);
      if ((((DAT_1803e7300 == 0) || (lVar10 == 0)) || (lVar9 == 0)) || (iVar1 < 1)) {
        DAT_1803e7328 = 0;
        uVar2 = 0;
      }
      else {
        DAT_1803e7328 = 1;
        uVar2 = 1;
      }
      FUN_180014410("[Toolbox] SetModelCtx idx=+0x%zX pModel=+0x%zX instance=+0x%zX OnNewModel=vt[%d] updVis=%p valid=%d\n"
                    ,DAT_1803e7300,lVar10,lVar9,iVar1,lVar11,uVar2);
    }
  }
  return &DAT_1803e7300;
}


)B180147130",
    "5b1030e1a72c57d16c43ceea1504a57214c4b9a5cc6cd7a72c4b98f8a3ed26f7",
    R"F180147130C(FUN_180014410
FUN_180015f40
FUN_18001d080)F180147130C",
    R"F180147130D(DAT_1803e7300
DAT_1803e7308
DAT_1803e7310
DAT_1803e7318
DAT_1803e7320
DAT_1803e7328
DAT_180423b18)F180147130D",
    R"F180147130T("client.dll"
"40 53 48 83 EC 20 66 89 91 ? ? ? ? 48 8B D9 83 FA FF"
"[Toolbox] SetModelIndex sig OUTDATED - local model changer disabled\\n"
"[Toolbox] SetModelCtx idx=+0x%zX pModel=+0x%zX instance=+0x%zX OnNewModel=vt[%d] updVis=%p valid=%d\\n")F180147130T",
    R"F180147130F(30: if (DAT_180423b18 == '\0') {
44: if (lVar3 == 0) {
47: else {
48: if (((*(char *)(lVar3 + 6) == 'f') && (*(char *)(lVar3 + 7) == -0x77)) &&
60: do {
61: if (((lVar10 == 0) && (*(char *)(lVar3 + lVar8) == 'H')) &&
66: else if (((lVar9 == 0) && (*(char *)(lVar3 + lVar8) == '\x0f')) &&
72: else if (iVar1 < 0) {
73: if ((*(char *)(lVar3 + lVar8) == -1) && (*(char *)(lVar3 + 1 + lVar8) == -0x70)) {
79: else if ((lVar11 == 0) && (*(char *)(lVar3 + lVar8) == -0x18)) {
83: if ((((lVar10 == 0) && (*(char *)(lVar3 + lVar7) == 'H')) &&
88: else if (((lVar9 == 0) && (*(char *)(lVar3 + lVar7) == '\x0f')) &&
94: else if (iVar1 < 0) {
95: if ((*(char *)(lVar3 + lVar7) == -1) && (*(char *)(lVar3 + 2 + lVar8) == -0x70)) {
101: else if ((lVar11 == 0) && (*(char *)(lVar3 + lVar7) == -0x18)) {
105: if ((((lVar10 == 0) && (*(char *)(lVar3 + lVar6) == 'H')) &&
110: else if (((lVar9 == 0) && (*(char *)(lVar3 + lVar6) == '\x0f')) &&
116: else if (iVar1 < 0) {
117: if ((*(char *)(lVar3 + lVar6) == -1) && (*(char *)(lVar3 + 3 + lVar8) == -0x70)) {
123: else if ((lVar11 == 0) && (*(char *)(lVar3 + lVar6) == -0x18)) {
127: if ((((lVar10 == 0) && (*(char *)(lVar3 + lVar5) == 'H')) &&
132: else if (((lVar9 == 0) && (*(char *)(lVar3 + lVar5) == '\x0f')) &&
138: else if (iVar1 < 0) {
139: if ((*(char *)(lVar3 + lVar5) == -1) && (*(char *)(lVar3 + 4 + lVar8) == -0x70)) {
145: else if ((lVar11 == 0) && (*(char *)(lVar3 + lVar5) == -0x18)) {
149: if ((((lVar10 == 0) && (*(char *)(lVar3 + lVar4) == 'H')) &&
154: else if (((lVar9 == 0) && (*(char *)(lVar3 + lVar4) == '\x0f')) &&
160: else if (iVar1 < 0) {
161: if ((*(char *)(lVar3 + lVar4) == -1) && (*(char *)(lVar3 + 5 + lVar8) == -0x70)) {
167: else if ((lVar11 == 0) && (*(char *)(lVar3 + lVar4) == -0x18)) {
177: if ((((DAT_1803e7300 == 0) || (lVar10 == 0)) || (lVar9 == 0)) || (iVar1 < 1)) {
181: else {
189: return &DAT_1803e7300;)F180147130F",
    R"F180147130U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7300.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7308.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7310.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7318.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7320.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7328.
TODO: recover the declaration, type and value for global/data reference DAT_180423b18.)F180147130U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180147130() noexcept {
    return kFunction_0x180147130;
}

// 0x1801475e0 FUN_1801475e0
// source: re/dump/decompile/0x1801475e0_FUN_1801475e0.c
// size: 43 bytes; thunk: false
// body sha256: 31ee50744f1e4d25ea77b525ed2885641d766be91a9e376b3e59c860575b292b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801475e0{
    "0x1801475e0",
    "FUN_1801475e0",
    R"F1801475e0S(undefined FUN_1801475e0())F1801475e0S",
    R"B1801475e0(// 0x1801475e0  FUN_1801475e0
// size=43 thunk=false
// signature: undefined FUN_1801475e0()
// status: ok


undefined8 FUN_1801475e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_180147130();
  if ((param_1 == 0) || (*(char *)(lVar1 + 0x28) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *(longlong *)(lVar1 + 8));
  }
  return uVar2;
}


)B1801475e0",
    "31ee50744f1e4d25ea77b525ed2885641d766be91a9e376b3e59c860575b292b",
    R"F1801475e0C(FUN_180147130)F1801475e0C",
    R"F1801475e0D()F1801475e0D",
    R"F1801475e0T()F1801475e0T",
    R"F1801475e0F(14: if ((param_1 == 0) || (*(char *)(lVar1 + 0x28) == '\0')) {
17: else {
20: return uVar2;)F1801475e0F",
    R"F1801475e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1801475e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801475e0() noexcept {
    return kFunction_0x1801475e0;
}

// 0x180147610 FUN_180147610
// source: re/dump/decompile/0x180147610_FUN_180147610.c
// size: 45 bytes; thunk: false
// body sha256: 9136662db84274f11ffb839f7bf4414fb5b7e5434e46380e525fd8eb43fb5911
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180147610{
    "0x180147610",
    "FUN_180147610",
    R"F180147610S(undefined FUN_180147610())F180147610S",
    R"B180147610(// 0x180147610  FUN_180147610
// size=45 thunk=false
// signature: undefined FUN_180147610()
// status: ok


int FUN_180147610(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_180147130();
  if ((param_1 == 0) || ((char)plVar2[5] == '\0')) {
    iVar1 = -1;
  }
  else {
    iVar1 = (int)*(short *)(param_1 + *plVar2);
  }
  return iVar1;
}


)B180147610",
    "9136662db84274f11ffb839f7bf4414fb5b7e5434e46380e525fd8eb43fb5911",
    R"F180147610C(FUN_180147130)F180147610C",
    R"F180147610D()F180147610D",
    R"F180147610T()F180147610T",
    R"F180147610F(14: if ((param_1 == 0) || ((char)plVar2[5] == '\0')) {
17: else {
20: return iVar1;)F180147610F",
    R"F180147610U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180147610U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180147610() noexcept {
    return kFunction_0x180147610;
}

// 0x180147650 FUN_180147650
// source: re/dump/decompile/0x180147650_FUN_180147650.c
// size: 240 bytes; thunk: false
// body sha256: edd929508077b8c93b8f183b71b6ba2782442b37b24c0f33d136e072e2f619f9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180147650{
    "0x180147650",
    "FUN_180147650",
    R"F180147650S(undefined FUN_180147650())F180147650S",
    R"B180147650(// 0x180147650  FUN_180147650
// size=240 thunk=false
// signature: undefined FUN_180147650()
// status: ok


undefined8 * FUN_180147650(longlong param_1)

{
  void *lp;
  BOOL BVar1;
  longlong lVar2;
  undefined8 *lp_00;
  uint uVar3;
  char *pcVar5;
  ulonglong uVar4;
  
  if (DAT_1804009e0 == '\0') {
    DAT_1804009e0 = '\x01';
    lVar2 = FUN_1800b5800();
    uVar4 = 0;
    if (lVar2 != 0) {
      do {
        pcVar5 = (char *)(uVar4 + lVar2);
        if (((*pcVar5 == 'H') && (pcVar5[1] == -0x75)) && (pcVar5[2] == -0x75)) {
          lVar2 = (longlong)*(int *)(pcVar5 + 3);
          if (*(int *)(pcVar5 + 3) - 0x101U < 0xfeff) goto LAB_1801476c6;
          break;
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
      } while ((int)uVar3 < 0xc0);
    }
    lVar2 = DAT_1803fe4c8;
LAB_1801476c6:
    DAT_1803fe4c8 = lVar2;
    FUN_180014410("[Toolbox] AnimState ptrOff=+0x%zX valid=%d (from UpdateClientSideAnimation %p)\n"
                  ,DAT_1803fe4c8,DAT_1803fe4c8 != 0);
  }
  if ((param_1 == 0) || (DAT_1803fe4c8 == 0)) {
    lp_00 = (undefined8 *)0x0;
  }
  else {
    lp_00 = *(undefined8 **)(DAT_1803fe4c8 + param_1);
    if ((lp_00 == (undefined8 *)0x0) || (BVar1 = IsBadReadPtr(lp_00,0x150), BVar1 != 0)) {
      lp_00 = (undefined8 *)0x0;
    }
    else {
      lp = (void *)*lp_00;
      if ((lp == (void *)0x0) ||
         ((BVar1 = IsBadReadPtr(lp,0x40), BVar1 != 0 || (*(longlong *)((longlong)lp + 8) == 0)))) {
        lp_00 = (undefined8 *)0x0;
      }
    }
  }
  return lp_00;
}


)B180147650",
    "edd929508077b8c93b8f183b71b6ba2782442b37b24c0f33d136e072e2f619f9",
    R"F180147650C(FUN_180014410
FUN_1800b5800)F180147650C",
    R"F180147650D(LAB_1801476c6
DAT_1803fe4c8
DAT_1804009e0)F180147650D",
    R"F180147650T("[Toolbox] AnimState ptrOff=+0x%zX valid=%d (from UpdateClientSideAnimation %p)\\n")F180147650T",
    R"F180147650F(18: if (DAT_1804009e0 == '\0') {
22: if (lVar2 != 0) {
23: do {
25: if (((*pcVar5 == 'H') && (pcVar5[1] == -0x75)) && (pcVar5[2] == -0x75)) {
27: if (*(int *)(pcVar5 + 3) - 0x101U < 0xfeff) goto LAB_1801476c6;
28: break;
35: LAB_1801476c6:
40: if ((param_1 == 0) || (DAT_1803fe4c8 == 0)) {
43: else {
45: if ((lp_00 == (undefined8 *)0x0) || (BVar1 = IsBadReadPtr(lp_00,0x150), BVar1 != 0)) {
48: else {
50: if ((lp == (void *)0x0) ||
56: return lp_00;)F180147650F",
    R"F180147650U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1801476c6.
TODO: recover the declaration, type and value for global/data reference DAT_1803fe4c8.
TODO: recover the declaration, type and value for global/data reference DAT_1804009e0.)F180147650U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180147650() noexcept {
    return kFunction_0x180147650;
}

// 0x180147750 FUN_180147750
// source: re/dump/decompile/0x180147750_FUN_180147750.c
// size: 88 bytes; thunk: false
// body sha256: 5d7da2a93f25ca17da00274d270079f86005777923a84ff6582f6aaf23cca23e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180147750{
    "0x180147750",
    "FUN_180147750",
    R"F180147750S(undefined FUN_180147750())F180147750S",
    R"B180147750(// 0x180147750  FUN_180147750
// size=88 thunk=false
// signature: undefined FUN_180147750()
// status: ok


undefined8 FUN_180147750(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180147650();
  if (plVar1 == (longlong *)0x0) {
    if (DAT_1803f9204 == '\0') {
      DAT_1803f9204 = '\x01';
      FUN_180014410("[Toolbox] AnimState reset skipped: state unavailable (further skips silent)\n")
      ;
    }
    return 0;
  }
  (**(code **)(*plVar1 + 8))(plVar1);
  FUN_180014410("[Toolbox] AnimState ClearAnimationState state=%p\n",plVar1);
  return 1;
}


)B180147750",
    "5d7da2a93f25ca17da00274d270079f86005777923a84ff6582f6aaf23cca23e",
    R"F180147750C(FUN_180014410
FUN_180147650)F180147750C",
    R"F180147750D(DAT_1803f9204)F180147750D",
    R"F180147750T("[Toolbox] AnimState ClearAnimationState state=%p\\n"
"[Toolbox] AnimState reset skipped: state unavailable (further skips silent)\\n")F180147750T",
    R"F180147750F(13: if (plVar1 == (longlong *)0x0) {
14: if (DAT_1803f9204 == '\0') {
19: return 0;
23: return 1;)F180147750F",
    R"F180147750U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9204.
TODO: resolve the indirect call in body 21: (**(code **)(*plVar1 + 8))(plVar1);.)F180147750U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180147750() noexcept {
    return kFunction_0x180147750;
}

// 0x1801477c0 FUN_1801477c0
// source: re/dump/decompile/0x1801477c0_FUN_1801477c0.c
// size: 195 bytes; thunk: false
// body sha256: fc0f7e2d0cc121280026e37006e3ffb0412e308a277fc874a7a7e3b1a9859a0f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801477c0{
    "0x1801477c0",
    "FUN_1801477c0",
    R"F1801477c0S(undefined FUN_1801477c0())F1801477c0S",
    R"B1801477c0(// 0x1801477c0  FUN_1801477c0
// size=195 thunk=false
// signature: undefined FUN_1801477c0()
// status: ok


undefined8 FUN_1801477c0(longlong *param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_180147130();
  if ((((param_1 == (longlong *)0x0) || (param_2 == 0)) || (*(char *)(lVar3 + 0x28) == '\0')) ||
     (DAT_1803fa598 == (longlong *)0x0)) {
    uVar4 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar3 + 8);
    if (*(longlong *)(lVar1 + (longlong)param_1) == param_2) {
      uVar4 = 1;
    }
    else {
      if (param_3 != '\0') {
        lVar2 = *(longlong *)(lVar3 + 0x10);
        if (*(short *)(lVar2 + (longlong)param_1) != -1) {
          (**(code **)(*DAT_1803fa598 + 0x20))();
          *(undefined2 *)(lVar2 + (longlong)param_1) = 0xffff;
        }
      }
      *(longlong *)(lVar1 + (longlong)param_1) = param_2;
      (**(code **)(*param_1 + (longlong)*(int *)(lVar3 + 0x18) * 8))(param_1);
      if (param_3 != '\0') {
        FUN_180147750(param_1);
        if (*(code **)(lVar3 + 0x20) != (code *)0x0) {
          (**(code **)(lVar3 + 0x20))(param_1);
        }
      }
      FUN_18001d810(param_1);
      uVar4 = 1;
    }
  }
  return uVar4;
}


)B1801477c0",
    "fc0f7e2d0cc121280026e37006e3ffb0412e308a277fc874a7a7e3b1a9859a0f",
    R"F1801477c0C(FUN_18001d810
FUN_180147130
FUN_180147750)F1801477c0C",
    R"F1801477c0D(DAT_1803fa598)F1801477c0D",
    R"F1801477c0T()F1801477c0T",
    R"F1801477c0F(16: if ((((param_1 == (longlong *)0x0) || (param_2 == 0)) || (*(char *)(lVar3 + 0x28) == '\0')) ||
20: else {
22: if (*(longlong *)(lVar1 + (longlong)param_1) == param_2) {
25: else {
26: if (param_3 != '\0') {
28: if (*(short *)(lVar2 + (longlong)param_1) != -1) {
35: if (param_3 != '\0') {
37: if (*(code **)(lVar3 + 0x20) != (code *)0x0) {
45: return uVar4;)F1801477c0F",
    R"F1801477c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa598.
TODO: resolve the indirect call in body 29: (**(code **)(*DAT_1803fa598 + 0x20))();.
TODO: resolve the indirect call in body 34: (**(code **)(*param_1 + (longlong)*(int *)(lVar3 + 0x18) * 8))(param_1);.
TODO: resolve the indirect call in body 37: if (*(code **)(lVar3 + 0x20) != (code *)0x0) {.
TODO: resolve the indirect call in body 38: (**(code **)(lVar3 + 0x20))(param_1);.)F1801477c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801477c0() noexcept {
    return kFunction_0x1801477c0;
}

// 0x1801478f0 FUN_1801478f0
// source: re/dump/decompile/0x1801478f0_FUN_1801478f0.c
// size: 38 bytes; thunk: false
// body sha256: bdb3a98f0f99ff01187f90c90f8218daac3cba452280dd8c512727e1f3b643fc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801478f0{
    "0x1801478f0",
    "FUN_1801478f0",
    R"F1801478f0S(undefined FUN_1801478f0())F1801478f0S",
    R"B1801478f0(// 0x1801478f0  FUN_1801478f0
// size=38 thunk=false
// signature: undefined FUN_1801478f0()
// status: ok


undefined8 FUN_1801478f0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (((param_1 == 0) || (param_2 < 0)) || (DAT_180409b90 == (code *)0x0)) {
    uVar1 = 0;
  }
  else {
    (*DAT_180409b90)();
    uVar1 = 1;
  }
  return uVar1;
}


)B1801478f0",
    "bdb3a98f0f99ff01187f90c90f8218daac3cba452280dd8c512727e1f3b643fc",
    R"F1801478f0C()F1801478f0C",
    R"F1801478f0D(DAT_180409b90)F1801478f0D",
    R"F1801478f0T()F1801478f0T",
    R"F1801478f0F(12: if (((param_1 == 0) || (param_2 < 0)) || (DAT_180409b90 == (code *)0x0)) {
15: else {
19: return uVar1;)F1801478f0F",
    R"F1801478f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180409b90.
TODO: resolve the indirect call in body 12: if (((param_1 == 0) || (param_2 < 0)) || (DAT_180409b90 == (code *)0x0)) {.
TODO: resolve the indirect call in body 16: (*DAT_180409b90)();.)F1801478f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801478f0() noexcept {
    return kFunction_0x1801478f0;
}

// 0x180147920 FUN_180147920
// source: re/dump/decompile/0x180147920_FUN_180147920.c
// size: 225 bytes; thunk: false
// body sha256: 9d106544f5358f32fc6a4d3c52e3a9ffda43a7a91b5b7747dd4e055638b0ff5b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180147920{
    "0x180147920",
    "FUN_180147920",
    R"F180147920S(undefined FUN_180147920())F180147920S",
    R"B180147920(// 0x180147920  FUN_180147920
// size=225 thunk=false
// signature: undefined FUN_180147920()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180147920(longlong param_1)

{
  int iVar1;
  HMODULE pHVar2;
  HANDLE pvVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  pHVar2 = GetModuleHandleA("engine.dll");
  if (pHVar2 != (HMODULE)0x0) {
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    pvVar3 = GetCurrentProcess();
    iVar1 = K32GetModuleInformation(pvVar3,pHVar2,&local_30,0x18);
    if (iVar1 != 0) {
      lVar4 = 0;
      while (lVar4 + 0xcU < (uStack_28 & 0xffffffff)) {
        if ((((*(char *)((longlong)&pHVar2->unused + lVar4) == 'H') &&
             (*(char *)((longlong)&pHVar2->unused + lVar4 + 1) == -0x73)) &&
            (*(char *)((longlong)&pHVar2->unused + lVar4 + 2) == '\r')) &&
           (*(char *)((longlong)&pHVar2[1].unused + lVar4 + 3) == -0x18)) {
          if ((longlong)&pHVar2[3].unused + *(int *)((longlong)&pHVar2[2].unused + lVar4) + lVar4 ==
              param_1) {
            return (longlong)&pHVar2[1].unused +
                   lVar4 + *(int *)((longlong)&pHVar2->unused + lVar4 + 3) + 3;
          }
          lVar4 = lVar4 + 1;
        }
        else {
          lVar4 = lVar4 + 1;
        }
      }
    }
  }
  return 0;
}


)B180147920",
    "9d106544f5358f32fc6a4d3c52e3a9ffda43a7a91b5b7747dd4e055638b0ff5b",
    R"F180147920C()F180147920C",
    R"F180147920D(DAT_1803da4c0)F180147920D",
    R"F180147920T("engine.dll")F180147920T",
    R"F180147920F(24: if (pHVar2 != (HMODULE)0x0) {
30: if (iVar1 != 0) {
32: while (lVar4 + 0xcU < (uStack_28 & 0xffffffff)) {
33: if ((((*(char *)((longlong)&pHVar2->unused + lVar4) == 'H') &&
37: if ((longlong)&pHVar2[3].unused + *(int *)((longlong)&pHVar2[2].unused + lVar4) + lVar4 ==
39: return (longlong)&pHVar2[1].unused +
44: else {
50: return 0;)F180147920F",
    R"F180147920U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180147920U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180147920() noexcept {
    return kFunction_0x180147920;
}

// 0x180147a10 FUN_180147a10
// source: re/dump/decompile/0x180147a10_FUN_180147a10.c
// size: 298 bytes; thunk: false
// body sha256: 75dffa9f799066e4e9e4ffe2d42287b33198db2a0e691fd823c62126f976ea69
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180147a10{
    "0x180147a10",
    "FUN_180147a10",
    R"F180147a10S(undefined FUN_180147a10())F180147a10S",
    R"B180147a10(// 0x180147a10  FUN_180147a10
// size=298 thunk=false
// signature: undefined FUN_180147a10()
// status: ok


char FUN_180147a10(void)

{
  longlong lVar1;
  char *pcVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if (DAT_180426115 == '\0') {
    DAT_180426115 = '\x01';
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    FUN_18001d080(&local_48,"40 53 48 83 EC 20 83 B9 ? ? ? ? FF 48 8B D9 74 ? E8",0x33);
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    local_10 = 0;
    FUN_18001d080(&local_28,"engine.dll",10);
    lVar1 = FUN_180015f40(&local_28,&local_48);
    if (lVar1 == 0) {
      FUN_180014410("[Toolbox] ForceFullUpdate sig OUTDATED - full-update restore disabled\n");
      return DAT_1803ff0e8;
    }
    DAT_180409a88 = (longlong)*(int *)(lVar1 + 8);
    DAT_180409a80 = lVar1;
    DAT_180409a78 = FUN_180147920();
    if ((DAT_180409a78 == 0) || (DAT_180409a88 == 0)) {
      DAT_1803ff0e8 = '\0';
    }
    else {
      DAT_1803ff0e8 = '\x01';
    }
    pcVar2 = "cl NOT FOUND - full-update restore disabled";
    if (DAT_1803ff0e8 != '\0') {
      pcVar2 = "OK";
    }
    FUN_180014410("[Toolbox] ForceFullUpdate=%p cl=%p m_nDeltaTick=+0x%zX %s\n",lVar1,DAT_180409a78,
                  DAT_180409a88,pcVar2);
  }
  return DAT_1803ff0e8;
}


)B180147a10",
    "75dffa9f799066e4e9e4ffe2d42287b33198db2a0e691fd823c62126f976ea69",
    R"F180147a10C(FUN_180014410
FUN_180015f40
FUN_18001d080
FUN_180147920)F180147a10C",
    R"F180147a10D(DAT_1803ff0e8
DAT_180409a78
DAT_180409a80
DAT_180409a88
DAT_180426115)F180147a10D",
    R"F180147a10T("OK"
"engine.dll"
"cl NOT FOUND - full-update restore disabled"
"40 53 48 83 EC 20 83 B9 ? ? ? ? FF 48 8B D9 74 ? E8"
"[Toolbox] ForceFullUpdate=%p cl=%p m_nDeltaTick=+0x%zX %s\\n"
"[Toolbox] ForceFullUpdate sig OUTDATED - full-update restore disabled\\n")F180147a10T",
    R"F180147a10F(21: if (DAT_180426115 == '\0') {
34: if (lVar1 == 0) {
36: return DAT_1803ff0e8;
41: if ((DAT_180409a78 == 0) || (DAT_180409a88 == 0)) {
44: else {
48: if (DAT_1803ff0e8 != '\0') {
54: return DAT_1803ff0e8;)F180147a10F",
    R"F180147a10U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803ff0e8.
TODO: recover the declaration, type and value for global/data reference DAT_180409a78.
TODO: recover the declaration, type and value for global/data reference DAT_180409a80.
TODO: recover the declaration, type and value for global/data reference DAT_180409a88.
TODO: recover the declaration, type and value for global/data reference DAT_180426115.)F180147a10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180147a10() noexcept {
    return kFunction_0x180147a10;
}

// 0x180147b40 FUN_180147b40
// source: re/dump/decompile/0x180147b40_FUN_180147b40.c
// size: 50 bytes; thunk: false
// body sha256: 0125de0168964fa30e93cf7618924788cdc5c8450904f8235184572b8746ba2d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180147b40{
    "0x180147b40",
    "FUN_180147b40",
    R"F180147b40S(undefined FUN_180147b40())F180147b40S",
    R"B180147b40(// 0x180147b40  FUN_180147b40
// size=50 thunk=false
// signature: undefined FUN_180147b40()
// status: ok


undefined8 FUN_180147b40(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_180147a10();
  if (((cVar1 == '\0') || (DAT_180409a80 == (code *)0x0)) || (DAT_180409a78 == 0)) {
    uVar2 = 0;
  }
  else {
    (*DAT_180409a80)();
    uVar2 = 1;
  }
  return uVar2;
}


)B180147b40",
    "0125de0168964fa30e93cf7618924788cdc5c8450904f8235184572b8746ba2d",
    R"F180147b40C(FUN_180147a10)F180147b40C",
    R"F180147b40D(DAT_180409a78
DAT_180409a80)F180147b40D",
    R"F180147b40T()F180147b40T",
    R"F180147b40F(14: if (((cVar1 == '\0') || (DAT_180409a80 == (code *)0x0)) || (DAT_180409a78 == 0)) {
17: else {
21: return uVar2;)F180147b40F",
    R"F180147b40U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180409a78.
TODO: recover the declaration, type and value for global/data reference DAT_180409a80.
TODO: resolve the indirect call in body 14: if (((cVar1 == '\0') || (DAT_180409a80 == (code *)0x0)) || (DAT_180409a78 == 0)) {.
TODO: resolve the indirect call in body 18: (*DAT_180409a80)();.)F180147b40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180147b40() noexcept {
    return kFunction_0x180147b40;
}

// 0x180147b80 FUN_180147b80
// source: re/dump/decompile/0x180147b80_FUN_180147b80.c
// size: 55 bytes; thunk: false
// body sha256: 0dff0bb352845eeb587318e4e140d6910ef8a78dc8da22b1f93047cb638329cc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180147b80{
    "0x180147b80",
    "FUN_180147b80",
    R"F180147b80S(undefined FUN_180147b80())F180147b80S",
    R"B180147b80(// 0x180147b80  FUN_180147b80
// size=55 thunk=false
// signature: undefined FUN_180147b80()
// status: ok


undefined8 FUN_180147b80(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_180147a10();
  if (((cVar1 == '\0') || (DAT_180409a78 == 0)) || (DAT_180409a88 == 0)) {
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(DAT_180409a88 + DAT_180409a78) = 0xffffffff;
    uVar2 = 1;
  }
  return uVar2;
}


)B180147b80",
    "0dff0bb352845eeb587318e4e140d6910ef8a78dc8da22b1f93047cb638329cc",
    R"F180147b80C(FUN_180147a10)F180147b80C",
    R"F180147b80D(DAT_180409a78
DAT_180409a88)F180147b80D",
    R"F180147b80T()F180147b80T",
    R"F180147b80F(14: if (((cVar1 == '\0') || (DAT_180409a78 == 0)) || (DAT_180409a88 == 0)) {
17: else {
21: return uVar2;)F180147b80F",
    R"F180147b80U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180409a78.
TODO: recover the declaration, type and value for global/data reference DAT_180409a88.)F180147b80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180147b80() noexcept {
    return kFunction_0x180147b80;
}

// 0x180147bc0 FUN_180147bc0
// source: re/dump/decompile/0x180147bc0_FUN_180147bc0.c
// size: 123 bytes; thunk: false
// body sha256: eb145a39eac0cbbfb77cd668e72c7d5e26dd917fdba5c92e53523aa97d27ceca
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180147bc0{
    "0x180147bc0",
    "FUN_180147bc0",
    R"F180147bc0S(undefined FUN_180147bc0())F180147bc0S",
    R"B180147bc0(// 0x180147bc0  FUN_180147bc0
// size=123 thunk=false
// signature: undefined FUN_180147bc0()
// status: ok


undefined8 FUN_180147bc0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  
  *param_2 = param_1;
  if ((param_1 == 0) || (DAT_1803f9250 == (longlong *)0x0)) {
    lVar1 = 0;
  }
  else {
    lVar1 = (**(code **)(*DAT_1803f9250 + 0xb8))(DAT_1803f9250,param_1);
  }
  uVar3 = 0;
  param_2[1] = lVar1;
  if (lVar1 == 0) {
    if (param_1 != 0) {
      uVar3 = *(uint *)(param_1 + 0xbc);
    }
  }
  else {
    uVar3 = *(uint *)(lVar1 + 0x18);
  }
  *(uint *)(param_2 + 2) = uVar3;
  uVar2 = 0x2000;
  if ((int)uVar3 < 0x2001) {
    uVar2 = (ulonglong)uVar3;
  }
  else {
    *(undefined4 *)(param_2 + 2) = 0x2000;
  }
  return CONCAT71((int7)(uVar2 >> 8),0 < (int)uVar2);
}


)B180147bc0",
    "eb145a39eac0cbbfb77cd668e72c7d5e26dd917fdba5c92e53523aa97d27ceca",
    R"F180147bc0C()F180147bc0C",
    R"F180147bc0D(DAT_1803f9250)F180147bc0D",
    R"F180147bc0T()F180147bc0T",
    R"F180147bc0F(15: if ((param_1 == 0) || (DAT_1803f9250 == (longlong *)0x0)) {
18: else {
23: if (lVar1 == 0) {
24: if (param_1 != 0) {
28: else {
33: if ((int)uVar3 < 0x2001) {
36: else {
39: return CONCAT71((int7)(uVar2 >> 8),0 < (int)uVar2);)F180147bc0F",
    R"F180147bc0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9250.
TODO: resolve the indirect call in body 19: lVar1 = (**(code **)(*DAT_1803f9250 + 0xb8))(DAT_1803f9250,param_1);.)F180147bc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180147bc0() noexcept {
    return kFunction_0x180147bc0;
}

// 0x180147c60 FUN_180147c60
// source: re/dump/decompile/0x180147c60_FUN_180147c60.c
// size: 275 bytes; thunk: false
// body sha256: 5fe458cadd6e3d0716ff158c18304c424a42e0e98e1021e5088650e8ce91224a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180147c60{
    "0x180147c60",
    "FUN_180147c60",
    R"F180147c60S(undefined FUN_180147c60())F180147c60S",
    R"B180147c60(// 0x180147c60  FUN_180147c60
// size=275 thunk=false
// signature: undefined FUN_180147c60()
// status: ok


longlong FUN_180147c60(longlong *param_1,int param_2,longlong *param_3,int *param_4,
                      undefined8 *param_5)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  *param_5 = 0;
  if ((-1 < param_2) && (param_2 < (int)param_1[2])) {
    lVar2 = param_1[1];
    if (lVar2 == 0) {
      *param_3 = *param_1;
      *param_4 = param_2;
      lVar2 = *param_1;
      iVar1 = 0;
      if (param_2 < *(int *)(lVar2 + 0xbc)) {
        iVar1 = param_2;
      }
      return (longlong)*(int *)(lVar2 + 0xc0) + (longlong)iVar1 * 0xd4 + lVar2;
    }
    lVar4 = (longlong)param_2 * 0x10 + *(longlong *)(lVar2 + 8);
    iVar1 = *(int *)(lVar4 + 8);
    if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x98))) {
      puVar5 = (undefined8 *)((longlong)iVar1 * 0xe8 + *(longlong *)(lVar2 + 0x88));
      lVar2 = (**(code **)(*DAT_1803f9250 + 0xa8))(DAT_1803f9250,*puVar5);
      if (lVar2 != 0) {
        *param_5 = puVar5;
        *param_3 = lVar2;
        *param_4 = *(int *)(lVar4 + 0xc);
        uVar3 = *(uint *)(lVar4 + 0xc);
        if (((int)uVar3 < 0) || (*(int *)(lVar2 + 0xbc) <= (int)uVar3)) {
          uVar3 = 0;
        }
        return (longlong)*(int *)(lVar2 + 0xc0) + (ulonglong)uVar3 * 0xd4 + lVar2;
      }
    }
  }
  return 0;
}


)B180147c60",
    "5fe458cadd6e3d0716ff158c18304c424a42e0e98e1021e5088650e8ce91224a",
    R"F180147c60C()F180147c60C",
    R"F180147c60D(DAT_1803f9250)F180147c60D",
    R"F180147c60T()F180147c60T",
    R"F180147c60F(18: if ((-1 < param_2) && (param_2 < (int)param_1[2])) {
20: if (lVar2 == 0) {
25: if (param_2 < *(int *)(lVar2 + 0xbc)) {
28: return (longlong)*(int *)(lVar2 + 0xc0) + (longlong)iVar1 * 0xd4 + lVar2;
32: if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x98))) {
35: if (lVar2 != 0) {
40: if (((int)uVar3 < 0) || (*(int *)(lVar2 + 0xbc) <= (int)uVar3)) {
43: return (longlong)*(int *)(lVar2 + 0xc0) + (ulonglong)uVar3 * 0xd4 + lVar2;
47: return 0;)F180147c60F",
    R"F180147c60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9250.
TODO: resolve the indirect call in body 34: lVar2 = (**(code **)(*DAT_1803f9250 + 0xa8))(DAT_1803f9250,*puVar5);.)F180147c60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180147c60() noexcept {
    return kFunction_0x180147c60;
}

// 0x180147d80 FUN_180147d80
// source: re/dump/decompile/0x180147d80_FUN_180147d80.c
// size: 189 bytes; thunk: false
// body sha256: 8d1ed2128e73e425ad025fde8d4a5410733535b62411a739faa03cdc1d108646
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180147d80{
    "0x180147d80",
    "FUN_180147d80",
    R"F180147d80S(undefined FUN_180147d80())F180147d80S",
    R"B180147d80(// 0x180147d80  FUN_180147d80
// size=189 thunk=false
// signature: undefined FUN_180147d80()
// status: ok


int FUN_180147d80(longlong param_1,char *param_2,int param_3)

{
  int iVar1;
  size_t _MaxCount;
  longlong lVar2;
  longlong lVar3;
  char *_Str1;
  int iVar4;
  undefined1 local_res20 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [24];
  
  _MaxCount = strlen(param_2);
  iVar4 = 0;
  while( true ) {
    while( true ) {
      while( true ) {
        if (*(int *)(param_1 + 0x10) <= iVar4) {
          return -1;
        }
        lVar2 = FUN_180147c60(param_1,iVar4,local_48,local_res20,local_50);
        if (lVar2 != 0) break;
        iVar4 = iVar4 + 1;
      }
      lVar3 = 8;
      if (param_3 != 0) {
        lVar3 = 4;
      }
      _Str1 = (char *)(lVar2 + *(int *)(lVar3 + lVar2));
      if ((_Str1 != (char *)0x0) && (*_Str1 != '\0')) break;
      iVar4 = iVar4 + 1;
    }
    if (param_3 == 2) {
      iVar1 = _strnicmp(_Str1,param_2,_MaxCount);
    }
    else {
      iVar1 = _stricmp(_Str1,param_2);
    }
    if (iVar1 == 0) break;
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}


)B180147d80",
    "8d1ed2128e73e425ad025fde8d4a5410733535b62411a739faa03cdc1d108646",
    R"F180147d80C(FUN_180147c60)F180147d80C",
    R"F180147d80D()F180147d80D",
    R"F180147d80T()F180147d80T",
    R"F180147d80F(22: while( true ) {
23: while( true ) {
24: while( true ) {
25: if (*(int *)(param_1 + 0x10) <= iVar4) {
26: return -1;
29: if (lVar2 != 0) break;
33: if (param_3 != 0) {
37: if ((_Str1 != (char *)0x0) && (*_Str1 != '\0')) break;
40: if (param_3 == 2) {
43: else {
46: if (iVar1 == 0) break;
49: return iVar4;)F180147d80F",
    R"F180147d80U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180147d80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180147d80() noexcept {
    return kFunction_0x180147d80;
}

// 0x180147e50 FUN_180147e50
// source: re/dump/decompile/0x180147e50_FUN_180147e50.c
// size: 740 bytes; thunk: false
// body sha256: ce369c08424a2bc28998b9eb373769996ebf999555da2dd782c9623bbef30712
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180147e50{
    "0x180147e50",
    "FUN_180147e50",
    R"F180147e50S(undefined FUN_180147e50())F180147e50S",
    R"B180147e50(// 0x180147e50  FUN_180147e50
// size=740 thunk=false
// signature: undefined FUN_180147e50()
// status: ok


undefined8 FUN_180147e50(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int *piVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  char *_Str1;
  float fVar18;
  float fVar19;
  undefined4 local_res20 [2];
  longlong local_58;
  longlong local_50 [5];
  
  local_58 = 0;
  local_res20[0] = 0;
  local_50[0] = 0;
  lVar8 = FUN_180147c60(param_1,param_2,&local_58,local_res20,local_50);
  uVar9 = 0;
  if (lVar8 != 0) {
    *param_3 = (int)param_2;
    *(byte *)(param_3 + 3) = *(byte *)(lVar8 + 0xc) & 1;
    iVar7 = 0;
    iVar13 = *(int *)(lVar8 + 0x44);
    if (iVar13 < 1) {
      iVar16 = 1;
    }
    else {
      iVar16 = 9;
      if (iVar13 < 9) {
        iVar16 = iVar13;
      }
    }
    iVar13 = *(int *)(lVar8 + 0x48);
    if (iVar13 < 1) {
      iVar17 = 1;
    }
    else {
      iVar17 = 9;
      if (iVar13 < 9) {
        iVar17 = iVar13;
      }
    }
    for (iVar13 = 0; iVar12 = 0, iVar13 < iVar17; iVar13 = iVar13 + 1) {
      while (iVar12 < iVar16) {
        iVar4 = *(int *)(lVar8 + 0x44);
        iVar10 = iVar4 + -1;
        if (iVar12 < iVar4) {
          iVar10 = iVar12;
        }
        iVar14 = iVar13;
        if (*(int *)(lVar8 + 0x48) <= iVar13) {
          iVar14 = *(int *)(lVar8 + 0x48) + -1;
        }
        sVar3 = *(short *)(*(int *)(lVar8 + 0x3c) + lVar8 + (longlong)(iVar4 * iVar14 + iVar10) * 2)
        ;
        if ((sVar3 < 0) || (*(int *)(local_58 + 0xb4) <= (int)sVar3)) {
          iVar12 = iVar12 + 1;
        }
        else {
          lVar15 = local_58 + (longlong)sVar3 * 100 + (longlong)*(int *)(local_58 + 0xb8);
          if ((*(float *)(lVar15 + 8) <= 0.0) || (iVar4 = *(int *)(lVar15 + 0x10), iVar4 < 2)) {
            iVar12 = iVar12 + 1;
          }
          else {
            fVar19 = *(float *)(lVar15 + 8) / (float)(iVar4 + -1);
            if (iVar7 < iVar4) {
              param_3[1] = fVar19;
              iVar7 = iVar4;
            }
            if (*(int *)(lVar15 + 0x14) - 1U < 0x3f) {
              lVar11 = (longlong)*(int *)(lVar15 + 0x14) * 0x2c;
              lVar15 = *(int *)(lVar15 + 0x18) + lVar15;
              fVar18 = *(float *)(lVar11 + -0xc + lVar15);
              fVar2 = *(float *)(lVar11 + -8 + lVar15);
              fVar18 = fVar2 * fVar2 + fVar18 * fVar18;
              if (fVar18 < 0.0) {
                fVar18 = sqrtf(fVar18);
              }
              else {
                fVar18 = SQRT(fVar18);
              }
              fVar18 = fVar18 * fVar19;
              if ((float)param_3[2] <= fVar18 && fVar18 != (float)param_3[2]) {
                param_3[2] = fVar18;
              }
            }
            iVar12 = iVar12 + 1;
          }
        }
      }
    }
LAB_18014801b:
    if (iVar12 < 2) {
      if (*(int *)(lVar8 + 0x44 + (longlong)iVar12 * 4) < 2) {
        iVar12 = iVar12 + 1;
      }
      else {
        iVar13 = *(int *)(lVar8 + 0x4c + (longlong)iVar12 * 4);
        lVar15 = (longlong)iVar13;
        if ((-1 < iVar13) && (iVar13 < *(int *)(local_58 + 300))) {
          if (local_50[0] != 0) {
            if (*(int *)(local_50[0] + 0xb8) <= iVar13) {
              iVar12 = iVar12 + 1;
              goto LAB_18014801b;
            }
            iVar13 = *(int *)(*(longlong *)(local_50[0] + 0xa8) + lVar15 * 4);
          }
          piVar1 = (int *)(*(int *)(local_58 + 0x130) + local_58 + lVar15 * 0x14);
          _Str1 = (char *)((longlong)*piVar1 + (longlong)piVar1);
          if ((_Str1 == (char *)0x0) || (iVar7 = _stricmp(_Str1,"move_x"), iVar7 != 0)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if ((_Str1 == (char *)0x0) || (iVar7 = _stricmp(_Str1,"move_y"), iVar7 != 0)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if ((bVar5) || ((!bVar6 && (iVar12 == 0)))) {
            param_3[4] = iVar13;
            param_3[6] = piVar1[2];
            param_3[7] = piVar1[3];
          }
          else {
            param_3[5] = iVar13;
            param_3[8] = piVar1[2];
            param_3[9] = piVar1[3];
          }
          iVar12 = iVar12 + 1;
          goto LAB_18014801b;
        }
        iVar12 = iVar12 + 1;
      }
      goto LAB_18014801b;
    }
    uVar9 = 1;
  }
  return uVar9;
}


)B180147e50",
    "ce369c08424a2bc28998b9eb373769996ebf999555da2dd782c9623bbef30712",
    R"F180147e50C(FUN_180147c60)F180147e50C",
    R"F180147e50D(LAB_18014801b)F180147e50D",
    R"F180147e50T("move_x"
"move_y")F180147e50T",
    R"F180147e50F(39: if (lVar8 != 0) {
44: if (iVar13 < 1) {
47: else {
49: if (iVar13 < 9) {
54: if (iVar13 < 1) {
57: else {
59: if (iVar13 < 9) {
63: for (iVar13 = 0; iVar12 = 0, iVar13 < iVar17; iVar13 = iVar13 + 1) {
64: while (iVar12 < iVar16) {
67: if (iVar12 < iVar4) {
71: if (*(int *)(lVar8 + 0x48) <= iVar13) {
76: if ((sVar3 < 0) || (*(int *)(local_58 + 0xb4) <= (int)sVar3)) {
79: else {
81: if ((*(float *)(lVar15 + 8) <= 0.0) || (iVar4 = *(int *)(lVar15 + 0x10), iVar4 < 2)) {
84: else {
86: if (iVar7 < iVar4) {
90: if (*(int *)(lVar15 + 0x14) - 1U < 0x3f) {
96: if (fVar18 < 0.0) {
99: else {
103: if ((float)param_3[2] <= fVar18 && fVar18 != (float)param_3[2]) {
112: LAB_18014801b:
113: if (iVar12 < 2) {
114: if (*(int *)(lVar8 + 0x44 + (longlong)iVar12 * 4) < 2) {
117: else {
120: if ((-1 < iVar13) && (iVar13 < *(int *)(local_58 + 300))) {
121: if (local_50[0] != 0) {
122: if (*(int *)(local_50[0] + 0xb8) <= iVar13) {
124: goto LAB_18014801b;
130: if ((_Str1 == (char *)0x0) || (iVar7 = _stricmp(_Str1,"move_x"), iVar7 != 0)) {
133: else {
136: if ((_Str1 == (char *)0x0) || (iVar7 = _stricmp(_Str1,"move_y"), iVar7 != 0)) {
139: else {
142: if ((bVar5) || ((!bVar6 && (iVar12 == 0)))) {
147: else {
153: goto LAB_18014801b;
157: goto LAB_18014801b;
161: return uVar9;)F180147e50F",
    R"F180147e50U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18014801b.)F180147e50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180147e50() noexcept {
    return kFunction_0x180147e50;
}

// 0x180148150 FUN_180148150
// source: re/dump/decompile/0x180148150_FUN_180148150.c
// size: 975 bytes; thunk: false
// body sha256: 5c8e9ef4ca3d20d7574f744528cd6368bbb5525d32b53cdb4070e5de01912982
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180148150{
    "0x180148150",
    "FUN_180148150",
    R"F180148150S(undefined FUN_180148150())F180148150S",
    R"B180148150(// 0x180148150  FUN_180148150
// size=975 thunk=false
// signature: undefined FUN_180148150()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180148150(undefined8 param_1,int param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  char cVar17;
  byte bVar18;
  int iVar19;
  undefined8 *puVar20;
  longlong lVar21;
  undefined8 *puVar22;
  char *pcVar23;
  int iVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 auStack_298 [32];
  undefined *local_278;
  undefined4 local_270;
  undefined4 local_268;
  undefined4 local_260;
  undefined4 local_258;
  undefined4 local_250;
  undefined4 local_248;
  undefined4 local_240;
  double local_238;
  double local_230;
  uint local_228;
  int local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined1 uStack_1ec;
  undefined1 local_1e8 [320];
  undefined1 local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_298;
  uVar27 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  local_218 = param_2;
  memset(local_1e8,0,0x140);
  FUN_1802053a0(local_1e8);
  lVar21 = 2;
  puVar15 = param_3;
  puVar16 = &local_1f8;
  do {
    puVar22 = puVar16;
    puVar20 = puVar15;
    uVar9 = puVar22[1];
    uVar10 = puVar22[2];
    uVar11 = puVar22[3];
    *puVar20 = *puVar22;
    puVar20[1] = uVar9;
    uVar9 = puVar22[4];
    uVar12 = puVar22[5];
    puVar20[2] = uVar10;
    puVar20[3] = uVar11;
    uVar10 = puVar22[6];
    uVar11 = puVar22[7];
    puVar20[4] = uVar9;
    puVar20[5] = uVar12;
    uVar9 = puVar22[8];
    uVar12 = puVar22[9];
    puVar20[6] = uVar10;
    puVar20[7] = uVar11;
    uVar10 = puVar22[10];
    uVar11 = puVar22[0xb];
    puVar20[8] = uVar9;
    puVar20[9] = uVar12;
    uVar9 = puVar22[0xc];
    uVar12 = puVar22[0xd];
    puVar20[10] = uVar10;
    puVar20[0xb] = uVar11;
    uVar10 = puVar22[0xe];
    uVar11 = puVar22[0xf];
    puVar20[0xc] = uVar9;
    puVar20[0xd] = uVar12;
    puVar20[0xe] = uVar10;
    puVar20[0xf] = uVar11;
    lVar21 = lVar21 + -1;
    puVar15 = puVar20 + 0x10;
    puVar16 = puVar22 + 0x10;
  } while (lVar21 != 0);
  uVar9 = puVar22[0x11];
  uVar10 = puVar22[0x12];
  uVar11 = puVar22[0x13];
  puVar20[0x10] = puVar22[0x10];
  puVar20[0x11] = uVar9;
  uVar9 = puVar22[0x14];
  uVar12 = puVar22[0x15];
  puVar20[0x12] = uVar10;
  puVar20[0x13] = uVar11;
  uVar1 = *(undefined4 *)(puVar22 + 0x16);
  uVar2 = *(undefined4 *)((longlong)puVar22 + 0xb4);
  uVar3 = *(undefined4 *)(puVar22 + 0x17);
  uVar4 = *(undefined4 *)((longlong)puVar22 + 0xbc);
  puVar20[0x14] = uVar9;
  puVar20[0x15] = uVar12;
  uVar5 = *(undefined4 *)(puVar22 + 0x18);
  uVar6 = *(undefined4 *)((longlong)puVar22 + 0xc4);
  uVar7 = *(undefined4 *)(puVar22 + 0x19);
  uVar8 = *(undefined4 *)((longlong)puVar22 + 0xcc);
  *(undefined4 *)(puVar20 + 0x16) = uVar1;
  *(undefined4 *)((longlong)puVar20 + 0xb4) = uVar2;
  *(undefined4 *)(puVar20 + 0x17) = uVar3;
  *(undefined4 *)((longlong)puVar20 + 0xbc) = uVar4;
  *(undefined4 *)(puVar20 + 0x18) = uVar5;
  *(undefined4 *)((longlong)puVar20 + 0xc4) = uVar6;
  *(undefined4 *)(puVar20 + 0x19) = uVar7;
  *(undefined4 *)((longlong)puVar20 + 0xcc) = uVar8;
  *param_3 = param_1;
  *(int *)(param_3 + 1) = param_2;
  lVar21 = FUN_1800b9fe0(param_1);
  local_200 = 0;
  local_210 = 0;
  uStack_208 = 0;
  if ((lVar21 != 0) &&
     (cVar17 = FUN_180147bc0(lVar21,&local_210), uVar25 = uVar27, uVar26 = uVar27, cVar17 != '\0'))
  {
    do {
      iVar19 = -1;
      uVar13 = uVar27;
      if ((*(longlong *)((longlong)&PTR_s_ACT_HL2MP_IDLE_18033c460 + uVar26) == 0) ||
         (0x11 < param_2 - 1U)) {
LAB_180148323:
        lVar21 = *(longlong *)((longlong)&PTR_s_ACT_HL2MP_IDLE_18033c460 + uVar26);
        if (lVar21 != 0) {
          iVar19 = FUN_180147d80(&local_210,lVar21,0);
        }
      }
      else {
        local_278 = (&PTR_DAT_18033c3c0)[param_2];
        FUN_180012ac0(local_a8,0x60,"%s_%s");
        iVar19 = FUN_180147d80(&local_210,local_a8,0);
        if (iVar19 < 0) goto LAB_180148323;
      }
      while (((uVar14 = uVar27, iVar19 < 0 && (iVar24 = (int)uVar13, iVar24 < 3)) &&
             (lVar21 = *(longlong *)
                        ((longlong)&PTR_s_ACT_MP_STAND_IDLE_18033c468 +
                        (longlong)iVar24 * 8 + uVar26), lVar21 != 0))) {
        iVar19 = FUN_180147d80(&local_210,lVar21,0);
        uVar13 = (ulonglong)(iVar24 + 1);
      }
      while (iVar19 < 0) {
        iVar24 = (int)uVar14;
        if (1 < iVar24) {
LAB_1801483b6:
          if ((*(longlong *)((longlong)&PTR_DAT_18033c490 + uVar26) == 0) ||
             (iVar19 = FUN_180147d80(&local_210,*(longlong *)((longlong)&PTR_DAT_18033c490 + uVar26)
                                     ,2), iVar19 < 0)) goto LAB_1801483fb;
          break;
        }
        lVar21 = *(longlong *)
                  ((longlong)&PTR_s_idle_all_01_18033c480 + (longlong)iVar24 * 8 + uVar26);
        if (lVar21 == 0) {
          if (iVar19 < 0) goto LAB_1801483b6;
          break;
        }
        iVar19 = FUN_180147d80(&local_210,lVar21,1);
        uVar14 = (ulonglong)(iVar24 + 1);
      }
      FUN_180147e50(&local_210,iVar19);
LAB_1801483fb:
      uVar25 = uVar25 + 1;
      uVar26 = uVar26 + 0x38;
    } while (uVar25 != 8);
    if (((*(int *)(param_3 + 2) < 0) && (*(int *)(param_3 + 7) < 0)) &&
       (*(int *)(param_3 + 0xc) < 0)) {
      bVar18 = 0;
    }
    else {
      bVar18 = 1;
    }
    local_240 = *(undefined4 *)((longlong)param_3 + 0x4c);
    local_248 = *(undefined4 *)(param_3 + 9);
    local_250 = *(undefined4 *)(param_3 + 0x25);
    local_258 = *(undefined4 *)(param_3 + 0x20);
    local_260 = *(undefined4 *)(param_3 + 0x1b);
    local_268 = *(undefined4 *)(param_3 + 0x16);
    local_270 = *(undefined4 *)(param_3 + 0x11);
    *(byte *)((longlong)param_3 + 0xc) = bVar18;
    local_228 = (uint)bVar18;
    local_230 = (double)*(float *)(param_3 + 0xd);
    local_238 = (double)*(float *)(param_3 + 8);
    pcVar23 = "normal";
    if (*(&PTR_DAT_18033c3c0)[local_218] != '\0') {
      pcVar23 = (&PTR_DAT_18033c3c0)[local_218];
    }
    local_278 = (undefined *)CONCAT44(local_278._4_4_,*(undefined4 *)(param_3 + 0xc));
    FUN_180014410("[Toolbox-anim] cache hold=%s idle=%d walk=%d run=%d cidle=%d cwalk=%d jump=%d swim=%d sit=%d walkPose=(%d,%d) gsWalk=%.0f gsRun=%.0f valid=%d\n"
                  ,pcVar23,*(int *)(param_3 + 2),*(undefined4 *)(param_3 + 7));
  }
  return;
}


)B180148150",
    "5c8e9ef4ca3d20d7574f744528cd6368bbb5525d32b53cdb4070e5de01912982",
    R"F180148150C(FUN_180012ac0
FUN_180014410
FUN_1800b9fe0
FUN_180147bc0
FUN_180147d80
FUN_180147e50
FUN_1802053a0)F180148150C",
    R"F180148150D(LAB_180148323
LAB_1801483b6
LAB_1801483fb
DAT_1803da4c0)F180148150D",
    R"F180148150T("%s_%s"
"normal"
"[Toolbox-anim] cache hold=%s idle=%d walk=%d run=%d cidle=%d cwalk=%d jump=%d swim=%d sit=%d walkPose=(%d,%d) gsWalk=%.0f gsRun=%.0f valid=%d\\n")F180148150T",
    R"F180148150F(73: do {
144: if ((lVar21 != 0) &&
147: do {
150: if ((*(longlong *)((longlong)&PTR_s_ACT_HL2MP_IDLE_18033c460 + uVar26) == 0) ||
152: LAB_180148323:
154: if (lVar21 != 0) {
158: else {
162: if (iVar19 < 0) goto LAB_180148323;
164: while (((uVar14 = uVar27, iVar19 < 0 && (iVar24 = (int)uVar13, iVar24 < 3)) &&
171: while (iVar19 < 0) {
173: if (1 < iVar24) {
174: LAB_1801483b6:
175: if ((*(longlong *)((longlong)&PTR_DAT_18033c490 + uVar26) == 0) ||
178: break;
182: if (lVar21 == 0) {
183: if (iVar19 < 0) goto LAB_1801483b6;
184: break;
190: LAB_1801483fb:
194: if (((*(int *)(param_3 + 2) < 0) && (*(int *)(param_3 + 7) < 0)) &&
198: else {
213: if (*(&PTR_DAT_18033c3c0)[local_218] != '\0') {
220: return;)F180148150F",
    R"F180148150U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180148323.
TODO: recover the declaration, type and value for global/data reference LAB_1801483b6.
TODO: recover the declaration, type and value for global/data reference LAB_1801483fb.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180148150U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180148150() noexcept {
    return kFunction_0x180148150;
}

// 0x180148520 FUN_180148520
// source: re/dump/decompile/0x180148520_FUN_180148520.c
// size: 492 bytes; thunk: false
// body sha256: eacdd034a045be9cdb0e32508a1e3b633a48c9839996afb455b1a63dd7d557cf
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180148520{
    "0x180148520",
    "FUN_180148520",
    R"F180148520S(undefined FUN_180148520())F180148520S",
    R"B180148520(// 0x180148520  FUN_180148520
// size=492 thunk=false
// signature: undefined FUN_180148520()
// status: ok


int FUN_180148520(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char *_Str1;
  int iVar4;
  int iVar5;
  int iVar6;
  char *_Str2;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  int local_58;
  undefined1 local_40 [8];
  
  iVar6 = 0;
  local_58 = 0;
  iVar5 = 0;
  iVar4 = 0;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          if ((int)param_2[2] <= iVar5) {
            if ((0 < iVar6) &&
               (*(undefined4 *)(*param_2 + 0xc4) = *(undefined4 *)(*param_1 + 0xc4), param_2[1] != 0
               )) {
              iVar5 = 0;
              while( true ) {
                if (*(int *)(param_2[1] + 0x98) <= iVar5) break;
                lVar2 = (**(code **)(*DAT_1803f9250 + 0xa8))
                                  (DAT_1803f9250,
                                   *(undefined8 *)
                                    ((longlong)iVar5 * 0xe8 + *(longlong *)(param_2[1] + 0x88)));
                if (lVar2 != 0) {
                  *(undefined4 *)(lVar2 + 0xc4) = *(undefined4 *)(*param_1 + 0xc4);
                }
                iVar5 = iVar5 + 1;
              }
            }
            FUN_180014410("[Toolbox-anim] activity transplant: copied=%d alreadyResolved=%d dstSeqs=%d\n"
                          ,iVar6,iVar4,(int)param_2[2]);
            return iVar6;
          }
          lVar2 = FUN_180147c60(param_2,iVar5,local_40,local_res18,local_res20);
          if (lVar2 != 0) break;
          iVar5 = iVar5 + 1;
        }
        if (*(int *)(lVar2 + 0x10) < 1) break;
        local_58 = iVar4 + 1;
        iVar5 = iVar5 + 1;
        iVar4 = local_58;
      }
      _Str2 = (char *)(*(int *)(lVar2 + 8) + lVar2);
      if ((_Str2 != (char *)0x0) && (*_Str2 != '\0')) break;
      iVar5 = iVar5 + 1;
    }
    iVar4 = 0;
    while( true ) {
      if ((int)param_1[2] <= iVar4) break;
      lVar3 = FUN_180147c60(param_1,iVar4,local_40,local_res18,local_res20);
      if ((lVar3 == 0) || (*(int *)(lVar3 + 0x10) < 1)) {
        iVar4 = iVar4 + 1;
      }
      else {
        _Str1 = (char *)(*(int *)(lVar3 + 8) + lVar3);
        if (_Str1 != (char *)0x0) {
          iVar1 = _stricmp(_Str1,_Str2);
          if (iVar1 == 0) {
            *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar3 + 0x10);
            if (*(int *)(lVar2 + 0x14) < 1) {
              *(undefined4 *)(lVar2 + 0x14) = 1;
            }
            iVar6 = iVar6 + 1;
            break;
          }
        }
        iVar4 = iVar4 + 1;
      }
    }
    iVar5 = iVar5 + 1;
    iVar4 = local_58;
  } while( true );
}


)B180148520",
    "eacdd034a045be9cdb0e32508a1e3b633a48c9839996afb455b1a63dd7d557cf",
    R"F180148520C(FUN_180014410
FUN_180147c60)F180148520C",
    R"F180148520D(DAT_1803f9250)F180148520D",
    R"F180148520T("[Toolbox-anim] activity transplant: copied=%d alreadyResolved=%d dstSeqs=%d\\n")F180148520T",
    R"F180148520F(27: do {
28: while( true ) {
29: while( true ) {
30: while( true ) {
31: if ((int)param_2[2] <= iVar5) {
32: if ((0 < iVar6) &&
36: while( true ) {
37: if (*(int *)(param_2[1] + 0x98) <= iVar5) break;
42: if (lVar2 != 0) {
50: return iVar6;
53: if (lVar2 != 0) break;
56: if (*(int *)(lVar2 + 0x10) < 1) break;
62: if ((_Str2 != (char *)0x0) && (*_Str2 != '\0')) break;
66: while( true ) {
67: if ((int)param_1[2] <= iVar4) break;
69: if ((lVar3 == 0) || (*(int *)(lVar3 + 0x10) < 1)) {
72: else {
74: if (_Str1 != (char *)0x0) {
76: if (iVar1 == 0) {
78: if (*(int *)(lVar2 + 0x14) < 1) {
82: break;)F180148520F",
    R"F180148520U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9250.
TODO: resolve the indirect call in body 38: lVar2 = (**(code **)(*DAT_1803f9250 + 0xa8)).)F180148520U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180148520() noexcept {
    return kFunction_0x180148520;
}

// 0x180148720 FUN_180148720
// source: re/dump/decompile/0x180148720_FUN_180148720.c
// size: 365 bytes; thunk: false
// body sha256: 1efe87680b3c5b5755b27c1a09ef2df434392372d085e1494ba2d171dde5e539
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180148720{
    "0x180148720",
    "FUN_180148720",
    R"F180148720S(undefined FUN_180148720())F180148720S",
    R"B180148720(// 0x180148720  FUN_180148720
// size=365 thunk=false
// signature: undefined FUN_180148720()
// status: ok


int FUN_180148720(longlong *param_1,undefined4 param_2,code *param_3)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_res20 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [16];
  
  iVar4 = 0;
  iVar6 = 0;
  iVar7 = 0;
  iVar5 = 0;
  while (iVar5 < (int)param_1[2]) {
    lVar2 = FUN_180147c60(param_1,iVar5,local_38,local_res20,local_40);
    if (lVar2 == 0) {
      iVar5 = iVar5 + 1;
    }
    else {
      pcVar3 = (char *)(*(int *)(lVar2 + 8) + lVar2);
      if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
        iVar5 = iVar5 + 1;
      }
      else {
        iVar1 = (*param_3)();
        if (iVar1 < 1) {
          *(undefined4 *)(lVar2 + 0x10) = 0xffffffff;
          iVar7 = iVar7 + 1;
        }
        else {
          if ((0 < *(int *)(lVar2 + 0x10)) && (*(int *)(lVar2 + 0x10) != iVar1)) {
            iVar6 = iVar6 + 1;
          }
          *(int *)(lVar2 + 0x10) = iVar1;
          if (*(int *)(lVar2 + 0x14) < 1) {
            *(undefined4 *)(lVar2 + 0x14) = 1;
          }
          iVar4 = iVar4 + 1;
        }
        iVar5 = iVar5 + 1;
      }
    }
  }
  if ((0 < iVar4) && (*(undefined4 *)(*param_1 + 0xc4) = param_2, param_1[1] != 0)) {
    iVar5 = 0;
    while( true ) {
      if (*(int *)(param_1[1] + 0x98) <= iVar5) break;
      lVar2 = (**(code **)(*DAT_1803f9250 + 0xa8))
                        (DAT_1803f9250,
                         *(undefined8 *)((longlong)iVar5 * 0xe8 + *(longlong *)(param_1[1] + 0x88)))
      ;
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0xc4) = param_2;
      }
      iVar5 = iVar5 + 1;
    }
  }
  FUN_180014410("[Toolbox-anim] native activity resolve: resolved=%d (stale rewritten=%d) unknown=%d dstSeqs=%d\n"
                ,iVar4,iVar6,iVar7,(int)param_1[2]);
  return iVar4;
}


)B180148720",
    "1efe87680b3c5b5755b27c1a09ef2df434392372d085e1494ba2d171dde5e539",
    R"F180148720C(FUN_180014410
FUN_180147c60)F180148720C",
    R"F180148720D(DAT_1803f9250)F180148720D",
    R"F180148720T("[Toolbox-anim] native activity resolve: resolved=%d (stale rewritten=%d) unknown=%d dstSeqs=%d\\n")F180148720T",
    R"F180148720F(25: while (iVar5 < (int)param_1[2]) {
27: if (lVar2 == 0) {
30: else {
32: if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
35: else {
37: if (iVar1 < 1) {
41: else {
42: if ((0 < *(int *)(lVar2 + 0x10)) && (*(int *)(lVar2 + 0x10) != iVar1)) {
46: if (*(int *)(lVar2 + 0x14) < 1) {
55: if ((0 < iVar4) && (*(undefined4 *)(*param_1 + 0xc4) = param_2, param_1[1] != 0)) {
57: while( true ) {
58: if (*(int *)(param_1[1] + 0x98) <= iVar5) break;
63: if (lVar2 != 0) {
71: return iVar4;)F180148720F",
    R"F180148720U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9250.
TODO: resolve the indirect call in body 36: iVar1 = (*param_3)();.
TODO: resolve the indirect call in body 59: lVar2 = (**(code **)(*DAT_1803f9250 + 0xa8)).)F180148720U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180148720() noexcept {
    return kFunction_0x180148720;
}

// 0x1801488a0 FUN_1801488a0
// source: re/dump/decompile/0x1801488a0_FUN_1801488a0.c
// size: 340 bytes; thunk: false
// body sha256: 25c9d87e567683117879ec8dbb3f0be9598d5fb06e6f0811d2fe988c415a378c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801488a0{
    "0x1801488a0",
    "FUN_1801488a0",
    R"F1801488a0S(undefined FUN_1801488a0())F1801488a0S",
    R"B1801488a0(// 0x1801488a0  FUN_1801488a0
// size=340 thunk=false
// signature: undefined FUN_1801488a0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801488a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined2 local_177;
  undefined1 local_175;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined1 uStack_14c;
  undefined1 local_148 [328];
  
  local_158 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  memset(local_148,0,0x140);
  FUN_1802053a0(local_148);
  _DAT_1803e8298 = 2;
  puVar5 = &DAT_1803e8130;
  puVar6 = &local_158;
  do {
    puVar8 = puVar6;
    puVar7 = puVar5;
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    uVar3 = puVar8[3];
    *puVar7 = *puVar8;
    puVar7[1] = uVar1;
    uVar1 = puVar8[4];
    uVar4 = puVar8[5];
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    uVar2 = puVar8[6];
    uVar3 = puVar8[7];
    puVar7[4] = uVar1;
    puVar7[5] = uVar4;
    uVar1 = puVar8[8];
    uVar4 = puVar8[9];
    puVar7[6] = uVar2;
    puVar7[7] = uVar3;
    uVar2 = puVar8[10];
    uVar3 = puVar8[0xb];
    puVar7[8] = uVar1;
    puVar7[9] = uVar4;
    uVar1 = puVar8[0xc];
    uVar4 = puVar8[0xd];
    puVar7[10] = uVar2;
    puVar7[0xb] = uVar3;
    uVar2 = puVar8[0xe];
    uVar3 = puVar8[0xf];
    puVar7[0xc] = uVar1;
    puVar7[0xd] = uVar4;
    puVar7[0xe] = uVar2;
    puVar7[0xf] = uVar3;
    _DAT_1803e8298 = _DAT_1803e8298 + -1;
    puVar5 = puVar7 + 0x10;
    puVar6 = puVar8 + 0x10;
  } while (_DAT_1803e8298 != 0);
  uVar1 = puVar8[0x11];
  DAT_1803e8118._0_2_ = 0;
  uVar2 = puVar8[0x12];
  uVar3 = puVar8[0x13];
  DAT_1803e8118._2_1_ = 1;
  puVar7[0x10] = puVar8[0x10];
  puVar7[0x11] = uVar1;
  uVar1 = puVar8[0x14];
  uVar4 = puVar8[0x15];
  DAT_1803e8124 = 0xffffffff;
  _DAT_1803e811c = _DAT_1803e8298;
  puVar7[0x12] = uVar2;
  puVar7[0x13] = uVar3;
  DAT_1803e8128 = 0;
  uVar2 = puVar8[0x16];
  uVar3 = puVar8[0x17];
  DAT_1803e812c = 0xbf800000;
  puVar7[0x14] = uVar1;
  puVar7[0x15] = uVar4;
  DAT_1803e8280 = 0;
  uVar1 = puVar8[0x18];
  uVar4 = puVar8[0x19];
  DAT_1803e8284 = 0xffffffff;
  puVar7[0x16] = uVar2;
  puVar7[0x17] = uVar3;
  DAT_1803e8288 = 0;
  puVar7[0x18] = uVar1;
  puVar7[0x19] = uVar4;
  DAT_1803e8118._3_1_ = local_175;
  _DAT_1803e8281 = local_177;
  DAT_1803e8283 = local_175;
  DAT_1803e828c = 0x3f800000;
  _DAT_1803e8290 = 0xffffffffffffffff;
  return;
}


)B1801488a0",
    "25c9d87e567683117879ec8dbb3f0be9598d5fb06e6f0811d2fe988c415a378c",
    R"F1801488a0C(FUN_1802053a0)F1801488a0C",
    R"F1801488a0D(DAT_1803e8118
DAT_1803e8124
DAT_1803e8128
DAT_1803e812c
DAT_1803e8130
DAT_1803e8280
DAT_1803e8283
DAT_1803e8284
DAT_1803e8288
DAT_1803e828c)F1801488a0D",
    R"F1801488a0T()F1801488a0T",
    R"F1801488a0F(35: do {
106: return;)F1801488a0F",
    R"F1801488a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8118.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8124.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8128.
TODO: recover the declaration, type and value for global/data reference DAT_1803e812c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8130.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8280.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8283.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8284.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8288.
TODO: recover the declaration, type and value for global/data reference DAT_1803e828c.)F1801488a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801488a0() noexcept {
    return kFunction_0x1801488a0;
}

// 0x180148a00 FUN_180148a00
// source: re/dump/decompile/0x180148a00_FUN_180148a00.c
// size: 6 bytes; thunk: false
// body sha256: 015b595ce432d858a300a021c8d1b05e530c16025500cd78ac4c807a4c287940
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180148a00{
    "0x180148a00",
    "FUN_180148a00",
    R"F180148a00S(undefined FUN_180148a00())F180148a00S",
    R"B180148a00(// 0x180148a00  FUN_180148a00
// size=6 thunk=false
// signature: undefined FUN_180148a00()
// status: ok


undefined4 FUN_180148a00(longlong param_1,longlong param_2)

{
  return *(undefined4 *)(param_1 + param_2);
}


)B180148a00",
    "015b595ce432d858a300a021c8d1b05e530c16025500cd78ac4c807a4c287940",
    R"F180148a00C()F180148a00C",
    R"F180148a00D()F180148a00D",
    R"F180148a00T()F180148a00T",
    R"F180148a00F(10: return *(undefined4 *)(param_1 + param_2);)F180148a00F",
    R"F180148a00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180148a00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180148a00() noexcept {
    return kFunction_0x180148a00;
}

// 0x180148a10 FUN_180148a10
// source: re/dump/decompile/0x180148a10_FUN_180148a10.c
// size: 89 bytes; thunk: false
// body sha256: 399a91440fcae0751630308d9f299e00b95b21df2adc4671a65a177bd545d449
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180148a10{
    "0x180148a10",
    "FUN_180148a10",
    R"F180148a10S(undefined FUN_180148a10())F180148a10S",
    R"B180148a10(// 0x180148a10  FUN_180148a10
// size=89 thunk=false
// signature: undefined FUN_180148a10()
// status: ok


void FUN_180148a10(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  uint param_9,undefined4 param_10,uint param_11,undefined4 param_12)

{
  *(undefined4 *)(param_1 + param_2) = param_6;
  *(undefined4 *)(param_1 + param_3) = param_7;
  if (param_4 != 0) {
    *(undefined4 *)(param_1 + param_4) = param_8;
  }
  if (param_9 < 0x18) {
    *(undefined4 *)(param_5 + param_1 + (longlong)(int)param_9 * 4) = param_10;
  }
  if (param_11 < 0x18) {
    *(undefined4 *)(param_5 + param_1 + (longlong)(int)param_11 * 4) = param_12;
  }
  return;
}


)B180148a10",
    "399a91440fcae0751630308d9f299e00b95b21df2adc4671a65a177bd545d449",
    R"F180148a10C()F180148a10C",
    R"F180148a10D()F180148a10D",
    R"F180148a10T()F180148a10T",
    R"F180148a10F(14: if (param_4 != 0) {
17: if (param_9 < 0x18) {
20: if (param_11 < 0x18) {
23: return;)F180148a10F",
    R"F180148a10U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180148a10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180148a10() noexcept {
    return kFunction_0x180148a10;
}

// 0x180148a70 FUN_180148a70
// source: re/dump/decompile/0x180148a70_FUN_180148a70.c
// size: 3466 bytes; thunk: false
// body sha256: 7242779771c6f9722ace43de6aa198ada84b8e22534b179c51476b823a652949
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180148a70{
    "0x180148a70",
    "FUN_180148a70",
    R"F180148a70S(undefined FUN_180148a70())F180148a70S",
    R"B180148a70(// 0x180148a70  FUN_180148a70
// size=3466 thunk=false
// signature: undefined FUN_180148a70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180148a70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  longlong *plVar11;
  int *piVar12;
  int *piVar13;
  float *pfVar14;
  byte *pbVar15;
  uint *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  int *piVar20;
  int iVar21;
  byte bVar22;
  int iVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStack_2b8 [32];
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  int local_278;
  double local_270;
  int local_268;
  double local_260;
  double local_258;
  uint local_250;
  uint local_248;
  uint local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  float local_1f8;
  uint local_1f4;
  undefined8 *local_1f0;
  int local_1e8 [2];
  undefined1 *local_1e0;
  undefined8 *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [32];
  undefined8 **local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined1 local_168 [32];
  undefined1 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined1 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined1 *local_108;
  undefined8 *local_100;
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_1803da4c0 ^ (ulonglong)auStack_2b8;
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (DAT_1803fa608 == 0) {
    return 0;
  }
  if (DAT_1803fa668 == (longlong *)0x0) {
    return 0;
  }
  local_1e8[1] = 0x12;
  local_1e8[0] = 0;
  local_f8 = (undefined1 *)0x93fd561a96ab0c67;
  local_f0 = 0xa42b44cb0a75e4bc;
  plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_e8,&local_f8);
  plVar11 = (longlong *)FUN_180241a30(*plVar11 + 0x28,&local_1d8,&local_f0);
  piVar12 = (int *)FUN_1802029c0(*plVar11 + 0x28);
  piVar20 = local_1e8;
  if (-1 < *piVar12) {
    piVar20 = piVar12;
  }
  piVar13 = local_1e8 + 1;
  if (*piVar12 < 0x13) {
    piVar13 = piVar20;
  }
  iVar23 = -1;
  fVar32 = 0.0;
  if ((DAT_1803e8130 != param_2) || (DAT_1803e8138 != *piVar13)) {
    DAT_1803e8118._0_2_ = 0;
    DAT_1803e8118._2_1_ = '\x01';
    DAT_1803e8118._3_1_ = local_e8._3_1_;
    _DAT_1803e811c = 0;
    DAT_1803e8124 = -1;
    DAT_1803e8128 = 0.0;
    DAT_1803e812c = -1.0;
    FUN_180148150(param_2,*piVar13,&DAT_1803e8130);
  }
  if (DAT_1803e813c == '\0') {
    return 0;
  }
  fVar34 = (float)*(double *)(DAT_1803fa608 + 0x10);
  pfVar14 = (float *)FUN_18001d530(param_1);
  fVar30 = *pfVar14;
  local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,fVar30);
  fVar29 = pfVar14[1];
  local_f0 = CONCAT44(local_f0._4_4_,fVar29);
  fVar25 = pfVar14[2];
  fVar30 = fVar29 * fVar29 + fVar30 * fVar30;
  if (fVar30 < 0.0) {
    local_1f8 = sqrtf(fVar30);
  }
  else {
    local_1f8 = SQRT(fVar30);
  }
  fVar29 = fVar25 * fVar25 + fVar30;
  if (fVar29 < 0.0) {
    fVar29 = sqrtf(fVar29);
  }
  else {
    fVar29 = SQRT(fVar29);
  }
  pbVar15 = (byte *)FUN_18001d710(param_1,&local_f8);
  bVar22 = *pbVar15 & 1;
  puVar16 = (uint *)FUN_18001d710(param_1,&local_f8);
  local_1f4 = *puVar16 & 4;
  cVar6 = FUN_18001fcf0(param_1);
  cVar7 = FUN_18001e0a0(param_1);
  bVar24 = false;
  local_1d8 = (undefined8 *)0x0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  FUN_18001d080(&local_1d8,"DT_BasePlayer",0xd);
  local_198 = &local_1d8;
  local_190 = &local_218;
  uVar17 = FUN_18016d4c0(&local_218,&local_1d8);
  uVar17 = FUN_180018ef0(&DAT_1803fac80,uVar17);
  FUN_18020e450(&local_1d8);
  local_188 = &local_238;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  local_220 = 0;
  FUN_18001d080(&local_238,"m_hVehicle",10);
  local_180 = &local_238;
  local_1e0 = local_1b8;
  uVar18 = FUN_18016d4c0(local_1b8,&local_238);
  iVar9 = FUN_180018c10(uVar17,uVar18);
  FUN_18020e450(&local_238);
  if (iVar9 != 0) {
    iVar9 = FUN_180148a00(param_1,(longlong)iVar9);
    bVar24 = iVar9 != -1;
  }
  fVar5 = DAT_180380bb0;
  if ((cVar7 == '\b') || (bVar24)) {
    cVar8 = '\0';
    DAT_1803e8118._0_2_ = 0;
    if (bVar24) {
      uVar19 = 7;
    }
    else {
      if (cVar7 != '\b') goto LAB_180148ecc;
      uVar19 = 0;
    }
  }
  else {
    if ((((DAT_1803e8118._2_1_ == '\0') || (bVar22 != 0)) || (fVar25 <= DAT_1803810ec)) ||
       ('\x01' < cVar6)) {
      cVar8 = (char)DAT_1803e8118;
      if ((char)DAT_1803e8118 != '\0') {
        if (bVar22 != 0) goto LAB_180148e92;
LAB_180148e99:
        if (cVar8 == '\0') goto LAB_180148ecc;
        fVar25 = DAT_1803e8120;
        if (cVar6 < '\x02') goto LAB_180148eab;
LAB_180148ebd:
        cVar8 = '\0';
        DAT_1803e8118._0_2_ = (ushort)DAT_1803e8118 & 0xff00;
        DAT_1803e8124 = -1;
        goto LAB_180148ecc;
      }
      if (bVar22 != 0) {
LAB_180148e92:
        DAT_1803e8118._0_2_ = (ushort)DAT_1803e8118 & 0xff;
        goto LAB_180148e99;
      }
      if (cVar6 < '\x01') {
        if (DAT_1803e8118._1_1_ == '\0') {
          DAT_1803e8118._0_2_ = 0x100;
          _DAT_1803e811c = CONCAT44(DAT_1803e8120,fVar34);
        }
        else if ((0.0 < fVar34 - DAT_1803e811c) && (fVar30 < DAT_180380a58)) {
          cVar8 = '\x01';
          DAT_1803e8118._0_2_ = CONCAT11(DAT_1803e8118._1_1_,1);
          _DAT_1803e811c = _DAT_1803e811c & 0xffffffff;
          fVar25 = 0.0;
          goto LAB_180148eab;
        }
      }
LAB_180148ed1:
      if (DAT_1803812f0 <= fVar29 * fVar29) {
        uVar19 = 6;
        goto LAB_180148f56;
      }
    }
    else {
      cVar8 = '\x01';
      DAT_1803e8118._0_2_ = CONCAT11(DAT_1803e8118._1_1_,1);
      _DAT_1803e811c = CONCAT44(fVar34,DAT_1803e811c);
      DAT_1803e8128 = 0.0;
      DAT_1803e8124 = -1;
      fVar25 = fVar34;
LAB_180148eab:
      if (DAT_180380a3c < fVar34 - fVar25) {
        if (bVar22 != 0) goto LAB_180148ebd;
        goto LAB_180148ed1;
      }
LAB_180148ecc:
      if (bVar22 == 0) goto LAB_180148ed1;
    }
    if (cVar8 == '\0') {
      if ((cVar6 < '\x02') || (bVar22 != 0)) {
        if (local_1f4 == 0) {
          if (fVar30 <= _DAT_1803812bc) {
            uVar19 = 0;
            if (DAT_180380a58 < fVar30) {
              uVar19 = 1;
            }
          }
          else {
            uVar19 = 2;
          }
        }
        else {
          uVar19 = (ulonglong)((DAT_180380a58 < fVar30) + 3);
        }
      }
      else {
        uVar19 = 6;
      }
    }
    else {
      uVar19 = 5;
    }
  }
LAB_180148f56:
  iVar9 = (&DAT_180339600)[uVar19 * 4];
  if (iVar9 < 0) {
    DAT_1803e8118._2_1_ = bVar22;
    return 0;
  }
  if (*(int *)(&DAT_1803e8140 + (longlong)iVar9 * 0x28) < 0) {
    iVar9 = (&DAT_180339604)[uVar19 * 4];
    if (iVar9 < 0) {
      DAT_1803e8118._2_1_ = bVar22;
      return 0;
    }
    if (*(int *)(&DAT_1803e8140 + (longlong)iVar9 * 0x28) < 0) {
      iVar9 = (&DAT_180339608)[uVar19 * 4];
      if (iVar9 < 0) {
        DAT_1803e8118._2_1_ = bVar22;
        return 0;
      }
      if (*(int *)(&DAT_1803e8140 + (longlong)iVar9 * 0x28) < 0) {
        iVar9 = *(int *)(&UNK_18033960c + uVar19 * 0x10);
        if (iVar9 < 0) {
          DAT_1803e8118._2_1_ = bVar22;
          return 0;
        }
        if (*(int *)(&DAT_1803e8140 + (longlong)iVar9 * 0x28) < 0) {
          DAT_1803e8118._2_1_ = bVar22;
          return 0;
        }
      }
    }
  }
  lVar3 = (longlong)iVar9 * 5 + 2;
  lVar1 = lVar3 * 8;
  puVar2 = &DAT_1803e8130 + lVar3;
  if (puVar2 == (undefined8 *)0x0) {
    DAT_1803e8118._2_1_ = bVar22;
    return 0;
  }
  fVar30 = (float)(&DAT_1803e8138)[lVar3 * 2];
  if (fVar30 <= DAT_180380bb0) {
    fVar30 = *(float *)(&DAT_18033c3a0 + (longlong)iVar9 * 4);
  }
  fVar25 = DAT_180380bb0;
  if ((DAT_180380a3c < fVar29) && (DAT_180380bb0 < fVar30)) {
    fVar25 = fVar29 / fVar30;
  }
  fVar26 = DAT_180380d30;
  if (fVar25 <= DAT_180380d30) {
    fVar26 = fVar25;
  }
  fVar25 = fVar26;
  if (cVar6 < '\x02') {
    if ((bVar22 == 0) && (DAT_180381278 <= fVar29)) {
      fVar25 = DAT_1803809ec;
    }
  }
  else {
    fVar25 = DAT_180380ac0;
    if (DAT_180380ac0 <= fVar26) {
      fVar25 = fVar26;
    }
  }
  if (DAT_1803e812c < 0.0) {
    fVar29 = 0.0;
  }
  else {
    fVar29 = fVar34 - DAT_1803e812c;
  }
  fVar26 = 0.0;
  if (0.0 <= fVar29) {
    fVar26 = fVar29;
  }
  fVar29 = DAT_180380a58;
  if (fVar26 <= DAT_180380a58) {
    fVar29 = fVar26;
  }
  if (iVar9 == 1) {
    if (DAT_1803e8124 != 2) {
LAB_1801490af:
      bVar24 = false;
      goto LAB_1801490b1;
    }
  }
  else if ((iVar9 != 2) || (DAT_1803e8124 != 1)) goto LAB_1801490af;
  bVar24 = true;
LAB_1801490b1:
  if ((iVar9 != DAT_1803e8124) && (!bVar24)) {
    DAT_1803e8128 = 0.0;
  }
  fVar29 = DAT_1803e8128 + fVar29 * *(float *)((longlong)&DAT_1803e8130 + lVar1 + 4) * fVar25;
  DAT_1803e8118._2_1_ = bVar22;
  DAT_1803e8124 = iVar9;
  DAT_1803e8128 = fVar29;
  DAT_1803e812c = fVar34;
  if ((&DAT_1803e813c)[lVar1] == '\0') {
    if (DAT_180380ba0 < fVar29) {
      DAT_1803e8128 = 0.999;
    }
  }
  else {
    fVar26 = floorf(fVar29);
    DAT_1803e8128 = fVar29 - fVar26;
  }
  fVar29 = local_1f8;
  fVar33 = 0.0;
  fVar26 = fVar32;
  if ((-1 < *(int *)(&DAT_1803e8140 + lVar1)) || (iVar21 = -1, -1 < *(int *)(lVar1 + 0x1803e8144)))
  {
    if (local_1f8 <= DAT_180380fcc) {
      fVar29 = 0.0;
      fVar27 = 0.0;
    }
    else {
      local_e8._4_4_ = 0.0;
      uStack_e0 = 0;
      local_e8._0_4_ = 0;
      (**(code **)(*DAT_1803fa668 + 0x98))(DAT_1803fa668,&local_e8);
      fVar27 = atan2f((float)local_f0,local_1f0._0_4_);
      for (fVar31 = fVar27 * DAT_1803810bc - local_e8._4_4_; DAT_180381188 < fVar31;
          fVar31 = fVar31 + DAT_180381424) {
      }
      for (; fVar31 < DAT_180381420; fVar31 = fVar31 + DAT_18038120c) {
      }
      fVar27 = fVar5;
      if (fVar5 < fVar30) {
        fVar27 = fVar29 / fVar30;
      }
      fVar28 = fVar5;
      if (fVar27 <= fVar5) {
        fVar28 = fVar27;
      }
      fVar29 = 0.0;
      if (0.0 <= fVar28) {
        fVar29 = fVar28;
      }
      fVar31 = fVar31 * DAT_180380994;
      fVar27 = cosf(fVar31);
      fVar27 = fVar27 * fVar29;
      fVar31 = sinf(fVar31);
      fVar29 = (float)((uint)fVar31 ^ DAT_1803817f0) * fVar29;
    }
    iVar21 = *(int *)(&DAT_1803e8140 + lVar1);
    if (-1 < iVar21) {
      fVar31 = *(float *)(lVar1 + 0x1803e814c) - *(float *)(lVar1 + 0x1803e8148);
      iVar23 = iVar21;
      if ((fVar31 <= DAT_18038131c) || (fVar33 = DAT_180380ac0, DAT_180380948 <= fVar31)) {
        fVar31 = (fVar27 - *(float *)(lVar1 + 0x1803e8148)) / fVar31;
        if (0.0 <= fVar31) {
          fVar33 = fVar5;
          if (fVar31 <= fVar5) {
            fVar33 = fVar31;
          }
        }
        else {
          fVar33 = 0.0;
        }
      }
    }
    iVar4 = *(int *)(lVar1 + 0x1803e8144);
    iVar21 = -1;
    if (-1 < iVar4) {
      fVar27 = *(float *)(lVar1 + 0x1803e8154) - *(float *)(&DAT_1803e8150 + lVar1);
      iVar21 = iVar4;
      if ((((fVar27 <= DAT_18038131c) || (fVar26 = DAT_180380ac0, DAT_180380948 <= fVar27)) &&
          (fVar27 = (fVar29 - *(float *)(&DAT_1803e8150 + lVar1)) / fVar27, fVar26 = fVar32,
          0.0 <= fVar27)) && (fVar26 = fVar5, fVar27 <= fVar5)) {
        fVar26 = fVar27;
      }
    }
  }
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  local_220 = 0;
  FUN_18001d080(&local_238,"DT_BaseAnimating",0x10);
  local_180 = &local_238;
  local_188 = (undefined8 *)local_1b8;
  uVar17 = FUN_18016d4c0(local_1b8,&local_238);
  uVar17 = FUN_180018ef0(&DAT_1803fac80,uVar17);
  FUN_18020e450(&local_238);
  local_190 = &local_218;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  local_200 = 0;
  FUN_18001d080(&local_218,"m_nSequence",0xb);
  local_198 = (undefined8 **)&local_218;
  local_f8 = local_168;
  uVar18 = FUN_18016d4c0(local_168,&local_218);
  uVar10 = FUN_180018c10(uVar17,uVar18);
  local_f0 = CONCAT44(local_f0._4_4_,uVar10);
  FUN_18020e450(&local_218);
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  local_200 = 0;
  FUN_18001d080(&local_218,"DT_BaseAnimating",0x10);
  local_1f0 = &local_218;
  local_148 = local_168;
  uVar17 = FUN_18016d4c0(local_168,&local_218);
  uVar17 = FUN_180018ef0(&DAT_1803fac80,uVar17);
  FUN_18020e450(&local_218);
  local_140 = &local_238;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  local_220 = 0;
  FUN_18001d080(&local_238,"m_flCycle",9);
  local_138 = &local_238;
  local_178 = local_1b8;
  uVar18 = FUN_18016d4c0(local_1b8,&local_238);
  uVar10 = FUN_180018c10(uVar17,uVar18);
  local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,uVar10);
  FUN_18020e450(&local_238);
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  local_200 = 0;
  FUN_18001d080(&local_218,"DT_BaseAnimating",0x10);
  local_130 = &local_218;
  local_128 = local_168;
  uVar17 = FUN_18016d4c0(local_168,&local_218);
  uVar17 = FUN_180018ef0(&DAT_1803fac80,uVar17);
  FUN_18020e450(&local_218);
  local_120 = &local_238;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  local_220 = 0;
  FUN_18001d080(&local_238,"m_flPoseParameter",0x11);
  local_118 = &local_238;
  local_170 = local_1b8;
  uVar18 = FUN_18016d4c0(local_1b8,&local_238);
  uVar10 = FUN_180018c10(uVar17,uVar18);
  local_f8 = (undefined1 *)CONCAT44(local_f8._4_4_,uVar10);
  FUN_18020e450(&local_238);
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  local_200 = 0;
  FUN_18001d080(&local_218,"DT_BaseAnimating",0x10);
  local_110 = &local_218;
  local_108 = local_168;
  uVar17 = FUN_18016d4c0(local_168,&local_218);
  uVar17 = FUN_180018ef0(&DAT_1803fac80,uVar17);
  FUN_18020e450(&local_218);
  local_100 = &local_238;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  local_220 = 0;
  FUN_18001d080(&local_238,"m_flPlaybackRate",0x10);
  local_1d8 = &local_238;
  local_e8 = local_1b8;
  uVar18 = FUN_18016d4c0(local_1b8,&local_238);
  FUN_180018c10(uVar17,uVar18);
  FUN_18020e450(&local_238);
  fVar32 = DAT_1803e8128;
  if ((float)local_f0 != 0.0) {
    if (local_1f0._0_4_ != 0.0) {
      local_298 = (double)(longlong)(int)local_f8;
      if ((int)local_f8 != 0) {
        local_260 = (double)CONCAT44(local_260._4_4_,fVar26);
        local_270 = (double)CONCAT44(local_270._4_4_,fVar33);
        local_280 = (double)CONCAT44(local_280._4_4_,fVar25);
        local_288 = (double)CONCAT44(local_288._4_4_,DAT_1803e8128);
        local_290 = (double)CONCAT44(local_290._4_4_,*(undefined4 *)puVar2);
        local_278 = iVar23;
        local_268 = iVar21;
        FUN_180148a10(param_1,(longlong)(int)(float)local_f0,(longlong)(int)local_1f0._0_4_);
        DAT_1803e8280 = 1;
        DAT_1803e8284 = *(undefined4 *)puVar2;
        DAT_1803e8288 = fVar32;
        DAT_1803e828c = fVar25;
        DAT_1803e8290 = iVar23;
        DAT_1803e8294 = iVar21;
        DAT_1803e8298 = fVar33;
        DAT_1803e829c = fVar26;
        if (fVar5 < fVar34 - _DAT_18042584c) {
          local_258 = (double)local_1f8;
          local_260 = (double)fVar26;
          local_270 = (double)fVar33;
          local_280 = (double)fVar25;
          local_288 = (double)fVar30;
          local_290 = (double)(float)(&DAT_1803e8138)[lVar3 * 2];
          local_298 = (double)*(float *)((longlong)&DAT_1803e8130 + lVar1 + 4);
          local_240 = (uint)((char)DAT_1803e8118 != '\0');
          local_248 = (uint)(local_1f4 != 0);
          local_250 = (uint)bVar22;
          _DAT_18042584c = fVar34;
          local_278 = iVar23;
          local_268 = iVar21;
          FUN_180014410("[Toolbox-drv] slot=%d seq=%d cyc=%.3f cps=%.2f gs=%.0f(eff %.0f) rate=%.2f pose=(%d:%.2f, %d:%.2f) spd=%.0f ground=%d duck=%d jump=%d\n"
                        ,iVar9,DAT_1803e8284,(double)fVar32);
        }
        return 1;
      }
    }
  }
  return 0;
}


)B180148a70",
    "7242779771c6f9722ace43de6aa198ada84b8e22534b179c51476b823a652949",
    R"F180148a70C(FUN_180014410
FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_18001d530
FUN_18001d710
FUN_18001e0a0
FUN_18001fcf0
FUN_180148150
FUN_180148a00
FUN_180148a10
FUN_18016d4c0
FUN_1802029c0
FUN_18020e450
FUN_180241a30)F180148a70C",
    R"F180148a70D(LAB_180148e92
LAB_180148e99
LAB_180148eab
LAB_180148ebd
LAB_180148ecc
LAB_180148ed1
LAB_180148f56
LAB_1801490af
LAB_1801490b1
DAT_180339600
DAT_180339604
DAT_180339608
UNK_18033960c
DAT_18033c3a0
DAT_180380948
DAT_180380994
DAT_1803809ec
DAT_180380a3c
DAT_180380a58
DAT_180380ac0
DAT_180380ba0
DAT_180380bb0
DAT_180380d30
DAT_180380fcc
DAT_1803810bc
DAT_1803810ec
DAT_180381188
DAT_18038120c
DAT_180381278
DAT_1803812f0
DAT_18038131c
DAT_180381420
DAT_180381424
DAT_1803817f0
DAT_1803da4c0
DAT_1803e8118
DAT_1803e811c
DAT_1803e8120
DAT_1803e8124
DAT_1803e8128
DAT_1803e812c
DAT_1803e8130
DAT_1803e8138
DAT_1803e813c
DAT_1803e8140
DAT_1803e8150
DAT_1803e8280
DAT_1803e8284
DAT_1803e8288
DAT_1803e828c
DAT_1803e8290
DAT_1803e8294
DAT_1803e8298
DAT_1803e829c
DAT_1803fa608
DAT_1803fa668
DAT_1803fac80
DAT_1803fadf0)F180148a70D",
    R"F180148a70T("m_flCycle"
"m_hVehicle"
"m_nSequence"
"DT_BasePlayer"
"DT_BaseAnimating"
"m_flPlaybackRate"
"m_flPoseParameter"
"[Toolbox-drv] slot=%d seq=%d cyc=%.3f cps=%.2f gs=%.0f(eff %.0f) rate=%.2f pose=(%d:%.2f, %d:%.2f) spd=%.0f ground=%d duck=%d jump=%d\\n")F180148a70T",
    R"F180148a70F(102: if (param_1 == 0) {
103: return 0;
105: if (param_2 == 0) {
106: return 0;
108: if (DAT_1803fa608 == 0) {
109: return 0;
111: if (DAT_1803fa668 == (longlong *)0x0) {
112: return 0;
122: if (-1 < *piVar12) {
126: if (*piVar12 < 0x13) {
131: if ((DAT_1803e8130 != param_2) || (DAT_1803e8138 != *piVar13)) {
141: if (DAT_1803e813c == '\0') {
142: return 0;
152: if (fVar30 < 0.0) {
155: else {
159: if (fVar29 < 0.0) {
162: else {
193: if (iVar9 != 0) {
198: if ((cVar7 == '\b') || (bVar24)) {
201: if (bVar24) {
204: else {
205: if (cVar7 != '\b') goto LAB_180148ecc;
209: else {
210: if ((((DAT_1803e8118._2_1_ == '\0') || (bVar22 != 0)) || (fVar25 <= DAT_1803810ec)) ||
213: if ((char)DAT_1803e8118 != '\0') {
214: if (bVar22 != 0) goto LAB_180148e92;
215: LAB_180148e99:
216: if (cVar8 == '\0') goto LAB_180148ecc;
218: if (cVar6 < '\x02') goto LAB_180148eab;
219: LAB_180148ebd:
223: goto LAB_180148ecc;
225: if (bVar22 != 0) {
226: LAB_180148e92:
228: goto LAB_180148e99;
230: if (cVar6 < '\x01') {
231: if (DAT_1803e8118._1_1_ == '\0') {
235: else if ((0.0 < fVar34 - DAT_1803e811c) && (fVar30 < DAT_180380a58)) {
240: goto LAB_180148eab;
243: LAB_180148ed1:
244: if (DAT_1803812f0 <= fVar29 * fVar29) {
246: goto LAB_180148f56;
249: else {
256: LAB_180148eab:
257: if (DAT_180380a3c < fVar34 - fVar25) {
258: if (bVar22 != 0) goto LAB_180148ebd;
259: goto LAB_180148ed1;
261: LAB_180148ecc:
262: if (bVar22 == 0) goto LAB_180148ed1;
264: if (cVar8 == '\0') {
265: if ((cVar6 < '\x02') || (bVar22 != 0)) {
266: if (local_1f4 == 0) {
267: if (fVar30 <= _DAT_1803812bc) {
269: if (DAT_180380a58 < fVar30) {
273: else {
277: else {
281: else {
285: else {
289: LAB_180148f56:
291: if (iVar9 < 0) {
293: return 0;
295: if (*(int *)(&DAT_1803e8140 + (longlong)iVar9 * 0x28) < 0) {
297: if (iVar9 < 0) {
299: return 0;
301: if (*(int *)(&DAT_1803e8140 + (longlong)iVar9 * 0x28) < 0) {
303: if (iVar9 < 0) {
305: return 0;
307: if (*(int *)(&DAT_1803e8140 + (longlong)iVar9 * 0x28) < 0) {
309: if (iVar9 < 0) {
311: return 0;
313: if (*(int *)(&DAT_1803e8140 + (longlong)iVar9 * 0x28) < 0) {
315: return 0;
323: if (puVar2 == (undefined8 *)0x0) {
325: return 0;
328: if (fVar30 <= DAT_180380bb0) {
332: if ((DAT_180380a3c < fVar29) && (DAT_180380bb0 < fVar30)) {
336: if (fVar25 <= DAT_180380d30) {
340: if (cVar6 < '\x02') {
341: if ((bVar22 == 0) && (DAT_180381278 <= fVar29)) {
345: else {
347: if (DAT_180380ac0 <= fVar26) {
351: if (DAT_1803e812c < 0.0) {
354: else {
358: if (0.0 <= fVar29) {
362: if (fVar26 <= DAT_180380a58) {
365: if (iVar9 == 1) {
366: if (DAT_1803e8124 != 2) {
367: LAB_1801490af:
369: goto LAB_1801490b1;
372: else if ((iVar9 != 2) || (DAT_1803e8124 != 1)) goto LAB_1801490af;
374: LAB_1801490b1:
375: if ((iVar9 != DAT_1803e8124) && (!bVar24)) {
383: if ((&DAT_1803e813c)[lVar1] == '\0') {
384: if (DAT_180380ba0 < fVar29) {
388: else {
395: if ((-1 < *(int *)(&DAT_1803e8140 + lVar1)) || (iVar21 = -1, -1 < *(int *)(lVar1 + 0x1803e8144)))
397: if (local_1f8 <= DAT_180380fcc) {
401: else {
407: for (fVar31 = fVar27 * DAT_1803810bc - local_e8._4_4_; DAT_180381188 < fVar31;
410: for (; fVar31 < DAT_180381420; fVar31 = fVar31 + DAT_18038120c) {
413: if (fVar5 < fVar30) {
417: if (fVar27 <= fVar5) {
421: if (0.0 <= fVar28) {
431: if (-1 < iVar21) {
434: if ((fVar31 <= DAT_18038131c) || (fVar33 = DAT_180380ac0, DAT_180380948 <= fVar31)) {
436: if (0.0 <= fVar31) {
438: if (fVar31 <= fVar5) {
442: else {
449: if (-1 < iVar4) {
452: if ((((fVar27 <= DAT_18038131c) || (fVar26 = DAT_180380ac0, DAT_180380948 <= fVar27)) &&
547: if ((float)local_f0 != 0.0) {
548: if (local_1f0._0_4_ != 0.0) {
550: if ((int)local_f8 != 0) {
567: if (fVar5 < fVar34 - _DAT_18042584c) {
584: return 1;
588: return 0;)F180148a70F",
    R"F180148a70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180148e92.
TODO: recover the declaration, type and value for global/data reference LAB_180148e99.
TODO: recover the declaration, type and value for global/data reference LAB_180148eab.
TODO: recover the declaration, type and value for global/data reference LAB_180148ebd.
TODO: recover the declaration, type and value for global/data reference LAB_180148ecc.
TODO: recover the declaration, type and value for global/data reference LAB_180148ed1.
TODO: recover the declaration, type and value for global/data reference LAB_180148f56.
TODO: recover the declaration, type and value for global/data reference LAB_1801490af.
TODO: recover the declaration, type and value for global/data reference LAB_1801490b1.
TODO: recover the declaration, type and value for global/data reference DAT_180339600.
TODO: recover the declaration, type and value for global/data reference DAT_180339604.
TODO: recover the declaration, type and value for global/data reference DAT_180339608.
TODO: recover the declaration, type and value for global/data reference UNK_18033960c.
TODO: recover the declaration, type and value for global/data reference DAT_18033c3a0.
TODO: recover the declaration, type and value for global/data reference DAT_180380948.
TODO: recover the declaration, type and value for global/data reference DAT_180380994.
TODO: recover the declaration, type and value for global/data reference DAT_1803809ec.
TODO: recover the declaration, type and value for global/data reference DAT_180380a3c.
TODO: recover the declaration, type and value for global/data reference DAT_180380a58.
TODO: recover the declaration, type and value for global/data reference DAT_180380ac0.
TODO: recover the declaration, type and value for global/data reference DAT_180380ba0.
TODO: recover the declaration, type and value for global/data reference DAT_180380bb0.
TODO: recover the declaration, type and value for global/data reference DAT_180380d30.
TODO: recover the declaration, type and value for global/data reference DAT_180380fcc.
TODO: recover the declaration, type and value for global/data reference DAT_1803810bc.
TODO: recover the declaration, type and value for global/data reference DAT_1803810ec.
TODO: recover the declaration, type and value for global/data reference DAT_180381188.
TODO: recover the declaration, type and value for global/data reference DAT_18038120c.
TODO: recover the declaration, type and value for global/data reference DAT_180381278.
TODO: recover the declaration, type and value for global/data reference DAT_1803812f0.
TODO: recover the declaration, type and value for global/data reference DAT_18038131c.
TODO: recover the declaration, type and value for global/data reference DAT_180381420.
TODO: recover the declaration, type and value for global/data reference DAT_180381424.
TODO: recover the declaration, type and value for global/data reference DAT_1803817f0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8118.
TODO: recover the declaration, type and value for global/data reference DAT_1803e811c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8120.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8124.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8128.
TODO: recover the declaration, type and value for global/data reference DAT_1803e812c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8130.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8138.
TODO: recover the declaration, type and value for global/data reference DAT_1803e813c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8140.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8150.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8280.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8284.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8288.
TODO: recover the declaration, type and value for global/data reference DAT_1803e828c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8290.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8294.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8298.
TODO: recover the declaration, type and value for global/data reference DAT_1803e829c.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa608.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: resolve the indirect call in body 405: (**(code **)(*DAT_1803fa668 + 0x98))(DAT_1803fa668,&local_e8);.)F180148a70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180148a70() noexcept {
    return kFunction_0x180148a70;
}

// 0x180149800 FUN_180149800
// source: re/dump/decompile/0x180149800_FUN_180149800.c
// size: 998 bytes; thunk: false
// body sha256: 0a0b683925e407504e0291d222f646b824aa60ae588e27a36bc433458bd0cea7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180149800{
    "0x180149800",
    "FUN_180149800",
    R"F180149800S(undefined FUN_180149800())F180149800S",
    R"B180149800(// 0x180149800  FUN_180149800
// size=998 thunk=false
// signature: undefined FUN_180149800()
// status: ok


void FUN_180149800(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined8 *local_c8;
  undefined1 *local_c0;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  
  if ((param_1 != 0) && (DAT_1803e8280 != '\0')) {
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    local_130 = 0;
    FUN_18001d080(&local_148,"DT_BaseAnimating",0x10);
    uVar5 = FUN_18016d4c0(local_108,&local_148);
    uVar5 = FUN_180018ef0(&DAT_1803fac80,uVar5);
    FUN_18020e450(&local_148);
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = 0;
    FUN_18001d080(&local_128,"m_nSequence",0xb);
    local_c8 = &local_128;
    local_c0 = local_e8;
    uVar6 = FUN_18016d4c0(local_e8,&local_128);
    iVar1 = FUN_180018c10(uVar5,uVar6);
    FUN_18020e450(&local_128);
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = 0;
    FUN_18001d080(&local_128,"DT_BaseAnimating",0x10);
    local_b8 = &local_128;
    local_b0 = local_e8;
    uVar5 = FUN_18016d4c0(local_e8,&local_128);
    uVar5 = FUN_180018ef0(&DAT_1803fac80,uVar5);
    FUN_18020e450(&local_128);
    local_a8 = &local_148;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    local_130 = 0;
    FUN_18001d080(&local_148,"m_flCycle",9);
    local_a0 = &local_148;
    local_98 = local_108;
    uVar6 = FUN_18016d4c0(local_108,&local_148);
    iVar2 = FUN_180018c10(uVar5,uVar6);
    FUN_18020e450(&local_148);
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = 0;
    FUN_18001d080(&local_128,"DT_BaseAnimating",0x10);
    local_90 = &local_128;
    local_88 = local_e8;
    uVar5 = FUN_18016d4c0(local_e8,&local_128);
    uVar5 = FUN_180018ef0(&DAT_1803fac80,uVar5);
    FUN_18020e450(&local_128);
    local_80 = &local_148;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    local_130 = 0;
    FUN_18001d080(&local_148,"m_flPoseParameter",0x11);
    local_78 = &local_148;
    local_70 = local_108;
    uVar6 = FUN_18016d4c0(local_108,&local_148);
    iVar3 = FUN_180018c10(uVar5,uVar6);
    FUN_18020e450(&local_148);
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    local_110 = 0;
    FUN_18001d080(&local_128,"DT_BaseAnimating",0x10);
    local_68 = &local_128;
    local_60 = local_e8;
    uVar5 = FUN_18016d4c0(local_e8,&local_128);
    uVar5 = FUN_180018ef0(&DAT_1803fac80,uVar5);
    FUN_18020e450(&local_128);
    local_58 = &local_148;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    local_130 = 0;
    FUN_18001d080(&local_148,"m_flPlaybackRate",0x10);
    local_50 = &local_148;
    local_48 = local_108;
    uVar6 = FUN_18016d4c0(local_108,&local_148);
    iVar4 = FUN_180018c10(uVar5,uVar6);
    FUN_18020e450(&local_148);
    if ((iVar1 != 0) && ((iVar2 != 0 && (iVar3 != 0)))) {
      FUN_180148a10(param_1,(longlong)iVar1,(longlong)iVar2,(longlong)iVar4,(longlong)iVar3,
                    DAT_1803e8284,DAT_1803e8288,DAT_1803e828c,DAT_1803e8290,DAT_1803e8298,
                    DAT_1803e8294,DAT_1803e829c);
    }
  }
  return;
}


)B180149800",
    "0a0b683925e407504e0291d222f646b824aa60ae588e27a36bc433458bd0cea7",
    R"F180149800C(FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_180148a10
FUN_18016d4c0
FUN_18020e450)F180149800C",
    R"F180149800D(DAT_1803e8280
DAT_1803e8284
DAT_1803e8288
DAT_1803e828c
DAT_1803e8290
DAT_1803e8294
DAT_1803e8298
DAT_1803e829c
DAT_1803fac80)F180149800D",
    R"F180149800T("m_flCycle"
"m_nSequence"
"DT_BaseAnimating"
"m_flPlaybackRate"
"m_flPoseParameter")F180149800T",
    R"F180149800F(44: if ((param_1 != 0) && (DAT_1803e8280 != '\0')) {
126: if ((iVar1 != 0) && ((iVar2 != 0 && (iVar3 != 0)))) {
132: return;)F180149800F",
    R"F180149800U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8280.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8284.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8288.
TODO: recover the declaration, type and value for global/data reference DAT_1803e828c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8290.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8294.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8298.
TODO: recover the declaration, type and value for global/data reference DAT_1803e829c.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.)F180149800U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180149800() noexcept {
    return kFunction_0x180149800;
}

// 0x180149bf0 FUN_180149bf0
// source: re/dump/decompile/0x180149bf0_FUN_180149bf0.c
// size: 370 bytes; thunk: false
// body sha256: cf5e3b5abb3494a9542b375367b3f7dac60b8f6b86e834778b0610f70e555727
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180149bf0{
    "0x180149bf0",
    "FUN_180149bf0",
    R"F180149bf0S(undefined FUN_180149bf0())F180149bf0S",
    R"B180149bf0(// 0x180149bf0  FUN_180149bf0
// size=370 thunk=false
// signature: undefined FUN_180149bf0()
// status: ok


void FUN_180149bf0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  float *pfVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  
  uVar5 = *(undefined4 *)(param_1 + param_2);
  fVar1 = *(float *)(param_1 + param_3);
  cVar4 = *(char *)(param_1 + param_5);
  uVar6 = *(uint *)(param_1 + param_6);
  uVar7 = FUN_180147610();
  uVar8 = FUN_180147650(param_1);
  fVar2 = *(float *)(param_1 + param_4);
  fVar3 = *(float *)(param_1 + 4 + param_4);
  uVar9 = FUN_1801475e0(param_1);
  lVar10 = FUN_1800b9fe0(uVar9);
  if (lVar10 == 0) {
    uVar13 = 0xffffffff;
    uVar12 = uVar13;
  }
  else {
    uVar13 = *(undefined4 *)(lVar10 + 0xbc);
    uVar12 = uVar13;
    if ((DAT_1803f9250 != (longlong *)0x0) &&
       (lVar10 = (**(code **)(*DAT_1803f9250 + 0xb8))(), lVar10 != 0)) {
      uVar12 = *(undefined4 *)(lVar10 + 0x18);
    }
  }
  pfVar11 = (float *)FUN_18001d530(param_1);
  fVar14 = pfVar11[1] * pfVar11[1] + *pfVar11 * *pfVar11;
  if (fVar14 < 0.0) {
    fVar14 = sqrtf(fVar14);
  }
  else {
    fVar14 = SQRT(fVar14);
  }
  FUN_180014410("[Toolbox-anim] seq=%d cyc=%.3f animState=%p pose01=(%.2f,%.2f) csAnim=%d idxWord=%d localSeq=%d masterSeq=%d ground=%d spd=%.0f\n"
                ,uVar5,(double)fVar1,uVar8,(double)fVar2,(double)fVar3,cVar4 != '\0',uVar7,uVar13,
                uVar12,uVar6 & 1,(double)fVar14);
  return;
}


)B180149bf0",
    "cf5e3b5abb3494a9542b375367b3f7dac60b8f6b86e834778b0610f70e555727",
    R"F180149bf0C(FUN_180014410
FUN_18001d530
FUN_1800b9fe0
FUN_1801475e0
FUN_180147610
FUN_180147650)F180149bf0C",
    R"F180149bf0D(DAT_1803f9250)F180149bf0D",
    R"F180149bf0T("[Toolbox-anim] seq=%d cyc=%.3f animState=%p pose01=(%.2f,%.2f) csAnim=%d idxWord=%d localSeq=%d masterSeq=%d ground=%d spd=%.0f\\n")F180149bf0T",
    R"F180149bf0F(36: if (lVar10 == 0) {
40: else {
43: if ((DAT_1803f9250 != (longlong *)0x0) &&
50: if (fVar14 < 0.0) {
53: else {
59: return;)F180149bf0F",
    R"F180149bf0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803f9250.
TODO: resolve the indirect call in body 44: (lVar10 = (**(code **)(*DAT_1803f9250 + 0xb8))(), lVar10 != 0)) {.)F180149bf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180149bf0() noexcept {
    return kFunction_0x180149bf0;
}

// 0x180149d70 FUN_180149d70
// source: re/dump/decompile/0x180149d70_FUN_180149d70.c
// size: 1304 bytes; thunk: false
// body sha256: 1088150a78e2496e641a21ea370315e94c51b6e08b4f9052b6e19e82a4d8a1a1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180149d70{
    "0x180149d70",
    "FUN_180149d70",
    R"F180149d70S(undefined FUN_180149d70())F180149d70S",
    R"B180149d70(// 0x180149d70  FUN_180149d70
// size=1304 thunk=false
// signature: undefined FUN_180149d70()
// status: ok


void FUN_180149d70(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_278 [32];
  undefined1 local_258 [32];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 *local_f8;
  undefined1 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  
  if (((param_1 != 0) && (DAT_1803fa608 != 0)) &&
     (DAT_180380d08 <= *(double *)(DAT_1803fa608 + 0x10) - (double)DAT_180425b70)) {
    DAT_180425b70 = (float)*(double *)(DAT_1803fa608 + 0x10);
    FUN_180014410("[Toolbox-anim] reasserts/sec=%d guardRedirects/sec=%d guardIdx=%d srvIdx=%d\n",
                  DAT_180409ae8,DAT_180409a90,DAT_1803e83a4,DAT_1803e8450);
    DAT_180409ae8 = 0;
    DAT_180409a90 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    local_220 = 0;
    FUN_18001d080(&local_238,"DT_BasePlayer",0xd);
    uVar6 = FUN_18016d4c0(local_258,&local_238);
    uVar6 = FUN_180018ef0(&DAT_1803fac80,uVar6);
    FUN_18020e450(&local_238);
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    local_200 = 0;
    FUN_18001d080(&local_218,"m_fFlags",8);
    local_d0 = &local_218;
    local_a8 = local_278;
    uVar7 = FUN_18016d4c0(local_278,&local_218);
    iVar1 = FUN_180018c10(uVar6,uVar7);
    FUN_18020e450(&local_218);
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    local_1e0 = 0;
    FUN_18001d080(&local_1f8,"DT_BaseAnimating",0x10);
    local_a0 = &local_1f8;
    local_98 = local_278;
    uVar6 = FUN_18016d4c0(local_278,&local_1f8);
    uVar6 = FUN_180018ef0(&DAT_1803fac80,uVar6);
    FUN_18020e450(&local_1f8);
    local_90 = &local_1d8;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    FUN_18001d080(&local_1d8,"m_bClientSideAnimation",0x16);
    local_88 = &local_1d8;
    local_80 = local_258;
    uVar7 = FUN_18016d4c0(local_258,&local_1d8);
    iVar2 = FUN_180018c10(uVar6,uVar7);
    FUN_18020e450(&local_1d8);
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = 0;
    FUN_18001d080(&local_1b8,"DT_BaseAnimating",0x10);
    local_78 = &local_1b8;
    local_70 = local_278;
    uVar6 = FUN_18016d4c0(local_278,&local_1b8);
    uVar6 = FUN_180018ef0(&DAT_1803fac80,uVar6);
    FUN_18020e450(&local_1b8);
    local_68 = &local_198;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    local_180 = 0;
    FUN_18001d080(&local_198,"m_flPoseParameter",0x11);
    local_60 = &local_198;
    local_58 = local_258;
    uVar7 = FUN_18016d4c0(local_258,&local_198);
    iVar3 = FUN_180018c10(uVar6,uVar7);
    FUN_18020e450(&local_198);
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    local_160 = 0;
    FUN_18001d080(&local_178,"DT_BaseAnimating",0x10);
    local_f8 = &local_178;
    local_f0 = local_278;
    uVar6 = FUN_18016d4c0(local_278,&local_178);
    uVar6 = FUN_180018ef0(&DAT_1803fac80,uVar6);
    FUN_18020e450(&local_178);
    local_e8 = &local_158;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    local_140 = 0;
    FUN_18001d080(&local_158,"m_flCycle",9);
    local_e0 = &local_158;
    local_d8 = local_258;
    uVar7 = FUN_18016d4c0(local_258,&local_158);
    iVar4 = FUN_180018c10(uVar6,uVar7);
    FUN_18020e450(&local_158);
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    local_120 = 0;
    FUN_18001d080(&local_138,"DT_BaseAnimating",0x10);
    local_50 = &local_138;
    local_c8 = local_278;
    uVar6 = FUN_18016d4c0(local_278,&local_138);
    uVar6 = FUN_180018ef0(&DAT_1803fac80,uVar6);
    FUN_18020e450(&local_138);
    local_c0 = &local_118;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    local_100 = 0;
    FUN_18001d080(&local_118,"m_nSequence",0xb);
    local_b8 = &local_118;
    local_b0 = local_258;
    uVar7 = FUN_18016d4c0(local_258,&local_118);
    iVar5 = FUN_180018c10(uVar6,uVar7);
    FUN_18020e450(&local_118);
    FUN_180149bf0(param_1,(longlong)iVar5,(longlong)iVar4,(longlong)iVar3,(longlong)iVar2,
                  (longlong)iVar1);
  }
  return;
}


)B180149d70",
    "1088150a78e2496e641a21ea370315e94c51b6e08b4f9052b6e19e82a4d8a1a1",
    R"F180149d70C(FUN_180014410
FUN_180018c10
FUN_180018ef0
FUN_18001d080
FUN_180149bf0
FUN_18016d4c0
FUN_18020e450)F180149d70C",
    R"F180149d70D(DAT_180380d08
DAT_1803e83a4
DAT_1803e8450
DAT_1803fa608
DAT_1803fac80
DAT_180409a90
DAT_180409ae8
DAT_180425b70)F180149d70D",
    R"F180149d70T("m_fFlags"
"m_flCycle"
"m_nSequence"
"DT_BasePlayer"
"DT_BaseAnimating"
"m_flPoseParameter"
"m_bClientSideAnimation"
"[Toolbox-anim] reasserts/sec=%d guardRedirects/sec=%d guardIdx=%d srvIdx=%d\\n")F180149d70T",
    R"F180149d70F(82: if (((param_1 != 0) && (DAT_1803fa608 != 0)) &&
194: return;)F180149d70F",
    R"F180149d70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380d08.
TODO: recover the declaration, type and value for global/data reference DAT_1803e83a4.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8450.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa608.
TODO: recover the declaration, type and value for global/data reference DAT_1803fac80.
TODO: recover the declaration, type and value for global/data reference DAT_180409a90.
TODO: recover the declaration, type and value for global/data reference DAT_180409ae8.
TODO: recover the declaration, type and value for global/data reference DAT_180425b70.)F180149d70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180149d70() noexcept {
    return kFunction_0x180149d70;
}

// 0x18014a290 FUN_18014a290
// source: re/dump/decompile/0x18014a290_FUN_18014a290.c
// size: 1018 bytes; thunk: false
// body sha256: b53c0bffb90eccc0df1fa0db3264645078a456bc758ef8b9b520903983e73025
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014a290{
    "0x18014a290",
    "FUN_18014a290",
    R"F18014a290S(undefined FUN_18014a290())F18014a290S",
    R"B18014a290(// 0x18014a290  FUN_18014a290
// size=1018 thunk=false
// signature: undefined FUN_18014a290()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18014a290(void)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  ULONGLONG UVar7;
  size_t sVar8;
  undefined8 ***pppuVar9;
  undefined ****ppppuVar10;
  ulonglong uVar11;
  char *pcVar12;
  undefined1 auStack_e8 [32];
  undefined8 **local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 **local_98;
  undefined8 uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  undefined ***local_78;
  undefined8 **ppuStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  undefined **local_58;
  undefined *puStack_50;
  undefined8 **local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0xf;
  local_98 = (undefined8 ***)0x0;
  local_a0 = &DAT_1803e8400;
  iVar6 = _Mtx_lock(&DAT_1803e8400);
  if (iVar6 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e844c == 0x7fffffff) {
    DAT_1803e844c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  if (DAT_180409a70 == 0) {
    _Mtx_unlock(&DAT_1803e8400);
  }
  else {
    UVar7 = GetTickCount64();
    iVar6 = DAT_180409a70;
    uVar11 = UVar7 - _DAT_180409af0;
    pppuVar9 = DAT_1803e9f08;
    uVar2 = _DAT_1803e9f10;
    lVar3 = _DAT_1803e9f18;
    uVar4 = DAT_1803e9f20;
    DAT_1803e9f08 = (undefined8 ***)local_98;
    _DAT_1803e9f10 = uStack_90;
    _DAT_1803e9f18 = local_88;
    DAT_1803e9f20 = uStack_80;
    DAT_180409a70 = 0;
    local_98 = pppuVar9;
    uStack_90 = uVar2;
    local_88 = lVar3;
    uStack_80 = uVar4;
    _Mtx_unlock(&DAT_1803e8400);
    if (uVar11 < 0x7d1) {
      if (local_88 != 0) {
        if (iVar6 == 2) {
          pppuVar9 = &local_98;
          if (0xf < uStack_80) {
            pppuVar9 = (undefined8 ***)local_98;
          }
          local_78 = (undefined ***)vftable_Features_Toolbox_RawDisconnectMessage;
          ppuStack_70 = (undefined8 **)&DAT_18033e5ea;
          if (pppuVar9 != (undefined8 ***)0x0) {
            ppuStack_70 = pppuVar9;
          }
          local_68 = 0;
          uStack_60 = 1;
          cVar5 = FUN_180146780(&local_78);
          pcVar12 = "net_Disconnect failed";
          if (cVar5 != '\0') {
            pcVar12 = "Disconnect sent";
          }
          local_c8 = (undefined8 ***)0x0;
          uStack_c0 = 0;
          local_b8 = 0;
          local_b0 = 0;
          sVar8 = strlen(pcVar12);
          FUN_18001d080(&local_c8,pcVar12,sVar8);
          local_a8 = &DAT_1803e8400;
          iVar6 = _Mtx_lock(&DAT_1803e8400);
          if (iVar6 != 0) {
            std::_Throw_Cpp_error(5);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (DAT_1803e844c == 0x7fffffff) {
            DAT_1803e844c = 0x7ffffffe;
            std::_Throw_Cpp_error(6);
          }
          pppuVar9 = &local_c8;
          if (0xf < local_b0) {
            pppuVar9 = (undefined8 ***)local_c8;
          }
          FUN_180212700(s_Ready_1803e9eb8,pppuVar9,local_b8);
          _Mtx_unlock(&DAT_1803e8400);
          FUN_18020e450(&local_c8);
          local_78 = (undefined ***)vftable_INetMessage;
        }
        else {
          pppuVar9 = &local_98;
          if (0xf < uStack_80) {
            pppuVar9 = (undefined8 ***)local_98;
          }
          local_58 = vftable_Features_Toolbox_RawSetConVarMessage;
          puStack_50 = &DAT_180341148;
          local_48 = (undefined8 **)&DAT_18033e5ea;
          if (pppuVar9 != (undefined8 ***)0x0) {
            local_48 = pppuVar9;
          }
          uStack_40 = 0;
          local_38 = 1;
          cVar5 = FUN_180146780(&local_58);
          pcVar12 = "NET_SetConVar failed";
          if (cVar5 != '\0') {
            pcVar12 = "Name sent via NET_SetConVar";
          }
          local_78 = (undefined ***)0x0;
          ppuStack_70 = (undefined8 ***)0x0;
          local_68 = 0;
          uStack_60 = 0;
          sVar8 = strlen(pcVar12);
          FUN_18001d080(&local_78,pcVar12,sVar8);
          local_a8 = &DAT_1803e8400;
          iVar6 = _Mtx_lock(&DAT_1803e8400);
          if (iVar6 != 0) {
            std::_Throw_Cpp_error(5);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (DAT_1803e844c == 0x7fffffff) {
            DAT_1803e844c = 0x7ffffffe;
            std::_Throw_Cpp_error(6);
          }
          ppppuVar10 = &local_78;
          if (0xf < uStack_60) {
            ppppuVar10 = (undefined ****)local_78;
          }
          FUN_180212700(s_Ready_1803e9eb8,ppppuVar10,local_68);
          _Mtx_unlock(&DAT_1803e8400);
          FUN_18020e450(&local_78);
          local_58 = vftable_INetMessage;
        }
      }
    }
    else {
      local_c8 = (undefined8 ***)0x0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      FUN_18001d080(&local_c8,"Dropped: queued in another session",0x22);
      local_a8 = &DAT_1803e8400;
      iVar6 = _Mtx_lock(&DAT_1803e8400);
      if (iVar6 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e844c == 0x7fffffff) {
        DAT_1803e844c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      pppuVar9 = &local_c8;
      if (0xf < local_b0) {
        pppuVar9 = (undefined8 ***)local_c8;
      }
      FUN_180212700(s_Ready_1803e9eb8,pppuVar9,local_b8);
      _Mtx_unlock(&DAT_1803e8400);
      FUN_18020e450(&local_c8);
    }
  }
  FUN_18020e450(&local_98);
  return;
}


)B18014a290",
    "b53c0bffb90eccc0df1fa0db3264645078a456bc758ef8b9b520903983e73025",
    R"F18014a290C(FUN_18001d080
FUN_180146780
FUN_18020e450
FUN_180212700)F18014a290C",
    R"F18014a290D(DAT_18033e5ea
DAT_180341148
DAT_1803da4c0
DAT_1803e8400
DAT_1803e844c
DAT_1803e9f08
DAT_1803e9f20
DAT_180409a70)F18014a290D",
    R"F18014a290T("Disconnect sent"
"NET_SetConVar failed"
"net_Disconnect failed"
"Name sent via NET_SetConVar"
"Dropped: queued in another session")F18014a290T",
    R"F18014a290F(54: if (iVar6 != 0) {
58: return;
60: if (DAT_1803e844c == 0x7fffffff) {
64: if (DAT_180409a70 == 0) {
67: else {
85: if (uVar11 < 0x7d1) {
86: if (local_88 != 0) {
87: if (iVar6 == 2) {
89: if (0xf < uStack_80) {
94: if (pppuVar9 != (undefined8 ***)0x0) {
101: if (cVar5 != '\0') {
112: if (iVar6 != 0) {
116: return;
118: if (DAT_1803e844c == 0x7fffffff) {
123: if (0xf < local_b0) {
131: else {
133: if (0xf < uStack_80) {
139: if (pppuVar9 != (undefined8 ***)0x0) {
146: if (cVar5 != '\0') {
157: if (iVar6 != 0) {
161: return;
163: if (DAT_1803e844c == 0x7fffffff) {
168: if (0xf < uStack_60) {
178: else {
186: if (iVar6 != 0) {
190: return;
192: if (DAT_1803e844c == 0x7fffffff) {
197: if (0xf < local_b0) {
206: return;)F18014a290F",
    R"F18014a290U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type and value for global/data reference DAT_180341148.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8400.
TODO: recover the declaration, type and value for global/data reference DAT_1803e844c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f08.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9f20.
TODO: recover the declaration, type and value for global/data reference DAT_180409a70.
TODO: resolve the indirect call in body 56: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 57: (*pcVar1)();.
TODO: resolve the indirect call in body 114: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 115: (*pcVar1)();.
TODO: resolve the indirect call in body 159: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 160: (*pcVar1)();.
TODO: resolve the indirect call in body 188: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 189: (*pcVar1)();.)F18014a290U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014a290() noexcept {
    return kFunction_0x18014a290;
}

// 0x18014a690 FUN_18014a690
// source: re/dump/decompile/0x18014a690_FUN_18014a690.c
// size: 600 bytes; thunk: false
// body sha256: d470848b2692082ecbc27f636cf8188abf7249e7ab14ad721a61fe14ae73e3e6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014a690{
    "0x18014a690",
    "FUN_18014a690",
    R"F18014a690S(undefined FUN_18014a690())F18014a690S",
    R"B18014a690(// 0x18014a690  FUN_18014a690
// size=600 thunk=false
// signature: undefined FUN_18014a690()
// status: ok


void FUN_18014a690(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  size_t sVar7;
  undefined8 ***pppuVar8;
  undefined8 *puVar9;
  char *pcVar10;
  undefined8 **local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  DAT_180409ae0 = 0;
  DAT_1803e83a4 = 0xffffffff;
  DAT_180409b88 = 0;
  DAT_1803e8450 = 0xffffffff;
  if (((param_2 == 0) || (param_2 != *(longlong *)(param_1 + 0x10))) ||
     (param_2 != *(longlong *)(param_1 + 0x50))) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_180014410("[Toolbox] restore SKIPPED: no snapshot for this entity (owner=%p local=%p idx=%d)\n"
                    ,*(undefined8 *)(param_1 + 0x50),param_2,*(undefined4 *)(param_1 + 0x60));
    }
    if (param_2 == 0) goto LAB_18014a8a2;
  }
  else {
    if (*(int *)(param_1 + 0x60) < 0) {
LAB_18014a727:
      lVar1 = *(longlong *)(param_1 + 0x58);
      if (lVar1 != 0) {
        cVar4 = FUN_1801477c0(param_2,lVar1,1);
        if (cVar4 != '\0') {
          lVar1 = *(longlong *)(param_1 + 0x58);
          lVar6 = FUN_1801475e0(param_2);
          if (lVar6 == lVar1) {
            bVar3 = true;
            goto LAB_18014a758;
          }
        }
      }
      bVar3 = false;
    }
    else {
      cVar4 = FUN_1801478f0(param_2);
      if (cVar4 == '\0') goto LAB_18014a727;
      lVar1 = *(longlong *)(param_1 + 0x58);
      if (lVar1 != 0) {
        lVar6 = FUN_1801475e0(param_2);
        if (lVar6 != lVar1) goto LAB_18014a727;
      }
      bVar3 = true;
    }
LAB_18014a758:
    pcVar10 = "FAILED";
    if (bVar3) {
      pcVar10 = "OK";
    }
    FUN_180014410("[Toolbox] restore idx=%d model=%p -> %s\n",*(undefined4 *)(param_1 + 0x60),
                  *(undefined8 *)(param_1 + 0x58),pcVar10);
  }
  if (DAT_1803fa668 != (longlong *)0x0) {
    cVar4 = (**(code **)(*DAT_1803fa668 + 0xd0))();
    if (cVar4 != '\0') {
      cVar4 = FUN_180147b40();
      pcVar10 = "UNAVAILABLE";
      if (cVar4 != '\0') {
        pcVar10 = "OK";
      }
      FUN_180014410("[Toolbox] full-update requested -> %s\n",pcVar10);
      pcVar10 = "Model restored (full-update sig OUTDATED - snapshot only)";
      if (cVar4 != '\0') {
        pcVar10 = "Model restored - server re-sync requested";
      }
      local_48 = (undefined8 ***)0x0;
      uStack_40 = 0;
      local_38 = 0;
      local_30 = 0;
      sVar7 = strlen(pcVar10);
      FUN_18001d080(&local_48,pcVar10,sVar7);
      iVar5 = _Mtx_lock(&DAT_1803e8400);
      if (iVar5 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (DAT_1803e844c == 0x7fffffff) {
        DAT_1803e844c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      pppuVar8 = &local_48;
      if (0xf < local_30) {
        pppuVar8 = (undefined8 ***)local_48;
      }
      FUN_180212700(s_Ready_1803e9eb8,pppuVar8,local_38);
      _Mtx_unlock(&DAT_1803e8400);
      FUN_18020e450(&local_48);
    }
  }
LAB_18014a8a2:
  *(undefined8 *)(param_1 + 0x24) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  puVar9 = (undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x48)) {
    puVar9 = (undefined8 *)*puVar9;
  }
  *(undefined1 *)puVar9 = 0;
  FUN_1801488a0();
  return;
}


)B18014a690",
    "d470848b2692082ecbc27f636cf8188abf7249e7ab14ad721a61fe14ae73e3e6",
    R"F18014a690C(FUN_180014410
FUN_18001d080
FUN_1801475e0
FUN_1801477c0
FUN_1801478f0
FUN_180147b40
FUN_1801488a0
FUN_18020e450
FUN_180212700)F18014a690C",
    R"F18014a690D(LAB_18014a727
LAB_18014a758
LAB_18014a8a2
DAT_1803e83a4
DAT_1803e8400
DAT_1803e844c
DAT_1803e8450
DAT_1803fa668
DAT_180409ae0
DAT_180409b88)F18014a690D",
    R"F18014a690T("OK"
"FAILED"
"UNAVAILABLE"
"[Toolbox] full-update requested -> %s\\n"
"Model restored - server re-sync requested"
"[Toolbox] restore idx=%d model=%p -> %s\\n"
"Model restored (full-update sig OUTDATED - snapshot only)"
"[Toolbox] restore SKIPPED: no snapshot for this entity (owner=%p local=%p idx=%d)\\n")F18014a690T",
    R"F18014a690F(29: if (((param_2 == 0) || (param_2 != *(longlong *)(param_1 + 0x10))) ||
31: if (*(longlong *)(param_1 + 0x10) != 0) {
35: if (param_2 == 0) goto LAB_18014a8a2;
37: else {
38: if (*(int *)(param_1 + 0x60) < 0) {
39: LAB_18014a727:
41: if (lVar1 != 0) {
43: if (cVar4 != '\0') {
46: if (lVar6 == lVar1) {
48: goto LAB_18014a758;
54: else {
56: if (cVar4 == '\0') goto LAB_18014a727;
58: if (lVar1 != 0) {
60: if (lVar6 != lVar1) goto LAB_18014a727;
64: LAB_18014a758:
66: if (bVar3) {
72: if (DAT_1803fa668 != (longlong *)0x0) {
74: if (cVar4 != '\0') {
77: if (cVar4 != '\0') {
82: if (cVar4 != '\0') {
92: if (iVar5 != 0) {
96: return;
98: if (DAT_1803e844c == 0x7fffffff) {
103: if (0xf < local_30) {
111: LAB_18014a8a2:
118: if (0xf < *(ulonglong *)(param_1 + 0x48)) {
123: return;)F18014a690F",
    R"F18014a690U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18014a727.
TODO: recover the declaration, type and value for global/data reference LAB_18014a758.
TODO: recover the declaration, type and value for global/data reference LAB_18014a8a2.
TODO: recover the declaration, type and value for global/data reference DAT_1803e83a4.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8400.
TODO: recover the declaration, type and value for global/data reference DAT_1803e844c.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8450.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_180409ae0.
TODO: recover the declaration, type and value for global/data reference DAT_180409b88.
TODO: resolve the indirect call in body 73: cVar4 = (**(code **)(*DAT_1803fa668 + 0xd0))();.
TODO: resolve the indirect call in body 94: pcVar2 = (code *)swi(3);.
TODO: resolve the indirect call in body 95: (*pcVar2)();.)F18014a690U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014a690() noexcept {
    return kFunction_0x18014a690;
}

// 0x18014a8f0 FUN_18014a8f0
// source: re/dump/decompile/0x18014a8f0_FUN_18014a8f0.c
// size: 1964 bytes; thunk: false
// body sha256: a63dcebe66f7b70aab7098e859a1b95b892590068ce3c6922b87777ec5c850eb
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014a8f0{
    "0x18014a8f0",
    "FUN_18014a8f0",
    R"F18014a8f0S(undefined FUN_18014a8f0())F18014a8f0S",
    R"B18014a8f0(// 0x18014a8f0  FUN_18014a8f0
// size=1964 thunk=false
// signature: undefined FUN_18014a8f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18014a8f0(longlong param_1,longlong param_2,char param_3)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  char *pcVar7;
  undefined8 *puVar8;
  longlong lVar9;
  size_t sVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *******_Buf1;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  ulonglong uVar16;
  undefined1 auStack_148 [32];
  undefined8 ******local_128;
  undefined8 uStack_120;
  ulonglong local_118;
  ulonglong local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  undefined8 local_f0;
  undefined8 ******local_e8;
  undefined8 *local_e0;
  undefined8 ******local_d8 [2];
  size_t local_c8;
  ulonglong local_c0;
  char local_b8 [112];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  local_e0 = (undefined8 *)0x93fd561a96ab0c67;
  local_e8 = (undefined8 ******)0xf2d6f3345979f232;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_108,&local_e0);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,&local_128,&local_e8);
  pcVar7 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
  if ((((*pcVar7 == '\0') || (param_2 == 0)) || (DAT_1803fa668 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar3 == '\0')) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_18014a690(param_1,param_2);
    }
    if (param_2 == 0) {
      return;
    }
    if (DAT_1803fa668 == (longlong *)0x0) {
      return;
    }
    cVar3 = (**(code **)(*DAT_1803fa668 + 0xd0))();
    if (cVar3 == '\0') {
      return;
    }
    lVar11 = FUN_1801475e0(param_2);
    if (lVar11 == 0) {
      return;
    }
    lVar12 = thunk_FUN_1802d5f00(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                                 lVar11);
    if (lVar12 != *(longlong *)(param_1 + 0x70)) {
      return;
    }
    *(longlong *)(param_1 + 0x50) = param_2;
    *(longlong *)(param_1 + 0x58) = lVar11;
    uVar5 = FUN_180147610(param_2);
    *(undefined4 *)(param_1 + 0x60) = uVar5;
    return;
  }
  if (*(longlong *)(param_1 + 0x10) != param_2) {
    DAT_180409ae0 = 0;
    DAT_1803e83a4 = -1;
    DAT_180409b88 = 0;
    *(longlong *)(param_1 + 0x10) = param_2;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x24) = 0xffffffffffffffff;
    puVar8 = (undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      puVar8 = (undefined8 *)*puVar8;
    }
    *(undefined1 *)puVar8 = 0;
  }
  local_e8 = (undefined8 *******)0x93fd561a96ab0c67;
  local_e0 = (undefined8 *)0xa8b2235b275142e2;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_128,&local_e8);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,&local_108,&local_e0);
  puVar8 = (undefined8 *)FUN_1802028c0(*plVar6 + 0x28);
  if (0xf < (ulonglong)puVar8[3]) {
    puVar8 = (undefined8 *)*puVar8;
  }
  FUN_180145c40(local_d8,puVar8);
  uVar16 = local_c0;
  pppppppuVar15 = (undefined8 *******)local_d8[0];
  if (param_3 != '\0') {
    pppppppuVar13 = (undefined8 *******)(param_1 + 0x30);
    pppppppuVar14 = pppppppuVar13;
    if (0xf < *(ulonglong *)(param_1 + 0x48)) {
      pppppppuVar14 = (undefined8 *******)*pppppppuVar13;
    }
    _Buf1 = local_d8;
    if (0xf < local_c0) {
      _Buf1 = (undefined8 *******)local_d8[0];
    }
    if ((local_c8 != *(size_t *)(param_1 + 0x40)) ||
       ((local_c8 != 0 && (iVar4 = memcmp(_Buf1,pppppppuVar14,local_c8), iVar4 != 0)))) {
      plVar6 = (longlong *)(param_1 + 0x18);
      *plVar6 = 0;
      *(undefined1 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
      DAT_1803e83a4 = -1;
      DAT_180409b88 = 0;
      if (pppppppuVar13 != local_d8) {
        pppppppuVar14 = local_d8;
        if (0xf < uVar16) {
          pppppppuVar14 = pppppppuVar15;
        }
        FUN_180212700(pppppppuVar13,pppppppuVar14,local_c8);
        uVar16 = local_c0;
        pppppppuVar15 = (undefined8 *******)local_d8[0];
      }
      pppppppuVar13 = local_d8;
      if (0xf < uVar16) {
        pppppppuVar13 = pppppppuVar15;
      }
      cVar3 = FUN_180146890(pppppppuVar13,plVar6,param_1 + 0x28);
      if (cVar3 == '\0') {
        local_128 = (undefined8 *******)0x0;
        uStack_120 = 0;
        local_118 = 0;
        local_110 = 0;
        FUN_18001d080(&local_128,"Model not found / failed to load",0x20);
        local_e8 = (undefined8 ******)&DAT_1803e8400;
        iVar4 = _Mtx_lock(&DAT_1803e8400);
        if (iVar4 != 0) {
          std::_Throw_Cpp_error(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (DAT_1803e844c == 0x7fffffff) {
          DAT_1803e844c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
        }
        pppppppuVar15 = &local_128;
        if (0xf < local_110) {
          pppppppuVar15 = (undefined8 *******)local_128;
        }
        FUN_180212700(s_Ready_1803e9eb8,pppppppuVar15,local_118);
        _Mtx_unlock(&DAT_1803e8400);
      }
      else {
        lVar11 = *(longlong *)(param_1 + 0x58);
        if (lVar11 == 0) {
          lVar11 = FUN_1801475e0(param_2);
        }
        lVar12 = *plVar6;
        if (DAT_1803ffc3c == '\0') {
          DAT_1803ffc3c = '\x01';
          local_e8 = &local_128;
          local_128 = (undefined8 *******)0x0;
          uStack_120 = 0;
          local_118 = 0;
          local_110 = 0;
          FUN_18001d080(&local_128,
                        "48 83 EC 28 48 8B D1 48 8D 0D ? ? ? ? E8 ? ? ? ? 85 C0 78 ? 48 63 C8 48 8B 05 ? ? ? ? 48 8D 14 C8"
                        ,0x61);
          local_e0 = &local_108;
          local_108 = 0;
          uStack_100 = 0;
          local_f8 = 0;
          local_f0 = 0;
          FUN_18001d080(&local_108,"client.dll",10);
          DAT_180423b70 = FUN_180015f40(&local_108,&local_128);
          pcVar7 = "FAIL (donor transplant fallback)";
          if (DAT_180423b70 != 0) {
            pcVar7 = "OK";
          }
          FUN_180014410("[Toolbox-anim] ActivityList_IndexForName = %p %s\n",DAT_180423b70,pcVar7);
        }
        lVar2 = DAT_180423b70;
        if (DAT_180423b70 == 0) {
          *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
LAB_18014ac98:
          lVar12 = *plVar6;
          lVar11 = FUN_1800b9fe0(lVar11);
          lVar12 = FUN_1800b9fe0(lVar12);
          if (((lVar11 != 0) && (lVar12 != 0)) && (lVar11 != lVar12)) {
            local_108 = 0;
            uStack_100 = 0;
            local_f8 = local_f8 & 0xffffffff00000000;
            local_128 = (undefined8 *******)0x0;
            uStack_120 = 0;
            local_118 = local_118 & 0xffffffff00000000;
            cVar3 = FUN_180147bc0(lVar11,&local_108);
            if ((cVar3 != '\0') && (cVar3 = FUN_180147bc0(lVar12,&local_128), cVar3 != '\0')) {
              iVar4 = (int)local_f8;
              if (0x1000 < (int)local_f8) {
                iVar4 = 0x1000;
              }
              local_f8 = CONCAT44(local_f8._4_4_,iVar4);
              iVar4 = (int)local_118;
              if (0x1000 < (int)local_118) {
                iVar4 = 0x1000;
              }
              local_118 = CONCAT44(local_118._4_4_,iVar4);
              FUN_180148520(&local_108,&local_128);
            }
          }
        }
        else {
          lVar12 = FUN_1800b9fe0(lVar12);
          if (lVar12 == 0) {
            *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
            goto LAB_18014ac98;
          }
          local_128 = (undefined8 *******)0x0;
          uStack_120 = 0;
          local_118 = local_118 & 0xffffffff00000000;
          cVar3 = FUN_180147bc0(lVar12,&local_128);
          if (cVar3 == '\0') {
            *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
            goto LAB_18014ac98;
          }
          iVar4 = (int)local_118;
          if (0x1000 < (int)local_118) {
            iVar4 = 0x1000;
          }
          local_118 = CONCAT44(local_118._4_4_,iVar4);
          lVar9 = FUN_1800b9fe0(lVar11);
          if (lVar9 != 0) {
            lVar12 = lVar9;
          }
          iVar4 = FUN_180148720(&local_128,*(undefined4 *)(lVar12 + 0xc4),lVar2);
          *(int *)(param_1 + 0x24) = iVar4;
          if (iVar4 < 0) goto LAB_18014ac98;
        }
        FUN_1801488a0();
        if ((*plVar6 == 0) ||
           (lVar11 = thunk_FUN_1802d5f00(*(undefined8 *)(param_1 + 0x68),
                                         *(undefined8 *)(param_1 + 0x70)),
           lVar11 == *(longlong *)(param_1 + 0x70))) {
          if (*(undefined8 **)(param_1 + 0x70) == *(undefined8 **)(param_1 + 0x78)) {
            FUN_180221c00();
          }
          else {
            **(undefined8 **)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x18);
            *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + 8;
          }
        }
        if (*(int *)(param_1 + 0x28) < 0) {
          pcVar7 = "Model loaded: no precache index - pointer mode (guarded)";
LAB_18014adc3:
          FUN_180012ac0(local_b8,0x70,pcVar7);
        }
        else if (*(int *)(param_1 + 0x24) < 3) {
          if (*(int *)(param_1 + 0x24) < 0) {
            pcVar7 = "Model loaded (transplant fallback)";
            goto LAB_18014adc3;
          }
          FUN_180012ac0(local_b8,0x70,"Model loaded: %d acts only - client driver");
        }
        else {
          FUN_180012ac0(local_b8,0x70,"Model loaded: native animations (%d acts)");
        }
        local_128 = (undefined8 *******)0x0;
        uStack_120 = 0;
        local_118 = 0;
        local_110 = 0;
        sVar10 = strlen(local_b8);
        FUN_18001d080(&local_128,local_b8,sVar10);
        local_e8 = (undefined8 ******)&DAT_1803e8400;
        iVar4 = _Mtx_lock(&DAT_1803e8400);
        if (iVar4 != 0) {
          std::_Throw_Cpp_error(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (DAT_1803e844c == 0x7fffffff) {
          DAT_1803e844c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
        }
        pppppppuVar15 = &local_128;
        if (0xf < local_110) {
          pppppppuVar15 = (undefined8 *******)local_128;
        }
        FUN_180212700(s_Ready_1803e9eb8,pppppppuVar15,local_118);
        _Mtx_unlock(&DAT_1803e8400);
      }
      FUN_18020e450(&local_128);
    }
  }
  plVar6 = (longlong *)(param_1 + 0x18);
  if (*plVar6 == 0) goto LAB_18014aff9;
  lVar11 = FUN_1801475e0(param_2);
  if (((*(longlong *)(param_1 + 0x50) != param_2) && (lVar11 != 0)) &&
     (lVar12 = thunk_FUN_1802d5f00(*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                                   lVar11), lVar12 == *(longlong *)(param_1 + 0x70))) {
    *(longlong *)(param_1 + 0x50) = param_2;
    *(longlong *)(param_1 + 0x58) = lVar11;
    uVar5 = FUN_180147610(param_2);
    *(undefined4 *)(param_1 + 0x60) = uVar5;
    FUN_180014410("[Toolbox] real-model snapshot at first apply: idx=%d model=%p\n",uVar5,
                  *(undefined8 *)(param_1 + 0x58));
  }
  DAT_1803e83a4 = *(int *)(param_1 + 0x28);
  DAT_180409ae0 = param_2;
  if (DAT_1803e83a4 < 0) {
    DAT_1803e83a4 = -1;
    DAT_180409b88 = *plVar6;
    if (lVar11 != DAT_180409b88) {
      if (*(char *)(param_1 + 0x20) != '\0') {
        DAT_180409ae8 = DAT_180409ae8 + 1;
      }
      cVar3 = FUN_1801477c0(param_2,DAT_180409b88,*(char *)(param_1 + 0x20) == '\0');
      goto LAB_18014afe8;
    }
  }
  else {
    DAT_180409b88 = 0;
    if (lVar11 != *plVar6) {
      if (*(char *)(param_1 + 0x20) != '\0') {
        DAT_180409ae8 = DAT_180409ae8 + 1;
      }
      cVar3 = FUN_1801478f0(param_2);
LAB_18014afe8:
      if (cVar3 != '\0') {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
    }
  }
  FUN_180149d70(param_2);
LAB_18014aff9:
  FUN_18020e450(local_d8);
  return;
}


)B18014a8f0",
    "a63dcebe66f7b70aab7098e859a1b95b892590068ce3c6922b87777ec5c850eb",
    R"F18014a8f0C(FUN_180012ac0
FUN_180014410
FUN_180015f40
FUN_18001d080
FUN_1800b9fe0
FUN_180145c40
FUN_180146890
FUN_1801475e0
FUN_180147610
FUN_1801477c0
FUN_1801478f0
FUN_180147bc0
FUN_180148520
FUN_180148720
FUN_1801488a0
FUN_180149d70
FUN_18014a690
FUN_1801fcfc0
FUN_1802028c0
FUN_18020e450
FUN_180212700
FUN_180221c00
FUN_180241a30)F18014a8f0C",
    R"F18014a8f0D(LAB_18014ac98
LAB_18014adc3
LAB_18014afe8
LAB_18014aff9
DAT_1803da4c0
DAT_1803e83a4
DAT_1803e8400
DAT_1803e844c
DAT_1803fa668
DAT_1803fadf0
DAT_1803ffc3c
DAT_180409ae0
DAT_180409ae8
DAT_180409b88
DAT_180423b70)F18014a8f0D",
    R"F18014a8f0T("OK"
"client.dll"
"FAIL (donor transplant fallback)"
"Model not found / failed to load"
"Model loaded (transplant fallback)"
"Model loaded: native animations (%d acts)"
"Model loaded: %d acts only - client driver"
"[Toolbox-anim] ActivityList_IndexForName = %p %s\\n"
"Model loaded: no precache index - pointer mode (guarded)"
"[Toolbox] real-model snapshot at first apply: idx=%d model=%p\\n"
"48 83 EC 28 48 8B D1 48 8D 0D ? ? ? ? E8 ? ? ? ? 85 C0 78 ? 48 63 C8 48 8B 05 ? ? ? ? 48 8D 14 C8")F18014a8f0T",
    R"F18014a8f0F(52: if ((((*pcVar7 == '\0') || (param_2 == 0)) || (DAT_1803fa668 == (longlong *)0x0)) ||
54: if (*(longlong *)(param_1 + 0x10) != 0) {
57: if (param_2 == 0) {
58: return;
60: if (DAT_1803fa668 == (longlong *)0x0) {
61: return;
64: if (cVar3 == '\0') {
65: return;
68: if (lVar11 == 0) {
69: return;
73: if (lVar12 != *(longlong *)(param_1 + 0x70)) {
74: return;
80: return;
82: if (*(longlong *)(param_1 + 0x10) != param_2) {
92: if (0xf < *(ulonglong *)(param_1 + 0x48)) {
102: if (0xf < (ulonglong)puVar8[3]) {
108: if (param_3 != '\0') {
111: if (0xf < *(ulonglong *)(param_1 + 0x48)) {
115: if (0xf < local_c0) {
118: if ((local_c8 != *(size_t *)(param_1 + 0x40)) ||
126: if (pppppppuVar13 != local_d8) {
128: if (0xf < uVar16) {
136: if (0xf < uVar16) {
140: if (cVar3 == '\0') {
148: if (iVar4 != 0) {
152: return;
154: if (DAT_1803e844c == 0x7fffffff) {
159: if (0xf < local_110) {
165: else {
167: if (lVar11 == 0) {
171: if (DAT_1803ffc3c == '\0') {
189: if (DAT_180423b70 != 0) {
195: if (DAT_180423b70 == 0) {
197: LAB_18014ac98:
201: if (((lVar11 != 0) && (lVar12 != 0)) && (lVar11 != lVar12)) {
209: if ((cVar3 != '\0') && (cVar3 = FUN_180147bc0(lVar12,&local_128), cVar3 != '\0')) {
211: if (0x1000 < (int)local_f8) {
216: if (0x1000 < (int)local_118) {
224: else {
226: if (lVar12 == 0) {
228: goto LAB_18014ac98;
234: if (cVar3 == '\0') {
236: goto LAB_18014ac98;
239: if (0x1000 < (int)local_118) {
244: if (lVar9 != 0) {
249: if (iVar4 < 0) goto LAB_18014ac98;
252: if ((*plVar6 == 0) ||
256: if (*(undefined8 **)(param_1 + 0x70) == *(undefined8 **)(param_1 + 0x78)) {
259: else {
264: if (*(int *)(param_1 + 0x28) < 0) {
266: LAB_18014adc3:
269: else if (*(int *)(param_1 + 0x24) < 3) {
270: if (*(int *)(param_1 + 0x24) < 0) {
272: goto LAB_18014adc3;
276: else {
287: if (iVar4 != 0) {
291: return;
293: if (DAT_1803e844c == 0x7fffffff) {
298: if (0xf < local_110) {
308: if (*plVar6 == 0) goto LAB_18014aff9;
310: if (((*(longlong *)(param_1 + 0x50) != param_2) && (lVar11 != 0)) &&
322: if (DAT_1803e83a4 < 0) {
325: if (lVar11 != DAT_180409b88) {
326: if (*(char *)(param_1 + 0x20) != '\0') {
330: goto LAB_18014afe8;
333: else {
335: if (lVar11 != *plVar6) {
336: if (*(char *)(param_1 + 0x20) != '\0') {
340: LAB_18014afe8:
341: if (cVar3 != '\0') {
347: LAB_18014aff9:
349: return;)F18014a8f0F",
    R"F18014a8f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18014ac98.
TODO: recover the declaration, type and value for global/data reference LAB_18014adc3.
TODO: recover the declaration, type and value for global/data reference LAB_18014afe8.
TODO: recover the declaration, type and value for global/data reference LAB_18014aff9.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e83a4.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8400.
TODO: recover the declaration, type and value for global/data reference DAT_1803e844c.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_1803ffc3c.
TODO: recover the declaration, type and value for global/data reference DAT_180409ae0.
TODO: recover the declaration, type and value for global/data reference DAT_180409ae8.
TODO: recover the declaration, type and value for global/data reference DAT_180409b88.
TODO: recover the declaration, type and value for global/data reference DAT_180423b70.
TODO: resolve the indirect call in body 53: (cVar3 = (**(code **)(*DAT_1803fa668 + 0xd0))(), cVar3 == '\0')) {.
TODO: resolve the indirect call in body 63: cVar3 = (**(code **)(*DAT_1803fa668 + 0xd0))();.
TODO: resolve the indirect call in body 150: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 151: (*pcVar1)();.
TODO: resolve the indirect call in body 289: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 290: (*pcVar1)();.)F18014a8f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014a8f0() noexcept {
    return kFunction_0x18014a8f0;
}

// 0x18014b0a0 Features_Toolbox_ToolboxFeature_vfunc16
// source: re/dump/decompile/0x18014b0a0_Features_Toolbox_ToolboxFeature_vfunc16.c
// size: 208 bytes; thunk: false
// body sha256: 3417eba6a0e3bcddc66f93366abb96e2e4e1f244f897ec39a4c15636e51d8172
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014b0a0{
    "0x18014b0a0",
    "Features_Toolbox_ToolboxFeature_vfunc16",
    R"F18014b0a0S(undefined Features_Toolbox_ToolboxFeature_vfunc16())F18014b0a0S",
    R"B18014b0a0(// 0x18014b0a0  Features_Toolbox_ToolboxFeature_vfunc16
// size=208 thunk=false
// signature: undefined Features_Toolbox_ToolboxFeature_vfunc16()
// status: ok


void Features_Toolbox_ToolboxFeature_vfunc16(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  char *pcVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar3 = (undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x24) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  DAT_180409ae0 = 0;
  DAT_1803e83a4 = 0xffffffff;
  DAT_180409b88 = 0;
  DAT_1803e8450 = 0xffffffff;
  if (0xf < *(ulonglong *)(param_1 + 0x48)) {
    puVar3 = (undefined8 *)*puVar3;
  }
  *(undefined1 *)puVar3 = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
  if (*(longlong *)(param_1 + 0x68) != *(longlong *)(param_1 + 0x70)) {
    *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x68);
  }
  FUN_1801488a0();
  if (((lVar1 != 0) && (DAT_180423571 != '\0')) && (DAT_1803fa668 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))();
    if (cVar2 != '\0') {
      cVar2 = FUN_180147b80();
      pcVar4 = "UNAVAILABLE";
      if (cVar2 != '\0') {
        pcVar4 = "OK";
      }
      FUN_180014410("[Toolbox] unload with override worn: delta reset -> %s\n",pcVar4);
      return;
    }
  }
  return;
}


)B18014b0a0",
    "3417eba6a0e3bcddc66f93366abb96e2e4e1f244f897ec39a4c15636e51d8172",
    R"F18014b0a0C(FUN_180014410
FUN_180147b80
FUN_1801488a0)F18014b0a0C",
    R"F18014b0a0D(DAT_1803e83a4
DAT_1803e8450
DAT_1803fa668
DAT_180409ae0
DAT_180409b88
DAT_180423571)F18014b0a0D",
    R"F18014b0a0T("OK"
"UNAVAILABLE"
"[Toolbox] unload with override worn: delta reset -> %s\\n")F18014b0a0T",
    R"F18014b0a0F(26: if (0xf < *(ulonglong *)(param_1 + 0x48)) {
33: if (*(longlong *)(param_1 + 0x68) != *(longlong *)(param_1 + 0x70)) {
37: if (((lVar1 != 0) && (DAT_180423571 != '\0')) && (DAT_1803fa668 != (longlong *)0x0)) {
39: if (cVar2 != '\0') {
42: if (cVar2 != '\0') {
46: return;
49: return;)F18014b0a0F",
    R"F18014b0a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e83a4.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8450.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_180409ae0.
TODO: recover the declaration, type and value for global/data reference DAT_180409b88.
TODO: recover the declaration, type and value for global/data reference DAT_180423571.
TODO: resolve the indirect call in body 38: cVar2 = (**(code **)(*DAT_1803fa668 + 0xd0))();.)F18014b0a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014b0a0() noexcept {
    return kFunction_0x18014b0a0;
}

// 0x18014b170 Features_Toolbox_ToolboxFeature_vfunc01
// source: re/dump/decompile/0x18014b170_Features_Toolbox_ToolboxFeature_vfunc01.c
// size: 1437 bytes; thunk: false
// body sha256: 77d8e179ecf3bbedf6e6179bb920e94648e1c4428327d7812e343e3595dd4871
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014b170{
    "0x18014b170",
    "Features_Toolbox_ToolboxFeature_vfunc01",
    R"F18014b170S(undefined Features_Toolbox_ToolboxFeature_vfunc01())F18014b170S",
    R"B18014b170(// 0x18014b170  Features_Toolbox_ToolboxFeature_vfunc01
// size=1437 thunk=false
// signature: undefined Features_Toolbox_ToolboxFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_Toolbox_ToolboxFeature_vfunc01(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  int *piVar11;
  char *pcVar12;
  int *piVar13;
  int *piVar14;
  undefined8 uVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  int local_70 [2];
  undefined8 local_68;
  undefined *local_60 [2];
  undefined8 local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  FUN_18014a290();
  local_a8 = 0;
  lStack_a0 = 0;
  local_98 = 0;
  local_60[0] = &DAT_1803e83b0;
  iVar8 = _Mtx_lock(&DAT_1803e83b0);
  if (iVar8 == 0) {
    if (DAT_1803e83fc == 0x7fffffff) {
      DAT_1803e83fc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    lVar6 = DAT_1803e9ee0;
    lVar16 = DAT_1803e9ed8;
    if (DAT_1803e9ed8 == DAT_1803e9ee0) {
      _Mtx_unlock(&DAT_1803e83b0);
    }
    else {
      local_a8 = DAT_1803e9ed8;
      DAT_1803e9ed8 = 0;
      lStack_a0 = DAT_1803e9ee0;
      DAT_1803e9ee0 = 0;
      local_98 = DAT_1803e9ee8;
      DAT_1803e9ee8 = 0;
      _Mtx_unlock(&DAT_1803e83b0);
      do {
        FUN_1801457e0(lVar16);
        lVar16 = lVar16 + 0x48;
      } while (lVar16 != lVar6);
    }
    FUN_18020ac70(&local_a8);
    LOCK();
    bVar17 = DAT_180409b80 == 1;
    if (bVar17) {
      DAT_180409b80 = 2;
    }
    UNLOCK();
    if (bVar17) {
      FUN_180146a00();
    }
    local_70[0] = -0x6954f399;
    local_70[1] = -0x6c02a9e6;
    local_68 = 0xc9339fae2fcb199e;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_60,local_70);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_50,&local_68);
    piVar11 = (int *)FUN_1802029c0(*plVar10 + 0x28);
    iVar8 = *piVar11;
    local_70[0] = -0x6954f399;
    local_70[1] = -0x6c02a9e6;
    local_68 = 0x2cdd3384c259d442;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_60,local_70);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_50,&local_68);
    pcVar12 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
    if ((*pcVar12 == '\0') ||
       ((0 < iVar8 &&
        ((((0xfe < iVar8 || (cVar7 = FUN_180024540(), cVar7 == '\0')) || (DAT_1803fa545 != '\0')) ||
         (cVar7 = FUN_1800245f0(iVar8), cVar7 == '\0')))))) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    local_70[0] = -0x6954f399;
    local_70[1] = -0x6c02a9e6;
    local_68 = 0x217a2c6fd3b34823;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_60,local_70);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_50,&local_68);
    piVar11 = (int *)FUN_1802029c0(*plVar10 + 0x28);
    iVar8 = *piVar11;
    local_70[0] = -0x6954f399;
    local_70[1] = -0x6c02a9e6;
    local_68 = 0x5c383cfcf7076af3;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_60,local_70);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_50,&local_68);
    pcVar12 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
    if ((*pcVar12 == '\0') ||
       ((0 < iVar8 &&
        (((0xfe < iVar8 || (cVar7 = FUN_180024540(), cVar7 == '\0')) ||
         ((DAT_1803fa545 != '\0' || (cVar7 = FUN_1800245f0(iVar8), cVar7 == '\0')))))))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    local_70[0] = -0x6954f399;
    local_70[1] = -0x6c02a9e6;
    local_68 = 0xdd80ea0cec10ff07;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_60,local_70);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_50,&local_68);
    piVar11 = (int *)FUN_1802029c0(*plVar10 + 0x28);
    iVar8 = *piVar11;
    local_70[0] = -0x6954f399;
    local_70[1] = -0x6c02a9e6;
    local_68 = 0x8af36191ef71bd97;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_60,local_70);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_50,&local_68);
    pcVar12 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
    if ((*pcVar12 == '\0') ||
       ((0 < iVar8 &&
        (((0xfe < iVar8 || (cVar7 = FUN_180024540(), cVar7 == '\0')) ||
         ((DAT_1803fa545 != '\0' || (cVar7 = FUN_1800245f0(iVar8), cVar7 == '\0')))))))) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    local_70[0] = -0x6954f399;
    local_70[1] = -0x6c02a9e6;
    local_68 = 0x65489c45ca370d45;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_60,local_70);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_50,&local_68);
    piVar11 = (int *)FUN_1802029c0(*plVar10 + 0x28);
    iVar8 = *piVar11;
    local_70[0] = -0x6954f399;
    local_70[1] = -0x6c02a9e6;
    local_68 = 0xff1f894095ee67b5;
    plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_60,local_70);
    plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_50,&local_68);
    pcVar12 = (char *)FUN_1801fcfc0(*plVar10 + 0x28);
    if ((*pcVar12 == '\0') ||
       ((0 < iVar8 &&
        ((((0xfe < iVar8 || (cVar7 = FUN_180024540(), cVar7 == '\0')) || (DAT_1803fa545 != '\0')) ||
         (cVar7 = FUN_1800245f0(iVar8), cVar7 == '\0')))))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (((param_3 == 0) || (DAT_1803fa545 != '\0')) ||
       (((!bVar17 && ((!bVar3 && (!bVar4)))) && (!bVar5)))) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    else {
      local_70[0] = 0x20;
      local_68 = CONCAT44(local_68._4_4_,1);
      local_50[0] = 0x93fd561a96ab0c67;
      local_60[0] = (undefined *)0xa4ac668505cca8d5;
      plVar10 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_90,local_50);
      plVar10 = (longlong *)FUN_180241a30(*plVar10 + 0x28,local_80,local_60);
      piVar13 = (int *)FUN_1802029c0(*plVar10 + 0x28);
      iVar8 = *(int *)(param_1 + 8);
      piVar11 = (int *)&local_68;
      if (0 < *piVar13) {
        piVar11 = piVar13;
      }
      piVar14 = local_70;
      if (*piVar13 < 0x21) {
        piVar14 = piVar11;
      }
      iVar1 = *piVar14;
      *(int *)(param_1 + 8) = iVar8 + 1;
      if (iVar8 % (iVar1 + 1) == 0) {
        if (bVar17) {
          *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | 0x20;
        }
        if (bVar3) {
          *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | 1;
          DAT_1803db5ee = 1;
        }
        if (bVar4) {
          *(uint *)(param_3 + 0x20) = *(uint *)(param_3 + 0x20) | 0x800;
          DAT_1803db5f1 = 1;
        }
        if ((bVar5) && (*(char *)(param_3 + 0x35) == '\0')) {
          *(undefined1 *)(param_3 + 0x35) = 100;
        }
      }
    }
    pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();
    uVar15 = (*pcVar2)(DAT_1803fa360,uVar9);
    FUN_18014a8f0(param_1,uVar15,1);
    return;
  }
  std::_Throw_Cpp_error(5);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


)B18014b170",
    "77d8e179ecf3bbedf6e6179bb920e94648e1c4428327d7812e343e3595dd4871",
    R"F18014b170C(FUN_180024540
FUN_1800245f0
FUN_1801457e0
FUN_180146a00
FUN_18014a290
FUN_18014a8f0
FUN_1801fcfc0
FUN_1802029c0
FUN_18020ac70
FUN_180241a30)F18014b170C",
    R"F18014b170D(DAT_1803da4c0
DAT_1803db5ee
DAT_1803db5f1
DAT_1803e83b0
DAT_1803e83fc
DAT_1803e9ed8
DAT_1803e9ee0
DAT_1803e9ee8
DAT_1803fa360
DAT_1803fa545
DAT_1803fa668
DAT_1803fadf0
DAT_180409b80)F18014b170D",
    R"F18014b170T()F18014b170T",
    R"F18014b170F(48: if (iVar8 == 0) {
49: if (DAT_1803e83fc == 0x7fffffff) {
55: if (DAT_1803e9ed8 == DAT_1803e9ee0) {
58: else {
66: do {
74: if (bVar17) {
78: if (bVar17) {
94: if ((*pcVar12 == '\0') ||
100: else {
116: if ((*pcVar12 == '\0') ||
122: else {
138: if ((*pcVar12 == '\0') ||
144: else {
160: if ((*pcVar12 == '\0') ||
166: else {
169: if (((param_3 == 0) || (DAT_1803fa545 != '\0')) ||
173: else {
183: if (0 < *piVar13) {
187: if (*piVar13 < 0x21) {
192: if (iVar8 % (iVar1 + 1) == 0) {
193: if (bVar17) {
196: if (bVar3) {
200: if (bVar4) {
204: if ((bVar5) && (*(char *)(param_3 + 0x35) == '\0')) {
213: return;
218: return;)F18014b170F",
    R"F18014b170U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803db5ee.
TODO: recover the declaration, type and value for global/data reference DAT_1803db5f1.
TODO: recover the declaration, type and value for global/data reference DAT_1803e83b0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e83fc.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9ed8.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9ee0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9ee8.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa545.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_180409b80.
TODO: resolve the indirect call in body 209: pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);.
TODO: resolve the indirect call in body 210: uVar9 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 211: uVar15 = (*pcVar2)(DAT_1803fa360,uVar9);.
TODO: resolve the indirect call in body 216: pcVar2 = (code *)swi(3);.
TODO: resolve the indirect call in body 217: (*pcVar2)();.)F18014b170U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014b170() noexcept {
    return kFunction_0x18014b170;
}

// 0x18014b710 Features_Toolbox_ToolboxFeature_vfunc07
// source: re/dump/decompile/0x18014b710_Features_Toolbox_ToolboxFeature_vfunc07.c
// size: 140 bytes; thunk: false
// body sha256: c67f4a971de1d656d5c43b0b38af6d0808d0c324e667c2c0ebfb2283b5335d5a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014b710{
    "0x18014b710",
    "Features_Toolbox_ToolboxFeature_vfunc07",
    R"F18014b710S(undefined Features_Toolbox_ToolboxFeature_vfunc07())F18014b710S",
    R"B18014b710(// 0x18014b710  Features_Toolbox_ToolboxFeature_vfunc07
// size=140 thunk=false
// signature: undefined Features_Toolbox_ToolboxFeature_vfunc07()
// status: ok


void Features_Toolbox_ToolboxFeature_vfunc07(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar3 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar4 = (*pcVar1)(DAT_1803fa360,uVar3);
  FUN_18014a8f0(param_1,lVar4,0);
  lVar2 = *(longlong *)(param_1 + 0x18);
  if ((((lVar2 != 0) && (lVar4 != 0)) && (lVar4 == *(longlong *)(param_1 + 0x10))) &&
     (*(uint *)(param_1 + 0x24) < 3)) {
    lVar5 = FUN_1801475e0(lVar4);
    if (lVar5 == lVar2) {
      FUN_180148a70(lVar4,*(undefined8 *)(param_1 + 0x18));
    }
  }
  return;
}


)B18014b710",
    "c67f4a971de1d656d5c43b0b38af6d0808d0c324e667c2c0ebfb2283b5335d5a",
    R"F18014b710C(FUN_1801475e0
FUN_180148a70
FUN_18014a8f0)F18014b710C",
    R"F18014b710D(DAT_1803fa360
DAT_1803fa668)F18014b710D",
    R"F18014b710T()F18014b710T",
    R"F18014b710F(21: if ((((lVar2 != 0) && (lVar4 != 0)) && (lVar4 == *(longlong *)(param_1 + 0x10))) &&
24: if (lVar5 == lVar2) {
28: return;)F18014b710F",
    R"F18014b710U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 16: pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);.
TODO: resolve the indirect call in body 17: uVar3 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 18: lVar4 = (*pcVar1)(DAT_1803fa360,uVar3);.)F18014b710U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014b710() noexcept {
    return kFunction_0x18014b710;
}

// 0x18014b7a0 Features_Toolbox_ToolboxFeature_vfunc15
// source: re/dump/decompile/0x18014b7a0_Features_Toolbox_ToolboxFeature_vfunc15.c
// size: 153 bytes; thunk: false
// body sha256: de7d20ded9ee85e42a87e37e40916cb03a114f773bc57081ab1066bc6b0e1de1
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014b7a0{
    "0x18014b7a0",
    "Features_Toolbox_ToolboxFeature_vfunc15",
    R"F18014b7a0S(undefined Features_Toolbox_ToolboxFeature_vfunc15())F18014b7a0S",
    R"B18014b7a0(// 0x18014b7a0  Features_Toolbox_ToolboxFeature_vfunc15
// size=153 thunk=false
// signature: undefined Features_Toolbox_ToolboxFeature_vfunc15()
// status: ok


void Features_Toolbox_ToolboxFeature_vfunc15
               (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((((*(longlong *)(param_1 + 0x18) != 0) && (*(uint *)(param_1 + 0x24) < 3)) &&
      (DAT_1803e8280 != '\0')) &&
     ((0 < *(int *)(param_4 + 0x44) && (DAT_1803fa360 != (longlong *)0x0)))) {
    pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);
    if ((lVar3 != 0) &&
       ((lVar3 == *(longlong *)(param_1 + 0x10) &&
        (lVar4 = (**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,*(undefined4 *)(param_4 + 0x44))
        , lVar3 == lVar4)))) {
      FUN_180149800(lVar3);
    }
  }
  return;
}


)B18014b7a0",
    "de7d20ded9ee85e42a87e37e40916cb03a114f773bc57081ab1066bc6b0e1de1",
    R"F18014b7a0C(FUN_180149800)F18014b7a0C",
    R"F18014b7a0D(DAT_1803e8280
DAT_1803fa360
DAT_1803fa668)F18014b7a0D",
    R"F18014b7a0T()F18014b7a0T",
    R"F18014b7a0F(16: if ((((*(longlong *)(param_1 + 0x18) != 0) && (*(uint *)(param_1 + 0x24) < 3)) &&
22: if ((lVar3 != 0) &&
29: return;)F18014b7a0F",
    R"F18014b7a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8280.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa360.
TODO: recover the declaration, type and value for global/data reference DAT_1803fa668.
TODO: resolve the indirect call in body 19: pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);.
TODO: resolve the indirect call in body 20: uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();.
TODO: resolve the indirect call in body 21: lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);.
TODO: resolve the indirect call in body 24: (lVar4 = (**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,*(undefined4 *)(param_4 + 0x44)).)F18014b7a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014b7a0() noexcept {
    return kFunction_0x18014b7a0;
}

// 0x18014b840 FUN_18014b840
// source: re/dump/decompile/0x18014b840_FUN_18014b840.c
// size: 385 bytes; thunk: false
// body sha256: b98bb4aeeb4447325843eb65b2681c841499454eba98a626f36cab32792ed4ef
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014b840{
    "0x18014b840",
    "FUN_18014b840",
    R"F18014b840S(undefined FUN_18014b840())F18014b840S",
    R"B18014b840(// 0x18014b840  FUN_18014b840
// size=385 thunk=false
// signature: undefined FUN_18014b840()
// status: ok


undefined8 FUN_18014b840(byte *param_1,ulonglong param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  
  if (param_2 != 0) {
    uVar1 = (ulonglong)(*param_1 & 0x7f);
    if (-1 < (char)*param_1) {
      *param_3 = uVar1;
      return 1;
    }
    if (1 < param_2) {
      uVar1 = (ulonglong)(param_1[1] & 0x7f) | uVar1 << 7;
      if (-1 < (char)param_1[1]) {
        *param_3 = uVar1;
        return 2;
      }
      if (2 < param_2) {
        uVar1 = (ulonglong)(param_1[2] & 0x7f) | uVar1 << 7;
        if (-1 < (char)param_1[2]) {
          *param_3 = uVar1;
          return 3;
        }
        if (3 < param_2) {
          uVar1 = (ulonglong)(param_1[3] & 0x7f) | uVar1 << 7;
          if (-1 < (char)param_1[3]) {
            *param_3 = uVar1;
            return 4;
          }
          if (4 < param_2) {
            uVar1 = (ulonglong)(param_1[4] & 0x7f) | uVar1 << 7;
            if (-1 < (char)param_1[4]) {
              *param_3 = uVar1;
              return 5;
            }
            if (5 < param_2) {
              uVar1 = (ulonglong)(param_1[5] & 0x7f) | uVar1 << 7;
              if (-1 < (char)param_1[5]) {
                *param_3 = uVar1;
                return 6;
              }
              if (6 < param_2) {
                uVar1 = (ulonglong)(param_1[6] & 0x7f) | uVar1 << 7;
                if (-1 < (char)param_1[6]) {
                  *param_3 = uVar1;
                  return 7;
                }
                if (7 < param_2) {
                  uVar1 = (ulonglong)(param_1[7] & 0x7f) | uVar1 << 7;
                  if (-1 < (char)param_1[7]) {
                    *param_3 = uVar1;
                    return 8;
                  }
                  if (8 < param_2) {
                    *param_3 = (ulonglong)param_1[8] | uVar1 << 8;
                    return 9;
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


)B18014b840",
    "b98bb4aeeb4447325843eb65b2681c841499454eba98a626f36cab32792ed4ef",
    R"F18014b840C()F18014b840C",
    R"F18014b840D()F18014b840D",
    R"F18014b840T()F18014b840T",
    R"F18014b840F(12: if (param_2 != 0) {
14: if (-1 < (char)*param_1) {
16: return 1;
18: if (1 < param_2) {
20: if (-1 < (char)param_1[1]) {
22: return 2;
24: if (2 < param_2) {
26: if (-1 < (char)param_1[2]) {
28: return 3;
30: if (3 < param_2) {
32: if (-1 < (char)param_1[3]) {
34: return 4;
36: if (4 < param_2) {
38: if (-1 < (char)param_1[4]) {
40: return 5;
42: if (5 < param_2) {
44: if (-1 < (char)param_1[5]) {
46: return 6;
48: if (6 < param_2) {
50: if (-1 < (char)param_1[6]) {
52: return 7;
54: if (7 < param_2) {
56: if (-1 < (char)param_1[7]) {
58: return 8;
60: if (8 < param_2) {
62: return 9;
72: return 0;)F18014b840F",
    R"F18014b840U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18014b840U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014b840() noexcept {
    return kFunction_0x18014b840;
}

// 0x18014b9d0 FUN_18014b9d0
// source: re/dump/decompile/0x18014b9d0_FUN_18014b9d0.c
// size: 405 bytes; thunk: false
// body sha256: 01de5bc2a1a752880ed916f3fd20a1c8da3acf8e9064c853dc47332b2e330d72
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014b9d0{
    "0x18014b9d0",
    "FUN_18014b9d0",
    R"F18014b9d0S(undefined FUN_18014b9d0())F18014b9d0S",
    R"B18014b9d0(// 0x18014b9d0  FUN_18014b9d0
// size=405 thunk=false
// signature: undefined FUN_18014b9d0()
// status: ok


undefined8 FUN_18014b9d0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  if (*param_2 != param_2[1]) {
    param_2[1] = *param_2;
  }
  uVar8 = param_1[1] - *param_1;
  local_res8 = 0;
  iVar6 = FUN_18014b840(*param_1,uVar8,&local_res8);
  uVar4 = local_res8;
  if (((iVar6 == 0) || (uVar9 = (ulonglong)iVar6, local_res8 < uVar9)) ||
     (uVar3 = local_res8, uVar8 < local_res8)) {
LAB_18014bb37:
    uVar7 = 0;
  }
  else {
    while (uVar9 < uVar4) {
      lVar1 = *param_1;
      local_res8 = 0;
      iVar6 = FUN_18014b840(lVar1 + uVar9,uVar4 - uVar9,&local_res8);
      if (iVar6 == 0) goto LAB_18014bb37;
      switch(local_res8) {
      case 0:
      case 8:
      case 9:
      case 10:
      case 0xb:
        uVar8 = 0;
        break;
      case 1:
        uVar8 = 1;
        break;
      case 2:
        uVar8 = 2;
        break;
      case 3:
        uVar8 = 3;
        break;
      case 4:
        uVar8 = 4;
        break;
      case 5:
        uVar8 = 6;
        break;
      case 6:
      case 7:
        uVar8 = 8;
        break;
      default:
        uVar8 = local_res8 - 0xc >> 1;
      }
      if ((param_1[1] - lVar1) - uVar3 < uVar8) goto LAB_18014bb37;
      local_48 = local_res8;
      uVar5 = local_48;
      uVar9 = uVar9 + (longlong)iVar6;
      puVar2 = (undefined4 *)param_2[1];
      uStack_40 = uVar3;
      local_38 = uVar8;
      if (puVar2 == (undefined4 *)param_2[2]) {
        FUN_180224820(param_2,puVar2,&local_48);
      }
      else {
        local_48._0_4_ = (undefined4)local_res8;
        local_48._4_4_ = (undefined4)(local_res8 >> 0x20);
        uStack_40._0_4_ = (undefined4)uVar3;
        uStack_40._4_4_ = (undefined4)(uVar3 >> 0x20);
        *puVar2 = (undefined4)local_48;
        puVar2[1] = local_48._4_4_;
        puVar2[2] = (undefined4)uStack_40;
        puVar2[3] = uStack_40._4_4_;
        *(ulonglong *)(puVar2 + 4) = uVar8;
        param_2[1] = param_2[1] + 0x18;
        local_48 = uVar5;
      }
      uVar3 = uVar3 + uVar8;
    }
    uVar7 = 1;
  }
  return uVar7;
}


)B18014b9d0",
    "01de5bc2a1a752880ed916f3fd20a1c8da3acf8e9064c853dc47332b2e330d72",
    R"F18014b9d0C(FUN_18014b840
FUN_180224820)F18014b9d0C",
    R"F18014b9d0D(LAB_18014bb37)F18014b9d0D",
    R"F18014b9d0T()F18014b9d0T",
    R"F18014b9d0F(24: if (*param_2 != param_2[1]) {
31: if (((iVar6 == 0) || (uVar9 = (ulonglong)iVar6, local_res8 < uVar9)) ||
33: LAB_18014bb37:
36: else {
37: while (uVar9 < uVar4) {
41: if (iVar6 == 0) goto LAB_18014bb37;
42: switch(local_res8) {
43: case 0:
44: case 8:
45: case 9:
46: case 10:
47: case 0xb:
49: break;
50: case 1:
52: break;
53: case 2:
55: break;
56: case 3:
58: break;
59: case 4:
61: break;
62: case 5:
64: break;
65: case 6:
66: case 7:
68: break;
72: if ((param_1[1] - lVar1) - uVar3 < uVar8) goto LAB_18014bb37;
79: if (puVar2 == (undefined4 *)param_2[2]) {
82: else {
99: return uVar7;)F18014b9d0F",
    R"F18014b9d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18014bb37.)F18014b9d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014b9d0() noexcept {
    return kFunction_0x18014b9d0;
}

// 0x18014bba0 FUN_18014bba0
// source: re/dump/decompile/0x18014bba0_FUN_18014bba0.c
// size: 108 bytes; thunk: false
// body sha256: a3e55fc80d667144377f4a1235d36f26cf9a714c65c30bdcb6d30f8692099757
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014bba0{
    "0x18014bba0",
    "FUN_18014bba0",
    R"F18014bba0S(undefined FUN_18014bba0())F18014bba0S",
    R"B18014bba0(// 0x18014bba0  FUN_18014bba0
// size=108 thunk=false
// signature: undefined FUN_18014bba0()
// status: ok


undefined8 *
FUN_18014bba0(undefined8 *param_1,longlong *param_2,ulonglong *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((*param_3 < 0xc) || (uVar1 = param_3[2], uVar1 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
  }
  else {
    lVar2 = *param_2;
    uVar3 = param_3[1];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_18001d080(param_1,lVar2 + uVar3,uVar1,param_4,0);
  }
  return param_1;
}


)B18014bba0",
    "a3e55fc80d667144377f4a1235d36f26cf9a714c65c30bdcb6d30f8692099757",
    R"F18014bba0C(FUN_18001d080)F18014bba0C",
    R"F18014bba0D()F18014bba0D",
    R"F18014bba0T()F18014bba0T",
    R"F18014bba0F(15: if ((*param_3 < 0xc) || (uVar1 = param_3[2], uVar1 == 0)) {
22: else {
31: return param_1;)F18014bba0F",
    R"F18014bba0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18014bba0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014bba0() noexcept {
    return kFunction_0x18014bba0;
}

// 0x18014bc10 FUN_18014bc10
// source: re/dump/decompile/0x18014bc10_FUN_18014bc10.c
// size: 545 bytes; thunk: false
// body sha256: 862287135416025d2bcd9e78c5caf2dc3b1aecde50e9636f7b411defcc33a612
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014bc10{
    "0x18014bc10",
    "FUN_18014bc10",
    R"F18014bc10S(undefined FUN_18014bc10())F18014bc10S",
    R"B18014bc10(// 0x18014bc10  FUN_18014bc10
// size=545 thunk=false
// signature: undefined FUN_18014bc10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18014bc10(undefined8 *param_1)

{
  longlong lVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  char ****ppppcVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_98 [32];
  char ***local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  puVar10 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar10 = (undefined8 *)*param_1;
  }
  if (((param_1[2] == 0) ||
      (lVar1 = param_1[2] + (longlong)puVar10, lVar7 = thunk_FUN_1802d5c20(puVar10,lVar1,0x28),
      lVar7 == lVar1)) || (lVar7 - (longlong)puVar10 == -1)) {
    iVar13 = -1;
  }
  else {
    iVar9 = 1;
    iVar12 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0xf;
    local_78 = (char ***)0x0;
    bVar4 = false;
    uVar11 = (lVar7 - (longlong)puVar10) + 1;
    iVar13 = 0;
    if (uVar11 < (ulonglong)param_1[2]) {
      do {
        iVar12 = iVar13;
        uVar5 = local_68;
        if (iVar9 < 1) break;
        puVar10 = param_1;
        if (0xf < (ulonglong)param_1[3]) {
          puVar10 = (undefined8 *)*param_1;
        }
        bVar3 = *(byte *)((longlong)puVar10 + uVar11);
        if (bVar3 == 0x28) {
          iVar9 = iVar9 + 1;
        }
        else if (bVar3 == 0x29) {
          iVar9 = iVar9 + -1;
          if (iVar9 == 0) break;
        }
        else if (iVar9 < 2) {
          if (bVar3 == 0x2c) {
            ppppcVar8 = &local_78;
            if (0xf < local_60) {
              ppppcVar8 = (char ****)local_78;
            }
            iVar6 = _stricmp((char *)ppppcVar8,"key");
            iVar13 = iVar12;
            if (iVar6 == 0) goto LAB_18014be01;
            iVar12 = iVar12 + 1;
            local_68 = 0;
            ppppcVar8 = &local_78;
            if (0xf < local_60) {
              ppppcVar8 = (char ****)local_78;
            }
            *(char *)ppppcVar8 = '\0';
            bVar4 = false;
          }
          else if ((0x3e < (byte)(bVar3 - 0x22)) ||
                  ((0x4a00000000000021U >> ((ulonglong)(bVar3 - 0x22) & 0x3f) & 1) == 0)) {
            if (((byte)(bVar3 + 0x9f) < 0x1a) ||
               (((byte)(bVar3 - 0x30) < 0x30 &&
                ((0x87fffffe03ffU >> ((longlong)(char)(bVar3 - 0x30) & 0x3fU) & 1) != 0)))) {
              if (!bVar4) {
                if (local_68 < local_60) {
                  ppppcVar8 = &local_78;
                  if (0xf < local_60) {
                    ppppcVar8 = (char ****)local_78;
                  }
                  pbVar2 = (byte *)((longlong)ppppcVar8 + local_68);
                  local_68 = local_68 + 1;
                  *pbVar2 = bVar3;
                  *(char *)((longlong)ppppcVar8 + uVar5 + 1) = '\0';
                }
                else {
                  FUN_18021abd0(&local_78);
                }
              }
            }
            else if (local_68 != 0) {
              bVar4 = true;
            }
          }
        }
        uVar11 = uVar11 + 1;
        iVar13 = iVar12;
      } while (uVar11 < (ulonglong)param_1[2]);
    }
    ppppcVar8 = &local_78;
    if (0xf < local_60) {
      ppppcVar8 = (char ****)local_78;
    }
    iVar9 = _stricmp((char *)ppppcVar8,"key");
    iVar13 = -1;
    if (iVar9 == 0) {
      iVar13 = iVar12;
    }
LAB_18014be01:
    FUN_18020e450(&local_78);
  }
  return iVar13;
}


)B18014bc10",
    "862287135416025d2bcd9e78c5caf2dc3b1aecde50e9636f7b411defcc33a612",
    R"F18014bc10C(FUN_18020e450
FUN_18021abd0)F18014bc10C",
    R"F18014bc10D(LAB_18014be01
DAT_1803da4c0)F18014bc10D",
    R"F18014bc10T("key")F18014bc10T",
    R"F18014bc10F(34: if (0xf < (ulonglong)param_1[3]) {
37: if (((param_1[2] == 0) ||
42: else {
52: if (uVar11 < (ulonglong)param_1[2]) {
53: do {
56: if (iVar9 < 1) break;
58: if (0xf < (ulonglong)param_1[3]) {
62: if (bVar3 == 0x28) {
65: else if (bVar3 == 0x29) {
67: if (iVar9 == 0) break;
69: else if (iVar9 < 2) {
70: if (bVar3 == 0x2c) {
72: if (0xf < local_60) {
77: if (iVar6 == 0) goto LAB_18014be01;
81: if (0xf < local_60) {
87: else if ((0x3e < (byte)(bVar3 - 0x22)) ||
89: if (((byte)(bVar3 + 0x9f) < 0x1a) ||
92: if (!bVar4) {
93: if (local_68 < local_60) {
95: if (0xf < local_60) {
103: else {
108: else if (local_68 != 0) {
118: if (0xf < local_60) {
123: if (iVar9 == 0) {
126: LAB_18014be01:
129: return iVar13;)F18014bc10F",
    R"F18014bc10U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18014be01.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F18014bc10U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014bc10() noexcept {
    return kFunction_0x18014bc10;
}

// 0x18014be40 FUN_18014be40
// source: re/dump/decompile/0x18014be40_FUN_18014be40.c
// size: 417 bytes; thunk: false
// body sha256: fa17bf502e52ee993273caf1b0413b3aaf972887c29b2e19c84ceec89db6e622
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014be40{
    "0x18014be40",
    "FUN_18014be40",
    R"F18014be40S(undefined FUN_18014be40())F18014be40S",
    R"B18014be40(// 0x18014be40  FUN_18014be40
// size=417 thunk=false
// signature: undefined FUN_18014be40()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18014be40(LPCWSTR param_1,longlong *param_2,undefined8 param_3)

{
  BOOL BVar1;
  HANDLE hFile;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  char *pcVar5;
  longlong lVar6;
  DWORD nNumberOfBytesToRead;
  undefined8 uVar7;
  undefined1 auStackY_88 [32];
  DWORD local_48 [2];
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStackY_88;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    param_1 = *(LPCWSTR *)param_1;
  }
  uVar2 = 0;
  hFile = CreateFileW(param_1,0x80000000,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    uVar7 = 0xb;
    pcVar5 = "cannot open";
  }
  else {
    local_40.QuadPart = 0;
    BVar1 = GetFileSizeEx(hFile,&local_40);
    if ((BVar1 == 0) || (local_40.QuadPart < 1)) {
      CloseHandle(hFile);
      uVar7 = 5;
      pcVar5 = "empty";
    }
    else if ((ulonglong)local_40 < 0x10000001) {
      FUN_180218360(param_2);
      lVar3 = param_2[1];
      lVar6 = *param_2;
      if (lVar3 != lVar6) {
        do {
          local_48[0] = 0;
          uVar4 = (lVar3 - lVar6) - uVar2;
          nNumberOfBytesToRead = 0x100000;
          if (uVar4 < 0x100000) {
            nNumberOfBytesToRead = (DWORD)uVar4;
          }
          BVar1 = ReadFile(hFile,(LPVOID)(lVar6 + uVar2),nNumberOfBytesToRead,local_48,
                           (LPOVERLAPPED)0x0);
          if ((BVar1 == 0) || (local_48[0] == 0)) break;
          lVar3 = param_2[1];
          uVar2 = uVar2 + local_48[0];
          lVar6 = *param_2;
        } while (uVar2 < (ulonglong)(lVar3 - lVar6));
      }
      CloseHandle(hFile);
      FUN_180218360(param_2,uVar2);
      if (0x1ff < (ulonglong)(param_2[1] - *param_2)) {
        return CONCAT71((int7)((ulonglong)(param_2[1] - *param_2) >> 8),1);
      }
      uVar7 = 9;
      pcVar5 = "truncated";
    }
    else {
      CloseHandle(hFile);
      uVar7 = 9;
      pcVar5 = "too large";
    }
  }
  uVar2 = FUN_180212700(param_3,pcVar5,uVar7);
  return uVar2 & 0xffffffffffffff00;
}


)B18014be40",
    "fa17bf502e52ee993273caf1b0413b3aaf972887c29b2e19c84ceec89db6e622",
    R"F18014be40C(FUN_180212700
FUN_180218360)F18014be40C",
    R"F18014be40D(DAT_1803da4c0)F18014be40D",
    R"F18014be40T("empty"
"too large"
"truncated"
"cannot open")F18014be40T",
    R"F18014be40F(27: if (7 < *(ulonglong *)(param_1 + 0xc)) {
32: if (hFile == (HANDLE)0xffffffffffffffff) {
36: else {
39: if ((BVar1 == 0) || (local_40.QuadPart < 1)) {
44: else if ((ulonglong)local_40 < 0x10000001) {
48: if (lVar3 != lVar6) {
49: do {
53: if (uVar4 < 0x100000) {
58: if ((BVar1 == 0) || (local_48[0] == 0)) break;
66: if (0x1ff < (ulonglong)(param_2[1] - *param_2)) {
67: return CONCAT71((int7)((ulonglong)(param_2[1] - *param_2) >> 8),1);
72: else {
79: return uVar2 & 0xffffffffffffff00;)F18014be40F",
    R"F18014be40U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F18014be40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014be40() noexcept {
    return kFunction_0x18014be40;
}

// 0x18014bff0 FUN_18014bff0
// source: re/dump/decompile/0x18014bff0_FUN_18014bff0.c
// size: 1330 bytes; thunk: false
// body sha256: 6764fccbe69b76bf6a3ff20a1906910b38f390d84dd9ad26f556c36def87f4d2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014bff0{
    "0x18014bff0",
    "FUN_18014bff0",
    R"F18014bff0S(undefined FUN_18014bff0())F18014bff0S",
    R"B18014bff0(// 0x18014bff0  FUN_18014bff0
// size=1330 thunk=false
// signature: undefined FUN_18014bff0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18014bff0(longlong *param_1,uint param_2,longlong param_3)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  void *_Memory;
  char *pcVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined1 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [24];
  void **local_108;
  char local_f8;
  undefined8 local_f0;
  longlong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  byte local_d0 [8];
  uint local_c8;
  undefined4 **local_c0;
  undefined8 local_b8;
  longlong local_b0;
  char *local_a8;
  uint *local_a0;
  uint *puStack_98;
  uint *local_90;
  undefined8 local_88;
  void *local_80;
  void *pvStack_78;
  longlong local_70;
  undefined4 *local_68;
  undefined4 *puStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  uVar17 = local_48;
  puVar15 = auStack_128;
  if (param_2 != 0) {
    uVar4 = *(uint *)(param_1 + 4);
    uVar17 = (ulonglong)uVar4;
    puVar15 = auStack_128;
    if (param_2 <= uVar4) {
      uStack_50 = 0;
      uVar4 = uVar4 + 1;
      uVar5 = 0;
      local_d0[0] = 0;
      local_d0[1] = 0;
      local_d0[2] = 0;
      local_d0[3] = 0;
      uVar17 = (ulonglong)uVar4 + 0x1f >> 5;
      local_68 = (undefined4 *)0x0;
      puStack_60 = (undefined4 *)0x0;
      local_58 = 0;
      local_b0 = param_3;
      if (uVar17 != 0) {
        FUN_18022eb50(&local_68,uVar17);
        puVar13 = local_68;
        local_c0 = &local_68;
        local_d0[4] = 0;
        local_d0[5] = 0;
        local_d0[6] = 0;
        local_d0[7] = 0;
        lVar14 = 0;
        do {
          lVar10 = lVar14 + 1;
          if (local_d0[lVar14] != local_d0[lVar14 + 4]) {
            uVar5 = -(uint)(local_d0[lVar14] < local_d0[lVar14 + 4]) | 1;
            break;
          }
          lVar14 = lVar10;
        } while (lVar10 != 4);
        uVar19 = uVar17;
        if (uVar5 == 0) {
          memset(local_68,0,uVar17 * 4);
          puVar13 = puVar13 + uVar17;
        }
        else {
          do {
            *puVar13 = 0;
            puVar13 = puVar13 + 1;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
        }
        local_c0 = (undefined4 **)0x0;
        puStack_60 = puVar13;
      }
      if ((uVar17 < (ulonglong)((longlong)puStack_60 - (longlong)local_68 >> 2)) &&
         (local_68 + uVar17 != puStack_60)) {
        puStack_60 = local_68 + uVar17;
      }
      if ((uVar4 & 0x1f) != 0) {
        local_68[uVar17 - 1] = local_68[uVar17 - 1] & (1 << (sbyte)(uVar4 & 0x1f)) - 1U;
      }
      local_a0 = (uint *)0x0;
      puStack_98 = (uint *)0x0;
      local_90 = (uint *)0x0;
      local_c8 = param_2;
      uStack_50 = (ulonglong)uVar4;
      FUN_18022eb50(&local_a0,1);
      *local_a0 = local_c8;
      puStack_98 = local_a0 + 1;
      local_b8 = 0;
      local_80 = (void *)0x0;
      pvStack_78 = (void *)0x0;
      local_70 = 0;
      uVar17 = 0;
      if (local_a0 != puStack_98) {
        do {
          local_d8 = uVar17 + 1;
          if (0x100000 < local_d8) {
            uVar17 = 0;
            goto LAB_18014c48d;
          }
          puVar8 = puStack_98 + -1;
          uVar4 = *puVar8;
          if ((uVar4 != 0) && (uVar4 <= *(uint *)(param_1 + 4))) {
            uVar5 = local_68[uVar4 >> 5];
            uVar6 = 1 << ((byte)uVar4 & 0x1f);
            if ((uVar5 & uVar6) == 0) {
              local_68[uVar4 >> 5] = uVar6 | uVar5;
              lVar10 = (ulonglong)(uVar4 - 1) * (ulonglong)*(uint *)(param_1 + 3) + *param_1;
              lVar14 = 0;
              if (uVar4 == 1) {
                lVar14 = 100;
              }
              local_a8 = (char *)(lVar14 + lVar10);
              local_f8 = *local_a8;
              if ((local_f8 == '\x05') || (local_f8 == '\r')) {
                local_e8 = 8;
                if (local_f8 == '\x05') {
                  local_e8 = 0xc;
                }
                uVar17 = (ulonglong)CONCAT11(local_a8[3],local_a8[4]);
                if (lVar14 + uVar17 * 2 + local_e8 <= (ulonglong)*(uint *)((longlong)param_1 + 0x1c)
                   ) {
                  if (local_f8 == '\x05') {
                    uVar4 = CONCAT31(CONCAT21(CONCAT11(local_a8[8],local_a8[9]),local_a8[10]),
                                     local_a8[0xb]);
                    local_f0 = CONCAT44(local_f0._4_4_,uVar4);
                    if ((uVar4 != 0) && (uVar4 <= *(uint *)(param_1 + 4))) {
                      if (puVar8 == local_90) {
                        puStack_98 = puVar8;
                        FUN_180229d20(&local_a0,puVar8,&local_f0);
                        puVar8 = puStack_98;
                      }
                      else {
                        *puVar8 = uVar4;
                        puVar8 = puStack_98;
                      }
                    }
                  }
                  puStack_98 = puVar8;
                  uVar19 = 0;
                  puVar8 = puStack_98;
                  if (uVar17 != 0) {
                    uVar18 = local_e8 + lVar14;
                    pcVar11 = (char *)(lVar14 + lVar10);
                    lVar14 = local_e8;
                    local_e0 = uVar18;
                    do {
                      uVar9 = (ulonglong)
                              CONCAT11(pcVar11[lVar14 + uVar19 * 2],
                                       *(undefined1 *)(uVar18 + uVar19 * 2 + 1 + lVar10));
                      if ((uVar18 <= uVar9) && (uVar9 < *(uint *)((longlong)param_1 + 0x1c))) {
                        puVar15 = (undefined1 *)(uVar9 + lVar10);
                        uVar9 = *(uint *)((longlong)param_1 + 0x1c) - uVar9;
                        if (local_f8 == '\x05') {
                          if (3 < uVar9) {
                            uVar4 = CONCAT31(CONCAT21(CONCAT11(*puVar15,puVar15[1]),puVar15[2]),
                                             puVar15[3]);
                            local_f0 = CONCAT44(local_f0._4_4_,uVar4);
                            if ((uVar4 != 0) && (uVar4 <= *(uint *)(param_1 + 4))) {
                              if (puStack_98 == local_90) {
                                FUN_180229d20(&local_a0,puStack_98,&local_f0);
                                uVar18 = local_e0;
                                lVar14 = local_e8;
                              }
                              else {
                                *puStack_98 = uVar4;
                                puStack_98 = puStack_98 + 1;
                              }
                            }
                          }
                        }
                        else {
                          local_f0 = 0;
                          local_88 = 0;
                          uVar12 = uVar9;
                          iVar7 = FUN_18014b840(puVar15,uVar9,&local_f0);
                          uVar18 = local_e0;
                          lVar14 = local_e8;
                          if (iVar7 != 0) {
                            lVar16 = (longlong)iVar7;
                            iVar7 = FUN_18014b840(puVar15 + lVar16,uVar12 - lVar16,&local_88);
                            uVar18 = local_e0;
                            lVar14 = local_e8;
                            if (iVar7 != 0) {
                              if (local_80 != pvStack_78) {
                                pvStack_78 = local_80;
                              }
                              local_108 = &local_80;
                              cVar3 = FUN_18014c530(param_1,local_f0,puVar15 + iVar7 + lVar16,
                                                    uVar9 - (iVar7 + lVar16));
                              uVar18 = local_e0;
                              lVar14 = local_e8;
                              if (cVar3 != '\0') {
                                plVar1 = *(longlong **)(local_b0 + 0x38);
                                if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  std::_Xbad_function_call();
                                }
                                (**(code **)(*plVar1 + 0x10))(plVar1,&local_88,&local_80);
                                uVar18 = local_e0;
                                lVar14 = local_e8;
                              }
                            }
                          }
                        }
                      }
                      uVar19 = uVar19 + 1;
                      pcVar11 = local_a8;
                      puVar8 = puStack_98;
                    } while (uVar19 < uVar17);
                  }
                }
              }
            }
          }
          puStack_98 = puVar8;
          uVar17 = local_d8;
        } while (local_a0 != puStack_98);
      }
      uVar17 = 1;
LAB_18014c48d:
      if (local_80 != (void *)0x0) {
        _Memory = local_80;
        if ((0xfff < (ulonglong)(local_70 - (longlong)local_80)) &&
           (_Memory = *(void **)((longlong)local_80 + -8),
           0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)_Memory)))) {
          pcVar2 = (code *)swi(0x29);
          uVar17 = (*pcVar2)(5);
          puVar15 = auStack_120;
          goto LAB_18014c4fd;
        }
        free(_Memory);
        local_80 = (void *)0x0;
        pvStack_78 = (void *)0x0;
        local_70 = 0;
      }
      FUN_18021e060(&local_a0);
      FUN_18021e060(&local_68);
      puVar15 = auStack_128;
      goto LAB_18014c4ff;
    }
  }
LAB_18014c4fd:
  uVar17 = uVar17 & 0xffffffffffffff00;
LAB_18014c4ff:
  *(undefined8 *)(puVar15 + -8) = 0x18014c50b;
  return uVar17;
}


)B18014bff0",
    "6764fccbe69b76bf6a3ff20a1906910b38f390d84dd9ad26f556c36def87f4d2",
    R"F18014bff0C(FUN_18014b840
FUN_18014c530
FUN_18021e060
FUN_180229d20
FUN_18022eb50)F18014bff0C",
    R"F18014bff0D(LAB_18014c48d
LAB_18014c4fd
LAB_18014c4ff
DAT_1803da4c0)F18014bff0D",
    R"F18014bff0T()F18014bff0T",
    R"F18014bff0F(62: if (param_2 != 0) {
66: if (param_2 <= uVar4) {
79: if (uVar17 != 0) {
88: do {
90: if (local_d0[lVar14] != local_d0[lVar14 + 4]) {
92: break;
97: if (uVar5 == 0) {
101: else {
102: do {
111: if ((uVar17 < (ulonglong)((longlong)puStack_60 - (longlong)local_68 >> 2)) &&
115: if ((uVar4 & 0x1f) != 0) {
131: if (local_a0 != puStack_98) {
132: do {
134: if (0x100000 < local_d8) {
136: goto LAB_18014c48d;
140: if ((uVar4 != 0) && (uVar4 <= *(uint *)(param_1 + 4))) {
143: if ((uVar5 & uVar6) == 0) {
147: if (uVar4 == 1) {
152: if ((local_f8 == '\x05') || (local_f8 == '\r')) {
154: if (local_f8 == '\x05') {
158: if (lVar14 + uVar17 * 2 + local_e8 <= (ulonglong)*(uint *)((longlong)param_1 + 0x1c)
160: if (local_f8 == '\x05') {
164: if ((uVar4 != 0) && (uVar4 <= *(uint *)(param_1 + 4))) {
165: if (puVar8 == local_90) {
170: else {
179: if (uVar17 != 0) {
184: do {
188: if ((uVar18 <= uVar9) && (uVar9 < *(uint *)((longlong)param_1 + 0x1c))) {
191: if (local_f8 == '\x05') {
192: if (3 < uVar9) {
196: if ((uVar4 != 0) && (uVar4 <= *(uint *)(param_1 + 4))) {
197: if (puStack_98 == local_90) {
202: else {
209: else {
216: if (iVar7 != 0) {
221: if (iVar7 != 0) {
222: if (local_80 != pvStack_78) {
230: if (cVar3 != '\0') {
232: if (plVar1 == (longlong *)0x0) {
258: LAB_18014c48d:
259: if (local_80 != (void *)0x0) {
261: if ((0xfff < (ulonglong)(local_70 - (longlong)local_80)) &&
267: goto LAB_18014c4fd;
277: goto LAB_18014c4ff;
280: LAB_18014c4fd:
282: LAB_18014c4ff:
284: return uVar17;)F18014bff0F",
    R"F18014bff0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18014c48d.
TODO: recover the declaration, type and value for global/data reference LAB_18014c4fd.
TODO: recover the declaration, type and value for global/data reference LAB_18014c4ff.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 236: (**(code **)(*plVar1 + 0x10))(plVar1,&local_88,&local_80);.
TODO: resolve the indirect call in body 264: pcVar2 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 265: uVar17 = (*pcVar2)(5);.)F18014bff0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014bff0() noexcept {
    return kFunction_0x18014bff0;
}

// 0x18014c530 FUN_18014c530
// source: re/dump/decompile/0x18014c530_FUN_18014c530.c
// size: 380 bytes; thunk: false
// body sha256: f018f7274777042edfaaf2a153236c4cadbaa22b12c484dbb76f3e184afc43c8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014c530{
    "0x18014c530",
    "FUN_18014c530",
    R"F18014c530S(undefined FUN_18014c530())F18014c530S",
    R"B18014c530(// 0x18014c530  FUN_18014c530
// size=380 thunk=false
// signature: undefined FUN_18014c530()
// status: ok


bool FUN_18014c530(longlong *param_1,ulonglong param_2,longlong param_3,ulonglong param_4,
                  longlong param_5)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  
  if (param_2 < 0x2000001) {
    iVar1 = *(int *)((longlong)param_1 + 0x1c);
    uVar3 = param_2;
    if (iVar1 - 0x23 < param_2) {
      uVar3 = (ulonglong)((iVar1 * 0x20 - 0x180U) / 0xff - 0x17);
      uVar4 = (param_2 - uVar3) % (ulonglong)(iVar1 - 4) + uVar3;
      if (uVar4 <= iVar1 - 0x23) {
        uVar3 = uVar4;
      }
    }
    if (uVar3 <= param_4) {
      puVar5 = (undefined1 *)(param_3 + uVar3);
      FUN_1801fd7f0(param_5,param_3,puVar5);
      if (uVar3 == param_2) {
        return true;
      }
      if (uVar3 + 4 <= param_4) {
        uVar4 = 0;
        uVar2 = CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]);
        param_2 = param_2 - uVar3;
        while( true ) {
          if (((param_2 == 0) || (uVar2 == 0)) || (*(uint *)(param_1 + 4) < uVar2)) {
            return param_2 == 0;
          }
          uVar4 = uVar4 + 1;
          if (0x100000 < uVar4) break;
          uVar3 = (ulonglong)(*(int *)((longlong)param_1 + 0x1c) - 4);
          puVar5 = (undefined1 *)
                   ((ulonglong)*(uint *)(param_1 + 3) * (ulonglong)(uVar2 - 1) + *param_1);
          if (param_2 < uVar3) {
            uVar3 = param_2;
          }
          FUN_180212f60(param_5,*(undefined8 *)(param_5 + 8),puVar5 + 4,
                        puVar5 + (uVar3 - (longlong)(puVar5 + 4)) + 4);
          uVar2 = CONCAT31(CONCAT21(CONCAT11(*puVar5,puVar5[1]),puVar5[2]),puVar5[3]);
          param_2 = param_2 - uVar3;
        }
      }
    }
  }
  return false;
}


)B18014c530",
    "f018f7274777042edfaaf2a153236c4cadbaa22b12c484dbb76f3e184afc43c8",
    R"F18014c530C(FUN_1801fd7f0
FUN_180212f60)F18014c530C",
    R"F18014c530D()F18014c530D",
    R"F18014c530T()F18014c530T",
    R"F18014c530F(17: if (param_2 < 0x2000001) {
20: if (iVar1 - 0x23 < param_2) {
23: if (uVar4 <= iVar1 - 0x23) {
27: if (uVar3 <= param_4) {
30: if (uVar3 == param_2) {
31: return true;
33: if (uVar3 + 4 <= param_4) {
37: while( true ) {
38: if (((param_2 == 0) || (uVar2 == 0)) || (*(uint *)(param_1 + 4) < uVar2)) {
39: return param_2 == 0;
42: if (0x100000 < uVar4) break;
46: if (param_2 < uVar3) {
57: return false;)F18014c530F",
    R"F18014c530U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18014c530U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014c530() noexcept {
    return kFunction_0x18014c530;
}

// 0x18014c6b0 FUN_18014c6b0
// source: re/dump/decompile/0x18014c6b0_FUN_18014c6b0.c
// size: 1027 bytes; thunk: false
// body sha256: 4417e6cc460b2bcce6d328f92ae3e18b6023bddcb0a45e0d5de26501968f3ef7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014c6b0{
    "0x18014c6b0",
    "FUN_18014c6b0",
    R"F18014c6b0S(undefined FUN_18014c6b0())F18014c6b0S",
    R"B18014c6b0(// 0x18014c6b0  FUN_18014c6b0
// size=1027 thunk=false
// signature: undefined FUN_18014c6b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_18014c6b0(undefined1 *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  ushort uVar3;
  ulonglong uVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined1 *local_168;
  undefined8 *local_158;
  int *piStack_150;
  undefined1 *local_148;
  undefined8 *local_140;
  undefined8 uStack_138;
  ulonglong *local_130;
  undefined8 *puStack_128;
  undefined **local_118;
  undefined8 *local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  ulonglong *local_100;
  undefined8 *puStack_f8;
  undefined ***local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  undefined ***local_a0;
  int local_98 [2];
  ulonglong local_90;
  longlong *local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_198;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0xf;
  param_1[8] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  param_1[0x58] = 0;
  local_178 = 1;
  local_88 = (longlong *)0x0;
  lStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_168 = param_1;
  cVar1 = FUN_18014be40(param_2,&local_88,param_1 + 8);
  if (cVar1 == '\0') goto LAB_18014ca6b;
  if ((*local_88 == s_SQLite_format_3_180338d00._0_8_) &&
     (local_88[1] == s_SQLite_format_3_180338d00._8_8_)) {
    uVar3 = CONCAT11((char)local_88[2],*(undefined1 *)((longlong)local_88 + 0x11));
    if (uVar3 == 1) {
      uVar4 = 0x10000;
      uStack_70 = 0x10000;
    }
    else {
      uVar4 = (ulonglong)uVar3;
      uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uVar3);
      if ((uVar3 < 0x200) || ((uVar3 & uVar3 - 1) != 0)) {
        uVar7 = 0xd;
        pcVar6 = "bad page size";
        goto LAB_18014ca62;
      }
    }
    uVar5 = (int)uVar4 - (uint)*(byte *)((longlong)local_88 + 0x14);
    uStack_70 = CONCAT44(uVar5,(undefined4)uStack_70);
    if (uVar5 < 0x1e0) {
      uVar7 = 0x11;
      pcVar6 = "bad reserved size";
    }
    else {
      iVar2 = (int)((ulonglong)(lStack_80 - (longlong)local_88) / uVar4);
      local_68 = CONCAT44(local_68._4_4_,iVar2);
      if (iVar2 != 0) {
        local_90 = 0;
        uStack_40 = 0;
        local_38 = 0;
        local_30 = 0xf;
        local_48 = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0;
        local_140 = &local_60;
        local_130 = &local_90;
        puStack_128 = &local_48;
        local_118 = 
        vftable_std_8_std_E_EV__allocator_X_JAEBV__vector_Z_std_filesystem_AEBVpath_34_YA_AUDatabase_Features_Sqlite__2__Read_V_lambda_1_____Func_impl_no_alloc
        ;
        uStack_138._0_4_ = SUB84(param_1,0);
        uStack_138._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
        uStack_108 = (undefined4)uStack_138;
        uStack_104 = uStack_138._4_4_;
        local_e0 = &local_118;
        uStack_138 = param_1;
        local_110 = local_140;
        local_100 = local_130;
        puStack_f8 = puStack_128;
        FUN_18014bff0(&local_88,1,&local_118);
        if (local_e0 != (undefined ***)0x0) {
          (*(code *)(*local_e0)[4])
                    (local_e0,CONCAT71((int7)((ulonglong)&local_118 >> 8),local_e0 != &local_118));
          local_e0 = (undefined ***)0x0;
        }
        *param_1 = 1;
        if (0 < (longlong)local_90) {
          iVar2 = FUN_18014bc10(&local_48);
          local_98[0] = 0;
          if (-1 < iVar2) {
            local_98[0] = iVar2;
          }
          local_158 = &local_60;
          piStack_150 = local_98;
          local_d8 = 
          vftable_std_8_std_E_EV__allocator_X_JAEBV__vector_Z_std_filesystem_AEBVpath_34_YA_AUDatabase_Features_Sqlite__7__Read_V_lambda_2_____Func_impl_no_alloc
          ;
          local_a0 = &local_d8;
          local_148 = param_1;
          local_c0 = param_1;
          local_d0 = local_158;
          uStack_c8 = piStack_150;
          FUN_18014bff0(&local_88,local_90 & 0xffffffff,&local_d8);
          if (local_a0 != (undefined ***)0x0) {
            (*(code *)(*local_a0)[4])
                      (local_a0,CONCAT71((int7)((ulonglong)&local_d8 >> 8),local_a0 != &local_d8));
            local_a0 = (undefined ***)0x0;
          }
        }
        FUN_18020abf0(&local_60);
        FUN_18020e450(&local_48);
        FUN_18006e960(&local_88);
        return param_1;
      }
      uVar7 = 9;
      pcVar6 = "truncated";
    }
  }
  else {
    uVar7 = 0xe;
    pcVar6 = "not a database";
  }
LAB_18014ca62:
  FUN_180212700(param_1 + 8,pcVar6,uVar7);
LAB_18014ca6b:
  local_178 = 0;
  FUN_18006e960(&local_88);
  return param_1;
}


)B18014c6b0",
    "4417e6cc460b2bcce6d328f92ae3e18b6023bddcb0a45e0d5de26501968f3ef7",
    R"F18014c6b0C(FUN_18006e960
FUN_18014bc10
FUN_18014be40
FUN_18014bff0
FUN_18020abf0
FUN_18020e450
FUN_180212700)F18014c6b0C",
    R"F18014c6b0D(LAB_18014ca62
LAB_18014ca6b
DAT_1803da4c0)F18014c6b0D",
    R"F18014c6b0T("truncated"
"bad page size"
"not a database"
"bad reserved size")F18014c6b0T",
    R"F18014c6b0F(79: if (cVar1 == '\0') goto LAB_18014ca6b;
80: if ((*local_88 == s_SQLite_format_3_180338d00._0_8_) &&
83: if (uVar3 == 1) {
87: else {
90: if ((uVar3 < 0x200) || ((uVar3 & uVar3 - 1) != 0)) {
93: goto LAB_18014ca62;
98: if (uVar5 < 0x1e0) {
102: else {
105: if (iVar2 != 0) {
130: if (local_e0 != (undefined ***)0x0) {
136: if (0 < (longlong)local_90) {
139: if (-1 < iVar2) {
153: if (local_a0 != (undefined ***)0x0) {
162: return param_1;
168: else {
172: LAB_18014ca62:
174: LAB_18014ca6b:
177: return param_1;)F18014c6b0F",
    R"F18014c6b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18014ca62.
TODO: recover the declaration, type and value for global/data reference LAB_18014ca6b.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 131: (*(code *)(*local_e0)[4]).
TODO: resolve the indirect call in body 154: (*(code *)(*local_a0)[4]).)F18014c6b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014c6b0() noexcept {
    return kFunction_0x18014c6b0;
}

// 0x18014cac0 FUN_18014cac0
// source: re/dump/decompile/0x18014cac0_FUN_18014cac0.c
// size: 456 bytes; thunk: false
// body sha256: 30f384c89c95ab7697381c72b709e860e0c98b6f733dce4de78eb0bf5d82916a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014cac0{
    "0x18014cac0",
    "FUN_18014cac0",
    R"F18014cac0S(undefined FUN_18014cac0())F18014cac0S",
    R"B18014cac0(// 0x18014cac0  FUN_18014cac0
// size=456 thunk=false
// signature: undefined FUN_18014cac0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18014cac0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  char ******_Str1;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [40];
  undefined1 local_50 [32];
  char *****local_30 [2];
  longlong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  cVar4 = FUN_18014b9d0(param_3,*param_1);
  if (cVar4 == '\0') {
    return;
  }
  if ((ulonglong)((((longlong *)*param_1)[1] - *(longlong *)*param_1 >> 3) * -0x5555555555555555) <
      5) {
    return;
  }
  pcVar6 = (char *)FUN_18014bba0(local_50,param_3);
  if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
    pcVar6 = *(char **)pcVar6;
  }
  iVar5 = _stricmp(pcVar6,"table");
  FUN_18020e450(local_50);
  if (iVar5 != 0) {
    return;
  }
  FUN_18014bba0(local_30,param_3,*(longlong *)*param_1 + 0x18);
  if (local_20 == 0) goto LAB_18014cc5f;
  FUN_18020d6f0(param_1[1] + 0x28,local_30);
  _Str1 = local_30;
  if (0xf < local_18) {
    _Str1 = (char ******)local_30[0];
  }
  iVar5 = _stricmp((char *)_Str1,"cookies");
  if (iVar5 != 0) goto LAB_18014cc5f;
  *(undefined1 *)(param_1[1] + 0x58) = 1;
  lVar1 = *(longlong *)*param_1;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (lVar2 == 8) {
LAB_18014cc26:
    uVar8 = 0;
  }
  else if (lVar2 == 9) {
    uVar8 = 1;
  }
  else {
    if ((5 < lVar2 - 1U) || (uVar3 = *(ulonglong *)(lVar1 + 0x58), uVar3 == 0)) goto LAB_18014cc26;
    pcVar6 = (char *)(*(longlong *)(lVar1 + 0x50) + *param_3);
    uVar8 = (longlong)*pcVar6 >> 0x3f;
    uVar9 = 0;
    if (uVar3 != 0) {
      do {
        uVar8 = uVar8 << 8 | (ulonglong)(byte)pcVar6[uVar9];
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar3);
    }
  }
  *(ulonglong *)param_1[2] = uVar8;
  uVar7 = FUN_18014bba0(local_50,param_3,*(longlong *)*param_1 + 0x60);
  FUN_18020e8a0(param_1[3],uVar7);
  FUN_18020e450(local_50);
LAB_18014cc5f:
  FUN_18020e450(local_30);
  return;
}


)B18014cac0",
    "30f384c89c95ab7697381c72b709e860e0c98b6f733dce4de78eb0bf5d82916a",
    R"F18014cac0C(FUN_18014b9d0
FUN_18014bba0
FUN_18020d6f0
FUN_18020e450
FUN_18020e8a0)F18014cac0C",
    R"F18014cac0D(LAB_18014cc26
LAB_18014cc5f
DAT_1803da4c0)F18014cac0D",
    R"F18014cac0T("table"
"cookies")F18014cac0T",
    R"F18014cac0F(31: if (cVar4 == '\0') {
32: return;
34: if ((ulonglong)((((longlong *)*param_1)[1] - *(longlong *)*param_1 >> 3) * -0x5555555555555555) <
36: return;
39: if (0xf < *(ulonglong *)(pcVar6 + 0x18)) {
44: if (iVar5 != 0) {
45: return;
48: if (local_20 == 0) goto LAB_18014cc5f;
51: if (0xf < local_18) {
55: if (iVar5 != 0) goto LAB_18014cc5f;
59: if (lVar2 == 8) {
60: LAB_18014cc26:
63: else if (lVar2 == 9) {
66: else {
67: if ((5 < lVar2 - 1U) || (uVar3 = *(ulonglong *)(lVar1 + 0x58), uVar3 == 0)) goto LAB_18014cc26;
71: if (uVar3 != 0) {
72: do {
82: LAB_18014cc5f:
84: return;)F18014cac0F",
    R"F18014cac0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18014cc26.
TODO: recover the declaration, type and value for global/data reference LAB_18014cc5f.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F18014cac0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014cac0() noexcept {
    return kFunction_0x18014cac0;
}

// 0x18014cc90 FUN_18014cc90
// source: re/dump/decompile/0x18014cc90_FUN_18014cc90.c
// size: 47 bytes; thunk: false
// body sha256: 3ee2c2d13ccb867aed0c4dc184c3a8533b173d7da89307df044a0bee36e9737a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014cc90{
    "0x18014cc90",
    "FUN_18014cc90",
    R"F18014cc90S(undefined FUN_18014cc90())F18014cc90S",
    R"B18014cc90(// 0x18014cc90  FUN_18014cc90
// size=47 thunk=false
// signature: undefined FUN_18014cc90()
// status: ok


void FUN_18014cc90(longlong param_1)

{
  FUN_18020d5c0(param_1 + 0x40);
  FUN_18020d5c0(param_1 + 0x28);
  FUN_18020e450(param_1 + 8);
  return;
}


)B18014cc90",
    "3ee2c2d13ccb867aed0c4dc184c3a8533b173d7da89307df044a0bee36e9737a",
    R"F18014cc90C(FUN_18020d5c0
FUN_18020e450)F18014cc90C",
    R"F18014cc90D()F18014cc90D",
    R"F18014cc90T()F18014cc90T",
    R"F18014cc90F(13: return;)F18014cc90F",
    R"F18014cc90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18014cc90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014cc90() noexcept {
    return kFunction_0x18014cc90;
}

// 0x18014ccc0 FUN_18014ccc0
// source: re/dump/decompile/0x18014ccc0_FUN_18014ccc0.c
// size: 137 bytes; thunk: false
// body sha256: 19ae9db9c51c83283574f491c520a21c9198b8e349752fb2d29f30a4f241a18a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014ccc0{
    "0x18014ccc0",
    "FUN_18014ccc0",
    R"F18014ccc0S(undefined FUN_18014ccc0())F18014ccc0S",
    R"B18014ccc0(// 0x18014ccc0  FUN_18014ccc0
// size=137 thunk=false
// signature: undefined FUN_18014ccc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18014ccc0(LPCSTR param_1,HMODULE param_2)

{
  HMODULE pHVar1;
  HANDLE pvVar2;
  HMODULE pHVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  pHVar1 = GetModuleHandleA(param_1);
  pHVar3 = (HMODULE)0x0;
  if (pHVar1 != (HMODULE)0x0) {
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar2 = GetCurrentProcess();
    pHVar3 = (HMODULE)K32GetModuleInformation(pvVar2,pHVar1,&local_28,0x18);
    if ((((int)pHVar3 != 0) && (pHVar1 <= param_2)) &&
       (pHVar3 = (HMODULE)((longlong)&pHVar1->unused + (uStack_20 & 0xffffffff)), param_2 < pHVar3))
    {
      return CONCAT71((int7)((ulonglong)pHVar3 >> 8),1);
    }
  }
  return (ulonglong)pHVar3 & 0xffffffffffffff00;
}


)B18014ccc0",
    "19ae9db9c51c83283574f491c520a21c9198b8e349752fb2d29f30a4f241a18a",
    R"F18014ccc0C()F18014ccc0C",
    R"F18014ccc0D(DAT_1803da4c0)F18014ccc0D",
    R"F18014ccc0T()F18014ccc0T",
    R"F18014ccc0F(24: if (pHVar1 != (HMODULE)0x0) {
30: if ((((int)pHVar3 != 0) && (pHVar1 <= param_2)) &&
33: return CONCAT71((int7)((ulonglong)pHVar3 >> 8),1);
36: return (ulonglong)pHVar3 & 0xffffffffffffff00;)F18014ccc0F",
    R"F18014ccc0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F18014ccc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014ccc0() noexcept {
    return kFunction_0x18014ccc0;
}

// 0x18014cd50 FUN_18014cd50
// source: re/dump/decompile/0x18014cd50_FUN_18014cd50.c
// size: 74 bytes; thunk: false
// body sha256: fa5f1ce0b2b16a683087df2f5432230f524c37b4beb580ea857119c56d460684
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014cd50{
    "0x18014cd50",
    "FUN_18014cd50",
    R"F18014cd50S(undefined FUN_18014cd50())F18014cd50S",
    R"B18014cd50(// 0x18014cd50  FUN_18014cd50
// size=74 thunk=false
// signature: undefined FUN_18014cd50()
// status: ok


undefined8 FUN_18014cd50(longlong *param_1,int param_2,longlong param_3)

{
  if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
    if ((((int)param_1[1] < param_2) && (param_3 != 0)) &&
       (*(longlong *)(param_3 + (longlong)(int)param_1[1] * 8) != 0)) {
      FUN_180210ae0(*param_1);
    }
    else {
      FUN_1802055d0(*param_1);
    }
    return 0;
  }
  return 1;
}


)B18014cd50",
    "fa5f1ce0b2b16a683087df2f5432230f524c37b4beb580ea857119c56d460684",
    R"F18014cd50C(FUN_1802055d0
FUN_180210ae0)F18014cd50C",
    R"F18014cd50D()F18014cd50D",
    R"F18014cd50T()F18014cd50T",
    R"F18014cd50F(10: if ((param_1 != (longlong *)0x0) && (*param_1 != 0)) {
11: if ((((int)param_1[1] < param_2) && (param_3 != 0)) &&
15: else {
18: return 0;
20: return 1;)F18014cd50F",
    R"F18014cd50U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18014cd50U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014cd50() noexcept {
    return kFunction_0x18014cd50;
}

// 0x18014cda0 FUN_18014cda0
// source: re/dump/decompile/0x18014cda0_FUN_18014cda0.c
// size: 185 bytes; thunk: false
// body sha256: d2f84d218c7c878ddaa995d588684ea4825100d0aab324066a6e80341cae9f66
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014cda0{
    "0x18014cda0",
    "FUN_18014cda0",
    R"F18014cda0S(undefined FUN_18014cda0())F18014cda0S",
    R"B18014cda0(// 0x18014cda0  FUN_18014cda0
// size=185 thunk=false
// signature: undefined FUN_18014cda0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18014cda0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  char *_Str;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  char **local_38;
  undefined4 local_30;
  char *local_28;
  char *pcStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  local_28 = (char *)0x0;
  pcStack_20 = (char *)0x0;
  iVar3 = 0;
  local_18 = 0;
  if ((((longlong *)*param_1 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_1, lVar1 != 0)) &&
     ((code *)param_1[1] != (code *)0x0)) {
    local_38 = &local_28;
    local_30 = 0;
    local_48 = 0;
    iVar2 = (*(code *)param_1[1])(lVar1,"PRAGMA freelist_count",FUN_18014cd50,&local_38);
    iVar3 = 0;
    if ((iVar2 == 0) && (local_28 != pcStack_20)) {
      _Str = local_28;
      if (0xf < *(ulonglong *)(local_28 + 0x18)) {
        _Str = *(char **)local_28;
      }
      iVar3 = atoi(_Str);
    }
  }
  FUN_18020d5c0(&local_28);
  return iVar3;
}


)B18014cda0",
    "d2f84d218c7c878ddaa995d588684ea4825100d0aab324066a6e80341cae9f66",
    R"F18014cda0C(FUN_18014cd50
FUN_18020d5c0)F18014cda0C",
    R"F18014cda0D(DAT_1803da4c0)F18014cda0D",
    R"F18014cda0T("PRAGMA freelist_count")F18014cda0T",
    R"F18014cda0F(30: if ((((longlong *)*param_1 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_1, lVar1 != 0)) &&
37: if ((iVar2 == 0) && (local_28 != pcStack_20)) {
39: if (0xf < *(ulonglong *)(local_28 + 0x18)) {
46: return iVar3;)F18014cda0F",
    R"F18014cda0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 31: ((code *)param_1[1] != (code *)0x0)) {.
TODO: resolve the indirect call in body 35: iVar2 = (*(code *)param_1[1])(lVar1,"PRAGMA freelist_count",FUN_18014cd50,&local_38);.)F18014cda0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014cda0() noexcept {
    return kFunction_0x18014cda0;
}

// 0x18014ce60 FUN_18014ce60
// source: re/dump/decompile/0x18014ce60_FUN_18014ce60.c
// size: 636 bytes; thunk: false
// body sha256: b8aa0c31a6ad3e97c0c7f776664225709381081236abc13a64b46e21c383321a
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014ce60{
    "0x18014ce60",
    "FUN_18014ce60",
    R"F18014ce60S(undefined FUN_18014ce60())F18014ce60S",
    R"B18014ce60(// 0x18014ce60  FUN_18014ce60
// size=636 thunk=false
// signature: undefined FUN_18014ce60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_18014ce60(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  uint local_198;
  undefined8 *local_190;
  undefined1 local_188 [32];
  char local_168 [256];
  byte **local_68;
  undefined4 local_60;
  byte *local_48;
  byte *pbStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_1c8;
  local_198 = 0;
  local_48 = (byte *)0x0;
  pbStack_40 = (byte *)0x0;
  local_38 = 0;
  local_190 = param_1;
  if ((((longlong *)*param_2 == (longlong *)0x0) || (lVar5 = *(longlong *)*param_2, lVar5 == 0)) ||
     ((code *)param_2[1] == (code *)0x0)) {
LAB_18014d07c:
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_18001d080(param_1,&DAT_18033e9cc,1);
  }
  else {
    local_68 = &local_48;
    uVar7 = 2;
    local_60 = 2;
    local_1a8 = 0;
    iVar3 = (*(code *)param_2[1])(lVar5,"PRAGMA database_list",FUN_18014cd50,&local_68);
    pbVar2 = local_48;
    if ((iVar3 != 0) || (local_48 == pbStack_40)) goto LAB_18014d07c;
    if (*(longlong *)(local_48 + 0x10) != 0) {
      pbVar9 = local_48;
      if (0xf < *(ulonglong *)(local_48 + 0x18)) {
        pbVar9 = *(byte **)local_48;
      }
      lVar4 = *(longlong *)(local_48 + 0x10) + -1;
      lVar5 = -1;
      if (lVar4 != -1) {
        lVar5 = lVar4;
      }
      if (lVar5 + 3U < 0x10) {
        memset(local_168,0,0x100);
        pbVar10 = &DAT_18035d1fc;
        do {
          local_168[*pbVar10] = '\x01';
          pbVar10 = pbVar10 + 1;
        } while (pbVar10 != &DAT_18035d1fe);
        pbVar10 = pbVar9 + lVar5;
        cVar1 = local_168[*pbVar10];
        while (cVar1 == '\0') {
          if (pbVar10 == pbVar9) goto LAB_18014d00c;
          pbVar10 = pbVar10 + -1;
          cVar1 = local_168[*pbVar10];
        }
        lVar5 = (longlong)pbVar10 - (longlong)pbVar9;
      }
      else {
        lVar5 = thunk_FUN_1802d4e90(pbVar9,lVar5 + 1,&DAT_18035d1fc,2);
      }
      if (lVar5 == -1) {
LAB_18014d00c:
        uVar6 = FUN_18016d4c0(local_188,pbVar2);
      }
      else {
        uVar6 = FUN_18020e670(pbVar2,&local_68,lVar5 + 1,0xffffffffffffffff);
        uVar7 = 4;
      }
      local_198 = uVar7;
      FUN_18016d4c0(param_1,uVar6);
      uVar8 = uVar7 | 1;
      local_198 = uVar8;
      if ((uVar7 & 4) != 0) {
        uVar8 = uVar7 & 0xfffffffb | 1;
        local_198 = uVar8;
        FUN_18020e450(&local_68);
      }
      if ((uVar8 & 2) != 0) {
        local_198 = uVar8 & 0xfffffffd;
        FUN_18020e450(local_188);
      }
      goto LAB_18014d0a7;
    }
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_18001d080(param_1,":memory:",8);
  }
  local_198 = 1;
LAB_18014d0a7:
  FUN_18020d5c0(&local_48);
  return param_1;
}


)B18014ce60",
    "b8aa0c31a6ad3e97c0c7f776664225709381081236abc13a64b46e21c383321a",
    R"F18014ce60C(FUN_18001d080
FUN_18014cd50
FUN_18016d4c0
FUN_18020d5c0
FUN_18020e450
FUN_18020e670)F18014ce60C",
    R"F18014ce60D(LAB_18014d00c
LAB_18014d07c
LAB_18014d0a7
DAT_18033e9cc
DAT_18035d1fc
DAT_18035d1fe
DAT_1803da4c0)F18014ce60D",
    R"F18014ce60T(":memory:"
"PRAGMA database_list")F18014ce60T",
    R"F18014ce60F(41: if ((((longlong *)*param_2 == (longlong *)0x0) || (lVar5 = *(longlong *)*param_2, lVar5 == 0)) ||
43: LAB_18014d07c:
50: else {
57: if ((iVar3 != 0) || (local_48 == pbStack_40)) goto LAB_18014d07c;
58: if (*(longlong *)(local_48 + 0x10) != 0) {
60: if (0xf < *(ulonglong *)(local_48 + 0x18)) {
65: if (lVar4 != -1) {
68: if (lVar5 + 3U < 0x10) {
71: do {
77: while (cVar1 == '\0') {
78: if (pbVar10 == pbVar9) goto LAB_18014d00c;
84: else {
87: if (lVar5 == -1) {
88: LAB_18014d00c:
91: else {
99: if ((uVar7 & 4) != 0) {
104: if ((uVar8 & 2) != 0) {
108: goto LAB_18014d0a7;
117: LAB_18014d0a7:
119: return param_1;)F18014ce60F",
    R"F18014ce60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18014d00c.
TODO: recover the declaration, type and value for global/data reference LAB_18014d07c.
TODO: recover the declaration, type and value for global/data reference LAB_18014d0a7.
TODO: recover the declaration, type and value for global/data reference DAT_18033e9cc.
TODO: recover the declaration, type and value for global/data reference DAT_18035d1fc.
TODO: recover the declaration, type and value for global/data reference DAT_18035d1fe.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 42: ((code *)param_2[1] == (code *)0x0)) {.
TODO: resolve the indirect call in body 55: iVar3 = (*(code *)param_2[1])(lVar5,"PRAGMA database_list",FUN_18014cd50,&local_68);.)F18014ce60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014ce60() noexcept {
    return kFunction_0x18014ce60;
}

// 0x18014d0e0 FUN_18014d0e0
// source: re/dump/decompile/0x18014d0e0_FUN_18014d0e0.c
// size: 182 bytes; thunk: false
// body sha256: 2dd6cae5f5f8cabce8812ddce8a62a3d058865c4aafea5fea7708b6fdaa6a894
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014d0e0{
    "0x18014d0e0",
    "FUN_18014d0e0",
    R"F18014d0e0S(undefined FUN_18014d0e0())F18014d0e0S",
    R"B18014d0e0(// 0x18014d0e0  FUN_18014d0e0
// size=182 thunk=false
// signature: undefined FUN_18014d0e0()
// status: ok


undefined8 FUN_18014d0e0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar2 = param_1[2];
  if (0x7f < lVar2 - 1U) {
    return 0;
  }
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  if (((lVar2 != 0) &&
      (lVar3 = thunk_FUN_1802d5c20(puVar4,lVar2 + (longlong)puVar4,0x5b),
      lVar3 != lVar2 + (longlong)puVar4)) && (lVar3 - (longlong)puVar4 != -1)) {
    return 0;
  }
  plVar1 = param_1 + 2;
  if (0xf < (ulonglong)param_1[3]) {
    param_1 = (undefined8 *)*param_1;
  }
  if (((*plVar1 != 0) &&
      (lVar2 = *plVar1 + (longlong)param_1, lVar3 = thunk_FUN_1802d5c20(param_1,lVar2,0x5d),
      lVar3 != lVar2)) && (lVar3 - (longlong)param_1 != -1)) {
    return 0;
  }
  return 1;
}


)B18014d0e0",
    "2dd6cae5f5f8cabce8812ddce8a62a3d058865c4aafea5fea7708b6fdaa6a894",
    R"F18014d0e0C()F18014d0e0C",
    R"F18014d0e0D()F18014d0e0D",
    R"F18014d0e0T()F18014d0e0T",
    R"F18014d0e0F(16: if (0x7f < lVar2 - 1U) {
17: return 0;
20: if (0xf < (ulonglong)param_1[3]) {
23: if (((lVar2 != 0) &&
26: return 0;
29: if (0xf < (ulonglong)param_1[3]) {
32: if (((*plVar1 != 0) &&
35: return 0;
37: return 1;)F18014d0e0F",
    R"F18014d0e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18014d0e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014d0e0() noexcept {
    return kFunction_0x18014d0e0;
}

// 0x18014d1a0 FUN_18014d1a0
// source: re/dump/decompile/0x18014d1a0_FUN_18014d1a0.c
// size: 1013 bytes; thunk: false
// body sha256: ba54a1a7165e819f1d5cc5100bd350bd6964e9ced03315ce31cd3040b33ecfd9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014d1a0{
    "0x18014d1a0",
    "FUN_18014d1a0",
    R"F18014d1a0S(undefined FUN_18014d1a0())F18014d1a0S",
    R"B18014d1a0(// 0x18014d1a0  FUN_18014d1a0
// size=1013 thunk=false
// signature: undefined FUN_18014d1a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18014d1a0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 ****ppppuVar8;
  int iVar9;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 *local_170;
  longlong local_168;
  undefined4 local_158;
  undefined8 ***local_150;
  longlong lStack_148;
  longlong local_140;
  ulonglong uStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110 [32];
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  undefined1 local_b0 [32];
  undefined1 local_90 [32];
  undefined8 ***local_70 [3];
  ulonglong local_58;
  undefined8 ***local_50 [3];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1803da4c0 ^ (ulonglong)auStack_198;
  iVar9 = 0;
  local_158 = 0;
  cVar3 = FUN_18014d0e0(param_2);
  if ((cVar3 == '\0') || (iVar4 = FUN_18014cda0(param_1), iVar4 < 1)) {
    iVar9 = 0;
  }
  else {
    local_168 = param_2[2];
    if (0x7fffffffffffffffU - local_168 < 0x16) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    local_170 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      local_170 = (undefined8 *)*param_2;
    }
    local_178 = 0x16;
    FUN_18020e930(local_110);
    local_158 = 1;
    FUN_1801fc680(local_70,local_110,&DAT_18035e784);
    local_158 = 0;
    FUN_18020e450(local_110);
    ppppuVar8 = local_70;
    if (0xf < local_58) {
      ppppuVar8 = (undefined8 ****)local_70[0];
    }
    if ((((longlong *)*param_1 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_1, lVar1 != 0))
       && ((code *)param_1[1] != (code *)0x0)) {
      local_178 = 0;
      (*(code *)param_1[1])(lVar1,ppppuVar8,0,0);
    }
    if (0x7fffffffffffffff - param_2[2] < 0xe) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    local_170 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      local_170 = (undefined8 *)*param_2;
    }
    local_178 = 0xe;
    local_168 = param_2[2];
    FUN_18020e930(local_f0);
    local_158 = 4;
    plVar5 = (longlong *)FUN_18021aef0(local_f0,"] ( a TEXT )",0xc);
    local_150 = (undefined8 ***)*plVar5;
    lStack_148 = plVar5[1];
    local_140 = plVar5[2];
    uStack_138 = plVar5[3];
    *(undefined1 *)plVar5 = 0;
    plVar5[2] = 0;
    plVar5[3] = 0xf;
    local_158 = 0xc;
    ppppuVar8 = &local_150;
    if (0xf < uStack_138) {
      ppppuVar8 = (undefined8 ****)local_150;
    }
    if ((((longlong *)*param_1 == (longlong *)0x0) || (lVar1 = *(longlong *)*param_1, lVar1 == 0))
       || ((code *)param_1[1] == (code *)0x0)) {
      iVar4 = -1;
    }
    else {
      local_178 = 0;
      iVar4 = (*(code *)param_1[1])(lVar1,ppppuVar8,0,0);
    }
    local_158 = 4;
    FUN_18020e450(&local_150);
    local_158 = 0;
    FUN_18020e450(local_f0);
    if (iVar4 == 0) {
      uVar6 = FUN_18020ea80(local_90,0x2000,0x30);
      plVar5 = param_2 + 2;
      if (0x7fffffffffffffffU - *plVar5 < 0xd) {
                    /* WARNING: Subroutine does not return */
        FUN_1800130a0();
      }
      if (0xf < (ulonglong)param_2[3]) {
        param_2 = (undefined8 *)*param_2;
      }
      local_178 = 0xd;
      local_170 = param_2;
      local_168 = *plVar5;
      FUN_18020e930(local_b0);
      local_158 = 0x10;
      puVar7 = (undefined4 *)FUN_18021aef0(local_b0,"] VALUES (\'",0xb);
      local_130 = *puVar7;
      uStack_12c = puVar7[1];
      uStack_128 = puVar7[2];
      uStack_124 = puVar7[3];
      uVar2 = puVar7[4];
      local_120 = *(undefined8 *)(puVar7 + 4);
      uStack_118 = *(undefined8 *)(puVar7 + 6);
      *(undefined1 *)puVar7 = 0;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0xf;
      local_158 = 0x30;
      FUN_18021e540(local_d0,uVar2,&local_130,uVar6);
      local_158 = 0x70;
      FUN_1801fc680(local_50,local_d0,&DAT_18035e7c0);
      local_158 = 0x30;
      FUN_18020e450(local_d0);
      local_158 = 0x10;
      FUN_18020e450(&local_130);
      local_158 = 0;
      FUN_18020e450(local_b0);
      FUN_18020e450(local_90);
      while (iVar4 = FUN_18014cda0(param_1), 0 < iVar4) {
        ppppuVar8 = local_50;
        if (0xf < local_38) {
          ppppuVar8 = (undefined8 ****)local_50[0];
        }
        if ((((longlong *)*param_1 == (longlong *)0x0) ||
            (lVar1 = *(longlong *)*param_1, lVar1 == 0)) || ((code *)param_1[1] == (code *)0x0))
        break;
        local_178 = 0;
        iVar4 = (*(code *)param_1[1])(lVar1,ppppuVar8,0,0);
        if ((iVar4 != 0) || (iVar9 = iVar9 + 1, 0x3ff < iVar9)) break;
      }
      ppppuVar8 = local_70;
      if (0xf < local_58) {
        ppppuVar8 = (undefined8 ****)local_70[0];
      }
      if ((((longlong *)*param_1 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_1, lVar1 != 0))
         && ((code *)param_1[1] != (code *)0x0)) {
        local_178 = 0;
        (*(code *)param_1[1])(lVar1,ppppuVar8,0,0);
      }
      FUN_18020e450(local_50);
    }
    FUN_18020e450(local_70);
  }
  return iVar9;
}


)B18014d1a0",
    "ba54a1a7165e819f1d5cc5100bd350bd6964e9ced03315ce31cd3040b33ecfd9",
    R"F18014d1a0C(FUN_1800130a0
FUN_18014cda0
FUN_18014d0e0
FUN_1801fc680
FUN_18020e450
FUN_18020e930
FUN_18020ea80
FUN_18021aef0
FUN_18021e540)F18014d1a0C",
    R"F18014d1a0D(DAT_18035e784
DAT_18035e7c0
DAT_1803da4c0)F18014d1a0D",
    R"F18014d1a0T("] ( a TEXT )"
"] VALUES (\\'")F18014d1a0T",
    R"F18014d1a0F(51: if ((cVar3 == '\0') || (iVar4 = FUN_18014cda0(param_1), iVar4 < 1)) {
54: else {
56: if (0x7fffffffffffffffU - local_168 < 0x16) {
61: if (0xf < (ulonglong)param_2[3]) {
71: if (0xf < local_58) {
74: if ((((longlong *)*param_1 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_1, lVar1 != 0))
79: if (0x7fffffffffffffff - param_2[2] < 0xe) {
84: if (0xf < (ulonglong)param_2[3]) {
101: if (0xf < uStack_138) {
104: if ((((longlong *)*param_1 == (longlong *)0x0) || (lVar1 = *(longlong *)*param_1, lVar1 == 0))
108: else {
116: if (iVar4 == 0) {
119: if (0x7fffffffffffffffU - *plVar5 < 0xd) {
123: if (0xf < (ulonglong)param_2[3]) {
153: while (iVar4 = FUN_18014cda0(param_1), 0 < iVar4) {
155: if (0xf < local_38) {
158: if ((((longlong *)*param_1 == (longlong *)0x0) ||
160: break;
163: if ((iVar4 != 0) || (iVar9 = iVar9 + 1, 0x3ff < iVar9)) break;
166: if (0xf < local_58) {
169: if ((((longlong *)*param_1 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_1, lVar1 != 0))
178: return iVar9;)F18014d1a0F",
    R"F18014d1a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18035e784.
TODO: recover the declaration, type and value for global/data reference DAT_18035e7c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 75: && ((code *)param_1[1] != (code *)0x0)) {.
TODO: resolve the indirect call in body 77: (*(code *)param_1[1])(lVar1,ppppuVar8,0,0);.
TODO: resolve the indirect call in body 105: || ((code *)param_1[1] == (code *)0x0)) {.
TODO: resolve the indirect call in body 110: iVar4 = (*(code *)param_1[1])(lVar1,ppppuVar8,0,0);.
TODO: resolve the indirect call in body 159: (lVar1 = *(longlong *)*param_1, lVar1 == 0)) || ((code *)param_1[1] == (code *)0x0)).
TODO: resolve the indirect call in body 162: iVar4 = (*(code *)param_1[1])(lVar1,ppppuVar8,0,0);.
TODO: resolve the indirect call in body 170: && ((code *)param_1[1] != (code *)0x0)) {.
TODO: resolve the indirect call in body 172: (*(code *)param_1[1])(lVar1,ppppuVar8,0,0);.)F18014d1a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014d1a0() noexcept {
    return kFunction_0x18014d1a0;
}

// 0x18014d5a0 FUN_18014d5a0
// source: re/dump/decompile/0x18014d5a0_FUN_18014d5a0.c
// size: 2122 bytes; thunk: false
// body sha256: deb03a5111afd06c5655528358b378d6d7357573e1612bcd681dad632faf6300
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014d5a0{
    "0x18014d5a0",
    "FUN_18014d5a0",
    R"F18014d5a0S(undefined FUN_18014d5a0())F18014d5a0S",
    R"B18014d5a0(// 0x18014d5a0  FUN_18014d5a0
// size=2122 thunk=false
// signature: undefined FUN_18014d5a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_18014d5a0(undefined1 *param_1,char *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  HMODULE pHVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong *plVar7;
  byte *pbVar8;
  byte *pbVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined8 *******pppppppuVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  byte **ppbVar16;
  undefined1 auStack_288 [32];
  longlong local_268;
  byte *local_260;
  longlong local_258;
  undefined4 local_248;
  byte *local_240;
  undefined8 local_238;
  undefined8 *local_230;
  undefined8 *******local_228;
  longlong lStack_220;
  longlong local_218;
  ulonglong uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 *local_1c8;
  undefined1 local_1b8 [32];
  char local_198 [256];
  undefined8 local_98;
  undefined8 uStack_90;
  byte *local_88;
  longlong lStack_80;
  undefined8 local_78;
  byte *local_70;
  byte *pbStack_68;
  undefined8 local_60;
  byte *local_58;
  byte *pbStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1803da4c0 ^ (ulonglong)auStack_288;
  local_248 = 1;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_238 = param_3;
  local_1c8 = param_1;
  FUN_18001d080(param_1 + 0x10,&DAT_18033e9cc);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0xf;
  param_1[0x30] = 0;
  local_248 = 1;
  ppuVar13 = &PTR_s_client_dll_1803e74a0;
  do {
    iVar2 = _stricmp(*ppuVar13,param_2);
    if (iVar2 == 0) {
      if (*(char *)(ppuVar13 + 3) == '\0') {
        *(undefined1 *)(ppuVar13 + 3) = 1;
        pcVar10 = *ppuVar13;
        local_98 = (byte **)0x0;
        uStack_90 = (undefined8 *)0x0;
        pHVar4 = GetModuleHandleA(pcVar10);
        if (pHVar4 != (HMODULE)0x0) {
          local_240 = (byte *)&local_1e8;
          local_1e8 = 0;
          uStack_1e0 = 0;
          local_1d8 = 0;
          local_1d0 = 0;
          FUN_18001d080(&local_1e8,
                        "48 8B 0D ? ? ? ? 48 8D 15 ? ? ? ? 45 33 C9 48 C7 44 24 20 00 00 00 00 45 33 C0 E8 ? ? ? ? 48 8B 0D ? ? ? ? 45 33 C9 BA F2 03 00 00"
                        ,0x82);
          local_230 = &local_208;
          local_208 = 0;
          uStack_200 = 0;
          local_1f8 = 0;
          local_1f0 = 0;
          strlen(pcVar10);
          FUN_18001d080(&local_208,pcVar10);
          lVar5 = FUN_180015f40(&local_208,&local_1e8);
          if ((lVar5 != 0) &&
             (ppbVar16 = (byte **)((longlong)*(int *)(lVar5 + 3) + 7 + lVar5),
             ppbVar16 == (byte **)((longlong)*(int *)(lVar5 + 0x25) + 0x29 + lVar5))) {
            local_240 = (byte *)CONCAT44(local_240._4_4_,*(undefined4 *)(lVar5 + 0x1e));
            cVar1 = FUN_18014ccc0(pcVar10,ppbVar16);
            if (cVar1 != '\0') {
              local_240 = (byte *)((longlong)(int)local_240 + 0x22 + lVar5);
              cVar1 = FUN_18014ccc0(pcVar10,local_240);
              if (cVar1 != '\0') {
                uStack_90 = (undefined8 *)local_240;
                local_268 = lVar5;
                local_98 = ppbVar16;
                FUN_180014410("[SQL] %s: g_pDB=%p sqlite3_exec=%p (sig @ %p)\n",pcVar10);
              }
            }
          }
        }
        ppuVar15 = ppuVar13 + 1;
        *(undefined4 *)ppuVar15 = (undefined4)local_98;
        *(undefined4 *)((longlong)ppuVar13 + 0xc) = local_98._4_4_;
        *(undefined4 *)(ppuVar13 + 2) = (undefined4)uStack_90;
        *(undefined4 *)((longlong)ppuVar13 + 0x14) = uStack_90._4_4_;
      }
      else {
        ppuVar15 = ppuVar13 + 1;
      }
      goto LAB_18014d7a7;
    }
    ppuVar13 = ppuVar13 + 4;
  } while (ppuVar13 != (undefined **)&DAT_1803e74e0);
  ppuVar15 = (undefined **)&DAT_180425fa0;
LAB_18014d7a7:
  if (((longlong *)*ppuVar15 == (longlong *)0x0) || (ppuVar15[1] == (undefined *)0x0)) {
    uVar14 = 0x17;
    pcVar10 = "sql interface not found";
LAB_18014dda8:
    FUN_180212700(param_1 + 0x30,pcVar10,uVar14);
    return param_1;
  }
  if (*(longlong *)*ppuVar15 == 0) {
    uVar14 = 0x10;
    pcVar10 = "no database open";
    goto LAB_18014dda8;
  }
  local_88 = (byte *)0x0;
  lStack_80 = 0;
  local_78 = 0;
  if ((((longlong *)*ppuVar15 != (longlong *)0x0) && (lVar5 = *(longlong *)*ppuVar15, lVar5 != 0))
     && ((code *)ppuVar15[1] != (code *)0x0)) {
    local_98 = &local_88;
    uStack_90 = (undefined8 *)((ulonglong)uStack_90 & 0xffffffff00000000);
    local_268 = 0;
    iVar2 = (*(code *)ppuVar15[1])(lVar5,"PRAGMA freelist_count",FUN_18014cd50,&local_98);
    if (((iVar2 == 0) && (lStack_80 - (longlong)local_88 == 0x20)) &&
       (*(longlong *)(local_88 + 0x10) != 0)) {
      lVar5 = *(longlong *)(local_88 + 0x10);
      pbVar8 = local_88;
      if (0xf < *(ulonglong *)(local_88 + 0x18)) {
        pbVar8 = *(byte **)local_88;
      }
      if (lVar5 == 0) {
LAB_18014d926:
        lVar5 = -1;
      }
      else {
        if (lVar5 + 10U < 0x10) {
          memset(local_198,0,0x100);
          pbVar9 = &DAT_18035e750;
          do {
            local_198[*pbVar9] = '\x01';
            pbVar9 = pbVar9 + 1;
            pbVar11 = pbVar8;
          } while (pbVar9 != &DAT_18035e75a);
          for (; pbVar11 < pbVar8 + lVar5; pbVar11 = pbVar11 + 1) {
            if (local_198[*pbVar11] == '\0') {
              lVar5 = (longlong)pbVar11 - (longlong)pbVar8;
              goto LAB_18014d92d;
            }
          }
          goto LAB_18014d926;
        }
        lVar5 = FUN_1802d6fd0(pbVar8,lVar5,&DAT_18035e750,10);
      }
LAB_18014d92d:
      FUN_18020d5c0(&local_88);
      if (lVar5 == -1) {
        uVar14 = FUN_18014ce60(&local_208,ppuVar15);
        FUN_18020e8a0(param_1 + 0x10,uVar14);
        FUN_18020e450(&local_208);
        local_70 = (byte *)0x0;
        pbStack_68 = (byte *)0x0;
        local_60 = 0;
        if ((((longlong *)*ppuVar15 != (longlong *)0x0) &&
            (lVar5 = *(longlong *)*ppuVar15, lVar5 != 0)) && ((code *)ppuVar15[1] != (code *)0x0)) {
          local_98 = &local_70;
          uStack_90 = (undefined8 *)((ulonglong)uStack_90 & 0xffffffff00000000);
          local_268 = 0;
          iVar2 = (*(code *)ppuVar15[1])
                            (lVar5,"SELECT name FROM sqlite_master WHERE type=\'table\'",
                             FUN_18014cd50,&local_98);
          if (iVar2 == 0) {
            local_240 = pbStack_68;
            pbVar8 = pbStack_68;
            pbVar9 = local_70;
            if (local_70 != pbStack_68) {
              do {
                pbVar11 = pbVar9;
                if (0xf < *(ulonglong *)(pbVar9 + 0x18)) {
                  pbVar11 = *(byte **)pbVar9;
                }
                if (*(ulonglong *)(pbVar9 + 0x10) == 7) {
                  iVar2 = *(int *)pbVar11 + -0x6b6f6f63;
                  if ((iVar2 == 0) &&
                     (iVar2 = *(ushort *)(pbVar11 + 4) - 0x6569, pbVar8 = local_240, iVar2 == 0)) {
                    iVar2 = pbVar11[6] - 0x73;
                  }
                  if (iVar2 != 0) goto LAB_18014da71;
                }
                else {
LAB_18014da71:
                  pbVar11 = pbVar9;
                  if (0xf < *(ulonglong *)(pbVar9 + 0x18)) {
                    pbVar11 = *(byte **)pbVar9;
                  }
                  if ((((*(ulonglong *)(pbVar9 + 0x10) < 7) ||
                       (pbVar6 = (byte *)thunk_FUN_1802d5870(pbVar11,pbVar11 + 7,"sqlite_",7),
                       pbVar6 == pbVar11 + 7)) || (pbVar8 = local_240, pbVar6 != pbVar11)) &&
                     (cVar1 = FUN_18014d0e0(pbVar9), pbVar8 = local_240, cVar1 != '\0')) {
                    if (0x7fffffffffffffffU - *(longlong *)(pbVar9 + 0x10) < 0x16) {
                    /* WARNING: Subroutine does not return */
                      FUN_1800130a0();
                    }
                    local_260 = pbVar9;
                    if (0xf < *(ulonglong *)(pbVar9 + 0x18)) {
                      local_260 = *(byte **)pbVar9;
                    }
                    local_268 = 0x16;
                    local_258 = *(longlong *)(pbVar9 + 0x10);
                    FUN_18020e930(local_1b8);
                    local_248 = 3;
                    plVar7 = (longlong *)FUN_18021aef0(local_1b8,&DAT_18035e784,1);
                    local_228 = (undefined8 *******)*plVar7;
                    lStack_220 = plVar7[1];
                    local_218 = plVar7[2];
                    uStack_210 = plVar7[3];
                    *(undefined1 *)plVar7 = 0;
                    plVar7[2] = 0;
                    plVar7[3] = 0xf;
                    local_248 = 7;
                    pppppppuVar12 = &local_228;
                    if (0xf < uStack_210) {
                      pppppppuVar12 = local_228;
                    }
                    if ((((longlong *)*ppuVar15 == (longlong *)0x0) ||
                        (lVar5 = *(longlong *)*ppuVar15, lVar5 == 0)) ||
                       ((code *)ppuVar15[1] == (code *)0x0)) {
                      iVar2 = -1;
                    }
                    else {
                      local_268 = 0;
                      iVar2 = (*(code *)ppuVar15[1])(lVar5,pppppppuVar12,0,0);
                    }
                    local_248 = 3;
                    FUN_18020e450(&local_228);
                    local_248 = 1;
                    FUN_18020e450(local_1b8);
                    pbVar8 = local_240;
                    if (iVar2 == 0) {
                      *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
                    }
                  }
                }
                pbVar9 = pbVar9 + 0x20;
              } while (pbVar9 != pbVar8);
            }
            local_58 = (byte *)0x0;
            pbStack_50 = (byte *)0x0;
            local_48 = 0;
            if ((((longlong *)*ppuVar15 != (longlong *)0x0) &&
                (lVar5 = *(longlong *)*ppuVar15, lVar5 != 0)) &&
               ((code *)ppuVar15[1] != (code *)0x0)) {
              local_98 = &local_58;
              uStack_90 = (undefined8 *)((ulonglong)uStack_90 & 0xffffffff00000000);
              local_268 = 0;
              iVar2 = (*(code *)ppuVar15[1])
                                (lVar5,"SELECT COUNT(*) FROM cookies",FUN_18014cd50,&local_98);
              if ((iVar2 == 0) && (local_58 != pbStack_50)) {
                pbVar8 = local_58;
                if (0xf < *(ulonglong *)(local_58 + 0x18)) {
                  pbVar8 = *(byte **)local_58;
                }
                iVar2 = atoi((char *)pbVar8);
                *(int *)(param_1 + 8) = iVar2;
              }
            }
            if (0 < *(int *)(param_1 + 8)) {
              if ((((longlong *)*ppuVar15 != (longlong *)0x0) &&
                  (lVar5 = *(longlong *)*ppuVar15, lVar5 != 0)) &&
                 ((code *)ppuVar15[1] != (code *)0x0)) {
                local_268 = 0;
                iVar2 = (*(code *)ppuVar15[1])(lVar5,"DELETE FROM cookies",0,0);
                if (iVar2 == 0) goto LAB_18014dcf9;
              }
              *(undefined4 *)(param_1 + 8) = 0;
            }
LAB_18014dcf9:
            uVar3 = FUN_18014d1a0(ppuVar15,local_238);
            *(undefined4 *)(param_1 + 0xc) = uVar3;
            *param_1 = 1;
            local_248 = 0;
            FUN_18020d5c0(&local_58);
            FUN_18020d5c0(&local_70);
            return param_1;
          }
        }
        FUN_180212700(param_1 + 0x30,"schema query failed",0x13);
        local_248 = 0;
        FUN_18020d5c0(&local_70);
        return param_1;
      }
      goto LAB_18014dd74;
    }
  }
  FUN_18020d5c0(&local_88);
LAB_18014dd74:
  FUN_180212700(param_1 + 0x30,"self-test failed",0x10);
  return param_1;
}


)B18014d5a0",
    "deb03a5111afd06c5655528358b378d6d7357573e1612bcd681dad632faf6300",
    R"F18014d5a0C(FUN_1800130a0
FUN_180014410
FUN_180015f40
FUN_18001d080
FUN_18014ccc0
FUN_18014cd50
FUN_18014ce60
FUN_18014d0e0
FUN_18014d1a0
FUN_18020d5c0
FUN_18020e450
FUN_18020e8a0
FUN_18020e930
FUN_180212700
FUN_18021aef0
FUN_1802d6fd0)F18014d5a0C",
    R"F18014d5a0D(LAB_18014d7a7
LAB_18014d926
LAB_18014d92d
LAB_18014da71
LAB_18014dcf9
LAB_18014dd74
LAB_18014dda8
DAT_18033e9cc
DAT_18035e750
DAT_18035e75a
DAT_18035e784
DAT_1803da4c0
DAT_1803e74e0
DAT_180425fa0)F18014d5a0D",
    R"F18014d5a0T("sqlite_"
"no database open"
"self-test failed"
"DELETE FROM cookies"
"schema query failed"
"PRAGMA freelist_count"
"sql interface not found"
"SELECT COUNT(*) FROM cookies"
"[SQL] %s: g_pDB=%p sqlite3_exec=%p (sig @ %p)\\n"
"SELECT name FROM sqlite_master WHERE type=\\'table\\'"
"48 8B 0D ? ? ? ? 48 8D 15 ? ? ? ? 45 33 C9 48 C7 44 24 20 00 00 00 00 45 33 C0 E8 ? ? ? ? 48 8B 0D ? ? ? ? 45 33 C9 BA F2 03 00 00")F18014d5a0T",
    R"F18014d5a0F(84: do {
86: if (iVar2 == 0) {
87: if (*(char *)(ppuVar13 + 3) == '\0') {
93: if (pHVar4 != (HMODULE)0x0) {
110: if ((lVar5 != 0) &&
115: if (cVar1 != '\0') {
118: if (cVar1 != '\0') {
133: else {
136: goto LAB_18014d7a7;
141: LAB_18014d7a7:
142: if (((longlong *)*ppuVar15 == (longlong *)0x0) || (ppuVar15[1] == (undefined *)0x0)) {
145: LAB_18014dda8:
147: return param_1;
149: if (*(longlong *)*ppuVar15 == 0) {
152: goto LAB_18014dda8;
157: if ((((longlong *)*ppuVar15 != (longlong *)0x0) && (lVar5 = *(longlong *)*ppuVar15, lVar5 != 0))
163: if (((iVar2 == 0) && (lStack_80 - (longlong)local_88 == 0x20)) &&
167: if (0xf < *(ulonglong *)(local_88 + 0x18)) {
170: if (lVar5 == 0) {
171: LAB_18014d926:
174: else {
175: if (lVar5 + 10U < 0x10) {
178: do {
183: for (; pbVar11 < pbVar8 + lVar5; pbVar11 = pbVar11 + 1) {
184: if (local_198[*pbVar11] == '\0') {
186: goto LAB_18014d92d;
189: goto LAB_18014d926;
193: LAB_18014d92d:
195: if (lVar5 == -1) {
202: if ((((longlong *)*ppuVar15 != (longlong *)0x0) &&
210: if (iVar2 == 0) {
214: if (local_70 != pbStack_68) {
215: do {
217: if (0xf < *(ulonglong *)(pbVar9 + 0x18)) {
220: if (*(ulonglong *)(pbVar9 + 0x10) == 7) {
222: if ((iVar2 == 0) &&
226: if (iVar2 != 0) goto LAB_18014da71;
228: else {
229: LAB_18014da71:
231: if (0xf < *(ulonglong *)(pbVar9 + 0x18)) {
234: if ((((*(ulonglong *)(pbVar9 + 0x10) < 7) ||
238: if (0x7fffffffffffffffU - *(longlong *)(pbVar9 + 0x10) < 0x16) {
243: if (0xf < *(ulonglong *)(pbVar9 + 0x18)) {
260: if (0xf < uStack_210) {
263: if ((((longlong *)*ppuVar15 == (longlong *)0x0) ||
268: else {
277: if (iVar2 == 0) {
288: if ((((longlong *)*ppuVar15 != (longlong *)0x0) &&
296: if ((iVar2 == 0) && (local_58 != pbStack_50)) {
298: if (0xf < *(ulonglong *)(local_58 + 0x18)) {
305: if (0 < *(int *)(param_1 + 8)) {
306: if ((((longlong *)*ppuVar15 != (longlong *)0x0) &&
311: if (iVar2 == 0) goto LAB_18014dcf9;
315: LAB_18014dcf9:
322: return param_1;
328: return param_1;
330: goto LAB_18014dd74;
334: LAB_18014dd74:
336: return param_1;)F18014d5a0F",
    R"F18014d5a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18014d7a7.
TODO: recover the declaration, type and value for global/data reference LAB_18014d926.
TODO: recover the declaration, type and value for global/data reference LAB_18014d92d.
TODO: recover the declaration, type and value for global/data reference LAB_18014da71.
TODO: recover the declaration, type and value for global/data reference LAB_18014dcf9.
TODO: recover the declaration, type and value for global/data reference LAB_18014dd74.
TODO: recover the declaration, type and value for global/data reference LAB_18014dda8.
TODO: recover the declaration, type and value for global/data reference DAT_18033e9cc.
TODO: recover the declaration, type and value for global/data reference DAT_18035e750.
TODO: recover the declaration, type and value for global/data reference DAT_18035e75a.
TODO: recover the declaration, type and value for global/data reference DAT_18035e784.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e74e0.
TODO: recover the declaration, type and value for global/data reference DAT_180425fa0.
TODO: resolve the indirect call in body 158: && ((code *)ppuVar15[1] != (code *)0x0)) {.
TODO: resolve the indirect call in body 162: iVar2 = (*(code *)ppuVar15[1])(lVar5,"PRAGMA freelist_count",FUN_18014cd50,&local_98);.
TODO: resolve the indirect call in body 203: (lVar5 = *(longlong *)*ppuVar15, lVar5 != 0)) && ((code *)ppuVar15[1] != (code *)0x0)) {.
TODO: resolve the indirect call in body 207: iVar2 = (*(code *)ppuVar15[1]).
TODO: resolve the indirect call in body 265: ((code *)ppuVar15[1] == (code *)0x0)) {.
TODO: resolve the indirect call in body 270: iVar2 = (*(code *)ppuVar15[1])(lVar5,pppppppuVar12,0,0);.
TODO: resolve the indirect call in body 290: ((code *)ppuVar15[1] != (code *)0x0)) {.
TODO: resolve the indirect call in body 294: iVar2 = (*(code *)ppuVar15[1]).
TODO: resolve the indirect call in body 308: ((code *)ppuVar15[1] != (code *)0x0)) {.
TODO: resolve the indirect call in body 310: iVar2 = (*(code *)ppuVar15[1])(lVar5,"DELETE FROM cookies",0,0);.)F18014d5a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014d5a0() noexcept {
    return kFunction_0x18014d5a0;
}

// 0x18014ddf0 FUN_18014ddf0
// source: re/dump/decompile/0x18014ddf0_FUN_18014ddf0.c
// size: 37 bytes; thunk: false
// body sha256: 41108673ed4345a5092c121ef223c49c48030c4355adb17ab4e45ce1de5d2268
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014ddf0{
    "0x18014ddf0",
    "FUN_18014ddf0",
    R"F18014ddf0S(undefined FUN_18014ddf0())F18014ddf0S",
    R"B18014ddf0(// 0x18014ddf0  FUN_18014ddf0
// size=37 thunk=false
// signature: undefined FUN_18014ddf0()
// status: ok


void FUN_18014ddf0(longlong param_1)

{
  FUN_18020e450(param_1 + 0x30);
  FUN_18020e450(param_1 + 0x10);
  return;
}


)B18014ddf0",
    "41108673ed4345a5092c121ef223c49c48030c4355adb17ab4e45ce1de5d2268",
    R"F18014ddf0C(FUN_18020e450)F18014ddf0C",
    R"F18014ddf0D()F18014ddf0D",
    R"F18014ddf0T()F18014ddf0T",
    R"F18014ddf0F(12: return;)F18014ddf0F",
    R"F18014ddf0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18014ddf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014ddf0() noexcept {
    return kFunction_0x18014ddf0;
}

// 0x18014de20 FUN_18014de20
// source: re/dump/decompile/0x18014de20_FUN_18014de20.c
// size: 210 bytes; thunk: false
// body sha256: 0a335dd31bbb7f69b950c4a9be504b20830b441e559f2f72f7d748be4db6a99b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014de20{
    "0x18014de20",
    "FUN_18014de20",
    R"F18014de20S(undefined FUN_18014de20())F18014de20S",
    R"B18014de20(// 0x18014de20  FUN_18014de20
// size=210 thunk=false
// signature: undefined FUN_18014de20()
// status: ok


void FUN_18014de20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined *puVar6;
  
  puVar6 = &DAT_1803e7a40;
  iVar5 = _Mtx_lock(&DAT_1803e7a40);
  if (iVar5 == 0) {
    if (DAT_1803e7a8c == 0x7fffffff) {
      DAT_1803e7a8c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    FUN_18020d6f0(&DAT_1803ea200,param_1,param_3,param_4,puVar6);
    lVar4 = DAT_1803ea208;
    lVar3 = DAT_1803ea200;
    lVar2 = DAT_1803ea200;
    if (0x18 < (ulonglong)(DAT_1803ea208 - DAT_1803ea200 >> 5)) {
      while (lVar2 = lVar2 + 0x20, lVar2 != lVar4) {
        FUN_18020e8a0(lVar3,lVar2);
        lVar3 = lVar3 + 0x20;
      }
      FUN_18020e450(DAT_1803ea208 + -0x20);
      DAT_1803ea208 = DAT_1803ea208 + -0x20;
    }
                    /* WARNING: Could not recover jumptable at 0x00018014deeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _Mtx_unlock(&DAT_1803e7a40);
    return;
  }
  std::_Throw_Cpp_error(5);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


)B18014de20",
    "0a335dd31bbb7f69b950c4a9be504b20830b441e559f2f72f7d748be4db6a99b",
    R"F18014de20C(FUN_18020d6f0
FUN_18020e450
FUN_18020e8a0)F18014de20C",
    R"F18014de20D(DAT_1803e7a40
DAT_1803e7a8c
DAT_1803ea200
DAT_1803ea208)F18014de20D",
    R"F18014de20T()F18014de20T",
    R"F18014de20F(19: if (iVar5 == 0) {
20: if (DAT_1803e7a8c == 0x7fffffff) {
28: if (0x18 < (ulonglong)(DAT_1803ea208 - DAT_1803ea200 >> 5)) {
29: while (lVar2 = lVar2 + 0x20, lVar2 != lVar4) {
39: return;
44: return;)F18014de20F",
    R"F18014de20U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7a40.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7a8c.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea200.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea208.
TODO: resolve the indirect call in body 42: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 43: (*pcVar1)();.)F18014de20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014de20() noexcept {
    return kFunction_0x18014de20;
}

// 0x18014df00 FUN_18014df00
// source: re/dump/decompile/0x18014df00_FUN_18014df00.c
// size: 260 bytes; thunk: false
// body sha256: 9292a18947ca4213b1789b9751186b8d928a43e5f20329aa482b00b18a45fe4f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014df00{
    "0x18014df00",
    "FUN_18014df00",
    R"F18014df00S(undefined FUN_18014df00())F18014df00S",
    R"B18014df00(// 0x18014df00  FUN_18014df00
// size=260 thunk=false
// signature: undefined FUN_18014df00()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18014df00(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int local_30 [2];
  undefined1 local_28;
  undefined7 uStack_27;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  puVar5 = &DAT_1803e7a40;
  iVar3 = _Mtx_lock(&DAT_1803e7a40);
  if (iVar3 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e7a8c == 0x7fffffff) {
    DAT_1803e7a8c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  local_30[0] = param_1;
  uVar4 = FUN_18016d4c0(&local_28,param_2);
  piVar2 = DAT_1803edc28;
  if (DAT_1803edc28 == DAT_1803edc30) {
    FUN_180224570(uVar4,DAT_1803edc28,local_30,param_4,puVar5);
  }
  else {
    *DAT_1803edc28 = local_30[0];
    *(ulonglong *)(piVar2 + 2) = CONCAT71(uStack_27,local_28);
    *(undefined8 *)(piVar2 + 4) = local_20;
    *(undefined8 *)(piVar2 + 6) = local_18;
    *(undefined8 *)(piVar2 + 8) = uStack_10;
    local_18 = _DAT_1803814b0;
    uStack_10 = _UNK_1803814b8;
    local_28 = 0;
    DAT_1803edc28 = DAT_1803edc28 + 10;
  }
  FUN_18020e450(&local_28);
  _Mtx_unlock(&DAT_1803e7a40);
  if (0 < param_1) {
    LOCK();
    DAT_180400b0c = DAT_180400b0c + 1;
    UNLOCK();
  }
  return;
}


)B18014df00",
    "9292a18947ca4213b1789b9751186b8d928a43e5f20329aa482b00b18a45fe4f",
    R"F18014df00C(FUN_18016d4c0
FUN_18020e450
FUN_180224570)F18014df00C",
    R"F18014df00D(DAT_1803e7a40
DAT_1803e7a8c
DAT_1803edc28
DAT_1803edc30
DAT_180400b0c)F18014df00D",
    R"F18014df00T()F18014df00T",
    R"F18014df00F(26: if (iVar3 != 0) {
30: return;
32: if (DAT_1803e7a8c == 0x7fffffff) {
39: if (DAT_1803edc28 == DAT_1803edc30) {
42: else {
55: if (0 < param_1) {
60: return;)F18014df00F",
    R"F18014df00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7a40.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7a8c.
TODO: recover the declaration, type and value for global/data reference DAT_1803edc28.
TODO: recover the declaration, type and value for global/data reference DAT_1803edc30.
TODO: recover the declaration, type and value for global/data reference DAT_180400b0c.
TODO: resolve the indirect call in body 28: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 29: (*pcVar1)();.)F18014df00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014df00() noexcept {
    return kFunction_0x18014df00;
}

// 0x18014e010 FUN_18014e010
// source: re/dump/decompile/0x18014e010_FUN_18014e010.c
// size: 143 bytes; thunk: false
// body sha256: 8c4533cc65a2372ef14fd8146d3050757833231b7f1e1206217f340fbde4d208
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014e010{
    "0x18014e010",
    "FUN_18014e010",
    R"F18014e010S(undefined FUN_18014e010())F18014e010S",
    R"B18014e010(// 0x18014e010  FUN_18014e010
// size=143 thunk=false
// signature: undefined FUN_18014e010()
// status: ok


undefined8
FUN_18014e010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar2 = _Mtx_lock(&DAT_1803e7a40);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (DAT_1803e7a8c == 0x7fffffff) {
    DAT_1803e7a8c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  FUN_18016d4c0(param_1,&DAT_1803ea218,param_3,param_4,uVar4);
  _Mtx_unlock(&DAT_1803e7a40);
  return param_1;
}


)B18014e010",
    "8c4533cc65a2372ef14fd8146d3050757833231b7f1e1206217f340fbde4d208",
    R"F18014e010C(FUN_18016d4c0)F18014e010C",
    R"F18014e010D(DAT_1803e7a40
DAT_1803e7a8c
DAT_1803ea218)F18014e010D",
    R"F18014e010T()F18014e010T",
    R"F18014e010F(18: if (iVar2 != 0) {
22: return uVar3;
24: if (DAT_1803e7a8c == 0x7fffffff) {
30: return param_1;)F18014e010F",
    R"F18014e010U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7a40.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7a8c.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea218.
TODO: resolve the indirect call in body 20: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 21: uVar3 = (*pcVar1)();.)F18014e010U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014e010() noexcept {
    return kFunction_0x18014e010;
}

// 0x18014e0a0 FUN_18014e0a0
// source: re/dump/decompile/0x18014e0a0_FUN_18014e0a0.c
// size: 143 bytes; thunk: false
// body sha256: 9850bd4bc3655086203cacbaac2f759f6cd87477af534a48c049654b7f9a143d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014e0a0{
    "0x18014e0a0",
    "FUN_18014e0a0",
    R"F18014e0a0S(undefined FUN_18014e0a0())F18014e0a0S",
    R"B18014e0a0(// 0x18014e0a0  FUN_18014e0a0
// size=143 thunk=false
// signature: undefined FUN_18014e0a0()
// status: ok


undefined8
FUN_18014e0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  iVar2 = _Mtx_lock(&DAT_1803e7a40);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (DAT_1803e7a8c == 0x7fffffff) {
    DAT_1803e7a8c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  FUN_18020d910(param_1,&DAT_1803ea200,param_3,param_4,uVar4);
  _Mtx_unlock(&DAT_1803e7a40);
  return param_1;
}


)B18014e0a0",
    "9850bd4bc3655086203cacbaac2f759f6cd87477af534a48c049654b7f9a143d",
    R"F18014e0a0C(FUN_18020d910)F18014e0a0C",
    R"F18014e0a0D(DAT_1803e7a40
DAT_1803e7a8c
DAT_1803ea200)F18014e0a0D",
    R"F18014e0a0T()F18014e0a0T",
    R"F18014e0a0F(18: if (iVar2 != 0) {
22: return uVar3;
24: if (DAT_1803e7a8c == 0x7fffffff) {
30: return param_1;)F18014e0a0F",
    R"F18014e0a0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7a40.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7a8c.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea200.
TODO: resolve the indirect call in body 20: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 21: uVar3 = (*pcVar1)();.)F18014e0a0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014e0a0() noexcept {
    return kFunction_0x18014e0a0;
}

// 0x18014e130 FUN_18014e130
// source: re/dump/decompile/0x18014e130_FUN_18014e130.c
// size: 136 bytes; thunk: false
// body sha256: 829a5723d9bebd8d4333cc729140aa7887ca1f8ec19456953ea025bce30e2d0e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014e130{
    "0x18014e130",
    "FUN_18014e130",
    R"F18014e130S(undefined FUN_18014e130())F18014e130S",
    R"B18014e130(// 0x18014e130  FUN_18014e130
// size=136 thunk=false
// signature: undefined FUN_18014e130()
// status: ok


undefined8 FUN_18014e130(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = _Mtx_lock(&DAT_1803e7a40);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  if (DAT_1803e7a8c == 0x7fffffff) {
    DAT_1803e7a8c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  FUN_18020aa50(param_1);
  _Mtx_unlock(&DAT_1803e7a40);
  return param_1;
}


)B18014e130",
    "829a5723d9bebd8d4333cc729140aa7887ca1f8ec19456953ea025bce30e2d0e",
    R"F18014e130C(FUN_18020aa50)F18014e130C",
    R"F18014e130D(DAT_1803e7a40
DAT_1803e7a8c)F18014e130D",
    R"F18014e130T()F18014e130T",
    R"F18014e130F(15: if (iVar2 != 0) {
19: return uVar3;
21: if (DAT_1803e7a8c == 0x7fffffff) {
27: return param_1;)F18014e130F",
    R"F18014e130U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7a40.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7a8c.
TODO: resolve the indirect call in body 17: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 18: uVar3 = (*pcVar1)();.)F18014e130U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014e130() noexcept {
    return kFunction_0x18014e130;
}

// 0x18014e1c0 FUN_18014e1c0
// source: re/dump/decompile/0x18014e1c0_FUN_18014e1c0.c
// size: 179 bytes; thunk: false
// body sha256: ed340519997dd8ee139dc6bc386b32b9cd2b436861d5ddf4a0d9a5e2329f98a3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014e1c0{
    "0x18014e1c0",
    "FUN_18014e1c0",
    R"F18014e1c0S(undefined FUN_18014e1c0())F18014e1c0S",
    R"B18014e1c0(// 0x18014e1c0  FUN_18014e1c0
// size=179 thunk=false
// signature: undefined FUN_18014e1c0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18014e1c0(uint param_1,int param_2)

{
  DWORD DVar1;
  uint uVar2;
  ULONGLONG UVar3;
  ulonglong uVar4;
  uint local_res18;
  int local_res1c;
  
  if (param_2 <= (int)param_1) {
    return (ulonglong)param_1;
  }
  local_res18 = param_1;
  local_res1c = param_2;
  if ((DAT_180430158 & 1) == 0) {
    DAT_180430158 = DAT_180430158 | 1;
    UVar3 = GetTickCount64();
    DVar1 = GetCurrentThreadId();
    uVar2 = DVar1 ^ (uint)UVar3;
    _DAT_18042bc74 = 0xffffffff;
    uVar4 = 1;
    _DAT_18042a8f4 = uVar2;
    do {
      uVar2 = (uVar2 >> 0x1e ^ uVar2) * 0x6c078965 + (int)uVar4;
      *(uint *)(&DAT_18042a8f4 + uVar4 * 4) = uVar2;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x270);
    _DAT_18042a8f0 = 0x270;
  }
  uVar4 = FUN_1801fcf20(&local_res18,&DAT_18042a8f0);
  return uVar4;
}


)B18014e1c0",
    "ed340519997dd8ee139dc6bc386b32b9cd2b436861d5ddf4a0d9a5e2329f98a3",
    R"F18014e1c0C(FUN_1801fcf20)F18014e1c0C",
    R"F18014e1c0D(DAT_18042a8f0
DAT_18042a8f4
DAT_180430158)F18014e1c0D",
    R"F18014e1c0T()F18014e1c0T",
    R"F18014e1c0F(19: if (param_2 <= (int)param_1) {
20: return (ulonglong)param_1;
24: if ((DAT_180430158 & 1) == 0) {
32: do {
40: return uVar4;)F18014e1c0F",
    R"F18014e1c0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18042a8f0.
TODO: recover the declaration, type and value for global/data reference DAT_18042a8f4.
TODO: recover the declaration, type and value for global/data reference DAT_180430158.)F18014e1c0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014e1c0() noexcept {
    return kFunction_0x18014e1c0;
}

// 0x18014e280 FUN_18014e280
// source: re/dump/decompile/0x18014e280_FUN_18014e280.c
// size: 301 bytes; thunk: false
// body sha256: 655b955879ad04fbd4069d003e612834301ddc3b4d2202f9fdf6146ee5f323c7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014e280{
    "0x18014e280",
    "FUN_18014e280",
    R"F18014e280S(undefined FUN_18014e280())F18014e280S",
    R"B18014e280(// 0x18014e280  FUN_18014e280
// size=301 thunk=false
// signature: undefined FUN_18014e280()
// status: ok


ulonglong FUN_18014e280(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulonglong in_RAX;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80 [2];
  undefined8 *local_70;
  undefined1 local_68 [32];
  undefined1 local_48 [40];
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_70 = &local_a0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_88 = 0;
  FUN_180211510(&local_a0,L"gameinfo.txt",0xc,param_4,0);
  local_80[0] = &local_c0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  FUN_180211510(&local_c0,L"garrysmod",9,param_4,0);
  uVar2 = FUN_180066720(local_48,param_1,&local_c0,param_4,0);
  uVar2 = FUN_180066720(local_68,uVar2,&local_a0);
  puVar3 = (uint *)FUN_180067c80(local_80,uVar2);
  uVar1 = *puVar3;
  FUN_18021e290(local_68);
  FUN_18021e290(local_48);
  FUN_18021e290(&local_c0);
  FUN_18021e290(&local_a0);
  return (ulonglong)(1 < uVar1);
}


)B18014e280",
    "655b955879ad04fbd4069d003e612834301ddc3b4d2202f9fdf6146ee5f323c7",
    R"F18014e280C(FUN_180066720
FUN_180067c80
FUN_180211510
FUN_18021e290)F18014e280C",
    R"F18014e280D()F18014e280D",
    R"F18014e280T("garrysmod"
"gameinfo.txt")F18014e280T",
    R"F18014e280F(27: if (*(longlong *)(param_1 + 0x10) == 0) {
28: return in_RAX & 0xffffffffffffff00;
50: return (ulonglong)(1 < uVar1);)F18014e280F",
    R"F18014e280U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18014e280U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014e280() noexcept {
    return kFunction_0x18014e280;
}

// 0x18014e3b0 FUN_18014e3b0
// source: re/dump/decompile/0x18014e3b0_FUN_18014e3b0.c
// size: 824 bytes; thunk: false
// body sha256: e90b692a8a77301bfea2b98ae0fb23dbbd1bde8b12dbf29d9d6a323bb3d58ac0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014e3b0{
    "0x18014e3b0",
    "FUN_18014e3b0",
    R"F18014e3b0S(undefined FUN_18014e3b0())F18014e3b0S",
    R"B18014e3b0(// 0x18014e3b0  FUN_18014e3b0
// size=824 thunk=false
// signature: undefined FUN_18014e3b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18014e3b0(undefined8 param_1)

{
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  char cVar4;
  DWORD DVar5;
  int iVar6;
  size_t sVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  void *_Memory;
  undefined8 ****ppppuVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStack_348 [8];
  undefined1 auStack_340 [24];
  uint local_328;
  undefined8 local_318;
  longlong local_310;
  longlong local_308 [5];
  undefined1 local_2e0 [32];
  undefined1 local_2c0 [32];
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  longlong local_290;
  ulonglong uStack_288;
  undefined8 ***local_280 [2];
  undefined8 local_270;
  ulonglong local_268;
  WCHAR local_258 [264];
  ulonglong local_48;
  
  puVar11 = auStack_348;
  puVar12 = auStack_348;
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_348;
  iVar13 = 0;
  uVar14 = 0;
  local_328 = 0;
  local_308[4] = param_1;
  if ((DAT_1805c3928 & 1) == 0) {
    DAT_1805c3928 = DAT_1805c3928 | 1;
    atexit(FUN_18030a4f0);
  }
  if (DAT_1803f91e4 != '\0') {
    FUN_18020e540(param_1,&DAT_1803e6ff0);
    puVar12 = auStack_348;
    goto LAB_18014e6c6;
  }
  DAT_1803f91e4 = '\x01';
  local_318 = (longlong *)((ulonglong)local_318._4_4_ << 0x20);
  FUN_180067fd0(local_280);
  if (((int)local_318 == 0) && (cVar4 = FUN_18014e280(local_280), cVar4 != '\0')) {
    ppppuVar10 = local_280;
    if (7 < local_268) {
      ppppuVar10 = (undefined8 ****)local_280[0];
    }
    FUN_18021a7b0(&DAT_1803e6ff0,ppppuVar10,local_270);
    FUN_18020e540(param_1,&DAT_1803e6ff0);
    local_328 = 1;
    puVar12 = auStack_348;
  }
  else {
    memset(local_258,0,0x208);
    DVar5 = GetModuleFileNameW((HMODULE)0x0,local_258,0x104);
    if (DVar5 != 0) {
      local_318 = local_308;
      sVar7 = wcslen(local_258);
      local_308[0] = 0;
      local_308[1] = 0;
      local_308[2] = 0;
      local_308[3] = 0;
      FUN_180211510(local_308,local_258,sVar7);
      uVar14 = 0;
      local_328 = 0;
      FUN_180065cd0(local_308,&local_2a0);
      FUN_18021e290(local_308);
LAB_18014e537:
      if ((iVar13 < 5) && (local_290 != 0)) {
        plVar8 = (longlong *)FUN_180065b60(&local_2a0,local_2e0);
        uVar14 = 2;
        local_328 = 2;
        local_318 = plVar8;
        if (7 < (ulonglong)plVar8[3]) {
          local_318 = (longlong *)*plVar8;
        }
        local_310 = plVar8[2];
        iVar6 = FUN_180065970(&local_2a0,&local_318);
        if (iVar6 == 0) goto LAB_18014e58d;
        bVar3 = true;
      }
      else {
LAB_18014e58d:
        bVar3 = false;
      }
      if ((char)uVar14 != '\0') {
        uVar14 = 0;
        local_328 = 0;
        FUN_18021e290(local_2e0);
      }
      if (!bVar3) {
        FUN_18021e290(&local_2a0);
        goto LAB_18014e6a6;
      }
      cVar4 = FUN_18014e280(&local_2a0);
      if (cVar4 != '\0') goto LAB_18014e65c;
      puVar9 = (undefined4 *)FUN_180065cd0(&local_2a0,local_2c0);
      if (&local_2a0 == puVar9) goto LAB_18014e645;
      if (7 < uStack_288) {
        pvVar2 = (void *)CONCAT44(uStack_29c,CONCAT22(local_2a0._2_2_,(undefined2)local_2a0));
        _Memory = pvVar2;
        if ((0xfff < uStack_288 * 2 + 2) &&
           (_Memory = *(void **)((longlong)pvVar2 + -8),
           0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)_Memory)))) {
          pcVar1 = (code *)swi(0x29);
          (*pcVar1)(5);
          puVar11 = auStack_340;
LAB_18014e65c:
          puVar9 = &local_2a0;
          if (7 < uStack_288) {
            puVar9 = (undefined4 *)
                     CONCAT44(uStack_29c,CONCAT22(local_2a0._2_2_,(undefined2)local_2a0));
          }
          *(undefined8 *)(puVar11 + -8) = 0x18014e67a;
          FUN_18021a7b0(&DAT_1803e6ff0,puVar9,local_290);
          *(undefined8 *)(puVar11 + -8) = 0x18014e689;
          FUN_18020e540(param_1,&DAT_1803e6ff0);
          *(uint *)(puVar11 + 0x20) = uVar14 | 1;
          *(undefined8 *)(puVar11 + -8) = 0x18014e69a;
          FUN_18021e290(&local_2a0);
          puVar12 = puVar11;
          goto LAB_18014e6bd;
        }
        free(_Memory);
      }
      uStack_29c = puVar9[1];
      uStack_298 = puVar9[2];
      uStack_294 = puVar9[3];
      local_2a0._0_2_ = (undefined2)*puVar9;
      local_2a0._2_2_ = (undefined2)((uint)*puVar9 >> 0x10);
      local_290 = *(longlong *)(puVar9 + 4);
      uStack_288 = *(ulonglong *)(puVar9 + 6);
      *(undefined8 *)(puVar9 + 4) = 0;
      *(undefined8 *)(puVar9 + 6) = 7;
      *(undefined2 *)puVar9 = 0;
LAB_18014e645:
      FUN_18021e290(local_2c0);
      iVar13 = iVar13 + 1;
      goto LAB_18014e537;
    }
LAB_18014e6a6:
    FUN_18020e540(param_1,&DAT_1803e6ff0);
    local_328 = uVar14 | 1;
  }
LAB_18014e6bd:
  *(undefined8 *)(puVar12 + -8) = 0x18014e6c6;
  FUN_18021e290(local_280);
LAB_18014e6c6:
  *(undefined8 *)(puVar12 + -8) = 0x18014e6d8;
  return param_1;
}


)B18014e3b0",
    "e90b692a8a77301bfea2b98ae0fb23dbbd1bde8b12dbf29d9d6a323bb3d58ac0",
    R"F18014e3b0C(FUN_180065970
FUN_180065b60
FUN_180065cd0
FUN_180067fd0
FUN_18014e280
FUN_18020e540
FUN_180211510
FUN_18021a7b0
FUN_18021e290
FUN_18030a4f0)F18014e3b0C",
    R"F18014e3b0D(LAB_18014e537
LAB_18014e58d
LAB_18014e645
LAB_18014e65c
LAB_18014e6a6
LAB_18014e6bd
LAB_18014e6c6
DAT_1803da4c0
DAT_1803e6ff0
DAT_1803f91e4
DAT_1805c3928)F18014e3b0D",
    R"F18014e3b0T()F18014e3b0T",
    R"F18014e3b0F(54: if ((DAT_1805c3928 & 1) == 0) {
58: if (DAT_1803f91e4 != '\0') {
61: goto LAB_18014e6c6;
66: if (((int)local_318 == 0) && (cVar4 = FUN_18014e280(local_280), cVar4 != '\0')) {
68: if (7 < local_268) {
76: else {
79: if (DVar5 != 0) {
91: LAB_18014e537:
92: if ((iVar13 < 5) && (local_290 != 0)) {
97: if (7 < (ulonglong)plVar8[3]) {
102: if (iVar6 == 0) goto LAB_18014e58d;
105: else {
106: LAB_18014e58d:
109: if ((char)uVar14 != '\0') {
114: if (!bVar3) {
116: goto LAB_18014e6a6;
119: if (cVar4 != '\0') goto LAB_18014e65c;
121: if (&local_2a0 == puVar9) goto LAB_18014e645;
122: if (7 < uStack_288) {
125: if ((0xfff < uStack_288 * 2 + 2) &&
131: LAB_18014e65c:
133: if (7 < uStack_288) {
145: goto LAB_18014e6bd;
159: LAB_18014e645:
162: goto LAB_18014e537;
164: LAB_18014e6a6:
168: LAB_18014e6bd:
171: LAB_18014e6c6:
173: return param_1;)F18014e3b0F",
    R"F18014e3b0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18014e537.
TODO: recover the declaration, type and value for global/data reference LAB_18014e58d.
TODO: recover the declaration, type and value for global/data reference LAB_18014e645.
TODO: recover the declaration, type and value for global/data reference LAB_18014e65c.
TODO: recover the declaration, type and value for global/data reference LAB_18014e6a6.
TODO: recover the declaration, type and value for global/data reference LAB_18014e6bd.
TODO: recover the declaration, type and value for global/data reference LAB_18014e6c6.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e6ff0.
TODO: recover the declaration, type and value for global/data reference DAT_1803f91e4.
TODO: recover the declaration, type and value for global/data reference DAT_1805c3928.
TODO: resolve the indirect call in body 128: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 129: (*pcVar1)(5);.)F18014e3b0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014e3b0() noexcept {
    return kFunction_0x18014e3b0;
}

// 0x18014e6f0 FUN_18014e6f0
// source: re/dump/decompile/0x18014e6f0_FUN_18014e6f0.c
// size: 730 bytes; thunk: false
// body sha256: 882df96a071a15de4aeab0db94f5a96defa8f839ed208d0b4cca9a8709f9d93f
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014e6f0{
    "0x18014e6f0",
    "FUN_18014e6f0",
    R"F18014e6f0S(undefined FUN_18014e6f0())F18014e6f0S",
    R"B18014e6f0(// 0x18014e6f0  FUN_18014e6f0
// size=730 thunk=false
// signature: undefined FUN_18014e6f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18014e6f0(undefined8 param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  uint *puVar7;
  undefined1 auStack_e8 [32];
  undefined8 ******local_c8;
  longlong *plStack_c0;
  undefined8 ******local_b8;
  longlong *plStack_b0;
  undefined8 ******local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined **local_98;
  undefined8 ******local_88;
  longlong *plStack_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  undefined **local_60;
  int local_58;
  undefined4 local_54;
  undefined **local_50;
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_e8;
  puVar7 = (uint *)FUN_180067c80(&local_b8,param_1);
  if (1 < *puVar7) {
    local_c8 = (undefined8 *******)0x0;
    plStack_c0 = (longlong *)0x0;
    iVar6 = FUN_180201e70(&local_c8,param_1,2);
    plVar5 = plStack_c0;
    local_68 = CONCAT44(local_68._4_4_,iVar6);
    local_60 = &PTR_vftable_std__System_error_category_1803e9500;
    if (iVar6 == 0) {
      local_48 = 0;
      plStack_40 = (longlong *)0x0;
      local_a8 = &local_b8;
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
        UNLOCK();
      }
      local_b8 = local_c8;
      plStack_b0 = plStack_c0;
      FUN_180067810(&local_48,&local_b8);
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      local_a8 = &local_88;
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_c0 + 1) = (int)plStack_c0[1] + 1;
        UNLOCK();
      }
      local_88 = local_c8;
      plStack_80 = plStack_c0;
      FUN_1800678f0(&local_78,&local_88);
      do {
        while( true ) {
          lVar4 = local_48;
          plVar5 = plStack_70;
          if (local_48 == local_78) {
            if (plStack_70 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_70 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plStack_70)(plStack_70);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                iVar6 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5);
                }
              }
            }
            plVar5 = plStack_40;
            if (plStack_40 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_40 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plStack_40)(plStack_40);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                iVar6 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5);
                }
              }
            }
            plVar5 = plStack_c0;
            if (plStack_c0 != (longlong *)0x0) {
              LOCK();
              plVar1 = plStack_c0 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plStack_c0)(plStack_c0);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                iVar6 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar6 == 1) {
                  (**(code **)(*plVar5 + 8))(plVar5);
                }
              }
            }
            return 1;
          }
          if (param_3 != '\0') break;
LAB_18014e8b4:
          lVar3 = *(longlong *)(param_2 + 8);
          if (lVar3 == *(longlong *)(param_2 + 0x10)) {
            FUN_180224360(param_2,lVar3);
          }
          else {
            local_68 = lVar3;
            FUN_18020e540(lVar3,lVar4 + 0x20);
            *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
          }
          FUN_180067700(&local_48);
        }
        local_a0 = 0;
        local_98 = &PTR_vftable_std__System_error_category_1803e9500;
        FUN_180067150(local_48,&local_b8);
        local_58 = (int)plStack_b0;
        local_50 = &PTR_vftable_std__System_error_category_1803e9500;
        local_a0 = (int)plStack_b0;
        local_9c = local_54;
        local_98 = &PTR_vftable_std__System_error_category_1803e9500;
        local_a8 = local_b8;
        if (((int)local_b8 == 2) && ((int)plStack_b0 == 0)) goto LAB_18014e8b4;
        FUN_180067700(&local_48);
      } while( true );
    }
    if (plStack_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_c0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_c0)(plStack_c0);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
  }
  return 0;
}


)B18014e6f0",
    "882df96a071a15de4aeab0db94f5a96defa8f839ed208d0b4cca9a8709f9d93f",
    R"F18014e6f0C(FUN_180067150
FUN_180067700
FUN_180067810
FUN_1800678f0
FUN_180067c80
FUN_180201e70
FUN_18020e540
FUN_180224360)F18014e6f0C",
    R"F18014e6f0D(LAB_18014e8b4
DAT_1803da4c0)F18014e6f0D",
    R"F18014e6f0T()F18014e6f0T",
    R"F18014e6f0F(43: if (1 < *puVar7) {
50: if (iVar6 == 0) {
54: if (plStack_c0 != (longlong *)0x0) {
65: if (plStack_c0 != (longlong *)0x0) {
73: do {
74: while( true ) {
77: if (local_48 == local_78) {
78: if (plStack_70 != (longlong *)0x0) {
84: if ((int)lVar4 == 1) {
91: if (iVar6 == 1) {
97: if (plStack_40 != (longlong *)0x0) {
103: if ((int)lVar4 == 1) {
110: if (iVar6 == 1) {
116: if (plStack_c0 != (longlong *)0x0) {
122: if ((int)lVar4 == 1) {
129: if (iVar6 == 1) {
134: return 1;
136: if (param_3 != '\0') break;
137: LAB_18014e8b4:
139: if (lVar3 == *(longlong *)(param_2 + 0x10)) {
142: else {
158: if (((int)local_b8 == 2) && ((int)plStack_b0 == 0)) goto LAB_18014e8b4;
162: if (plStack_c0 != (longlong *)0x0) {
168: if ((int)lVar4 == 1) {
175: if (iVar6 == 1) {
181: return 0;)F18014e6f0F",
    R"F18014e6f0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18014e8b4.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 85: (**(code **)*plStack_70)(plStack_70);.
TODO: resolve the indirect call in body 92: (**(code **)(*plVar5 + 8))(plVar5);.
TODO: resolve the indirect call in body 104: (**(code **)*plStack_40)(plStack_40);.
TODO: resolve the indirect call in body 111: (**(code **)(*plVar5 + 8))(plVar5);.
TODO: resolve the indirect call in body 123: (**(code **)*plStack_c0)(plStack_c0);.
TODO: resolve the indirect call in body 130: (**(code **)(*plVar5 + 8))(plVar5);.
TODO: resolve the indirect call in body 169: (**(code **)*plStack_c0)(plStack_c0);.
TODO: resolve the indirect call in body 176: (**(code **)(*plVar5 + 8))(plVar5);.)F18014e6f0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014e6f0() noexcept {
    return kFunction_0x18014e6f0;
}

// 0x18014e9d0 FUN_18014e9d0
// source: re/dump/decompile/0x18014e9d0_FUN_18014e9d0.c
// size: 444 bytes; thunk: false
// body sha256: c525dfbd2b4988ea8203ab1a22044a429fcbe71b46792ce68640e7766bbfde23
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014e9d0{
    "0x18014e9d0",
    "FUN_18014e9d0",
    R"F18014e9d0S(undefined FUN_18014e9d0())F18014e9d0S",
    R"B18014e9d0(// 0x18014e9d0  FUN_18014e9d0
// size=444 thunk=false
// signature: undefined FUN_18014e9d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18014e9d0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined1 local_98 [32];
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong local_60;
  longlong lStack_58;
  undefined8 local_50;
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_d8;
  iVar5 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  FUN_18020e540(local_98,param_1);
  local_b8 = local_98;
  local_b0 = &local_78;
  FUN_18020a900(&local_78,&local_b8);
  _eh_vector_destructor_iterator_(local_98,0x20,1,FUN_1800668e0);
  if (local_78 != lStack_70) {
    do {
      if (4999 < iVar5) break;
      FUN_18020e540(local_48,lStack_70 + -0x20);
      local_a8 = lStack_70 + -0x20;
      FUN_18021e290();
      lStack_70 = lStack_70 + -0x20;
      local_60 = 0;
      lStack_58 = 0;
      local_50 = 0;
      cVar3 = FUN_18014e6f0(local_48,&local_60,0);
      lVar2 = lStack_58;
      lVar1 = local_60;
      if (cVar3 == '\0') {
        FUN_18021c690(&local_60);
      }
      else {
        for (; lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
          piVar4 = (int *)FUN_180067c80(&local_b8,lVar1);
          if ((*piVar4 == 3) && (piVar4[2] == 0)) {
            if (lStack_70 == local_68) {
              FUN_180224360(&local_78,lStack_70);
            }
            else {
              local_a0 = lStack_70;
              FUN_18020e540(lStack_70,lVar1);
              lStack_70 = lStack_70 + 0x20;
            }
          }
          else {
            iVar5 = iVar5 + 1;
            if (4999 < iVar5) break;
          }
        }
        FUN_18021c690(&local_60);
      }
      FUN_18021e290(local_48);
    } while (local_78 != lStack_70);
  }
  FUN_18021c690(&local_78);
  return iVar5;
}


)B18014e9d0",
    "c525dfbd2b4988ea8203ab1a22044a429fcbe71b46792ce68640e7766bbfde23",
    R"F18014e9d0C(FUN_1800668e0
FUN_180067c80
FUN_18014e6f0
FUN_18020a900
FUN_18020e540
FUN_18021c690
FUN_18021e290
FUN_180224360)F18014e9d0C",
    R"F18014e9d0D(DAT_1803da4c0)F18014e9d0D",
    R"F18014e9d0T()F18014e9d0T",
    R"F18014e9d0F(42: if (local_78 != lStack_70) {
43: do {
44: if (4999 < iVar5) break;
55: if (cVar3 == '\0') {
58: else {
59: for (; lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
61: if ((*piVar4 == 3) && (piVar4[2] == 0)) {
62: if (lStack_70 == local_68) {
65: else {
71: else {
73: if (4999 < iVar5) break;
82: return iVar5;)F18014e9d0F",
    R"F18014e9d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F18014e9d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014e9d0() noexcept {
    return kFunction_0x18014e9d0;
}

// 0x18014eb90 FUN_18014eb90
// source: re/dump/decompile/0x18014eb90_FUN_18014eb90.c
// size: 518 bytes; thunk: false
// body sha256: a8e6b501b2e294d8602dd1e3e8baafae2e38cb8df219a04b88a0ef94a86375d9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014eb90{
    "0x18014eb90",
    "FUN_18014eb90",
    R"F18014eb90S(undefined FUN_18014eb90())F18014eb90S",
    R"B18014eb90(// 0x18014eb90  FUN_18014eb90
// size=518 thunk=false
// signature: undefined FUN_18014eb90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18014eb90(LPCWSTR param_1)

{
  bool bVar1;
  int iVar2;
  DWORD DVar3;
  BOOL BVar4;
  undefined8 uVar5;
  HANDLE hFile;
  undefined4 extraout_var;
  wchar_t ***pppwVar6;
  LPCWSTR pWVar7;
  undefined1 auStackY_98 [32];
  undefined1 local_50 [32];
  wchar_t **local_30 [3];
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStackY_98;
  uVar5 = FUN_180066000(param_1,local_50);
  FUN_180065930(uVar5,local_30);
  FUN_18021e290(local_50);
  pppwVar6 = local_30;
  if (7 < local_18) {
    pppwVar6 = (wchar_t ***)local_30[0];
  }
  iVar2 = _wcsicmp((wchar_t *)pppwVar6,L".db");
  if (iVar2 == 0) {
LAB_18014ec6e:
    bVar1 = true;
  }
  else {
    pppwVar6 = local_30;
    if (7 < local_18) {
      pppwVar6 = (wchar_t ***)local_30[0];
    }
    iVar2 = _wcsicmp((wchar_t *)pppwVar6,L".db-journal");
    if (iVar2 == 0) goto LAB_18014ec6e;
    pppwVar6 = local_30;
    if (7 < local_18) {
      pppwVar6 = (wchar_t ***)local_30[0];
    }
    iVar2 = _wcsicmp((wchar_t *)pppwVar6,L".db-wal");
    if (iVar2 == 0) goto LAB_18014ec6e;
    pppwVar6 = local_30;
    if (7 < local_18) {
      pppwVar6 = (wchar_t ***)local_30[0];
    }
    iVar2 = _wcsicmp((wchar_t *)pppwVar6,L".sqlite");
    if (iVar2 == 0) goto LAB_18014ec6e;
    bVar1 = false;
  }
  hFile = (HANDLE)FUN_18021e290(local_30);
  if (!bVar1) {
    pWVar7 = param_1;
    if (7 < *(ulonglong *)(param_1 + 0xc)) {
      pWVar7 = *(LPCWSTR *)param_1;
    }
    hFile = CreateFileW(pWVar7,0x40000000,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffffffffffff) {
LAB_18014ed31:
      BVar4 = SetFilePointerEx(hFile,(LARGE_INTEGER)0x0,(PLARGE_INTEGER)0x0,0);
      if ((BVar4 != 0) && (BVar4 = SetEndOfFile(hFile), BVar4 != 0)) {
        CloseHandle(hFile);
        return 1;
      }
      CloseHandle(hFile);
      return 0;
    }
    DVar3 = GetLastError();
    hFile = (HANDLE)CONCAT44(extraout_var,DVar3);
    if (DVar3 == 5) {
      pWVar7 = param_1;
      if (7 < *(ulonglong *)(param_1 + 0xc)) {
        pWVar7 = *(LPCWSTR *)param_1;
      }
      SetFileAttributesW(pWVar7,0x80);
      if (7 < *(ulonglong *)(param_1 + 0xc)) {
        param_1 = *(LPCWSTR *)param_1;
      }
      hFile = CreateFileW(param_1,0x40000000,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
      if (hFile != (HANDLE)0xffffffffffffffff) goto LAB_18014ed31;
    }
  }
  return (ulonglong)hFile & 0xffffffffffffff00;
}


)B18014eb90",
    "a8e6b501b2e294d8602dd1e3e8baafae2e38cb8df219a04b88a0ef94a86375d9",
    R"F18014eb90C(FUN_180065930
FUN_180066000
FUN_18021e290)F18014eb90C",
    R"F18014eb90D(LAB_18014ec6e
LAB_18014ed31
DAT_1803da4c0)F18014eb90D",
    R"F18014eb90T(".db"
".db-wal"
".sqlite"
".db-journal")F18014eb90T",
    R"F18014eb90F(32: if (7 < local_18) {
36: if (iVar2 == 0) {
37: LAB_18014ec6e:
40: else {
42: if (7 < local_18) {
46: if (iVar2 == 0) goto LAB_18014ec6e;
48: if (7 < local_18) {
52: if (iVar2 == 0) goto LAB_18014ec6e;
54: if (7 < local_18) {
58: if (iVar2 == 0) goto LAB_18014ec6e;
62: if (!bVar1) {
64: if (7 < *(ulonglong *)(param_1 + 0xc)) {
68: if (hFile != (HANDLE)0xffffffffffffffff) {
69: LAB_18014ed31:
71: if ((BVar4 != 0) && (BVar4 = SetEndOfFile(hFile), BVar4 != 0)) {
73: return 1;
76: return 0;
80: if (DVar3 == 5) {
82: if (7 < *(ulonglong *)(param_1 + 0xc)) {
86: if (7 < *(ulonglong *)(param_1 + 0xc)) {
90: if (hFile != (HANDLE)0xffffffffffffffff) goto LAB_18014ed31;
93: return (ulonglong)hFile & 0xffffffffffffff00;)F18014eb90F",
    R"F18014eb90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18014ec6e.
TODO: recover the declaration, type and value for global/data reference LAB_18014ed31.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F18014eb90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014eb90() noexcept {
    return kFunction_0x18014eb90;
}

// 0x18014eda0 FUN_18014eda0
// source: re/dump/decompile/0x18014eda0_FUN_18014eda0.c
// size: 255 bytes; thunk: false
// body sha256: 98cee17e0110783e8b076dcfe729e2d896bdf13f1128ec1f8b36b8e3307853b8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014eda0{
    "0x18014eda0",
    "FUN_18014eda0",
    R"F18014eda0S(undefined FUN_18014eda0())F18014eda0S",
    R"B18014eda0(// 0x18014eda0  FUN_18014eda0
// size=255 thunk=false
// signature: undefined FUN_18014eda0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18014eda0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  longlong local_38;
  longlong lStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  piVar3 = (int *)FUN_180067c80(local_48,param_1);
  if ((*piVar3 == 3) && (piVar3[2] == 0)) {
    local_38 = 0;
    lStack_30 = 0;
    local_28 = 0;
    FUN_18014e6f0(param_1,&local_38,0);
    lVar1 = lStack_30;
    for (lVar6 = local_38; lVar6 != lVar1; lVar6 = lVar6 + 0x20) {
      FUN_18014eda0(lVar6,param_2);
    }
    if (7 < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    FUN_1802d7d9c(param_1);
    FUN_18021c690(&local_38);
  }
  else {
    puVar5 = param_1;
    if (7 < (ulonglong)param_1[3]) {
      puVar5 = (undefined8 *)*param_1;
    }
    uVar4 = FUN_1802d7d9c(puVar5);
    if (((char)uVar4 == '\0') || ((int)((ulonglong)uVar4 >> 0x20) != 0)) {
      cVar2 = FUN_18014eb90(param_1);
      if (cVar2 == '\0') {
        *(int *)(param_2 + 2) = (int)param_2[2] + 1;
      }
      else {
        param_2[1] = param_2[1] + 1;
      }
    }
    else {
      *param_2 = *param_2 + 1;
    }
  }
  return;
}


)B18014eda0",
    "98cee17e0110783e8b076dcfe729e2d896bdf13f1128ec1f8b36b8e3307853b8",
    R"F18014eda0C(FUN_180067c80
FUN_18014e6f0
FUN_18014eb90
FUN_18021c690
FUN_1802d7d9c)F18014eda0C",
    R"F18014eda0D(DAT_1803da4c0)F18014eda0D",
    R"F18014eda0T()F18014eda0T",
    R"F18014eda0F(27: if ((*piVar3 == 3) && (piVar3[2] == 0)) {
33: for (lVar6 = local_38; lVar6 != lVar1; lVar6 = lVar6 + 0x20) {
36: if (7 < (ulonglong)param_1[3]) {
42: else {
44: if (7 < (ulonglong)param_1[3]) {
48: if (((char)uVar4 == '\0') || ((int)((ulonglong)uVar4 >> 0x20) != 0)) {
50: if (cVar2 == '\0') {
53: else {
57: else {
61: return;)F18014eda0F",
    R"F18014eda0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F18014eda0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014eda0() noexcept {
    return kFunction_0x18014eda0;
}

// 0x18014eea0 FUN_18014eea0
// source: re/dump/decompile/0x18014eea0_FUN_18014eea0.c
// size: 450 bytes; thunk: false
// body sha256: 79c475df24c192081415d77b9dfb70a1a1da677edf8aa54aa2768a1bc2716396
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014eea0{
    "0x18014eea0",
    "FUN_18014eea0",
    R"F18014eea0S(undefined FUN_18014eea0())F18014eea0S",
    R"B18014eea0(// 0x18014eea0  FUN_18014eea0
// size=450 thunk=false
// signature: undefined FUN_18014eea0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18014eea0(undefined8 param_1,char *param_2)

{
  longlong lVar1;
  char cVar2;
  size_t sVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108;
  longlong lStack_100;
  undefined8 local_f8;
  char local_e8 [192];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_1c8;
  local_188 = 0;
  local_108 = 0;
  lStack_100 = 0;
  local_f8 = 0;
  cVar2 = FUN_18014e6f0(0,&local_108,0);
  lVar1 = lStack_100;
  if (cVar2 == '\0') {
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    sVar3 = strlen(param_2);
    FUN_18001d080(&local_148,param_2,sVar3);
    puVar4 = (undefined4 *)FUN_18021aef0(&local_148,": not present",0xd);
    local_168 = *puVar4;
    uStack_164 = puVar4[1];
    uStack_160 = puVar4[2];
    uStack_15c = puVar4[3];
    local_158 = *(undefined8 *)(puVar4 + 4);
    uStack_150 = *(undefined8 *)(puVar4 + 6);
    *(undefined1 *)puVar4 = 0;
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 6) = 0xf;
    local_188 = 1;
    FUN_18014de20(&local_168);
    local_188 = 0;
    FUN_18020e450(&local_168);
    puVar5 = &local_148;
  }
  else {
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    local_1a8 = local_180;
    local_1a0 = uStack_178;
    local_198 = local_170;
    for (lVar6 = local_108; local_180 = local_1a8, uStack_178 = local_1a0, local_170 = local_198,
        lVar6 != lVar1; lVar6 = lVar6 + 0x20) {
      FUN_18014eda0(lVar6,&local_180);
      local_1a8 = local_180;
      local_1a0 = uStack_178;
      local_198 = local_170;
    }
    FUN_180012ac0(local_e8,0xc0,"%s: %lld deleted, %lld wiped (locked), %d refused",param_2);
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    sVar3 = strlen(local_e8);
    FUN_18001d080(&local_128,local_e8,sVar3);
    FUN_18014de20(&local_128);
    puVar5 = &local_128;
  }
  FUN_18020e450(puVar5);
  FUN_18021c690(&local_108);
  return;
}


)B18014eea0",
    "79c475df24c192081415d77b9dfb70a1a1da677edf8aa54aa2768a1bc2716396",
    R"F18014eea0C(FUN_180012ac0
FUN_18001d080
FUN_18014de20
FUN_18014e6f0
FUN_18014eda0
FUN_18020e450
FUN_18021aef0
FUN_18021c690)F18014eea0C",
    R"F18014eea0D(DAT_1803da4c0)F18014eea0D",
    R"F18014eea0T(": not present"
"%s: %lld deleted, %lld wiped (locked), %d refused")F18014eea0T",
    R"F18014eea0F(53: if (cVar2 == '\0') {
76: else {
83: for (lVar6 = local_108; local_180 = local_1a8, uStack_178 = local_1a0, local_170 = local_198,
102: return;)F18014eea0F",
    R"F18014eea0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F18014eea0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014eea0() noexcept {
    return kFunction_0x18014eea0;
}

// 0x18014f070 FUN_18014f070
// source: re/dump/decompile/0x18014f070_FUN_18014f070.c
// size: 978 bytes; thunk: false
// body sha256: 4cf8ab39519cd68fb1dd17ab937681786db4c9b0b1e82abbdd7b0defe321f3e2
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014f070{
    "0x18014f070",
    "FUN_18014f070",
    R"F18014f070S(undefined FUN_18014f070())F18014f070S",
    R"B18014f070(// 0x18014f070  FUN_18014f070
// size=978 thunk=false
// signature: undefined FUN_18014f070()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18014f070(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  wchar_t ****ppppwVar7;
  ulonglong *puVar8;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  wchar_t ***local_160;
  wchar_t ***local_158;
  wchar_t ***local_150;
  undefined1 local_148 [32];
  wchar_t ***local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  ulonglong local_110;
  longlong local_108;
  longlong lStack_100;
  undefined8 local_f8;
  longlong local_f0;
  longlong lStack_e8;
  undefined8 local_e0;
  undefined1 local_d8 [32];
  ulonglong local_b8 [4];
  undefined1 local_98 [32];
  ulonglong local_78 [4];
  undefined1 local_58 [32];
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1803da4c0 ^ (ulonglong)auStack_188;
  local_168 = 0;
  local_158 = (wchar_t ***)&local_128;
  local_128 = (wchar_t ***)0x0;
  uStack_120 = 0;
  local_118 = 0;
  local_110 = 0;
  FUN_180211510(&local_128,L"garrysmod",9);
  local_168 = 0;
  FUN_180066720(local_d8,param_1,&local_128);
  FUN_18021e290(&local_128);
  local_150 = (wchar_t ***)&local_128;
  local_128 = (wchar_t ***)0x0;
  uStack_120 = 0;
  local_118 = 0;
  local_110 = 0;
  FUN_180211510(&local_128,L"crashes",7);
  local_168 = 0;
  FUN_180066720(local_78,local_d8,&local_128);
  FUN_18021e290(&local_128);
  local_160 = (wchar_t ***)&local_128;
  local_128 = (wchar_t ***)0x0;
  uStack_120 = 0;
  local_118 = 0;
  local_110 = 0;
  FUN_180211510(&local_128,L"crashes",7);
  local_168 = 0;
  FUN_180066720(local_58,param_1,&local_128);
  FUN_18021e290(&local_128);
  puVar8 = local_78;
  do {
    local_108 = 0;
    lStack_100 = 0;
    local_f8 = 0;
    cVar4 = FUN_18014e6f0(puVar8,&local_108,0);
    lVar3 = lStack_100;
    lVar2 = local_108;
    if (cVar4 != '\0') {
      for (; lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
        ppppwVar7 = *(wchar_t *****)(param_2 + 8);
        if (ppppwVar7 == *(wchar_t *****)(param_2 + 0x10)) {
          FUN_180224360(param_2,ppppwVar7);
        }
        else {
          local_160 = (wchar_t ***)ppppwVar7;
          FUN_18020e540(ppppwVar7,lVar2);
          *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
        }
      }
    }
    FUN_18021c690(&local_108);
    puVar8 = puVar8 + 4;
  } while (puVar8 != local_38);
  FUN_18020e540(local_b8,param_1);
  FUN_18020e540(local_98,local_d8);
  puVar8 = local_b8;
  do {
    local_f0 = 0;
    lStack_e8 = 0;
    local_e0 = 0;
    cVar4 = FUN_18014e6f0(puVar8,&local_f0,1);
    lVar3 = lStack_e8;
    lVar2 = local_f0;
    if (cVar4 != '\0') {
      for (; lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
        uVar6 = FUN_180066000(lVar2,local_148);
        FUN_180065930(uVar6,&local_128);
        FUN_18021e290(local_148);
        ppppwVar7 = &local_128;
        if (7 < local_110) {
          ppppwVar7 = (wchar_t ****)local_128;
        }
        iVar5 = _wcsicmp((wchar_t *)ppppwVar7,L".mdmp");
        if (iVar5 == 0) {
LAB_18014f370:
          bVar1 = true;
        }
        else {
          ppppwVar7 = &local_128;
          if (7 < local_110) {
            ppppwVar7 = (wchar_t ****)local_128;
          }
          iVar5 = _wcsicmp((wchar_t *)ppppwVar7,L".dmp");
          if (iVar5 == 0) goto LAB_18014f370;
          bVar1 = false;
        }
        FUN_18021e290(&local_128);
        if (bVar1) {
          ppppwVar7 = *(wchar_t *****)(param_2 + 8);
          if (ppppwVar7 == *(wchar_t *****)(param_2 + 0x10)) {
            FUN_180224360(param_2,ppppwVar7,lVar2);
          }
          else {
            local_160 = (wchar_t ***)ppppwVar7;
            FUN_18020e540(ppppwVar7,lVar2);
            *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x20;
          }
        }
      }
    }
    FUN_18021c690(&local_f0);
    puVar8 = puVar8 + 4;
    if (puVar8 == local_78) {
      _eh_vector_destructor_iterator_(local_b8,0x20,2,FUN_1800668e0);
      _eh_vector_destructor_iterator_(local_78,0x20,2,FUN_1800668e0);
      FUN_18021e290(local_d8);
      return;
    }
  } while( true );
}


)B18014f070",
    "4cf8ab39519cd68fb1dd17ab937681786db4c9b0b1e82abbdd7b0defe321f3e2",
    R"F18014f070C(FUN_180065930
FUN_180066000
FUN_180066720
FUN_1800668e0
FUN_18014e6f0
FUN_18020e540
FUN_180211510
FUN_18021c690
FUN_18021e290
FUN_180224360)F18014f070C",
    R"F18014f070D(LAB_18014f370
DAT_1803da4c0)F18014f070D",
    R"F18014f070T(".dmp"
".mdmp"
"crashes"
"garrysmod")F18014f070T",
    R"F18014f070F(73: do {
80: if (cVar4 != '\0') {
81: for (; lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
83: if (ppppwVar7 == *(wchar_t *****)(param_2 + 0x10)) {
86: else {
99: do {
106: if (cVar4 != '\0') {
107: for (; lVar2 != lVar3; lVar2 = lVar2 + 0x20) {
112: if (7 < local_110) {
116: if (iVar5 == 0) {
117: LAB_18014f370:
120: else {
122: if (7 < local_110) {
126: if (iVar5 == 0) goto LAB_18014f370;
130: if (bVar1) {
132: if (ppppwVar7 == *(wchar_t *****)(param_2 + 0x10)) {
135: else {
145: if (puVar8 == local_78) {
149: return;)F18014f070F",
    R"F18014f070U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_18014f370.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F18014f070U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014f070() noexcept {
    return kFunction_0x18014f070;
}

// 0x18014f450 FUN_18014f450
// source: re/dump/decompile/0x18014f450_FUN_18014f450.c
// size: 806 bytes; thunk: false
// body sha256: 7d8b729993821be1151c8cd41a9b10fc34c2ec802f5a0f1798099822f7a02788
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014f450{
    "0x18014f450",
    "FUN_18014f450",
    R"F18014f450S(undefined FUN_18014f450())F18014f450S",
    R"B18014f450(// 0x18014f450  FUN_18014f450
// size=806 thunk=false
// signature: undefined FUN_18014f450()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18014f450(undefined8 param_1)

{
  undefined8 *puVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  size_t sVar5;
  uint *puVar6;
  undefined8 uVar7;
  short *psVar8;
  undefined8 *puVar9;
  undefined8 ****ppppuVar10;
  wchar_t **ppwVar11;
  short *psVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_268 [32];
  int local_248;
  undefined8 ***local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f8;
  wchar_t *local_1f0 [3];
  wchar_t *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [32];
  undefined8 ***local_178;
  undefined8 uStack_170;
  longlong local_168;
  ulonglong local_160;
  undefined8 ***local_158 [2];
  longlong local_148;
  ulonglong local_140;
  char local_138 [224];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_268;
  iVar13 = 0;
  local_238 = 0;
  local_1f0[0] = L"sv.db";
  local_1f0[1] = L"cl.db";
  local_1f0[2] = L"mn.db";
  uStack_170 = 0;
  local_168 = 0;
  local_160 = 0xf;
  local_178 = (undefined8 ****)0x0;
  ppwVar11 = local_1f0;
  iVar14 = iVar13;
  do {
    local_1b8 = &local_230;
    sVar5 = wcslen(*ppwVar11);
    local_230 = 0;
    uStack_228 = 0;
    local_220 = 0;
    local_218 = 0;
    FUN_180211510(&local_230,*ppwVar11,sVar5);
    local_238 = 0;
    FUN_180066720(local_158,param_1,&local_230);
    FUN_18021e290(&local_230);
    puVar6 = (uint *)FUN_180067c80(local_1a8,local_158);
    if (*puVar6 < 2) {
      iVar14 = iVar14 + 1;
    }
    else {
      ppppuVar10 = local_158;
      if (7 < local_140) {
        ppppuVar10 = (undefined8 ****)local_158[0];
      }
      uVar7 = FUN_1802d7d9c(ppppuVar10);
      if (((char)uVar7 == '\0') || ((int)((ulonglong)uVar7 >> 0x20) != 0)) {
        if (local_168 != 0) {
          FUN_18021aef0(&local_178,&DAT_18033f56c,1);
        }
        ppppuVar10 = local_158;
        if (7 < local_140) {
          ppppuVar10 = (undefined8 ****)local_158[0];
        }
        psVar2 = (short *)((longlong)ppppuVar10 + local_148 * 2);
        psVar12 = psVar2;
        psVar8 = (short *)FUN_180065240(ppppuVar10,psVar2);
        if (psVar8 != psVar2) {
          do {
            psVar4 = psVar12;
            psVar3 = psVar2;
            if ((*psVar8 != 0x5c) && (*psVar8 != 0x2f)) break;
            psVar8 = psVar8 + 1;
          } while (psVar8 != psVar2);
          do {
            psVar12 = psVar4;
            if (psVar8 == psVar3) break;
            psVar3 = psVar12 + -1;
            if ((*psVar3 == 0x5c) || (psVar4 = psVar3, *psVar3 == 0x2f)) break;
          } while( true );
        }
        local_1b0 = &local_210;
        local_210 = 0;
        uStack_208 = 0;
        local_200 = 0;
        local_1f8 = 0;
        FUN_180211510(&local_210,psVar12,(longlong)psVar2 - (longlong)psVar12 >> 1);
        local_238 = 4;
        puVar9 = (undefined8 *)FUN_180065810(&local_210,local_198);
        puVar1 = puVar9 + 2;
        if (0xf < (ulonglong)puVar9[3]) {
          puVar9 = (undefined8 *)*puVar9;
        }
        FUN_18021aef0(&local_178,puVar9,*puVar1);
        FUN_18020e450(local_198);
        local_238 = 0;
        FUN_18021e290(&local_210);
      }
      else {
        iVar13 = iVar13 + 1;
      }
    }
    FUN_18021e290(local_158);
    ppwVar11 = ppwVar11 + 1;
    if (ppwVar11 == &local_1d8) {
      local_248 = iVar14;
      if (local_168 == 0) {
        FUN_180012ac0(local_138,0xe0,"*.db files: %d deleted, %d absent",iVar13);
      }
      else {
        local_240 = &local_178;
        if (0xf < local_160) {
          local_240 = local_178;
        }
        FUN_180012ac0(local_138,0xe0,
                      "*.db files: %d deleted, %d absent; %s held open by the game - emptied via sql, the file needs the game closed"
                      ,iVar13);
      }
      local_1d8 = (wchar_t *)0x0;
      uStack_1d0 = 0;
      local_1c8 = 0;
      uStack_1c0 = 0;
      sVar5 = strlen(local_138);
      FUN_18001d080(&local_1d8,local_138,sVar5);
      FUN_18014de20(&local_1d8);
      FUN_18020e450(&local_1d8);
      FUN_18020e450(&local_178);
      return;
    }
  } while( true );
}


)B18014f450",
    "7d8b729993821be1151c8cd41a9b10fc34c2ec802f5a0f1798099822f7a02788",
    R"F18014f450C(FUN_180012ac0
FUN_18001d080
FUN_180065240
FUN_180065810
FUN_180066720
FUN_180067c80
FUN_18014de20
FUN_18020e450
FUN_180211510
FUN_18021aef0
FUN_18021e290
FUN_1802d7d9c)F18014f450C",
    R"F18014f450D(DAT_18033f56c
DAT_1803da4c0)F18014f450D",
    R"F18014f450T("cl.db"
"mn.db"
"sv.db"
"*.db files: %d deleted, %d absent"
"*.db files: %d deleted, %d absent; %s held open by the game - emptied via sql, the file needs the game closed")F18014f450T",
    R"F18014f450F(69: do {
81: if (*puVar6 < 2) {
84: else {
86: if (7 < local_140) {
90: if (((char)uVar7 == '\0') || ((int)((ulonglong)uVar7 >> 0x20) != 0)) {
91: if (local_168 != 0) {
95: if (7 < local_140) {
101: if (psVar8 != psVar2) {
102: do {
105: if ((*psVar8 != 0x5c) && (*psVar8 != 0x2f)) break;
108: do {
110: if (psVar8 == psVar3) break;
112: if ((*psVar3 == 0x5c) || (psVar4 = psVar3, *psVar3 == 0x2f)) break;
124: if (0xf < (ulonglong)puVar9[3]) {
132: else {
138: if (ppwVar11 == &local_1d8) {
140: if (local_168 == 0) {
143: else {
145: if (0xf < local_160) {
161: return;)F18014f450F",
    R"F18014f450U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033f56c.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F18014f450U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014f450() noexcept {
    return kFunction_0x18014f450;
}

// 0x18014f780 FUN_18014f780
// source: re/dump/decompile/0x18014f780_FUN_18014f780.c
// size: 765 bytes; thunk: false
// body sha256: 9c39e471f07eca6177fe3a0c0d4b19d746bba02dbd0a16db90ac4fe10e875b60
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014f780{
    "0x18014f780",
    "FUN_18014f780",
    R"F18014f780S(undefined FUN_18014f780())F18014f780S",
    R"B18014f780(// 0x18014f780  FUN_18014f780
// size=765 thunk=false
// signature: undefined FUN_18014f780()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18014f780(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  size_t sVar7;
  uint uVar8;
  wchar_t ****_Str1;
  undefined8 *puVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_188;
  wchar_t ***local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  ulonglong local_168;
  undefined8 ***local_160;
  wchar_t ***local_158;
  undefined1 local_150 [32];
  undefined8 ***local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  ulonglong uStack_118;
  undefined8 *local_110;
  undefined8 *puStack_108;
  undefined8 local_100;
  undefined1 local_f8 [32];
  char local_d8 [160];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_1b8;
  uVar11 = 0;
  local_188 = 0;
  local_160 = &local_130;
  local_130 = (undefined8 ****)0x0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  FUN_180211510(&local_130,&DAT_18035eab0,3);
  local_188 = 0;
  local_158 = (wchar_t ***)&local_180;
  local_180 = (wchar_t ***)0x0;
  uStack_178 = 0;
  local_170 = 0;
  local_168 = 0;
  FUN_180211510(&local_180,&DAT_18035eab8,3);
  local_188 = 0;
  uVar6 = FUN_180066720(local_150,param_1,&local_180);
  FUN_180066720(local_f8,uVar6,&local_130);
  FUN_18021e290(local_150);
  FUN_18021e290(&local_180);
  FUN_18021e290(&local_130);
  local_110 = (undefined8 *)0x0;
  puStack_108 = (undefined8 *)0x0;
  local_100 = 0;
  cVar4 = FUN_18014e6f0(local_f8,&local_110,1);
  puVar2 = puStack_108;
  uVar3 = 0;
  uVar12 = uVar11;
  puVar1 = local_110;
  if (cVar4 == '\0') {
    local_130 = (undefined8 ***)0x0;
    uStack_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    FUN_18001d080(&local_130,"lua/bin: not present",0x14);
    FUN_18014de20(&local_130);
  }
  else {
    for (; local_198 = uVar3, puVar1 != puVar2; puVar1 = puVar1 + 4) {
      uVar6 = FUN_180066000(puVar1,local_150);
      FUN_18020e540(&local_180,uVar6);
      local_188 = 1;
      _Str1 = &local_180;
      if (7 < local_168) {
        _Str1 = (wchar_t ****)local_180;
      }
      iVar5 = _wcsicmp((wchar_t *)_Str1,L".dll");
      local_188 = 0;
      FUN_18021e290(&local_180);
      FUN_18021e290(local_150);
      if (iVar5 == 0) {
        FUN_18020e540(&local_130,puVar1);
        FUN_180211740(&local_130,L".disabled",9);
        ppppuVar10 = &local_130;
        if (7 < uStack_118) {
          ppppuVar10 = (undefined8 ****)local_130;
        }
        puVar9 = puVar1;
        if (7 < (ulonglong)puVar1[3]) {
          puVar9 = (undefined8 *)*puVar1;
        }
        iVar5 = FUN_1802d7fcc(puVar9,ppppuVar10);
        FUN_18021e290(&local_130);
        uVar8 = (uint)uVar12 + 1;
        if (iVar5 == 0) {
          uVar8 = (uint)uVar12;
        }
        uVar12 = (ulonglong)uVar8;
        if (iVar5 == 0) {
          uVar11 = uVar11 + 1;
        }
      }
      uVar3 = (int)uVar12;
    }
    FUN_180012ac0(local_d8,0xa0,"lua/bin: %lld dll(s) renamed to .disabled, %d in use",uVar11);
    local_130 = (undefined8 ***)0x0;
    uStack_128 = 0;
    local_120 = 0;
    uStack_118 = 0;
    sVar7 = strlen(local_d8);
    FUN_18001d080(&local_130,local_d8,sVar7);
    FUN_18014de20(&local_130);
  }
  FUN_18020e450(&local_130);
  FUN_18021c690(&local_110);
  FUN_18021e290(local_f8);
  return;
}


)B18014f780",
    "9c39e471f07eca6177fe3a0c0d4b19d746bba02dbd0a16db90ac4fe10e875b60",
    R"F18014f780C(FUN_180012ac0
FUN_18001d080
FUN_180066000
FUN_180066720
FUN_18014de20
FUN_18014e6f0
FUN_18020e450
FUN_18020e540
FUN_180211510
FUN_180211740
FUN_18021c690
FUN_18021e290
FUN_1802d7fcc)F18014f780C",
    R"F18014f780D(DAT_18035eab0
DAT_18035eab8
DAT_1803da4c0)F18014f780D",
    R"F18014f780T(".dll"
".disabled"
"lua/bin: not present"
"lua/bin: %lld dll(s) renamed to .disabled, %d in use")F18014f780T",
    R"F18014f780F(76: if (cVar4 == '\0') {
84: else {
85: for (; local_198 = uVar3, puVar1 != puVar2; puVar1 = puVar1 + 4) {
90: if (7 < local_168) {
97: if (iVar5 == 0) {
101: if (7 < uStack_118) {
105: if (7 < (ulonglong)puVar1[3]) {
111: if (iVar5 == 0) {
115: if (iVar5 == 0) {
133: return;)F18014f780F",
    R"F18014f780U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18035eab0.
TODO: recover the declaration, type and value for global/data reference DAT_18035eab8.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F18014f780U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014f780() noexcept {
    return kFunction_0x18014f780;
}

// 0x18014fa80 FUN_18014fa80
// source: re/dump/decompile/0x18014fa80_FUN_18014fa80.c
// size: 608 bytes; thunk: false
// body sha256: 3a4ae28e0b7a94efc2ea6b0d4377af97b8f1f025cbcc5be72bdfbbeb6f8eac5c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014fa80{
    "0x18014fa80",
    "FUN_18014fa80",
    R"F18014fa80S(undefined FUN_18014fa80())F18014fa80S",
    R"B18014fa80(// 0x18014fa80  FUN_18014fa80
// size=608 thunk=false
// signature: undefined FUN_18014fa80()
// status: ok


undefined8 *
FUN_18014fa80(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  wchar_t *pwVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  size_t sVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
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
  undefined8 *local_88;
  undefined8 *local_80;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  
  uVar8 = 0;
  cVar1 = *(char *)(param_3 + 1);
  local_88 = param_1;
  if (cVar1 == '\0') {
    puVar9 = &local_e8;
    pwVar2 = (wchar_t *)*param_3;
    sVar5 = wcslen(pwVar2);
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    FUN_180211510(&local_e8,pwVar2,sVar5,param_4,uVar8,puVar9);
    puVar7 = (undefined4 *)FUN_180066720(local_78,param_2,&local_e8,param_4,0x10);
  }
  else {
    local_80 = &local_a8;
    pwVar2 = (wchar_t *)*param_3;
    sVar5 = wcslen(pwVar2);
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    FUN_180211510(&local_a8,pwVar2,sVar5,param_4,uVar8);
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    FUN_180211510(&local_c8,L"garrysmod",9,param_4,1,&local_c8);
    uVar6 = FUN_180066720(local_38,param_2,&local_c8,param_4,3);
    puVar7 = (undefined4 *)FUN_180066720(local_58,uVar6,&local_a8,param_4,7);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar8 = puVar7[1];
  uVar3 = puVar7[2];
  uVar4 = puVar7[3];
  *(undefined4 *)param_1 = *puVar7;
  *(undefined4 *)((longlong)param_1 + 4) = uVar8;
  *(undefined4 *)(param_1 + 1) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  uVar8 = puVar7[5];
  uVar3 = puVar7[6];
  uVar4 = puVar7[7];
  *(undefined4 *)(param_1 + 2) = puVar7[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar8;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *(undefined2 *)puVar7 = 0;
  *(undefined8 *)(puVar7 + 4) = 0;
  *(undefined8 *)(puVar7 + 6) = 7;
  if (cVar1 == '\0') {
    FUN_18021e290(local_78);
    FUN_18021e290(&local_e8);
  }
  else {
    FUN_18021e290(local_58);
    FUN_18021e290(local_38);
    FUN_18021e290(&local_c8);
    FUN_18021e290(&local_a8);
  }
  return param_1;
}


)B18014fa80",
    "3a4ae28e0b7a94efc2ea6b0d4377af97b8f1f025cbcc5be72bdfbbeb6f8eac5c",
    R"F18014fa80C(FUN_180066720
FUN_180211510
FUN_18021e290)F18014fa80C",
    R"F18014fa80D()F18014fa80D",
    R"F18014fa80T("garrysmod")F18014fa80T",
    R"F18014fa80F(41: if (cVar1 == '\0') {
52: else {
90: if (cVar1 == '\0') {
94: else {
100: return param_1;)F18014fa80F",
    R"F18014fa80U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F18014fa80U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014fa80() noexcept {
    return kFunction_0x18014fa80;
}

// 0x18014fcf0 FUN_18014fcf0
// source: re/dump/decompile/0x18014fcf0_FUN_18014fcf0.c
// size: 192 bytes; thunk: false
// body sha256: 251f52c3153445bb0d129f824a9c1572bf65ebbe835849c161b9583c9fd5fa2b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014fcf0{
    "0x18014fcf0",
    "FUN_18014fcf0",
    R"F18014fcf0S(undefined FUN_18014fcf0())F18014fcf0S",
    R"B18014fcf0(// 0x18014fcf0  FUN_18014fcf0
// size=192 thunk=false
// signature: undefined FUN_18014fcf0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18014fcf0(LPCWSTR param_1,longlong param_2)

{
  BOOL BVar1;
  BOOL BVar2;
  HANDLE hFile;
  undefined8 uVar3;
  undefined4 extraout_var;
  undefined1 auStackY_58 [32];
  FILETIME local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStackY_58;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    param_1 = *(LPCWSTR *)param_1;
  }
  hFile = CreateFileW(param_1,0x100,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x2000000,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    uVar3 = 0xffffffffffffff00;
  }
  else {
    local_18 = (FILETIME)((param_2 + 0x2b6109100) * 10000000);
    BVar1 = SetFileTime(hFile,&local_18,&local_18,&local_18);
    BVar2 = CloseHandle(hFile);
    uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,BVar2) >> 8),BVar1 != 0);
  }
  return uVar3;
}


)B18014fcf0",
    "251f52c3153445bb0d129f824a9c1572bf65ebbe835849c161b9583c9fd5fa2b",
    R"F18014fcf0C()F18014fcf0C",
    R"F18014fcf0D(DAT_1803da4c0)F18014fcf0D",
    R"F18014fcf0T()F18014fcf0T",
    R"F18014fcf0F(22: if (7 < *(ulonglong *)(param_1 + 0xc)) {
26: if (hFile == (HANDLE)0xffffffffffffffff) {
29: else {
35: return uVar3;)F18014fcf0F",
    R"F18014fcf0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F18014fcf0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014fcf0() noexcept {
    return kFunction_0x18014fcf0;
}

// 0x18014fdb0 FUN_18014fdb0
// source: re/dump/decompile/0x18014fdb0_FUN_18014fdb0.c
// size: 212 bytes; thunk: false
// body sha256: 7e90ed7a828e8721e100eb1e516c4b26d2cb5f39f520fc49953c641868b5b195
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014fdb0{
    "0x18014fdb0",
    "FUN_18014fdb0",
    R"F18014fdb0S(undefined FUN_18014fdb0())F18014fdb0S",
    R"B18014fdb0(// 0x18014fdb0  FUN_18014fdb0
// size=212 thunk=false
// signature: undefined FUN_18014fdb0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_18014fdb0(LPCWSTR param_1)

{
  BOOL BVar1;
  HANDLE hFile;
  longlong lVar2;
  undefined1 auStackY_58 [32];
  _FILETIME local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStackY_58;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    param_1 = *(LPCWSTR *)param_1;
  }
  hFile = CreateFileW(param_1,0x80,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x2000000,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffffffffffff) {
    local_18.dwLowDateTime = 0;
    local_18.dwHighDateTime = 0;
    BVar1 = GetFileTime(hFile,(LPFILETIME)0x0,(LPFILETIME)0x0,&local_18);
    CloseHandle(hFile);
    if (BVar1 != 0) {
      lVar2 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816((longlong)local_18 + -0x19db1ded53e8000)
                     ,8) + (longlong)local_18 + -0x19db1ded53e8000;
      return (lVar2 >> 0x17) - (lVar2 >> 0x3f);
    }
  }
  return 0;
}


)B18014fdb0",
    "7e90ed7a828e8721e100eb1e516c4b26d2cb5f39f520fc49953c641868b5b195",
    R"F18014fdb0C()F18014fdb0C",
    R"F18014fdb0D(DAT_1803da4c0)F18014fdb0D",
    R"F18014fdb0T()F18014fdb0T",
    R"F18014fdb0F(20: if (7 < *(ulonglong *)(param_1 + 0xc)) {
24: if (hFile != (HANDLE)0xffffffffffffffff) {
29: if (BVar1 != 0) {
32: return (lVar2 >> 0x17) - (lVar2 >> 0x3f);
35: return 0;)F18014fdb0F",
    R"F18014fdb0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F18014fdb0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014fdb0() noexcept {
    return kFunction_0x18014fdb0;
}

// 0x18014fe90 FUN_18014fe90
// source: re/dump/decompile/0x18014fe90_FUN_18014fe90.c
// size: 1149 bytes; thunk: false
// body sha256: 52eaa5c07db5cf22ae0380b94a4cc74d2e16bc554bf11543f6597e648f2a53d8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x18014fe90{
    "0x18014fe90",
    "FUN_18014fe90",
    R"F18014fe90S(undefined FUN_18014fe90())F18014fe90S",
    R"B18014fe90(// 0x18014fe90  FUN_18014fe90
// size=1149 thunk=false
// signature: undefined FUN_18014fe90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18014fe90(undefined8 param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  DWORD DVar3;
  uint uVar4;
  int iVar5;
  BOOL BVar6;
  __time64_t _Var7;
  ULONGLONG UVar8;
  uint *puVar9;
  HANDLE hFile;
  size_t sVar10;
  LPCWSTR ***lpFileName;
  ulonglong uVar11;
  longlong lVar12;
  undefined **ppuVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStackY_1d8 [32];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  FILETIME local_158;
  longlong local_150;
  longlong lStack_148;
  undefined8 local_140;
  LPCWSTR **local_138 [3];
  ulonglong local_120;
  char local_118 [192];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStackY_1d8;
  _Var7 = _time64((__time64_t *)0x0);
  if ((DAT_180430158 & 1) == 0) {
    DAT_180430158 = DAT_180430158 | 1;
    UVar8 = GetTickCount64();
    DVar3 = GetCurrentThreadId();
    uVar4 = DVar3 ^ (uint)UVar8;
    _DAT_18042bc74 = 0xffffffff;
    uVar11 = 1;
    _DAT_18042a8f4 = uVar4;
    do {
      uVar4 = (uVar4 >> 0x1e ^ uVar4) * 0x6c078965 + (int)uVar11;
      *(uint *)(&DAT_18042a8f4 + uVar11 * 4) = uVar4;
      uVar11 = uVar11 + 1;
    } while (uVar11 < 0x270);
    _DAT_18042a8f0 = 0x270;
  }
  uVar4 = FUN_18021dbf0(&DAT_18042a8f0);
  uVar11 = (ulonglong)uVar4 * 0x2ef;
  uVar4 = (uint)uVar11;
  while (uVar4 < 0x225) {
    uVar4 = FUN_18021dbf0(&DAT_18042a8f0);
    uVar11 = (ulonglong)uVar4 * 0x2ef;
    uVar4 = (uint)uVar11;
  }
  lVar12 = _Var7 + ((uVar11 >> 0x20) - 0x7fffff6a ^ 0xffffffff80000000) * -0x15180;
  iVar14 = 0;
  ppuVar13 = &PTR_u_gameinfo_txt_18033beb0;
  do {
    FUN_18014fa80(local_138,param_1,ppuVar13);
    puVar9 = (uint *)FUN_180067c80(local_168,local_138);
    iVar5 = iVar14;
    if (1 < *puVar9) {
      iVar5 = FUN_18014e1c0(0,*(int *)(ppuVar13 + 3) * 0x15180);
      lpFileName = local_138;
      if (7 < local_120) {
        lpFileName = (LPCWSTR ***)local_138[0];
      }
      hFile = CreateFileW((LPCWSTR)lpFileName,0x100,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x2000000,
                          (HANDLE)0x0);
      if (hFile == (HANDLE)0xffffffffffffffff) {
        bVar16 = false;
      }
      else {
        local_158 = (FILETIME)((lVar12 + (longlong)iVar5 + 0x2b6109100) * 10000000);
        BVar6 = SetFileTime(hFile,&local_158,&local_158,&local_158);
        CloseHandle(hFile);
        bVar16 = BVar6 != 0;
      }
      iVar5 = iVar14 + 1;
      if (!bVar16) {
        iVar5 = iVar14;
      }
    }
    iVar14 = iVar5;
    FUN_18021e290(local_138);
    ppuVar13 = ppuVar13 + 4;
  } while (ppuVar13 != (undefined **)&DAT_18033bf30);
  FUN_180012ac0(local_118,0xc0,"Fingerprint file times: %d re-rolled, %d failed, %d absent",iVar14);
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  sVar10 = strlen(local_118);
  FUN_18001d080(&local_188,local_118,sVar10);
  FUN_18014de20(&local_188);
  FUN_18020e450(&local_188);
  if (param_2 != '\0') {
    local_150 = 0;
    lStack_148 = 0;
    local_140 = 0;
    cVar2 = FUN_18014e6f0(param_1,&local_150,1);
    lVar1 = lStack_148;
    if (cVar2 == '\0') {
      local_188 = 0;
      uStack_180 = 0;
      local_178 = 0;
      uStack_170 = 0;
      FUN_18001d080(&local_188,"Install age: root unreadable",0x1c);
      FUN_18014de20(&local_188);
    }
    else {
      iVar14 = 0;
      for (lVar15 = local_150; lVar15 != lVar1; lVar15 = lVar15 + 0x20) {
        if ((DAT_180430158 & 1) == 0) {
          DAT_180430158 = DAT_180430158 | 1;
          UVar8 = GetTickCount64();
          DVar3 = GetCurrentThreadId();
          uVar4 = DVar3 ^ (uint)UVar8;
          _DAT_18042bc74 = 0xffffffff;
          uVar11 = 1;
          _DAT_18042a8f4 = uVar4;
          do {
            uVar4 = (uVar4 >> 0x1e ^ uVar4) * 0x6c078965 + (int)uVar11;
            *(uint *)(&DAT_18042a8f4 + uVar11 * 4) = uVar4;
            uVar11 = uVar11 + 1;
          } while (uVar11 < 0x270);
          _DAT_18042a8f0 = 0x270;
        }
        uVar4 = FUN_18021dbf0(&DAT_18042a8f0);
        uVar11 = (ulonglong)uVar4 * 0x15181;
        uVar4 = (uint)uVar11;
        while (uVar4 < 0xea53) {
          uVar4 = FUN_18021dbf0(&DAT_18042a8f0);
          uVar11 = (ulonglong)uVar4 * 0x15181;
          uVar4 = (uint)uVar11;
        }
        cVar2 = FUN_18014fcf0(lVar15,((uVar11 >> 0x20) - 0x80000000 ^ 0xffffffff80000000) + lVar12);
        iVar5 = iVar14 + 1;
        if (cVar2 == '\0') {
          iVar5 = iVar14;
        }
        iVar14 = iVar5;
      }
      FUN_180012ac0(local_118,0xc0,"Install age: %d root file(s) aged back, %d failed",iVar14);
      local_188 = 0;
      uStack_180 = 0;
      local_178 = 0;
      uStack_170 = 0;
      sVar10 = strlen(local_118);
      FUN_18001d080(&local_188,local_118,sVar10);
      FUN_18014de20(&local_188);
    }
    FUN_18020e450(&local_188);
    FUN_18021c690(&local_150);
  }
  return;
}


)B18014fe90",
    "52eaa5c07db5cf22ae0380b94a4cc74d2e16bc554bf11543f6597e648f2a53d8",
    R"F18014fe90C(FUN_180012ac0
FUN_18001d080
FUN_180067c80
FUN_18014de20
FUN_18014e1c0
FUN_18014e6f0
FUN_18014fa80
FUN_18014fcf0
FUN_18020e450
FUN_18021c690
FUN_18021dbf0
FUN_18021e290)F18014fe90C",
    R"F18014fe90D(DAT_18033bf30
DAT_1803da4c0
DAT_18042a8f0
DAT_18042a8f4
DAT_180430158)F18014fe90D",
    R"F18014fe90T("Install age: root unreadable"
"Install age: %d root file(s) aged back, %d failed"
"Fingerprint file times: %d re-rolled, %d failed, %d absent")F18014fe90T",
    R"F18014fe90F(48: if ((DAT_180430158 & 1) == 0) {
56: do {
66: while (uVar4 < 0x225) {
74: do {
78: if (1 < *puVar9) {
81: if (7 < local_120) {
86: if (hFile == (HANDLE)0xffffffffffffffff) {
89: else {
96: if (!bVar16) {
113: if (param_2 != '\0') {
119: if (cVar2 == '\0') {
127: else {
129: for (lVar15 = local_150; lVar15 != lVar1; lVar15 = lVar15 + 0x20) {
130: if ((DAT_180430158 & 1) == 0) {
138: do {
148: while (uVar4 < 0xea53) {
155: if (cVar2 == '\0') {
172: return;)F18014fe90F",
    R"F18014fe90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033bf30.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_18042a8f0.
TODO: recover the declaration, type and value for global/data reference DAT_18042a8f4.
TODO: recover the declaration, type and value for global/data reference DAT_180430158.)F18014fe90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x18014fe90() noexcept {
    return kFunction_0x18014fe90;
}

// 0x180150310 FUN_180150310
// source: re/dump/decompile/0x180150310_FUN_180150310.c
// size: 445 bytes; thunk: false
// body sha256: 079e3033ccdbc9ace48de5b35479d34581806a7d478fad4bcce8bbebde330cbe
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180150310{
    "0x180150310",
    "FUN_180150310",
    R"F180150310S(undefined FUN_180150310())F180150310S",
    R"B180150310(// 0x180150310  FUN_180150310
// size=445 thunk=false
// signature: undefined FUN_180150310()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180150310(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  size_t sVar4;
  undefined **ppuVar5;
  undefined8 ***pppuVar6;
  undefined1 auStack_248 [32];
  undefined8 **local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0 [40];
  char local_198 [4];
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 **local_188 [3];
  ulonglong local_170;
  undefined8 **local_168 [3];
  ulonglong local_150;
  char local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_248;
  local_208 = 0;
  ppuVar5 = &PTR_s_client_dll_1803e79e0;
  do {
    puVar1 = *ppuVar5;
    uVar2 = FUN_180022740(local_1c0,10);
    puVar3 = (undefined8 *)FUN_18022a630(uVar2);
    local_200 = *puVar3;
    uStack_1f8 = puVar3[1];
    local_1f0 = puVar3[2];
    uStack_1e8 = puVar3[3];
    *(undefined1 *)puVar3 = 0;
    puVar3[2] = 0;
    puVar3[3] = 0xf;
    local_208 = 1;
    FUN_18020e450(local_1c0);
    FUN_18014d5a0(local_198,puVar1,&local_200);
    local_208 = 0;
    FUN_18020e450(&local_200);
    if (local_198[0] == '\0') {
      local_228 = local_168;
      if (0xf < local_150) {
        local_228 = local_168[0];
      }
      FUN_180012ac0(local_148,0x100,"sql wipe (%s): %s",puVar1);
    }
    else {
      pppuVar6 = local_188;
      if (0xf < local_170) {
        pppuVar6 = (undefined8 ***)local_188[0];
      }
      local_218 = local_18c;
      local_220 = local_190;
      local_228 = (undefined8 **)CONCAT44(local_228._4_4_,local_194);
      FUN_180012ac0(local_148,0x100,
                    "%s: %d table(s) dropped, %d cookie(s) cleared, %d freed page(s) overwritten",
                    pppuVar6);
    }
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1d0 = 0;
    uStack_1c8 = 0;
    sVar4 = strlen(local_148);
    FUN_18001d080(&local_1e0,local_148,sVar4);
    FUN_18014de20(&local_1e0);
    FUN_18020e450(&local_1e0);
    FUN_18020e450(local_168);
    FUN_18020e450(local_188);
    ppuVar5 = ppuVar5 + 1;
  } while (ppuVar5 != (undefined **)&DAT_1803e79f0);
  return;
}


)B180150310",
    "079e3033ccdbc9ace48de5b35479d34581806a7d478fad4bcce8bbebde330cbe",
    R"F180150310C(FUN_180012ac0
FUN_18001d080
FUN_180022740
FUN_18014d5a0
FUN_18014de20
FUN_18020e450
FUN_18022a630)F180150310C",
    R"F180150310D(DAT_1803da4c0
DAT_1803e79f0)F180150310D",
    R"F180150310T("sql wipe (%s): %s"
"%s: %d table(s) dropped, %d cookie(s) cleared, %d freed page(s) overwritten")F180150310T",
    R"F180150310F(46: do {
62: if (local_198[0] == '\0') {
64: if (0xf < local_150) {
69: else {
71: if (0xf < local_170) {
93: return;)F180150310F",
    R"F180150310U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e79f0.)F180150310U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180150310() noexcept {
    return kFunction_0x180150310;
}

// 0x1801504d0 FUN_1801504d0
// source: re/dump/decompile/0x1801504d0_FUN_1801504d0.c
// size: 113 bytes; thunk: false
// body sha256: aa384dc6d4a1a4cfee8becd4e41ecd9e62d9415cd8d44ba3de8ebe19c6cb16d6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801504d0{
    "0x1801504d0",
    "FUN_1801504d0",
    R"F1801504d0S(undefined FUN_1801504d0())F1801504d0S",
    R"B1801504d0(// 0x1801504d0  FUN_1801504d0
// size=113 thunk=false
// signature: undefined FUN_1801504d0()
// status: ok


char * FUN_1801504d0(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  FUN_18016d4c0();
  pcVar1 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 0x18)) {
    pcVar1 = *(char **)param_1;
  }
  pcVar2 = pcVar1 + *(longlong *)(param_1 + 0x10);
  for (; pcVar1 != pcVar2; pcVar1 = pcVar1 + 1) {
    if ((byte)(*pcVar1 + 0xbfU) < 0x1a) {
      *pcVar1 = *pcVar1 + ' ';
    }
  }
  return param_1;
}


)B1801504d0",
    "aa384dc6d4a1a4cfee8becd4e41ecd9e62d9415cd8d44ba3de8ebe19c6cb16d6",
    R"F1801504d0C(FUN_18016d4c0)F1801504d0C",
    R"F1801504d0D()F1801504d0D",
    R"F1801504d0T()F1801504d0T",
    R"F1801504d0F(15: if (0xf < *(ulonglong *)(param_1 + 0x18)) {
19: for (; pcVar1 != pcVar2; pcVar1 = pcVar1 + 1) {
20: if ((byte)(*pcVar1 + 0xbfU) < 0x1a) {
24: return param_1;)F1801504d0F",
    R"F1801504d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F1801504d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801504d0() noexcept {
    return kFunction_0x1801504d0;
}

// 0x180150550 FUN_180150550
// source: re/dump/decompile/0x180150550_FUN_180150550.c
// size: 1563 bytes; thunk: false
// body sha256: a70274b6da41b2693be6ea4aad2eafb36dbd8f5fa86d75802bf38a5b5ac6805e
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180150550{
    "0x180150550",
    "FUN_180150550",
    R"F180150550S(undefined FUN_180150550())F180150550S",
    R"B180150550(// 0x180150550  FUN_180150550
// size=1563 thunk=false
// signature: undefined FUN_180150550()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180150550(undefined8 param_1)

{
  char *pcVar1;
  code *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  size_t sVar8;
  int *******pppppppiVar9;
  longlong lVar10;
  char *******pppppppcVar11;
  char *pcVar12;
  int iVar13;
  int *******pppppppiVar14;
  longlong lVar15;
  longlong lVar16;
  char *******pppppppcVar17;
  undefined8 *******pppppppuVar18;
  int iVar19;
  uint uVar20;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  int local_290;
  uint local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined4 *local_260 [2];
  undefined4 local_250 [2];
  undefined1 local_248;
  undefined7 uStack_247;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined *local_228;
  char ******local_220 [2];
  ulonglong local_210;
  ulonglong local_208;
  undefined8 ******local_200 [3];
  ulonglong local_1e8;
  int ******local_1e0 [2];
  ulonglong local_1d0;
  ulonglong local_1c8;
  char local_1b8 [8];
  undefined8 ******local_1b0 [2];
  longlong local_1a0;
  ulonglong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_178;
  longlong local_170;
  char local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_2b8;
  local_288 = 0;
  piVar6 = (int *)FUN_180067c80(local_260,param_1);
  if (*piVar6 != 2) {
    return;
  }
  if (piVar6[2] != 0) {
    return;
  }
  uVar7 = FUN_180065de0(param_1,&local_280);
  FUN_180065810(uVar7,local_200);
  FUN_18021e290(&local_280);
  FUN_18014c6b0(local_1b8,param_1);
  if (local_1b8[0] == '\0') {
    if (local_1a0 == 0) {
      local_298 = (undefined8 *******)"unknown";
    }
    else {
      local_298 = local_1b0;
      if (0xf < local_198) {
        local_298 = (undefined8 *******)local_1b0[0];
      }
    }
    pppppppuVar18 = local_200;
    if (0xf < local_1e8) {
      pppppppuVar18 = (undefined8 *******)local_200[0];
    }
    FUN_180012ac0(local_158,0x100,"%s: not readable right now (%s)",pppppppuVar18);
    local_280 = 0;
    uStack_278 = 0;
    local_270 = 0;
    uStack_268 = 0;
    sVar8 = strlen(local_158);
    FUN_18001d080(&local_280,local_158,sVar8);
    FUN_18014df00(1,&local_280);
  }
  else {
    local_260[0] = (undefined4 *)((ulonglong)local_260[0] & 0xffffffff00000000);
    iVar5 = 0;
    uVar20 = 0;
    if (local_190 != local_188) {
      iVar19 = 0;
      lVar16 = local_190;
      do {
        FUN_1801504d0(local_1e0,lVar16);
        pppppppiVar14 = local_1e0;
        if (0xf < local_1c8) {
          pppppppiVar14 = (int *******)local_1e0[0];
        }
        iVar4 = iVar5;
        if (((local_1d0 < 7) ||
            (pppppppiVar9 = (int *******)
                            thunk_FUN_1802d5870(pppppppiVar14,
                                                (int *******)((longlong)pppppppiVar14 + 7),"sqlite_"
                                                ,7),
            pppppppiVar9 == (int *******)((longlong)pppppppiVar14 + 7))) ||
           (pppppppiVar9 != pppppppiVar14)) {
          pppppppiVar14 = local_1e0;
          if (0xf < local_1c8) {
            pppppppiVar14 = (int *******)local_1e0[0];
          }
          if (local_1d0 == 7) {
            iVar13 = *(int *)pppppppiVar14 + -0x6b6f6f63;
            if ((iVar13 == 0) &&
               (iVar13 = *(ushort *)((longlong)pppppppiVar14 + 4) - 0x6569, iVar13 == 0)) {
              iVar13 = *(byte *)((longlong)pppppppiVar14 + 6) - 0x73;
            }
            if (iVar13 == 0) goto LAB_180150786;
          }
          iVar19 = iVar19 + 1;
          pppppppiVar14 = local_1e0;
          if (0xf < local_1c8) {
            pppppppiVar14 = (int *******)local_1e0[0];
          }
          if (local_1d0 < 0x15) {
            lVar15 = -1;
          }
          else {
            lVar10 = thunk_FUN_1802d5870(pppppppiVar14,(longlong)pppppppiVar14 + 0x15,
                                         "vcmod_cl_usersettings",0x15);
            lVar15 = -1;
            if (lVar10 != (longlong)pppppppiVar14 + 0x15) {
              lVar15 = lVar10 - (longlong)pppppppiVar14;
            }
          }
          iVar4 = iVar5 + 1;
          if (lVar15 != 0) {
            iVar4 = iVar5;
          }
        }
LAB_180150786:
        iVar5 = iVar4;
        FUN_18020e450(local_1e0);
        lVar16 = lVar16 + 0x20;
      } while (lVar16 != local_188);
      local_260[0] = (undefined4 *)CONCAT44(local_260[0]._4_4_,iVar19);
      uVar20 = local_288;
    }
    lVar15 = local_170;
    iVar19 = 0;
    for (lVar16 = local_178; lVar16 != lVar15; lVar16 = lVar16 + 0x20) {
      FUN_18016d4c0(local_220,lVar16);
      local_288 = uVar20 | 1;
      pppppppcVar11 = (char *******)local_220[0];
      if (local_208 < 0x10) {
        pppppppcVar11 = local_220;
      }
      pppppppcVar17 = (char *******)((longlong)pppppppcVar11 + local_210);
      for (; pppppppcVar11 != pppppppcVar17;
          pppppppcVar11 = (char *******)((longlong)pppppppcVar11 + 1)) {
        if ((byte)(*(char *)pppppppcVar11 + 0xbfU) < 0x1a) {
          *(char *)pppppppcVar11 = *(char *)pppppppcVar11 + ' ';
        }
      }
      pppppppcVar11 = local_220;
      if (0xf < local_208) {
        pppppppcVar11 = (char *******)local_220[0];
      }
      if (((local_210 < 4) ||
          (pcVar1 = (char *)((longlong)pppppppcVar11 + local_210),
          pcVar12 = (char *)thunk_FUN_1802d6b60(pppppppcVar11,pcVar1,&DAT_18035ed38,4),
          pcVar12 == pcVar1)) || ((longlong)pcVar12 - (longlong)pppppppcVar11 == -1)) {
        pppppppcVar11 = local_220;
        if (0xf < local_208) {
          pppppppcVar11 = (char *******)local_220[0];
        }
        if (((0xb < local_210) &&
            (pcVar1 = (char *)((longlong)pppppppcVar11 + local_210),
            pcVar12 = (char *)thunk_FUN_1802d6b60(pppppppcVar11,pcVar1,"devicecookie",0xc),
            pcVar12 != pcVar1)) && ((longlong)pcVar12 - (longlong)pppppppcVar11 != -1))
        goto LAB_1801508ad;
      }
      else {
LAB_1801508ad:
        iVar19 = iVar19 + 1;
      }
      uVar20 = uVar20 & 0xfffffffe;
      local_288 = uVar20;
      FUN_18020e450(local_220);
    }
    if (0 < iVar5) {
      pppppppuVar18 = local_200;
      if (0xf < local_1e8) {
        pppppppuVar18 = (undefined8 *******)local_200[0];
      }
      local_298._4_4_ = (undefined4)((ulonglong)local_298 >> 0x20);
      local_298 = (undefined8 *******)CONCAT44(local_298._4_4_,iVar5);
      FUN_180012ac0(local_158,0x100,
                    "%s: %d client-side BAN table(s) present (vcmod_cl_usersettings_*)",
                    pppppppuVar18);
      local_280 = 0;
      uStack_278 = 0;
      local_270 = 0;
      uStack_268 = 0;
      sVar8 = strlen(local_158);
      FUN_18001d080(&local_280,local_158,sVar8);
      FUN_18014df00(2,&local_280);
      FUN_18020e450(&local_280);
    }
    if (0 < iVar19) {
      pppppppuVar18 = local_200;
      if (0xf < local_1e8) {
        pppppppuVar18 = (undefined8 *******)local_200[0];
      }
      local_298 = (undefined8 *******)CONCAT44(local_298._4_4_,iVar19);
      FUN_180012ac0(local_158,0x100,"%s: %d AC device cookie(s) present",pppppppuVar18);
      local_280 = 0;
      uStack_278 = 0;
      local_270 = 0;
      uStack_268 = 0;
      sVar8 = strlen(local_158);
      FUN_18001d080(&local_280,local_158,sVar8);
      FUN_18014df00(2,&local_280);
      FUN_18020e450(&local_280);
    }
    if ((iVar5 != 0) || (iVar19 != 0)) goto LAB_180150b21;
    iVar5 = (int)(local_170 - local_178 >> 5);
    if (((int)local_260[0] < 1) && (iVar5 < 1)) goto LAB_180150b21;
    pppppppuVar18 = local_200;
    if (0xf < local_1e8) {
      pppppppuVar18 = (undefined8 *******)local_200[0];
    }
    local_298 = (undefined8 *******)CONCAT44(local_298._4_4_,(int)local_260[0]);
    local_290 = iVar5;
    FUN_180012ac0(local_158,0x100,"%s: %d table(s), %d cookie(s) - no known AC marker",pppppppuVar18
                 );
    local_280 = 0;
    uStack_278 = 0;
    local_270 = 0;
    uStack_268 = 0;
    sVar8 = strlen(local_158);
    FUN_18001d080(&local_280,local_158,sVar8);
    local_228 = &DAT_1803e7a40;
    iVar5 = _Mtx_lock(&DAT_1803e7a40);
    if (iVar5 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (DAT_1803e7a8c == 0x7fffffff) {
      DAT_1803e7a8c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    local_250[0] = 0;
    uVar7 = FUN_18016d4c0(&local_248,&local_280);
    puVar3 = DAT_1803edc28;
    if (DAT_1803edc28 == DAT_1803edc30) {
      FUN_180224570(uVar7,DAT_1803edc28,local_250);
    }
    else {
      local_260[0] = DAT_1803edc28;
      *DAT_1803edc28 = local_250[0];
      *(ulonglong *)(puVar3 + 2) = CONCAT71(uStack_247,local_248);
      *(undefined8 *)(puVar3 + 4) = local_240;
      *(undefined8 *)(puVar3 + 6) = local_238;
      *(undefined8 *)(puVar3 + 8) = uStack_230;
      local_238 = _DAT_1803814b0;
      uStack_230 = _UNK_1803814b8;
      local_248 = 0;
      DAT_1803edc28 = DAT_1803edc28 + 10;
    }
    FUN_18020e450(&local_248);
    _Mtx_unlock(&DAT_1803e7a40);
  }
  FUN_18020e450(&local_280);
LAB_180150b21:
  FUN_18020d5c0(&local_178);
  FUN_18020d5c0(&local_190);
  FUN_18020e450(local_1b0);
  FUN_18020e450(local_200);
  return;
}


)B180150550",
    "a70274b6da41b2693be6ea4aad2eafb36dbd8f5fa86d75802bf38a5b5ac6805e",
    R"F180150550C(FUN_180012ac0
FUN_18001d080
FUN_180065810
FUN_180065de0
FUN_180067c80
FUN_18014c6b0
FUN_18014df00
FUN_1801504d0
FUN_18016d4c0
FUN_18020d5c0
FUN_18020e450
FUN_18021e290
FUN_180224570)F180150550C",
    R"F180150550D(LAB_180150786
LAB_1801508ad
LAB_180150b21
DAT_18035ed38
DAT_1803da4c0
DAT_1803e7a40
DAT_1803e7a8c
DAT_1803edc28
DAT_1803edc30)F180150550D",
    R"F180150550T("sqlite_"
"unknown"
"devicecookie"
"vcmod_cl_usersettings"
"%s: not readable right now (%s)"
"%s: %d AC device cookie(s) present"
"%s: %d table(s), %d cookie(s) - no known AC marker"
"%s: %d client-side BAN table(s) present (vcmod_cl_usersettings_*)")F180150550T",
    R"F180150550F(71: if (*piVar6 != 2) {
72: return;
74: if (piVar6[2] != 0) {
75: return;
81: if (local_1b8[0] == '\0') {
82: if (local_1a0 == 0) {
85: else {
87: if (0xf < local_198) {
92: if (0xf < local_1e8) {
104: else {
108: if (local_190 != local_188) {
111: do {
114: if (0xf < local_1c8) {
118: if (((local_1d0 < 7) ||
126: if (0xf < local_1c8) {
129: if (local_1d0 == 7) {
131: if ((iVar13 == 0) &&
135: if (iVar13 == 0) goto LAB_180150786;
139: if (0xf < local_1c8) {
142: if (local_1d0 < 0x15) {
145: else {
149: if (lVar10 != (longlong)pppppppiVar14 + 0x15) {
154: if (lVar15 != 0) {
158: LAB_180150786:
168: for (lVar16 = local_178; lVar16 != lVar15; lVar16 = lVar16 + 0x20) {
172: if (local_208 < 0x10) {
176: for (; pppppppcVar11 != pppppppcVar17;
178: if ((byte)(*(char *)pppppppcVar11 + 0xbfU) < 0x1a) {
183: if (0xf < local_208) {
186: if (((local_210 < 4) ||
191: if (0xf < local_208) {
194: if (((0xb < local_210) &&
198: goto LAB_1801508ad;
200: else {
201: LAB_1801508ad:
208: if (0 < iVar5) {
210: if (0xf < local_1e8) {
227: if (0 < iVar19) {
229: if (0xf < local_1e8) {
243: if ((iVar5 != 0) || (iVar19 != 0)) goto LAB_180150b21;
245: if (((int)local_260[0] < 1) && (iVar5 < 1)) goto LAB_180150b21;
247: if (0xf < local_1e8) {
262: if (iVar5 != 0) {
266: return;
268: if (DAT_1803e7a8c == 0x7fffffff) {
275: if (DAT_1803edc28 == DAT_1803edc30) {
278: else {
294: LAB_180150b21:
299: return;)F180150550F",
    R"F180150550U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180150786.
TODO: recover the declaration, type and value for global/data reference LAB_1801508ad.
TODO: recover the declaration, type and value for global/data reference LAB_180150b21.
TODO: recover the declaration, type and value for global/data reference DAT_18035ed38.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7a40.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7a8c.
TODO: recover the declaration, type and value for global/data reference DAT_1803edc28.
TODO: recover the declaration, type and value for global/data reference DAT_1803edc30.
TODO: resolve the indirect call in body 264: pcVar2 = (code *)swi(3);.
TODO: resolve the indirect call in body 265: (*pcVar2)();.)F180150550U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180150550() noexcept {
    return kFunction_0x180150550;
}

// 0x180150b70 FUN_180150b70
// source: re/dump/decompile/0x180150b70_FUN_180150b70.c
// size: 28 bytes; thunk: false
// body sha256: 807acb72d50ad5902369fe9d93210b6ed12581fb531523f180da302529f3d0d5
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180150b70{
    "0x180150b70",
    "FUN_180150b70",
    R"F180150b70S(undefined FUN_180150b70())F180150b70S",
    R"B180150b70(// 0x180150b70  FUN_180150b70
// size=28 thunk=false
// signature: undefined FUN_180150b70()
// status: ok


undefined1 FUN_180150b70(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_180019700();
  *param_2 = uVar1;
  return 1;
}


)B180150b70",
    "807acb72d50ad5902369fe9d93210b6ed12581fb531523f180da302529f3d0d5",
    R"F180150b70C(FUN_180019700)F180150b70C",
    R"F180150b70D()F180150b70D",
    R"F180150b70T()F180150b70T",
    R"F180150b70F(14: return 1;)F180150b70F",
    R"F180150b70U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180150b70U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180150b70() noexcept {
    return kFunction_0x180150b70;
}

// 0x180150b90 FUN_180150b90
// source: re/dump/decompile/0x180150b90_FUN_180150b90.c
// size: 3508 bytes; thunk: false
// body sha256: e31751509134effb76f1d58972cd67baa9ade8cb3522f506530a7672a2627b95
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180150b90{
    "0x180150b90",
    "FUN_180150b90",
    R"F180150b90S(undefined FUN_180150b90())F180150b90S",
    R"B180150b90(// 0x180150b90  FUN_180150b90
// size=3508 thunk=false
// signature: undefined FUN_180150b90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180150b90(void)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  undefined8 uVar7;
  int *piVar8;
  __time64_t _Var9;
  longlong lVar10;
  ulonglong uVar11;
  wchar_t ****ppppwVar12;
  char *pcVar13;
  undefined **ppuVar14;
  wchar_t **ppwVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_448 [32];
  undefined1 *local_428;
  int local_420;
  undefined4 local_418;
  wchar_t ***local_410 [2];
  undefined4 local_400 [2];
  undefined1 local_3f8;
  undefined7 uStack_3f7;
  wchar_t **local_3f0;
  wchar_t **local_3e8;
  wchar_t **ppwStack_3e0;
  undefined4 local_3d8 [2];
  undefined1 local_3d0;
  undefined7 uStack_3cf;
  wchar_t **local_3c8;
  wchar_t **local_3c0;
  wchar_t **ppwStack_3b8;
  undefined4 local_3b0 [2];
  undefined1 local_3a8;
  undefined7 uStack_3a7;
  wchar_t **local_3a0;
  wchar_t **local_398;
  wchar_t **ppwStack_390;
  undefined8 *local_388;
  wchar_t *local_380 [3];
  wchar_t *local_368 [4];
  undefined8 *local_348;
  undefined8 *local_340;
  undefined8 *local_338;
  undefined8 *local_330;
  undefined *local_328;
  undefined *local_320;
  undefined *local_318;
  undefined1 local_310 [32];
  wchar_t *local_2f0;
  ulonglong uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  wchar_t ***local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  ulonglong uStack_2b8;
  longlong local_2b0;
  longlong lStack_2a8;
  undefined8 local_2a0;
  longlong local_298;
  longlong lStack_290;
  undefined8 local_288;
  longlong local_280;
  longlong lStack_278;
  undefined8 local_270;
  undefined1 local_268 [32];
  undefined1 local_248 [16];
  longlong local_238;
  char local_228 [32];
  undefined1 *local_208;
  undefined4 local_200;
  undefined1 local_1f8 [32];
  char *local_1d8;
  undefined4 local_1d0;
  undefined1 local_1c8 [32];
  char *local_1a8;
  undefined4 local_1a0;
  undefined1 local_198 [32];
  char *local_178;
  undefined4 local_170;
  undefined1 local_168 [32];
  char *local_148;
  undefined4 local_140;
  char local_138 [224];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_448;
  uVar18 = 0;
  iVar4 = 0;
  local_418 = 0;
  FUN_18014e3b0(local_248);
  if (local_238 == 0) {
    local_2d0 = (wchar_t ***)0x0;
    uStack_2c8 = 0;
    local_2c0 = 0;
    uStack_2b8 = 0;
    FUN_18001d080(&local_2d0,"Game folder not found - file checks unavailable",0x2f);
    FUN_18014df00(1,&local_2d0);
    FUN_18020e450(&local_2d0);
    DAT_180400aed = 0;
  }
  else {
    local_348 = &local_2f0;
    local_2f0 = (wchar_t *)0x0;
    uStack_2e8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    FUN_180211510(&local_2f0,L"garrysmod",9);
    local_418 = 0;
    FUN_180066720(local_268,local_248,&local_2f0);
    FUN_18021e290(&local_2f0);
    local_340 = &local_2f0;
    local_2f0 = (wchar_t *)0x0;
    uStack_2e8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    FUN_180211510(&local_2f0,L"data",4);
    local_418 = 0;
    FUN_180066720(local_228,local_268,&local_2f0);
    FUN_18021e290(&local_2f0);
    local_208 = &DAT_18035ef0c;
    local_200 = 2;
    local_338 = &local_2f0;
    local_2f0 = (wchar_t *)0x0;
    uStack_2e8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    FUN_180211510(&local_2f0,L"download",8);
    local_418 = 0;
    FUN_180066720(local_1f8,local_268,&local_2f0);
    FUN_18021e290(&local_2f0);
    local_1d8 = "download/";
    local_1d0 = 1;
    local_330 = &local_2f0;
    local_2f0 = (wchar_t *)0x0;
    uStack_2e8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    FUN_180211510(&local_2f0,L"downloads",9);
    local_418 = 0;
    FUN_180066720(local_1c8,local_268,&local_2f0);
    FUN_18021e290(&local_2f0);
    local_1a8 = "downloads/";
    local_1a0 = 1;
    local_388 = &local_2f0;
    local_2f0 = (wchar_t *)0x0;
    uStack_2e8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    FUN_180211510(&local_2f0,L"downloadlists",0xd);
    local_418 = 0;
    FUN_180066720(local_198,local_268,&local_2f0);
    FUN_18021e290(&local_2f0);
    local_178 = "downloadlists/";
    local_170 = 1;
    local_410[0] = (wchar_t ***)&local_2f0;
    local_2f0 = (wchar_t *)0x0;
    uStack_2e8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    FUN_180211510(&local_2f0,L"cache",5);
    local_418 = 0;
    FUN_180066720(local_168,local_268,&local_2f0);
    FUN_18021e290(&local_2f0);
    local_148 = "cache/";
    local_140 = 1;
    pcVar13 = local_228;
    do {
      iVar3 = FUN_18014e9d0(pcVar13);
      if (0 < iVar3) {
        local_428 = &DAT_18033e5ea;
        if (4999 < iVar3) {
          local_428 = &DAT_18035efac;
        }
        local_420 = iVar3;
        FUN_180012ac0(local_138,0xe0,"%s still holds %s%d file(s)",*(undefined8 *)(pcVar13 + 0x20));
        local_2d0 = (wchar_t ***)0x0;
        uStack_2c8 = 0;
        local_2c0 = 0;
        uStack_2b8 = 0;
        sVar6 = strlen(local_138);
        FUN_18001d080(&local_2d0,local_138,sVar6);
        FUN_18014df00(*(undefined4 *)(pcVar13 + 0x28),&local_2d0);
        FUN_18020e450(&local_2d0);
      }
      pcVar13 = pcVar13 + 0x30;
    } while (pcVar13 != local_138);
    local_280 = 0;
    lStack_278 = 0;
    local_270 = 0;
    FUN_18014f070(local_248,&local_280);
    if (local_280 != lStack_278) {
      FUN_180012ac0(local_138,0xe0,
                    "%d crash dump(s) not cleared - a dump taken while injected lists our module",
                    lStack_278 - local_280 >> 5);
      local_2d0 = (wchar_t ***)0x0;
      uStack_2c8 = 0;
      local_2c0 = 0;
      uStack_2b8 = 0;
      sVar6 = strlen(local_138);
      FUN_18001d080(&local_2d0,local_138,sVar6);
      FUN_18014df00(2,&local_2d0);
      FUN_18020e450(&local_2d0);
    }
    local_380[0] = L"cl.db";
    local_380[1] = L"mn.db";
    local_380[2] = L"sv.db";
    ppwVar15 = local_380;
    do {
      if (DAT_180423571 != '\0') break;
      local_410[0] = (wchar_t ***)&local_2f0;
      sVar6 = wcslen(*ppwVar15);
      local_2f0 = (wchar_t *)0x0;
      uStack_2e8 = 0;
      local_2e0 = 0;
      uStack_2d8 = 0;
      FUN_180211510(&local_2f0,*ppwVar15,sVar6);
      local_418 = 0;
      uVar7 = FUN_180066720(&local_2d0,local_268,&local_2f0);
      FUN_180150550(uVar7);
      FUN_18021e290(&local_2d0);
      FUN_18021e290(&local_2f0);
      ppwVar15 = ppwVar15 + 1;
    } while (ppwVar15 != local_368);
    local_410[0] = (wchar_t ***)&local_2f0;
    local_2f0 = (wchar_t *)0x0;
    uStack_2e8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    FUN_180211510(&local_2f0,L"sv.db",5);
    local_418 = 0;
    FUN_180066720(&local_2d0,local_268,&local_2f0);
    FUN_18021e290(&local_2f0);
    piVar8 = (int *)FUN_180067c80(local_410,&local_2d0);
    uVar11 = uVar18;
    if (*piVar8 == 0) {
      iVar4 = piVar8[2];
    }
    else if (*piVar8 != 1) {
      ppppwVar12 = &local_2d0;
      if (7 < uStack_2b8) {
        ppppwVar12 = (wchar_t ****)local_2d0;
      }
      iVar4 = FUN_1802d7a0c(ppppwVar12,&local_2f0,9,0xffffffff);
      uVar11 = 0xffffffffffffffff;
      if (iVar4 == 0) {
        uVar11 = uStack_2e8;
      }
    }
    if ((iVar4 == 0) && (uVar11 != 0)) {
      FUN_180012ac0(local_138,0xe0,
                    "sv.db still on disk (%llu KB) - deletable only while you are not hosting",
                    uVar11 >> 10);
      local_2f0 = (wchar_t *)0x0;
      uStack_2e8 = 0;
      local_2e0 = 0;
      uStack_2d8 = 0;
      sVar6 = strlen(local_138);
      FUN_18001d080(&local_2f0,local_138,sVar6);
      FUN_18014df00(1,&local_2f0);
      FUN_18020e450(&local_2f0);
    }
    FUN_18021e290(&local_2d0);
    local_298 = 0;
    lStack_290 = 0;
    local_288 = 0;
    local_410[0] = (wchar_t ***)&local_2d0;
    local_2d0 = (wchar_t ***)0x0;
    uStack_2c8 = 0;
    local_2c0 = 0;
    uStack_2b8 = 0;
    FUN_180211510(&local_2d0,&DAT_18035eab0,3);
    local_418 = 0;
    local_388 = &local_2f0;
    local_2f0 = (wchar_t *)0x0;
    uStack_2e8 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    FUN_180211510(&local_2f0,&DAT_18035eab8,3);
    local_418 = 0;
    uVar7 = FUN_180066720(local_368,local_268,&local_2f0);
    uVar7 = FUN_180066720(local_310,uVar7,&local_2d0);
    cVar2 = FUN_18014e6f0(uVar7,&local_298,1);
    FUN_18021e290(local_310);
    FUN_18021e290(local_368);
    FUN_18021e290(&local_2f0);
    FUN_18021e290(&local_2d0);
    lVar10 = lStack_290;
    if ((cVar2 != '\0') && (lVar16 = local_298, uVar11 = uVar18, local_298 != lStack_290)) {
      do {
        uVar7 = FUN_180066000(lVar16,local_368);
        FUN_18020e540(&local_2d0,uVar7);
        local_418 = 1;
        ppppwVar12 = &local_2d0;
        if (7 < uStack_2b8) {
          ppppwVar12 = (wchar_t ****)local_2d0;
        }
        iVar4 = _wcsicmp((wchar_t *)ppppwVar12,L".dll");
        local_418 = 0;
        FUN_18021e290(&local_2d0);
        FUN_18021e290(local_368);
        uVar5 = (uint)uVar11 + 1;
        if (iVar4 != 0) {
          uVar5 = (uint)uVar11;
        }
        uVar11 = (ulonglong)uVar5;
        lVar16 = lVar16 + 0x20;
      } while (lVar16 != lVar10);
      if (0 < (int)uVar5) {
        FUN_180012ac0(local_138,0xe0,"lua/bin: %d binary module(s) still there (scored indicator)",
                      uVar5);
        local_2d0 = (wchar_t ***)0x0;
        uStack_2c8 = 0;
        local_2c0 = 0;
        uStack_2b8 = 0;
        sVar6 = strlen(local_138);
        FUN_18001d080(&local_2d0,local_138,sVar6);
        local_328 = &DAT_1803e7a40;
        iVar4 = _Mtx_lock(&DAT_1803e7a40);
        if (iVar4 != 0) {
          std::_Throw_Cpp_error(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (DAT_1803e7a8c == 0x7fffffff) {
          DAT_1803e7a8c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
        }
        local_400[0] = 1;
        uVar7 = FUN_18016d4c0(&local_3f8,&local_2d0);
        ppppwVar12 = DAT_1803edc28;
        if (DAT_1803edc28 == DAT_1803edc30) {
          FUN_180224570(uVar7,DAT_1803edc28,local_400);
        }
        else {
          local_410[0] = (wchar_t ***)DAT_1803edc28;
          *(undefined4 *)DAT_1803edc28 = local_400[0];
          ppppwVar12[1] = (wchar_t ***)CONCAT71(uStack_3f7,local_3f8);
          ppppwVar12[2] = (wchar_t ***)local_3f0;
          ppppwVar12[3] = (wchar_t ***)local_3e8;
          ppppwVar12[4] = (wchar_t ***)ppwStack_3e0;
          local_3e8 = (wchar_t **)_DAT_1803814b0;
          ppwStack_3e0 = (wchar_t **)_UNK_1803814b8;
          local_3f8 = 0;
          DAT_1803edc28 = DAT_1803edc28 + 5;
        }
        FUN_18020e450(&local_3f8);
        _Mtx_unlock(&DAT_1803e7a40);
        LOCK();
        DAT_180400b0c = DAT_180400b0c + 1;
        UNLOCK();
        FUN_18020e450(&local_2d0);
      }
    }
    _Var9 = _time64((__time64_t *)0x0);
    ppuVar14 = &PTR_u_gameinfo_txt_18033beb0;
    uVar11 = uVar18;
    do {
      uVar7 = FUN_18014fa80(local_368,local_248,ppuVar14);
      lVar10 = FUN_18014fdb0(uVar7);
      FUN_18021e290(local_368);
      uVar17 = uVar11;
      if ((0 < lVar10) && (uVar17 = (ulonglong)((int)uVar11 + 1), 0x2a2ff < _Var9 - lVar10)) {
        uVar17 = uVar11;
      }
      ppuVar14 = ppuVar14 + 4;
      uVar11 = uVar17;
    } while (ppuVar14 != (undefined **)&DAT_18033bf30);
    if (0 < (int)uVar17) {
      FUN_180012ac0(local_138,0xe0,
                    "%d fingerprinted file(s) modified in the last 2 days - reads as a reinstall",
                    uVar17);
      local_2d0 = (wchar_t ***)0x0;
      uStack_2c8 = 0;
      local_2c0 = 0;
      uStack_2b8 = 0;
      sVar6 = strlen(local_138);
      FUN_18001d080(&local_2d0,local_138,sVar6);
      local_320 = &DAT_1803e7a40;
      iVar4 = _Mtx_lock(&DAT_1803e7a40);
      if (iVar4 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (DAT_1803e7a8c == 0x7fffffff) {
        DAT_1803e7a8c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      local_3d8[0] = 1;
      uVar7 = FUN_18016d4c0(&local_3d0,&local_2d0);
      ppppwVar12 = DAT_1803edc28;
      if (DAT_1803edc28 == DAT_1803edc30) {
        FUN_180224570(uVar7,DAT_1803edc28,local_3d8);
      }
      else {
        local_410[0] = (wchar_t ***)DAT_1803edc28;
        *(undefined4 *)DAT_1803edc28 = local_3d8[0];
        ppppwVar12[1] = (wchar_t ***)CONCAT71(uStack_3cf,local_3d0);
        ppppwVar12[2] = (wchar_t ***)local_3c8;
        ppppwVar12[3] = (wchar_t ***)local_3c0;
        ppppwVar12[4] = (wchar_t ***)ppwStack_3b8;
        local_3c0 = (wchar_t **)_DAT_1803814b0;
        ppwStack_3b8 = (wchar_t **)_UNK_1803814b8;
        local_3d0 = 0;
        DAT_1803edc28 = DAT_1803edc28 + 5;
      }
      FUN_18020e450(&local_3d0);
      _Mtx_unlock(&DAT_1803e7a40);
      LOCK();
      DAT_180400b0c = DAT_180400b0c + 1;
      UNLOCK();
      FUN_18020e450(&local_2d0);
    }
    local_2b0 = 0;
    lStack_2a8 = 0;
    local_2a0 = 0;
    cVar2 = FUN_18014e6f0(local_248,&local_2b0,1);
    lVar10 = lStack_2a8;
    if ((cVar2 != '\0') && (lVar16 = local_2b0, local_2b0 != lStack_2a8)) {
      do {
        uVar11 = FUN_18014fdb0(lVar16);
        if ((0 < (longlong)uVar11) && ((uVar18 == 0 || ((longlong)uVar11 < (longlong)uVar18)))) {
          uVar18 = uVar11;
        }
        lVar16 = lVar16 + 0x20;
      } while (lVar16 != lVar10);
      if ((0 < (longlong)uVar18) && ((longlong)(_Var9 - uVar18) < 0x2a300)) {
        local_2d0 = (wchar_t ***)0x0;
        uStack_2c8 = 0;
        local_2c0 = 0;
        uStack_2b8 = 0;
        FUN_18001d080(&local_2d0,"Game root reads as a FRESH INSTALL (oldest file < 2 days)",0x39);
        local_318 = &DAT_1803e7a40;
        iVar4 = _Mtx_lock(&DAT_1803e7a40);
        if (iVar4 != 0) {
          std::_Throw_Cpp_error(5);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (DAT_1803e7a8c == 0x7fffffff) {
          DAT_1803e7a8c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
        }
        local_3b0[0] = 2;
        uVar7 = FUN_18016d4c0(&local_3a8,&local_2d0);
        ppppwVar12 = DAT_1803edc28;
        if (DAT_1803edc28 == DAT_1803edc30) {
          FUN_180224570(uVar7,DAT_1803edc28,local_3b0);
        }
        else {
          local_410[0] = (wchar_t ***)DAT_1803edc28;
          *(undefined4 *)DAT_1803edc28 = local_3b0[0];
          ppppwVar12[1] = (wchar_t ***)CONCAT71(uStack_3a7,local_3a8);
          ppppwVar12[2] = (wchar_t ***)local_3a0;
          ppppwVar12[3] = (wchar_t ***)local_398;
          ppppwVar12[4] = (wchar_t ***)ppwStack_390;
          local_398 = (wchar_t **)_DAT_1803814b0;
          ppwStack_390 = (wchar_t **)_UNK_1803814b8;
          local_3a8 = 0;
          DAT_1803edc28 = DAT_1803edc28 + 5;
        }
        FUN_18020e450(&local_3a8);
        _Mtx_unlock(&DAT_1803e7a40);
        LOCK();
        DAT_180400b0c = DAT_180400b0c + 1;
        UNLOCK();
        FUN_18020e450(&local_2d0);
      }
    }
    DAT_180400aed = 0;
    FUN_18021c690(&local_2b0);
    FUN_18021c690(&local_298);
    FUN_18021c690(&local_280);
    _eh_vector_destructor_iterator_(local_228,0x30,5,FUN_180151950);
    FUN_18021e290(local_268);
  }
  FUN_18021e290(local_248);
  return;
}


)B180150b90",
    "e31751509134effb76f1d58972cd67baa9ade8cb3522f506530a7672a2627b95",
    R"F180150b90C(FUN_180012ac0
FUN_18001d080
FUN_180066000
FUN_180066720
FUN_180067c80
FUN_18014df00
FUN_18014e3b0
FUN_18014e6f0
FUN_18014e9d0
FUN_18014f070
FUN_18014fa80
FUN_18014fdb0
FUN_180150550
FUN_180151950
FUN_18016d4c0
FUN_18020e450
FUN_18020e540
FUN_180211510
FUN_18021c690
FUN_18021e290
FUN_180224570
FUN_1802d7a0c)F180150b90C",
    R"F180150b90D(DAT_18033bf30
DAT_18033e5ea
DAT_18035eab0
DAT_18035eab8
DAT_18035ef0c
DAT_18035efac
DAT_1803da4c0
DAT_1803e7a40
DAT_1803e7a8c
DAT_1803edc28
DAT_1803edc30
DAT_180400aed
DAT_180400b0c
DAT_180423571)F180150b90D",
    R"F180150b90T(".dll"
"data"
"cache"
"cl.db"
"mn.db"
"sv.db"
"cache/"
"download"
"download/"
"downloads"
"garrysmod"
"downloads/"
"downloadlists"
"downloadlists/"
"%s still holds %s%d file(s)"
"Game folder not found - file checks unavailable"
"Game root reads as a FRESH INSTALL (oldest file < 2 days)"
"lua/bin: %d binary module(s) still there (scored indicator)"
"sv.db still on disk (%llu KB) - deletable only while you are not hosting"
"%d crash dump(s) not cleared - a dump taken while injected lists our module"
"%d fingerprinted file(s) modified in the last 2 days - reads as a reinstall")F180150b90T",
    R"F180150b90F(108: if (local_238 == 0) {
118: else {
184: do {
186: if (0 < iVar3) {
188: if (4999 < iVar3) {
208: if (local_280 != lStack_278) {
225: do {
226: if (DAT_180423571 != '\0') break;
252: if (*piVar8 == 0) {
255: else if (*piVar8 != 1) {
257: if (7 < uStack_2b8) {
262: if (iVar4 == 0) {
266: if ((iVar4 == 0) && (uVar11 != 0)) {
305: if ((cVar2 != '\0') && (lVar16 = local_298, uVar11 = uVar18, local_298 != lStack_290)) {
306: do {
311: if (7 < uStack_2b8) {
319: if (iVar4 != 0) {
325: if (0 < (int)uVar5) {
336: if (iVar4 != 0) {
340: return;
342: if (DAT_1803e7a8c == 0x7fffffff) {
349: if (DAT_1803edc28 == DAT_1803edc30) {
352: else {
375: do {
380: if ((0 < lVar10) && (uVar17 = (ulonglong)((int)uVar11 + 1), 0x2a2ff < _Var9 - lVar10)) {
386: if (0 < (int)uVar17) {
398: if (iVar4 != 0) {
402: return;
404: if (DAT_1803e7a8c == 0x7fffffff) {
411: if (DAT_1803edc28 == DAT_1803edc30) {
414: else {
438: if ((cVar2 != '\0') && (lVar16 = local_2b0, local_2b0 != lStack_2a8)) {
439: do {
441: if ((0 < (longlong)uVar11) && ((uVar18 == 0 || ((longlong)uVar11 < (longlong)uVar18)))) {
446: if ((0 < (longlong)uVar18) && ((longlong)(_Var9 - uVar18) < 0x2a300)) {
454: if (iVar4 != 0) {
458: return;
460: if (DAT_1803e7a8c == 0x7fffffff) {
467: if (DAT_1803edc28 == DAT_1803edc30) {
470: else {
498: return;)F180150b90F",
    R"F180150b90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18033bf30.
TODO: recover the declaration, type and value for global/data reference DAT_18033e5ea.
TODO: recover the declaration, type and value for global/data reference DAT_18035eab0.
TODO: recover the declaration, type and value for global/data reference DAT_18035eab8.
TODO: recover the declaration, type and value for global/data reference DAT_18035ef0c.
TODO: recover the declaration, type and value for global/data reference DAT_18035efac.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7a40.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7a8c.
TODO: recover the declaration, type and value for global/data reference DAT_1803edc28.
TODO: recover the declaration, type and value for global/data reference DAT_1803edc30.
TODO: recover the declaration, type and value for global/data reference DAT_180400aed.
TODO: recover the declaration, type and value for global/data reference DAT_180400b0c.
TODO: recover the declaration, type and value for global/data reference DAT_180423571.
TODO: resolve the indirect call in body 338: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 339: (*pcVar1)();.
TODO: resolve the indirect call in body 400: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 401: (*pcVar1)();.
TODO: resolve the indirect call in body 456: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 457: (*pcVar1)();.)F180150b90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180150b90() noexcept {
    return kFunction_0x180150b90;
}

// 0x180151950 FUN_180151950
// source: re/dump/decompile/0x180151950_FUN_180151950.c
// size: 23 bytes; thunk: false
// body sha256: 33a55e60874a2df1114c714a46272ae5caffe00608a22b9f3d8107c1f718febc
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180151950{
    "0x180151950",
    "FUN_180151950",
    R"F180151950S(undefined FUN_180151950())F180151950S",
    R"B180151950(// 0x180151950  FUN_180151950
// size=23 thunk=false
// signature: undefined FUN_180151950()
// status: ok


void FUN_180151950(void)

{
  FUN_18021e290();
  return;
}


)B180151950",
    "33a55e60874a2df1114c714a46272ae5caffe00608a22b9f3d8107c1f718febc",
    R"F180151950C(FUN_18021e290)F180151950C",
    R"F180151950D()F180151950D",
    R"F180151950T()F180151950T",
    R"F180151950F(11: return;)F180151950F",
    R"F180151950U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180151950U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180151950() noexcept {
    return kFunction_0x180151950;
}

// 0x180151970 FUN_180151970
// source: re/dump/decompile/0x180151970_FUN_180151970.c
// size: 397 bytes; thunk: false
// body sha256: 5f3d47c98c546d0c1a4dbd720c81feafe60ee1f954b05a5e080cdeb9df6730e0
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180151970{
    "0x180151970",
    "FUN_180151970",
    R"F180151970S(undefined FUN_180151970())F180151970S",
    R"B180151970(// 0x180151970  FUN_180151970
// size=397 thunk=false
// signature: undefined FUN_180151970()
// status: ok


/* WARNING: Removing unreachable block (ram,0x000180151ad1) */

void FUN_180151970(void)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *_ArgList;
  uintptr_t uVar4;
  longlong lVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  
  if (DAT_180400aed == '\0') {
    iVar3 = _Mtx_lock(&DAT_1803e7a40);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e7a8c == 0x7fffffff) {
      DAT_1803e7a8c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    lVar2 = DAT_1803edc28;
    lVar5 = DAT_1803edc20;
    if (DAT_1803edc20 != DAT_1803edc28) {
      do {
        FUN_18020e450(lVar5 + 8);
        lVar5 = lVar5 + 0x28;
      } while (lVar5 != lVar2);
      DAT_1803edc28 = DAT_1803edc20;
    }
    _Mtx_unlock(&DAT_1803e7a40);
    DAT_180400b0c = 0;
    DAT_180400aed = '\x01';
    DAT_180400b10 = 1;
    _ArgList = (undefined8 *)FUN_1802d8350(8);
    *_ArgList = FUN_180150b90;
    uVar4 = _beginthreadex((void *)0x0,0,FUN_180220c30,_ArgList,0,(uint *)&uStack_40);
    if (uVar4 != 0) {
      if ((uint)uStack_40 != 0) {
        local_48 = (undefined4)uVar4;
        uStack_44 = (undefined4)(uVar4 >> 0x20);
        local_38 = local_48;
        uStack_34 = uStack_44;
        uStack_30 = (uint)uStack_40;
        uStack_2c = uStack_40._4_4_;
        iVar3 = _Thrd_detach(&local_38);
        if (iVar3 == 0) {
          return;
        }
      }
      std::_Throw_Cpp_error(1);
    }
    uStack_40 = uStack_40 & 0xffffffff00000000;
    std::_Throw_Cpp_error(6);
  }
  return;
}


)B180151970",
    "5f3d47c98c546d0c1a4dbd720c81feafe60ee1f954b05a5e080cdeb9df6730e0",
    R"F180151970C(FUN_180150b90
FUN_18020e450
FUN_180220c30
FUN_1802d8350)F180151970C",
    R"F180151970D(DAT_1803e7a40
DAT_1803e7a8c
DAT_1803edc20
DAT_1803edc28
DAT_180400aed
DAT_180400b0c
DAT_180400b10)F180151970D",
    R"F180151970T()F180151970T",
    R"F180151970F(26: if (DAT_180400aed == '\0') {
28: if (iVar3 != 0) {
32: return;
34: if (DAT_1803e7a8c == 0x7fffffff) {
40: if (DAT_1803edc20 != DAT_1803edc28) {
41: do {
54: if (uVar4 != 0) {
55: if ((uint)uStack_40 != 0) {
63: if (iVar3 == 0) {
64: return;
72: return;)F180151970F",
    R"F180151970U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7a40.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7a8c.
TODO: recover the declaration, type and value for global/data reference DAT_1803edc20.
TODO: recover the declaration, type and value for global/data reference DAT_1803edc28.
TODO: recover the declaration, type and value for global/data reference DAT_180400aed.
TODO: recover the declaration, type and value for global/data reference DAT_180400b0c.
TODO: recover the declaration, type and value for global/data reference DAT_180400b10.
TODO: resolve the indirect call in body 30: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 31: (*pcVar1)();.)F180151970U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180151970() noexcept {
    return kFunction_0x180151970;
}

// 0x180151b00 FUN_180151b00
// source: re/dump/decompile/0x180151b00_FUN_180151b00.c
// size: 1810 bytes; thunk: false
// body sha256: d039d49b0035b8cf6555f9c0867b0b6d34f593d2608c3180eadd801fbbf5dd20
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180151b00{
    "0x180151b00",
    "FUN_180151b00",
    R"F180151b00S(undefined FUN_180151b00())F180151b00S",
    R"B180151b00(// 0x180151b00  FUN_180151b00
// size=1810 thunk=false
// signature: undefined FUN_180151b00()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180151b00(char *param_1)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  size_t sVar5;
  undefined8 ***pppuVar6;
  longlong lVar7;
  char *_Str;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined8 **local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  ulonglong local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 **local_160;
  undefined8 **local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 **local_138;
  longlong local_130;
  longlong lStack_128;
  undefined8 local_120;
  undefined1 local_118 [32];
  undefined1 local_f8 [16];
  longlong local_e8;
  char local_d8 [160];
  ulonglong local_38;
  
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_1d8;
  local_1a8 = 0;
  FUN_18014e3b0(local_f8);
  if (local_e8 == 0) {
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    uStack_168 = 0;
    FUN_18001d080(&local_180,"Game folder not found - file steps skipped",0x2a);
    FUN_18014de20(&local_180);
    FUN_18020e450(&local_180);
    local_1a0 = (undefined8 ***)0x0;
    uStack_198 = 0;
    local_190 = 0;
    local_188 = 0;
    FUN_18001d080(&local_1a0,"Game folder not found",0x15);
    local_160 = (undefined8 **)&DAT_1803e7a40;
    iVar3 = _Mtx_lock(&DAT_1803e7a40);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e7a8c == 0x7fffffff) {
      DAT_1803e7a8c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    pppuVar6 = &local_1a0;
    if (0xf < local_188) {
      pppuVar6 = (undefined8 ***)local_1a0;
    }
    FUN_180212700(&DAT_1803ea218,pppuVar6,local_190);
    _Mtx_unlock(&DAT_1803e7a40);
    FUN_18020e450(&local_1a0);
    DAT_180400b09 = 0;
  }
  else {
    local_160 = &local_1a0;
    local_1a0 = (undefined8 **)0x0;
    uStack_198 = 0;
    local_190 = 0;
    local_188 = 0;
    FUN_180211510(&local_1a0,L"garrysmod",9);
    local_1a8 = 0;
    FUN_180066720(local_118,local_f8,&local_1a0);
    FUN_18021e290(&local_1a0);
    if (*param_1 != '\0') {
      local_160 = &local_1a0;
      local_1a0 = (undefined8 **)0x0;
      uStack_198 = 0;
      local_190 = 0;
      local_188 = 0;
      FUN_180211510(&local_1a0,L"data",4);
      local_1a8 = 0;
      uVar4 = FUN_180066720(&local_180,local_118,&local_1a0);
      FUN_18014eea0(uVar4,&DAT_18035ef0c);
      FUN_18021e290(&local_180);
      FUN_18021e290(&local_1a0);
    }
    if ((param_1[1] != '\0') && (DAT_180423571 == '\0')) {
      local_160 = &local_1a0;
      local_1a0 = (undefined8 **)0x0;
      uStack_198 = 0;
      local_190 = 0;
      local_188 = 0;
      FUN_180211510(&local_1a0,L"download",8);
      local_1a8 = 0;
      uVar4 = FUN_180066720(&local_180,local_118,&local_1a0);
      FUN_18014eea0(uVar4,"download/");
      FUN_18021e290(&local_180);
      FUN_18021e290(&local_1a0);
      local_138 = &local_1a0;
      local_1a0 = (undefined8 **)0x0;
      uStack_198 = 0;
      local_190 = 0;
      local_188 = 0;
      FUN_180211510(&local_1a0,L"downloads",9);
      local_1a8 = 0;
      uVar4 = FUN_180066720(&local_180,local_118,&local_1a0);
      FUN_18014eea0(uVar4,"downloads/");
      FUN_18021e290(&local_180);
      FUN_18021e290(&local_1a0);
      local_158 = &local_1a0;
      local_1a0 = (undefined8 **)0x0;
      uStack_198 = 0;
      local_190 = 0;
      local_188 = 0;
      FUN_180211510(&local_1a0,L"downloadlists",0xd);
      local_1a8 = 0;
      uVar4 = FUN_180066720(&local_180,local_118,&local_1a0);
      FUN_18014eea0(uVar4,"downloadlists/");
      FUN_18021e290(&local_180);
      FUN_18021e290(&local_1a0);
    }
    if ((param_1[2] != '\0') && (DAT_180423571 == '\0')) {
      local_158 = &local_1a0;
      local_1a0 = (undefined8 **)0x0;
      uStack_198 = 0;
      local_190 = 0;
      local_188 = 0;
      FUN_180211510(&local_1a0,L"cache",5);
      local_1a8 = 0;
      uVar4 = FUN_180066720(&local_180,local_118,&local_1a0);
      FUN_18014eea0(uVar4,"cache/");
      FUN_18021e290(&local_180);
      FUN_18021e290(&local_1a0);
    }
    if ((param_1[5] != '\0') && (DAT_180423571 == '\0')) {
      FUN_18014f450(local_118);
    }
    if ((param_1[3] != '\0') && (DAT_180423571 == '\0')) {
      local_130 = 0;
      lStack_128 = 0;
      local_120 = 0;
      FUN_18014f070(local_f8,&local_130);
      lVar2 = lStack_128;
      if (local_130 == lStack_128) {
        local_180 = 0;
        uStack_178 = 0;
        local_170 = 0;
        uStack_168 = 0;
        FUN_18001d080(&local_180,"crash dumps: none",0x11);
        FUN_18014de20(&local_180);
      }
      else {
        local_150 = 0;
        uStack_148 = 0;
        local_140 = 0;
        lVar7 = local_130;
        do {
          FUN_18014eda0(lVar7,&local_150);
          lVar7 = lVar7 + 0x20;
        } while (lVar7 != lVar2);
        local_1b0 = local_140;
        local_1b8 = uStack_148;
        FUN_180012ac0(local_d8,0xa0,"crash dumps: %lld deleted, %lld wiped, %d refused",local_150);
        local_180 = 0;
        uStack_178 = 0;
        local_170 = 0;
        uStack_168 = 0;
        sVar5 = strlen(local_d8);
        FUN_18001d080(&local_180,local_d8,sVar5);
        FUN_18014de20(&local_180);
      }
      FUN_18020e450(&local_180);
      FUN_18021c690(&local_130);
    }
    if ((param_1[4] != '\0') && (DAT_180423571 == '\0')) {
      FUN_18014f780(local_118);
    }
    if (((param_1[7] != '\0') || (param_1[8] != '\0')) && (DAT_180423571 == '\0')) {
      FUN_18014fe90(local_f8,param_1[8]);
    }
    _Str = "Finished - see log";
    if (DAT_180423571 != '\0') {
      _Str = "Stopped (cheat unloading)";
    }
    local_1a0 = (undefined8 ***)0x0;
    uStack_198 = 0;
    local_190 = 0;
    local_188 = 0;
    sVar5 = strlen(_Str);
    FUN_18001d080(&local_1a0,_Str,sVar5);
    local_158 = (undefined8 **)&DAT_1803e7a40;
    iVar3 = _Mtx_lock(&DAT_1803e7a40);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (DAT_1803e7a8c == 0x7fffffff) {
      DAT_1803e7a8c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    pppuVar6 = &local_1a0;
    if (0xf < local_188) {
      pppuVar6 = (undefined8 ***)local_1a0;
    }
    FUN_180212700(&DAT_1803ea218,pppuVar6,local_190);
    _Mtx_unlock(&DAT_1803e7a40);
    FUN_18020e450(&local_1a0);
    DAT_180400b09 = 0;
    if (DAT_180423571 == '\0') {
      FUN_180151970();
    }
    FUN_18021e290(local_118);
  }
  FUN_18021e290(local_f8);
  return;
}


)B180151b00",
    "d039d49b0035b8cf6555f9c0867b0b6d34f593d2608c3180eadd801fbbf5dd20",
    R"F180151b00C(FUN_180012ac0
FUN_18001d080
FUN_180066720
FUN_18014de20
FUN_18014e3b0
FUN_18014eda0
FUN_18014eea0
FUN_18014f070
FUN_18014f450
FUN_18014f780
FUN_18014fe90
FUN_180151970
FUN_18020e450
FUN_180211510
FUN_180212700
FUN_18021c690
FUN_18021e290)F180151b00C",
    R"F180151b00D(DAT_18035ef0c
DAT_1803da4c0
DAT_1803e7a40
DAT_1803e7a8c
DAT_1803ea218
DAT_180400b09
DAT_180423571)F180151b00D",
    R"F180151b00T("data"
"cache"
"cache/"
"download"
"download/"
"downloads"
"garrysmod"
"downloads/"
"downloadlists"
"downloadlists/"
"crash dumps: none"
"Finished - see log"
"Game folder not found"
"Stopped (cheat unloading)"
"Game folder not found - file steps skipped"
"crash dumps: %lld deleted, %lld wiped, %d refused")F180151b00T",
    R"F180151b00F(50: if (local_e8 == 0) {
65: if (iVar3 != 0) {
69: return;
71: if (DAT_1803e7a8c == 0x7fffffff) {
76: if (0xf < local_188) {
84: else {
94: if (*param_1 != '\0') {
107: if ((param_1[1] != '\0') && (DAT_180423571 == '\0')) {
142: if ((param_1[2] != '\0') && (DAT_180423571 == '\0')) {
155: if ((param_1[5] != '\0') && (DAT_180423571 == '\0')) {
158: if ((param_1[3] != '\0') && (DAT_180423571 == '\0')) {
164: if (local_130 == lStack_128) {
172: else {
177: do {
195: if ((param_1[4] != '\0') && (DAT_180423571 == '\0')) {
198: if (((param_1[7] != '\0') || (param_1[8] != '\0')) && (DAT_180423571 == '\0')) {
202: if (DAT_180423571 != '\0') {
213: if (iVar3 != 0) {
217: return;
219: if (DAT_1803e7a8c == 0x7fffffff) {
224: if (0xf < local_188) {
231: if (DAT_180423571 == '\0') {
237: return;)F180151b00F",
    R"F180151b00U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18035ef0c.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7a40.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7a8c.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea218.
TODO: recover the declaration, type and value for global/data reference DAT_180400b09.
TODO: recover the declaration, type and value for global/data reference DAT_180423571.
TODO: resolve the indirect call in body 67: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 68: (*pcVar1)();.
TODO: resolve the indirect call in body 215: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 216: (*pcVar1)();.)F180151b00U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180151b00() noexcept {
    return kFunction_0x180151b00;
}

// 0x180152220 FUN_180152220
// source: re/dump/decompile/0x180152220_FUN_180152220.c
// size: 770 bytes; thunk: false
// body sha256: 6e48b5ee304672a274eadce561936cc3e8101932f67f69731f59605d37808bcd
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180152220{
    "0x180152220",
    "FUN_180152220",
    R"F180152220S(undefined FUN_180152220())F180152220S",
    R"B180152220(// 0x180152220  FUN_180152220
// size=770 thunk=false
// signature: undefined FUN_180152220()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180152220(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  local_20 = 0xd832b224ff481fb5;
  local_28 = 0x93fd561a96ab0c67;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_38,&local_20);
  puVar2 = (undefined1 *)FUN_1801fcfc0(*plVar1 + 0x28);
  local_20 = 0x93fd561a96ab0c67;
  *(undefined1 *)param_1 = *puVar2;
  local_28 = 0xac270287f2c5024e;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_38,&local_20);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_48,&local_28);
  puVar2 = (undefined1 *)FUN_1801fcfc0(*plVar1 + 0x28);
  local_20 = 0x93fd561a96ab0c67;
  *(undefined1 *)((longlong)param_1 + 1) = *puVar2;
  local_28 = 0x43a6f7c65d029735;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_38,&local_20);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_48,&local_28);
  puVar2 = (undefined1 *)FUN_1801fcfc0(*plVar1 + 0x28);
  local_20 = 0x93fd561a96ab0c67;
  *(undefined1 *)((longlong)param_1 + 2) = *puVar2;
  local_28 = 0x6186d1fb21968dcc;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_38,&local_20);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_48,&local_28);
  puVar2 = (undefined1 *)FUN_1801fcfc0(*plVar1 + 0x28);
  local_20 = 0x93fd561a96ab0c67;
  *(undefined1 *)((longlong)param_1 + 3) = *puVar2;
  local_28 = 0x86cb9f2d82c35fea;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_38,&local_20);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_48,&local_28);
  puVar2 = (undefined1 *)FUN_1801fcfc0(*plVar1 + 0x28);
  local_20 = 0x93fd561a96ab0c67;
  *(undefined1 *)((longlong)param_1 + 4) = *puVar2;
  local_28 = 0x3cf66d9a05b1d0f;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_38,&local_20);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_48,&local_28);
  puVar2 = (undefined1 *)FUN_1801fcfc0(*plVar1 + 0x28);
  local_20 = 0x93fd561a96ab0c67;
  *(undefined1 *)((longlong)param_1 + 5) = *puVar2;
  local_28 = 0x2b267962e759b199;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_38,&local_20);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_48,&local_28);
  puVar2 = (undefined1 *)FUN_1801fcfc0(*plVar1 + 0x28);
  local_20 = 0x93fd561a96ab0c67;
  *(undefined1 *)((longlong)param_1 + 6) = *puVar2;
  local_28 = 0x2b9c41c0c35bbc7b;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_38,&local_20);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_48,&local_28);
  puVar2 = (undefined1 *)FUN_1801fcfc0(*plVar1 + 0x28);
  local_20 = 0x93fd561a96ab0c67;
  *(undefined1 *)((longlong)param_1 + 7) = *puVar2;
  local_28 = 0xcd094b38bca069c4;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_38,&local_20);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_48,&local_28);
  puVar2 = (undefined1 *)FUN_1801fcfc0(*plVar1 + 0x28);
  *(undefined1 *)(param_1 + 1) = *puVar2;
  return param_1;
}


)B180152220",
    "6e48b5ee304672a274eadce561936cc3e8101932f67f69731f59605d37808bcd",
    R"F180152220C(FUN_1801fcfc0
FUN_180241a30)F180152220C",
    R"F180152220D(DAT_1803da4c0
DAT_1803fadf0)F180152220D",
    R"F180152220T()F180152220T",
    R"F180152220F(78: return param_1;)F180152220F",
    R"F180152220U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.)F180152220U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180152220() noexcept {
    return kFunction_0x180152220;
}

// 0x180152530 FUN_180152530
// source: re/dump/decompile/0x180152530_FUN_180152530.c
// size: 729 bytes; thunk: false
// body sha256: 5df19f329c7898fd6a3c46542dffaa278dc0ea113b816c7b19ec477d21143a79
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180152530{
    "0x180152530",
    "FUN_180152530",
    R"F180152530S(undefined FUN_180152530())F180152530S",
    R"B180152530(// 0x180152530  FUN_180152530
// size=729 thunk=false
// signature: undefined FUN_180152530()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180152530(undefined8 *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 **ppuVar6;
  longlong lVar7;
  undefined8 ***pppuVar8;
  ulonglong uVar9;
  undefined8 **ppuVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined2 *_Src;
  undefined8 ***pppuVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 ***pppuVar16;
  longlong lVar17;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [48];
  undefined4 local_98;
  undefined8 **local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined8 *local_70;
  undefined8 **local_68 [2];
  undefined8 **local_58;
  undefined8 **local_50;
  ulonglong local_48;
  
  puVar15 = auStack_c8;
  puVar14 = auStack_c8;
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_c8;
  pppuVar13 = (undefined8 ***)0x0;
  local_98 = 0;
  local_70 = param_1;
  FUN_180065930(param_2,local_68);
  pppuVar16 = pppuVar13;
  while( true ) {
    pppuVar8 = local_68;
    if ((undefined8 ***)0x7 < local_50) {
      pppuVar8 = (undefined8 ***)local_68[0];
    }
    if (local_58 <= pppuVar16) break;
    lVar17 = (longlong)pppuVar8 + (longlong)local_58 * 2;
    lVar7 = thunk_FUN_1802d5d20((longlong)pppuVar8 + (longlong)pppuVar16 * 2,lVar17,0x27);
    if ((lVar7 == lVar17) ||
       (pppuVar16 = (undefined8 ***)(lVar7 - (longlong)pppuVar8 >> 1),
       pppuVar16 == (undefined8 ***)0xffffffffffffffff)) break;
    if (local_58 < pppuVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_18022ec00();
    }
    if (local_50 == local_58) {
      FUN_18021a5c0(local_68);
      pppuVar16 = (undefined8 ***)((longlong)pppuVar16 + 2);
    }
    else {
      pppuVar8 = local_68;
      if ((undefined8 ***)0x7 < local_50) {
        pppuVar8 = (undefined8 ***)local_68[0];
      }
      _Src = (undefined2 *)((longlong)pppuVar8 + (longlong)pppuVar16 * 2);
      lVar17 = (longlong)local_58 - (longlong)pppuVar16;
      local_58 = (undefined8 ***)((longlong)local_58 + 1);
      memmove(_Src + 1,_Src,lVar17 * 2 + 2);
      lVar17 = 1;
      do {
        *_Src = 0x27;
        _Src = _Src + 1;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      pppuVar16 = (undefined8 ***)((longlong)pppuVar16 + 2);
    }
  }
  ppuVar6 = local_58;
  if ((undefined8 ***)local_58 == (undefined8 ***)0x7ffffffffffffffe) {
                    /* WARNING: Subroutine does not return */
    FUN_1800130a0();
  }
  pppuVar16 = local_68;
  if ((undefined8 ***)0x7 < local_50) {
    pppuVar16 = (undefined8 ***)local_68[0];
  }
  local_90 = (undefined8 ***)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uVar1 = (longlong)local_58 + 1;
  if (uVar1 < 8) {
    uVar9 = 7;
    pppuVar13 = &local_90;
  }
  else {
    uVar9 = uVar1 | 7;
    if (uVar9 < 0x7fffffffffffffff) goto LAB_1801526d2;
    uVar12 = 0xfffffffffffffffe;
    puVar15 = auStack_c8;
    uVar9 = 0x7ffffffffffffffe;
    do {
      if (uVar12 < 0x1000) {
        *(undefined8 *)(puVar15 + -8) = 0x18015271d;
        pppuVar13 = (undefined8 ***)FUN_1802d8350();
        local_90 = pppuVar13;
        goto LAB_18015272f;
      }
      puVar14 = puVar15;
      if (uVar12 + 0x27 <= uVar12) {
LAB_1801527fa:
                    /* WARNING: Subroutine does not return */
        *(undefined8 *)(puVar14 + -8) = 0x1801527ff;
        FUN_180012fe0();
      }
      *(undefined8 *)(puVar15 + -8) = 0x1801526c6;
      ppuVar10 = (undefined8 **)FUN_1802d8350(uVar12 + 0x27);
      if (ppuVar10 != (undefined8 **)0x0) {
        pppuVar13 = (undefined8 ***)((longlong)ppuVar10 + 0x27U & 0xffffffffffffffe0);
        pppuVar13[-1] = ppuVar10;
        local_90 = pppuVar13;
        goto LAB_18015272f;
      }
      pcVar2 = (code *)swi(0x29);
      uVar9 = (*pcVar2)(5);
      puVar14 = puVar15 + 8;
LAB_1801526d2:
      if (uVar9 < 10) {
        uVar9 = 10;
      }
      if (0x7fffffffffffffff < uVar9 + 1) goto LAB_1801527fa;
      uVar12 = (uVar9 + 1) * 2;
      puVar15 = puVar14;
    } while (uVar12 != 0);
    local_90 = (undefined8 ***)0x0;
  }
LAB_18015272f:
  local_80 = uVar1;
  local_78 = uVar9;
  *(short *)pppuVar13 = (short)DAT_18035f1bc;
  *(undefined8 *)(puVar15 + -8) = 0x180152750;
  memcpy((undefined2 *)((longlong)pppuVar13 + 2),pppuVar16,(longlong)ppuVar6 * 2);
  *(undefined2 *)((longlong)pppuVar13 + uVar1 * 2) = 0;
  local_98 = 4;
  *(undefined8 *)(puVar15 + -8) = 0x180152772;
  puVar11 = (undefined4 *)FUN_180211740(&local_90,&DAT_18035f1bc,1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar3 = puVar11[1];
  uVar4 = puVar11[2];
  uVar5 = puVar11[3];
  *(undefined4 *)param_1 = *puVar11;
  *(undefined4 *)((longlong)param_1 + 4) = uVar3;
  *(undefined4 *)(param_1 + 1) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  uVar3 = puVar11[5];
  uVar4 = puVar11[6];
  uVar5 = puVar11[7];
  *(undefined4 *)(param_1 + 2) = puVar11[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *(undefined8 *)(puVar11 + 4) = 0;
  *(undefined8 *)(puVar11 + 6) = 7;
  *(undefined2 *)puVar11 = 0;
  local_98 = 1;
  *(undefined8 *)(puVar15 + -8) = 0x1801527c6;
  FUN_18021e290(&local_90);
  *(undefined8 *)(puVar15 + -8) = 0x1801527d0;
  FUN_18021e290(local_68);
  *(undefined8 *)(puVar15 + -8) = 0x1801527df;
  return param_1;
}


)B180152530",
    "5df19f329c7898fd6a3c46542dffaa278dc0ea113b816c7b19ec477d21143a79",
    R"F180152530C(FUN_180012fe0
FUN_1800130a0
FUN_180065930
FUN_180211740
FUN_18021a5c0
FUN_18021e290
FUN_18022ec00
FUN_1802d8350)F180152530C",
    R"F180152530D(LAB_1801526d2
LAB_18015272f
LAB_1801527fa
DAT_18035f1bc
DAT_1803da4c0)F180152530D",
    R"F180152530T()F180152530T",
    R"F180152530F(51: while( true ) {
53: if ((undefined8 ***)0x7 < local_50) {
56: if (local_58 <= pppuVar16) break;
59: if ((lVar7 == lVar17) ||
62: if (local_58 < pppuVar16) {
66: if (local_50 == local_58) {
70: else {
72: if ((undefined8 ***)0x7 < local_50) {
80: do {
89: if ((undefined8 ***)local_58 == (undefined8 ***)0x7ffffffffffffffe) {
94: if ((undefined8 ***)0x7 < local_50) {
102: if (uVar1 < 8) {
106: else {
108: if (uVar9 < 0x7fffffffffffffff) goto LAB_1801526d2;
112: do {
113: if (uVar12 < 0x1000) {
117: goto LAB_18015272f;
120: if (uVar12 + 0x27 <= uVar12) {
121: LAB_1801527fa:
128: if (ppuVar10 != (undefined8 **)0x0) {
132: goto LAB_18015272f;
137: LAB_1801526d2:
138: if (uVar9 < 10) {
141: if (0x7fffffffffffffff < uVar9 + 1) goto LAB_1801527fa;
147: LAB_18015272f:
184: return param_1;)F180152530F",
    R"F180152530U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1801526d2.
TODO: recover the declaration, type and value for global/data reference LAB_18015272f.
TODO: recover the declaration, type and value for global/data reference LAB_1801527fa.
TODO: recover the declaration, type and value for global/data reference DAT_18035f1bc.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: resolve the indirect call in body 134: pcVar2 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 135: uVar9 = (*pcVar2)(5);.)F180152530U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180152530() noexcept {
    return kFunction_0x180152530;
}

// 0x180152810 FUN_180152810
// source: re/dump/decompile/0x180152810_FUN_180152810.c
// size: 638 bytes; thunk: false
// body sha256: 64f1c8cf929798691c9967302b48406477f303b017d9dc8b7b8e2966fb8b8b67
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180152810{
    "0x180152810",
    "FUN_180152810",
    R"F180152810S(undefined FUN_180152810())F180152810S",
    R"B180152810(// 0x180152810  FUN_180152810
// size=638 thunk=false
// signature: undefined FUN_180152810()
// status: ok


longlong *
FUN_180152810(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  wchar_t wVar7;
  undefined8 *puVar8;
  
  puVar8 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar8 = (undefined8 *)*param_2;
  }
  uVar3 = param_2[2] * 2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 7;
  *(undefined2 *)param_1 = 0;
  uVar4 = ((uVar3 + 2) / 3) * 4;
  if ((ulonglong)param_1[3] < uVar4) {
    lVar1 = param_1[2];
    FUN_18021a2e0(param_1,uVar4 - lVar1,param_3,param_4,1,param_1);
    param_1[2] = lVar1;
  }
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      if (uVar4 + 1 < uVar3) {
        uVar5 = (ulonglong)*(byte *)((longlong)puVar8 + uVar4 + 1);
      }
      else {
        uVar5 = 0;
      }
      if (uVar4 + 2 < uVar3) {
        uVar6 = (ulonglong)*(byte *)((longlong)puVar8 + uVar4 + 2);
      }
      else {
        uVar6 = 0;
      }
      uVar5 = (ulonglong)*(byte *)((longlong)puVar8 + uVar4) << 8 | uVar5;
      uVar6 = uVar5 << 8 | uVar6;
      wVar7 = L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
              [*(byte *)((longlong)puVar8 + uVar4) >> 2];
      uVar2 = param_1[2];
      if (uVar2 < (ulonglong)param_1[3]) {
        param_1[2] = uVar2 + 1;
        if ((ulonglong)param_1[3] < 8) {
          *(wchar_t *)((longlong)param_1 + uVar2 * 2) = wVar7;
          *(undefined2 *)((longlong)param_1 + uVar2 * 2 + 2) = 0;
        }
        else {
          lVar1 = *param_1;
          *(wchar_t *)(lVar1 + uVar2 * 2) = wVar7;
          *(undefined2 *)(lVar1 + 2 + uVar2 * 2) = 0;
        }
      }
      else {
        FUN_18021a440(param_1);
      }
      wVar7 = L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
              [(uint)(uVar5 >> 4) & 0x3f];
      uVar5 = param_1[2];
      if (uVar5 < (ulonglong)param_1[3]) {
        param_1[2] = uVar5 + 1;
        if ((ulonglong)param_1[3] < 8) {
          *(wchar_t *)((longlong)param_1 + uVar5 * 2) = wVar7;
          *(undefined2 *)((longlong)param_1 + uVar5 * 2 + 2) = 0;
        }
        else {
          lVar1 = *param_1;
          *(wchar_t *)(lVar1 + uVar5 * 2) = wVar7;
          *(undefined2 *)(lVar1 + 2 + uVar5 * 2) = 0;
        }
      }
      else {
        FUN_18021a440(param_1);
      }
      if (uVar4 + 1 < uVar3) {
        wVar7 = L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [(uint)(uVar6 >> 6) & 0x3f];
      }
      else {
        wVar7 = L'=';
      }
      uVar5 = param_1[2];
      if (uVar5 < (ulonglong)param_1[3]) {
        param_1[2] = uVar5 + 1;
        if ((ulonglong)param_1[3] < 8) {
          *(wchar_t *)((longlong)param_1 + uVar5 * 2) = wVar7;
          *(undefined2 *)((longlong)param_1 + uVar5 * 2 + 2) = 0;
        }
        else {
          lVar1 = *param_1;
          *(wchar_t *)(lVar1 + uVar5 * 2) = wVar7;
          *(undefined2 *)(lVar1 + 2 + uVar5 * 2) = 0;
        }
      }
      else {
        FUN_18021a440(param_1);
      }
      if (uVar4 + 2 < uVar3) {
        wVar7 = L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
                [(uint)uVar6 & 0x3f];
      }
      else {
        wVar7 = L'=';
      }
      uVar5 = param_1[2];
      if (uVar5 < (ulonglong)param_1[3]) {
        param_1[2] = uVar5 + 1;
        if ((ulonglong)param_1[3] < 8) {
          *(wchar_t *)((longlong)param_1 + uVar5 * 2) = wVar7;
          *(undefined2 *)((longlong)param_1 + uVar5 * 2 + 2) = 0;
        }
        else {
          lVar1 = *param_1;
          *(wchar_t *)(lVar1 + uVar5 * 2) = wVar7;
          *(undefined2 *)(lVar1 + 2 + uVar5 * 2) = 0;
        }
      }
      else {
        FUN_18021a440();
      }
      uVar4 = uVar4 + 3;
    } while (uVar4 < uVar3);
  }
  return param_1;
}


)B180152810",
    "64f1c8cf929798691c9967302b48406477f303b017d9dc8b7b8e2966fb8b8b67",
    R"F180152810C(FUN_18021a2e0
FUN_18021a440)F180152810C",
    R"F180152810D()F180152810D",
    R"F180152810T("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/")F180152810T",
    R"F180152810F(21: if (7 < (ulonglong)param_2[3]) {
31: if ((ulonglong)param_1[3] < uVar4) {
37: if (uVar3 != 0) {
38: do {
39: if (uVar4 + 1 < uVar3) {
42: else {
45: if (uVar4 + 2 < uVar3) {
48: else {
56: if (uVar2 < (ulonglong)param_1[3]) {
58: if ((ulonglong)param_1[3] < 8) {
62: else {
68: else {
74: if (uVar5 < (ulonglong)param_1[3]) {
76: if ((ulonglong)param_1[3] < 8) {
80: else {
86: else {
89: if (uVar4 + 1 < uVar3) {
93: else {
97: if (uVar5 < (ulonglong)param_1[3]) {
99: if ((ulonglong)param_1[3] < 8) {
103: else {
109: else {
112: if (uVar4 + 2 < uVar3) {
116: else {
120: if (uVar5 < (ulonglong)param_1[3]) {
122: if ((ulonglong)param_1[3] < 8) {
126: else {
132: else {
138: return param_1;)F180152810F",
    R"F180152810U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.)F180152810U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180152810() noexcept {
    return kFunction_0x180152810;
}

// 0x180152a90 FUN_180152a90
// source: re/dump/decompile/0x180152a90_FUN_180152a90.c
// size: 4394 bytes; thunk: false
// body sha256: 55fb624670d986135f0a874a34c1c61265d5fd436c464089449445d5f27a907c
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180152a90{
    "0x180152a90",
    "FUN_180152a90",
    R"F180152a90S(undefined FUN_180152a90())F180152a90S",
    R"B180152a90(// 0x180152a90  FUN_180152a90
// size=4394 thunk=false
// signature: undefined FUN_180152a90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180152a90(undefined8 *param_1,byte param_2,undefined8 *param_3)

{
  wchar_t *_Str;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  size_t sVar11;
  uint *puVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  wchar_t **ppwVar15;
  undefined4 uVar16;
  wchar_t **ppwVar17;
  undefined1 auStack_348 [32];
  undefined4 local_328;
  undefined4 local_324;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 *local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 *local_2d8;
  wchar_t *local_2d0 [3];
  wchar_t *local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  uint local_298;
  uint uStack_294;
  uint uStack_290;
  uint uStack_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  wchar_t *local_278 [4];
  wchar_t *local_258 [4];
  undefined1 local_238 [32];
  uint local_218;
  uint uStack_214;
  uint uStack_210;
  uint uStack_20c;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined1 local_1b0 [32];
  undefined1 local_190 [32];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  longlong local_150;
  undefined8 *puStack_148;
  undefined8 *local_140;
  undefined1 local_138 [32];
  ulonglong local_118 [4];
  undefined1 local_f8 [32];
  ulonglong local_d8 [4];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58 [4];
  
  local_58[0] = DAT_1803da4c0 ^ (ulonglong)auStack_348;
  local_328 = 0;
  local_324 = 0;
  local_300 = &local_320;
  local_320 = 0;
  uStack_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_2d8 = param_3;
  local_1d8 = param_1;
  FUN_180211510(&local_320,L"garrysmod",9);
  local_328 = 0;
  FUN_180066720(local_138,param_3,&local_320);
  FUN_18021e290(&local_320);
  DVar6 = GetCurrentProcessId();
  FUN_1801fc020(local_1b0,DVar6);
  local_328 = 0x1000000;
  puVar7 = (undefined8 *)FUN_180211640(local_1b0);
  local_2b8 = (wchar_t *)*puVar7;
  uStack_2b0 = puVar7[1];
  local_2a8 = puVar7[2];
  uStack_2a0 = puVar7[3];
  *(undefined2 *)puVar7 = 0;
  puVar7[2] = 0;
  puVar7[3] = 7;
  local_328 = 0x3000000;
  puVar8 = (undefined4 *)
           FUN_180211740(&local_2b8,
                         L" -ErrorAction SilentlyContinue;if($p){$p.WaitForExit()}}catch{};Start-Sleep -Milliseconds 750;"
                         ,0x5e);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar16 = puVar8[1];
  uVar1 = puVar8[2];
  uVar2 = puVar8[3];
  *(undefined4 *)param_1 = *puVar8;
  *(undefined4 *)((longlong)param_1 + 4) = uVar16;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar2;
  uVar16 = puVar8[5];
  uVar1 = puVar8[6];
  uVar2 = puVar8[7];
  *(undefined4 *)(param_1 + 2) = puVar8[4];
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar16;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined2 *)puVar8 = 0;
  *(undefined8 *)(puVar8 + 4) = 0;
  *(undefined8 *)(puVar8 + 6) = 7;
  local_328 = 0x1000001;
  FUN_18021e290(&local_2b8);
  local_328 = 1;
  FUN_18021e290(local_1b0);
  if ((param_2 & 1) != 0) {
    local_300 = &local_320;
    local_320 = 0;
    uStack_318 = 0;
    local_310 = 0;
    local_308 = 0;
    FUN_180211510(&local_320,L"data",4);
    local_328 = 1;
    uVar9 = FUN_180066720(&local_2f8,local_138,&local_320);
    FUN_180211740(param_1,L"Get-ChildItem -LiteralPath ",0x1b);
    puVar10 = (undefined8 *)FUN_180152530(&local_170,uVar9);
    puVar7 = puVar10 + 2;
    if (7 < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_180211740(param_1,puVar10,*puVar7);
    FUN_18021e290(&local_170);
    FUN_180211740(param_1,
                  L" -Force -ErrorAction SilentlyContinue|Remove-Item -Recurse -Force -ErrorAction SilentlyContinue;"
                  ,0x60);
    FUN_18021e290(&local_2f8);
    FUN_18021e290(&local_320);
  }
  if ((param_2 & 2) != 0) {
    local_300 = &local_320;
    local_320 = 0;
    uStack_318 = 0;
    local_310 = 0;
    local_308 = 0;
    FUN_180211510(&local_320,L"download",8);
    local_324 = 0;
    uVar9 = FUN_180066720(&local_2f8,local_138,&local_320);
    FUN_180211740(param_1,L"Get-ChildItem -LiteralPath ",0x1b);
    puVar10 = (undefined8 *)FUN_180152530(&local_170,uVar9);
    puVar7 = puVar10 + 2;
    if (7 < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_180211740(param_1,puVar10,*puVar7);
    FUN_18021e290(&local_170);
    FUN_180211740(param_1,
                  L" -Force -ErrorAction SilentlyContinue|Remove-Item -Recurse -Force -ErrorAction SilentlyContinue;"
                  ,0x60);
    FUN_18021e290(&local_2f8);
    FUN_18021e290(&local_320);
    local_300 = &local_320;
    local_320 = 0;
    uStack_318 = 0;
    local_310 = 0;
    local_308 = 0;
    FUN_180211510(&local_320,L"downloads",9);
    local_324 = 0;
    local_328 = 1;
    uVar9 = FUN_180066720(&local_2f8,local_138,&local_320);
    FUN_180211740(param_1,L"Get-ChildItem -LiteralPath ",0x1b);
    puVar10 = (undefined8 *)FUN_180152530(&local_170,uVar9);
    puVar7 = puVar10 + 2;
    if (7 < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_180211740(param_1,puVar10,*puVar7);
    FUN_18021e290(&local_170);
    FUN_180211740(param_1,
                  L" -Force -ErrorAction SilentlyContinue|Remove-Item -Recurse -Force -ErrorAction SilentlyContinue;"
                  ,0x60);
    FUN_18021e290(&local_2f8);
    FUN_18021e290(&local_320);
    local_300 = &local_320;
    local_320 = 0;
    uStack_318 = 0;
    local_310 = 0;
    local_308 = 0;
    FUN_180211510(&local_320,L"downloadlists",0xd);
    local_328 = 1;
    uVar9 = FUN_180066720(&local_2f8,local_138,&local_320);
    FUN_180211740(param_1,L"Get-ChildItem -LiteralPath ",0x1b);
    puVar10 = (undefined8 *)FUN_180152530(&local_170,uVar9);
    puVar7 = puVar10 + 2;
    if (7 < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_180211740(param_1,puVar10,*puVar7);
    FUN_18021e290(&local_170);
    FUN_180211740(param_1,
                  L" -Force -ErrorAction SilentlyContinue|Remove-Item -Recurse -Force -ErrorAction SilentlyContinue;"
                  ,0x60);
    FUN_18021e290(&local_2f8);
    FUN_18021e290(&local_320);
  }
  uVar16 = 1;
  if ((param_2 & 4) != 0) {
    local_300 = &local_320;
    local_320 = 0;
    uStack_318 = 0;
    local_310 = 0;
    local_308 = 0;
    FUN_180211510(&local_320,L"cache",5);
    local_324 = 0;
    uVar9 = FUN_180066720(&local_2f8,local_138,&local_320);
    FUN_180211740(param_1,L"Get-ChildItem -LiteralPath ",0x1b);
    puVar10 = (undefined8 *)FUN_180152530(&local_170,uVar9);
    puVar7 = puVar10 + 2;
    if (7 < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_180211740(param_1,puVar10,*puVar7);
    FUN_18021e290(&local_170);
    FUN_180211740(param_1,
                  L" -Force -ErrorAction SilentlyContinue|Remove-Item -Recurse -Force -ErrorAction SilentlyContinue;"
                  ,0x60);
    FUN_18021e290(&local_2f8);
    FUN_18021e290(&local_320);
  }
  uVar5 = _UNK_1803814a8;
  uVar9 = _DAT_1803814a0;
  if ((param_2 & 0x20) != 0) {
    local_2d0[0] = L"sv.db";
    local_2d0[1] = L"cl.db";
    local_2d0[2] = L"mn.db";
    local_278[0] = L"";
    local_278[1] = L"-journal";
    local_278[2] = L"-wal";
    local_278[3] = L"-shm";
    local_150 = 0;
    puStack_148 = (undefined8 *)0x0;
    local_140 = (undefined8 *)0x0;
    ppwVar17 = local_2d0;
    do {
      _Str = *ppwVar17;
      ppwVar15 = local_278;
      do {
        local_1f8 = 0;
        uStack_1f0 = 0;
        local_1e8 = 0;
        uStack_1e0 = 0;
        sVar11 = wcslen(_Str);
        FUN_180211510(&local_1f8,_Str,sVar11);
        sVar11 = wcslen(*ppwVar15);
        puVar12 = (uint *)FUN_180211740(&local_1f8,*ppwVar15,sVar11);
        local_218 = *puVar12;
        uStack_294 = puVar12[1];
        uStack_290 = puVar12[2];
        uStack_28c = puVar12[3];
        local_208 = *(undefined8 *)(puVar12 + 4);
        uStack_200 = *(undefined8 *)(puVar12 + 6);
        uVar13 = 0;
        *(undefined2 *)puVar12 = 0;
        puVar12[4] = 0;
        puVar12[5] = 0;
        puVar12[6] = 7;
        puVar12[7] = 0;
        local_328 = 3;
        local_288 = uVar9;
        uStack_280 = uVar5;
        local_298 = local_218 & 0xffff0000;
        uStack_214 = uStack_294;
        uStack_210 = uStack_290;
        uStack_20c = uStack_28c;
        puVar8 = (undefined4 *)FUN_180066720(local_190,local_138,&local_218);
        if (puStack_148 == local_140) {
          FUN_180224130(&local_150,puStack_148,puVar8);
        }
        else {
          local_300 = puStack_148;
          *puStack_148 = 0;
          puStack_148[1] = 0;
          puStack_148[2] = 0;
          puStack_148[3] = 0;
          uVar1 = puVar8[1];
          uVar2 = puVar8[2];
          uVar3 = puVar8[3];
          *(undefined4 *)puStack_148 = *puVar8;
          *(undefined4 *)((longlong)puStack_148 + 4) = uVar1;
          *(undefined4 *)(puStack_148 + 1) = uVar2;
          *(undefined4 *)((longlong)puStack_148 + 0xc) = uVar3;
          uVar4 = *(undefined8 *)(puVar8 + 6);
          puStack_148[2] = *(undefined8 *)(puVar8 + 4);
          puStack_148[3] = uVar4;
          *(undefined2 *)puVar8 = 0;
          *(undefined8 *)(puVar8 + 4) = 0;
          *(undefined8 *)(puVar8 + 6) = 7;
          puStack_148 = puStack_148 + 4;
        }
        FUN_18021e290(local_190);
        FUN_18021e290(&local_218);
        local_328 = uVar16;
        FUN_18021e290(&local_298);
        FUN_18021e290(&local_1f8);
        ppwVar15 = ppwVar15 + 1;
      } while (ppwVar15 != local_258);
      ppwVar17 = ppwVar17 + 1;
    } while (ppwVar17 != &local_2b8);
    FUN_180211740(param_1,L"$delete=@(",10);
    if ((longlong)puStack_148 - local_150 >> 5 != 0) {
      do {
        if (uVar13 != 0) {
          FUN_180211740(param_1,&DAT_18035f1d8,1);
        }
        puVar10 = (undefined8 *)FUN_180152530(&local_170,uVar13 * 0x20 + local_150);
        puVar7 = puVar10 + 2;
        if (7 < (ulonglong)puVar10[3]) {
          puVar10 = (undefined8 *)*puVar10;
        }
        FUN_180211740(param_1,puVar10,*puVar7);
        FUN_18021e290(&local_170);
        uVar13 = uVar13 + 1;
      } while (uVar13 < (ulonglong)((longlong)puStack_148 - local_150 >> 5));
    }
    FUN_180211740(param_1,
                  L");for($n=0;$n -lt 40;$n++){foreach($f in $delete){Remove-Item -LiteralPath $f -Force -ErrorAction SilentlyContinue};$left=@($delete|Where-Object{Test-Path -LiteralPath $_});if($left.Count -eq 0){break};Start-Sleep -Milliseconds 250};"
                  ,0xe9);
    FUN_18021c690(&local_150);
    param_3 = local_2d8;
  }
  if ((param_2 & 8) != 0) {
    local_300 = &local_320;
    local_320 = 0;
    uStack_318 = 0;
    local_310 = 0;
    local_308 = 0;
    FUN_180211510(&local_320,L"crashes",7);
    local_328 = uVar16;
    uVar9 = FUN_180066720(&local_2f8,local_138,&local_320);
    FUN_180211740(param_1,L"Get-ChildItem -LiteralPath ",0x1b);
    puVar10 = (undefined8 *)FUN_180152530(&local_170,uVar9);
    puVar7 = puVar10 + 2;
    if (7 < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_180211740(param_1,puVar10,*puVar7);
    FUN_18021e290(&local_170);
    FUN_180211740(param_1,
                  L" -Force -ErrorAction SilentlyContinue|Remove-Item -Recurse -Force -ErrorAction SilentlyContinue;"
                  ,0x60);
    FUN_18021e290(&local_2f8);
    FUN_18021e290(&local_320);
    local_300 = &local_320;
    local_320 = 0;
    uStack_318 = 0;
    local_310 = 0;
    local_308 = 0;
    FUN_180211510(&local_320,L"crashes",7);
    local_328 = uVar16;
    uVar9 = FUN_180066720(&local_2f8,param_3,&local_320);
    FUN_180211740(param_1,L"Get-ChildItem -LiteralPath ",0x1b);
    puVar10 = (undefined8 *)FUN_180152530(&local_170,uVar9);
    puVar7 = puVar10 + 2;
    if (7 < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_180211740(param_1,puVar10,*puVar7);
    FUN_18021e290(&local_170);
    FUN_180211740(param_1,
                  L" -Force -ErrorAction SilentlyContinue|Remove-Item -Recurse -Force -ErrorAction SilentlyContinue;"
                  ,0x60);
    FUN_18021e290(&local_2f8);
    FUN_18021e290(&local_320);
    FUN_18020e540(local_118,param_3);
    FUN_18020e540(local_f8,local_138);
    puVar14 = local_118;
    do {
      FUN_180211740(param_1,L"Get-ChildItem -LiteralPath ",0x1b);
      puVar10 = (undefined8 *)FUN_180152530(&local_170,puVar14);
      puVar7 = puVar10 + 2;
      if (7 < (ulonglong)puVar10[3]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      FUN_180211740(param_1,puVar10,*puVar7);
      FUN_18021e290(&local_170);
      FUN_180211740(param_1,
                    L" -File -Force -ErrorAction SilentlyContinue|Where-Object{$_.Extension -in \'.dmp\',\'.mdmp\'}|Remove-Item -Force -ErrorAction SilentlyContinue;"
                    ,0x8b);
      puVar14 = puVar14 + 4;
    } while (puVar14 != local_d8);
    _eh_vector_destructor_iterator_(local_118,0x20,2,FUN_1800668e0);
  }
  if ((param_2 & 0x10) != 0) {
    local_300 = &local_2f8;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_2e8 = 0;
    local_2e0 = 0;
    FUN_180211510(&local_2f8,&DAT_18035eab0,3);
    local_2d8 = &local_320;
    local_320 = 0;
    uStack_318 = 0;
    local_310 = 0;
    local_308 = 0;
    local_328 = uVar16;
    FUN_180211510(&local_320,&DAT_18035eab8,3);
    local_328 = uVar16;
    uVar9 = FUN_180066720(local_258,local_138,&local_320);
    FUN_180066720(&local_170,uVar9,&local_2f8);
    FUN_18021e290(local_258);
    FUN_18021e290(&local_320);
    FUN_18021e290(&local_2f8);
    FUN_180211740(param_1,L"Get-ChildItem -LiteralPath ",0x1b);
    puVar10 = (undefined8 *)FUN_180152530(local_258,&local_170);
    puVar7 = puVar10 + 2;
    if (7 < (ulonglong)puVar10[3]) {
      puVar10 = (undefined8 *)*puVar10;
    }
    FUN_180211740(param_1,puVar10,*puVar7);
    FUN_18021e290(local_258);
    FUN_180211740(param_1,
                  L" -Filter \'*.dll\' -File -Force -ErrorAction SilentlyContinue|ForEach-Object{Rename-Item -LiteralPath $_.FullName -NewName ($_.Name+\'.disabled\') -Force -ErrorAction SilentlyContinue};"
                  ,0xb5);
    FUN_18021e290(&local_170);
  }
  if ((param_2 & 0xc0) != 0) {
    FUN_180211740(param_1,L"$stamp=(Get-Date).AddDays(-(Get-Random -Minimum 150 -Maximum 901));",
                  0x43);
    local_300 = &local_2f8;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_2e8 = 0;
    local_2e0 = 0;
    FUN_180211510(&local_2f8,L"gameinfo.txt",0xc);
    local_328 = uVar16;
    FUN_180066720(local_d8,local_138,&local_2f8);
    FUN_18021e290(&local_2f8);
    local_2d8 = &local_170;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    local_158 = 0;
    FUN_180211510(&local_170,L"base_vehicles.lua",0x11);
    local_1d0 = &local_320;
    local_320 = 0;
    uStack_318 = 0;
    local_310 = 0;
    local_308 = 0;
    local_328 = uVar16;
    FUN_180211510(&local_320,L"autorun",7);
    local_1c8 = &local_2f8;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_2e8 = 0;
    local_2e0 = 0;
    local_328 = uVar16;
    FUN_180211510(&local_2f8,&DAT_18035eab8,3);
    local_328 = uVar16;
    uVar9 = FUN_180066720(local_238,local_138,&local_2f8);
    uVar9 = FUN_180066720(local_258,uVar9,&local_320);
    FUN_180066720(local_b8,uVar9,&local_170);
    FUN_18021e290(local_258);
    FUN_18021e290(local_238);
    FUN_18021e290(&local_2f8);
    FUN_18021e290(&local_320);
    FUN_18021e290(&local_170);
    local_1c0 = &local_170;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    local_158 = 0;
    FUN_180211510(&local_170,L"lights.rad",10);
    local_328 = uVar16;
    FUN_180066720(local_98,local_138,&local_170);
    FUN_18021e290(&local_170);
    local_1b8 = &local_170;
    local_170 = 0;
    uStack_168 = 0;
    local_160 = 0;
    local_158 = 0;
    FUN_180211510(&local_170,L"sourceengine",0xc);
    local_328 = uVar16;
    FUN_180066720(local_78,param_3,&local_170);
    FUN_18021e290(&local_170);
    puVar14 = local_d8;
    do {
      FUN_180211740(param_1,L"$i=Get-Item -LiteralPath ",0x19);
      puVar10 = (undefined8 *)FUN_180152530(local_238,puVar14);
      puVar7 = puVar10 + 2;
      if (7 < (ulonglong)puVar10[3]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      FUN_180211740(param_1,puVar10,*puVar7);
      FUN_18021e290(local_238);
      FUN_180211740(param_1,
                    L" -Force -ErrorAction SilentlyContinue;if($i){$t=$stamp.AddSeconds((Get-Random -Minimum 0 -Maximum 172801));$i.CreationTime=$t;$i.LastAccessTime=$t;$i.LastWriteTime=$t};"
                    ,0xa8);
      puVar14 = puVar14 + 4;
    } while (puVar14 != local_58);
    if ((char)param_2 < '\0') {
      FUN_180211740(param_1,L"Get-ChildItem -LiteralPath ",0x1b);
      puVar10 = (undefined8 *)FUN_180152530(local_238,param_3);
      puVar7 = puVar10 + 2;
      if (7 < (ulonglong)puVar10[3]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      FUN_180211740(param_1,puVar10,*puVar7);
      FUN_18021e290(local_238);
      FUN_180211740(param_1,
                    L" -File -Force -ErrorAction SilentlyContinue|ForEach-Object{$t=$stamp.AddSeconds((Get-Random -Minimum 0 -Maximum 86401));$_.CreationTime=$t;$_.LastAccessTime=$t;$_.LastWriteTime=$t};"
                    ,0xb5);
    }
    _eh_vector_destructor_iterator_(local_d8,0x20,4,FUN_1800668e0);
  }
  FUN_18021e290(local_138);
  return param_1;
}


)B180152a90",
    "55fb624670d986135f0a874a34c1c61265d5fd436c464089449445d5f27a907c",
    R"F180152a90C(FUN_180066720
FUN_1800668e0
FUN_180152530
FUN_1801fc020
FUN_18020e540
FUN_180211510
FUN_180211640
FUN_180211740
FUN_18021c690
FUN_18021e290
FUN_180224130)F180152a90C",
    R"F180152a90D(DAT_18035eab0
DAT_18035eab8
DAT_18035f1d8
DAT_1803da4c0)F180152a90D",
    R"F180152a90T(""
"-shm"
"-wal"
"data"
"cache"
"cl.db"
"mn.db"
"sv.db"
"autorun"
"crashes"
"-journal"
"download"
"downloads"
"garrysmod"
"$delete=@("
"lights.rad"
"gameinfo.txt"
"sourceengine"
"downloadlists"
"base_vehicles.lua"
"$i=Get-Item -LiteralPath "
"Get-ChildItem -LiteralPath "
"$stamp=(Get-Date).AddDays(-(Get-Random -Minimum 150 -Maximum 901));"
" -ErrorAction SilentlyContinue;if($p){$p.WaitForExit()}}catch{};Start-Sleep -Milliseconds 750;"
" -Force -ErrorAction SilentlyContinue|Remove-Item -Recurse -Force -ErrorAction SilentlyContinue;"
" -File -Force -ErrorAction SilentlyContinue|Where-Object{$_.Extension -in \\'.dmp\\',\\'.mdmp\\'}|Remove-Item -Force -ErrorAction SilentlyContinue;"
" -Force -ErrorAction SilentlyContinue;if($i){$t=$stamp.AddSeconds((Get-Random -Minimum 0 -Maximum 172801));$i.CreationTime=$t;$i.LastAccessTime=$t;$i.LastWriteTime=$t};"
" -File -Force -ErrorAction SilentlyContinue|ForEach-Object{$t=$stamp.AddSeconds((Get-Random -Minimum 0 -Maximum 86401));$_.CreationTime=$t;$_.LastAccessTime=$t;$_.LastWriteTime=$t};"
" -Filter \\'*.dll\\' -File -Force -ErrorAction SilentlyContinue|ForEach-Object{Rename-Item -LiteralPath $_.FullName -NewName ($_.Name+\\'.disabled\\') -Force -ErrorAction SilentlyContinue};"
");for($n=0;$n -lt 40;$n++){foreach($f in $delete){Remove-Item -LiteralPath $f -Force -ErrorAction SilentlyContinue};$left=@($delete|Where-Object{Test-Path -LiteralPath $_});if($left.Count -eq 0){break};Start-Sleep -Milliseconds 250};")F180152a90T",
    R"F180152a90F(146: if ((param_2 & 1) != 0) {
158: if (7 < (ulonglong)puVar10[3]) {
169: if ((param_2 & 2) != 0) {
181: if (7 < (ulonglong)puVar10[3]) {
203: if (7 < (ulonglong)puVar10[3]) {
224: if (7 < (ulonglong)puVar10[3]) {
236: if ((param_2 & 4) != 0) {
248: if (7 < (ulonglong)puVar10[3]) {
261: if ((param_2 & 0x20) != 0) {
273: do {
276: do {
305: if (puStack_148 == local_140) {
308: else {
339: if ((longlong)puStack_148 - local_150 >> 5 != 0) {
340: do {
341: if (uVar13 != 0) {
346: if (7 < (ulonglong)puVar10[3]) {
360: if ((param_2 & 8) != 0) {
372: if (7 < (ulonglong)puVar10[3]) {
393: if (7 < (ulonglong)puVar10[3]) {
406: do {
410: if (7 < (ulonglong)puVar10[3]) {
422: if ((param_2 & 0x10) != 0) {
445: if (7 < (ulonglong)puVar10[3]) {
455: if ((param_2 & 0xc0) != 0) {
515: do {
519: if (7 < (ulonglong)puVar10[3]) {
529: if ((char)param_2 < '\0') {
533: if (7 < (ulonglong)puVar10[3]) {
545: return param_1;)F180152a90F",
    R"F180152a90U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18035eab0.
TODO: recover the declaration, type and value for global/data reference DAT_18035eab8.
TODO: recover the declaration, type and value for global/data reference DAT_18035f1d8.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180152a90U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180152a90() noexcept {
    return kFunction_0x180152a90;
}

// 0x180153bc0 FUN_180153bc0
// source: re/dump/decompile/0x180153bc0_FUN_180153bc0.c
// size: 155 bytes; thunk: false
// body sha256: 216dd5b09099e9a87f22caaa89b250fbd2b4f6439555a1e7c7964e9bb140e1f8
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180153bc0{
    "0x180153bc0",
    "FUN_180153bc0",
    R"F180153bc0S(undefined FUN_180153bc0())F180153bc0S",
    R"B180153bc0(// 0x180153bc0  FUN_180153bc0
// size=155 thunk=false
// signature: undefined FUN_180153bc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180153bc0(void)

{
  BOOL BVar1;
  undefined1 auStack_38 [32];
  DWORD local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  if (DAT_180400af8 != (HANDLE)0x0) {
    local_18[0] = 0;
    BVar1 = GetExitCodeProcess(DAT_180400af8,local_18);
    if ((BVar1 != 0) && (local_18[0] == 0x103)) {
      TerminateProcess(DAT_180400af8,0);
      WaitForSingleObject(DAT_180400af8,1000);
    }
    CloseHandle(DAT_180400af8);
    DAT_180400af8 = (HANDLE)0x0;
    DAT_180400b04 = 0;
    DAT_180400b00 = 0;
  }
  return;
}


)B180153bc0",
    "216dd5b09099e9a87f22caaa89b250fbd2b4f6439555a1e7c7964e9bb140e1f8",
    R"F180153bc0C()F180153bc0C",
    R"F180153bc0D(DAT_1803da4c0
DAT_180400af8
DAT_180400b00
DAT_180400b04)F180153bc0D",
    R"F180153bc0T()F180153bc0T",
    R"F180153bc0F(18: if (DAT_180400af8 != (HANDLE)0x0) {
21: if ((BVar1 != 0) && (local_18[0] == 0x103)) {
30: return;)F180153bc0F",
    R"F180153bc0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_180400af8.
TODO: recover the declaration, type and value for global/data reference DAT_180400b00.
TODO: recover the declaration, type and value for global/data reference DAT_180400b04.)F180153bc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180153bc0() noexcept {
    return kFunction_0x180153bc0;
}

// 0x180153c60 FUN_180153c60
// source: re/dump/decompile/0x180153c60_FUN_180153c60.c
// size: 1636 bytes; thunk: false
// body sha256: 67ca416f01d2f2c8b796cdec8da67ac05deb9e769576266c96af07d698b6fcc6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180153c60{
    "0x180153c60",
    "FUN_180153c60",
    R"F180153c60S(undefined FUN_180153c60())F180153c60S",
    R"B180153c60(// 0x180153c60  FUN_180153c60
// size=1636 thunk=false
// signature: undefined FUN_180153c60()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180153c60(int param_1,undefined8 param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  UINT UVar3;
  BOOL BVar4;
  DWORD DVar5;
  size_t sVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  longlong lVar10;
  LPWSTR _Dst;
  longlong lVar11;
  LPCWSTR ***lpApplicationName;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined8 ****_Src;
  undefined1 auStack_4f8 [8];
  undefined1 auStack_4f0 [72];
  undefined4 local_4a8;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 *local_3d8 [2];
  undefined8 *local_3c8;
  undefined8 *local_3c0;
  undefined8 *local_3b8;
  undefined1 local_3b0 [32];
  undefined1 local_390 [32];
  undefined1 local_370 [32];
  undefined8 local_350;
  HANDLE pvStack_348;
  ulonglong local_340;
  LPWSTR local_338;
  LPWSTR pWStack_330;
  LPWSTR local_328;
  undefined8 ***local_320 [2];
  longlong local_310;
  ulonglong local_308;
  LPCWSTR **local_300 [3];
  ulonglong local_2e8;
  undefined1 local_2e0 [40];
  undefined4 local_2b8;
  undefined8 local_2b4;
  undefined8 uStack_2ac;
  undefined8 local_2a4;
  undefined8 uStack_29c;
  undefined8 local_294;
  undefined8 uStack_28c;
  undefined8 local_284;
  undefined8 uStack_27c;
  undefined8 local_274;
  undefined8 uStack_26c;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined4 local_254;
  WCHAR local_248 [264];
  ulonglong local_38;
  
  puVar12 = auStack_4f8;
  puVar13 = auStack_4f8;
  puVar14 = auStack_4f8;
  puVar15 = auStack_4f8;
  local_38 = DAT_1803da4c0 ^ (ulonglong)auStack_4f8;
  _Dst = (LPWSTR)0x0;
  local_4a8 = 0;
  memset(local_248,0,0x208);
  UVar3 = GetSystemDirectoryW(local_248,0x104);
  uVar16 = (ulonglong)(UVar3 - 1);
  if (UVar3 - 1 < 0x103) {
    local_3c8 = &local_438;
    local_438 = 0;
    uStack_430 = 0;
    local_428 = 0;
    local_420 = 0;
    FUN_180211510(&local_438,L"powershell.exe",0xe);
    local_4a8 = 0;
    local_3c0 = &local_458;
    local_458 = 0;
    uStack_450 = 0;
    local_448 = 0;
    local_440 = 0;
    FUN_180211510(&local_458,L"v1.0",4);
    local_4a8 = 0;
    local_3b8 = &local_478;
    local_478 = 0;
    uStack_470 = 0;
    local_468 = 0;
    local_460 = 0;
    FUN_180211510(&local_478,L"WindowsPowerShell",0x11);
    local_4a8 = 0;
    local_3d8[0] = &local_498;
    sVar6 = wcslen(local_248);
    local_498 = 0;
    uStack_490 = 0;
    local_488 = 0;
    local_480 = 0;
    FUN_180211510(&local_498,local_248,sVar6);
    local_4a8 = 0;
    uVar7 = FUN_180066720(local_3b0,&local_498,&local_478);
    uVar7 = FUN_180066720(local_370,uVar7,&local_458);
    FUN_180066720(local_300,uVar7,&local_438);
    FUN_18021e290(local_370);
    FUN_18021e290(local_3b0);
    FUN_18021e290(&local_498);
    FUN_18021e290(&local_478);
    FUN_18021e290(&local_458);
    FUN_18021e290(&local_438);
    piVar8 = (int *)FUN_180067c80(local_3d8,local_300);
    if ((*piVar8 == 2) && (piVar8[2] == 0)) {
      uVar7 = FUN_180152a90(local_3b0,param_1,param_2);
      FUN_180152810(local_2e0,uVar7);
      FUN_18021e290(local_3b0);
      FUN_18020e540(local_390,local_300);
      local_4a8 = 0x100;
      puVar9 = (undefined8 *)FUN_180211640(local_390);
      local_3f8 = *puVar9;
      uStack_3f0 = puVar9[1];
      local_3e8 = puVar9[2];
      uStack_3e0 = puVar9[3];
      puVar9[2] = 0;
      puVar9[3] = 7;
      *(undefined2 *)puVar9 = 0;
      local_4a8 = 0x300;
      puVar9 = (undefined8 *)
               FUN_180211740(&local_3f8,
                             L"\" -NoLogo -NoProfile -NonInteractive -WindowStyle Hidden -EncodedCommand "
                             ,0x49);
      local_418 = *puVar9;
      uStack_410 = puVar9[1];
      local_408 = puVar9[2];
      uStack_400 = puVar9[3];
      puVar9[2] = 0;
      puVar9[3] = 7;
      *(undefined2 *)puVar9 = 0;
      local_4a8 = 0x700;
      FUN_1802052e0(local_320,&local_418,local_2e0);
      local_4a8 = 0x300;
      FUN_18021e290(&local_418);
      local_4a8 = 0x100;
      FUN_18021e290(&local_3f8);
      local_4a8 = 0;
      FUN_18021e290(local_390);
      if (local_308 < 8) {
        lVar17 = (longlong)local_320 + local_310 * 2;
        _Src = local_320;
      }
      else {
        lVar17 = (longlong)local_320[0] + local_310 * 2;
        _Src = (undefined8 ****)local_320[0];
      }
      local_338 = (LPWSTR)0x0;
      pWStack_330 = (LPWSTR)0x0;
      local_328 = (LPWSTR)0x0;
      uVar16 = lVar17 - (longlong)_Src >> 1;
      puVar14 = auStack_4f8;
      if (uVar16 != 0) {
        if (0x7fffffffffffffff < uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_18020cc40();
        }
        uVar2 = uVar16 * 2;
        if (uVar2 != 0) {
          if (uVar2 < 0x1000) {
            _Dst = (LPWSTR)FUN_1802d8350(uVar2);
            puVar13 = auStack_4f8;
          }
          else {
            if (uVar2 + 0x27 <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_180012fe0();
            }
            lVar10 = FUN_1802d8350();
            lVar11 = lVar10;
            if (lVar10 == 0) {
              lVar11 = 5;
              pcVar1 = (code *)swi(0x29);
              lVar10 = (*pcVar1)();
              puVar12 = auStack_4f0;
            }
            _Dst = (LPWSTR)(lVar10 + 0x27U & 0xffffffffffffffe0);
            *(longlong *)(_Dst + -4) = lVar11;
            puVar13 = puVar12;
          }
        }
        local_328 = _Dst + uVar16;
        *(LPWSTR **)(puVar13 + 0x58) = &local_338;
        *(undefined8 *)(puVar13 + -8) = 0x1801540c2;
        local_338 = _Dst;
        pWStack_330 = _Dst;
        memmove(_Dst,_Src,lVar17 - (longlong)_Src);
        pWStack_330 = _Dst + uVar16;
        *(undefined8 *)(puVar13 + 0x58) = 0;
        puVar14 = puVar13;
      }
      *(undefined2 *)(puVar14 + 0x54) = 0;
      if (pWStack_330 == local_328) {
        *(undefined8 *)(puVar14 + -8) = 0x180154107;
        FUN_180223f60(&local_338,pWStack_330,puVar14 + 0x54);
      }
      else {
        *pWStack_330 = L'\0';
        pWStack_330 = pWStack_330 + 1;
      }
      local_2b4 = 0;
      uStack_2ac = 0;
      local_2a4 = 0;
      uStack_29c = 0;
      local_294 = 0;
      uStack_28c = 0;
      local_284 = 0;
      uStack_27c = 0;
      local_274 = 0;
      uStack_26c = 0;
      local_264 = 0;
      uStack_25c = 0;
      local_254 = 0;
      local_2b8 = 0x68;
      local_350 = 0;
      pvStack_348 = (HANDLE)0x0;
      local_340 = 0;
      lpApplicationName = local_300;
      if (7 < local_2e8) {
        lpApplicationName = (LPCWSTR ***)local_300[0];
      }
      *(undefined8 **)(puVar14 + 0x48) = &local_350;
      *(undefined4 **)(puVar14 + 0x40) = &local_2b8;
      *(undefined8 *)(puVar14 + 0x38) = 0;
      *(undefined8 *)(puVar14 + 0x30) = 0;
      *(undefined4 *)(puVar14 + 0x28) = 0x8000400;
      *(undefined4 *)(puVar14 + 0x20) = 0;
      *(undefined8 *)(puVar14 + -8) = 0x1801541ad;
      BVar4 = CreateProcessW((LPCWSTR)lpApplicationName,local_338,(LPSECURITY_ATTRIBUTES)0x0,
                             (LPSECURITY_ATTRIBUTES)0x0,*(BOOL *)(puVar14 + 0x20),
                             *(DWORD *)(puVar14 + 0x28),*(LPVOID *)(puVar14 + 0x30),
                             *(LPCWSTR *)(puVar14 + 0x38),*(LPSTARTUPINFOW *)(puVar14 + 0x40),
                             *(LPPROCESS_INFORMATION *)(puVar14 + 0x48));
      if (BVar4 == 0) {
        if (DAT_180400b00 != param_1) {
          *(undefined8 *)(puVar14 + -8) = 0x1801541bf;
          DVar5 = GetLastError();
          *(undefined8 *)(puVar14 + -8) = 0x1801541cd;
          FUN_180014410("[DATA] post-exit cleaner failed: CreateProcessW err=%lu\n",DVar5);
        }
        uVar16 = 0;
        DAT_180400b00 = param_1;
      }
      else {
        *(undefined8 *)(puVar14 + -8) = 0x1801541e4;
        CloseHandle(pvStack_348);
        DAT_180400af8 = local_350;
        DAT_180400b00 = 0;
        *(undefined8 *)(puVar14 + -8) = 0x180154214;
        DAT_180400b04 = param_1;
        FUN_180014410("[DATA] post-exit cleaner armed: helper=%lu mask=0x%X\n",
                      local_340 & 0xffffffff,param_1);
        uVar16 = 1;
      }
      *(undefined8 *)(puVar14 + -8) = 0x180154222;
      FUN_18021c620(&local_338);
      *(undefined8 *)(puVar14 + -8) = 0x18015422f;
      FUN_18021e290(local_320);
      *(undefined8 *)(puVar14 + -8) = 0x18015423c;
      FUN_18021e290(local_2e0);
    }
    else {
      if (DAT_180400b00 != param_1) {
        FUN_180014410("[DATA] post-exit cleaner failed: PowerShell unavailable ec=%d\n");
      }
      uVar16 = 0;
      DAT_180400b00 = param_1;
    }
    *(undefined8 *)(puVar14 + -8) = 0x180154266;
    FUN_18021e290(local_300);
    puVar15 = puVar14;
  }
  else {
    if (DAT_180400b00 != param_1) {
      DVar5 = GetLastError();
      uVar16 = FUN_180014410("[DATA] post-exit cleaner failed: GetSystemDirectoryW err=%lu\n",DVar5)
      ;
    }
    uVar16 = uVar16 & 0xffffffffffffff00;
    DAT_180400b00 = param_1;
  }
  *(undefined8 *)(puVar15 + -8) = 0x18015429e;
  return uVar16;
}


)B180153c60",
    "67ca416f01d2f2c8b796cdec8da67ac05deb9e769576266c96af07d698b6fcc6",
    R"F180153c60C(FUN_180012fe0
FUN_180014410
FUN_180066720
FUN_180067c80
FUN_180152810
FUN_180152a90
FUN_1802052e0
FUN_18020cc40
FUN_18020e540
FUN_180211510
FUN_180211640
FUN_180211740
FUN_18021c620
FUN_18021e290
FUN_180223f60
FUN_1802d8350)F180153c60C",
    R"F180153c60D(DAT_1803da4c0
DAT_180400af8
DAT_180400b00
DAT_180400b04)F180153c60D",
    R"F180153c60T("v1.0"
"powershell.exe"
"WindowsPowerShell"
"[DATA] post-exit cleaner armed: helper=%lu mask=0x%X\\n"
"[DATA] post-exit cleaner failed: CreateProcessW err=%lu\\n"
"[DATA] post-exit cleaner failed: GetSystemDirectoryW err=%lu\\n"
"[DATA] post-exit cleaner failed: PowerShell unavailable ec=%d\\n"
"\\\" -NoLogo -NoProfile -NonInteractive -WindowStyle Hidden -EncodedCommand ")F180153c60T",
    R"F180153c60F(105: if (UVar3 - 1 < 0x103) {
145: if ((*piVar8 == 2) && (piVar8[2] == 0)) {
179: if (local_308 < 8) {
183: else {
192: if (uVar16 != 0) {
193: if (0x7fffffffffffffff < uVar16) {
198: if (uVar2 != 0) {
199: if (uVar2 < 0x1000) {
203: else {
204: if (uVar2 + 0x27 <= uVar2) {
210: if (lVar10 == 0) {
232: if (pWStack_330 == local_328) {
236: else {
258: if (7 < local_2e8) {
273: if (BVar4 == 0) {
274: if (DAT_180400b00 != param_1) {
283: else {
301: else {
302: if (DAT_180400b00 != param_1) {
312: else {
313: if (DAT_180400b00 != param_1) {
322: return uVar16;)F180153c60F",
    R"F180153c60U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_180400af8.
TODO: recover the declaration, type and value for global/data reference DAT_180400b00.
TODO: recover the declaration, type and value for global/data reference DAT_180400b04.
TODO: resolve the indirect call in body 212: pcVar1 = (code *)swi(0x29);.
TODO: resolve the indirect call in body 213: lVar10 = (*pcVar1)();.)F180153c60U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180153c60() noexcept {
    return kFunction_0x180153c60;
}

// 0x1801542d0 FUN_1801542d0
// source: re/dump/decompile/0x1801542d0_FUN_1801542d0.c
// size: 388 bytes; thunk: false
// body sha256: a494e7ec9cc71f974478c5bfd7dc42559d5953628cd8354df7e9360fa0cf310b
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801542d0{
    "0x1801542d0",
    "FUN_1801542d0",
    R"F1801542d0S(undefined FUN_1801542d0())F1801542d0S",
    R"B1801542d0(// 0x1801542d0  FUN_1801542d0
// size=388 thunk=false
// signature: undefined FUN_1801542d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801542d0(void)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  BOOL BVar5;
  char *pcVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined *local_58;
  DWORD local_40 [2];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  pcVar6 = (char *)FUN_180152220();
  uVar7 = *pcVar6 != '\0' | 2;
  if (pcVar6[1] == '\0') {
    uVar7 = (uint)(*pcVar6 != '\0');
  }
  uVar3 = uVar7 | 4;
  if (pcVar6[2] == '\0') {
    uVar3 = uVar7;
  }
  uVar7 = uVar3 | 8;
  if (pcVar6[3] == '\0') {
    uVar7 = uVar3;
  }
  uVar3 = uVar7 | 0x10;
  if (pcVar6[4] == '\0') {
    uVar3 = uVar7;
  }
  uVar7 = uVar3 | 0x20;
  if (pcVar6[5] == '\0') {
    uVar7 = uVar3;
  }
  uVar3 = uVar7 | 0x40;
  if (pcVar6[7] == '\0') {
    uVar3 = uVar7;
  }
  uVar7 = uVar3 | 0x80;
  if (pcVar6[8] == '\0') {
    uVar7 = uVar3;
  }
  local_58 = &DAT_1803e79f0;
  DAT_180400af0 = uVar7;
  iVar4 = _Mtx_lock(&DAT_1803e79f0);
  if (iVar4 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e7a3c == 0x7fffffff) {
    DAT_1803e7a3c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  if (DAT_180400af8 != (HANDLE)0x0) {
    local_40[0] = 0;
    BVar5 = GetExitCodeProcess(DAT_180400af8,local_40);
    if (((BVar5 != 0) && (local_40[0] == 0x103)) && (DAT_180400b04 == uVar7)) goto LAB_180154430;
    FUN_180153bc0();
  }
  if (uVar7 != 0) {
    FUN_18014e3b0(local_38);
    cVar2 = FUN_18014e280(local_38);
    if (cVar2 == '\0') {
      if (DAT_180400b00 != uVar7) {
        FUN_180014410("[DATA] post-exit cleaner failed: game root unresolved\n");
      }
    }
    else {
      FUN_180153c60(uVar7,local_38);
      uVar7 = DAT_180400b00;
    }
    DAT_180400b00 = uVar7;
    FUN_18021e290(local_38);
  }
LAB_180154430:
  _Mtx_unlock(&DAT_1803e79f0);
  return;
}


)B1801542d0",
    "a494e7ec9cc71f974478c5bfd7dc42559d5953628cd8354df7e9360fa0cf310b",
    R"F1801542d0C(FUN_180014410
FUN_18014e280
FUN_18014e3b0
FUN_180152220
FUN_180153bc0
FUN_180153c60
FUN_18021e290)F1801542d0C",
    R"F1801542d0D(LAB_180154430
DAT_1803da4c0
DAT_1803e79f0
DAT_1803e7a3c
DAT_180400af0
DAT_180400af8
DAT_180400b00
DAT_180400b04)F1801542d0D",
    R"F1801542d0T("[DATA] post-exit cleaner failed: game root unresolved\\n")F1801542d0T",
    R"F1801542d0F(28: if (pcVar6[1] == '\0') {
32: if (pcVar6[2] == '\0') {
36: if (pcVar6[3] == '\0') {
40: if (pcVar6[4] == '\0') {
44: if (pcVar6[5] == '\0') {
48: if (pcVar6[7] == '\0') {
52: if (pcVar6[8] == '\0') {
58: if (iVar4 != 0) {
62: return;
64: if (DAT_1803e7a3c == 0x7fffffff) {
68: if (DAT_180400af8 != (HANDLE)0x0) {
71: if (((BVar5 != 0) && (local_40[0] == 0x103)) && (DAT_180400b04 == uVar7)) goto LAB_180154430;
74: if (uVar7 != 0) {
77: if (cVar2 == '\0') {
78: if (DAT_180400b00 != uVar7) {
82: else {
89: LAB_180154430:
91: return;)F1801542d0F",
    R"F1801542d0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180154430.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e79f0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7a3c.
TODO: recover the declaration, type and value for global/data reference DAT_180400af0.
TODO: recover the declaration, type and value for global/data reference DAT_180400af8.
TODO: recover the declaration, type and value for global/data reference DAT_180400b00.
TODO: recover the declaration, type and value for global/data reference DAT_180400b04.
TODO: resolve the indirect call in body 60: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 61: (*pcVar1)();.)F1801542d0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801542d0() noexcept {
    return kFunction_0x1801542d0;
}

// 0x180154460 FUN_180154460
// source: re/dump/decompile/0x180154460_FUN_180154460.c
// size: 116 bytes; thunk: false
// body sha256: 9c633f3786320331b72fd88c4e0f45e9cd18da809fcbeb357fc4e4da15e169a7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180154460{
    "0x180154460",
    "FUN_180154460",
    R"F180154460S(undefined FUN_180154460())F180154460S",
    R"B180154460(// 0x180154460  FUN_180154460
// size=116 thunk=false
// signature: undefined FUN_180154460()
// status: ok


void FUN_180154460(void)

{
  code *pcVar1;
  int iVar2;
  
  iVar2 = DAT_180400af0;
  LOCK();
  DAT_180400af0 = 0;
  UNLOCK();
  if (iVar2 == 0) {
    return;
  }
  iVar2 = _Mtx_lock(&DAT_1803e79f0);
  if (iVar2 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (DAT_1803e7a3c == 0x7fffffff) {
    DAT_1803e7a3c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  FUN_180153bc0();
                    /* WARNING: Could not recover jumptable at 0x0001801544c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Mtx_unlock(&DAT_1803e79f0);
  return;
}


)B180154460",
    "9c633f3786320331b72fd88c4e0f45e9cd18da809fcbeb357fc4e4da15e169a7",
    R"F180154460C(FUN_180153bc0)F180154460C",
    R"F180154460D(DAT_1803e79f0
DAT_1803e7a3c
DAT_180400af0)F180154460D",
    R"F180154460T()F180154460T",
    R"F180154460F(17: if (iVar2 == 0) {
18: return;
21: if (iVar2 != 0) {
25: return;
27: if (DAT_1803e7a3c == 0x7fffffff) {
35: return;)F180154460F",
    R"F180154460U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e79f0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7a3c.
TODO: recover the declaration, type and value for global/data reference DAT_180400af0.
TODO: resolve the indirect call in body 23: pcVar1 = (code *)swi(3);.
TODO: resolve the indirect call in body 24: (*pcVar1)();.)F180154460U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180154460() noexcept {
    return kFunction_0x180154460;
}

// 0x1801544e0 FUN_1801544e0
// source: re/dump/decompile/0x1801544e0_FUN_1801544e0.c
// size: 935 bytes; thunk: false
// body sha256: 7782cb53fcd5a975cb5db54c96029649bd53c83227b99559092cb553b18398d6
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801544e0{
    "0x1801544e0",
    "FUN_1801544e0",
    R"F1801544e0S(undefined FUN_1801544e0())F1801544e0S",
    R"B1801544e0(// 0x1801544e0  FUN_1801544e0
// size=935 thunk=false
// signature: undefined FUN_1801544e0()
// status: ok


/* WARNING: Removing unreachable block (ram,0x00018015485d) */

undefined8 FUN_1801544e0(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  code *pcVar4;
  longlong lVar5;
  int iVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 *_ArgList;
  undefined8 ****ppppuVar9;
  longlong lVar10;
  char local_78;
  char cStack_77;
  char cStack_76;
  char cStack_75;
  char cStack_74;
  char cStack_73;
  char cStack_72;
  char cStack_71;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined8 ***local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  if (DAT_180400b09 == '\0') {
    pcVar7 = (char *)FUN_180152220(&local_68);
    local_78 = *pcVar7;
    cStack_77 = pcVar7[1];
    cStack_76 = pcVar7[2];
    cStack_75 = pcVar7[3];
    cStack_74 = pcVar7[4];
    cVar1 = pcVar7[5];
    cVar2 = pcVar7[6];
    cStack_71 = pcVar7[7];
    cVar3 = pcVar7[8];
    cStack_73 = cVar1;
    cStack_72 = cVar2;
    if ((((((local_78 != '\0') || (cStack_77 != '\0')) || (cStack_76 != '\0')) ||
         ((cStack_75 != '\0' || (cStack_74 != '\0')))) ||
        ((cVar1 != '\0' || ((cVar2 != '\0' || (cStack_71 != '\0')))))) || (cVar3 != '\0')) {
      iVar6 = _Mtx_lock(&DAT_1803e7a40);
      if (iVar6 != 0) {
        std::_Throw_Cpp_error(5);
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return uVar8;
      }
      if (DAT_1803e7a8c == 0x7fffffff) {
        DAT_1803e7a8c = 0x7ffffffe;
        std::_Throw_Cpp_error(6);
      }
      lVar5 = DAT_1803ea208;
      lVar10 = DAT_1803ea200;
      if (DAT_1803ea200 != DAT_1803ea208) {
        do {
          FUN_18020e450(lVar10);
          lVar10 = lVar10 + 0x20;
        } while (lVar10 != lVar5);
        DAT_1803ea208 = DAT_1803ea200;
      }
      _Mtx_unlock(&DAT_1803e7a40);
      local_68 = (undefined8 ****)0x0;
      uStack_60 = 0;
      local_58 = 0;
      local_50 = 0;
      FUN_18001d080(&local_68,"Cleaning...",0xb);
      iVar6 = _Mtx_lock(&DAT_1803e7a40);
      if (iVar6 == 0) {
        if (DAT_1803e7a8c == 0x7fffffff) {
          DAT_1803e7a8c = 0x7ffffffe;
          std::_Throw_Cpp_error(6);
        }
        ppppuVar9 = &local_68;
        if (0xf < local_50) {
          ppppuVar9 = (undefined8 ****)local_68;
        }
        FUN_180212700(&DAT_1803ea218,ppppuVar9,local_58);
        _Mtx_unlock(&DAT_1803e7a40);
        FUN_18020e450(&local_68);
        DAT_180400b09 = '\x01';
        if (cVar1 != '\0') {
          DAT_180400b08 = 1;
          local_68 = (undefined8 ****)0x0;
          uStack_60 = 0;
          local_58 = 0;
          local_50 = 0;
          FUN_18001d080(&local_68,"sql wipe: queued for cl.db + mn.db (next game tick)",0x33);
          FUN_18014de20(&local_68);
          FUN_18020e450(&local_68);
        }
        if (cVar2 != '\0') {
          DAT_180400aec = 1;
        }
        _ArgList = (undefined8 *)FUN_1802d8350(0x18);
        *_ArgList = CONCAT17(cStack_71,
                             CONCAT16(cStack_72,
                                      CONCAT15(cStack_73,
                                               CONCAT14(cStack_74,
                                                        CONCAT13(cStack_75,
                                                                 CONCAT12(cStack_76,
                                                                          CONCAT11(cStack_77,
                                                                                   local_78)))))));
        *(char *)(_ArgList + 1) = cVar3;
        _ArgList[2] = FUN_180151b00;
        local_68 = (undefined8 ***)
                   _beginthreadex((void *)0x0,0,FUN_180221140,_ArgList,0,(uint *)&uStack_60);
        if (local_68 != (undefined8 ***)0x0) {
          if ((uint)uStack_60 != 0) {
            local_78 = (char)local_68;
            cStack_77 = (char)((ulonglong)local_68 >> 8);
            cStack_76 = (char)((ulonglong)local_68 >> 0x10);
            cStack_75 = (char)((ulonglong)local_68 >> 0x18);
            cStack_74 = (char)((ulonglong)local_68 >> 0x20);
            cStack_73 = (char)((ulonglong)local_68 >> 0x28);
            cStack_72 = (char)((ulonglong)local_68 >> 0x30);
            cStack_71 = (char)((ulonglong)local_68 >> 0x38);
            uStack_70 = (uint)uStack_60;
            uStack_6c = uStack_60._4_4_;
            iVar6 = _Thrd_detach(&local_78);
            if (iVar6 == 0) {
              return 1;
            }
          }
          std::_Throw_Cpp_error(1);
        }
        uStack_60 = uStack_60 & 0xffffffff00000000;
        std::_Throw_Cpp_error(6);
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return uVar8;
      }
      std::_Throw_Cpp_error(5);
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return uVar8;
    }
    local_68 = (undefined8 ****)0x0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_18001d080(&local_68,"Nothing selected",0x10);
    iVar6 = _Mtx_lock(&DAT_1803e7a40);
    if (iVar6 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar4 = (code *)swi(3);
      uVar8 = (*pcVar4)();
      return uVar8;
    }
    if (DAT_1803e7a8c == 0x7fffffff) {
      DAT_1803e7a8c = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    ppppuVar9 = &local_68;
    if (0xf < local_50) {
      ppppuVar9 = (undefined8 ****)local_68;
    }
    FUN_180212700(&DAT_1803ea218,ppppuVar9,local_58);
    _Mtx_unlock(&DAT_1803e7a40);
    FUN_18020e450(&local_68);
  }
  return 0;
}


)B1801544e0",
    "7782cb53fcd5a975cb5db54c96029649bd53c83227b99559092cb553b18398d6",
    R"F1801544e0C(FUN_18001d080
FUN_18014de20
FUN_180151b00
FUN_180152220
FUN_18020e450
FUN_180212700
FUN_180221140
FUN_1802d8350)F1801544e0C",
    R"F1801544e0D(DAT_1803e7a40
DAT_1803e7a8c
DAT_1803ea200
DAT_1803ea208
DAT_1803ea218
DAT_180400aec
DAT_180400b08
DAT_180400b09)F1801544e0D",
    R"F1801544e0T("Cleaning..."
"Nothing selected"
"sql wipe: queued for cl.db + mn.db (next game tick)")F1801544e0T",
    R"F1801544e0F(38: if (DAT_180400b09 == '\0') {
51: if ((((((local_78 != '\0') || (cStack_77 != '\0')) || (cStack_76 != '\0')) ||
55: if (iVar6 != 0) {
59: return uVar8;
61: if (DAT_1803e7a8c == 0x7fffffff) {
67: if (DAT_1803ea200 != DAT_1803ea208) {
68: do {
81: if (iVar6 == 0) {
82: if (DAT_1803e7a8c == 0x7fffffff) {
87: if (0xf < local_50) {
94: if (cVar1 != '\0') {
104: if (cVar2 != '\0') {
120: if (local_68 != (undefined8 ***)0x0) {
121: if ((uint)uStack_60 != 0) {
133: if (iVar6 == 0) {
134: return 1;
143: return uVar8;
148: return uVar8;
156: if (iVar6 != 0) {
160: return uVar8;
162: if (DAT_1803e7a8c == 0x7fffffff) {
167: if (0xf < local_50) {
174: return 0;)F1801544e0F",
    R"F1801544e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7a40.
TODO: recover the declaration, type and value for global/data reference DAT_1803e7a8c.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea200.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea208.
TODO: recover the declaration, type and value for global/data reference DAT_1803ea218.
TODO: recover the declaration, type and value for global/data reference DAT_180400aec.
TODO: recover the declaration, type and value for global/data reference DAT_180400b08.
TODO: recover the declaration, type and value for global/data reference DAT_180400b09.
TODO: resolve the indirect call in body 57: pcVar4 = (code *)swi(3);.
TODO: resolve the indirect call in body 58: uVar8 = (*pcVar4)();.
TODO: resolve the indirect call in body 141: pcVar4 = (code *)swi(3);.
TODO: resolve the indirect call in body 142: uVar8 = (*pcVar4)();.
TODO: resolve the indirect call in body 146: pcVar4 = (code *)swi(3);.
TODO: resolve the indirect call in body 147: uVar8 = (*pcVar4)();.
TODO: resolve the indirect call in body 158: pcVar4 = (code *)swi(3);.
TODO: resolve the indirect call in body 159: uVar8 = (*pcVar4)();.)F1801544e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801544e0() noexcept {
    return kFunction_0x1801544e0;
}

// 0x180154890 Features_DataCleaner_DataCleanerFeature_vfunc01
// source: re/dump/decompile/0x180154890_Features_DataCleaner_DataCleanerFeature_vfunc01.c
// size: 686 bytes; thunk: false
// body sha256: 98c48510fbb2133aacf61ef76621fffc6e3e59acb6a0d3fd839eef751588bfb3
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180154890{
    "0x180154890",
    "Features_DataCleaner_DataCleanerFeature_vfunc01",
    R"F180154890S(undefined Features_DataCleaner_DataCleanerFeature_vfunc01())F180154890S",
    R"B180154890(// 0x180154890  Features_DataCleaner_DataCleanerFeature_vfunc01
// size=686 thunk=false
// signature: undefined Features_DataCleaner_DataCleanerFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char Features_DataCleaner_DataCleanerFeature_vfunc01(void)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  char *pcVar7;
  longlong lVar8;
  size_t sVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_198 [32];
  double local_178;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_140 [16];
  undefined8 local_130;
  undefined8 local_128 [2];
  char local_118 [160];
  ulonglong local_78;
  
  local_78 = DAT_1803da4c0 ^ (ulonglong)auStack_198;
  local_130 = 0x93fd561a96ab0c67;
  local_128[0] = 0x313d197f9969de8d;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_140,&local_130);
  FUN_180241a30(*plVar6 + 0x28,&local_160,local_128);
  pcVar7 = (char *)FUN_1801fcfc0();
  if (*pcVar7 == '\0') {
    FUN_180154460();
  }
  else {
    FUN_1801542d0();
  }
  LOCK();
  bVar13 = DAT_180400b08 == '\x01';
  if (bVar13) {
    DAT_180400b08 = '\0';
  }
  UNLOCK();
  if (bVar13) {
    FUN_180150310();
  }
  ppuVar10 = &PTR_s_cl_timeout_18033be70;
  LOCK();
  bVar13 = DAT_180400aec == '\x01';
  if (bVar13) {
    DAT_180400aec = '\0';
  }
  UNLOCK();
  if (bVar13) {
    iVar12 = 0;
    iVar5 = 0;
    ppuVar11 = &PTR_s_cl_timeout_18033be70;
    do {
      lVar8 = FUN_180016fb0(*ppuVar11);
      if ((lVar8 == 0) || (cVar4 = FUN_1801fcd40(lVar8), cVar4 == '\0')) {
        iVar5 = iVar5 + 1;
      }
      else {
        iVar12 = iVar12 + 1;
      }
      ppuVar11 = ppuVar11 + 2;
    } while (ppuVar11 != &PTR_u_gameinfo_txt_18033beb0);
    local_178 = (double)CONCAT44(local_178._4_4_,iVar5);
    FUN_180012ac0(local_118,0x80,"ConVars: %d reset, %d unavailable",iVar12);
    local_160 = 0;
    uStack_158 = 0;
    local_150 = 0;
    uStack_148 = 0;
    sVar9 = strlen(local_118);
    FUN_18001d080(&local_160,local_118,sVar9);
    FUN_18014de20(&local_160);
    FUN_18020e450();
  }
  uVar2 = _DAT_1803817c0;
  fVar1 = DAT_180380964;
  LOCK();
  bVar13 = DAT_180400b10 == '\x01';
  cVar4 = DAT_180400b10;
  if (bVar13) {
    DAT_180400b10 = '\0';
    cVar4 = '\x01';
  }
  UNLOCK();
  if (bVar13) {
    do {
      lVar8 = FUN_180016fb0(*ppuVar10);
      cVar4 = '\0';
      if (lVar8 != 0) {
        local_130 = CONCAT44(local_130._4_4_,*(undefined4 *)(ppuVar10 + 1));
        cVar4 = FUN_180150b70(lVar8,&local_130);
        if ((cVar4 != '\0') &&
           (fVar3 = (float)local_130,
           fVar1 <= (float)((uint)((float)local_130 - *(float *)(ppuVar10 + 1)) & uVar2))) {
          pcVar7 = *ppuVar10;
          iVar5 = strcmp(pcVar7,"cl_timeout");
          if (iVar5 == 0) {
            FUN_180012ac0(local_118,0xa0,
                          "cl_timeout = %g (not 30) - this is where a ban marker is stored",
                          (double)fVar3);
          }
          else {
            local_178 = (double)fVar3;
            FUN_180012ac0(local_118,0xa0,"%s = %g (not 0) - counts as \"advanced user\"",pcVar7);
          }
          local_160 = 0;
          uStack_158 = 0;
          local_150 = 0;
          uStack_148 = 0;
          sVar9 = strlen(local_118);
          FUN_18001d080(&local_160,local_118,sVar9);
          iVar5 = strcmp(*ppuVar10,"cl_timeout");
          FUN_18014df00(2 - (uint)(iVar5 != 0),&local_160);
          cVar4 = FUN_18020e450(&local_160);
        }
      }
      ppuVar10 = ppuVar10 + 2;
    } while (ppuVar10 != &PTR_u_gameinfo_txt_18033beb0);
  }
  return cVar4;
}


)B180154890",
    "98c48510fbb2133aacf61ef76621fffc6e3e59acb6a0d3fd839eef751588bfb3",
    R"F180154890C(FUN_180012ac0
FUN_180016fb0
FUN_18001d080
FUN_18014de20
FUN_18014df00
FUN_180150310
FUN_180150b70
FUN_1801542d0
FUN_180154460
FUN_1801fcd40
FUN_1801fcfc0
FUN_18020e450
FUN_180241a30)F180154890C",
    R"F180154890D(DAT_180380964
DAT_1803da4c0
DAT_1803fadf0
DAT_180400aec
DAT_180400b08
DAT_180400b10)F180154890D",
    R"F180154890T("cl_timeout"
"ConVars: %d reset, %d unavailable"
"%s = %g (not 0) - counts as \\\"advanced user\\\""
"cl_timeout = %g (not 30) - this is where a ban marker is stored")F180154890T",
    R"F180154890F(44: if (*pcVar7 == '\0') {
47: else {
52: if (bVar13) {
56: if (bVar13) {
62: if (bVar13) {
66: if (bVar13) {
70: do {
72: if ((lVar8 == 0) || (cVar4 = FUN_1801fcd40(lVar8), cVar4 == '\0')) {
75: else {
96: if (bVar13) {
101: if (bVar13) {
102: do {
105: if (lVar8 != 0) {
108: if ((cVar4 != '\0') &&
113: if (iVar5 == 0) {
118: else {
136: return cVar4;)F180154890F",
    R"F180154890U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180380964.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.
TODO: recover the declaration, type and value for global/data reference DAT_180400aec.
TODO: recover the declaration, type and value for global/data reference DAT_180400b08.
TODO: recover the declaration, type and value for global/data reference DAT_180400b10.)F180154890U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180154890() noexcept {
    return kFunction_0x180154890;
}

// 0x180154b40 FUN_180154b40
// source: re/dump/decompile/0x180154b40_FUN_180154b40.c
// size: 631 bytes; thunk: false
// body sha256: 4bb0a534cd5c5e85351ba32abecf5c2f3b86362004d47c412c46af5408a09dad
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180154b40{
    "0x180154b40",
    "FUN_180154b40",
    R"F180154b40S(undefined FUN_180154b40())F180154b40S",
    R"B180154b40(// 0x180154b40  FUN_180154b40
// size=631 thunk=false
// signature: undefined FUN_180154b40()
// status: ok


undefined1 FUN_180154b40(void)

{
  HMODULE hModule;
  
  if (DAT_180409f60 != '\0') {
    return 1;
  }
  hModule = GetModuleHandleA("lua_shared.dll");
  if (hModule == (HMODULE)0x0) {
    return 0;
  }
  DAT_180409e50 = GetProcAddress(hModule,"lua_gettop");
  DAT_180409f20 = GetProcAddress(hModule,"lua_settop");
  DAT_180409f10 = GetProcAddress(hModule,"lua_type");
  DAT_180409e58 = GetProcAddress(hModule,"lua_tolstring");
  DAT_180409f30 = GetProcAddress(hModule,"lua_pushstring");
  DAT_180409f48 = GetProcAddress(hModule,"lua_pushlstring");
  DAT_180409d08 = GetProcAddress(hModule,"lua_pushnumber");
  DAT_180409e48 = GetProcAddress(hModule,"lua_pushboolean");
  DAT_180409e60 = GetProcAddress(hModule,"lua_rawset");
  DAT_180409f58 = GetProcAddress(hModule,"lua_pushnil");
  DAT_180409f50 = GetProcAddress(hModule,"lua_replace");
  DAT_180409f38 = GetProcAddress(hModule,"lua_rawget");
  DAT_180409f18 = GetProcAddress(hModule,"lua_rawgeti");
  DAT_180409d10 = GetProcAddress(hModule,"lua_rawseti");
  DAT_180409d38 = GetProcAddress(hModule,"lua_objlen");
  DAT_180409d48 = GetProcAddress(hModule,"lua_tocfunction");
  if (((((DAT_180409e50 != (FARPROC)0x0) && (DAT_180409f20 != (FARPROC)0x0)) &&
       (DAT_180409f10 != (FARPROC)0x0)) &&
      (((DAT_180409e58 != (FARPROC)0x0 && (DAT_180409f30 != (FARPROC)0x0)) &&
       ((DAT_180409f58 != (FARPROC)0x0 &&
        ((DAT_180409f50 != (FARPROC)0x0 && (DAT_180409f38 != (FARPROC)0x0)))))))) &&
     ((DAT_180409f18 != (FARPROC)0x0 &&
      (((((DAT_180409d10 != (FARPROC)0x0 && (DAT_180409d38 != (FARPROC)0x0)) &&
         (DAT_180409d48 != (FARPROC)0x0)) &&
        ((DAT_180409f48 != (FARPROC)0x0 && (DAT_180409d08 != (FARPROC)0x0)))) &&
       ((DAT_180409e48 != (FARPROC)0x0 && (DAT_180409e60 != (FARPROC)0x0)))))))) {
    DAT_180409f60 = 1;
    return 1;
  }
  DAT_180409f60 = 0;
  return 0;
}


)B180154b40",
    "4bb0a534cd5c5e85351ba32abecf5c2f3b86362004d47c412c46af5408a09dad",
    R"F180154b40C()F180154b40C",
    R"F180154b40D(DAT_180409d08
DAT_180409d10
DAT_180409d38
DAT_180409d48
DAT_180409e48
DAT_180409e50
DAT_180409e58
DAT_180409e60
DAT_180409f10
DAT_180409f18
DAT_180409f20
DAT_180409f30
DAT_180409f38
DAT_180409f48
DAT_180409f50
DAT_180409f58
DAT_180409f60)F180154b40D",
    R"F180154b40T("lua_type"
"lua_gettop"
"lua_objlen"
"lua_rawget"
"lua_rawset"
"lua_settop"
"lua_pushnil"
"lua_rawgeti"
"lua_rawseti"
"lua_replace"
"lua_tolstring"
"lua_pushnumber"
"lua_pushstring"
"lua_shared.dll"
"lua_pushboolean"
"lua_pushlstring"
"lua_tocfunction")F180154b40T",
    R"F180154b40F(12: if (DAT_180409f60 != '\0') {
13: return 1;
16: if (hModule == (HMODULE)0x0) {
17: return 0;
35: if (((((DAT_180409e50 != (FARPROC)0x0) && (DAT_180409f20 != (FARPROC)0x0)) &&
46: return 1;
49: return 0;)F180154b40F",
    R"F180154b40U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_180409d08.
TODO: recover the declaration, type and value for global/data reference DAT_180409d10.
TODO: recover the declaration, type and value for global/data reference DAT_180409d38.
TODO: recover the declaration, type and value for global/data reference DAT_180409d48.
TODO: recover the declaration, type and value for global/data reference DAT_180409e48.
TODO: recover the declaration, type and value for global/data reference DAT_180409e50.
TODO: recover the declaration, type and value for global/data reference DAT_180409e58.
TODO: recover the declaration, type and value for global/data reference DAT_180409e60.
TODO: recover the declaration, type and value for global/data reference DAT_180409f10.
TODO: recover the declaration, type and value for global/data reference DAT_180409f18.
TODO: recover the declaration, type and value for global/data reference DAT_180409f20.
TODO: recover the declaration, type and value for global/data reference DAT_180409f30.
TODO: recover the declaration, type and value for global/data reference DAT_180409f38.
TODO: recover the declaration, type and value for global/data reference DAT_180409f48.
TODO: recover the declaration, type and value for global/data reference DAT_180409f50.
TODO: recover the declaration, type and value for global/data reference DAT_180409f58.
TODO: recover the declaration, type and value for global/data reference DAT_180409f60.)F180154b40U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180154b40() noexcept {
    return kFunction_0x180154b40;
}

// 0x180154dc0 FUN_180154dc0
// source: re/dump/decompile/0x180154dc0_FUN_180154dc0.c
// size: 344 bytes; thunk: false
// body sha256: 0eef2184bdbeaba9b569c0158e7ac9b5a423f6f013f252c6b7cf1bc831a684b7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180154dc0{
    "0x180154dc0",
    "FUN_180154dc0",
    R"F180154dc0S(undefined FUN_180154dc0())F180154dc0S",
    R"B180154dc0(// 0x180154dc0  FUN_180154dc0
// size=344 thunk=false
// signature: undefined FUN_180154dc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180154dc0(undefined8 *param_1,byte *param_2)

{
  int iVar1;
  ulonglong uVar2;
  size_t sVar3;
  byte bVar4;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined8 local_230;
  char local_228 [512];
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_258;
  local_238 = 0;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(byte **)param_2;
  }
  local_228[0] = '\0';
  local_230 = param_1;
  if (param_2 != (byte *)0x0) {
    for (; ((bVar4 = *param_2, bVar4 == 0x2f || (bVar4 == 0x5c)) ||
           ((bVar4 == 0x2e && ((param_2[1] == 0x2f || (param_2[1] == 0x5c))))));
        param_2 = param_2 + (ulonglong)(bVar4 == 0x2e) + 1) {
    }
    uVar2 = 0;
    if (bVar4 != 0) {
      do {
        if (0x1ff < uVar2 + 1) break;
        bVar4 = *param_2;
        if (bVar4 == 0x5c) {
          bVar4 = 0x2f;
LAB_180154e6e:
          if ((uVar2 != 0) && (local_228[uVar2 - 1] != '/')) goto LAB_180154e8b;
        }
        else {
          if (bVar4 == 0x2f) goto LAB_180154e6e;
LAB_180154e8b:
          iVar1 = tolower((uint)bVar4);
          local_228[uVar2] = (char)iVar1;
          uVar2 = uVar2 + 1;
        }
        param_2 = param_2 + 1;
      } while (*param_2 != 0);
      for (; (uVar2 != 0 && (local_228[uVar2 - 1] == '/')); uVar2 = uVar2 - 1) {
      }
    }
    local_228[uVar2] = '\0';
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar3 = strlen(local_228);
  FUN_18001d080(param_1,local_228,sVar3);
  return param_1;
}


)B180154dc0",
    "0eef2184bdbeaba9b569c0158e7ac9b5a423f6f013f252c6b7cf1bc831a684b7",
    R"F180154dc0C(FUN_18001d080)F180154dc0C",
    R"F180154dc0D(LAB_180154e6e
LAB_180154e8b
DAT_1803da4c0)F180154dc0D",
    R"F180154dc0T()F180154dc0T",
    R"F180154dc0F(24: if (0xf < *(ulonglong *)(param_2 + 0x18)) {
29: if (param_2 != (byte *)0x0) {
30: for (; ((bVar4 = *param_2, bVar4 == 0x2f || (bVar4 == 0x5c)) ||
35: if (bVar4 != 0) {
36: do {
37: if (0x1ff < uVar2 + 1) break;
39: if (bVar4 == 0x5c) {
41: LAB_180154e6e:
42: if ((uVar2 != 0) && (local_228[uVar2 - 1] != '/')) goto LAB_180154e8b;
44: else {
45: if (bVar4 == 0x2f) goto LAB_180154e6e;
46: LAB_180154e8b:
53: for (; (uVar2 != 0 && (local_228[uVar2 - 1] == '/')); uVar2 = uVar2 - 1) {
64: return param_1;)F180154dc0F",
    R"F180154dc0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180154e6e.
TODO: recover the declaration, type and value for global/data reference LAB_180154e8b.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180154dc0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180154dc0() noexcept {
    return kFunction_0x180154dc0;
}

// 0x180154f20 FUN_180154f20
// source: re/dump/decompile/0x180154f20_FUN_180154f20.c
// size: 1001 bytes; thunk: false
// body sha256: 55ed172396c7b3efd8414921487593458b90413707aed07d6c034fc3265f1e0d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180154f20{
    "0x180154f20",
    "FUN_180154f20",
    R"F180154f20S(undefined FUN_180154f20())F180154f20S",
    R"B180154f20(// 0x180154f20  FUN_180154f20
// size=1001 thunk=false
// signature: undefined FUN_180154f20()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_180154f20(byte *param_1,char *param_2,longlong param_3,ulonglong param_4)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  char *pcVar10;
  undefined1 auStack_2f8 [32];
  char local_2d8 [57];
  char local_29f [599];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_2f8;
  if (param_3 == 0) {
    return 0;
  }
  uVar9 = 0;
  local_2d8[0x30] = 0;
  uVar8 = uVar9;
  if (param_1 != (byte *)0x0) {
    for (; ((bVar2 = *param_1, bVar2 == 0x2f || (bVar2 == 0x5c)) ||
           ((bVar2 == 0x2e && ((param_1[1] == 0x2f || (param_1[1] == 0x5c))))));
        param_1 = param_1 + (ulonglong)(bVar2 == 0x2e) + 1) {
    }
    if (bVar2 != 0) {
      do {
        if (599 < uVar8 + 1) break;
        bVar2 = *param_1;
        if (bVar2 == 0x5c) {
          bVar2 = 0x2f;
LAB_180154fdc:
          if ((uVar8 != 0) && (local_2d8[uVar8 + 0x2f] != '/')) goto LAB_180154ffa;
        }
        else {
          if (bVar2 == 0x2f) goto LAB_180154fdc;
LAB_180154ffa:
          iVar3 = tolower((uint)bVar2);
          local_2d8[uVar8 + 0x30] = (char)iVar3;
          uVar8 = uVar8 + 1;
        }
        param_1 = param_1 + 1;
      } while (*param_1 != 0);
      for (; (uVar8 != 0 && (local_2d8[uVar8 + 0x2f] == '/')); uVar8 = uVar8 - 1) {
      }
    }
    local_2d8[uVar8 + 0x30] = '\0';
  }
  pcVar10 = local_2d8 + 0x30;
  if (param_2 != (char *)0x0) {
    uVar5 = uVar9;
    if (*param_2 != '\0') {
      do {
        uVar6 = uVar5 + 1;
        if (0x17 < uVar6) break;
        iVar3 = tolower((uint)(byte)param_2[uVar5]);
        cVar1 = param_2[uVar6];
        local_2d8[uVar5 + 0x18] = (char)iVar3;
        uVar5 = uVar6;
      } while (cVar1 != '\0');
      local_2d8[uVar5 + 0x18] = '\0';
      iVar3 = strcmp(local_2d8 + 0x18,"base_path");
      if ((iVar3 == 0) || (iVar3 = strcmp(local_2d8 + 0x18,"executable_path"), iVar3 == 0)) {
        if (((uVar8 < 9) || (iVar3 = memcmp(local_2d8 + 0x30,"garrysmod",9), iVar3 != 0)) ||
           ((uVar8 != 9 && (local_29f[0] != '/')))) {
          pcVar7 = "@root/";
          goto LAB_1801550f3;
        }
        pcVar10 = local_29f + (uVar8 != 9);
        uVar8 = uVar8 - ((ulonglong)(uVar8 != 9) + 9);
        goto LAB_1801550ec;
      }
    }
    if ((param_2 != (char *)0x0) && (uVar5 = uVar9, *param_2 != '\0')) {
      do {
        uVar6 = uVar5 + 1;
        if (0x17 < uVar6) break;
        iVar3 = tolower((uint)(byte)param_2[uVar5]);
        cVar1 = param_2[uVar6];
        local_2d8[uVar5] = (char)iVar3;
        uVar5 = uVar6;
      } while (cVar1 != '\0');
      local_2d8[uVar5] = '\0';
      uVar5 = uVar9;
      do {
        uVar4 = uVar5 + 1;
        uVar6 = uVar9;
        if (local_2d8[uVar5] != (&DAT_18035ff34)[uVar5]) goto LAB_180155210;
        uVar5 = uVar4;
      } while (uVar4 != 4);
      pcVar7 = "lua/";
      goto LAB_1801550f3;
    }
  }
LAB_1801550ec:
  pcVar7 = "";
  goto LAB_1801550f3;
  while (uVar6 = uVar4, uVar4 != 4) {
LAB_180155210:
    uVar4 = uVar6 + 1;
    uVar5 = uVar9;
    if (local_2d8[uVar6] != (&DAT_18035ff38)[uVar6]) goto LAB_180155240;
  }
  pcVar7 = "lua/";
  goto LAB_1801550f3;
  while (uVar5 = uVar4, uVar4 != 4) {
LAB_180155240:
    uVar4 = uVar5 + 1;
    uVar6 = uVar9;
    if (local_2d8[uVar5] != (&DAT_18035ff3c)[uVar5]) goto LAB_180155270;
  }
  pcVar7 = "lua/";
  goto LAB_1801550f3;
  while (uVar6 = uVar4, uVar4 != 8) {
LAB_180155270:
    uVar4 = uVar6 + 1;
    uVar5 = uVar9;
    if (local_2d8[uVar6] != "luamenu"[uVar6]) goto LAB_1801552a0;
  }
  pcVar7 = "lua/";
  goto LAB_1801550f3;
  while (uVar5 = uVar6, uVar6 != 5) {
LAB_1801552a0:
    uVar6 = uVar5 + 1;
    if (local_2d8[uVar5] != (&DAT_18035ff50)[uVar5]) {
      iVar3 = strcmp(local_2d8,"download");
      pcVar7 = "download/";
      if (iVar3 != 0) {
        pcVar7 = "";
      }
      goto LAB_1801550f3;
    }
  }
  pcVar7 = "data/";
LAB_1801550f3:
  cVar1 = *pcVar7;
  uVar5 = uVar9;
  while ((cVar1 != '\0' && (uVar5 + 1 < param_4))) {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    *(char *)(param_3 + uVar5) = cVar1;
    cVar1 = *pcVar7;
    uVar5 = uVar5 + 1;
  }
  if (uVar8 != 0) {
    do {
      uVar6 = uVar5 + 1;
      if (param_4 <= uVar6) break;
      pcVar7 = pcVar10 + uVar9;
      uVar9 = uVar9 + 1;
      *(char *)(param_3 + uVar5) = *pcVar7;
      uVar5 = uVar6;
    } while (uVar9 < uVar8);
  }
  for (; (uVar5 != 0 && (*(char *)(param_3 + -1 + uVar5) == '/')); uVar5 = uVar5 - 1) {
  }
  *(undefined1 *)(param_3 + uVar5) = 0;
  return uVar5;
}


)B180154f20",
    "55ed172396c7b3efd8414921487593458b90413707aed07d6c034fc3265f1e0d",
    R"F180154f20C()F180154f20C",
    R"F180154f20D(LAB_180154fdc
LAB_180154ffa
LAB_1801550ec
LAB_1801550f3
LAB_180155210
LAB_180155240
LAB_180155270
LAB_1801552a0
DAT_18035ff34
DAT_18035ff38
DAT_18035ff3c
DAT_18035ff50
DAT_1803da4c0)F180154f20D",
    R"F180154f20T(""
"lua/"
"data/"
"@root/"
"luamenu"
"download"
"base_path"
"download/"
"garrysmod"
"executable_path")F180154f20T",
    R"F180154f20F(28: if (param_3 == 0) {
29: return 0;
34: if (param_1 != (byte *)0x0) {
35: for (; ((bVar2 = *param_1, bVar2 == 0x2f || (bVar2 == 0x5c)) ||
39: if (bVar2 != 0) {
40: do {
41: if (599 < uVar8 + 1) break;
43: if (bVar2 == 0x5c) {
45: LAB_180154fdc:
46: if ((uVar8 != 0) && (local_2d8[uVar8 + 0x2f] != '/')) goto LAB_180154ffa;
48: else {
49: if (bVar2 == 0x2f) goto LAB_180154fdc;
50: LAB_180154ffa:
57: for (; (uVar8 != 0 && (local_2d8[uVar8 + 0x2f] == '/')); uVar8 = uVar8 - 1) {
63: if (param_2 != (char *)0x0) {
65: if (*param_2 != '\0') {
66: do {
68: if (0x17 < uVar6) break;
76: if ((iVar3 == 0) || (iVar3 = strcmp(local_2d8 + 0x18,"executable_path"), iVar3 == 0)) {
77: if (((uVar8 < 9) || (iVar3 = memcmp(local_2d8 + 0x30,"garrysmod",9), iVar3 != 0)) ||
80: goto LAB_1801550f3;
84: goto LAB_1801550ec;
87: if ((param_2 != (char *)0x0) && (uVar5 = uVar9, *param_2 != '\0')) {
88: do {
90: if (0x17 < uVar6) break;
98: do {
101: if (local_2d8[uVar5] != (&DAT_18035ff34)[uVar5]) goto LAB_180155210;
105: goto LAB_1801550f3;
108: LAB_1801550ec:
110: goto LAB_1801550f3;
111: while (uVar6 = uVar4, uVar4 != 4) {
112: LAB_180155210:
115: if (local_2d8[uVar6] != (&DAT_18035ff38)[uVar6]) goto LAB_180155240;
118: goto LAB_1801550f3;
119: while (uVar5 = uVar4, uVar4 != 4) {
120: LAB_180155240:
123: if (local_2d8[uVar5] != (&DAT_18035ff3c)[uVar5]) goto LAB_180155270;
126: goto LAB_1801550f3;
127: while (uVar6 = uVar4, uVar4 != 8) {
128: LAB_180155270:
131: if (local_2d8[uVar6] != "luamenu"[uVar6]) goto LAB_1801552a0;
134: goto LAB_1801550f3;
135: while (uVar5 = uVar6, uVar6 != 5) {
136: LAB_1801552a0:
138: if (local_2d8[uVar5] != (&DAT_18035ff50)[uVar5]) {
141: if (iVar3 != 0) {
144: goto LAB_1801550f3;
148: LAB_1801550f3:
151: while ((cVar1 != '\0' && (uVar5 + 1 < param_4))) {
158: if (uVar8 != 0) {
159: do {
161: if (param_4 <= uVar6) break;
168: for (; (uVar5 != 0 && (*(char *)(param_3 + -1 + uVar5) == '/')); uVar5 = uVar5 - 1) {
171: return uVar5;)F180154f20F",
    R"F180154f20U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180154fdc.
TODO: recover the declaration, type and value for global/data reference LAB_180154ffa.
TODO: recover the declaration, type and value for global/data reference LAB_1801550ec.
TODO: recover the declaration, type and value for global/data reference LAB_1801550f3.
TODO: recover the declaration, type and value for global/data reference LAB_180155210.
TODO: recover the declaration, type and value for global/data reference LAB_180155240.
TODO: recover the declaration, type and value for global/data reference LAB_180155270.
TODO: recover the declaration, type and value for global/data reference LAB_1801552a0.
TODO: recover the declaration, type and value for global/data reference DAT_18035ff34.
TODO: recover the declaration, type and value for global/data reference DAT_18035ff38.
TODO: recover the declaration, type and value for global/data reference DAT_18035ff3c.
TODO: recover the declaration, type and value for global/data reference DAT_18035ff50.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.)F180154f20U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180154f20() noexcept {
    return kFunction_0x180154f20;
}

// 0x180155310 FUN_180155310
// source: re/dump/decompile/0x180155310_FUN_180155310.c
// size: 360 bytes; thunk: false
// body sha256: e4f450e083b8a981770cc18bfe8c7620e5803513ea2c9d802d8b732ef2768ef7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180155310{
    "0x180155310",
    "FUN_180155310",
    R"F180155310S(undefined FUN_180155310())F180155310S",
    R"B180155310(// 0x180155310  FUN_180155310
// size=360 thunk=false
// signature: undefined FUN_180155310()
// status: ok


int FUN_180155310(char *param_1,ulonglong param_2)

{
  char cVar1;
  ulonglong _Size;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  
  pcVar2 = DAT_1803e9df8;
  iVar6 = 0;
  pcVar7 = DAT_1803e9df0;
  do {
    if (pcVar7 == pcVar2) {
      return iVar6;
    }
    if (pcVar7[0x24] == '\0') {
      _Size = *(ulonglong *)(pcVar7 + 0x10);
      if ((_Size != 0) && (_Size <= param_2)) {
        pcVar5 = pcVar7;
        if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
          pcVar5 = *(char **)pcVar7;
        }
        iVar3 = memcmp(param_1,pcVar5,_Size);
        if ((iVar3 == 0) && ((param_2 == _Size || (param_1[_Size] == '/')))) {
          if (*(int *)(pcVar7 + 0x20) == 0) {
            return 1;
          }
          if (param_2 != _Size) {
            return 1;
          }
          if (iVar6 == 0) {
            iVar6 = 2;
          }
        }
      }
    }
    else {
      pcVar5 = pcVar7;
      if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
        pcVar5 = *(char **)pcVar7;
      }
      pcVar4 = (char *)0x0;
      pcVar8 = (char *)0x0;
      bVar10 = false;
      cVar1 = *param_1;
      pcVar9 = param_1;
      while (cVar1 != '\0') {
        cVar1 = *pcVar5;
        if (cVar1 == '*') {
          pcVar4 = pcVar5 + (ulonglong)(pcVar5[1] == '*') + 1;
          bVar10 = pcVar5[1] == '*';
          pcVar5 = pcVar4;
          pcVar8 = pcVar9;
        }
        else {
          if (cVar1 == '?') {
            if (*pcVar9 != '/') {
LAB_180155409:
              pcVar5 = pcVar5 + 1;
              pcVar9 = pcVar9 + 1;
              goto LAB_1801553c3;
            }
          }
          else if ((cVar1 != '\0') && (cVar1 == *pcVar9)) goto LAB_180155409;
          if ((pcVar4 == (char *)0x0) || ((!bVar10 && (*pcVar8 == '/')))) goto LAB_18015545a;
          pcVar9 = pcVar8 + 1;
          pcVar5 = pcVar4;
          pcVar8 = pcVar9;
        }
LAB_1801553c3:
        cVar1 = *pcVar9;
      }
      cVar1 = *pcVar5;
      while (cVar1 == '*') {
        pcVar5 = pcVar5 + (ulonglong)(pcVar5[1] == '*') + 1;
        cVar1 = *pcVar5;
      }
      if (cVar1 == '\0') {
        return 1;
      }
    }
LAB_18015545a:
    pcVar7 = pcVar7 + 0x28;
  } while( true );
}


)B180155310",
    "e4f450e083b8a981770cc18bfe8c7620e5803513ea2c9d802d8b732ef2768ef7",
    R"F180155310C()F180155310C",
    R"F180155310D(LAB_1801553c3
LAB_180155409
LAB_18015545a
DAT_1803e9df0
DAT_1803e9df8)F180155310D",
    R"F180155310T()F180155310T",
    R"F180155310F(25: do {
26: if (pcVar7 == pcVar2) {
27: return iVar6;
29: if (pcVar7[0x24] == '\0') {
31: if ((_Size != 0) && (_Size <= param_2)) {
33: if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
37: if ((iVar3 == 0) && ((param_2 == _Size || (param_1[_Size] == '/')))) {
38: if (*(int *)(pcVar7 + 0x20) == 0) {
39: return 1;
41: if (param_2 != _Size) {
42: return 1;
44: if (iVar6 == 0) {
50: else {
52: if (0xf < *(ulonglong *)(pcVar7 + 0x18)) {
60: while (cVar1 != '\0') {
62: if (cVar1 == '*') {
68: else {
69: if (cVar1 == '?') {
70: if (*pcVar9 != '/') {
71: LAB_180155409:
74: goto LAB_1801553c3;
77: else if ((cVar1 != '\0') && (cVar1 == *pcVar9)) goto LAB_180155409;
78: if ((pcVar4 == (char *)0x0) || ((!bVar10 && (*pcVar8 == '/')))) goto LAB_18015545a;
83: LAB_1801553c3:
87: while (cVar1 == '*') {
91: if (cVar1 == '\0') {
92: return 1;
95: LAB_18015545a:)F180155310F",
    R"F180155310U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_1801553c3.
TODO: recover the declaration, type and value for global/data reference LAB_180155409.
TODO: recover the declaration, type and value for global/data reference LAB_18015545a.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9df0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9df8.)F180155310U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180155310() noexcept {
    return kFunction_0x180155310;
}

// 0x180155480 FUN_180155480
// source: re/dump/decompile/0x180155480_FUN_180155480.c
// size: 217 bytes; thunk: false
// body sha256: 948d01b4d9fa3f93331c995dffb2c361c3f092aa3c7ddbbfe8da570da0021fc9
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180155480{
    "0x180155480",
    "FUN_180155480",
    R"F180155480S(undefined FUN_180155480())F180155480S",
    R"B180155480(// 0x180155480  FUN_180155480
// size=217 thunk=false
// signature: undefined FUN_180155480()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180155480(undefined8 param_1,char param_2)

{
  DWORD DVar1;
  ULONGLONG UVar2;
  undefined *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [48];
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if (DAT_180409d18 == '\0') {
    UVar2 = GetTickCount64();
    DVar1 = GetCurrentProcessId();
    FUN_180012ac0(&DAT_180409d18,0x18,"%016llx",
                  (ulonglong)DVar1 * 0x9e3779b1 ^ UVar2 << 0x14 ^ 0x180409d18);
  }
  puVar3 = &DAT_18035ff98;
  if (param_2 != '\0') {
    puVar3 = &DAT_18035ff90;
  }
  FUN_180012ac0(local_48,0x30,puVar3,&DAT_180409d18);
  (*DAT_180409f30)(param_1,local_48);
  (*DAT_180409f50)(param_1,1);
  return;
}


)B180155480",
    "948d01b4d9fa3f93331c995dffb2c361c3f092aa3c7ddbbfe8da570da0021fc9",
    R"F180155480C(FUN_180012ac0)F180155480C",
    R"F180155480D(DAT_18035ff90
DAT_18035ff98
DAT_1803da4c0
DAT_180409d18
DAT_180409f30
DAT_180409f50)F180155480D",
    R"F180155480T("%016llx")F180155480T",
    R"F180155480F(20: if (DAT_180409d18 == '\0') {
27: if (param_2 != '\0') {
33: return;)F180155480F",
    R"F180155480U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_18035ff90.
TODO: recover the declaration, type and value for global/data reference DAT_18035ff98.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_180409d18.
TODO: recover the declaration, type and value for global/data reference DAT_180409f30.
TODO: recover the declaration, type and value for global/data reference DAT_180409f50.
TODO: resolve the indirect call in body 31: (*DAT_180409f30)(param_1,local_48);.
TODO: resolve the indirect call in body 32: (*DAT_180409f50)(param_1,1);.)F180155480U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180155480() noexcept {
    return kFunction_0x180155480;
}

// 0x180155560 FUN_180155560
// source: re/dump/decompile/0x180155560_FUN_180155560.c
// size: 126 bytes; thunk: false
// body sha256: 3133d710265fef2097627e385fe80503448ed2763c11af5460295c5c56f20d7d
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x180155560{
    "0x180155560",
    "FUN_180155560",
    R"F180155560S(undefined FUN_180155560())F180155560S",
    R"B180155560(// 0x180155560  FUN_180155560
// size=126 thunk=false
// signature: undefined FUN_180155560()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_180155560(void)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  local_28 = 0x93fd561a96ab0c67;
  local_20 = 0xa94d2abb13dd142f;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_38,&local_20);
  puVar2 = (undefined1 *)FUN_1801fcfc0(*plVar1 + 0x28);
  return *puVar2;
}


)B180155560",
    "3133d710265fef2097627e385fe80503448ed2763c11af5460295c5c56f20d7d",
    R"F180155560C(FUN_1801fcfc0
FUN_180241a30)F180155560C",
    R"F180155560D(DAT_1803da4c0
DAT_1803fadf0)F180155560D",
    R"F180155560T()F180155560T",
    R"F180155560F(27: return *puVar2;)F180155560F",
    R"F180155560U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803fadf0.)F180155560U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x180155560() noexcept {
    return kFunction_0x180155560;
}

// 0x1801555e0 FUN_1801555e0
// source: re/dump/decompile/0x1801555e0_FUN_1801555e0.c
// size: 660 bytes; thunk: false
// body sha256: 8b202a0598dd66f25134ff39a055f538f9318b0b03167e7ee5c1f44b297325c7
// This record is generated; edit the decompiler input or the generator, not this file.
namespace {
constexpr sf::reconstructed::FunctionTranslation kFunction_0x1801555e0{
    "0x1801555e0",
    "FUN_1801555e0",
    R"F1801555e0S(undefined FUN_1801555e0())F1801555e0S",
    R"B1801555e0(// 0x1801555e0  FUN_1801555e0
// size=660 thunk=false
// signature: undefined FUN_1801555e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801555e0(undefined8 param_1,undefined4 param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_368 [32];
  undefined4 local_348;
  longlong local_340;
  ulonglong local_338;
  ulonglong local_330;
  longlong local_328;
  undefined *local_320;
  ulonglong local_318 [2];
  undefined1 local_308 [704];
  ulonglong local_48;
  
  local_48 = DAT_1803da4c0 ^ (ulonglong)auStack_368;
  local_348 = param_2;
  local_328 = param_3;
  iVar3 = (*DAT_180409f10)();
  if ((iVar3 == 5) && (uVar4 = (*DAT_180409d38)(param_1,param_2), uVar4 != 0)) {
    local_320 = &DAT_1803e8780;
    local_338 = uVar4;
    iVar3 = _Mtx_lock(&DAT_1803e8780);
    if (iVar3 != 0) {
      std::_Throw_Cpp_error(5);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (DAT_1803e87cc == 0x7fffffff) {
      DAT_1803e87cc = 0x7ffffffe;
      std::_Throw_Cpp_error(6);
    }
    if (DAT_1803e9df0 != DAT_1803e9df8) {
      uVar6 = 1;
      lVar10 = 0;
      local_340 = 0;
      local_330 = 1;
      if (uVar4 != 0) {
        do {
          uVar8 = local_330;
          (*DAT_180409f18)(param_1,param_2,local_330 & 0xffffffff);
          iVar3 = (*DAT_180409f10)(param_1,0xffffffff);
          if (iVar3 == 4) {
            local_318[0] = 0;
            lVar5 = (*DAT_180409e58)(param_1,0xffffffff,local_318);
            uVar9 = local_318[0];
            if (lVar5 == 0) goto LAB_1801557e9;
            uVar4 = 0;
            uVar7 = 0;
            if (param_4 != 0) {
              do {
                uVar4 = uVar7 + 1;
                if (699 < uVar4) goto LAB_180155757;
                local_308[uVar7] = *(undefined1 *)(local_328 + uVar7);
                uVar7 = uVar4;
              } while (uVar4 < param_4);
              if (param_4 != 0) {
LAB_180155757:
                uVar4 = uVar7;
                if (uVar7 + 1 < 700) {
                  local_308[uVar7] = 0x2f;
                  uVar4 = uVar7 + 1;
                }
              }
            }
            uVar7 = 0;
            if (local_318[0] != 0) {
              do {
                uVar1 = uVar4 + 1;
                uVar8 = local_330;
                if (699 < uVar1) break;
                iVar3 = tolower((uint)*(byte *)(uVar7 + lVar5));
                local_308[uVar4] = (char)iVar3;
                uVar7 = uVar7 + 1;
                uVar4 = uVar1;
                uVar8 = local_330;
              } while (uVar7 < uVar9);
            }
            local_308[uVar4] = 0;
            iVar3 = FUN_180155310(local_308,uVar4);
            uVar4 = local_338;
            lVar10 = local_340;
            param_2 = local_348;
            if (iVar3 != 1) goto LAB_1801557e9;
            (*DAT_180409f20)(param_1,0xfffffffe);
            lVar10 = local_340 + 1;
            uVar4 = local_338;
            local_340 = lVar10;
            param_2 = local_348;
          }
          else {
LAB_1801557e9:
            uVar9 = uVar6 & 0xffffffff;
            uVar6 = uVar6 + 1;
            (*DAT_180409d10)(param_1,param_2,uVar9);
          }
          local_330 = uVar8 + 1;
        } while (local_330 <= uVar4);
        if (lVar10 != 0) {
          for (; uVar6 <= uVar4; uVar6 = uVar6 + 1) {
            (*DAT_180409f58)(param_1);
            (*DAT_180409d10)(param_1,param_2,uVar6 & 0xffffffff);
          }
          LOCK();
          DAT_180409f40 = DAT_180409f40 + lVar10;
          UNLOCK();
        }
      }
    }
    _Mtx_unlock(&DAT_1803e8780);
  }
  return;
}


)B1801555e0",
    "8b202a0598dd66f25134ff39a055f538f9318b0b03167e7ee5c1f44b297325c7",
    R"F1801555e0C(FUN_180155310)F1801555e0C",
    R"F1801555e0D(LAB_180155757
LAB_1801557e9
DAT_1803da4c0
DAT_1803e8780
DAT_1803e87cc
DAT_1803e9df0
DAT_1803e9df8
DAT_180409d10
DAT_180409d38
DAT_180409e58
DAT_180409f10
DAT_180409f18
DAT_180409f20
DAT_180409f40
DAT_180409f58)F1801555e0D",
    R"F1801555e0T()F1801555e0T",
    R"F1801555e0F(37: if ((iVar3 == 5) && (uVar4 = (*DAT_180409d38)(param_1,param_2), uVar4 != 0)) {
41: if (iVar3 != 0) {
45: return;
47: if (DAT_1803e87cc == 0x7fffffff) {
51: if (DAT_1803e9df0 != DAT_1803e9df8) {
56: if (uVar4 != 0) {
57: do {
61: if (iVar3 == 4) {
65: if (lVar5 == 0) goto LAB_1801557e9;
68: if (param_4 != 0) {
69: do {
71: if (699 < uVar4) goto LAB_180155757;
75: if (param_4 != 0) {
76: LAB_180155757:
78: if (uVar7 + 1 < 700) {
85: if (local_318[0] != 0) {
86: do {
89: if (699 < uVar1) break;
102: if (iVar3 != 1) goto LAB_1801557e9;
109: else {
110: LAB_1801557e9:
117: if (lVar10 != 0) {
118: for (; uVar6 <= uVar4; uVar6 = uVar6 + 1) {
130: return;)F1801555e0F",
    R"F1801555e0U(TODO: semantic reconstruction is incomplete; this is a source-level transcription of the decompiler body.
TODO: no vendor PDB or live object layout is available; verify recovered types, calling conventions and stack offsets before execution.
TODO: recover the declaration, type and value for global/data reference LAB_180155757.
TODO: recover the declaration, type and value for global/data reference LAB_1801557e9.
TODO: recover the declaration, type and value for global/data reference DAT_1803da4c0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e8780.
TODO: recover the declaration, type and value for global/data reference DAT_1803e87cc.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9df0.
TODO: recover the declaration, type and value for global/data reference DAT_1803e9df8.
TODO: recover the declaration, type and value for global/data reference DAT_180409d10.
TODO: recover the declaration, type and value for global/data reference DAT_180409d38.
TODO: recover the declaration, type and value for global/data reference DAT_180409e58.
TODO: recover the declaration, type and value for global/data reference DAT_180409f10.
TODO: recover the declaration, type and value for global/data reference DAT_180409f18.
TODO: recover the declaration, type and value for global/data reference DAT_180409f20.
TODO: recover the declaration, type and value for global/data reference DAT_180409f40.
TODO: recover the declaration, type and value for global/data reference DAT_180409f58.
TODO: resolve the indirect call in body 36: iVar3 = (*DAT_180409f10)();.
TODO: resolve the indirect call in body 37: if ((iVar3 == 5) && (uVar4 = (*DAT_180409d38)(param_1,param_2), uVar4 != 0)) {.
TODO: resolve the indirect call in body 43: pcVar2 = (code *)swi(3);.
TODO: resolve the indirect call in body 44: (*pcVar2)();.
TODO: resolve the indirect call in body 59: (*DAT_180409f18)(param_1,param_2,local_330 & 0xffffffff);.
TODO: resolve the indirect call in body 60: iVar3 = (*DAT_180409f10)(param_1,0xffffffff);.
TODO: resolve the indirect call in body 63: lVar5 = (*DAT_180409e58)(param_1,0xffffffff,local_318);.
TODO: resolve the indirect call in body 103: (*DAT_180409f20)(param_1,0xfffffffe);.
TODO: resolve the indirect call in body 113: (*DAT_180409d10)(param_1,param_2,uVar9);.
TODO: resolve the indirect call in body 119: (*DAT_180409f58)(param_1);.
TODO: resolve the indirect call in body 120: (*DAT_180409d10)(param_1,param_2,uVar6 & 0xffffffff);.)F1801555e0U",
};
}  // namespace

const sf::reconstructed::FunctionTranslation& Function_0x1801555e0() noexcept {
    return kFunction_0x1801555e0;
}

}  // namespace sf::reconstructed
