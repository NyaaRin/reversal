// 0x180014c00  FUN_180014c00
// size=43 thunk=false
// signature: undefined FUN_180014c00()
// status: ok


undefined8 * FUN_180014c00(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = vftable_SE_Exception;
  *(undefined4 *)(param_1 + 3) = param_2;
  param_1[4] = param_3;
  return param_1;
}


