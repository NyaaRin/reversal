// 0x180274510  FUN_180274510
// size=313 thunk=false
// signature: undefined FUN_180274510()
// status: ok


float * FUN_180274510(float *param_1,longlong param_2,int param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 0x28);
  fVar2 = *(float *)(param_2 + 0x2c);
  fVar4 = fVar1 + *(float *)(param_2 + 0x30);
  fVar3 = fVar2 + *(float *)(param_2 + 0x34);
  if (param_5 == 0.0) {
    fVar3 = fVar3 - DAT_180380bb0;
    fVar4 = fVar4 - DAT_180380bb0;
  }
  if (param_3 == 0) {
    param_1[1] = fVar2 + param_4;
    *param_1 = fVar1 - param_5;
    param_1[2] = fVar1 + param_5;
    param_1[3] = fVar3 - param_4;
    return param_1;
  }
  if (param_3 == 1) {
    param_1[1] = fVar2 + param_4;
    *param_1 = fVar4 - param_5;
    param_1[2] = fVar4 + param_5;
    param_1[3] = fVar3 - param_4;
    return param_1;
  }
  if (param_3 != 2) {
    if (param_3 != 3) {
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      return param_1;
    }
    *param_1 = fVar1 + param_4;
    param_1[1] = fVar3 - param_5;
    param_1[2] = fVar4 - param_4;
    param_1[3] = fVar3 + param_5;
    return param_1;
  }
  *param_1 = fVar1 + param_4;
  param_1[1] = fVar2 - param_5;
  param_1[2] = fVar4 - param_4;
  param_1[3] = fVar2 + param_5;
  return param_1;
}


