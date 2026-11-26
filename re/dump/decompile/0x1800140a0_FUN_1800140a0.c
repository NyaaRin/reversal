// 0x1800140a0  FUN_1800140a0
// size=58 thunk=false
// signature: undefined FUN_1800140a0()
// status: ok


undefined8 * FUN_1800140a0(undefined8 *param_1)

{
  *param_1 = vftable_std_exception;
  param_1[2] = 0;
  param_1[1] = "bad cast";
  *param_1 = vftable_std_bad_cast;
  *param_1 = vftable_std_bad_any_cast;
  return param_1;
}


