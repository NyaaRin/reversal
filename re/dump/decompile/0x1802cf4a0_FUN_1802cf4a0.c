// 0x1802cf4a0  FUN_1802cf4a0
// size=118 thunk=false
// signature: undefined FUN_1802cf4a0()
// status: ok


undefined8 FUN_1802cf4a0(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(longlong *)(lVar1 + 0xec0) != 0) {
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    return *(undefined8 *)(*(longlong *)(lVar1 + 0xec0) + 0xc0);
  }
  return 0;
}


