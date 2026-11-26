// 0x1802834c0  FUN_1802834c0
// size=103 thunk=false
// signature: undefined FUN_1802834c0()
// status: ok


void FUN_1802834c0(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  lVar2 = *(longlong *)(lVar1 + 0x1520);
  if ((*(longlong *)(lVar1 + 0x2368) == 0) && (*(longlong *)(lVar2 + 0x1c8) == 0)) {
    *(undefined1 *)(lVar2 + 0x178) = 1;
    return;
  }
  *(undefined1 *)(lVar2 + 0x178) = 0;
  return;
}


