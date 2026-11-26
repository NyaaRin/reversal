// 0x1800afa80  Features_Autowall_SWCSAutowall_vfunc04
// size=31 thunk=false
// signature: undefined Features_Autowall_SWCSAutowall_vfunc04()
// status: ok


undefined1 Features_Autowall_SWCSAutowall_vfunc04(longlong param_1)

{
  if (((*(char *)(param_1 + 0x20) != '\0') && (*(int *)(param_1 + 0x1c) == 1)) &&
     (0.0 < *(float *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}


