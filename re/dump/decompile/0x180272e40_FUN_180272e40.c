// 0x180272e40  FUN_180272e40
// size=93 thunk=false
// signature: undefined FUN_180272e40()
// status: ok


longlong FUN_180272e40(void)

{
  longlong lVar1;
  uint7 uVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  uVar2 = (uint7)((ulonglong)lVar1 >> 8);
  if ((*(int *)(lVar1 + 0x1594) != 0) && (*(int *)(lVar1 + 0x1594) == *(int *)(lVar1 + 0x1ef8))) {
    return CONCAT71(uVar2,*(int *)(lVar1 + 0x15c0) != *(int *)(lVar1 + 0x1ef8));
  }
  return (ulonglong)uVar2 << 8;
}


