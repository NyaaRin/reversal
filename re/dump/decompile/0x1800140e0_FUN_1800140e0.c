// 0x1800140e0  FUN_1800140e0
// size=76 thunk=false
// signature: undefined FUN_1800140e0()
// status: ok


undefined8 * FUN_1800140e0(undefined8 *param_1,longlong param_2)

{
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = vftable_std_bad_cast;
  *param_1 = vftable_std_bad_any_cast;
  return param_1;
}


