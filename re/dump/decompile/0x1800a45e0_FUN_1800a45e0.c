// 0x1800a45e0  FUN_1800a45e0
// size=1693 thunk=false
// signature: undefined FUN_1800a45e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800a45e0(longlong *param_1,longlong param_2,longlong param_3,double param_4,float *param_5
                  ,float *param_6,float *param_7,float *param_8)

{
  short sVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_158 [32];
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  undefined4 local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_1803da4c0 ^ (ulonglong)auStack_158;
  if ((((((((param_2 == 0) || (param_3 == 0)) || (sVar1 = _dclass(param_4), 0 < sVar1)) ||
         ((param_4 < 0.0 || (((uint)*param_5 & 0x7f800000) == 0x7f800000)))) ||
        (((uint)param_5[1] & 0x7f800000) == 0x7f800000)) ||
       (((((uint)param_5[2] & 0x7f800000) == 0x7f800000 ||
         (((uint)*param_6 & 0x7f800000) == 0x7f800000)) ||
        ((((uint)param_6[1] & 0x7f800000) == 0x7f800000 ||
         (((((uint)param_6[2] & 0x7f800000) == 0x7f800000 ||
           (((uint)*param_7 & 0x7f800000) == 0x7f800000)) ||
          (((uint)param_7[1] & 0x7f800000) == 0x7f800000)))))))) ||
      ((((uint)param_7[2] & 0x7f800000) == 0x7f800000 ||
       (((uint)*param_8 & 0x7f800000) == 0x7f800000)))) ||
     ((((uint)param_8[1] & 0x7f800000) == 0x7f800000 ||
      (((uint)param_8[2] & 0x7f800000) == 0x7f800000)))) {
LAB_1800a4c1f:
    *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
    param_1[2] = -0x4010000000000000;
    param_1[1] = 0;
    *param_1 = 0;
    return;
  }
  fVar4 = *param_7 - *param_5;
  fVar5 = param_7[1] - param_5[1];
  fVar6 = param_7[2] - param_5[2];
  fVar2 = (float)remainderf(param_8[1] - param_6[1]);
  local_134 = fVar2;
  local_138 = (float)remainderf(*param_8 - *param_6);
  if (((DAT_180381290 < fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6) ||
      (DAT_180381094 < (float)((uint)local_138 & _DAT_1803817c0))) ||
     (DAT_180381094 < (float)((uint)fVar2 & _DAT_1803817c0))) goto LAB_1800a4c1f;
  local_130 = *param_6;
  local_12c = param_6[1];
  local_128 = 0;
  FUN_1802d3e70(&local_130,&local_100,&local_120,&local_110);
  fVar11 = local_f8;
  fVar9 = local_fc;
  fVar10 = local_100;
  fVar2 = local_110;
  fVar7 = local_fc * fVar5 + local_100 * fVar4 + local_f8 * fVar6;
  fVar8 = local_11c * fVar5 + local_120 * fVar4 + local_118 * fVar6;
  fVar4 = local_10c * fVar5 + local_110 * fVar4 + local_108 * fVar6;
  if (((*(char *)((longlong)param_1 + 0x3c) != '\0') && (*param_1 == param_2)) &&
     (param_1[1] == param_3)) {
    dVar3 = (double)param_1[2];
    sVar1 = _dclass(dVar3);
    if (((sVar1 < 1) && (_DAT_180380918 <= dVar3)) && (dVar3 <= param_4)) {
      dVar3 = param_4 - dVar3;
      if ((dVar3 <= DAT_180380c90) &&
         (fVar5 = param_5[1] - *(float *)((longlong)param_1 + 0x1c),
         fVar5 * fVar5 + (*param_5 - *(float *)(param_1 + 3)) * (*param_5 - *(float *)(param_1 + 3))
         + (param_5[2] - *(float *)(param_1 + 4)) * (param_5[2] - *(float *)(param_1 + 4)) <=
         DAT_1803812b4)) {
        dVar3 = exp((double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^ DAT_1803817e0._4_4_,
                                     SUB84(dVar3,0) ^ (uint)DAT_1803817e0) / _DAT_180380c98);
        fVar5 = (float)(DAT_180380d08 - dVar3);
        *(float *)((longlong)param_1 + 0x24) =
             (fVar7 - *(float *)((longlong)param_1 + 0x24)) * fVar5 +
             *(float *)((longlong)param_1 + 0x24);
        *(float *)(param_1 + 5) =
             (fVar8 - *(float *)(param_1 + 5)) * fVar5 + *(float *)(param_1 + 5);
        *(float *)((longlong)param_1 + 0x2c) =
             (fVar4 - *(float *)((longlong)param_1 + 0x2c)) * fVar5 +
             *(float *)((longlong)param_1 + 0x2c);
        fVar2 = (float)remainderf(local_138 - *(float *)(param_1 + 6));
        *(float *)(param_1 + 6) = fVar2 * fVar5 + *(float *)(param_1 + 6);
        fVar2 = (float)remainderf(local_134 - *(float *)((longlong)param_1 + 0x34));
        *(float *)((longlong)param_1 + 0x34) = fVar2 * fVar5 + *(float *)((longlong)param_1 + 0x34);
        fVar2 = local_110;
        fVar9 = local_fc;
        fVar10 = local_100;
        fVar11 = local_f8;
        goto LAB_1800a4b16;
      }
    }
  }
  *(float *)(param_1 + 6) = local_138;
  *(float *)((longlong)param_1 + 0x34) = local_134;
  *(undefined4 *)(param_1 + 7) = 0;
  *(float *)((longlong)param_1 + 0x24) = fVar7;
  *(float *)(param_1 + 5) = fVar8;
  *(float *)((longlong)param_1 + 0x2c) = fVar4;
LAB_1800a4b16:
  fVar4 = *(float *)((longlong)param_1 + 0x24);
  fVar5 = *(float *)(param_1 + 5);
  fVar6 = *(float *)((longlong)param_1 + 0x2c);
  param_1[2] = (longlong)param_4;
  *param_1 = param_2;
  param_1[1] = param_3;
  *(float *)(param_1 + 3) = *param_5;
  *(float *)((longlong)param_1 + 0x1c) = param_5[1];
  *(float *)(param_1 + 4) = param_5[2];
  *(undefined1 *)((longlong)param_1 + 0x3c) = 1;
  fVar7 = param_5[2];
  fVar8 = *param_5;
  param_7[1] = fVar9 * fVar4 + param_5[1] + local_11c * fVar5 + local_10c * fVar6;
  *param_7 = fVar10 * fVar4 + fVar8 + local_120 * fVar5 + fVar2 * fVar6;
  param_7[2] = fVar11 * fVar4 + fVar7 + local_118 * fVar5 + local_108 * fVar6;
  fVar2 = param_8[2];
  fVar4 = (float)remainderf(*(float *)((longlong)param_1 + 0x34) + param_6[1]);
  fVar5 = (float)remainderf(*(float *)(param_1 + 6) + *param_6);
  *param_8 = fVar5;
  param_8[1] = fVar4;
  param_8[2] = fVar2;
  return;
}


