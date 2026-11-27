// 0x18004c250  FUN_18004c250
// size=93 thunk=false
// signature: undefined FUN_18004c250()
// status: ok


undefined8 FUN_18004c250(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  
  lVar2 = FUN_180039770();
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) == param_1)) && (DAT_1803ff8ec != '\0')) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar2 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    puVar1 = (uint *)(*(longlong *)(lVar2 + 0xec0) + 0x1f48);
    *puVar1 = *puVar1 | 0x20;
  }
  return 0;
}


