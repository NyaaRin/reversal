// 0x180013990  FUN_180013990
// size=66 thunk=false
// signature: undefined FUN_180013990()
// status: ok


undefined8 * FUN_180013990(undefined8 *param_1,longlong param_2)

{
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = vftable_std_bad_cast;
  return param_1;
}


