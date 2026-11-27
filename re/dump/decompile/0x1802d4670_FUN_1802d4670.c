// 0x1802d4670  FUN_1802d4670
// size=128 thunk=false
// signature: undefined FUN_1802d4670()
// status: ok


void FUN_1802d4670(float *param_1,float *param_2,float *param_3)

{
  *param_3 = param_2[1] * param_1[1] + *param_1 * *param_2 + param_2[2] * param_1[2];
  param_3[1] = param_2[5] * param_1[1] + param_2[4] * *param_1 + param_2[6] * param_1[2];
  param_3[2] = param_2[9] * param_1[1] + param_2[8] * *param_1 + param_2[10] * param_1[2];
  return;
}


