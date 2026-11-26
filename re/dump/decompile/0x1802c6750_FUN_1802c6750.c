// 0x1802c6750  FUN_1802c6750
// size=225 thunk=false
// signature: undefined FUN_1802c6750()
// status: ok


void FUN_1802c6750(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(char *)(*(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520) + 0xd1) == '\0') {
    lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x23d0);
    if (lVar3 == 0) {
      FUN_18027e9c0("Needs to be called between BeginTabBar() and EndTabBar()!");
      return;
    }
    if ((*(byte *)((longlong)*(short *)(lVar3 + 0x8a) * 0x2c + 4 + *(longlong *)(lVar3 + 0x10)) & 8)
        == 0) {
      if (*(char *)(lVar2 + 0x10) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
      iVar1 = *(int *)(lVar2 + 0x108);
      if (iVar1 < 2) {
        FUN_18027e9c0("Calling PopID() too many times!");
        return;
      }
      *(int *)(lVar2 + 0x108) = iVar1 + -1;
    }
  }
  return;
}


