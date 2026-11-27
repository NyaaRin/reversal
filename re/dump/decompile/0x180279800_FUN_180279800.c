// 0x180279800  FUN_180279800
// size=124 thunk=false
// signature: undefined FUN_180279800()
// status: ok


void FUN_180279800(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar2 = *(longlong *)(lVar2 + 0xec0);
  *(uint *)(lVar2 + 0x1f48) = *(uint *)(lVar2 + 0x1f48) | 1;
  *(undefined8 *)(lVar2 + 0x1f58) = *param_1;
  uVar1 = *param_3;
  iVar3 = 1;
  if (param_2 != 0) {
    iVar3 = param_2;
  }
  *(int *)(lVar2 + 0x1f4c) = iVar3;
  *(undefined8 *)(lVar2 + 0x1f60) = uVar1;
  return;
}


