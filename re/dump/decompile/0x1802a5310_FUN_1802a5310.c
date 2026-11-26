// 0x1802a5310  FUN_1802a5310
// size=167 thunk=false
// signature: undefined FUN_1802a5310()
// status: ok


ulonglong FUN_1802a5310(void)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar2 = *(ulonglong *)(lVar1 + 0xec0);
  lVar1 = *(longlong *)(uVar2 + 0x2368);
  if (lVar1 == 0) {
    return uVar2 & 0xffffffffffffff00;
  }
  if ((*(char *)(lVar1 + 0x23a) == '\0') || (*(int *)(lVar1 + 0x6c) <= *(int *)(lVar1 + 0x74) + 1))
  {
    FUN_1802a4950(0,0);
    iVar3 = 0;
  }
  else {
    if (*(int *)(lVar1 + 0x74) != -1) {
      FUN_1802a55b0(lVar1);
    }
    iVar3 = *(int *)(lVar1 + 0x74) + 1;
  }
  FUN_1802a53c0(lVar1,iVar3);
  return (ulonglong)
         *(byte *)((longlong)*(int *)(lVar1 + 0x74) * 0x74 + 0x6b + *(longlong *)(lVar1 + 0x18));
}


