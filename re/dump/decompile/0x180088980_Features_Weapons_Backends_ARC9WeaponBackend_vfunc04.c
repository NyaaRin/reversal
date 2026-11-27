// 0x180088980  Features_Weapons_Backends_ARC9WeaponBackend_vfunc04
// size=2256 thunk=false
// signature: undefined Features_Weapons_Backends_ARC9WeaponBackend_vfunc04()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * Features_Weapons_Backends_ARC9WeaponBackend_vfunc04
                  (longlong param_1,float *param_2,undefined8 param_3,undefined4 *param_4)

{
  float fVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  char *pcVar11;
  byte bVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_2b8 [32];
  undefined8 *local_298;
  undefined4 local_290;
  undefined4 *local_288;
  undefined4 *local_280;
  undefined4 *local_278;
  undefined4 *local_270;
  undefined4 *local_268;
  undefined4 *local_260;
  double local_258;
  double local_250;
  double local_248;
  double local_240;
  double local_238;
  double local_230;
  undefined4 local_228;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  char local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  undefined **local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_198;
  float local_194;
  float local_190;
  float local_188;
  float local_184;
  float local_180;
  undefined4 local_178;
  undefined8 local_174;
  undefined4 local_168;
  undefined8 local_164;
  undefined8 local_158;
  undefined1 local_150;
  undefined1 local_14f;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_d8;
  
  local_d8 = DAT_1803da4c0 ^ (ulonglong)auStack_2b8;
  uVar10 = 0;
  local_1c0 = param_3;
  if ((DAT_1803fa678 != (longlong *)0x0) &&
     (lVar9 = (**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0), lVar9 != 0)) {
    uVar10 = *(undefined8 *)(lVar9 + 8);
  }
  FUN_18002dc30(&local_200,uVar10);
  pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar9 = (*pcVar3)(DAT_1803fa360,uVar7);
  if ((lVar9 == 0) || (param_4 == (undefined4 *)0x0)) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    if (local_1e8 == '\0') {
      return param_2;
    }
    if (DAT_1803faf78 == (code *)0x0) {
      return param_2;
    }
    (*DAT_1803faf78)(local_200,local_1f8,local_1f0,local_1ec);
    return param_2;
  }
  bVar2 = *(byte *)(param_4 + 8);
  fVar19 = DAT_1803812a8;
  if (DAT_1803fa610 != (longlong *)0x0) {
    FUN_1802d4050(param_4 + 2,&local_1b0);
    FUN_18001c430(lVar9,&local_1e0);
    fVar19 = DAT_1803812d4;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    local_1d0 = vftable_CTraceFilter;
    local_158 = 0;
    local_188 = (local_1b0 * DAT_1803812d4 + local_1e0) - local_1e0;
    local_184 = (local_1ac * DAT_1803812d4 + local_1dc) - local_1dc;
    local_180 = (local_1a8 * DAT_1803812d4 + local_1d8) - local_1d8;
    local_1c8 = lVar9;
    fVar15 = (float)(*(code *)PTR_FUN_1803da018)
                              (local_184 * local_184 + local_188 * local_188 + local_180 * local_180
                              );
    local_14f = fVar15 != 0.0;
    local_164 = 0;
    local_168 = 0;
    local_158 = 0;
    local_150 = 1;
    local_174 = 0;
    local_178 = 0;
    local_198 = local_1e0;
    local_194 = local_1dc;
    local_190 = local_1d8;
    local_298 = &local_148;
    (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,&local_198,0x46004003,&local_1d0);
    fVar19 = uStack_120._4_4_ * fVar19;
  }
  bVar13 = true;
  bVar14 = true;
  if (DAT_1803fa340 != 0) {
    if (DAT_1804261d8 == 0) {
      DAT_1804261d8 = FUN_180016fb0("arc9_bullet_physics");
    }
    if (DAT_1803fedc8 == 0) {
      DAT_1803fedc8 = FUN_180016fb0("arc9_bullet_physics_shotguns");
    }
    if (DAT_1804261d8 != 0) {
      iVar8 = FUN_1800197a0(DAT_1804261d8);
      bVar13 = iVar8 != 0;
    }
    bVar14 = true;
    if (DAT_1803fedc8 != 0) {
      iVar8 = FUN_1800197a0();
      bVar14 = iVar8 != 0;
    }
  }
  if ((((*(char *)(param_1 + 0x2c) == '\0') && (!bVar13)) || (*(char *)(param_1 + 0x2d) != '\0')) ||
     ((2 < *(int *)(param_1 + 0x30) && (!bVar14)))) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  bVar14 = bVar13;
  if ((fVar19 <= DAT_180381268) && (bVar14 = false, *(char *)(param_1 + 0x2c) != '\0')) {
    bVar14 = bVar13;
  }
  cVar5 = FUN_180086fc0(param_1,param_3);
  if ((bVar14) || (uVar4 = 0, cVar5 != '\0')) {
    uVar6 = 1;
    uVar4 = 1;
    if ((bVar14) && (*(char *)(param_1 + 0x2c) == '\0')) {
      bVar12 = 1;
      goto LAB_180088cb3;
    }
  }
  uVar6 = uVar4;
  bVar12 = 0;
