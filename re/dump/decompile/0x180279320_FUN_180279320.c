// 0x180279320  FUN_180279320
// size=102 thunk=false
// signature: undefined FUN_180279320()
// status: ok


void FUN_180279320(undefined4 param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
  puVar1 = (undefined4 *)(lVar2 + 0x1f0);
  FUN_18028a630(lVar2 + 0x208,puVar1);
  *puVar1 = param_1;
  return;
}


