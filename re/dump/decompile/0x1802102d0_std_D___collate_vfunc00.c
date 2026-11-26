// 0x1802102d0  std_D_?$collate_vfunc00
// size=93 thunk=false
// signature: undefined std_D_?$collate_vfunc00()
// status: ok


undefined8 * std_D___collate_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_std_D___collate;
  free((void *)param_1[3]);
  *param_1 = _vftable__exref;
  *param_1 = _vftable__exref;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


