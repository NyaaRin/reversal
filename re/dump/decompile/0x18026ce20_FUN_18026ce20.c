// 0x18026ce20  FUN_18026ce20
// size=68 thunk=false
// signature: undefined FUN_18026ce20()
// status: ok


void FUN_18026ce20(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  *(undefined8 *)(lVar1 + 0xec0) = param_1;
  return;
}


