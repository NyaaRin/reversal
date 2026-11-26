// 0x180288660  FUN_180288660
// size=140 thunk=false
// signature: undefined FUN_180288660()
// status: ok


int * FUN_180288660(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  lVar2 = *(longlong *)(lVar1 + 0x27d0);
  piVar3 = (int *)0x0;
  if (lVar2 != 0) {
    piVar3 = (int *)(lVar2 + 4);
  }
  while( true ) {
    if (piVar3 == (int *)0x0) {
      return (int *)0x0;
    }
    if ((*piVar3 == param_1) && (*(char *)((longlong)piVar3 + 0xf) == '\0')) break;
    piVar4 = (int *)((longlong)piVar3[-1] + (longlong)piVar3);
    piVar3 = (int *)0x0;
    if (piVar4 != (int *)((longlong)*(int *)(lVar1 + 0x27c8) + 4 + lVar2)) {
      piVar3 = piVar4;
    }
  }
  return piVar3;
}


