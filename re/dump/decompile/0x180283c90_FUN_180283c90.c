// 0x180283c90  FUN_180283c90
// size=131 thunk=false
// signature: undefined FUN_180283c90()
// status: ok


void FUN_180283c90(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  if (((*(longlong *)(lVar1 + 0x2070) == param_1) && (*(char *)(lVar1 + 0x2111) != '\0')) &&
     (*(int *)(lVar1 + 0x207c) == *(int *)(param_1 + 0x170))) {
    *(uint *)(lVar1 + 0x2114) = *(uint *)(lVar1 + 0x2114) & 0xfffffff0;
    *(uint *)(lVar1 + 0x2114) = *(uint *)(lVar1 + 0x2114) | param_2;
  }
  return;
}


