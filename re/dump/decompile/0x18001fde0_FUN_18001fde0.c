// 0x18001fde0  FUN_18001fde0
// size=169 thunk=false
// signature: undefined FUN_18001fde0()
// status: ok


void FUN_18001fde0(float *param_1,float *param_2,float *param_3)

{
  undefined *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  puVar1 = PTR_FUN_1803da018;
  fVar4 = *param_3 - *param_2;
  fVar2 = param_3[1] - param_2[1];
  fVar3 = param_3[2] - param_2[2];
  param_1[4] = fVar4;
  param_1[5] = fVar2;
  param_1[6] = fVar3;
  fVar2 = (float)(*(code *)puVar1)(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
  *(bool *)((longlong)param_1 + 0x49) = fVar2 != 0.0;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0x10] = 0.0;
  param_1[0x11] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  param_1[8] = 0.0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  fVar2 = param_2[2];
  fVar3 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = fVar2;
  *param_1 = fVar3;
  return;
}


