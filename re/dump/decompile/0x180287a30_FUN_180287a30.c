// 0x180287a30  FUN_180287a30
// size=211 thunk=false
// signature: undefined FUN_180287a30()
// status: ok


void FUN_180287a30(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x10) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar1 = *(longlong *)(lVar1 + 0xec0);
  uVar2 = FUN_18026a6a0(0x37,DAT_180380bb0);
  FUN_180295000(param_1,param_2,param_2 + 8,uVar2,param_3,0);
  uVar2 = *(undefined4 *)(lVar1 + 0xd58);
  uVar3 = FUN_18026a6a0(0x36,DAT_180380bb0);
  FUN_180294f00(param_1,param_2,param_2 + 8,uVar3,param_3,uVar2,0);
  return;
}


