// 0x18026f490  FUN_18026f490
// size=114 thunk=false
// signature: undefined FUN_18026f490()
// status: ok


void FUN_18026f490(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  *(undefined4 *)(lVar1 + 0x1ef8) = param_1;
  *(undefined4 *)(lVar1 + 0x1efc) = param_2;
  *(undefined4 *)(lVar1 + 0x1f00) = param_3;
  uVar2 = *param_4;
  uVar3 = param_4[1];
  *(undefined8 *)(lVar1 + 0x1f14) = uVar2;
  *(undefined8 *)(lVar1 + 0x1f1c) = uVar3;
  *(undefined8 *)(lVar1 + 0x1f04) = uVar2;
  *(undefined8 *)(lVar1 + 0x1f0c) = uVar3;
  return;
}


