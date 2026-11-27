// 0x1802a8a40  FUN_1802a8a40
// size=115 thunk=false
// signature: undefined FUN_1802a8a40()
// status: ok


undefined4 * FUN_1802a8a40(longlong param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 100) != -1) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x10) == '\0') {
      __dyn_tls_on_demand_init();
    }
    puVar2 = (undefined4 *)
             (*(longlong *)(*(longlong *)(lVar1 + 0xec0) + 0x27e0) +
             (longlong)*(int *)(param_1 + 100));
    if (*(int *)(param_1 + 0x6c) <= (int)*(short *)((longlong)puVar2 + 0xe)) {
      return puVar2;
    }
    *puVar2 = 0;
  }
  return (undefined4 *)0x0;
}


