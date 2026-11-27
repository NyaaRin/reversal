// 0x180283d20  FUN_180283d20
// size=227 thunk=false
// signature: undefined FUN_180283d20()
// status: ok


void FUN_180283d20(int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  if (param_1 == 0) {
    lVar3 = *(longlong *)(lVar2 + 0x2070);
    lVar4 = *(longlong *)(lVar3 + 1000);
    if ((lVar4 == 0) || (*(char *)(lVar4 + 0xcd) == '\0')) {
      lVar4 = lVar3;
    }
    *(longlong *)(lVar2 + 0x2070) = lVar4;
    *(undefined8 *)(lVar2 + 0x20c8) = 0xffffffffffffffff;
    if ((lVar3 != 0) && ((*(byte *)(lVar2 + 0x28e4) & 4) != 0)) {
      FUN_180289170("[focus] NavRestoreLayer: from \"%s\" to SetNavWindow(\"%s\")\n",
                    *(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar4 + 8));
    }
  }
  lVar3 = *(longlong *)(lVar2 + 0x2070);
  iVar1 = *(int *)(lVar3 + 0x3f0 + (longlong)param_1 * 4);
  if (iVar1 != 0) {
    FUN_180282d70(iVar1,param_1,0,(longlong)param_1 * 0x10 + 0x3f8 + lVar3);
    return;
  }
  *(int *)(lVar2 + 0x207c) = param_1;
  FUN_180283e70(lVar3,1);
  return;
}


