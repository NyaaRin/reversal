// 0x18010f680  Features_BulletTracers_BulletTracersFeature_vfunc11
// size=2985 thunk=false
// signature: undefined Features_BulletTracers_BulletTracersFeature_vfunc11()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_BulletTracers_BulletTracersFeature_vfunc11
               (longlong param_1,longlong param_2,uint *param_3)

{
  float fVar1;
  undefined4 *puVar2;
  double dVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  char *pcVar15;
  undefined8 uVar16;
  float *pfVar17;
  float *pfVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  uint uVar21;
  uint uVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_398 [32];
  undefined8 *local_378;
  undefined1 local_368;
  uint local_364;
  float local_360;
  float local_35c;
  float local_358;
  float local_354;
  float local_350;
  float local_34c;
  float local_348;
  float local_344;
  int local_340;
  float local_338;
  float local_334;
  float local_330;
  float local_328;
  float local_324;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f4;
  longlong local_2f0;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float local_294;
  float local_290;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined **local_248;
  longlong lStack_240;
  undefined8 local_238;
  float local_230;
  undefined8 local_228;
  float local_220;
  undefined8 local_218;
  float local_210;
  undefined8 local_208;
  float local_200;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined8 local_1b0;
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
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined1 local_138 [64];
  undefined8 local_f8;
  ulonglong local_e8;
  
  local_e8 = DAT_1803da4c0 ^ (ulonglong)auStack_398;
  cVar11 = *(char *)(param_1 + 0x2c);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  fVar1 = *(float *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x2c) = 0;
  local_228 = 0x93fd561a96ab0c67;
  local_218 = 0x34e7dc901c246087;
  local_2f0 = param_2;
  plVar14 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_248,&local_228);
  plVar14 = (longlong *)FUN_180241a30(*plVar14 + 0x28,&local_2c0,&local_218);
  pcVar15 = (char *)FUN_1801fcfc0(*plVar14 + 0x28);
  if (((*pcVar15 != '\0') && (param_2 != 0)) && (DAT_1803fa608 != 0)) {
    local_350 = (float)*(double *)(DAT_1803fa608 + 0x10);
    if (local_350 == *(float *)(param_1 + 0x30)) {
      local_2a4 = *(float *)(param_1 + 0x34) - (float)param_3[1];
      local_2a0 = *(float *)(param_1 + 0x38) - (float)param_3[2];
      local_29c = *(float *)(param_1 + 0x3c) - (float)param_3[3];
      if (local_2a0 * local_2a0 + local_2a4 * local_2a4 + local_29c * local_29c < DAT_180380e9c) {
        return;
      }
    }
    *(float *)(param_1 + 0x30) = local_350;
    *(uint *)(param_1 + 0x34) = param_3[1];
    *(uint *)(param_1 + 0x38) = param_3[2];
    *(uint *)(param_1 + 0x3c) = param_3[3];
    bVar5 = false;
    local_368 = 0;
    local_238 = *(undefined8 *)(param_3 + 4);
    local_230 = (float)param_3[6];
    uVar16 = FUN_180241610(&DAT_1803fadf0,0x93fd561a96ab0c67);
    uVar16 = FUN_180241610(uVar16,0x4660102069c10657);
    pcVar15 = (char *)FUN_1801fcfc0(uVar16);
    if (*pcVar15 != '\0') {
      uVar16 = FUN_18001dbf0(param_2);
      plVar14 = (longlong *)FUN_180076750(uVar16);
      if (plVar14 != (longlong *)0x0) {
        cVar10 = (**(code **)(*plVar14 + 0x80))(plVar14);
        if ((cVar10 == '\0') || (cVar11 == '\0')) {
          cVar11 = (**(code **)(*plVar14 + 0x88))(plVar14);
          if (cVar11 == '\0') {
            dVar23 = *(double *)(DAT_1803fa608 + 0x28);
            if (*(double *)(DAT_1803fa608 + 0x28) <= 0.0) {
              dVar23 = DAT_180380bd0;
            }
            dVar3 = DAT_1803db608 - *(double *)(DAT_1803fa608 + 0x10);
            uVar21 = SUB84(dVar3,0) & _DAT_1803817d0;
            uVar22 = (uint)((ulonglong)dVar3 >> 0x20) & _UNK_1803817d4;
            if (((double)CONCAT44(uVar22,uVar21) <= dVar23 * DAT_180380d18 &&
                 dVar23 * DAT_180380d18 != (double)CONCAT44(uVar22,uVar21)) &&
               (0.0 < DAT_1803db5fc * DAT_1803db5fc + DAT_1803db5f8 * DAT_1803db5f8 +
                      DAT_1803db600 * DAT_1803db600)) {
              local_238 = CONCAT44(DAT_1803db5fc,DAT_1803db5f8);
              bVar5 = true;
              local_368 = 1;
              local_230 = DAT_1803db600;
            }
          }
        }
        else {
          bVar5 = true;
          local_368 = 1;
          local_238 = uVar6;
          local_230 = fVar1;
        }
      }
    }
    (*(code *)PTR_FUN_1803da000)(&local_238);
    local_1c8 = 0;
    local_1cc = 0;
    local_1d0 = 0;
    FUN_1802d4540(&local_238,&local_1d0);
    FUN_1802d3e70(&local_1d0,&local_1c0,&local_1e8,&local_1f8);
    fVar8 = DAT_1803812cc;
    fVar7 = DAT_180380bb0;
    fVar1 = DAT_180380ac0;
    local_35c = (float)param_3[10];
    if ((float)param_3[10] <= 0.0) {
      local_35c = DAT_1803812a4;
    }
    if (bVar5) {
      local_354 = 0.0;
      local_358 = 0.0;
    }
    else {
      local_354 = (float)param_3[7];
      local_358 = (float)param_3[8];
    }
    uVar21 = 1;
    if (0 < (int)*param_3) {
      uVar21 = *param_3;
    }
    if (8 < uVar21) {
      uVar21 = 8;
    }
    if ((local_354 <= 0.0) && (local_358 <= 0.0)) {
      uVar21 = 1;
    }
    local_340 = 0;
    local_364 = uVar21;
    while (iVar9 = local_340, fVar28 = local_354, fVar27 = local_358, fVar25 = local_35c,
          local_340 < (int)uVar21) {
      local_208 = local_238;
      local_200 = local_230;
      if ((0.0 < local_354) || (0.0 < local_358)) {
        do {
          iVar12 = rand();
          iVar13 = rand();
          fVar26 = ((float)iVar13 / fVar8 - fVar1) + ((float)iVar12 / fVar8 - fVar1);
          iVar12 = rand();
          iVar13 = rand();
          fVar24 = ((float)iVar13 / fVar8 - fVar1) + ((float)iVar12 / fVar8 - fVar1);
        } while (fVar7 < fVar24 * fVar24 + fVar26 * fVar26);
        fVar26 = fVar26 * fVar28;
        local_2b0 = fVar26 * local_1e8;
        local_2ac = fVar26 * local_1e4;
        local_2a8 = fVar26 * local_1e0;
        local_298 = local_2b0 + (float)local_238;
        local_294 = local_2ac + local_238._4_4_;
        local_290 = local_2a8 + local_230;
        fVar24 = fVar24 * fVar27;
        local_28c = fVar24 * local_1f8;
        local_288 = fVar24 * local_1f4;
        local_284 = fVar24 * local_1f0;
        local_210 = local_284 + local_290;
        local_218 = CONCAT44(local_294 + local_288,local_298 + local_28c);
        local_208 = local_218;
        local_200 = local_210;
        (*(code *)PTR_FUN_1803da000)(&local_208);
      }
      local_280 = (float)local_208 * fVar25;
      local_27c = local_208._4_4_ * fVar25;
      local_278 = local_200 * fVar25;
      fVar25 = local_280 + (float)param_3[1];
      fVar27 = local_27c + (float)param_3[2];
      local_228 = CONCAT44(fVar27,fVar25);
      fVar28 = local_278 + (float)param_3[3];
      local_220 = fVar28;
      if (DAT_1803fa610 != (longlong *)0x0) {
        local_f8 = 0;
        local_338 = fVar25;
        local_334 = fVar27;
        local_330 = fVar28;
        FUN_18001fde0(local_138,param_3 + 1,&local_338);
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_188 = 0;
        uStack_180 = 0;
        local_178 = 0;
        uStack_170 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_148 = 0;
        local_248 = vftable_CTraceFilter;
        lStack_240 = local_2f0;
        local_378 = &local_1a8;
        (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,local_138,0x46004003,&local_248);
        if ((0.0 <= uStack_180._4_4_) && (uStack_180._4_4_ <= fVar7)) {
          local_228 = local_198 << 0x20;
          local_220 = local_198._4_4_;
          fVar25 = uStack_1a0._4_4_;
          fVar27 = (float)local_198;
          fVar28 = local_198._4_4_;
        }
      }
      fVar24 = local_350;
      local_274 = local_1c0 * DAT_180381004;
      local_270 = local_1bc * DAT_180381004;
      local_26c = local_1b8 * DAT_180381004;
      local_308 = local_274 + (float)param_3[1];
      local_304 = local_270 + (float)param_3[2];
      local_300 = local_26c + (float)param_3[3];
      local_2fc = local_1e8 * DAT_180380f40;
      local_2f8 = local_1e4 * DAT_180380f40;
      local_2f4 = local_1e0 * DAT_180380f40;
      local_2e8 = local_2fc + local_308;
      local_2e4 = local_2f8 + local_304;
      local_2e0 = local_2f4 + local_300;
      local_2dc = local_1f8 * DAT_180380f00;
      local_2d8 = local_1f4 * DAT_180380f00;
      local_2d4 = local_1f0 * DAT_180380f00;
      local_344 = local_2e8 - local_2dc;
      local_324 = local_2e4 - local_2d8;
      local_218 = CONCAT44(local_218._4_4_,local_324);
      local_320 = local_2e0 - local_2d4;
      local_228 = CONCAT44(local_228._4_4_,local_320);
      local_310 = local_350;
      local_1b0 = 0x93fd561a96ab0c67;
      local_328 = local_344;
      local_31c = fVar25;
      local_318 = fVar27;
      local_314 = fVar28;
      local_2c0 = local_344;
      local_2bc = local_324;
      local_2b8 = local_320;
      plVar14 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_268,&local_1b0);
      local_1d8 = 0x334402fc9b7038cd;
      plVar14 = (longlong *)FUN_180241a30(*plVar14 + 0x28,local_258,&local_1d8);
      pfVar17 = (float *)FUN_180202dc0(*plVar14 + 0x28);
      local_360 = *pfVar17;
      fVar26 = local_360;
      if (local_360 <= 0.0) {
        local_360 = 1.5;
        fVar26 = DAT_180380c50;
      }
      local_348 = 5.0;
      local_34c = 0.1;
      pfVar17 = &local_34c;
      if (DAT_1803809ec <= fVar26) {
        pfVar17 = &local_360;
      }
      pfVar18 = &local_348;
      if (fVar26 <= DAT_180380f00) {
        pfVar18 = pfVar17;
      }
      local_30c = *pfVar18;
      pfVar17 = *(float **)(param_1 + 0x10);
      if (pfVar17 == *(float **)(param_1 + 0x18)) {
        FUN_180225c00(param_1 + 8,pfVar17,&local_328);
      }
      else {
        *pfVar17 = local_344;
        pfVar17[1] = (float)local_218;
        pfVar17[2] = (float)local_228;
        pfVar17[3] = fVar25;
        pfVar17[4] = fVar27;
        pfVar17[5] = fVar28;
        pfVar17[6] = fVar24;
        pfVar17[7] = local_30c;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x20;
      }
      local_340 = iVar9 + 1;
    }
    while( true ) {
      puVar20 = *(undefined4 **)(param_1 + 8);
      puVar2 = *(undefined4 **)(param_1 + 0x10);
      puVar4 = puVar20;
      if ((ulonglong)((longlong)puVar2 - (longlong)puVar20 >> 5) < 0x81) break;
      while (puVar19 = puVar4 + 8, puVar19 != puVar2) {
        *puVar20 = *puVar19;
        puVar20[1] = puVar4[9];
        puVar20[2] = puVar4[10];
        puVar20[3] = puVar4[0xb];
        puVar20[4] = puVar4[0xc];
        puVar20[5] = puVar4[0xd];
        puVar20[6] = puVar4[0xe];
        puVar20[7] = puVar4[0xf];
        puVar20 = puVar20 + 8;
        puVar4 = puVar19;
      }
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    }
  }
  return;
}


