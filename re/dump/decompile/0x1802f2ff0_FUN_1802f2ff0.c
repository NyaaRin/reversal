// 0x1802f2ff0  FUN_1802f2ff0
// size=107 thunk=false
// signature: undefined FUN_1802f2ff0()
// status: ok


undefined8 FUN_1802f2ff0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  lVar2 = *(longlong *)(lVar1 + 0x10);
  if (*(longlong *)(lVar1 + 8) != lVar2) {
    lVar3 = *(longlong *)(lVar1 + 8);
    *(longlong *)(param_2 + 0x28) = lVar3;
    while (lVar3 != lVar2) {
      FUN_18020e450(lVar3 + 0x28);
      FUN_18020e450(lVar3 + 8);
      lVar3 = lVar3 + 0x50;
      *(longlong *)(param_2 + 0x28) = lVar3;
    }
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar1 + 8);
  }
  return 0;
}


