// 0x180066e70  std_filesystem_filesystem_error_vfunc00
// size=112 thunk=false
// signature: undefined std_filesystem_filesystem_error_vfunc00()
// status: ok


undefined8 * std_filesystem_filesystem_error_vfunc00(undefined8 *param_1,ulonglong param_2)

{
  FUN_18020e450(param_1 + 0xd);
  FUN_18021e290();
  FUN_18021e290();
  *param_1 = vftable_std_exception;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


