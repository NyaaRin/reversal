// 0x1800ce630  FUN_1800ce630
// size=741 thunk=false
// signature: undefined FUN_1800ce630()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1800ce630(float *param_1,float *param_2,float *param_3,undefined8 param_4)

{
  short sVar1;
  float fVar2;
  float fVar3;
  undefined4 extraout_XMM0_Db;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_c4;
  float local_c0;
  float local_bc;
  
  if (*(char *)(param_1 + 6) == '\0') {
    return (ulonglong)(uint)DAT_180381308;
  }
  fVar2 = (float)FUN_1800cb220(param_1,param_4);
  fVar3 = (float)FUN_1800cb220(param_1,param_2);
  if (fVar3 <= fVar2) {
    fVar3 = fVar2;
  }
  fVar2 = (float)FUN_1800cb220(param_1,param_3);
  if (fVar3 < fVar2) {
    fVar3 = fVar2;
  }
  fVar9 = *param_2 - *param_1;
  fVar8 = param_2[1] - param_1[1];
  fVar5 = param_3[2] - param_2[2];
  fVar14 = *param_3 - *param_2;
  fVar10 = param_2[2] - param_1[2];
  fVar15 = param_3[1] - param_2[1];
  fVar4 = param_1[5] * fVar5;
  fVar12 = param_1[4] * fVar15 + param_1[3] * fVar14 + fVar4;
  fVar6 = param_1[4] * fVar8 + param_1[3] * fVar9 + param_1[5] * fVar10;
  fVar13 = fVar15 * fVar8 + fVar14 * fVar9 + fVar5 * fVar10;
  fVar2 = (fVar15 * fVar15 + fVar14 * fVar14 + fVar5 * fVar5) * fVar6;
  fVar11 = fVar12 * fVar13 - fVar2;
  sVar1 = _fdclass(fVar11,fVar5 * fVar5,fVar2,fVar4,fVar5);
  if ((sVar1 < 1) && (DAT_180380938 < (float)((uint)fVar11 & _DAT_1803817c0))) {
    fVar11 = (fVar6 * fVar13 - (fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10) * fVar12) / fVar11;
    sVar1 = _fdclass(fVar11);
    if ((sVar1 < 1) && ((0.0 < fVar11 && (fVar11 < DAT_180380bb0)))) {
      local_c4 = fVar11 * fVar14 + *param_2;
      local_bc = fVar11 * fVar5 + param_2[2];
      local_c0 = fVar11 * fVar15 + param_2[1];
      fVar2 = (float)FUN_1800cb220(param_1,&local_c4);
      if (fVar3 < fVar2) {
        fVar3 = fVar2;
      }
    }
  }
  if (DAT_180381384 <= fVar3) {
    fVar3 = acosf(fVar3);
    fVar3 = fVar3 / DAT_180380994;
    sVar1 = _fdclass(fVar3);
    uVar7 = extraout_XMM0_Db;
    if (sVar1 < 1) goto LAB_1800ce8f7;
  }
  uVar7 = 0;
  fVar3 = DAT_180381308;
LAB_1800ce8f7:
  return CONCAT44(uVar7,fVar3);
}


