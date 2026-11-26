// 0x1802a9aa0  FUN_1802a9aa0
// size=142 thunk=false
// signature: undefined FUN_1802a9aa0()
// status: ok


float FUN_1802a9aa0(int param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x1520) + 0x1c8);
  if (lVar1 == 0) {
    return 0.0;
  }
  if (param_1 < 0) {
    param_1 = *(int *)(lVar1 + 0xc);
  }
  return (*(float *)(lVar1 + 0x18) - *(float *)(lVar1 + 0x14)) *
         *(float *)((longlong)param_1 * 0x1c + *(longlong *)(lVar1 + 0x68)) +
         *(float *)(lVar1 + 0x14);
}