LAB_180088cb3:
  local_218 = 0;
  local_204 = 0;
  local_208 = 0;
  local_20c = 0;
  local_210 = 0;
  local_214 = 0;
  local_260 = &local_214;
  local_268 = &local_210;
  local_270 = &local_20c;
  local_278 = &local_208;
  local_280 = &local_204;
  local_288 = &local_218;
  local_290 = CONCAT31(local_290._1_3_,bVar12);
  local_298 = (undefined8 *)CONCAT71(local_298._1_7_,uVar6);
  FUN_1800880b0(param_1,&local_1b0,local_1c0,param_4);
  fVar17 = local_1ac;
  fVar15 = local_1b0;
  *(undefined4 *)(param_1 + 0x58) = local_218;
  if ((bVar14) || (cVar5 != '\0')) {
    fVar15 = *(float *)(param_1 + 0x40);
    fVar17 = (float)FUN_1802d3e00(local_1b0 + *(float *)(param_1 + 0x3c));
    fVar15 = (float)FUN_1802d3e00(local_1ac + fVar15);
    if (((bVar2 & 1) != 0) &&
       ((iVar8 = DAT_180425ff0 + 1, DAT_180425ff0 < 0x1e ||
        (DAT_180425ff0 = iVar8, iVar8 == (iVar8 / 100) * 100)))) {
      local_230 = (double)fVar15;
      local_238 = (double)fVar17;
      local_240 = (double)local_1ac;
      local_248 = (double)local_1b0;
      local_250 = (double)*(float *)(param_1 + 0x40);
      local_258 = (double)*(float *)(param_1 + 0x3c);
      local_268 = (undefined4 *)(double)*(float *)(param_1 + 8);
      pcVar11 = "LUACONE";
      if (bVar14) {
        pcVar11 = "PHYS";
      }
      local_228 = *param_4;
      local_260 = (undefined4 *)CONCAT44(local_260._4_4_,(uint)bVar12);
      local_270 = (undefined4 *)CONCAT44(local_270._4_4_,local_214);
      local_278 = (undefined4 *)CONCAT44(local_278._4_4_,local_210);
      local_280 = (undefined4 *)CONCAT44(local_280._4_4_,local_20c);
      local_288 = (undefined4 *)CONCAT44(local_288._4_4_,*(undefined4 *)(param_1 + 0x4c));
      local_290 = local_208;
      local_298 = (undefined8 *)CONCAT44(local_298._4_4_,local_218);
      DAT_180425ff0 = iVar8;
      FUN_180014410("[ARC9-NS] %s dist=%.1f baseTick=%d bestTick=%d luaTick=%d tickoff=%d lat=%d choke=%d win=%d spread=%.4f dbldisp=%d shoot=(%.3f,%.3f) rnd=(%.3f,%.3f) comp=(%.4f,%.4f) cmd#%d\n"
                    ,pcVar11,(double)fVar19,local_204);
    }
    *param_2 = fVar17;
    param_2[1] = fVar15;
  }
  else {
    fVar1 = *(float *)(param_1 + 8);
    if ((((0.0 < fVar1) || (local_1b0 != 0.0)) || (local_1ac != 0.0)) ||
       ((*(float *)(param_1 + 0x3c) != 0.0 || (*(float *)(param_1 + 0x40) != 0.0)))) {
      fVar18 = local_1ac + *(float *)(param_1 + 0x40);
      fVar16 = (float)FUN_1802d3e00(local_1b0 + *(float *)(param_1 + 0x3c));
      fVar18 = (float)FUN_1802d3e00(fVar18);
      local_1c0._0_4_ = ((float)param_4[2] - fVar16) + *(float *)(param_1 + 0x3c) + fVar15;
      local_1c0._4_4_ = ((float)param_4[3] - fVar18) + *(float *)(param_1 + 0x40) + fVar17;
      local_1b8 = 0;
      uVar7 = FUN_1802d3e00((float)local_1c0);
      local_1c0 = CONCAT44(local_1c0._4_4_,uVar7);
      uVar7 = FUN_1802d3e00(local_1c0._4_4_);
      local_1c0 = CONCAT44(uVar7,(float)local_1c0);
      local_298._0_4_ = fVar1;
      FUN_1800886c0(uVar7,&local_1b0,&local_1c0,param_4);
      fVar18 = fVar17 + *(float *)(param_1 + 0x40) + local_1ac;
      fVar16 = (float)FUN_1802d3e00(fVar15 + *(float *)(param_1 + 0x3c) + local_1b0);
      fVar18 = (float)FUN_1802d3e00(fVar18);
      local_1c0._0_4_ = ((float)param_4[2] - fVar16) + *(float *)(param_1 + 0x3c) + fVar15;
      local_1c0._4_4_ = ((float)param_4[3] - fVar18) + *(float *)(param_1 + 0x40) + fVar17;
      local_1b8 = 0;
      uVar7 = FUN_1802d3e00((float)local_1c0);
      local_1c0 = CONCAT44(local_1c0._4_4_,uVar7);
      uVar7 = FUN_1802d3e00(local_1c0._4_4_);
      local_1c0 = CONCAT44(uVar7,(float)local_1c0);
      local_298._0_4_ = fVar1;
      FUN_1800886c0(uVar7,&local_1b0,&local_1c0,param_4);
      fVar18 = fVar17 + *(float *)(param_1 + 0x40) + local_1ac;
      fVar16 = (float)FUN_1802d3e00(fVar15 + *(float *)(param_1 + 0x3c) + local_1b0);
      fVar18 = (float)FUN_1802d3e00(fVar18);
      local_1c0._0_4_ = ((float)param_4[2] - fVar16) + *(float *)(param_1 + 0x3c) + fVar15;
      local_1c0._4_4_ = ((float)param_4[3] - fVar18) + *(float *)(param_1 + 0x40) + fVar17;
      local_1b8 = 0;
      uVar7 = FUN_1802d3e00((float)local_1c0);
      local_1c0 = CONCAT44(local_1c0._4_4_,uVar7);
      uVar7 = FUN_1802d3e00(local_1c0._4_4_);
      local_1c0 = CONCAT44(uVar7,(float)local_1c0);
      local_298 = (undefined8 *)CONCAT44(local_298._4_4_,fVar1);
      FUN_1800886c0(uVar7,&local_1b0,&local_1c0,param_4);
      fVar16 = *(float *)(param_1 + 0x40);
      fVar18 = (float)FUN_1802d3e00(fVar15 + *(float *)(param_1 + 0x3c) + local_1b0);
      fVar16 = (float)FUN_1802d3e00(fVar17 + fVar16 + local_1ac);
      if (((bVar2 & 1) != 0) &&
         ((iVar8 = DAT_1803fe3d8 + 1, DAT_1803fe3d8 < 0x1e ||
          (DAT_1803fe3d8 = iVar8, iVar8 == (iVar8 / 100) * 100)))) {
        local_248 = (double)fVar16;
        local_250 = (double)fVar18;
        local_258 = (double)fVar17;
        local_260 = (undefined4 *)(double)fVar15;
        local_268 = (undefined4 *)(double)*(float *)(param_1 + 0x40);
        local_270 = (undefined4 *)(double)*(float *)(param_1 + 0x3c);
        local_278 = (undefined4 *)(double)fVar1;
        local_240 = (double)CONCAT44(local_240._4_4_,*param_4);
        local_280 = (undefined4 *)CONCAT44(local_280._4_4_,local_214);
        local_288 = (undefined4 *)CONCAT44(local_288._4_4_,local_210);
        local_290 = local_20c;
        local_298 = (undefined8 *)CONCAT44(local_298._4_4_,local_208);
        DAT_1803fe3d8 = iVar8;
        FUN_180014410("[ARC9-NS] HITSCAN(engine cone) dist=%.1f baseTick=%d bestTick=%d luaTick=%d lat=%d choke=%d win=%d spread=%.4f shoot=(%.3f,%.3f) rnd=(%.3f,%.3f) comp=(%.4f,%.4f) cmd#%d\n"
                      ,(double)fVar19,local_204,local_218);
      }
      *param_2 = fVar18;
      param_2[1] = fVar16;
    }
    else {
      param_2[0] = 0.0;
      param_2[1] = 0.0;
    }
  }
  param_2[2] = 0.0;
  if ((local_1e8 != '\0') && (DAT_1803faf78 != (code *)0x0)) {
    (*DAT_1803faf78)(local_200,local_1f8,local_1f0,local_1ec);
  }
  return param_2;
}


