// 0x180279900  FUN_180279900
// size=124 thunk=false
// signature: undefined FUN_180279900()
// status: ok


void FUN_180279900(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  *(uint *)(lVar2 + 0x1f48) = *(uint *)(lVar2 + 0x1f48) | 0x10;
  uVar1 = *param_2;
  *(undefined8 *)(lVar2 + 0x1f8c) = *param_1;
  *(undefined8 *)(lVar2 + 0x1f94) = uVar1;
  *(undefined8 *)(lVar2 + 0x1fa0) = 0;
  *(undefined8 *)(lVar2 + 0x1fa8) = 0;
  return;
}


