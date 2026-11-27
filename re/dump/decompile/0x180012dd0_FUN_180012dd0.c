// 0x180012dd0  FUN_180012dd0
// size=51 thunk=false
// signature: undefined FUN_180012dd0()
// status: ok


undefined8 * FUN_180012dd0(undefined8 *param_1,longlong param_2)

{
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  return param_1;
}


