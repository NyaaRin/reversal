// 0x1800b0d70  vfunc_shared_1800b0d70
// size=55 thunk=false
// signature: undefined vfunc_shared_1800b0d70()
// status: ok


undefined4 vfunc_shared_1800b0d70(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 local_res8 [8];
  
  local_res8[0] = 0;
  puVar1 = local_res8;
  if (0.0 <= *(float *)(param_1 + 0x10)) {
    puVar1 = (undefined4 *)(param_1 + 0x10);
  }
  if (DAT_1803812a4 < *(float *)(param_1 + 0x10)) {
    puVar1 = &DAT_18033c69c;
  }
  return *puVar1;
}


