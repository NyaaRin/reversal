// 0x1800a67a0  FUN_1800a67a0
// size=1689 thunk=false
// signature: undefined FUN_1800a67a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1800a67a0(longlong param_1,float *param_2,float *param_3,undefined8 param_4,
                       float *param_5,float *param_6,float *param_7)

{
  double dVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  bool bVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_128 [32];
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_1803da4c0 ^ (ulonglong)auStack_128;
  if (((uint)*param_2 & 0x7f800000) == 0x7f800000) {
    return 0x7f800000;
  }
  if (((uint)param_2[1] & 0x7f800000) == 0x7f800000) {
    return 0x7f800000;
  }
  if (((uint)param_2[2] & 0x7f800000) == 0x7f800000) {
    return 0x7f800000;
  }
  fVar13 = *param_3;
  if (((uint)fVar13 & 0x7f800000) == 0x7f800000) {
    return 0x7f800000;
  }
  fVar12 = param_3[1];
  if (((uint)fVar12 & 0x7f800000) == 0x7f800000) {
    return 0x7f800000;
  }
  fVar7 = param_3[2];
  if (((uint)fVar7 & 0x7f800000) == 0x7f800000) {
    return 0x7f800000;
  }
  if (((uint)*param_5 & 0x7f800000) == 0x7f800000) {
    return 0x7f800000;
  }
  if (((uint)param_5[1] & 0x7f800000) == 0x7f800000) {
    return 0x7f800000;
  }
  if (((uint)param_5[2] & 0x7f800000) == 0x7f800000) {
    return 0x7f800000;
  }
  if (fVar12 * fVar12 + fVar13 * fVar13 + fVar7 * fVar7 <= DAT_180380938) {
    return (ulonglong)((uint)param_5[2] & 0x7f800000);
  }
  FUN_1802d3e70(param_4,&local_100,&local_f0,&local_e0);
  fVar8 = *param_2 - *param_5;
  fVar7 = param_2[1] - param_5[1];
  fVar9 = param_2[2] - param_5[2];
  fVar13 = param_3[2];
  local_104 = local_fc * fVar7 + local_100 * fVar8 + local_f8 * fVar9;
  fVar14 = local_ec * fVar7 + local_f0 * fVar8 + local_e8 * fVar9;
  fVar12 = param_3[1];
  local_108 = local_dc * fVar7 + local_e0 * fVar8 + local_d8 * fVar9;
  fVar7 = *param_3;
  fVar9 = local_fc * fVar12 + local_100 * fVar7 + local_f8 * fVar13;
  fVar8 = local_ec * fVar12 + local_f0 * fVar7 + local_e8 * fVar13;
  fVar13 = local_dc * fVar12 + local_e0 * fVar7 + local_d8 * fVar13;
  if (((uint)local_104 & 0x7f800000) == 0x7f800000) {
    return 0x7f800000;
  }
  if (((uint)fVar14 & 0x7f800000) == 0x7f800000) {
    return 0x7f800000;
  }
  if (((uint)local_108 & 0x7f800000) == 0x7f800000) {
    return 0x7f800000;
  }
  if (((uint)fVar9 & 0x7f800000) == 0x7f800000) {
    return 0x7f800000;
  }
  if (((uint)fVar8 & 0x7f800000) == 0x7f800000) {
    return 0x7f800000;
  }
  if (((uint)fVar13 & 0x7f800000) == 0x7f800000) {
    return 0x7f800000;
  }
  dVar1 = DAT_1803813b0;
  if (DAT_1803fa608 != (float *)0x0) {
    dVar1 = (double)*DAT_1803fa608;
  }
  fVar12 = 0.0;
  if (*(char *)(param_1 + 0x98) != '\0') {
    dVar6 = *(double *)(param_1 + 0xa0);
    if ((0.0 <= dVar6) && (dVar6 <= dVar1)) {
      fVar11 = (float)((uint)(fVar8 - *(float *)(param_1 + 0x90)) & _DAT_1803817c0);
      fVar10 = (float)((uint)(fVar13 - *(float *)(param_1 + 0x94)) & _DAT_1803817c0);
      fVar7 = tanf(DAT_180380a9c);
      fVar12 = fVar10 * fVar10 + fVar11 * fVar11;
      if (fVar12 < 0.0) {
        fVar12 = sqrtf(fVar12);
      }
      else {
        fVar12 = SQRT(fVar12);
      }
      fVar12 = fVar12 * DAT_1803810c0;
      if ((fVar7 < fVar11) || (fVar7 < fVar10)) {
        *(undefined1 *)(param_1 + 0x98) = 0;
      }
      else {
        dVar6 = exp((double)CONCAT44((uint)((ulonglong)(dVar1 - dVar6) >> 0x20) ^
                                     DAT_1803817e0._4_4_,
                                     SUB84(dVar1 - dVar6,0) ^ (uint)DAT_1803817e0));
        fVar7 = (float)(DAT_180380d08 - dVar6);
        if ((float)(DAT_180380d08 - dVar6) <= DAT_180380910) {
          fVar7 = DAT_180380910;
        }
        fVar10 = DAT_180380bb0;
        if (fVar7 <= DAT_180380bb0) {
          fVar10 = fVar7;
        }
        *(float *)(param_1 + 0x80) =
             (local_104 - *(float *)(param_1 + 0x80)) * fVar10 + *(float *)(param_1 + 0x80);
        *(float *)(param_1 + 0x84) =
             (fVar14 - *(float *)(param_1 + 0x84)) * fVar10 + *(float *)(param_1 + 0x84);
        *(float *)(param_1 + 0x88) =
             (local_108 - *(float *)(param_1 + 0x88)) * fVar10 + *(float *)(param_1 + 0x88);
        *(float *)(param_1 + 0x8c) =
             (fVar9 - *(float *)(param_1 + 0x8c)) * fVar10 + *(float *)(param_1 + 0x8c);
        *(float *)(param_1 + 0x90) =
             (fVar8 - *(float *)(param_1 + 0x90)) * fVar10 + *(float *)(param_1 + 0x90);
        *(float *)(param_1 + 0x94) =
             (fVar13 - *(float *)(param_1 + 0x94)) * fVar10 + *(float *)(param_1 + 0x94);
        *(double *)(param_1 + 0xa0) = dVar1;
      }
    }
    if (*(char *)(param_1 + 0x98) != '\0') goto LAB_1800a6d05;
  }
  *(float *)(param_1 + 0x80) = local_104;
  *(float *)(param_1 + 0x84) = fVar14;
  *(float *)(param_1 + 0x88) = local_108;
  *(float *)(param_1 + 0x8c) = fVar9;
  *(float *)(param_1 + 0x90) = fVar8;
  *(float *)(param_1 + 0x94) = fVar13;
  *(double *)(param_1 + 0xa0) = dVar1;
  *(undefined1 *)(param_1 + 0x98) = 1;
LAB_1800a6d05:
  iVar4 = DAT_180425878 + 1;
  bVar5 = DAT_180425878 == (DAT_180425878 / 0xf0) * 0xf0;
  DAT_180425878 = iVar4;
  if (bVar5) {
    FUN_180014410("[OCTO-LIVE] live-vs-mean %.2f deg (this is what the average used to eat)\n",
                  (double)fVar12);
  }
  *param_6 = *param_2;
  param_6[1] = param_2[1];
  param_6[2] = param_2[2];
  *param_7 = *param_3;
  param_7[1] = param_3[1];
  param_7[2] = param_3[2];
  (*(code *)PTR_FUN_1803da000)(param_7);
  uVar3 = (ulonglong)((uint)*param_6 & 0x7f800000);
  if ((((((uint)*param_6 & 0x7f800000) != 0x7f800000) &&
       (uVar3 = (ulonglong)((uint)param_6[1] & 0x7f800000),
       ((uint)param_6[1] & 0x7f800000) != 0x7f800000)) &&
      (uVar3 = (ulonglong)((uint)param_6[2] & 0x7f800000),
      ((uint)param_6[2] & 0x7f800000) != 0x7f800000)) &&
     ((uVar3 = (ulonglong)((uint)*param_7 & 0x7f800000), ((uint)*param_7 & 0x7f800000) != 0x7f800000
      && (uVar3 = (ulonglong)((uint)param_7[1] & 0x7f800000),
         ((uint)param_7[1] & 0x7f800000) != 0x7f800000)))) {
    uVar2 = (uint)param_7[2] & 0x7f800000;
    uVar3 = (ulonglong)uVar2;
    if (uVar2 != 0x7f800000) {
      uVar3 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
    }
  }
  return uVar3;
}


