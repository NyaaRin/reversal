// 0x18027ae00  FUN_18027ae00
// size=247 thunk=false
// signature: undefined FUN_18027ae00()
// status: ok


void FUN_18027ae00(undefined4 param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  void *_Dst;
  int iVar5;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
  uVar3 = FUN_18027aaa0(lVar2,param_1);
  iVar1 = *(int *)(lVar2 + 0x10c);
  if (*(int *)(lVar2 + 0x108) == iVar1) {
    iVar5 = *(int *)(lVar2 + 0x108) + 1;
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
      if (*(void **)(lVar2 + 0x110) != (void *)0x0) {
        memcpy(_Dst,*(void **)(lVar2 + 0x110),(longlong)*(int *)(lVar2 + 0x108) << 2);
        FUN_18026f680(*(undefined8 *)(lVar2 + 0x110));
      }
      *(void **)(lVar2 + 0x110) = _Dst;
      *(int *)(lVar2 + 0x10c) = iVar5;
    }
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x110) + (longlong)*(int *)(lVar2 + 0x108) * 4) = uVar3;
  *(int *)(lVar2 + 0x108) = *(int *)(lVar2 + 0x108) + 1;
  return;
}


