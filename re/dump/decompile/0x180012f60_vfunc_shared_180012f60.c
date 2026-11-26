// 0x180012f60  vfunc_shared_180012f60
// size=72 thunk=false
// signature: undefined vfunc_shared_180012f60()
// status: ok


undefined8 * vfunc_shared_180012f60(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_std_exception;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


