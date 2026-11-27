// 0x1800131d0  std__Generic_error_category_vfunc03
// size=11 thunk=false
// signature: undefined std__Generic_error_category_vfunc03()
// status: ok


undefined4 *
std__Generic_error_category_vfunc03(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}


