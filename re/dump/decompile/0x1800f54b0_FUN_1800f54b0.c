// 0x1800f54b0  FUN_1800f54b0
// size=112 thunk=false
// signature: undefined FUN_1800f54b0()
// status: ok


void FUN_1800f54b0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x58);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  FUN_18020d510(param_1);
  return;
}


