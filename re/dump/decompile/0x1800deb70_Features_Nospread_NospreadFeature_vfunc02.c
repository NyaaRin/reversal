// 0x1800deb70  Features_Nospread_NospreadFeature_vfunc02
// size=3003 thunk=false
// signature: undefined Features_Nospread_NospreadFeature_vfunc02()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Nospread_NospreadFeature_vfunc02
               (longlong param_1,undefined8 param_2,uint *param_3,undefined8 param_4,
               undefined1 *param_5)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint *puVar7;
  float *pfVar8;
  char cVar9;
  undefined4 uVar10;
  longlong *plVar11;
  char *pcVar12;
  longlong lVar13;
  double dVar14;
  float *pfVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  undefined8 extraout_XMM0_Qa;
  undefined4 uVar21;
  undefined1 auStack_198 [32];
  float *local_178;
  undefined1 local_168;
  char local_167;
  uint *local_160 [2];
  undefined8 local_150;
  uint local_148;
  float *local_140;
  float *local_138;
  longlong local_130;
  uint local_128;
  uint *local_120;
  longlong *local_118;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  float local_f0;
  float local_e8;
  float local_e0;
  float local_d8;
  double local_d0;
  undefined1 local_c8 [12];
  undefined1 local_bc [12];
  float *local_b0;
  double local_a8;
  undefined8 local_a0;
  float local_98;
  float local_90;
  float local_8c;
  undefined4 local_88;
  undefined8 local_80;
  uint local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_1803da4c0 ^ (ulonglong)auStack_198;
  local_a0 = param_5;
  iVar19 = DAT_180425788 + 1;
  local_160[0] = param_3;
  local_130 = param_1;
  local_120 = param_3;
  if ((DAT_180425788 < 3) || (DAT_180425788 = iVar19, iVar19 == (iVar19 / 500) * 500)) {
    local_b0 = (float *)0x93fd561a96ab0c67;
    local_a8 = 1.0181132363366062e+31;
    DAT_180425788 = iVar19;
    plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_100,&local_b0);
    plVar11 = (longlong *)FUN_180241a30(*plVar11 + 0x28,local_110,&local_a8);
    FUN_1801fcfc0(*plVar11 + 0x28);
    local_b0 = (float *)0x237bcfbdef3b6800;
    local_a8 = 12.049318743891646;
    plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_100,&local_b0);
    plVar11 = (longlong *)FUN_180241a30(*plVar11 + 0x28,local_110,&local_a8);
    FUN_1801fcfc0(*plVar11 + 0x28);
    pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
    uVar10 = (**(code **)(*DAT_1803fa668 + 0x60))();
    lVar13 = (*pcVar2)(DAT_1803fa360,uVar10);
    if ((lVar13 != 0) && (cVar9 = FUN_18001c330(lVar13), cVar9 != '\0')) {
      FUN_18001dbf0(lVar13);
    }
  }
  local_b0 = (float *)0x93fd561a96ab0c67;
  local_a8 = 1.0181132363366062e+31;
  plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_100,&local_b0);
  plVar11 = (longlong *)FUN_180241a30(*plVar11 + 0x28,local_110,&local_a8);
  pcVar12 = (char *)FUN_1801fcfc0(*plVar11 + 0x28);
  if (*pcVar12 == '\0') {
    return;
  }
  local_b0 = (float *)0x237bcfbdef3b6800;
  local_a8 = 12.049318743891646;
  plVar11 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_100,&local_b0);
  plVar11 = (longlong *)FUN_180241a30(*plVar11 + 0x28,local_110,&local_a8);
  pcVar12 = (char *)FUN_1801fcfc0(*plVar11 + 0x28);
  if (*pcVar12 != '\0') {
    return;
  }
  if (DAT_1803fa545 != '\0') {
    return;
  }
  pcVar2 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar10 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar13 = (*pcVar2)(DAT_1803fa360,uVar10);
  if (lVar13 == 0) {
    return;
  }
  local_70 = lVar13;
  cVar9 = FUN_18001c330(lVar13);
  if (cVar9 == '\0') {
    return;
  }
  dVar14 = (double)FUN_18001dbf0(lVar13);
  if (dVar14 == 0.0) {
    return;
  }
  local_a8 = dVar14;
  plVar11 = (longlong *)FUN_180076750(dVar14);
  if (param_3 == (uint *)0x0) {
    return;
  }
  if (plVar11 == (longlong *)0x0) {
    return;
  }
  local_118 = plVar11;
  local_167 = (**(code **)(*plVar11 + 0x50))(plVar11,dVar14,param_3);
  if (local_167 == '\0') {
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(uint *)(param_1 + 0x14) = param_3[2];
    *(uint *)(param_1 + 0x18) = param_3[3];
    *(uint *)(param_1 + 0x1c) = param_3[4];
    *(double *)(param_1 + 0x20) = dVar14;
    return;
  }
  cVar9 = (**(code **)(*plVar11 + 0x78))(plVar11);
  if (cVar9 != '\0') {
    local_148 = DAT_180380bb0;
    if ((*param_3 & 1) == 0) {
      local_148 = DAT_180381384;
    }
    *(byte *)((longlong)param_3 + 0x3e) = 1;
    local_150 = CONCAT44(local_148,local_148);
    *(undefined8 *)(param_3 + 0x10) = local_150;
    param_3[0x12] = local_148;
  }
  if ((*(byte *)((longlong)param_3 + 0x3e) != 0) &&
     (cVar9 = (**(code **)(*plVar11 + 0x70))(plVar11), cVar9 != '\0')) {
    local_98 = 0.0;
    local_a0 = (undefined1 *)0x0;
    FUN_1802d4540(param_3 + 0x10,&local_a0);
    cVar9 = (**(code **)(*plVar11 + 0x30))(plVar11);
    if (cVar9 == '\0') {
      pfVar15 = (float *)(**(code **)(*plVar11 + 0x20))(plVar11,local_c8,dVar14,param_3);
    }
    else {
      pfVar15 = (float *)FUN_1800deac0(extraout_XMM0_Qa,local_160);
    }
    local_a0 = (undefined1 *)CONCAT44(local_a0._4_4_ - pfVar15[1],(float)local_a0 - *pfVar15);
    local_98 = local_98 - pfVar15[2];
    FUN_180022190(&local_a0);
    FUN_1802d4050(&local_a0,param_3 + 0x10);
    return;
  }
  fVar6 = DAT_1803db4bc;
  fVar5 = DAT_1803db4b8;
  fVar4 = DAT_1803db4b4;
  if (DAT_1803db4c0 == *param_3) {
    local_f0 = DAT_1803db4b4;
    if (((uint)DAT_1803db4b4 & 0x7f800000) == 0x7f800000) {
LAB_1800df09c:
      bVar3 = false;
    }
    else {
      local_140 = (float *)CONCAT44(local_140._4_4_,DAT_1803db4b8);
      if (((uint)DAT_1803db4b8 & 0x7f800000) == 0x7f800000) goto LAB_1800df09c;
      local_138 = (float *)CONCAT44(local_138._4_4_,DAT_1803db4bc);
      if (((uint)DAT_1803db4bc & 0x7f800000) == 0x7f800000) goto LAB_1800df09c;
      bVar3 = true;
    }
    if ((!bVar3) || ((DAT_1803db4b4 == 0.0 && (DAT_1803db4b8 == 0.0)))) goto LAB_1800df0ce;
    bVar3 = true;
    pfVar15 = (float *)(**(code **)(*plVar11 + 0x20))(plVar11,local_bc,dVar14,param_3);
  }
  else {
LAB_1800df0ce:
    bVar3 = false;
    pfVar15 = (float *)FUN_1800deac0();
  }
  pfVar1 = (float *)(param_1 + 8);
  *pfVar1 = *pfVar15;
  local_140 = (float *)(param_1 + 0xc);
  *local_140 = pfVar15[1];
  local_b0 = (float *)(param_1 + 0x10);
  *local_b0 = pfVar15[2];
  local_138 = pfVar1;
  if ((bVar3) && (cVar9 = FUN_180076b00(plVar11), cVar9 == '\0')) {
    local_e8 = fVar4;
    if ((((uint)fVar4 & 0x7f800000) == 0x7f800000) ||
       ((local_e0 = fVar5, ((uint)fVar5 & 0x7f800000) == 0x7f800000 ||
        (local_d8 = fVar6, ((uint)fVar6 & 0x7f800000) == 0x7f800000)))) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      *(float *)(param_1 + 8) = *(float *)(param_1 + 8) - fVar4;
      *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) - fVar5;
      *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) - fVar6;
      FUN_180022190(pfVar1);
    }
  }
  puVar7 = local_160[0];
  cVar9 = FUN_1800dde30(dVar14);
  if (cVar9 != '\0') {
    local_90 = 0.0;
    local_8c = 0.0;
    local_88 = 0;
    if (*puVar7 == DAT_1803e9090) {
      *(undefined4 *)(param_1 + 8) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      if (DAT_1803fa608 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
      }
      local_178 = &local_90;
      cVar9 = FUN_1800ddea0(dVar14,param_3,uVar10,param_3 + 2);
      if (cVar9 == '\0') {
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      else {
        *(float *)(param_1 + 8) = local_90;
        *(float *)(param_1 + 0xc) = local_8c;
        *(undefined4 *)(param_1 + 0x10) = local_88;
        DAT_1803e9090 = *puVar7;
        iVar19 = DAT_1803ffb9c + 1;
        if ((DAT_1803ffb9c < 0x14) || (DAT_1803ffb9c = iVar19, iVar19 == (iVar19 / 0x32) * 0x32)) {
          if (DAT_1803fa608 == 0) {
            uVar10 = 0;
            uVar21 = 0;
          }
          else {
            uVar10 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
            uVar21 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x10) >> 0x20);
          }
          local_178 = (float *)CONCAT44(local_178._4_4_,DAT_1803e9090);
          DAT_1803ffb9c = iVar19;
          FUN_180014410("[LEYHITREG] shot-command dev=(%.4f,%.4f) curtime=%.4f cmd=%d\n",
                        (double)local_90,(double)local_8c,CONCAT44(uVar21,uVar10));
        }
      }
    }
  }
  uVar21 = 0;
  uVar10 = 0;
  local_130 = CONCAT44(local_130._4_4_,*(uint *)(param_1 + 8));
  if (((*(uint *)(param_1 + 8) & 0x7f800000) == 0x7f800000) ||
     (local_128 = *(uint *)(param_1 + 0xc), (local_128 & 0x7f800000) == 0x7f800000)) {
LAB_1800df3ae:
    bVar3 = false;
  }
  else {
    local_120 = (uint *)CONCAT44(local_120._4_4_,*local_b0);
    if (((uint)*local_b0 & 0x7f800000) == 0x7f800000) goto LAB_1800df3ae;
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
  *(uint *)(param_1 + 0x14) = param_3[2];
  *(uint *)(param_1 + 0x18) = param_3[3];
  *(uint *)(param_1 + 0x1c) = param_3[4];
  *(double *)(param_1 + 0x20) = dVar14;
  *(uint *)(param_1 + 0x4c) = param_3[2];
  *(uint *)(param_1 + 0x50) = param_3[3];
  *(uint *)(param_1 + 0x54) = param_3[4];
  puVar16 = (undefined4 *)FUN_18001c430(local_70,local_100);
  *(undefined4 *)(param_1 + 0x28) = *puVar16;
  *(undefined4 *)(param_1 + 0x2c) = puVar16[1];
  *(undefined4 *)(param_1 + 0x30) = puVar16[2];
  cVar9 = (**(code **)(*plVar11 + 0x80))(plVar11);
  pfVar8 = local_b0;
  pfVar15 = local_140;
  if (cVar9 != '\0') {
    return;
  }
  local_80 = *(undefined8 *)(param_3 + 2);
  local_78 = param_3[4];
  param_3[2] = (uint)((float)param_3[2] - *pfVar1);
  param_3[3] = (uint)((float)param_3[3] - *local_140);
  param_3[4] = (uint)((float)param_3[4] - *local_b0);
  FUN_180022190(param_3 + 2);
  local_118 = (longlong *)CONCAT44(local_118._4_4_,param_3[2]);
  if ((param_3[2] & 0x7f800000) == 0x7f800000) {
LAB_1800df4e6:
    bVar3 = false;
  }
  else {
    local_a8 = (double)CONCAT44(local_a8._4_4_,param_3[3]);
    if ((param_3[3] & 0x7f800000) == 0x7f800000) goto LAB_1800df4e6;
    local_b0 = (float *)CONCAT44(local_b0._4_4_,param_3[4]);
    if ((param_3[4] & 0x7f800000) == 0x7f800000) goto LAB_1800df4e6;
    bVar3 = true;
  }
  if (!bVar3) {
    param_3[2] = (uint)(float)local_80;
    param_3[3] = local_80._4_4_;
    param_3[4] = local_78;
    return;
  }
  _DAT_1803db4c4 = *pfVar1;
  _DAT_1803db4c8 = *pfVar15;
  _DAT_1803db4cc = *pfVar8;
  DAT_1803db4d0 = *local_160[0];
  FUN_1802d4050(&local_80,&local_70);
  DAT_1803db5f8 = (undefined4)local_70;
  DAT_1803db5fc = local_70._4_4_;
  DAT_1803db600 = local_68;
  if (DAT_1803fa608 == 0) {
    DAT_1803db608 = 0.0;
  }
  else {
    DAT_1803db608 = (double)DAT_1803de068 * *(double *)(DAT_1803fa608 + 0x28);
  }
  local_d0 = DAT_1803db608;
  FUN_1802d4050(param_3 + 2,param_1 + 0x34);
  if (DAT_1803fa608 != 0) {
    uVar10 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
    uVar21 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x10) >> 0x20);
  }
  *(float *)(param_1 + 0x58) = (float)(double)CONCAT44(uVar21,uVar10);
  fVar4 = DAT_180380964;
  bVar3 = DAT_180380964 < (float)((uint)((float)param_3[2] - (float)local_80) & _DAT_1803817c0);
  uVar20 = FUN_180022110();
  if ((bVar3) || (fVar4 < (float)(uVar20 & _DAT_1803817c0))) {
    FUN_1800d2e50(param_3,param_3 + 2,1);
  }
  local_168 = 0;
  uVar17 = FUN_180241610(&DAT_1803fadf0,0xf7521f28977a3033);
  uVar17 = FUN_180241610(uVar17,0x4064f70bc33de70a);
  piVar18 = (int *)FUN_1802029c0(uVar17);
  local_168 = 0 < *piVar18;
  if ((bool)local_168) goto LAB_1800df735;
  uVar17 = FUN_180241610(&DAT_1803fadf0,0x2723fc3764d74742);
  uVar17 = FUN_180241610(uVar17,0x402819404e703058);
  pcVar12 = (char *)FUN_1801fcfc0(uVar17);
  if (*pcVar12 == '\0') {
LAB_1800df724:
    bVar3 = false;
  }
  else {
    uVar17 = FUN_180241610(&DAT_1803fadf0,0x2723fc3764d74742);
    uVar17 = FUN_180241610(uVar17,0x4064f70bc33de70a);
    pcVar12 = (char *)FUN_1801fcfc0(uVar17);
    if (*pcVar12 == '\0') goto LAB_1800df724;
    bVar3 = true;
  }
  if (!bVar3) {
    return;
  }
LAB_1800df735:
  *local_a0 = 0;
  return;
}


