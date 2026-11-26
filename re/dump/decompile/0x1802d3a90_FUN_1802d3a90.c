// 0x1802d3a90  FUN_1802d3a90
// size=61 thunk=false
// signature: undefined FUN_1802d3a90()
// status: ok


float FUN_1802d3a90(float param_1)

{
  float fVar1;
  
  if (0.0 <= param_1) {
    return DAT_180380bb0 / SQRT(param_1);
  }
  fVar1 = sqrtf(param_1);
  return DAT_180380bb0 / fVar1;
}


