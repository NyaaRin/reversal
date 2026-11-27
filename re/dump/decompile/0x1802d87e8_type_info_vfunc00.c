// 0x1802d87e8  type_info_vfunc00
// size=43 thunk=false
// signature: undefined type_info_vfunc00()
// status: ok


undefined8 * type_info_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_type_info;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


