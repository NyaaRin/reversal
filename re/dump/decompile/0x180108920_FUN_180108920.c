// 0x180108920  FUN_180108920
// size=2676 thunk=false
// signature: undefined FUN_180108920()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180108920(longlong param_1,longlong *param_2)

{
  float fVar1;
  uint uVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  longlong *plVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  char *pcVar10;
  longlong *plVar11;
  uint *puVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  undefined4 uVar18;
  uint uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_308 [32];
  char local_2e8;
  char local_2e7;
  char local_2e6;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  undefined4 local_2d0;
  float local_2cc;
  float local_2c8;
  longlong *local_2c0;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  undefined1 local_2a8 [16];
  float local_298;
  undefined4 local_294;
  undefined4 local_290;
  float local_288;
  float local_284;
  float local_280;
  undefined8 local_278;
  float local_270;
  float local_268;
  float local_264;
  float local_260;
  longlong *local_258;
  longlong local_250;
  float local_248;
  float local_244;
  float local_240;
  float local_238;
  float local_234;
  float local_230;
  float local_228;
  float local_224;
  float local_220;
  undefined8 local_218;
  float local_210;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  undefined1 local_1e4 [12];
  undefined **local_1d8;
  longlong *plStack_1d0;
  float local_1c8 [2];
  undefined8 local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
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
  undefined8 uStack_140;
  undefined8 local_138;
  undefined1 local_128 [64];
  undefined8 local_e8;
  ulonglong local_d8;
  
  fVar23 = DAT_180380fcc;
  local_d8 = DAT_1803da4c0 ^ (ulonglong)auStack_308;
  fVar27 = (float)*(double *)(DAT_1803fa608 + 0x10);
  local_2e0 = 4096.0;
  local_1c8[0] = 10.0;
  local_1b8 = 0x93fd561a96ab0c67;
  local_1c0 = 0x8cf9aa16a6e38aec;
  local_2cc = fVar27;
  local_2c8 = fVar27;
  local_2c0 = param_2;
  local_258 = param_2;
  local_250 = param_1;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_1d8,&local_1b8);
  plVar6 = (longlong *)FUN_180241a30(*plVar6 + 0x28,local_2a8,&local_1c0);
  pfVar7 = (float *)FUN_180202dc0(*plVar6 + 0x28);
  pfVar9 = local_1c8;
  if (fVar23 <= *pfVar7) {
    pfVar9 = pfVar7;
  }
  pfVar8 = &local_2e0;
  if (*pfVar7 <= DAT_180381290) {
    pfVar8 = pfVar9;
  }
  local_1c0 = CONCAT44(local_1c0._4_4_,*pfVar8);
  local_1b8 = 0x93fd561a96ab0c67;
  plVar6 = (longlong *)FUN_180241a30(&DAT_1803fadf0,&local_1d8,&local_1b8);
  lVar15 = *plVar6 + 0x28;
  local_1c8[0] = 1.1437491e-31;
  local_1c8[1] = 1.07848165e-30;
  plVar6 = (longlong *)FUN_180241a30(lVar15,local_2a8,local_1c8);
  pfVar9 = (float *)FUN_180202dc0(*plVar6 + 0x28);
  fVar23 = *pfVar9;
  local_1c8[0] = 2.2438109e+08;
  local_1c8[1] = 4.4925304e+35;
  local_2e4 = fVar23;
  plVar6 = (longlong *)FUN_180241a30(lVar15,local_2a8,local_1c8);
  pcVar10 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
  cVar3 = *pcVar10;
  local_1c8[0] = -1.4160659e-17;
  local_1c8[1] = -1.8926696e+08;
  local_2e8 = cVar3;
  plVar6 = (longlong *)FUN_180241a30(lVar15,local_2a8,local_1c8);
  pcVar10 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
  local_2e7 = *pcVar10;
  local_1c8[0] = 2.7791681e-19;
  local_1c8[1] = -1.4102739e-19;
  plVar6 = (longlong *)FUN_180241a30(lVar15,local_2a8,local_1c8);
  pcVar10 = (char *)FUN_1801fcfc0(*plVar6 + 0x28);
  local_2e6 = *pcVar10;
  if (cVar3 == '\0') {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)FUN_18001c560(param_2);
  }
  uVar2 = _DAT_1803817c0;
  fVar1 = DAT_1803809ec;
  local_1c8[0] = fVar4;
  fVar17 = 1.4013e-45;
  fVar21 = fVar27;
  do {
    if ((*(int *)(DAT_1803fa608 + 0x1c) < (int)fVar17) || (0x81 < (int)fVar17)) {
      return;
    }
    lVar16 = (longlong)(int)fVar17;
    lVar15 = lVar16 * 0x1c;
    *(undefined1 *)(lVar15 + 0xc50 + param_1) = 0;
    local_2e0 = fVar17;
    plVar6 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,fVar17);
    if ((((plVar6 == (longlong *)0x0) || (plVar6 == local_2c0)) ||
        (cVar3 = FUN_18001c330(plVar6), cVar3 == '\0')) ||
       ((plVar11 = (longlong *)(**(code **)(*plVar6 + 0x20))(plVar6), plVar11 == (longlong *)0x0 ||
        (cVar3 = (**(code **)(*plVar11 + 0x40))(plVar11), cVar3 != '\0')))) {
      *(undefined4 *)(param_1 + 0x10 + lVar16 * 0x18) = 0xbf800000;
      *(undefined4 *)(param_1 + 0x1c + lVar16 * 0x18) = 0xbf800000;
    }
    else if (((((local_2e8 == '\0') || ((int)fVar4 < 1)) ||
              (fVar5 = (float)FUN_18001c560(plVar6), fVar5 != fVar4)) &&
             (((local_2e7 == '\0' || (cVar3 = FUN_18001e0a0(plVar6), cVar3 != '\b')) &&
              ((local_2e6 == '\0' ||
               (puVar12 = (uint *)FUN_18001d710(plVar6,&local_1b8), (*puVar12 >> 6 & 1) == 0))))))
            && ((0x7f < (int)fVar17 - 1U ||
                (((DAT_180425fd0 == (code *)0x0 || (cVar3 = (*DAT_180425fd0)(fVar17), cVar3 == '\0')
                  ) && (((DAT_180426170 == (code *)0x0 ||
                         (cVar3 = (*DAT_180426170)(fVar17), cVar3 == '\0')) &&
                        ((DAT_1804009f0 == (code *)0x0 ||
                         (cVar3 = (*DAT_1804009f0)(fVar17), cVar3 == '\0')))))))))) {
      if (0.0 < fVar23) {
        pfVar9 = (float *)(**(code **)(*local_2c0 + 0x48))();
        pfVar7 = (float *)(**(code **)(*plVar6 + 0x48))(plVar6);
        local_248 = *pfVar9 - *pfVar7;
        local_244 = pfVar9[1] - pfVar7[1];
        local_240 = pfVar9[2] - pfVar7[2];
        fVar4 = (float)(*(code *)PTR_FUN_1803da018)
                                 (local_244 * local_244 + local_248 * local_248 +
                                  local_240 * local_240);
        if (fVar23 < fVar4) {
          *(undefined4 *)(param_1 + 0x10 + lVar16 * 0x18) = 0xbf800000;
          *(undefined4 *)(param_1 + 0x1c + lVar16 * 0x18) = 0xbf800000;
          goto LAB_180109351;
        }
      }
      puVar13 = (undefined4 *)FUN_18001d350(plVar6);
      uVar18 = puVar13[1];
      local_2d8 = 89.0;
      local_2dc = -89.0;
      local_2d4 = (float)FUN_1802d3e00(*puVar13);
      pfVar9 = &local_2dc;
      if (local_2dc <= local_2d4) {
        pfVar9 = &local_2d4;
      }
      pfVar7 = &local_2d8;
      if (local_2d4 <= local_2d8) {
        pfVar7 = pfVar9;
      }
      fVar23 = *pfVar7;
      uVar18 = FUN_1802d3e00(uVar18);
      fVar4 = *(float *)(param_1 + 0x1c + lVar16 * 0x18);
      local_2d0 = uVar18;
      if (((fVar4 < 0.0) ||
          (uVar19 = FUN_180022110(uVar18,*(undefined4 *)(param_1 + 0x14 + lVar16 * 0x18)),
          fVar1 < (float)(uVar19 & uVar2))) ||
         (fVar1 < (float)((uint)(fVar23 - *(float *)(param_1 + 0x18 + lVar16 * 0x18)) & uVar2))) {
        *(undefined4 *)(param_1 + 0x14 + lVar16 * 0x18) = uVar18;
        *(float *)(param_1 + 0x18 + lVar16 * 0x18) = fVar23;
        *(float *)(param_1 + 0x1c + lVar16 * 0x18) = fVar27;
        fVar4 = fVar21;
      }
      if (DAT_180380c50 < fVar27 - fVar4) {
        lVar14 = FUN_18001d620(plVar6);
        uVar20 = FUN_1802d3e00(*(undefined4 *)(lVar14 + 4));
        uVar19 = FUN_180022110(uVar18,uVar20);
        if (DAT_1803810e4 < (float)(uVar19 & uVar2)) {
          uVar18 = uVar20;
          local_2d0 = uVar20;
        }
      }
      fVar4 = *(float *)(param_1 + 0x10 + lVar16 * 0x18);
      if (((fVar4 < 0.0) || (DAT_180380ac0 < fVar27 - fVar4)) || (fVar27 < fVar4)) {
        *(undefined4 *)(param_1 + 8 + lVar16 * 0x18) = uVar18;
      }
      else {
        fVar21 = expf((float)((uint)(fVar27 - fVar4) ^ DAT_1803817f0) / fVar1);
        fVar21 = DAT_180380bb0 - fVar21;
        fVar4 = *(float *)(param_1 + 8 + lVar16 * 0x18);
        fVar5 = (float)FUN_180022110(uVar18,fVar4);
        *(float *)(param_1 + 8 + lVar16 * 0x18) = fVar5 * fVar21 + fVar4;
        fVar23 = (fVar23 - *(float *)(param_1 + 0xc + lVar16 * 0x18)) * fVar21 +
                 *(float *)(param_1 + 0xc + lVar16 * 0x18);
      }
      *(float *)(param_1 + 0xc + lVar16 * 0x18) = fVar23;
      *(float *)(param_1 + 0x10 + lVar16 * 0x18) = fVar27;
      local_294 = *(undefined4 *)(param_1 + 8 + lVar16 * 0x18);
      local_290 = 0;
      local_298 = fVar23;
      FUN_1802d4050(&local_298,&local_1b0);
      cVar3 = FUN_180107300(plVar6,&local_288);
      fVar23 = local_2e4;
      if (cVar3 != '\0') {
        pfVar9 = (float *)FUN_18001c430(plVar6,local_1e4);
        pfVar7 = (float *)FUN_18001daf0(plVar6,local_2a8);
        local_238 = *pfVar9 - *pfVar7;
        local_234 = pfVar9[1] - pfVar7[1];
        local_230 = pfVar9[2] - pfVar7[2];
        fVar24 = local_288 + local_238;
        fVar25 = local_284 + local_234;
        fVar26 = local_280 + local_230;
        local_278 = CONCAT44(fVar25,fVar24);
        local_218 = CONCAT44(fVar25,fVar24);
        local_228 = local_1b0 * (float)local_1c0;
        local_224 = local_1ac * (float)local_1c0;
        local_220 = local_1a8 * (float)local_1c0;
        fVar4 = fVar24 + local_228;
        fVar21 = fVar25 + local_224;
        fVar5 = fVar26 + local_220;
        local_e8 = 0;
        local_2b8 = fVar4;
        local_2b4 = fVar21;
        local_2b0 = fVar5;
        local_270 = fVar26;
        local_268 = fVar4;
        local_264 = fVar21;
        local_260 = fVar5;
        local_210 = fVar26;
        FUN_18001fde0(local_128,&local_218,&local_268);
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
        uStack_140 = 0;
        local_138 = 0;
        local_1d8 = vftable_CTraceFilter;
        plStack_1d0 = plVar6;
        cVar3 = FUN_1801072c0(local_128);
        if (((cVar3 != '\0') && (0.0 <= uStack_170._4_4_)) && (uStack_170._4_4_ < DAT_180380bb0)) {
          local_2b8 = uStack_190._4_4_;
          local_2b4 = (float)local_188;
          local_2b0 = local_188._4_4_;
          fVar4 = uStack_190._4_4_;
          fVar21 = (float)local_188;
          fVar5 = local_188._4_4_;
        }
        local_208 = fVar4 - fVar24;
        local_204 = fVar21 - fVar25;
        local_200 = fVar5 - fVar26;
        fVar22 = (float)(*(code *)PTR_FUN_1803da018)
                                  (local_204 * local_204 + local_208 * local_208 +
                                   local_200 * local_200);
        fVar23 = local_2e4;
        if (DAT_180380e9c <= fVar22) {
          local_1f4 = fVar22 * DAT_180380a94;
          if (DAT_180380fd8 < fVar22 * DAT_180380a94) {
            local_1f4 = DAT_180380fd8;
          }
          local_1fc = local_1b0 * local_1f4;
          local_1f8 = local_1ac * local_1f4;
          local_1f4 = local_1a8 * local_1f4;
          local_1f0 = fVar24 + local_1fc;
          local_1ec = fVar25 + local_1f8;
          local_1e8 = fVar26 + local_1f4;
          *(float *)(lVar15 + 0xc38 + param_1) = local_1f0;
          *(float *)(lVar15 + 0xc3c + param_1) = local_1ec;
          *(float *)((lVar16 + 0x70) * 0x1c + param_1) = local_1e8;
          *(float *)(lVar15 + 0xc44 + param_1) = fVar4;
          *(float *)(lVar15 + 0xc48 + param_1) = fVar21;
          *(float *)(lVar15 + 0xc4c + param_1) = fVar5;
          *(undefined1 *)(lVar15 + 0xc50 + param_1) = 1;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x10 + lVar16 * 0x18) = 0xbf800000;
      *(undefined4 *)(param_1 + 0x1c + lVar16 * 0x18) = 0xbf800000;
    }
LAB_180109351:
    fVar17 = (float)((int)fVar17 + 1);
    fVar21 = local_2c8;
    fVar4 = local_1c8[0];
  } while( true );
}


