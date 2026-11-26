// 0x1800f5730  FUN_1800f5730
// size=75 thunk=false
// signature: undefined FUN_1800f5730()
// status: ok


void FUN_1800f5730(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x40));
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  FUN_18020e450(param_1 + 0x18);
  return;
}


