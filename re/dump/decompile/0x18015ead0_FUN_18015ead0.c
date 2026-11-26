// 0x18015ead0  FUN_18015ead0
// size=1977 thunk=false
// signature: undefined FUN_18015ead0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015ead0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  ulonglong uVar8;
  longlong lVar9;
  char *_Str1;
  float fVar10;
  float fVar11;
  uint uVar12;
  char *_Str1_00;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_148 [32];
  int local_128;
  float local_120;
  float fStack_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  ulonglong local_b8;
  
  local_b8 = DAT_1803da4c0 ^ (ulonglong)auStack_148;
  iVar5 = *(int *)(param_1 + 0x9c);
  uVar8 = (ulonglong)iVar5;
  lVar16 = *param_2;
  lVar9 = param_2[1];
  lVar14 = lVar9 - lVar16 >> 4;
  uVar15 = lVar14 * -0x5555555555555555;
  local_128 = iVar5;
  if (uVar8 < uVar15) {
    param_2[1] = uVar8 * 0x30 + lVar16;
  }
  else if (uVar15 < uVar8) {
    if ((ulonglong)((param_2[2] - lVar16 >> 4) * -0x5555555555555555) < uVar8) {
      FUN_180222e70(param_2,uVar8);
    }
    else {
      for (lVar16 = uVar8 + lVar14 * 0x5555555555555555; lVar16 != 0; lVar16 = lVar16 + -1) {
        lVar9 = lVar9 + 0x30;
      }
      param_2[1] = lVar9;
    }
  }
  local_120 = -NAN;
  fStack_11c = -NAN;
  fVar10 = 0.0;
  fVar11 = -NAN;
  if (0 < iVar5) {
    lVar16 = 0;
LAB_18015ebd0:
    lVar9 = lVar16 * 0xd8 + (longlong)*(int *)(param_1 + 0xa0);
    FUN_1802d44f0(param_1 + 0x2c + lVar9,param_1 + 0x20 + lVar9,&local_100);
    iVar5 = *(int *)(lVar9 + 4 + param_1);
    if ((iVar5 < 0) || ((int)fVar10 <= iVar5)) {
      lVar14 = *param_2;
      puVar1 = (undefined4 *)(lVar14 + lVar16 * 0x30);
      *puVar1 = local_100;
      puVar1[1] = uStack_fc;
      puVar1[2] = uStack_f8;
      puVar1[3] = uStack_f4;
      puVar2 = (undefined8 *)(lVar14 + 0x10 + lVar16 * 0x30);
      *puVar2 = local_f0;
      puVar2[1] = uStack_e8;
      puVar2 = (undefined8 *)(lVar14 + 0x20 + lVar16 * 0x30);
      *puVar2 = local_e0;
      puVar2[1] = uStack_d8;
    }
    else {
      FUN_1802d4110((longlong)iVar5 * 0x30 + *param_2,&local_100,lVar16 * 0x30 + *param_2);
    }
    _Str1 = (char *)((longlong)*(int *)(param_1 + lVar9) + param_1 + lVar9);
    if (_Str1 != (char *)0x0) {
      cVar3 = *_Str1;
      _Str1_00 = _Str1;
      while (cVar3 != '\0') {
        iVar5 = _strnicmp(_Str1_00,"upperarm",8);
        if (iVar5 == 0) {
          cVar3 = *_Str1;
          goto joined_r0x00018015ec97;
        }
        _Str1_00 = _Str1_00 + 1;
        cVar3 = *_Str1_00;
      }
    }
    goto LAB_18015ecda;
  }
