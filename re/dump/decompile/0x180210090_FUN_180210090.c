// 0x180210090  FUN_180210090
// size=76 thunk=false
// signature: undefined FUN_180210090()
// status: ok


undefined8 * FUN_180210090(undefined8 *param_1,longlong param_2)

{
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = vftable_std_logic_error;
  *param_1 = vftable_std_invalid_argument;
  return param_1;
}


