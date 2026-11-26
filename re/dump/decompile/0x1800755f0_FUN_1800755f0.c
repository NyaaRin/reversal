// 0x1800755f0  FUN_1800755f0
// size=895 thunk=false
// signature: undefined FUN_1800755f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1800755f0(undefined8 *param_1,undefined4 param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_118 [32];
  float *local_f8;
  float *local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  ulonglong local_c8;
  
  local_c8 = DAT_1803da4c0 ^ (ulonglong)auStack_118;
  local_f0 = &local_d8;
  local_f8 = &local_e8;
  FUN_180072260(*param_1,param_2,param_1[1],param_1[2]);
  uVar5 = DAT_1803817f0;
  pfVar1 = (float *)param_1[3];
  fVar11 = *pfVar1 - local_e8;
  fVar8 = DAT_180381304;
  if ((((((uint)fVar11 & 0x7f800000) != 0x7f800000) &&
       (fVar10 = pfVar1[1] - local_e4, ((uint)fVar10 & 0x7f800000) != 0x7f800000)) &&
      (local_e0 = pfVar1[2] - local_e0, ((uint)local_e0 & 0x7f800000) != 0x7f800000)) &&
     (((fVar7 = fVar10 * fVar10 + fVar11 * fVar11, DAT_180380938 < local_e0 * local_e0 + fVar7 &&
       (((uint)local_d8 & 0x7f800000) != 0x7f800000)) &&
      ((((uint)local_d4 & 0x7f800000) != 0x7f800000 &&
       ((((uint)local_d0 & 0x7f800000) != 0x7f800000 &&
        (fVar9 = local_d4 * local_d4 + local_d8 * local_d8,
        DAT_180380938 <= local_d0 * local_d0 + fVar9)))))))) {
    fVar8 = (float)((uint)local_e0 ^ DAT_1803817f0);
    if (fVar7 < 0.0) {
      fVar7 = sqrtf(fVar7);
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    fVar8 = atan2f(fVar8,fVar7);
    fVar7 = DAT_1803810c0;
    fVar8 = fVar8 * DAT_1803810c0;
    if (fVar9 < 0.0) {
      fVar9 = sqrtf(fVar9);
    }
    else {
      fVar9 = SQRT(fVar9);
    }
    fVar6 = atan2f((float)((uint)local_d0 ^ uVar5),fVar9);
    fVar4 = DAT_180381424;
    fVar3 = DAT_180381420;
    fVar2 = DAT_18038120c;
    fVar9 = DAT_180381188;
    for (fVar8 = fVar8 - fVar6 * fVar7; DAT_180381188 < fVar8; fVar8 = fVar8 + DAT_180381424) {
    }
    for (; fVar8 < DAT_180381420; fVar8 = fVar8 + DAT_18038120c) {
    }
    *param_3 = fVar8;
    fVar11 = atan2f(fVar10,fVar11);
    fVar10 = atan2f(local_d4,local_d8);
    fVar8 = DAT_180381304;
    for (fVar11 = fVar11 * fVar7 - fVar10 * fVar7; fVar9 < fVar11; fVar11 = fVar11 + fVar4) {
    }
    for (; fVar11 < fVar3; fVar11 = fVar11 + fVar2) {
    }
    *param_4 = fVar11;
    fVar10 = *param_3;
    if ((((fVar10 < fVar8) && (DAT_180381450 < fVar10)) && (fVar11 < fVar8)) &&
       (DAT_180381450 < fVar11)) {
      fVar8 = (float)((uint)fVar10 & _DAT_1803817c0) + (float)((uint)fVar11 & _DAT_1803817c0);
    }
  }
  return fVar8;
}


