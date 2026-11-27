// 0x18008bdf0  Features_Weapons_Backends_TacRPWeaponBackend_vfunc04
// size=5396 thunk=false
// signature: undefined Features_Weapons_Backends_TacRPWeaponBackend_vfunc04()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * Features_Weapons_Backends_TacRPWeaponBackend_vfunc04
                  (longlong param_1,float *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  char *lp;
  bool bVar3;
  bool bVar4;
  undefined4 *puVar5;
  void *pvVar6;
  char cVar7;
  undefined4 uVar8;
  BOOL BVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  float *pfVar13;
  double *pdVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  void *pvVar18;
  byte bVar19;
  uint uVar20;
  ulonglong uVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_3a8 [32];
  undefined8 *local_388;
  undefined4 *local_380;
  undefined4 *local_378;
  undefined4 *local_370;
  undefined4 *local_368;
  double *local_360;
  undefined8 *local_358;
  double local_350;
  double local_348;
  undefined4 *local_340;
  double local_338;
  double local_330;
  undefined4 local_328;
  bool local_318;
  byte local_317;
  byte local_316;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308 [2];
  double local_300;
  float local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  char local_2d8;
  double local_2d0;
  undefined1 local_2c8 [12];
  undefined1 local_2bc [12];
  undefined1 local_2b0 [16];
  undefined **local_2a0;
  longlong local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_278;
  float local_270 [2];
  undefined8 local_268;
  float local_260 [2];
  undefined4 *local_258;
  undefined4 local_250;
  float local_248;
  float local_244;
  float local_240;
  undefined4 *local_238;
  undefined4 local_230;
  undefined8 *local_228 [2];
  float local_218;
  float local_214;
  float local_208;
  float local_204;
  float local_200;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1d8;
  undefined8 local_1d4;
  undefined8 local_1c8;
  undefined1 local_1c0;
  undefined1 local_1bf;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
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
  undefined8 local_108;
  ulonglong local_f8;
  
  local_f8 = DAT_1803da4c0 ^ (ulonglong)auStack_3a8;
  uVar15 = 0;
  local_288 = param_3;
  if ((DAT_1803fa678 != (longlong *)0x0) &&
     (lVar11 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0), lVar11 != 0)) {
    uVar15 = *(undefined8 *)(lVar11 + 8);
  }
  FUN_18002dc30(&local_2f0,uVar15);
  pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar8 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar11 = (*pcVar2)(DAT_1803fa360,uVar8);
  if ((lVar11 == 0) || (param_4 == (undefined4 *)0x0)) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    if (local_2d8 == '\0') {
      return param_2;
    }
    if (DAT_1803faf78 == (code *)0x0) {
      return param_2;
    }
    (*DAT_1803faf78)(local_2f0,local_2e8,local_2e0,local_2dc);
    return param_2;
  }
  local_316 = *(byte *)(param_4 + 8) & 1;
  FUN_18008b430(param_1,&local_218,param_4 + 2);
  fVar28 = local_214 - (float)param_4[3];
  fVar23 = (float)FUN_1802d3e00(local_218 - (float)param_4[2]);
  fVar24 = (float)FUN_1802d3e00(fVar28);
  fVar29 = 0.0;
  fVar28 = DAT_1803812a8;
  if (DAT_1803fa610 != (longlong *)0x0) {
    local_268._4_4_ = local_214;
    local_260[0] = 0.0;
    uVar8 = FUN_1802d3e00();
    local_268 = CONCAT44(local_268._4_4_,uVar8);
    uVar8 = FUN_1802d3e00(local_268._4_4_);
    local_268 = CONCAT44(uVar8,(float)local_268);
    FUN_1802d4050(&local_268,&local_248);
    FUN_18001c430(lVar11,&local_278);
    fVar28 = DAT_1803812d4;
    local_208 = (float)local_278;
    local_204 = local_278._4_4_;
    local_200 = local_270[0];
    if (*(char *)(param_1 + 0x5c) != '\0') {
      fVar26 = *(float *)(param_1 + 0x50) - (float)local_278;
      fVar27 = *(float *)(param_1 + 0x54) - local_278._4_4_;
      fVar25 = *(float *)(param_1 + 0x58) - local_270[0];
      if (fVar27 * fVar27 + fVar26 * fVar26 + fVar25 * fVar25 < DAT_1803812e0) {
        local_208 = *(float *)(param_1 + 0x50);
        local_204 = *(float *)(param_1 + 0x54);
        local_200 = *(float *)(param_1 + 0x58);
      }
    }
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    local_2a0 = vftable_CDoubleTraceFilter;
    local_1c8 = 0;
    local_1f8 = (local_248 * DAT_1803812d4 + local_208) - local_208;
    local_1f4 = (local_244 * DAT_1803812d4 + local_204) - local_204;
    local_1f0 = (local_240 * DAT_1803812d4 + local_200) - local_200;
    local_298 = lVar11;
    local_290 = param_3;
    fVar25 = (float)(*(code *)PTR_FUN_1803da018)
                              (local_1f4 * local_1f4 + local_1f8 * local_1f8 + local_1f0 * local_1f0
                              );
    local_1bf = fVar25 != 0.0;
    local_1d4 = 0;
    local_1d8 = 0;
    local_1c8 = 0;
    local_1c0 = 1;
    local_1e4 = 0;
    local_1e8 = 0;
    local_388 = &local_168;
    (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,&local_208,0x46004003,&local_2a0);
    fVar28 = uStack_140._4_4_ * fVar28;
  }
  local_2f8 = fVar28;
  if (DAT_180425778 == (void *)0x0) {
    DAT_180425778 = (void *)FUN_180016fb0("tacrp_physbullet");
  }
  if (DAT_1804007d8 == (undefined4 *)0x0) {
    DAT_1804007d8 = (undefined4 *)FUN_180016fb0("tacrp_fixedspread");
  }
  if (DAT_1803fd058 == (undefined8 *)0x0) {
    DAT_1803fd058 = (undefined8 *)FUN_180016fb0("tacrp_pelletspread");
  }
  if (DAT_1803fcf30 == (undefined4 *)0x0) {
    DAT_1803fcf30 = (undefined4 *)FUN_180016fb0("tacrp_client_damage");
  }
  pvVar18 = DAT_180425778;
  if ((((DAT_180425778 == (void *)0x0) || (DAT_1804007d8 == (undefined4 *)0x0)) ||
      (DAT_1803fd058 == (undefined8 *)0x0)) || (DAT_1803fcf30 == (undefined4 *)0x0)) {
    if ((DAT_1803f9200 < 5) || (DAT_1803f9200 == (DAT_1803f9200 / 300) * 300)) {
      local_380 = DAT_1803fcf30;
      local_388 = DAT_1803fd058;
      FUN_180014410("[TacRP-FINDVAR] MISS attempt=%d phys=%p fixed=%p pellet=%p client=%p\n",
                    DAT_1803f9200,DAT_180425778,DAT_1804007d8);
    }
    DAT_1803f9200 = DAT_1803f9200 + 1;
  }
  else if (DAT_1803fd0e8 == '\0') {
    local_278 = FUN_180089410();
    FUN_1800197a0(pvVar18);
    pvVar6 = DAT_180425778;
    pvVar18 = *(void **)((longlong)DAT_180425778 + 0x38);
    if (((pvVar18 == (void *)0x0) || (pvVar18 == DAT_180425778)) ||
       (BVar9 = IsBadReadPtr(pvVar18,0x60), BVar9 != 0)) {
      pvVar18 = pvVar6;
    }
    FUN_180014410("[CVAR-LAYOUT] xorOk=%d (str@0x48 plain, f@0x54/n@0x58 xor low32(obj)) valueObj=%p this=%p\n"
                  ,DAT_1803da5c4,pvVar18,pvVar6);
    pvVar18 = DAT_180425778;
    uVar21 = 0;
    do {
      puVar17 = (undefined8 *)(uVar21 + (longlong)pvVar18);
      if ((puVar17 != (undefined8 *)0x0) && (BVar9 = IsBadReadPtr(puVar17,0x20), BVar9 == 0)) {
        local_340 = (undefined4 *)
                    CONCAT44(local_340._4_4_,*(undefined4 *)((longlong)puVar17 + 0x1c));
        local_348 = (double)CONCAT44(local_348._4_4_,*(undefined4 *)(puVar17 + 3));
        local_350 = (double)CONCAT44(local_350._4_4_,*(undefined4 *)((longlong)puVar17 + 0x14));
        local_358 = (undefined8 *)CONCAT44(local_358._4_4_,*(undefined4 *)(puVar17 + 2));
        local_360 = (double *)CONCAT44(local_360._4_4_,*(undefined4 *)((longlong)puVar17 + 0xc));
        local_368 = (undefined4 *)CONCAT44(local_368._4_4_,*(undefined4 *)(puVar17 + 1));
        local_370 = (undefined4 *)CONCAT44(local_370._4_4_,*(undefined4 *)((longlong)puVar17 + 4));
        local_378 = (undefined4 *)CONCAT44(local_378._4_4_,*(undefined4 *)puVar17);
        local_380 = (undefined4 *)puVar17[3];
        local_388 = (undefined8 *)puVar17[2];
        FUN_180014410("[CVAR-DUMP] +0x%02X: %016llX %016llX %016llX %016llX | ints: %d %d %d %d %d %d %d %d\n"
                      ,uVar21,*puVar17,puVar17[1]);
      }
      uVar20 = (int)uVar21 + 0x20;
      uVar21 = (ulonglong)uVar20;
    } while ((int)uVar20 < 0xb9);
    uVar21 = 8;
    do {
      puVar17 = (undefined8 *)(uVar21 + (longlong)pvVar18);
      if ((((puVar17 != (undefined8 *)0x0) && (BVar9 = IsBadReadPtr(puVar17,8), BVar9 == 0)) &&
          (lp = (char *)*puVar17, lp != (char *)0x0)) && (BVar9 = IsBadReadPtr(lp,0x20), BVar9 == 0)
         ) {
        uVar16 = 0;
        do {
          if (lp[uVar16] == '\0') break;
          if (0x5e < (byte)(lp[uVar16] - 0x20U)) goto LAB_18008c392;
          uVar20 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar20;
        } while ((int)uVar20 < 0x10);
        if (*lp != '\0') {
          FUN_180014410("[CVAR-DUMP] +0x%02X -> str \"%.24s\"\n",uVar21,lp);
        }
      }
LAB_18008c392:
      uVar20 = (int)uVar21 + 8;
      uVar21 = (ulonglong)uVar20;
    } while ((int)uVar20 < 0xb9);
    local_308[0] = FUN_1800197a0(DAT_1803fcf30);
    puVar5 = DAT_1803fcf30;
    local_2d0 = *(double *)(DAT_1803fcf30 + 6);
    local_30c = FUN_1800197a0(DAT_1803fd058);
    local_228[0] = DAT_1803fd058;
    local_300 = (double)DAT_1803fd058[3];
    local_310 = FUN_1800197a0(DAT_1804007d8);
    local_258 = DAT_1804007d8;
    local_238 = *(undefined4 **)(DAT_1804007d8 + 6);
    local_314 = FUN_1800197a0(DAT_180425778);
    fVar25 = (float)FUN_180019700();
    pvVar6 = DAT_180425778;
    pvVar18 = *(void **)((longlong)DAT_180425778 + 0x38);
    if (((pvVar18 == (void *)0x0) || (pvVar18 == DAT_180425778)) ||
       (BVar9 = IsBadReadPtr(pvVar18,0x60), BVar9 != 0)) {
      pvVar18 = pvVar6;
    }
    puVar17 = *(undefined8 **)((longlong)pvVar18 + 0x48);
    if ((puVar17 == (undefined8 *)0x0) || (BVar9 = IsBadReadPtr(puVar17,2), BVar9 != 0)) {
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    local_388 = (undefined8 *)&DAT_18033e5ea;
    if (bVar22) {
      local_388 = puVar17;
    }
    local_330 = (double)CONCAT44(local_330._4_4_,local_308[0]);
    local_338 = local_2d0;
    local_340 = puVar5;
    local_348 = (double)CONCAT44(local_348._4_4_,local_30c);
    local_350 = local_300;
    local_358 = local_228[0];
    local_360 = (double *)CONCAT44(local_360._4_4_,local_310);
    local_368 = local_238;
    local_370 = local_258;
    local_378 = (undefined4 *)CONCAT44(local_378._4_4_,local_314);
    local_380 = (undefined4 *)(double)fVar25;
    FUN_180014410("[TacRP-FINDVAR] OK slot17=%p phys=%p name=\'%s\' str=\'%s\' float=%.3f int=%d fixed=%p name=\'%s\' int=%d pellet=%p name=\'%s\' int=%d client=%p name=\'%s\' int=%d\n"
                  ,local_278,DAT_180425778,*(undefined8 *)((longlong)DAT_180425778 + 0x18));
    DAT_1803fd0e8 = '\x01';
  }
  if (DAT_180425778 == (void *)0x0) {
    uVar20 = 1;
  }
  else {
    iVar10 = FUN_1800197a0(DAT_180425778);
    uVar20 = (uint)(iVar10 != 0);
  }
  if (DAT_1804007d8 == (undefined4 *)0x0) {
    bVar22 = true;
  }
  else {
    iVar10 = FUN_1800197a0();
    bVar22 = iVar10 != 0;
  }
  if (DAT_1803fd058 == (undefined8 *)0x0) {
    local_318 = true;
  }
  else {
    iVar10 = FUN_1800197a0();
    local_318 = iVar10 != 0;
  }
  if (DAT_1803fcf30 == (undefined4 *)0x0) {
    local_317 = false;
  }
  else {
    iVar10 = FUN_1800197a0();
    local_317 = iVar10 != 0;
  }
  if ((((uVar20 != DAT_1803e6f7c) || (bVar22 != DAT_1803e7258)) || (local_318 != DAT_1803e74e0)) ||
     (local_317 != DAT_1803e723c)) {
    local_380 = (undefined4 *)CONCAT44(local_380._4_4_,DAT_1803da5c4);
    local_388 = (undefined8 *)CONCAT44(local_388._4_4_,(uint)local_317);
    FUN_180014410("[TacRP-CVAR] native physbullet=%d fixedspread=%d pelletspread=%d clientdamage=%d (xorOk=%d)\n"
                  ,uVar20,bVar22,(uint)local_318);
    DAT_1803e74e0 = (uint)local_318;
    DAT_1803e723c = (uint)local_317;
    DAT_1803e6f7c = uVar20;
    DAT_1803e7258 = (uint)bVar22;
  }
  if ((*(int *)(param_1 + 0x14) < 2) || (*(char *)(param_1 + 0x18) != '\0')) {
    bVar22 = false;
LAB_18008c681:
    bVar4 = false;
  }
  else {
    if ((*(float *)(param_1 + 0xc) <= 0.0) || (local_318 == false)) goto LAB_18008c681;
    bVar4 = true;
  }
  cVar7 = '\x01';
  if (DAT_1803fa668 != (longlong *)0x0) {
    plVar12 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))();
    if (plVar12 == (longlong *)0x0) {
      cVar7 = '\x01';
    }
    else {
      cVar7 = (**(code **)(*plVar12 + 0x30))();
    }
  }
  if ((DAT_1803fa608 == 0) || (1 < *(int *)(DAT_1803fa608 + 0x1c))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  bVar19 = (byte)uVar20 ^ 1;
  if ((bVar19 == 0) && (((bVar3 || (local_317 == 0)) && (DAT_1803fa608 != 0)))) {
    fVar25 = *(float *)(param_1 + 0x10);
    if (*(float *)(param_1 + 0x10) <= DAT_1803812b0) {
      fVar25 = DAT_1803812b0;
    }
    fVar26 = DAT_180380bb0;
    if (*(int *)(param_1 + 0x14) == 1) {
      fVar26 = DAT_180380d30;
    }
    fVar27 = DAT_180380d30;
    if (cVar7 == '\0') {
      fVar27 = DAT_180380bb0;
    }
    bVar19 = 0;
    if (fVar28 <= (float)*(double *)(DAT_1803fa608 + 0x28) * fVar25 * fVar26 * fVar27) {
      bVar19 = 1;
    }
  }
  local_30c = 0;
  local_308[0] = 0;
  local_310 = 0;
  local_314 = 0;
  local_2d0 = (double)((ulonglong)local_2d0 & 0xffffffff00000000);
  if ((*(char *)(param_1 + 0x19) == '\0') && (bVar19 != 0)) {
    if (bVar22 != false) {
LAB_18008cd42:
      if (bVar4) {
        uVar8 = *(undefined4 *)(param_1 + 0xc);
      }
      else {
        uVar8 = 0;
      }
      local_300 = (double)CONCAT44(local_300._4_4_,uVar8);
      if (bVar22 == false) goto LAB_18008ce46;
      if (*(int *)(param_1 + 0x14) - 2U < 2) {
        fVar23 = *(float *)(param_1 + 8);
        if (bVar4) {
          fVar23 = fVar23 - *(float *)(param_1 + 0xc);
        }
        if (fVar23 <= 0.0) goto LAB_18008ce1d;
        if (*(int *)(param_1 + 0x14) == 2) {
          fVar28 = fVar23;
          if (bVar4) {
            fVar28 = fVar23 * _DAT_180380b78;
          }
          fVar23 = 0.0;
        }
        else if (bVar4) {
          if (DAT_180380e28 < 0.0) {
            fVar28 = sqrtf(DAT_180380e28);
          }
          else {
            fVar28 = SQRT(DAT_180380e28);
          }
          fVar28 = (fVar28 / DAT_180380e48) * fVar23;
          fVar23 = fVar23 * _DAT_180381354;
        }
        else {
          fVar28 = fVar23 * DAT_180380ac0;
          fVar23 = fVar23 * _DAT_180380b5c;
        }
        fVar28 = fVar28 * _DAT_1803810a4;
        local_278 = CONCAT44(fVar23 * _DAT_1803810a4,fVar28);
      }
      else {
LAB_18008ce1d:
        fVar28 = 0.0;
        local_278 = 0;
      }
      local_270[0] = 0.0;
      puVar17 = &local_278;
      pfVar13 = local_270;
      goto LAB_18008ce59;
    }
    fVar29 = *(float *)(param_1 + 8);
    if (((fVar29 <= 0.0) && (fVar23 == 0.0)) && (fVar24 == 0.0)) {
      param_2[0] = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
      goto LAB_18008d24d;
    }
    local_288._0_4_ = (float)param_4[2] - 0.0;
    local_288._4_4_ = (float)param_4[3] - 0.0;
    local_280 = 0;
    uVar8 = FUN_1802d3e00();
    local_288 = CONCAT44(local_288._4_4_,uVar8);
    uVar8 = FUN_1802d3e00(local_288._4_4_);
    local_288 = CONCAT44(uVar8,(float)local_288);
    uVar8 = FUN_18008b430(param_1,&local_278,&local_288);
    local_388._0_4_ = fVar29;
    pfVar13 = (float *)FUN_18008bb60(uVar8,&local_258,&local_278,param_4);
    fVar23 = local_278._4_4_ + pfVar13[1];
    fVar24 = (float)FUN_1802d3e00((float)local_278 + *pfVar13);
    fVar25 = (float)FUN_1802d3e00(fVar23);
    fVar23 = (float)param_4[3];
    fVar24 = (float)FUN_1802d3e00(fVar24 - (float)param_4[2]);
    fVar23 = (float)FUN_1802d3e00(fVar25 - fVar23);
    fVar24 = (float)FUN_1802d3e00(fVar24 + 0.0);
    fVar25 = (float)FUN_1802d3e00(fVar23 + 0.0);
    local_288._0_4_ = (float)param_4[2] - fVar24;
    local_288._4_4_ = (float)param_4[3] - fVar25;
    local_280 = 0;
    uVar8 = FUN_1802d3e00();
    local_288 = CONCAT44(local_288._4_4_,uVar8);
    uVar8 = FUN_1802d3e00(local_288._4_4_);
    local_288 = CONCAT44(uVar8,(float)local_288);
    uVar8 = FUN_18008b430(param_1,&local_278,&local_288);
    local_388._0_4_ = fVar29;
    pfVar13 = (float *)FUN_18008bb60(uVar8,&local_258,&local_278,param_4);
    fVar23 = local_278._4_4_ + pfVar13[1];
    fVar26 = (float)FUN_1802d3e00((float)local_278 + *pfVar13);
    fVar27 = (float)FUN_1802d3e00(fVar23);
    fVar23 = (float)param_4[3];
    fVar26 = (float)FUN_1802d3e00(fVar26 - (float)param_4[2]);
    fVar23 = (float)FUN_1802d3e00(fVar27 - fVar23);
    fVar24 = (float)FUN_1802d3e00(fVar24 + fVar26);
    fVar25 = (float)FUN_1802d3e00(fVar23 + fVar25);
    local_288._0_4_ = (float)param_4[2] - fVar24;
    local_288._4_4_ = (float)param_4[3] - fVar25;
    local_280 = 0;
    uVar8 = FUN_1802d3e00();
    local_288 = CONCAT44(local_288._4_4_,uVar8);
    uVar8 = FUN_1802d3e00(local_288._4_4_);
    local_288 = CONCAT44(uVar8,(float)local_288);
    uVar8 = FUN_18008b430(param_1,&local_278,&local_288);
    local_388._0_4_ = fVar29;
    pfVar13 = (float *)FUN_18008bb60(uVar8,&local_258,&local_278,param_4);
    fVar23 = local_278._4_4_ + pfVar13[1];
    fVar26 = (float)FUN_1802d3e00((float)local_278 + *pfVar13);
    fVar27 = (float)FUN_1802d3e00(fVar23);
    fVar23 = (float)param_4[3];
    fVar26 = (float)FUN_1802d3e00(fVar26 - (float)param_4[2]);
    fVar23 = (float)FUN_1802d3e00(fVar27 - fVar23);
    fVar24 = (float)FUN_1802d3e00(fVar24 + fVar26);
    fVar25 = (float)FUN_1802d3e00(fVar23 + fVar25);
    local_288._0_4_ = (float)param_4[2] - fVar24;
    local_288._4_4_ = (float)param_4[3] - fVar25;
    local_280 = 0;
    uVar8 = FUN_1802d3e00();
    local_288 = CONCAT44(local_288._4_4_,uVar8);
    uVar8 = FUN_1802d3e00(local_288._4_4_);
    local_288 = CONCAT44(uVar8,(float)local_288);
    uVar8 = FUN_18008b430(param_1,&local_278,&local_288);
    local_388._0_4_ = fVar29;
    pfVar13 = (float *)FUN_18008bb60(uVar8,&local_258,&local_278,param_4);
    fVar23 = local_278._4_4_ + pfVar13[1];
    fVar26 = (float)FUN_1802d3e00((float)local_278 + *pfVar13);
    fVar27 = (float)FUN_1802d3e00(fVar23);
    fVar23 = (float)param_4[3];
    fVar26 = (float)FUN_1802d3e00(fVar26 - (float)param_4[2]);
    fVar23 = (float)FUN_1802d3e00(fVar27 - fVar23);
    fVar24 = (float)FUN_1802d3e00(fVar24 + fVar26);
    fVar25 = (float)FUN_1802d3e00(fVar23 + fVar25);
    local_288._0_4_ = (float)param_4[2] - fVar24;
    local_288._4_4_ = (float)param_4[3] - fVar25;
    local_280 = 0;
    uVar8 = FUN_1802d3e00();
    local_288 = CONCAT44(local_288._4_4_,uVar8);
    uVar8 = FUN_1802d3e00(local_288._4_4_);
    local_288 = CONCAT44(uVar8,(float)local_288);
    uVar8 = FUN_18008b430(param_1,&local_278,&local_288);
    local_388._0_4_ = fVar29;
    pfVar13 = (float *)FUN_18008bb60(uVar8,&local_258,&local_278,param_4);
    fVar23 = local_278._4_4_ + pfVar13[1];
    fVar26 = (float)FUN_1802d3e00((float)local_278 + *pfVar13);
    fVar27 = (float)FUN_1802d3e00(fVar23);
    fVar23 = (float)param_4[3];
    fVar26 = (float)FUN_1802d3e00(fVar26 - (float)param_4[2]);
    fVar23 = (float)FUN_1802d3e00(fVar27 - fVar23);
    fVar24 = (float)FUN_1802d3e00(fVar24 + fVar26);
    fVar25 = (float)FUN_1802d3e00(fVar23 + fVar25);
    local_288._0_4_ = (float)param_4[2] - fVar24;
    local_288._4_4_ = (float)param_4[3] - fVar25;
    local_280 = 0;
    uVar8 = FUN_1802d3e00();
    local_288 = CONCAT44(local_288._4_4_,uVar8);
    uVar8 = FUN_1802d3e00(local_288._4_4_);
    local_288 = CONCAT44(uVar8,(float)local_288);
    uVar8 = FUN_18008b430(param_1,&local_278,&local_288);
    local_388 = (undefined8 *)CONCAT44(local_388._4_4_,fVar29);
    pfVar13 = (float *)FUN_18008bb60(uVar8,&local_258,&local_278,param_4);
    fVar23 = local_278._4_4_ + pfVar13[1];
    fVar26 = (float)FUN_1802d3e00((float)local_278 + *pfVar13);
    fVar27 = (float)FUN_1802d3e00(fVar23);
    fVar23 = (float)param_4[3];
    fVar26 = (float)FUN_1802d3e00(fVar26 - (float)param_4[2]);
    fVar23 = (float)FUN_1802d3e00(fVar27 - fVar23);
    fVar24 = (float)FUN_1802d3e00(fVar24 + fVar26);
    fVar23 = (float)FUN_1802d3e00(fVar23 + fVar25);
    if ((local_316 != 0) &&
       ((iVar10 = DAT_1804257ac + 1, DAT_1804257ac < 0x1e ||
        (DAT_1804257ac = iVar10, iVar10 == (iVar10 / 100) * 100)))) {
      local_368 = (undefined4 *)(double)fVar23;
      local_370 = (undefined4 *)(double)fVar24;
      local_378 = (undefined4 *)(double)*(float *)(param_1 + 0x2c);
      local_380 = (undefined4 *)(double)*(float *)(param_1 + 0x28);
      local_388 = (undefined8 *)(double)*(float *)(param_1 + 0x20);
      local_360 = (double *)CONCAT44(local_360._4_4_,*param_4);
      DAT_1804257ac = iVar10;
      FUN_180014410("[TacRP-NS] HITSCAN dist=%.1f spread=%.4f shoot=(%.3f,%.3f) faCorr=(%.3f,%.3f) comp=(%.4f,%.4f) cmd#%d\n"
                    ,(double)fVar28,(double)fVar29,(double)*(float *)(param_1 + 0x1c));
    }
    *param_2 = fVar24;
    param_2[1] = fVar23;
  }
  else {
    if (bVar22 != false) goto LAB_18008cd42;
    uVar8 = *(undefined4 *)(param_1 + 8);
    local_300 = (double)CONCAT44(local_300._4_4_,uVar8);
LAB_18008ce46:
    local_268 = 0;
    local_260[0] = 0.0;
    fVar28 = 0.0;
    puVar17 = &local_268;
    pfVar13 = local_260;
LAB_18008ce59:
    uVar1 = *(undefined4 *)((longlong)puVar17 + 4);
    fVar23 = *pfVar13;
    local_360 = &local_2d0;
    local_368 = &local_314;
    local_370 = &local_310;
    local_378 = local_308;
    local_380 = &local_30c;
    local_388 = (undefined8 *)CONCAT44(local_388._4_4_,uVar8);
    FUN_18008b5d0(pfVar13,&local_248,local_288,param_4);
    fVar24 = 0.0;
    iVar10 = 6;
    do {
      local_268._0_4_ = (float)param_4[2] - fVar29;
      local_268._4_4_ = (float)param_4[3] - fVar24;
      local_260[0] = 0.0;
      uVar8 = FUN_1802d3e00();
      local_268 = CONCAT44(local_268._4_4_,uVar8);
      uVar8 = FUN_1802d3e00(local_268._4_4_);
      local_268 = CONCAT44(uVar8,(float)local_268);
      FUN_18008b430(param_1,local_1b8,&local_268);
      uVar8 = FUN_1802d3e70(local_1b8,&local_248,local_1a8,local_198);
      local_388._0_4_ = fVar28;
      uVar8 = FUN_18008b270(uVar8,&local_258,&local_248,local_1a8);
      local_388._0_4_ = (float)uVar1;
      puVar17 = (undefined8 *)FUN_18008b270(uVar8,local_2c8,&local_258,local_198);
      local_258 = (undefined4 *)*puVar17;
      local_250 = *(undefined4 *)(puVar17 + 1);
      local_388._0_4_ = fVar23;
      pdVar14 = (double *)FUN_18008b270((int)local_258,local_2bc,&local_258,&local_248);
      local_258 = (undefined4 *)*pdVar14;
      local_250 = *(undefined4 *)(pdVar14 + 1);
      local_288 = 0;
      local_280 = 0;
      FUN_1802d4540(&local_258,&local_288);
      local_280 = 0;
      uVar8 = FUN_1802d3e00((float)local_288);
      local_288 = CONCAT44(local_288._4_4_,uVar8);
      uVar8 = FUN_1802d3e00(local_288._4_4_);
      local_288 = CONCAT44(uVar8,(float)local_288);
      uVar8 = FUN_1802d3e70(&local_288,local_228,local_188,local_178);
      uVar8 = FUN_18008b270(uVar8,&local_238,local_228,local_188);
      puVar17 = (undefined8 *)FUN_18008b270(uVar8,local_2b0,&local_238,local_178);
      local_238 = (undefined4 *)*puVar17;
      local_230 = *(undefined4 *)(puVar17 + 1);
      local_388 = (undefined8 *)CONCAT44(local_388._4_4_,local_240);
      pdVar14 = (double *)FUN_18008b270((int)local_238,&local_2a0,&local_238,local_228);
      local_238 = (undefined4 *)*pdVar14;
      local_230 = *(undefined4 *)(pdVar14 + 1);
      local_278 = 0;
      local_270[0] = 0.0;
      FUN_1802d4540(&local_238,&local_278);
      local_270[0] = 0.0;
      uVar8 = FUN_1802d3e00((float)local_278);
      local_278 = CONCAT44(local_278._4_4_,uVar8);
      local_288._4_4_ = (float)FUN_1802d3e00(local_278._4_4_);
      local_278 = CONCAT44(local_288._4_4_,(float)local_278);
      local_288._0_4_ = (float)local_278;
      local_280 = 0;
      uVar8 = FUN_1802d3e00((float)local_278);
      local_288 = CONCAT44(local_288._4_4_,uVar8);
      fVar26 = (float)FUN_1802d3e00(local_288._4_4_);
      local_288 = CONCAT44(fVar26,(float)local_288);
      fVar25 = (float)param_4[3];
      fVar27 = (float)FUN_1802d3e00((float)local_288 - (float)param_4[2]);
      fVar25 = (float)FUN_1802d3e00(fVar26 - fVar25);
      fVar29 = (float)FUN_1802d3e00(fVar27 + fVar29);
      fVar24 = (float)FUN_1802d3e00(fVar25 + fVar24);
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    if ((local_316 != 0) &&
       ((iVar10 = DAT_18042615c + 1, DAT_18042615c < 0x1e ||
        (DAT_18042615c = iVar10, iVar10 == (iVar10 / 100) * 100)))) {
      local_330 = (double)fVar24;
      local_338 = (double)fVar29;
      local_340 = (undefined4 *)(double)local_244;
      local_348 = (double)local_248;
      local_350 = (double)*(float *)(param_1 + 0x2c);
      local_358 = (undefined8 *)(double)*(float *)(param_1 + 0x28);
      local_360 = (double *)(double)*(float *)(param_1 + 0x20);
      local_368 = (undefined4 *)(double)*(float *)(param_1 + 0x1c);
      local_370 = (undefined4 *)(double)local_300._0_4_;
      local_328 = *param_4;
      local_378 = (undefined4 *)CONCAT44(local_378._4_4_,local_2d0._0_4_);
      local_380 = (undefined4 *)CONCAT44(local_380._4_4_,local_314);
      local_388 = (undefined8 *)CONCAT44(local_388._4_4_,local_310);
      DAT_18042615c = iVar10;
      FUN_180014410("[TacRP-NS] RAND dist=%.1f baseTick=%d bestTick=%d lat=%d choke=%d win=%d spread=%.4f shoot=(%.3f,%.3f) faCorr=(%.3f,%.3f) rnd=(%.3f,%.3f) comp=(%.4f,%.4f) cmd#%d\n"
                    ,(double)local_2f8,local_308[0],local_30c);
    }
    *param_2 = fVar29;
    param_2[1] = fVar24;
  }
  param_2[2] = 0.0;
LAB_18008d24d:
  if ((local_2d8 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
    (*DAT_1803faf78)(local_2f0,local_2e8,local_2e0,local_2dc);
  }
  return param_2;
}


