// 0x180013240  FUN_180013240
// size=17 thunk=false
// signature: undefined FUN_180013240()
// status: ok


undefined4 * FUN_180013240(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined ***)(param_1 + 2) = &PTR_vftable_std__Generic_error_category_1803e7370;
  return param_1;
}


