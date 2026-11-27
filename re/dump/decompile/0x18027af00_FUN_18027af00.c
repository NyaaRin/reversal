// 0x18027af00  FUN_18027af00
// size=258 thunk=false
// signature: undefined FUN_18027af00()
// status: ok


void FUN_18027af00(int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  void *_Dst;
  int iVar5;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  lVar3 = *(longlong *)(lVar2 + 0x1520);
  if (*(int *)(lVar2 + 0x1578) == param_1) {
    FUN_1802899e0(param_1,0xd,0);
  }
  iVar1 = *(int *)(lVar3 + 0x10c);
  if (*(int *)(lVar3 + 0x108) == iVar1) {
    iVar5 = *(int *)(lVar3 + 0x108) + 1;
    if (iVar1 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar1 / 2 + iVar1;
    }
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    if (iVar1 < iVar5) {
      _Dst = (void *)FUN_18026f580((longlong)iVar5 << 2);
      if (*(void **)(lVar3 + 0x110) != (void *)0x0) {
        memcpy(_Dst,*(void **)(lVar3 + 0x110),(longlong)*(int *)(lVar3 + 0x108) << 2);
        FUN_18026f680(*(undefined8 *)(lVar3 + 0x110));
      }
      *(void **)(lVar3 + 0x110) = _Dst;
      *(int *)(lVar3 + 0x10c) = iVar5;
    }
  }
  *(int *)(*(longlong *)(lVar3 + 0x110) + (longlong)*(int *)(lVar3 + 0x108) * 4) = param_1;
  *(int *)(lVar3 + 0x108) = *(int *)(lVar3 + 0x108) + 1;
  return;
}


