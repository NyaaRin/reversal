// 0x180282d00  FUN_180282d00
// size=106 thunk=false
// signature: undefined FUN_180282d00()
// status: ok


void FUN_180282d00(int param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  *(undefined4 *)
   (*(longlong *)(*(longlong *)(lVar1 + 0x2070) + 0x3d8) + 0x418 +
   ((longlong)param_1 + (longlong)*(int *)(lVar1 + 0x207c) * 2) * 4) = 0x7f7fffff;
  return;
}


