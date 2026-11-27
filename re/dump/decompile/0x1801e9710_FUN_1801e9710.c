// 0x1801e9710  FUN_1801e9710
// size=68 thunk=false
// signature: undefined FUN_1801e9710()
// status: ok


void FUN_1801e9710(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = *param_1;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  *(undefined8 *)(lVar2 + 0xec0) = uVar1;
  return;
}


