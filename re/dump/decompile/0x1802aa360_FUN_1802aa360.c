// 0x1802aa360  FUN_1802aa360
// size=93 thunk=false
// signature: undefined FUN_1802aa360()
// status: ok


int * FUN_1802aa360(int param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (param_1 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0xec0);
    piVar1 = (int *)(lVar2 + 0x2420);
    if ((*piVar1 == param_1) && (*(char *)(lVar2 + 0x2424) != '\0')) {
      return piVar1;
    }
  }
  return (int *)0x0;
}


