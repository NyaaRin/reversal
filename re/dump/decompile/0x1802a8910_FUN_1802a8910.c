// 0x1802a8910  FUN_1802a8910
// size=150 thunk=false
// signature: undefined FUN_1802a8910()
// status: ok


longlong FUN_1802a8910(undefined4 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  iVar3 = param_2 * 0x10 + 0x18;
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  iVar1 = *(int *)(lVar2 + 0x27d8);
  FUN_18028a8d0(lVar2 + 0x27d8,iVar1 + iVar3);
  *(int *)((longlong)iVar1 + *(longlong *)(lVar2 + 0x27e0)) = iVar3;
  lVar2 = *(longlong *)(lVar2 + 0x27e0) + (longlong)iVar1;
  FUN_1802a8860(lVar2 + 4,param_1,param_2,param_2);
  return lVar2 + 4;
}


