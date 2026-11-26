// 0x18018f400  FUN_18018f400
// size=905 thunk=false
// signature: undefined FUN_18018f400()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18018f400(longlong param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  short sVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  undefined8 local_108;
  float local_100;
  float local_f8;
  undefined8 *local_f0;
  float *local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [112];
  
  uVar9 = param_2[1];
  *(undefined8 *)param_3 = *param_2;
  *(undefined8 *)(param_3 + 2) = uVar9;
  fVar1 = *(float *)((longlong)param_2 + 0x14);
  fVar4 = *(float *)(param_2 + 3);
  fVar14 = *(float *)((longlong)param_2 + 0x1c);
  param_3[4] = *(float *)(param_2 + 2);
  param_3[5] = fVar1;
  param_3[6] = fVar4;
  param_3[7] = fVar14;
  uVar9 = param_2[5];
  *(undefined8 *)(param_3 + 8) = param_2[4];
  *(undefined8 *)(param_3 + 10) = uVar9;
  fVar5 = DAT_180380bb0;
  local_f8 = 1.0;
  local_f0 = &local_d8;
  local_d8 = 0;
  uStack_d0 = 0;
  uVar12 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_e8 = param_3;
  FUN_18001d080(&local_d8,"DT_BaseAnimating",0x10);
  local_f0 = &local_d8;
  local_108 = (undefined8 *)local_98;
  uVar9 = FUN_18016d4c0(local_98,&local_d8);
  uVar9 = FUN_180018ef0(&DAT_1803fac80,uVar9);
  FUN_18020e450(&local_d8);
  local_108 = &local_b8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  FUN_18001d080(&local_b8,"m_flModelScale",0xe);
  local_f0 = &local_b8;
  local_108 = (undefined8 *)local_98;
  uVar10 = FUN_18016d4c0(local_98,&local_b8);
  iVar8 = FUN_180018c10(uVar9,uVar10);
  FUN_18020e450(&local_b8);
  fVar1 = *(float *)(iVar8 + param_1);
  local_f8 = fVar1;
  sVar7 = _fdclass(fVar1);
  uVar6 = _DAT_1803817c0;
  fVar14 = DAT_180380980;
  fVar4 = DAT_180380930;
  if ((((sVar7 < 1) && (DAT_180380980 <= fVar1)) && (fVar1 <= DAT_180381120)) &&
     (DAT_180380964 <= (float)((uint)(fVar1 - fVar5) & _DAT_1803817c0))) {
    local_108 = (undefined8 *)0x0;
    local_100 = 0.0;
    do {
      fVar13 = *(float *)((longlong)param_2 + uVar12 * 4 + 0x10);
      fVar2 = *(float *)((longlong)param_2 + uVar12 * 4);
      fVar3 = *(float *)((longlong)param_2 + uVar12 * 4 + 0x20);
      fVar13 = fVar2 * fVar2 + fVar13 * fVar13 + fVar3 * fVar3;
      if (((uint)fVar13 & 0x7f800000) == 0x7f800000) {
        return;
      }
      if (fVar13 <= fVar4) {
        return;
      }
      if (fVar13 < 0.0) {
        fVar13 = sqrtf(fVar13);
      }
      else {
        fVar13 = SQRT(fVar13);
      }
      *(float *)((longlong)&local_108 + uVar12 * 4) = fVar13;
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
    } while ((int)uVar11 < 3);
    if (fVar14 <= fVar1 * fVar14) {
      fVar14 = fVar1 * fVar14;
    }
    if (((((fVar14 < (float)((uint)((float)local_108 - fVar1) & uVar6)) ||
          (fVar14 < (float)((uint)(local_108._4_4_ - fVar1) & uVar6))) ||
         (fVar14 < (float)((uint)(local_100 - fVar1) & uVar6))) &&
        (((float)((uint)((float)local_108 - fVar5) & uVar6) <= DAT_1803809a0 &&
         ((float)((uint)(local_108._4_4_ - fVar5) & uVar6) <= DAT_1803809a0)))) &&
       ((float)((uint)(local_100 - fVar5) & uVar6) <= DAT_1803809a0)) {
      *param_3 = fVar1 * *param_3;
      param_3[1] = fVar1 * param_3[1];
      param_3[2] = fVar1 * param_3[2];
      param_3[4] = fVar1 * param_3[4];
      param_3[5] = fVar1 * param_3[5];
      param_3[6] = fVar1 * param_3[6];
      param_3[8] = fVar1 * param_3[8];
      param_3[9] = fVar1 * param_3[9];
      param_3[10] = fVar1 * param_3[10];
    }
  }
  return;
}


