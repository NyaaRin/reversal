// 0x1800f56c0  FUN_1800f56c0
// size=107 thunk=false
// signature: undefined FUN_1800f56c0()
// status: ok


void FUN_1800f56c0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_18020d5c0(param_1 + 0x110);
  FUN_18020e450(param_1 + 0xb8);
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  FUN_18020e450(param_1 + 0x48);
  return;
}


