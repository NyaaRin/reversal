// 0x1802affe0  FUN_1802affe0
// size=148 thunk=false
// signature: undefined FUN_1802affe0()
// status: ok


void FUN_1802affe0(char *param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x1520) + 0xce) = 1;
  if (*(char *)(*(longlong *)(lVar2 + 0x1520) + 0xd1) == '\0') {
    if (param_1 != (char *)0xffffffffffffffff) {
      while (cVar1 = *param_1, cVar1 != '\0') {
        param_1 = param_1 + 1;
        if (((cVar1 == '#') && (*param_1 == '#')) || (param_1 == (char *)0xffffffffffffffff)) break;
      }
    }
    FUN_1802afbd0();
  }
  return;
}


