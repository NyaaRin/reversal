// 0x1800e1280  Features_Autostrafe_AutostrafeFeature_vfunc01
// size=2516 thunk=false
// signature: undefined Features_Autostrafe_AutostrafeFeature_vfunc01()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Features_Autostrafe_AutostrafeFeature_vfunc01
               (undefined8 param_1,undefined8 param_2,byte *param_3,longlong param_4)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  char cVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  char *pcVar10;
  int *piVar11;
  byte *pbVar12;
  float *pfVar13;
  int *piVar14;
  int *piVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_158 [32];
  float local_138;
  int local_134 [7];
  float local_118 [4];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  float local_e8 [2];
  undefined8 local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  pcVar3 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar7 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar8 = (*pcVar3)(DAT_1803fa360,uVar7);
  if (lVar8 == 0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  local_e0 = 0x2deb6b899a38d4e8;
  local_e8[0] = -2.7634367e-25;
  local_e8[1] = -6.395108e-27;
  plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_108,local_e8);
  plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_f8,&local_e0);
  pcVar10 = (char *)FUN_1801fcfc0(*plVar9 + 0x28);
  if (*pcVar10 == '\0') {
    return;
  }
  local_e8[0] = -5.7999425e+28;
  local_e8[1] = 1.36507276e-17;
  local_e0 = 0x402819404e703058;
  plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_f8,local_e8);
  plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_108,&local_e0);
  pcVar10 = (char *)FUN_1801fcfc0(*plVar9 + 0x28);
  if (*pcVar10 != '\0') {
    return;
  }
  cVar6 = FUN_18001e0a0(lVar8);
  if (cVar6 != '\x02') {
    return;
  }
  cVar6 = FUN_18001fcf0(lVar8);
  if ('\x01' < cVar6) {
    return;
  }
  if (((param_3[0x20] & 2) == 0) && ((*(byte *)(param_4 + 0x20) & 2) == 0)) {
    return;
  }
  local_e8[0] = -2.7634367e-25;
  local_e8[1] = -6.395108e-27;
  local_e0 = 0x207b6d725748ed5f;
  plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_f8,local_e8);
  plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_108,&local_e0);
  piVar11 = (int *)FUN_1802029c0(*plVar9 + 0x28);
  local_e8[0] = -2.7634367e-25;
  local_e8[1] = -6.395108e-27;
  iVar2 = *piVar11;
  if (*piVar11 == 4) {
    iVar2 = 2;
  }
  local_e0 = 0x7b225fe0c7fe4acf;
  plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_f8,local_e8);
  plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_108,&local_e0);
  pcVar10 = (char *)FUN_1801fcfc0(*plVar9 + 0x28);
  cVar6 = *pcVar10;
  pbVar12 = (byte *)FUN_18001d710(lVar8,local_e8);
  if ((*pbVar12 & 1) == 0) {
    DAT_1804253f0 = 0;
  }
  else {
    DAT_1804253f0 = DAT_1804253f0 + 1;
  }
  fVar18 = *(float *)(param_4 + 0xc);
  pfVar13 = (float *)FUN_18001d530(lVar8);
  fVar17 = *pfVar13;
  fVar1 = pfVar13[1];
  fVar22 = fVar17 * fVar17 + fVar1 * fVar1;
  if (fVar22 < 0.0) {
    fVar22 = sqrtf(fVar22);
  }
  else {
    fVar22 = SQRT(fVar22);
  }
  fVar24 = DAT_1803810bc;
  fVar25 = fVar18;
  if (DAT_180380fe4 < fVar22) {
    fVar17 = atan2f(fVar1,fVar17);
    fVar25 = fVar17 * fVar24;
  }
  uVar5 = DAT_1803817f0;
  fVar17 = DAT_180381384;
  fVar1 = DAT_180380bb0;
  if (iVar2 == 0) {
    if (DAT_1804253f0 == 0) {
      local_134[1] = (int)*(short *)(param_3 + 0x30);
      if (*(short *)(param_3 + 0x30) == 0) {
        return;
      }
      local_134[2] = 1;
      local_134[0] = -1;
      piVar11 = local_134;
      if (-2 < local_134[1]) {
        piVar11 = local_134 + 1;
      }
      piVar14 = local_134 + 2;
      if (local_134[1] < 2) {
        piVar14 = piVar11;
      }
      fVar18 = (float)*piVar14 * DAT_180381298;
      *(float *)(param_3 + 0x18) = fVar18;
      if ((*(float *)(param_3 + 0x14) == 0.0) && (fVar18 == 0.0)) {
        return;
      }
      atan2f((float)((uint)fVar18 ^ DAT_1803817f0),*(float *)(param_3 + 0x14));
    }
    else if (cVar6 == '\0') {
      if (*(short *)(param_3 + 0x30) != 0) {
        return;
      }
      if (DAT_1804253f0 != 1) {
        return;
      }
      param_3[0x14] = 0;
      param_3[0x15] = 0x60;
      param_3[0x16] = 0xea;
      param_3[0x17] = 0x45;
    }
    else {
      uVar7 = FUN_180022110();
      FUN_1800e1c60(param_3,uVar7);
    }
    DAT_180423568 = FUN_1802d3e00();
    DAT_1803e90a8 = *(undefined4 *)param_3;
    return;
  }
  uVar20 = *(uint *)(param_4 + 0x20);
  fVar23 = DAT_180380bb0;
  if ((uVar20 & 8) == 0) {
    fVar23 = 0.0;
  }
  if ((uVar20 & 0x10) != 0) {
    fVar23 = fVar23 + DAT_180381384;
  }
  fVar19 = 0.0;
  if ((uVar20 & 0x400) != 0) {
    fVar19 = DAT_180380bb0;
  }
  if ((uVar20 >> 9 & 1) != 0) {
    fVar19 = fVar19 + DAT_180381384;
  }
  if ((fVar23 == 0.0) && (fVar19 == 0.0)) {
    fVar23 = 0.0;
    bVar4 = false;
  }
  else {
    fVar23 = atan2f((float)((uint)fVar19 ^ DAT_1803817f0),fVar23);
    bVar4 = true;
    fVar23 = fVar23 * fVar24;
  }
  fVar19 = fVar1;
  if ((uVar20 & 0x400) != 0) {
    fVar19 = fVar17;
  }
  if (DAT_1804253f0 == 0) {
    if ((param_3[0x20] & 1) != 0) {
      return;
    }
    if ((uVar20 & 1) != 0) {
      return;
    }
    if (iVar2 == 2) {
      if (fVar22 <= DAT_180381068) {
        FUN_1800e1c60(param_3,fVar19 * DAT_18038110c);
        goto LAB_1800e1bbd;
      }
      local_134[4] = 0x5a;
      local_e0 = 0xb84e8776c92be6b0;
      local_134[3] = 10;
      local_e8[0] = -2.7634367e-25;
      local_e8[1] = -6.395108e-27;
      plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_f8,local_e8);
      plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_108,&local_e0);
      piVar14 = (int *)FUN_1802029c0(*plVar9 + 0x28);
      iVar2 = *(int *)param_3;
      local_e8[0] = 18.0;
      local_138 = 1.0;
      piVar11 = local_134 + 3;
      if (9 < *piVar14) {
        piVar11 = piVar14;
      }
      piVar15 = local_134 + 4;
      if (*piVar14 < 0x5b) {
        piVar15 = piVar11;
      }
      fVar18 = ((float)*piVar15 / DAT_18038110c) * DAT_180381004;
      local_e0 = CONCAT44(local_e0._4_4_,fVar18);
      pfVar13 = &local_138;
      if (fVar1 <= fVar18) {
        pfVar13 = (float *)&local_e0;
      }
      pfVar16 = local_e8;
      if (fVar18 <= DAT_180381004) {
        pfVar16 = pfVar13;
      }
      fVar18 = fVar25;
      if ((iVar2 - DAT_1803e7398 < 0xb) && (DAT_1803e7398 <= iVar2)) {
        fVar18 = DAT_180400adc;
      }
      DAT_180400adc = fVar18;
      fVar18 = DAT_180400adc;
      if (iVar2 != DAT_1803e7398) {
        DAT_1803e7398 = iVar2;
        uVar21 = FUN_1802d3e00(fVar19 * *pfVar16 + DAT_180400adc);
        fVar18 = (float)uVar21;
        DAT_180400adc = fVar18;
        uVar20 = FUN_180022110(uVar21,fVar25);
        if (DAT_180381120 < (float)(uVar20 & _DAT_1803817c0)) {
          fVar18 = (float)FUN_1802d3e00(fVar19 * DAT_180381120 + fVar25);
          DAT_180400adc = fVar18;
        }
      }
      *(float *)(param_3 + 0xc) = fVar18;
      uVar7 = FUN_1802d3e00();
      *(undefined4 *)(param_3 + 8) = uVar7;
      DAT_18042356c = FUN_1802d3e00();
      *(undefined4 *)(param_3 + 0xc) = DAT_18042356c;
      fVar24 = (float)((uint)fVar19 ^ uVar5) * DAT_180381298;
      DAT_1803e90a4 = iVar2;
    }
    else {
      if (((iVar2 == 1) && (!bVar4)) && (*(short *)(param_3 + 0x30) == 0)) {
        return;
      }
      if (fVar22 < DAT_180381094) {
        return;
      }
      if ((iVar2 != 1) || (!bVar4)) {
        fVar23 = 0.0;
      }
      local_134[6] = 0x12;
      local_e0 = 0x9d365af164de8da;
      local_134[5] = 2;
      local_e8[0] = -2.7634367e-25;
      local_e8[1] = -6.395108e-27;
      fVar23 = fVar23 + fVar18;
      plVar9 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_f8,local_e8);
      plVar9 = (longlong *)FUN_180241a30(*plVar9 + 0x28,local_108,&local_e0);
      piVar14 = (int *)FUN_1802029c0(*plVar9 + 0x28);
      fVar18 = DAT_180380fe4 / fVar22;
      local_138 = 1.0;
      local_e8[0] = -1.0;
      piVar11 = local_134 + 5;
      if (1 < *piVar14) {
        piVar11 = piVar14;
      }
      local_118[0] = 0.0;
      piVar15 = local_134 + 6;
      if (*piVar14 < 0x13) {
        piVar15 = piVar11;
      }
      iVar2 = *piVar15;
      pfVar13 = local_e8;
      if (fVar17 <= fVar18) {
        pfVar13 = (float *)&local_e0;
      }
      local_e0 = CONCAT44(local_e0._4_4_,fVar18);
      local_118[2] = (float)iVar2;
      pfVar16 = &local_138;
      if (fVar18 <= fVar1) {
        pfVar16 = pfVar13;
      }
      local_118[1] = asinf(*pfVar16);
      local_118[1] = local_118[1] * fVar24;
      pfVar13 = local_118;
      if (0.0 <= local_118[1]) {
        pfVar13 = local_118 + 1;
      }
      pfVar16 = local_118 + 2;
      if (local_118[1] <= (float)iVar2) {
        pfVar16 = pfVar13;
      }
      fVar18 = *pfVar16;
      fVar19 = (float)FUN_180022110(pfVar13,DAT_180425a98);
      fVar24 = DAT_18038143c;
      if ((fVar19 <= 0.0) && (fVar24 = DAT_180381298, 0.0 <= fVar19)) {
        fVar24 = 0.0;
      }
      DAT_180425a98 = fVar23;
      if (((float)((uint)fVar19 & _DAT_1803817c0) <= fVar18) ||
         (DAT_180381068 <= (float)((uint)fVar19 & _DAT_1803817c0))) {
        fVar24 = (float)FUN_180022110();
        if ((fVar24 <= fVar18) || (fVar22 <= DAT_180380fe4)) {
          if (((float)((uint)fVar18 ^ uVar5) <= fVar24) || (fVar22 <= DAT_180380fe4)) {
            if ((*param_3 & 1) != 0) {
              fVar17 = fVar1;
            }
            fVar24 = fVar17 * DAT_180381298;
            fVar23 = fVar23 + fVar18 * fVar17;
          }
          else {
            fVar23 = fVar25 - fVar18;
            fVar24 = DAT_180381298;
          }
        }
        else {
          fVar23 = fVar18 + fVar25;
          fVar24 = DAT_18038143c;
        }
      }
      *(float *)(param_3 + 0xc) = fVar23;
      uVar7 = FUN_1802d3e00();
      *(undefined4 *)(param_3 + 8) = uVar7;
      DAT_18042356c = FUN_1802d3e00();
      *(undefined4 *)(param_3 + 0xc) = DAT_18042356c;
      DAT_1803e90a4 = *(int *)param_3;
    }
    param_3[0x14] = 0;
    param_3[0x15] = 0;
    param_3[0x16] = 0;
    param_3[0x17] = 0;
    *(float *)(param_3 + 0x18) = fVar24;
    if (fVar24 == 0.0) {
      return;
    }
    atan2f((float)((uint)fVar24 ^ uVar5),0.0);
  }
  else {
    if (cVar6 == '\0') {
      return;
    }
    uVar7 = FUN_180022110();
    FUN_1800e1c60(param_3,uVar7);
  }
LAB_1800e1bbd:
  DAT_180423568 = FUN_1802d3e00();
  DAT_1803e90a8 = *(undefined4 *)param_3;
  return;
}


