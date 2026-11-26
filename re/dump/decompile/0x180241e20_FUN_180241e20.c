// 0x180241e20  FUN_180241e20
// size=29 thunk=false
// signature: undefined FUN_180241e20()
// status: ok


void FUN_180241e20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  param_2[1] = uVar1;
  return;
}


