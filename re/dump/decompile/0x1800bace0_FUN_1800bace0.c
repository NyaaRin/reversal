// 0x1800bace0  FUN_1800bace0
// size=2282 thunk=false
// signature: undefined FUN_1800bace0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800bace0(float *param_1,float *param_2)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  BOOL BVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  longlong *plVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  longlong *plVar13;
  longlong lVar14;
  float fVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float local_res18 [2];
  float local_res20 [2];
  float local_198;
  undefined4 local_194;
  float local_190;
  float local_188;
  undefined4 uStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  float fStack_16c;
  undefined4 local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  uint local_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  float fStack_140;
  uint uStack_13c;
  float local_138;
  float local_134;
  float local_130;
  float *local_128;
  float *local_120;
  float *local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8 [3];
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0 [38];
  
  cVar2 = FUN_1800b81b0();
  plVar13 = DAT_180409cc0;
  if (cVar2 == '\0') {
    return;
  }
  if (DAT_1803fa608 == 0) {
    return;
  }
  if (DAT_1803fa360 == (longlong *)0x0) {
    return;
  }
  fVar23 = (float)*(double *)(DAT_1803fa608 + 0x10);
  local_198 = 0.0;
  local_194 = 0;
  local_190 = 0.0;
  local_res18[0] = fVar23;
  if ((DAT_180409cc0 != (longlong *)0x0) && (fVar23 - _DAT_1803e8710 < DAT_1803809ec)) {
    if (DAT_1803e8718 == '\0') {
      if (fVar23 - _DAT_1803e99e4 <= DAT_180380e28) {
        return;
      }
      _DAT_1803e99e4 = fVar23;
      FUN_180014410(&DAT_18034b9d0);
      return;
    }
    if (((((DAT_180409cc0 != (longlong *)0x0) && (BVar4 = IsBadReadPtr(DAT_180409cc0,8), BVar4 == 0)
          ) && (BVar4 = IsBadReadPtr((void *)*plVar13,8), BVar4 == 0)) &&
        ((plVar8 = (longlong *)(**(code **)(*plVar13 + 0x20))(plVar13), plVar8 != (longlong *)0x0 &&
         (cVar2 = (**(code **)(*plVar8 + 0x40))(plVar8), cVar2 == '\0')))) &&
       ((plVar8 = (longlong *)(**(code **)(*plVar13 + 0x20))(plVar13), plVar8 != (longlong *)0x0 &&
        ((fVar5 = (float)(**(code **)(*plVar8 + 0x48))(plVar8), (int)fVar5 - 1U < 0x80 &&
         (plVar8 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,fVar5),
         plVar8 == plVar13)))))) {
      local_194 = FUN_18001c680(plVar13);
      lVar9 = FUN_18001d620(plVar13);
      local_190 = *(float *)(lVar9 + 4);
      local_198 = fVar5;
    }
    fVar5 = DAT_180380ac0;
    if (0 < (int)local_198) goto LAB_1800baeac;
  }
  fVar20 = DAT_180380bb0;
  fVar5 = DAT_180380ac0;
  fVar15 = 1.4013e-45;
  fVar19 = DAT_180380b9c;
  local_128 = param_1;
  local_120 = param_2;
  while ((local_res20[0] = fVar15, (int)fVar15 <= *(int *)(DAT_1803fa608 + 0x1c) &&
         ((int)fVar15 < 0x81))) {
    plVar13 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,fVar15);
    if ((((plVar13 == (longlong *)0x0) ||
         (((BVar4 = IsBadReadPtr(plVar13,8), BVar4 != 0 ||
           (BVar4 = IsBadReadPtr((void *)*plVar13,8), BVar4 != 0)) ||
          (plVar8 = (longlong *)(**(code **)(*plVar13 + 0x20))(plVar13), plVar8 == (longlong *)0x0))
         )) || ((cVar2 = (**(code **)(*plVar8 + 0x40))(plVar8), cVar2 != '\0' ||
                (cVar2 = FUN_18001c330(plVar13), cVar2 == '\0')))) ||
       ((DAT_1803fa668 != (longlong *)0x0 &&
        (fVar7 = (float)(**(code **)(*DAT_1803fa668 + 0x60))(), fVar15 == fVar7)))) {
      fVar15 = (float)((int)fVar15 + 1);
    }
    else {
      pfVar10 = (float *)FUN_18001daf0(plVar13,local_d0);
      pfVar11 = (float *)FUN_18001bef0(plVar13);
      pfVar12 = (float *)FUN_18001bfe0(plVar13);
      local_110 = *pfVar11 + *pfVar12;
      local_10c = pfVar12[1] + pfVar11[1];
      local_108 = pfVar12[2] + pfVar11[2];
      local_104 = local_110 * fVar5;
      local_100 = local_10c * fVar5;
      local_fc = local_108 * fVar5;
      fVar7 = local_104 + *pfVar10;
      fVar18 = local_100 + pfVar10[1];
      fVar21 = local_fc + pfVar10[2];
      local_f8 = fVar7;
      local_f4 = fVar18;
      local_f0 = fVar21;
      FUN_18001c430(plVar13,local_e8);
      local_dc = fVar7;
      local_d8 = fVar18;
      local_d4 = fVar21;
      pfVar10 = local_e8;
      while (local_118 = pfVar10, pfVar10 != local_d0) {
        fVar21 = *pfVar10 - *local_128;
        fVar18 = pfVar10[1] - param_1[1];
        fVar22 = pfVar10[2] - param_1[2];
        local_138 = fVar21;
        local_134 = fVar18;
        local_130 = fVar22;
        fVar7 = (float)(*(code *)PTR_FUN_1803da018)
                                 (fVar18 * fVar18 + fVar21 * fVar21 + fVar22 * fVar22);
        if (fVar20 <= fVar7) {
          fVar7 = (fVar18 * param_2[1] + fVar21 * *local_120 + fVar22 * param_2[2]) / fVar7;
          if (fVar19 < fVar7) {
            local_194 = FUN_18001c680(plVar13);
            lVar9 = FUN_18001d620(plVar13);
            local_190 = *(float *)(lVar9 + 4);
            fVar19 = fVar7;
            local_198 = fVar15;
          }
          pfVar10 = pfVar10 + 3;
        }
        else {
          pfVar10 = pfVar10 + 3;
        }
      }
      fVar15 = (float)((int)fVar15 + 1);
    }
  }
