// 0x180279080  FUN_180279080
// size=234 thunk=false
// signature: undefined FUN_180279080()
// status: ok


void FUN_180279080(uint param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  if (param_2 == '\0') {
    param_1 = *(uint *)(lVar2 + 0x1eb8) & ~param_1;
  }
  else {
    param_1 = *(uint *)(lVar2 + 0x1eb8) | param_1;
  }
  *(uint *)(lVar2 + 0x1eb8) = param_1;
  iVar1 = *(int *)(lVar2 + 0x200c);
  if (*(int *)(lVar2 + 0x2008) == iVar1) {
    iVar4 = *(int *)(lVar2 + 0x2008) + 1;
    if (iVar1 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar1 / 2 + iVar1;
    }
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    if (iVar1 < iVar4) {
      _Dst = (void *)FUN_18026f580((longlong)iVar4 << 2);
      if (*(void **)(lVar2 + 0x2010) != (void *)0x0) {
        memcpy(_Dst,*(void **)(lVar2 + 0x2010),(longlong)*(int *)(lVar2 + 0x2008) << 2);
        FUN_18026f680(*(undefined8 *)(lVar2 + 0x2010));
      }
      *(void **)(lVar2 + 0x2010) = _Dst;
      *(int *)(lVar2 + 0x200c) = iVar4;
    }
  }
  *(uint *)(*(longlong *)(lVar2 + 0x2010) + (longlong)*(int *)(lVar2 + 0x2008) * 4) = param_1;
  *(int *)(lVar2 + 0x2008) = *(int *)(lVar2 + 0x2008) + 1;
  return;
}


