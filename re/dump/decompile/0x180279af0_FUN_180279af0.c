// 0x180279af0  FUN_180279af0
// size=145 thunk=false
// signature: undefined FUN_180279af0()
// status: ok


void FUN_180279af0(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  iVar1 = *(int *)(lVar2 + 0x1ff8);
  if (iVar1 <= *(short *)(*(longlong *)(lVar2 + 0x28d8) + 0xc)) {
    FUN_18027e9c0("Calling PopFocusScope() too many times!");
    return;
  }
  *(int *)(lVar2 + 0x1ff8) = iVar1 + -1;
  if (iVar1 + -1 != 0) {
    *(undefined4 *)(lVar2 + 0x1eb4) =
         *(undefined4 *)(*(longlong *)(lVar2 + 0x2000) + -0x10 + (longlong)iVar1 * 8);
    return;
  }
  *(undefined4 *)(lVar2 + 0x1eb4) = 0;
  return;
}


