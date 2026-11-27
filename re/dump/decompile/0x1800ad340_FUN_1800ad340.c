// 0x1800ad340  FUN_1800ad340
// size=3642 thunk=false
// signature: undefined FUN_1800ad340()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_1800ad340(float *param_1,float *param_2,float *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  float **ppfVar11;
  float *pfVar12;
  ulonglong uVar13;
  char *pcVar14;
  int *piVar15;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_3c8 [32];
  undefined4 *local_3a8;
  undefined8 local_398;
  float local_390;
  undefined8 local_388;
  float local_380;
  char local_370;
  float local_36c;
  float local_368;
  float local_364;
  undefined4 local_360;
  float local_35c;
  float local_358 [2];
  float *local_350;
  undefined4 *local_348;
  float *local_340;
  int *local_338;
  float *local_330;
  float *local_328;
  float *local_320;
  float *local_318;
  float local_310;
  int local_30c;
  float *local_308;
  undefined1 *local_300;
  undefined8 local_2f8;
  float local_2f0;
  float *local_2e8;
  int *local_2e0;
  undefined8 local_2d8;
  float local_2d0;
  float *local_2c8;
  ulonglong local_2c0;
  float local_2b8;
  float local_2b4;
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
  undefined1 *local_278;
  float **local_270;
  undefined4 *local_268;
  float *local_260;
  undefined1 local_258 [32];
  float *local_238 [2];
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  float local_21c;
  float local_218;
  float local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined1 local_200;
  undefined1 local_1ff;
  undefined1 auStack_1fe [2];
  float local_1fc;
  undefined8 local_1e8;
  undefined2 local_1e0;
  ushort local_1de;
  undefined2 local_1d4;
  ulonglong local_1d0;
  uint local_1c8;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined1 local_190;
  undefined1 local_18f;
  undefined1 auStack_18e [2];
  undefined8 local_18c;
  undefined8 uStack_184;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined2 uStack_170;
  ushort uStack_16e;
  undefined8 local_16c;
  undefined2 uStack_164;
  undefined2 uStack_162;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  ulonglong local_158;
  float local_150;
  float local_14c;
  float local_148;
  undefined4 local_144;
  float local_140;
  int local_13c;
  float local_138;
  undefined ***local_130;
  undefined **local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108 [4];
  undefined4 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0 [2];
  ulonglong local_e8;
  
  local_e8 = DAT_1803da4c0 ^ (ulonglong)auStack_3c8;
  *param_4 = 0;
  puVar1 = param_4 + 1;
  *puVar1 = 0;
  local_348 = (undefined4 *)(param_4 + 4);
  *local_348 = 0;
  local_338 = (int *)(param_4 + 8);
  *local_338 = 0;
  pfVar12 = (float *)(param_4 + 0xc);
  pfVar12[0] = 0.0;
  pfVar12[1] = 0.0;
  *(undefined4 *)(param_4 + 0x14) = 0;
  DAT_1804236b8 = 0;
  DAT_1804236c8 = 0;
  DAT_1804236c4 = 0;
  DAT_1804236bc = 0.0;
  DAT_1804236b4 = 0;
  DAT_1804236d8 = 0;
  DAT_1804236c0 = 0;
  local_238[0] = DAT_1804236d0;
  if ((DAT_1804236d0 == (float *)0x0) || (DAT_1803fa610 == 0)) {
    DAT_1804236b8 = 1;
    pfVar10 = DAT_1804236d0;
  }
  else {
    uVar9 = (uint)*param_1 & 0x7f800000;
    pfVar10 = (float *)(ulonglong)uVar9;
    if (uVar9 != 0x7f800000) {
      uVar9 = (uint)param_1[1] & 0x7f800000;
      pfVar10 = (float *)(ulonglong)uVar9;
      if (uVar9 != 0x7f800000) {
        uVar9 = (uint)param_1[2] & 0x7f800000;
        pfVar10 = (float *)(ulonglong)uVar9;
        if (uVar9 != 0x7f800000) {
          uVar9 = (uint)*param_2 & 0x7f800000;
          pfVar10 = (float *)(ulonglong)uVar9;
          if (uVar9 != 0x7f800000) {
            local_318 = param_2 + 1;
            uVar9 = (uint)*local_318 & 0x7f800000;
            pfVar10 = (float *)(ulonglong)uVar9;
            if (uVar9 != 0x7f800000) {
              local_320 = param_2 + 2;
              uVar9 = (uint)*local_320 & 0x7f800000;
              pfVar10 = (float *)(ulonglong)uVar9;
              if (uVar9 != 0x7f800000) {
                local_100 = *param_2 - *param_1;
                local_fc = *local_318 - param_1[1];
                local_f8 = *local_320 - param_1[2];
                local_388 = puVar1;
                local_350 = param_3;
                local_330 = param_3;
                local_300 = param_4;
                local_2f8 = param_1;
                pfVar10 = (float *)(*(code *)PTR_FUN_1803da018)
                                             (local_fc * local_fc + local_100 * local_100 +
                                              local_f8 * local_f8);
                fVar4 = DAT_180380bb0;
                if (DAT_180380bb0 < extraout_XMM0_Da) {
                  local_f0[0] = extraout_XMM0_Da;
                  (*(code *)PTR_FUN_1803da000)(&local_100);
                  pfVar10 = (float *)(ulonglong)((uint)local_100 & 0x7f800000);
                  if (((((uint)local_100 & 0x7f800000) != 0x7f800000) &&
                      (pfVar10 = (float *)(ulonglong)((uint)local_fc & 0x7f800000),
                      ((uint)local_fc & 0x7f800000) != 0x7f800000)) &&
                     (pfVar10 = (float *)(ulonglong)((uint)local_f8 & 0x7f800000),
                     ((uint)local_f8 & 0x7f800000) != 0x7f800000)) {
                    local_328 = (float *)(param_4 + 4);
                    local_2e0 = local_338;
                    local_2e8 = param_2 + 1;
                    local_308 = param_2 + 2;
                    local_108[0] = 0;
                    local_104 = 0;
                    local_340 = pfVar12;
                    local_2c8 = param_2;
                    local_104 = (**(code **)(*(longlong *)local_238[0] + 0x28))
                                          (local_238[0],local_108);
                    local_390 = 0.0;
                    pfVar10 = (float *)(**(code **)(*(longlong *)local_238[0] + 0x30))();
                    if (0.0 < extraout_XMM0_Da_00) {
                      local_398._4_4_ = local_330[8];
                      local_390 = extraout_XMM0_Da_00;
                      local_398._0_4_ = (float)(**(code **)(*(longlong *)local_238[0] + 0x40))();
                      pfVar7 = local_330;
                      piVar15 = (int *)&local_398;
                      if ((int)local_398._4_4_ <= (int)(float)local_398) {
                        piVar15 = (int *)((longlong)&local_398 + 4);
                      }
                      local_398._4_4_ = (float)*piVar15;
                      local_398._0_4_ = 1.4013e-45;
                      piVar15 = (int *)&local_398;
                      if (0 < (int)local_398._4_4_) {
                        piVar15 = (int *)((longlong)&local_398 + 4);
                      }
                      if (4 < (int)local_398._4_4_) {
                        piVar15 = &DAT_18033c6a0;
                      }
                      local_398._4_4_ = (float)*piVar15;
                      local_128 = vftable_CTripleTraceFilter;
                      local_120 = *(undefined8 *)param_3;
                      local_118 = *(undefined8 *)(local_330 + 2);
                      local_110 = *(undefined8 *)(local_330 + 4);
                      local_388 = *(undefined1 **)param_1;
                      local_380 = param_1[2];
                      *local_348 = local_104;
                      *puVar1 = local_108[0];
                      (**(code **)(*(longlong *)local_238[0] + 0x48))
                                (local_238[0],param_1,&local_100);
                      local_398._0_4_ = (float)(**(code **)(*(longlong *)local_238[0] + 0x38))();
                      piVar15 = local_338;
                      fVar6 = DAT_1803812a4;
                      fVar5 = DAT_180380f40;
                      fVar3 = DAT_180380ac0;
                      fVar21 = 0.0;
                      local_350 = (float *)((ulonglong)local_350 & 0xffffffff00000000);
                      ppfVar11 = &local_350;
                      if (0.0 <= (float)local_398) {
                        ppfVar11 = (float **)&local_398;
                      }
                      if (DAT_1803812a4 < (float)local_398) {
                        ppfVar11 = (float **)&DAT_18033c69c;
                      }
                      fVar20 = *(float *)ppfVar11;
                      local_270 = local_238;
                      local_268 = &local_104;
                      pfVar10 = local_f0;
                      local_30c = 0;
                      fVar18 = extraout_XMM0_Da_00;
                      local_278 = param_4;
                      local_260 = pfVar10;
                      while (iVar8 = local_30c, local_30c <= (int)local_398._4_4_) {
                        if (fVar20 <= 0.0) {
                          DAT_1804236b8 = 8;
                          DAT_1804236c8 = local_30c;
                          return (float *)((ulonglong)pfVar10 & 0xffffffffffffff00);
                        }
                        local_2b8 = local_100 * fVar20;
                        local_2b4 = local_fc * fVar20;
                        local_2b0 = local_f8 * fVar20;
                        local_2f8 = (float *)CONCAT44(local_388._4_4_ + local_2b4,
                                                      (float)local_388 + local_2b8);
                        local_2f0 = local_380 + local_2b0;
                        local_3a8 = &local_228;
                        DAT_1804236c8 = local_30c;
                        pfVar10 = (float *)FUN_1800abbc0(&local_388,&local_2f8,0x46004003,&local_128
                                                        );
                        if ((char)pfVar10 == '\0') {
                          return pfVar10;
                        }
                        *pfVar12 = local_21c;
                        *(float *)(param_4 + 0x10) = local_218;
                        *(float *)(param_4 + 0x14) = local_214;
                        *local_348 = local_104;
                        local_2ac = *local_2c8 - (float)local_388;
                        local_2a8 = *local_318 - local_388._4_4_;
                        local_2a4 = *local_320 - local_380;
                        fVar19 = local_fc * local_2a8 + local_100 * local_2ac + local_f8 * local_2a4
                        ;
                        local_2a0 = local_21c - (float)local_388;
                        local_29c = local_218 - local_388._4_4_;
                        local_298 = local_214 - local_380;
                        fVar16 = (float)(*(code *)PTR_FUN_1803da018)
                                                  (local_29c * local_29c + local_2a0 * local_2a0 +
                                                   local_298 * local_298);
                        if ((fVar4 <= local_1fc) || ((local_1de & 4) != 0)) {
                          bVar2 = true;
                        }
                        else {
                          bVar2 = false;
                        }
                        uVar13 = *(ulonglong *)(pfVar7 + 6);
                        if ((uVar13 != 0) && (local_1d0 == uVar13)) {
                          pfVar12 = (float *)FUN_1800ae270(&local_278,&local_21c);
                          return pfVar12;
                        }
                        if ((0.0 < fVar19) && (fVar19 <= fVar20 + fVar5)) {
                          fVar17 = fVar16;
                          if (bVar2) {
                            fVar17 = fVar20;
                          }
                          if (fVar19 - fVar5 <= fVar17) {
                            pfVar12 = (float *)FUN_1800ae270(&local_278,param_2);
                            return pfVar12;
                          }
                        }
                        if (bVar2) {
                          DAT_1804236b8 = 4;
                          return (float *)(uVar13 & 0xffffffffffffff00);
                        }
                        uVar13 = FUN_1800acb00(local_1d0);
                        if ((char)uVar13 != '\0') {
                          DAT_1804236b8 = 5;
                          return (float *)(uVar13 & 0xffffffffffffff00);
                        }
                        uVar13 = FUN_1800aa2b0(&local_228);
                        DAT_1804236c4 = (undefined4)uVar13;
                        if ((int)local_398._4_4_ <= iVar8) {
                          DAT_1804236b8 = 6;
                          DAT_1804236bc = fVar18;
                          return (float *)(uVar13 & 0xffffffffffffff00);
                        }
                        fVar21 = fVar21 + fVar16;
                        local_310 = fVar21;
                        local_18c = 0;
                        uStack_184 = 0;
                        local_17c = 0;
                        uStack_178 = 0;
                        uStack_174 = 0;
                        uStack_170 = 0;
                        uStack_16e = 0;
                        local_16c = 0;
                        uStack_164 = 0;
                        uStack_162 = 0;
                        uStack_160 = 0;
                        uStack_15c = 0;
                        local_158 = 0;
                        local_150 = 0.0;
                        local_14c = 0.0;
                        local_148 = 0.0;
                        local_144 = 0;
                        local_140 = 0.0;
                        local_13c = 0;
                        local_138 = 0.0;
                        local_130 = (undefined ***)0x0;
                        local_1b8 = local_228;
                        local_1b4 = local_224;
                        local_1b0 = local_220;
                        local_1ac = local_21c;
                        local_1a8 = local_218;
                        local_1a4 = local_214;
                        local_1a0 = local_210;
                        local_19c = local_20c;
                        local_198 = local_208;
                        local_194 = local_204;
                        local_190 = local_200;
                        local_18f = local_1ff;
                        for (local_2c0 = 0; local_2c0 < 2; local_2c0 = local_2c0 + 1) {
                          auStack_18e[local_2c0] = auStack_1fe[local_2c0];
                        }
                        uStack_178 = (undefined4)local_1e8;
                        uStack_174 = (undefined4)((ulonglong)local_1e8 >> 0x20);
                        uStack_170 = local_1e0;
                        uStack_16e = local_1de;
                        uStack_164 = local_1d4;
                        uStack_160 = (undefined4)local_1d0;
                        uStack_15c = (undefined4)(local_1d0 >> 0x20);
                        local_158 = (ulonglong)local_1c8;
                        local_150 = local_100;
                        local_14c = local_fc;
                        local_148 = local_f8;
                        local_144 = local_104;
                        local_130 = &local_128;
                        local_370 = 0;
                        local_36c = 0.0;
                        local_368 = 0.0;
                        local_364 = 0.0;
                        local_360 = 0;
                        local_35c = 0.0;
                        local_358[0] = -1.0;
                        DAT_1804236bc = fVar18;
                        local_140 = fVar18;
                        local_13c = iVar8;
                        local_138 = fVar21;
                        pcVar14 = (char *)(**(code **)(*(longlong *)local_238[0] + 0x58))
                                                    (local_238[0],local_258,&local_1b8);
                        local_370 = *pcVar14;
                        local_36c = *(float *)(pcVar14 + 4);
                        local_368 = *(float *)(pcVar14 + 8);
                        local_364 = *(float *)(pcVar14 + 0xc);
                        local_360 = *(undefined4 *)(pcVar14 + 0x10);
                        local_35c = *(float *)(pcVar14 + 0x14);
                        local_358[0] = *(float *)(pcVar14 + 0x18);
                        if (local_370 == '\0') {
LAB_1800ae1ed:
                          DAT_1804236b8 = 7;
                          return (float *)((ulonglong)pcVar14 & 0xffffffffffffff00);
                        }
                        local_308 = (float *)CONCAT44(local_308._4_4_,local_36c);
                        pcVar14 = (char *)(ulonglong)((uint)local_36c & 0x7f800000);
                        if (((uint)local_36c & 0x7f800000) != 0x7f800000) {
                          local_300 = (undefined1 *)CONCAT44(local_300._4_4_,local_368);
                          pcVar14 = (char *)(ulonglong)((uint)local_368 & 0x7f800000);
                          if (((uint)local_368 & 0x7f800000) != 0x7f800000) {
                            local_2e0 = (int *)CONCAT44(local_2e0._4_4_,local_364);
                            uVar9 = (uint)local_364 & 0x7f800000;
                            pcVar14 = (char *)(ulonglong)uVar9;
                            if (uVar9 != 0x7f800000) {
                              pcVar14 = (char *)CONCAT71((uint7)(uint3)(uVar9 >> 8),1);
                            }
                          }
                        }
                        if (((char)pcVar14 == '\0') || (local_35c <= 0.0)) goto LAB_1800ae1ed;
                        local_294 = local_36c - local_21c;
                        local_290 = local_368 - local_218;
                        local_28c = local_364 - local_214;
                        fVar18 = (float)(*(code *)PTR_FUN_1803da018)
                                                  (local_290 * local_290 + local_294 * local_294 +
                                                   local_28c * local_28c);
                        fVar21 = fVar21 + fVar18;
                        local_310 = fVar21;
                        local_104 = local_360;
                        local_390 = local_35c;
                        local_30c = iVar8 + 1;
                        *piVar15 = local_30c;
                        if (local_358[0] < 0.0) {
                          fVar18 = (fVar20 - fVar16) - fVar18;
                          local_328 = (float *)CONCAT44(local_328._4_4_,fVar18);
                          local_340 = (float *)((ulonglong)local_340 & 0xffffffff00000000);
                          ppfVar11 = &local_328;
                          if (fVar18 <= 0.0) {
                            ppfVar11 = &local_340;
                          }
                        }
                        else {
                          local_350 = (float *)((ulonglong)local_350 & 0xffffffff00000000);
                          ppfVar11 = &local_350;
                          if (0.0 <= local_358[0]) {
                            ppfVar11 = (float **)local_358;
                          }
                          if (fVar6 < local_358[0]) {
                            ppfVar11 = (float **)&DAT_18033c69c;
                          }
                        }
                        fVar20 = *(float *)ppfVar11;
                        local_288 = local_100 * fVar3;
                        local_284 = local_fc * fVar3;
                        local_280 = local_f8 * fVar3;
                        fVar18 = local_36c + local_288;
                        fVar16 = local_368 + local_284;
                        local_380 = local_364 + local_280;
                        local_2d8 = CONCAT44(fVar16,fVar18);
                        local_388 = (undefined1 *)CONCAT44(fVar16,fVar18);
                        local_2e8 = (float *)CONCAT44(local_2e8._4_4_,fVar18);
                        pfVar10 = (float *)(ulonglong)((uint)fVar18 & 0x7f800000);
                        if (((uint)fVar18 & 0x7f800000) != 0x7f800000) {
                          local_330 = (float *)CONCAT44(local_330._4_4_,fVar16);
                          pfVar10 = (float *)(ulonglong)((uint)fVar16 & 0x7f800000);
                          if (((uint)fVar16 & 0x7f800000) != 0x7f800000) {
                            local_338 = (int *)CONCAT44(local_338._4_4_,local_380);
                            uVar9 = (uint)local_380 & 0x7f800000;
                            pfVar10 = (float *)(ulonglong)uVar9;
                            if (uVar9 != 0x7f800000) {
                              pfVar10 = (float *)CONCAT71((uint7)(uint3)(uVar9 >> 8),1);
                            }
                          }
                        }
                        fVar18 = local_35c;
                        local_398._0_4_ = fVar20;
                        local_2d0 = local_380;
                        if ((char)pfVar10 == '\0') {
                          return pfVar10;
                        }
                      }
                    }
                    else {
                      DAT_1804236b8 = 3;
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
  return (float *)((ulonglong)pfVar10 & 0xffffffffffffff00);
}


