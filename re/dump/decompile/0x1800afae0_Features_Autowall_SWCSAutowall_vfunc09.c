// 0x1800afae0  Features_Autowall_SWCSAutowall_vfunc09
// size=76 thunk=false
// signature: undefined Features_Autowall_SWCSAutowall_vfunc09()
// status: ok


void Features_Autowall_SWCSAutowall_vfunc09(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 local_18 [6];
  
  local_18[0] = 0;
  puVar1 = local_18;
  if (0.0 <= *(float *)(param_1 + 0x14)) {
    puVar1 = (undefined4 *)(param_1 + 0x14);
  }
  if (DAT_1803812a4 < *(float *)(param_1 + 0x14)) {
    puVar1 = &DAT_18033c69c;
  }
  *(undefined4 *)(param_1 + 0x30) = *puVar1;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 4;
  return;
}


