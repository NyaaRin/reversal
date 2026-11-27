// 0x1800138e0  FUN_1800138e0
// size=17 thunk=false
// signature: undefined FUN_1800138e0()
// status: ok


undefined4 * FUN_1800138e0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  *(undefined ***)(param_1 + 2) = &PTR_vftable_std__System_error_category_1803e9500;
  return param_1;
}


