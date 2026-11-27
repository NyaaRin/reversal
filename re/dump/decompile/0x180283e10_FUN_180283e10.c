// 0x180283e10  FUN_180283e10
// size=94 thunk=false
// signature: undefined FUN_180283e10()
// status: ok


void FUN_180283e10(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  if ((*(char *)(lVar1 + 0x2111) == '\0') && (*(char *)(lVar1 + 0x20d2) == '\0')) {
    *(undefined1 *)(lVar1 + 0x20d1) = 0;
    return;
  }
  *(undefined1 *)(lVar1 + 0x20d1) = 1;
  return;
}


