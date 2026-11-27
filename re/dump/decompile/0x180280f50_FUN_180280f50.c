// 0x180280f50  FUN_180280f50
// size=118 thunk=false
// signature: undefined FUN_180280f50()
// status: ok


longlong FUN_180280f50(void)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  uVar3 = *(int *)(lVar1 + 0x2028) - 1;
  if (-1 < (int)uVar3) {
    do {
      lVar2 = *(longlong *)((ulonglong)uVar3 * 0x38 + 8 + *(longlong *)(lVar1 + 0x2030));
      if ((lVar2 != 0) && ((*(uint *)(lVar2 + 0x14) & 0x8000000) != 0)) {
        return lVar2;
      }
      uVar3 = uVar3 - 1;
    } while (-1 < (int)uVar3);
  }
  return 0;
}


