// 0x18026f510  FUN_18026f510
// size=108 thunk=false
// signature: undefined FUN_18026f510()
// status: ok


void FUN_18026f510(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  FUN_18026f490(*(undefined4 *)(param_1 + 0x8c),
                *(undefined4 *)(*(longlong *)(lVar1 + 0xec0) + 0x1eb8),
                *(undefined4 *)(param_1 + 0x1e0),param_2);
  return;
}


