// 0x180282bb0  FUN_180282bb0
// size=164 thunk=false
// signature: undefined FUN_180282bb0()
// status: ok


void FUN_180282bb0(void)

{
  longlong lVar1;
  byte bVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  if ((*(longlong *)(lVar1 + 0x2070) == 0) ||
     ((*(uint *)(*(longlong *)(lVar1 + 0x2070) + 0x14) & 0x10000) == 0)) {
    if (*(int *)(lVar1 + 0x20c0) == 2) {
      bVar2 = *(byte *)(lVar1 + 0x28) & 1;
    }
    else {
      if (*(int *)(lVar1 + 0x20c0) != 3) goto LAB_180282c08;
      bVar2 = *(byte *)(lVar1 + 0x28) & 2;
    }
    if (bVar2 != 0) {
LAB_180282c08:
      if (*(char *)(lVar1 + 0x76) == '\0') {
        *(undefined2 *)(lVar1 + 0x2069) = 0x101;
        return;
      }
      *(undefined2 *)(lVar1 + 0x2068) = 0x101;
      *(undefined1 *)(lVar1 + 0x206a) = 1;
      return;
    }
  }
  *(undefined2 *)(lVar1 + 0x2068) = 0x100;
  *(undefined1 *)(lVar1 + 0x206a) = 1;
  return;
}


