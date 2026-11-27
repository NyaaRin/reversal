// 0x1802808e0  FUN_1802808e0
// size=98 thunk=false
// signature: undefined FUN_1802808e0()
// status: ok


void FUN_1802808e0(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x1520);
  *(undefined4 *)(lVar1 + 0xa8) = param_1;
  *(undefined4 *)(lVar1 + 0xb0) = 0;
  *(undefined4 *)(lVar1 + 0xb8) = 0;
  return;
}


