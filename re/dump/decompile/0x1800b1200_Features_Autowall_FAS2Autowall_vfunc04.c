// 0x1800b1200  Features_Autowall_FAS2Autowall_vfunc04
// size=31 thunk=false
// signature: undefined Features_Autowall_FAS2Autowall_vfunc04()
// status: ok


undefined1 Features_Autowall_FAS2Autowall_vfunc04(longlong param_1)

{
  if (((*(char *)(param_1 + 0x16) != '\0') && (*(char *)(param_1 + 0x15) != '\0')) &&
     (0.0 < *(float *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}


