// 0x180013eb0  vfunc_shared_180013eb0
// size=47 thunk=false
// signature: undefined vfunc_shared_180013eb0()
// status: ok


undefined8 * vfunc_shared_180013eb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = vftable_std__Node_base;
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


