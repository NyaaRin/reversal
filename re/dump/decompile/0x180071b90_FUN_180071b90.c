// 0x180071b90  FUN_180071b90
// size=61 thunk=false
// signature: undefined FUN_180071b90()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float * FUN_180071b90(float *param_1,float *param_2,float *param_3)

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


