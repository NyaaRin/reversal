// 0x180090d30  FUN_180090d30
// size=19 thunk=false
// signature: undefined FUN_180090d30()
// status: ok


int * FUN_180090d30(int *param_1,int *param_2,int *param_3)

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