LAB_18015ecf5:
  fVar10 = local_120;
  uVar12 = 0xffffffff;
  DAT_180423aa0 = 0.0;
  if ((-1 < (int)local_120) && (-1 < (int)fVar11)) {
    lVar16 = *param_2;
    lVar9 = (longlong)(int)local_120;
    lVar14 = (longlong)(int)fVar11;
    fVar20 = (*(float *)(lVar16 + 0x2c + lVar9 * 0x30) - *(float *)(lVar16 + 0x2c + lVar14 * 0x30))
             * 0.0;
    fVar22 = (*(float *)(lVar16 + 0x1c + lVar9 * 0x30) - *(float *)(lVar16 + 0x1c + lVar14 * 0x30))
             - fVar20;
    fVar20 = fVar20 - (*(float *)(lVar16 + 0xc + lVar9 * 0x30) -
                      *(float *)(lVar16 + 0xc + lVar14 * 0x30));
    fVar17 = (float)(*(code *)PTR_FUN_1803da018)(fVar22 * fVar22 + fVar20 * fVar20);
    if (DAT_1803809ec < fVar17) {
      fVar17 = atan2f(fVar20,fVar22);
      DAT_180423aa0 = 0.0 - (fVar17 * DAT_180381188) / DAT_180380e48;
    }
  }
  fVar4 = DAT_180381384;
  fVar22 = DAT_180380bb0;
  fVar20 = DAT_180380ac0;
  fVar17 = DAT_1803809c4;
  fVar23 = 0.0;
  fVar21 = 0.0;
  if (-1 < (int)fVar10) {
    uVar13 = (int)fVar10 + 1;
    uVar8 = 0xffffffff;
    if ((int)uVar13 < iVar5) {
      do {
        if (-1 < (int)(uint)uVar8) goto LAB_18015ee30;
        uVar6 = uVar13;
        if (*(float *)((longlong)*(int *)(param_1 + 0xa0) + 4 +
                      (longlong)(int)uVar13 * 0xd8 + param_1) != fVar10) {
          uVar6 = (uint)uVar8;
        }
        uVar13 = uVar13 + 1;
        uVar8 = (ulonglong)uVar6;
      } while ((int)uVar13 < iVar5);
      if (-1 < (int)uVar6) {
LAB_18015ee30:
        lVar16 = *param_2;
        lVar9 = (longlong)(int)fVar10;
        fStack_11c = *(float *)(lVar16 + 0x1c + uVar8 * 0x30) -
                     *(float *)(lVar16 + 0x1c + lVar9 * 0x30);
        local_120 = *(float *)(lVar16 + 0xc + uVar8 * 0x30) -
                    *(float *)(lVar16 + 0xc + lVar9 * 0x30);
        local_118 = *(float *)(lVar16 + 0x2c + uVar8 * 0x30) -
                    *(float *)(lVar16 + 0x2c + lVar9 * 0x30);
        fVar18 = (float)(*(code *)PTR_FUN_1803da000)(&local_120);
        if (fVar20 <= fVar18) {
          local_110 = fStack_11c * fVar4 - local_118 * 0.0;
          local_10c = local_118 * 0.0 - local_120 * fVar4;
          local_108 = local_120 * 0.0 - fStack_11c * 0.0;
          fVar18 = (float)(*(code *)PTR_FUN_1803da000)(&local_110);
          if (fVar17 <= fVar18) {
            uVar19 = fminf(fVar22,(fStack_11c * 0.0 + local_120 * 0.0) - local_118 * fVar22);
            fVar18 = (float)fmaxf(fVar4,uVar19);
            fVar18 = acosf(fVar18);
            fVar18 = (fVar18 * DAT_180381188) / DAT_180380e48 - DAT_180381004;
            if (fVar22 < fVar18) {
              local_d0 = local_110;
              local_cc = local_10c;
              local_c8 = local_108;
              fVar23 = fVar18;
            }
          }
        }
      }
    }
  }
  if ((-1 < (int)fVar11) && (uVar13 = (int)fVar11 + 1, (int)uVar13 < iVar5)) {
    do {
      if (-1 < (int)uVar12) goto LAB_18015efe5;
      uVar6 = uVar13;
      if (*(float *)((longlong)*(int *)(param_1 + 0xa0) + 4 + (longlong)(int)uVar13 * 0xd8 + param_1
                    ) != fVar11) {
        uVar6 = uVar12;
      }
      uVar12 = uVar6;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < iVar5);
    if (-1 < (int)uVar12) {
LAB_18015efe5:
      lVar16 = *param_2;
      uVar8 = (ulonglong)uVar12;
      lVar9 = (longlong)(int)fVar11;
      fStack_11c = *(float *)(lVar16 + 0x1c + uVar8 * 0x30) -
                   *(float *)(lVar16 + 0x1c + lVar9 * 0x30);
      local_120 = *(float *)(lVar16 + 0xc + uVar8 * 0x30) - *(float *)(lVar16 + 0xc + lVar9 * 0x30);
      local_118 = *(float *)(lVar16 + 0x2c + uVar8 * 0x30) -
                  *(float *)(lVar16 + 0x2c + lVar9 * 0x30);
      fVar18 = (float)(*(code *)PTR_FUN_1803da000)(&local_120);
      if (fVar20 <= fVar18) {
        local_110 = fStack_11c * fVar4 - local_118 * 0.0;
        local_10c = local_118 * 0.0 - local_120 * fVar4;
        local_108 = local_120 * 0.0 - fStack_11c * 0.0;
        fVar20 = (float)(*(code *)PTR_FUN_1803da000)(&local_110);
        if (fVar17 <= fVar20) {
          uVar19 = fminf(fVar22,(fStack_11c * 0.0 + local_120 * 0.0) - local_118 * fVar22);
          fVar17 = (float)fmaxf(fVar4,uVar19);
          fVar17 = acosf(fVar17);
          fVar17 = (fVar17 * DAT_180381188) / DAT_180380e48 - DAT_180381004;
          if (fVar22 < fVar17) {
            local_c4 = local_110;
            local_c0 = local_10c;
            local_bc = local_108;
            fVar21 = fVar17;
          }
        }
      }
    }
  }
  if (((0.0 < fVar23) || (0.0 < fVar21)) && (fVar17 = 0.0, 0 < iVar5)) {
    lVar16 = 0;
    do {
      lVar9 = lVar16 * 0xd8 + (longlong)*(int *)(param_1 + 0xa0);
      FUN_1802d44f0(param_1 + 0x2c + lVar9,param_1 + 0x20 + lVar9,&local_100);
      iVar5 = *(int *)(lVar9 + 4 + param_1);
      if ((iVar5 < 0) || ((int)fVar17 <= iVar5)) {
        lVar9 = *param_2;
        lVar14 = lVar16 * 0x30;
        puVar1 = (undefined4 *)(lVar14 + lVar9);
        *puVar1 = local_100;
        puVar1[1] = uStack_fc;
        puVar1[2] = uStack_f8;
        puVar1[3] = uStack_f4;
        puVar2 = (undefined8 *)(lVar14 + 0x10 + lVar9);
        *puVar2 = local_f0;
        puVar2[1] = uStack_e8;
        puVar2 = (undefined8 *)(lVar14 + 0x20 + lVar9);
        *puVar2 = local_e0;
        puVar2[1] = uStack_d8;
      }
      else {
        FUN_1802d4110((longlong)iVar5 * 0x30 + *param_2,&local_100,lVar16 * 0x30 + *param_2);
      }
      if ((fVar17 == fVar10) && (0.0 < fVar23)) {
        FUN_18015e7f0(*param_2 + lVar16 * 0x30,&local_d0,fVar23);
      }
      if ((fVar17 == fVar11) && (0.0 < fVar21)) {
        FUN_18015e7f0(*param_2 + lVar16 * 0x30,&local_c4,fVar21);
      }
      fVar17 = (float)((int)fVar17 + 1);
      lVar16 = lVar16 + 1;
    } while ((int)fVar17 < local_128);
  }
  return;
joined_r0x00018015ec97:
  if (cVar3 == '\0') goto LAB_18015ecc6;
  iVar5 = _strnicmp(_Str1,"r_upperarm",10);
  if (iVar5 == 0) {
    pfVar7 = &fStack_11c;
    fVar17 = fVar11;
    goto LAB_18015eccf;
  }
  _Str1 = _Str1 + 1;
  cVar3 = *_Str1;
  goto joined_r0x00018015ec97;
LAB_18015ecc6:
  pfVar7 = &local_120;
  fVar17 = local_120;
LAB_18015eccf:
  if ((int)fVar17 < 0) {
    *pfVar7 = fVar10;
    fVar11 = fStack_11c;
  }
LAB_18015ecda:
  fVar10 = (float)((int)fVar10 + 1);
  lVar16 = lVar16 + 1;
  iVar5 = local_128;
  if (local_128 <= (int)fVar10) goto LAB_18015ecf5;
  goto LAB_18015ebd0;
}


