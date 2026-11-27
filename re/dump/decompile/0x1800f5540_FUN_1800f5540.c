// 0x1800f5540  FUN_1800f5540
// size=74 thunk=false
// signature: undefined FUN_1800f5540()
// status: ok


void FUN_1800f5540(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x60);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  FUN_18020d4a0(param_1);
  return;
}


