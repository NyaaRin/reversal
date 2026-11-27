// 0x1802b7000  FUN_1802b7000
// size=166 thunk=false
// signature: undefined FUN_1802b7000()
// status: ok


void FUN_1802b7000(int param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (param_1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0xec0);
    if (*(int *)(lVar1 + 0x252c) == param_1) {
      *(int *)(lVar1 + 0x25b0) = *(int *)(lVar1 + 0x252c);
      if ((*(uint *)(lVar1 + 0x2528) & 0x200) != 0) {
        FUN_18028a8d0(lVar1 + 0x25b8,0);
        return;
      }
      FUN_18028a8d0(lVar1 + 0x25b8,*(int *)(lVar1 + 0x2530) + 1);
      memcpy(*(void **)(lVar1 + 0x25c0),*(void **)(lVar1 + 0x2548),
             (longlong)(*(int *)(lVar1 + 0x2530) + 1));
    }
  }
  return;
}


