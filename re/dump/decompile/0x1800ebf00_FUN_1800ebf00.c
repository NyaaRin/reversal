// 0x1800ebf00  FUN_1800ebf00
// size=126 thunk=false
// signature: undefined FUN_1800ebf00()
// status: ok


void FUN_1800ebf00(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  iVar1 = *(int *)(*(longlong *)(lVar2 + 0xec0) + 0x2508);
  if ((((iVar1 != 3) && (iVar1 != 4)) && (iVar1 != 5)) && (iVar1 != 6)) {
    return;
  }
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0xec0) + 0x2508) = 0;
  return;
}


