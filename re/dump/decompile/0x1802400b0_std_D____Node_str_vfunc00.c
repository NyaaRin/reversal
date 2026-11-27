// 0x1802400b0  std_D_?$_Node_str_vfunc00
// size=73 thunk=false
// signature: undefined std_D_?$_Node_str_vfunc00()
// status: ok


undefined8 * std_D____Node_str_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  free((void *)param_1[5]);
  *param_1 = vftable_std__Node_base;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


