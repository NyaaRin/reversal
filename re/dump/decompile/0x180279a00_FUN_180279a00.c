// 0x180279a00  FUN_180279a00
// size=239 thunk=false
// signature: undefined FUN_180279a00()
// status: ok


void FUN_180279a00(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  void *_Dst;
  int iVar6;
  
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar3 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar3 = *(longlong *)(lVar3 + 0xec0);
  iVar1 = *(int *)(lVar3 + 0x1ffc);
  uVar2 = *(undefined4 *)(*(longlong *)(lVar3 + 0x1520) + 0x10);
  if (*(int *)(lVar3 + 0x1ff8) == iVar1) {
    iVar6 = *(int *)(lVar3 + 0x1ff8) + 1;
    if (iVar1 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar1 / 2 + iVar1;
    }
    if (iVar6 < iVar5) {
      iVar6 = iVar5;
    }
    if (iVar1 < iVar6) {
      _Dst = (void *)FUN_18026f580((longlong)iVar6 << 3);
      if (*(void **)(lVar3 + 0x2000) != (void *)0x0) {
        memcpy(_Dst,*(void **)(lVar3 + 0x2000),(longlong)*(int *)(lVar3 + 0x1ff8) << 3);
        FUN_18026f680(*(undefined8 *)(lVar3 + 0x2000));
      }
      *(void **)(lVar3 + 0x2000) = _Dst;
      *(int *)(lVar3 + 0x1ffc) = iVar6;
    }
  }
  iVar1 = *(int *)(lVar3 + 0x1ff8);
  lVar4 = *(longlong *)(lVar3 + 0x2000);
  *(undefined4 *)(lVar4 + (longlong)iVar1 * 8) = param_1;
  *(undefined4 *)(lVar4 + 4 + (longlong)iVar1 * 8) = uVar2;
  *(int *)(lVar3 + 0x1ff8) = *(int *)(lVar3 + 0x1ff8) + 1;
  *(undefined4 *)(lVar3 + 0x1eb4) = param_1;
  return;
}


