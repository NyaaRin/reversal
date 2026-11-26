// 0x1800b02c0  Features_Autowall_TFAAutowall_vfunc04
// size=31 thunk=false
// signature: undefined Features_Autowall_TFAAutowall_vfunc04()
// status: ok


undefined1 Features_Autowall_TFAAutowall_vfunc04(longlong param_1)

{
  if (((*(char *)(param_1 + 0x25) != '\0') && (*(char *)(param_1 + 0x24) != '\0')) &&
     (0.0 < *(float *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}


