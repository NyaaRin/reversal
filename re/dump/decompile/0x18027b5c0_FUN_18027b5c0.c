// 0x18027b5c0  FUN_18027b5c0
// size=94 thunk=false
// signature: undefined FUN_18027b5c0()
// status: ok


int FUN_18027b5c0(int param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (param_1 - 1U < 0xfffffffe) {
    return param_1;
  }
  return *(int *)(*(longlong *)(lVar1 + 0xec0) + 0x1eb4);
}


