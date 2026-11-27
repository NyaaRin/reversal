// 0x18021ed00  Features_Autowall_FAS2Autowall_vfunc00
// size=33 thunk=false
// signature: undefined Features_Autowall_FAS2Autowall_vfunc00()
// status: ok


void * Features_Autowall_FAS2Autowall_vfunc00(void *param_1,ulonglong param_2)

{
  if ((param_2 & 1) != 0) {
    free(param_1);
  }
  return param_1;
}


