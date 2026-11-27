// 0x180012f20  FUN_180012f20
// size=58 thunk=false
// signature: undefined FUN_180012f20()
// status: ok


undefined8 * FUN_180012f20(undefined8 *param_1)

{
  *param_1 = vftable_std_exception;
  param_1[2] = 0;
  param_1[1] = "bad array new length";
  *param_1 = vftable_std_bad_alloc;
  *param_1 = vftable_std_bad_array_new_length;
  return param_1;
}


