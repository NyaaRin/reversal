// 0x1800a25b0  FUN_1800a25b0
// size=588 thunk=false
// signature: undefined FUN_1800a25b0()
// status: ok


void FUN_1800a25b0(longlong *param_1,longlong param_2,double param_3,float *param_4)

{
  double dVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((((param_2 == 0) || (sVar2 = _dclass(param_3), 0 < sVar2)) ||
      (((uint)*param_4 & 0x7f800000) == 0x7f800000)) ||
     ((((uint)param_4[1] & 0x7f800000) == 0x7f800000 ||
      (((uint)param_4[2] & 0x7f800000) == 0x7f800000)))) {
LAB_1800a27ba:
    *param_1 = 0;
    param_1[1] = -0x4010000000000000;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    return;
  }
  if (((*param_1 == param_2) && ((dVar1 = (double)param_1[1], 0.0 <= dVar1 && (dVar1 <= param_3))))
     && (dVar1 = param_3 - dVar1, dVar1 <= DAT_180380cb0)) {
    fVar4 = *param_4 - *(float *)(param_1 + 2);
    fVar5 = param_4[1] - *(float *)((longlong)param_1 + 0x14);
    fVar6 = param_4[2] - *(float *)(param_1 + 3);
    if (fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6 <= DAT_1803812e0) {
      if (dVar1 < DAT_180380b40) {
        return;
      }
      fVar3 = (float)(DAT_180380d08 / dVar1);
      fVar4 = fVar3 * fVar4;
      if (((((uint)fVar4 & 0x7f800000) == 0x7f800000) ||
          (fVar5 = fVar3 * fVar5, ((uint)fVar5 & 0x7f800000) == 0x7f800000)) ||
         (fVar3 = fVar3 * fVar6, ((uint)fVar3 & 0x7f800000) == 0x7f800000)) goto LAB_1800a27ba;
      if ((char)param_1[5] != '\0') {
        fVar4 = fVar4 * DAT_180380b20 + *(float *)((longlong)param_1 + 0x1c) * DAT_180380a58;
        fVar5 = *(float *)(param_1 + 4) * DAT_180380a58 + fVar5 * DAT_180380b20;
        fVar3 = *(float *)((longlong)param_1 + 0x24) * DAT_180380a58 + fVar3 * DAT_180380b20;
      }
      *(float *)((longlong)param_1 + 0x1c) = fVar4;
      *(float *)(param_1 + 4) = fVar5;
      *(float *)((longlong)param_1 + 0x24) = fVar3;
      *(undefined1 *)(param_1 + 5) = 1;
      goto LAB_1800a27a2;
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = param_2;
LAB_1800a27a2:
  param_1[1] = (longlong)param_3;
  *(float *)(param_1 + 2) = *param_4;
  *(float *)((longlong)param_1 + 0x14) = param_4[1];
  *(float *)(param_1 + 3) = param_4[2];
  return;
}


