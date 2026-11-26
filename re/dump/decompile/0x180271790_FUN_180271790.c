// 0x180271790  FUN_180271790
// size=193 thunk=false
// signature: undefined FUN_180271790()
// status: ok


void FUN_180271790(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar4 = *(longlong *)(lVar4 + 0xec0);
  *(undefined1 *)(*(longlong *)(lVar4 + 0x1520) + 0xce) = 1;
  lVar4 = *(longlong *)(lVar4 + 0x1520);
  FUN_180292550(*(undefined8 *)(lVar4 + 0x2c8),param_1,param_2,param_3);
  lVar6 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x2c8) + 0xa0);
  lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x2c8) + 0xa8);
  uVar1 = *(undefined4 *)(lVar5 + -0xc + lVar6 * 0x10);
  uVar2 = *(undefined4 *)(lVar5 + -8 + lVar6 * 0x10);
  uVar3 = *(undefined4 *)(lVar5 + -4 + lVar6 * 0x10);
  *(undefined4 *)(lVar4 + 0x268) = *(undefined4 *)(lVar5 + -0x10 + lVar6 * 0x10);
  *(undefined4 *)(lVar4 + 0x26c) = uVar1;
  *(undefined4 *)(lVar4 + 0x270) = uVar2;
  *(undefined4 *)(lVar4 + 0x274) = uVar3;
  return;
}


