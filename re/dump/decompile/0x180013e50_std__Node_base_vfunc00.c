// 0x180013e50  std__Node_base_vfunc00
// size=43 thunk=false
// signature: undefined std__Node_base_vfunc00()
// status: ok


undefined8 * std__Node_base_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_std__Node_base;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


