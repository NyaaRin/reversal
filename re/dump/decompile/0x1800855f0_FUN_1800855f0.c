// 0x1800855f0  FUN_1800855f0
// size=497 thunk=false
// signature: undefined FUN_1800855f0()
// status: ok


undefined8 FUN_1800855f0(longlong param_1,char *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 extraout_XMM0_Db;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  
  fVar3 = DAT_180380bb0;
  if (*param_2 == '\0') {
    return 0;
  }
  fVar1 = *(float *)(param_1 + 0x34) * DAT_180380b74;
  fVar5 = *(float *)(param_1 + 0x34) * DAT_180380a74;
  fVar6 = 0.0;
  uVar7 = 0;
  if (fVar5 == fVar1) {
    fVar2 = DAT_180380bb0;
    if (0.0 <= *(float *)(param_2 + 4) - fVar1) {
LAB_180085698:
      uVar7 = 0;
      if (*(char *)(param_1 + 0x60) == '\0') {
        fVar2 = powf(fVar2,DAT_180380a58);
        uVar7 = extraout_XMM0_Db;
      }
      fVar6 = fVar2 * *(float *)(param_1 + 0x38) + 0.0;
    }
  }
  else {
    fVar1 = (*(float *)(param_2 + 4) - fVar5) / (fVar1 - fVar5);
    if (0.0 <= fVar1) {
      fVar5 = DAT_180380bb0;
      if (fVar1 <= DAT_180380bb0) {
        fVar5 = fVar1;
      }
    }
    else {
      fVar5 = 0.0;
    }
    fVar2 = fVar5 + 0.0;
    if (0.0 < fVar5 + 0.0) goto LAB_180085698;
  }
  if (param_2[1] != '\0') goto LAB_1800857bd;
  if (DAT_1803feaf8 == 0) {
    if (DAT_1803fa340 != 0) {
      DAT_1803feaf8 = FUN_180016fb0("weapon_air_spread_scale");
    }
    if (DAT_1803feaf8 != 0) goto LAB_180085703;
  }
  else {
LAB_180085703:
    fVar3 = (float)FUN_180019700(DAT_1803feaf8);
  }
  fVar1 = *(float *)(param_1 + 0x44);
  fVar5 = fVar3 * *(float *)(param_1 + 0x3c);
  fVar3 = fVar3 * *(float *)(param_1 + 0x40);
  if (fVar1 < 0.0) {
    fVar1 = sqrtf(fVar1);
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  fVar2 = fVar1 * DAT_180380a58;
  if (fVar2 < fVar1) {
    fVar4 = *(float *)(param_2 + 8);
    if (fVar4 < 0.0) {
      fVar4 = sqrtf(fVar4);
    }
    else {
      fVar4 = SQRT(fVar4);
    }
    fVar3 = ((fVar4 - fVar2) / (fVar1 - fVar2)) * (fVar5 - fVar3) + fVar3;
  }
  fVar1 = 0.0;
  if ((0.0 <= fVar3) && (fVar1 = fVar5 + fVar5, fVar3 <= fVar5 + fVar5)) {
    fVar1 = fVar3;
  }
  fVar6 = fVar6 + fVar1;
LAB_1800857bd:
  return CONCAT44(uVar7,fVar6);
}


