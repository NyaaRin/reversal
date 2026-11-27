// 0x180071bd0  FUN_180071bd0
// size=27 thunk=false
// signature: undefined FUN_180071bd0()
// status: ok


float * FUN_180071bd0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = *param_1;
  if (fVar1 < *param_2) {
    param_1 = param_2;
  }
  if (*param_3 <= fVar1 && fVar1 != *param_3) {
    param_1 = param_3;
  }
  return param_1;
}


