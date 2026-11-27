// 0x180013000  FUN_180013000
// size=76 thunk=false
// signature: undefined FUN_180013000()
// status: ok


undefined8 * FUN_180013000(undefined8 *param_1,longlong param_2)

{
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = vftable_std_bad_alloc;
  *param_1 = vftable_std_bad_array_new_length;
  return param_1;
}


