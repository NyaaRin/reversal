// 0x1802c3b90  FUN_1802c3b90
// size=53 thunk=false
// signature: undefined FUN_1802c3b90()
// status: ok


void FUN_1802c3b90(void)

{
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FUN_180273410();
  FUN_18027fda0();
  return;
}


