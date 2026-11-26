// 0x1800ae870  Features_Autowall_ArcCWAutowall_vfunc04
// size=41 thunk=false
// signature: undefined Features_Autowall_ArcCWAutowall_vfunc04()
// status: ok


undefined1 Features_Autowall_ArcCWAutowall_vfunc04(longlong param_1)

{
  if ((((*(char *)(param_1 + 0x18) != '\0') && (*(char *)(param_1 + 0x11) != '\0')) &&
      (0.0 < *(float *)(param_1 + 8))) && (0.0 < *(float *)(param_1 + 0x14))) {
    return 1;
  }
  return 0;
}


