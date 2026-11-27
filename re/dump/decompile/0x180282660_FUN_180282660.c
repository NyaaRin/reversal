// 0x180282660  FUN_180282660
// size=193 thunk=false
// signature: undefined FUN_180282660()
// status: ok


void FUN_180282660(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  iVar1 = *(int *)(lVar2 + 0x14c0);
  lVar3 = *(longlong *)(lVar2 + 0x14c8);
  lVar4 = *(longlong *)(lVar3 + -8 + (longlong)iVar1 * 8);
  if (((lVar4 != param_1) && (*(longlong *)(lVar4 + 0x3c0) != param_1)) &&
     (uVar5 = iVar1 - 2, -1 < (int)uVar5)) {
    while (*(longlong *)((ulonglong)uVar5 * 8 + lVar3) != param_1) {
      uVar5 = uVar5 - 1;
      if ((int)uVar5 < 0) {
        return;
      }
    }
    memmove((void *)(lVar3 + (ulonglong)uVar5 * 8),(void *)(lVar3 + (longlong)(int)(uVar5 + 1) * 8),
            (longlong)(int)(~uVar5 + iVar1) << 3);
    *(longlong *)(*(longlong *)(lVar2 + 0x14c8) + -8 + (longlong)*(int *)(lVar2 + 0x14c0) * 8) =
         param_1;
  }
  return;
}


