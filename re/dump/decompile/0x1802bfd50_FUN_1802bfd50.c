// 0x1802bfd50  FUN_1802bfd50
// size=104 thunk=false
// signature: undefined FUN_1802bfd50()
// status: ok


void FUN_1802bfd50(undefined4 param_1,undefined1 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FUN_180269340(*(undefined8 *)(*(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x1520) + 0x1c0),
                param_1,param_2);
  return;
}


