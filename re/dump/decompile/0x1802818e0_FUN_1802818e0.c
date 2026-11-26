// 0x1802818e0  FUN_1802818e0
// size=268 thunk=false
// signature: undefined FUN_1802818e0()
// status: ok


bool FUN_1802818e0(uint param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar4 = *(char *)(lVar2 + 0x10);
  if (cVar4 == '\0') {
    __dyn_tls_on_demand_init();
    cVar4 = *(char *)(lVar2 + 0x10);
  }
  lVar3 = *(longlong *)(lVar2 + 0xec0);
  uVar5 = param_1 & 3;
  if ((param_1 & 3) == 0) {
    if ((param_1 & 0xc) == 0) {
      uVar5 = 1;
    }
    else {
      uVar5 = ((int)param_1 >> 2 & 3U) - 1;
    }
  }
  if (cVar4 == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (((*(char *)((longlong)(int)uVar5 + 0xb4e + *(longlong *)(lVar2 + 0xec0)) != '\0') &&
      (cVar4 = FUN_18027deb0(uVar5 + 0x290,0), cVar4 != '\0')) &&
     (cVar4 = FUN_18026ee60(0x20), cVar4 != '\0')) {
    return true;
  }
  if (*(int *)(lVar3 + 0x20b0) != param_2) {
    return false;
  }
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  iVar1 = *(int *)(*(longlong *)(lVar2 + 0xec0) + 0x206c);
  if ((iVar1 == *(int *)(*(longlong *)(lVar2 + 0xec0) + 0x1ef8)) && (iVar1 != 0)) {
    return true;
  }
  return param_2 == *(int *)(*(longlong *)(lVar3 + 0x1520) + 0x8c);
}


