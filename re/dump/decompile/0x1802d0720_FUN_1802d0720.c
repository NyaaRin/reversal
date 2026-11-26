// 0x1802d0720  FUN_1802d0720
// size=79 thunk=false
// signature: undefined FUN_1802d0720()
// status: ok


void FUN_1802d0720(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if ((*(longlong *)(lVar1 + 0xec0) != 0) && (*(char *)(lVar1 + 0x10) == '\0')) {
    __dyn_tls_on_demand_init();
  }
  return;
}


