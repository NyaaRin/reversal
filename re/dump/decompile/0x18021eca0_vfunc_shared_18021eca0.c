// 0x18021eca0  vfunc_shared_18021eca0
// size=33 thunk=false
// signature: undefined vfunc_shared_18021eca0()
// status: ok


void * vfunc_shared_18021eca0(void *param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