LAB_1800baeac:
  if ((0 < (int)local_198) &&
     (((iVar6 = FUN_1800b82e0(), pfVar10 = DAT_1803e9e08, iVar6 != 0 ||
       (*(char *)((longlong)&DAT_180561188 + (longlong)(int)local_198 * 0x168 + 1) != '\0')) ||
      (fVar23 < *(float *)(&DAT_18056118c + (longlong)(int)local_198 * 0x2d))))) {
    for (; pfVar10 != DAT_1803e9e10; pfVar10 = pfVar10 + 0x14) {
      if ((*pfVar10 == local_198) && (*(char *)(pfVar10 + 0xc) == '\0')) {
        return;
      }
    }
    local_178 = 0;
    uStack_170 = 0;
    fStack_164 = -NAN;
    fStack_160 = 0.0;
    local_158 = local_158 & 0xffffff00;
    fStack_154 = -1.0;
    uStack_144 = 0;
    fStack_140 = 0.0;
    uStack_13c = uStack_13c & 0xffffff00;
    uStack_184 = local_194;
    local_188 = local_198;
    fStack_180 = (float)FUN_1800babd0();
    fStack_180 = fStack_180 + fVar23;
    fVar20 = fVar23 + DAT_180380c50;
    fStack_16c = fVar20;
    if ((((int)local_198 < 0x81) && (cVar2 = FUN_1800b86f0(), cVar2 != '\0')) &&
       ((&DAT_18056114c)[(longlong)(int)local_198 * 0x168] != '\0')) {
      local_190 = (float)(&DAT_180561148)[(longlong)(int)local_198 * 0x5a];
    }
    lVar9 = (longlong)(int)local_198;
    fVar19 = local_190;
    if (((int)local_198 < 0x81) && ((&DAT_180561158)[lVar9 * 0x168] != '\0')) {
      fVar19 = *(float *)((longlong)&DAT_180561150 + lVar9 * 0x168 + 4);
    }
    local_res20[0] = 0.0;
    local_res18[0] = -NAN;
    iVar6 = FUN_1800b82e0();
    fStack_15c = fVar19;
    if ((iVar6 == 0) &&
       (cVar2 = FUN_1800b9cf0(local_198,local_190,local_res20,local_res18), fVar7 = local_res20[0],
       fVar15 = local_res18[0], cVar2 != '\0')) {
      fStack_164 = local_res18[0];
      fStack_160 = local_res20[0];
      local_168 = FUN_1802d3e00(local_res20[0] - fVar19);
      (&DAT_180561160)[lVar9 * 0x5a] = fVar15;
      (&DAT_180561164)[lVar9 * 0x5a] = fVar7;
      (&DAT_180561168)[lVar9 * 0x5a] = fVar20;
    }
    else {
      fVar20 = (float)FUN_1800b9e90(local_198,local_190);
      local_168 = FUN_1802d3e00((fVar20 + local_190) - fVar19);
    }
    lVar9 = (**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,local_198);
    if (lVar9 != 0) {
      dVar17 = (double)FUN_18001c0d0();
      sVar3 = _dclass();
      if ((sVar3 < 1) && (0.0 < dVar17)) {
        fStack_154 = (float)(((double)fVar23 - dVar17) * DAT_180380ec0);
      }
    }
    if (DAT_1803fa608 == 0) {
      fVar23 = 0.0;
    }
    else {
      fVar23 = (float)*(double *)(DAT_1803fa608 + 0x10);
    }
    if ((fVar23 - _DAT_1803e8710 < 0.0) || (bVar1 = true, fVar5 <= fVar23 - _DAT_1803e8710)) {
      bVar1 = false;
    }
    uStack_150 = 0xffffffff;
    if (bVar1) {
      uStack_150 = DAT_1803e870c;
    }
    uStack_14c = 0;
    local_148 = 0xffffffff;
    if (bVar1) {
      local_148 = DAT_1803e8714;
      uStack_14c = DAT_180409cbc;
    }
    plVar13 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,local_198);
    if ((((plVar13 != (longlong *)0x0) && (BVar4 = IsBadReadPtr(plVar13,8), BVar4 == 0)) &&
        (BVar4 = IsBadReadPtr((void *)*plVar13,8), BVar4 == 0)) &&
       ((plVar8 = (longlong *)(**(code **)(*plVar13 + 0x20))(plVar13), plVar8 != (longlong *)0x0 &&
        (cVar2 = (**(code **)(*plVar8 + 0x40))(plVar8), cVar2 == '\0')))) {
      lVar9 = FUN_18001bfe0(plVar13);
      uStack_144 = *(undefined4 *)(lVar9 + 8);
      lVar9 = FUN_18001c430(plVar13,local_d0);
      lVar14 = FUN_18001daf0(plVar13,&local_138);
      fStack_140 = *(float *)(lVar9 + 8) - *(float *)(lVar14 + 8);
      uStack_13c = CONCAT31(uStack_13c._1_3_,1);
    }
    plVar13 = (longlong *)(**(code **)(*DAT_1803fa360 + 0x18))(DAT_1803fa360,local_198);
    uVar16 = extraout_XMM0_Da;
    if (((plVar13 != (longlong *)0x0) &&
        (BVar4 = IsBadReadPtr(plVar13,8), uVar16 = extraout_XMM0_Da_00, BVar4 == 0)) &&
       ((BVar4 = IsBadReadPtr((void *)*plVar13,8), uVar16 = extraout_XMM0_Da_01, BVar4 == 0 &&
        ((plVar8 = (longlong *)(**(code **)(*plVar13 + 0x20))(plVar13), uVar16 = extraout_XMM0_Da_02
         , plVar8 != (longlong *)0x0 &&
         (cVar2 = (**(code **)(*plVar8 + 0x40))(plVar8), uVar16 = extraout_XMM0_Da_03, cVar2 == '\0'
         )))))) {
      local_178 = FUN_18001c0d0(plVar13);
      uVar16 = (undefined4)local_178;
    }
    pfVar10 = DAT_1803e9e10;
    if (DAT_1803e9e10 == DAT_1803e9e18) {
      FUN_1802270b0(uVar16,DAT_1803e9e10,&local_188);
    }
    else {
      *(ulonglong *)DAT_1803e9e10 = CONCAT44(uStack_184,local_188);
      *(ulonglong *)(pfVar10 + 2) = CONCAT44(uStack_17c,fStack_180);
      *(undefined8 *)(pfVar10 + 4) = local_178;
      *(ulonglong *)(pfVar10 + 6) = CONCAT44(fStack_16c,uStack_170);
      *(ulonglong *)(pfVar10 + 8) = CONCAT44(fStack_164,local_168);
      *(ulonglong *)(pfVar10 + 10) = CONCAT44(fStack_15c,fStack_160);
      *(ulonglong *)(pfVar10 + 0xc) = CONCAT44(fStack_154,local_158);
      *(ulonglong *)(pfVar10 + 0xe) = CONCAT44(uStack_14c,uStack_150);
      *(ulonglong *)(pfVar10 + 0x10) = CONCAT44(uStack_144,local_148);
      *(ulonglong *)(pfVar10 + 0x12) = CONCAT44(uStack_13c,fStack_140);
      DAT_1803e9e10 = DAT_1803e9e10 + 0x14;
    }
  }
  return;
}


