// 0x18001fe90  FUN_18001fe90
// size=376 thunk=false
// signature: undefined FUN_18001fe90()
// status: ok


void FUN_18001fe90(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = param_3[2] - param_2[2];
  fVar4 = param_3[1] - param_2[1];
  fVar3 = *param_3 - *param_2;
  param_1[6] = fVar2;
  param_1[5] = fVar4;
  param_1[4] = fVar3;
  fVar6 = DAT_180380ac0;
  *(bool *)((longlong)param_1 + 0x49) = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 != 0.0;
  fVar2 = *param_5;
  fVar3 = *param_4;
  param_1[0xc] = fVar2 - fVar3;
  fVar4 = param_5[1];
  fVar1 = param_4[1];
  fVar5 = (fVar2 - fVar3) * fVar6;
  param_1[0xd] = fVar4 - fVar1;
  fVar2 = param_5[2];
  fVar3 = param_4[2];
  param_1[0xc] = fVar5;
  fVar4 = (fVar4 - fVar1) * fVar6;
  param_1[0x10] = 0.0;
  param_1[0x11] = 0.0;
  param_1[0xd] = fVar4;
  fVar2 = (fVar2 - fVar3) * fVar6;
  param_1[0xe] = fVar2;
  *(bool *)(param_1 + 0x12) =
       (double)(fVar4 * fVar4 + fVar5 * fVar5 + fVar2 * fVar2) < DAT_180380a80;
  fVar2 = *param_4;
  fVar3 = *param_5;
  param_1[8] = fVar2 + fVar3;
  fVar4 = param_4[1];
  fVar1 = param_5[1];
  fVar5 = (fVar2 + fVar3) * fVar6;
  param_1[9] = fVar4 + fVar1;
  fVar2 = param_5[2];
  fVar3 = param_4[2];
  param_1[8] = fVar5;
  fVar4 = (fVar4 + fVar1) * fVar6;
  fVar6 = (fVar2 + fVar3) * fVar6;
  param_1[9] = fVar4;
  param_1[10] = fVar6;
  *param_1 = fVar5 + *param_2;
  param_1[1] = fVar4 + param_2[1];
  fVar2 = param_2[2];
  fVar4 = fVar4 * DAT_180381384;
  fVar3 = fVar6 * DAT_180381384;
  param_1[8] = fVar5 * DAT_180381384;
  param_1[9] = fVar4;
  param_1[10] = fVar3;
  param_1[2] = fVar6 + fVar2;
  return;
}


