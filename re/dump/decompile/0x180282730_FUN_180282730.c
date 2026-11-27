// 0x180282730  FUN_180282730
// size=115 thunk=false
// signature: undefined FUN_180282730()
// status: ok


longlong FUN_180282730(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  plVar2 = *(longlong **)(lVar1 + 0x14c8);
  for (plVar3 = plVar2; (plVar3 < plVar2 + *(int *)(lVar1 + 0x14c0) && (*plVar3 != param_1));
      plVar3 = plVar3 + 1) {
  }
  return (longlong)plVar3 - (longlong)plVar2 >> 3;
}


