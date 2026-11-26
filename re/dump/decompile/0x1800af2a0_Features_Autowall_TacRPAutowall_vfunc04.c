// 0x1800af2a0  Features_Autowall_TacRPAutowall_vfunc04
// size=31 thunk=false
// signature: undefined Features_Autowall_TacRPAutowall_vfunc04()
// status: ok


undefined1 Features_Autowall_TacRPAutowall_vfunc04(longlong param_1)

{
  if (((*(char *)(param_1 + 0x12) != '\0') && (*(char *)(param_1 + 0x11) != '\0')) &&
     (0.0 < *(float *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}


