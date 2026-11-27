// 0x180013760  vfunc_shared_180013760
// size=33 thunk=false
// signature: undefined vfunc_shared_180013760()
// status: ok


void * vfunc_shared_180013760(void *param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


