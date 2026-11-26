// 0x1802d3ad0  FUN_1802d3ad0
// size=131 thunk=false
// signature: undefined FUN_1802d3ad0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802d3ad0(float *param_1)

{
  float fVar1;
  
  fVar1 = param_1[1] * param_1[1] + *param_1 * *param_1 + param_1[2] * param_1[2];
  if (fVar1 < 0.0) {
    fVar1 = sqrtf(fVar1);
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  fVar1 = DAT_180380bb0 / (fVar1 + _DAT_18030d324);
  *param_1 = fVar1 * *param_1;
  param_1[1] = fVar1 * param_1[1];
  param_1[2] = fVar1 * param_1[2];
  return;
}


