// 0x1802c15f0  FUN_1802c15f0
// size=94 thunk=false
// signature: undefined FUN_1802c15f0()
// status: ok


void FUN_1802c15f0(undefined4 param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xec0) + 0x1520);
  FUN_18027f740(0);
  piVar1 = (int *)(lVar2 + 0x1a0);
  *piVar1 = *piVar1 + 1;
  FUN_18027af00(param_1);
  return;
}


