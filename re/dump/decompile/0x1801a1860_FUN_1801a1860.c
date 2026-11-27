// 0x1801a1860  FUN_1801a1860
// size=167 thunk=false
// signature: undefined FUN_1801a1860()
// status: ok


void FUN_1801a1860(float param_1)

{
  longlong lVar1;
  longlong local_res10 [3];
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x1520);
  param_1 = param_1 - ((*(float *)(lVar1 + 0x11c) - *(float *)(lVar1 + 0x2c)) +
                      *(float *)(lVar1 + 0x9c));
  if (0.0 < param_1) {
    local_res10[0] = 0;
    FUN_18026aad0(0xe,local_res10);
    local_res10[0] = (ulonglong)(uint)param_1 << 0x20;
    FUN_1802af260(local_res10);
    FUN_18026abb0(1);
  }
  return;
}


