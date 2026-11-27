// 0x180279880  FUN_180279880
// size=120 thunk=false
// signature: undefined FUN_180279880()
// status: ok


void FUN_180279880(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  *(uint *)(lVar1 + 0x1f48) = *(uint *)(lVar1 + 0x1f48) | 2;
  iVar2 = 1;
  if (param_2 != 0) {
    iVar2 = param_2;
  }
  *(undefined8 *)(lVar1 + 0x1f68) = *param_1;
  *(int *)(lVar1 + 0x1f50) = iVar2;
  return;
}


