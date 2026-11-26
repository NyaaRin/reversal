// 0x18025f400  FUN_18025f400
// size=138 thunk=false
// signature: undefined FUN_18025f400()
// status: ok


void FUN_18025f400(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0xb8);
    *(undefined8 *)(param_1 + 0x138) = 0;
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x110);
  lVar2 = *(longlong *)(param_1 + 0x118);
  if (lVar3 != lVar2) {
    do {
      FUN_18020e450(lVar3);
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != lVar2);
    *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x110);
  }
  *(undefined8 *)(param_1 + 0x138) = 0;
  return;
}


