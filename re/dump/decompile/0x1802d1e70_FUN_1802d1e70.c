// 0x1802d1e70  FUN_1802d1e70
// size=150 thunk=false
// signature: undefined FUN_1802d1e70()
// status: ok


undefined8
FUN_1802d1e70(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  if (*(longlong *)(lVar1 + 0xec0) == 0) {
    return 0;
  }
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  uVar2 = FUN_1802d1f10(param_1,param_2,param_3,param_4,*(longlong *)(lVar1 + 0xec0) + 0x28);
  return uVar2;
}


