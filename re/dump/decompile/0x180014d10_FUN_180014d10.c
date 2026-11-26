// 0x180014d10  FUN_180014d10
// size=90 thunk=false
// signature: undefined FUN_180014d10()
// status: ok


undefined8 * FUN_180014d10(undefined8 *param_1,longlong param_2)

{
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = vftable_SE_Exception;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  return param_1;
}


