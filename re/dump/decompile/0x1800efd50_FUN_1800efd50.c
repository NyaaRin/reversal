// 0x1800efd50  FUN_1800efd50
// size=2259 thunk=false
// signature: undefined FUN_1800efd50()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_1800efd50(ulonglong *param_1,int param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  size_t sVar10;
  ulonglong *puVar11;
  char *_Str;
  undefined1 auStack_358 [32];
  undefined8 local_338;
  undefined1 local_328;
  undefined4 local_324;
  undefined2 local_320;
  ulonglong *local_318;
  ulonglong *local_310;
  undefined4 local_307;
  undefined2 local_303;
  undefined1 local_301;
  ulonglong local_2f8;
  ulonglong uStack_2f0;
  ulonglong local_2e8;
  ulonglong uStack_2e0;
  undefined4 local_2d8;
  ulonglong local_2d0;
  ulonglong uStack_2c8;
  ulonglong local_2c0;
  ulonglong local_2b8;
  ulonglong local_2a8;
  ulonglong uStack_2a0;
  ulonglong local_298;
  ulonglong uStack_290;
  int local_288;
  undefined1 local_280;
  undefined7 uStack_27f;
  ulonglong local_278;
  ulonglong local_270;
  ulonglong local_268;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  ulonglong *local_238;
  ulonglong *local_228;
  ulonglong *local_220;
  ulonglong *local_218;
  ulonglong *local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  ulonglong local_1f0 [4];
  ulonglong local_1d0 [5];
  undefined1 local_1a8 [80];
  ulonglong local_158;
  ulonglong uStack_150;
  ulonglong local_148;
  ulonglong uStack_140;
  int local_138;
  ulonglong local_130;
  ulonglong uStack_128;
  ulonglong local_120;
  ulonglong local_118;
  char local_110;
  undefined1 local_108;
  undefined7 uStack_107;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  int local_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_b8 [3];
  ulonglong uStack_a0;
  undefined1 local_98 [24];
  undefined1 local_80 [40];
  ulonglong local_58;
  
  local_58 = DAT_1803da4c0 ^ (ulonglong)auStack_358;
  local_324 = 0;
  local_238 = param_1;
  if (param_2 == 1) {
    local_b8[1] = 0;
    local_b8[2] = _DAT_1803814b0;
    uStack_a0 = _UNK_1803814b8;
    local_b8[0] = 0;
    cVar3 = FUN_1800f0630(1,param_3,local_b8);
    if (cVar3 == '\0') {
      local_318 = local_1d0;
      uVar6 = FUN_18016d4c0(local_1d0,local_b8);
      FUN_1800228e0(&local_108,uVar6);
      if ((0 < param_4) && (param_4 < local_e8)) {
        local_e8 = param_4;
      }
      *param_1 = 0;
      param_1[1] = 0;
      *param_1 = CONCAT71(uStack_107,local_108);
      param_1[1] = local_100;
      param_1[2] = local_f8;
      param_1[3] = uStack_f0;
      local_f8 = _DAT_1803814b0;
      uStack_f0 = _UNK_1803814b8;
      local_108 = 0;
      *(int *)(param_1 + 4) = local_e8;
      param_1[5] = CONCAT71(uStack_df,local_e0);
      param_1[6] = local_d8;
      param_1[7] = local_d0;
      param_1[8] = local_c8;
      local_d0 = 0;
      local_c8 = 0xf;
      local_e0 = 0;
      *(undefined1 *)(param_1 + 9) = 1;
      local_324 = 1;
      local_228 = param_1;
      FUN_18020e450(&local_e0);
      FUN_18020e450(&local_108);
      puVar11 = local_b8;
    }
    else {
      *(undefined1 *)(param_1 + 9) = 0;
      local_324 = 1;
      puVar11 = local_b8;
    }
  }
  else {
    lVar7 = FUN_1800ebf80(param_2);
    local_110 = '\0';
    if ((lVar7 != 0) && (*(longlong *)(lVar7 + 8) != 0)) {
      cVar3 = FUN_1800ef850(param_2);
      if (cVar3 == '\0') {
        local_2f8 = 0;
        uStack_2f0 = 0;
        local_2e8 = 0;
        uStack_2e0 = 0;
        FUN_18001d080(&local_2f8,&DAT_18033e5ea,0);
        local_2d8 = 1;
        local_2d0 = 0;
        uStack_2c8 = 0;
        local_2c0 = 0;
        local_2b8 = 0;
        FUN_18001d080(&local_2d0,"Lua editor state is not ready",0x1d);
        if (local_110 == '\0') {
          local_220 = &local_158;
          local_158 = local_2f8;
          uStack_150 = uStack_2f0;
          local_148 = local_2e8;
          uStack_140 = uStack_2e0;
          local_2e8 = _DAT_1803814b0;
          uStack_2e0 = _UNK_1803814b8;
          local_2f8 = local_2f8 & 0xffffffffffffff00;
          local_138 = local_2d8;
          local_130 = local_2d0;
          uStack_128 = uStack_2c8;
          local_120 = local_2c0;
          local_118 = local_2b8;
          local_2c0 = 0;
          local_2b8 = 0xf;
          local_2d0 = local_2d0 & 0xffffffffffffff00;
          local_110 = '\x01';
        }
        else {
          FUN_18020e8a0(&local_158,&local_2f8);
          local_138 = local_2d8;
          FUN_18020e8a0(&local_130,&local_2d0);
        }
        FUN_18020e450(&local_2d0);
        FUN_18020e450(&local_2f8);
        *(undefined1 *)(param_1 + 9) = 0;
        if (local_110 != '\0') {
          local_318 = param_1;
          uVar6 = FUN_18001d060(param_1);
          FUN_18021e510(uVar6,&local_158);
          *(int *)(param_1 + 4) = local_138;
          FUN_18020ea50(param_1 + 5,&local_130);
          *(undefined1 *)(param_1 + 9) = 1;
        }
        local_324 = 1;
        FUN_1800f57b0(&local_158);
        return param_1;
      }
      uVar6 = *(undefined8 *)(lVar7 + 8);
      uVar4 = FUN_180022f60(uVar6);
      uVar2 = DAT_1803fa338;
      uVar1 = DAT_1803fa330;
      local_318 = (ulonglong *)CONCAT44(local_318._4_4_,DAT_1803fa339);
      local_320 = DAT_1803fa33d;
      local_328 = DAT_1803fa33f;
      DAT_1803fa338 = 1;
      DAT_1803fa339 = local_307;
      DAT_1803fa33d = local_303;
      DAT_1803fa33f = local_301;
      DAT_1803fa330 = uVar6;
      puVar8 = (undefined8 *)FUN_1800efbb0(local_98,uVar6);
      local_208 = *puVar8;
      uStack_200 = puVar8[1];
      local_1f8 = puVar8[2];
      FUN_1800f5930(local_98);
      FUN_180025890(local_98,uVar6);
      FUN_180025df0(local_80);
      FUN_180016400(local_80);
      uVar9 = FUN_180016400(param_3);
      local_338 = 0;
      iVar5 = FUN_180022850(uVar6,uVar9,*(undefined8 *)(param_3 + 0x10));
      if (iVar5 == 0) {
        cVar3 = FUN_180026890(uVar6);
        if (cVar3 == '\0') {
          FUN_180014410(&DAT_18034f668);
        }
        DAT_1803ff8e8 = DAT_1803ff8e8 + 1;
        iVar5 = FUN_180023180(uVar6,0,0);
        if (iVar5 != 0) {
          local_310 = local_1f0;
          uVar9 = FUN_180022eb0(uVar6);
          uVar9 = FUN_18001d010(local_1f0,uVar9);
          uVar9 = FUN_1800228e0(local_1a8,uVar9);
          FUN_180203d70(&local_158,uVar9);
          FUN_180022e80(local_1a8);
        }
        if (0 < DAT_1803ff8e8) {
          DAT_1803ff8e8 = DAT_1803ff8e8 + -1;
        }
      }
      else {
        local_310 = local_1f0;
        uVar9 = FUN_180022eb0();
        uVar9 = FUN_18001d010(local_1f0,uVar9);
        uVar9 = FUN_1800228e0(local_1a8,uVar9);
        FUN_180203d70(&local_158,uVar9);
        FUN_180022e80(local_1a8);
        if ((0 < param_4) && (param_4 < local_138)) {
          local_138 = param_4;
        }
      }
      FUN_1800efcd0(uVar6,&local_208);
      FUN_180022fb0(uVar6,uVar4);
      DAT_1803fa339 = local_318._0_4_;
      DAT_1803fa33d = local_320;
      DAT_1803fa33f = local_328;
      DAT_1803fa330 = uVar1;
      DAT_1803fa338 = uVar2;
      FUN_1800f5940(param_1,&local_158);
      local_324 = 1;
      FUN_18020e450(local_80);
      FUN_180025a90(local_98);
      FUN_1800f57b0(&local_158);
      return param_1;
    }
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_298 = 0;
    uStack_290 = 0;
    FUN_18001d080(&local_2a8,&DAT_18033e5ea,0);
    local_288 = 1;
    if (param_2 == 0) {
      _Str = "Client/shared";
    }
    else if (param_2 == 1) {
      _Str = "Server";
    }
    else if (param_2 == 2) {
      _Str = "Menu";
    }
    else {
      _Str = "Unknown";
    }
    local_258 = 0;
    uStack_250 = 0;
    local_248 = 0;
    uStack_240 = 0;
    sVar10 = strlen(_Str);
    FUN_18001d080(&local_258,_Str,sVar10);
    FUN_1801fc680(&local_280,&local_258," Lua state is not ready");
    if (local_110 == '\0') {
      local_218 = &local_158;
      local_158 = local_2a8;
      uStack_150 = uStack_2a0;
      local_148 = local_298;
      uStack_140 = uStack_290;
      local_298 = _DAT_1803814b0;
      uStack_290 = _UNK_1803814b8;
      local_2a8 = local_2a8 & 0xffffffffffffff00;
      local_138 = local_288;
      local_130 = CONCAT71(uStack_27f,local_280);
      uStack_128 = local_278;
      local_120 = local_270;
      local_118 = local_268;
      local_270 = 0;
      local_268 = 0xf;
      local_280 = 0;
      local_110 = '\x01';
    }
    else {
      FUN_18020e8a0(&local_158,&local_2a8);
      local_138 = local_288;
      FUN_18020e8a0(&local_130,&local_280);
    }
    FUN_18020e450(&local_280);
    FUN_18020e450(&local_2a8);
    FUN_18020e450(&local_258);
    *(undefined1 *)(param_1 + 9) = 0;
    if (local_110 != '\0') {
      *param_1 = 0;
      param_1[1] = 0;
      *param_1 = local_158;
      param_1[1] = uStack_150;
      param_1[2] = local_148;
      param_1[3] = uStack_140;
      local_148 = _DAT_1803814b0;
      uStack_140 = _UNK_1803814b8;
      local_158 = local_158 & 0xffffffffffffff00;
      *(int *)(param_1 + 4) = local_138;
      param_1[5] = local_130;
      param_1[6] = uStack_128;
      param_1[7] = local_120;
      param_1[8] = local_118;
      local_120 = 0;
      local_118 = 0xf;
      local_130 = local_130 & 0xffffffffffffff00;
      *(undefined1 *)(param_1 + 9) = 1;
      local_210 = param_1;
    }
    local_324 = 1;
    if (local_110 == '\0') {
      return param_1;
    }
    local_310 = &local_158;
    FUN_18020e450(&local_130);
    puVar11 = &local_158;
  }
  FUN_18020e450(puVar11);
  return param_1;
}


