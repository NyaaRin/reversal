// 0x180090cf0  FUN_180090cf0
// size=53 thunk=false
// signature: undefined FUN_180090cf0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_180090cf0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (*param_1 < *param_2) {
    piVar1 = param_2;
  }
  if (*param_3 < *param_1) {
    piVar1 = param_3;
  }
  return piVar1;
}


