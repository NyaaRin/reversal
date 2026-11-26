// 0x180272f20  FUN_180272f20
// size=120 thunk=false
// signature: undefined FUN_180272f20()
// status: ok


void FUN_180272f20(void)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  cVar1 = *(char *)(lVar2 + 0x10);
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  *(undefined4 *)(lVar3 + 0x1ea8) = 0xf;
  *(undefined1 *)(lVar3 + 0x1eac) = 1;
  if (cVar1 == '\0') {
    __dyn_tls_on_demand_init();
  }
  *(undefined2 *)(*(longlong *)(lVar2 + 0xec0) + 0x2110) = 0;
  FUN_180283e10();
  return;
}


