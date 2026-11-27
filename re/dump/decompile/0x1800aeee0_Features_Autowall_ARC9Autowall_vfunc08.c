// 0x1800aeee0  Features_Autowall_ARC9Autowall_vfunc08
// size=44 thunk=false
// signature: undefined Features_Autowall_ARC9Autowall_vfunc08()
// status: ok


undefined4 Features_Autowall_ARC9Autowall_vfunc08(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 local_res8 [8];
  
  local_res8[0] = 1;
  puVar1 = local_res8;
  if (0 < *(int *)(param_1 + 0x18)) {
    puVar1 = (undefined4 *)(param_1 + 0x18);
  }
  if (4 < *(int *)(param_1 + 0x18)) {
    puVar1 = &DAT_18033c6a0;
  }
  return *puVar1;
}


