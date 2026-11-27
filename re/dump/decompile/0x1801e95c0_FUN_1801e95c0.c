// 0x1801e95c0  FUN_1801e95c0
// size=35 thunk=false
// signature: undefined FUN_1801e95c0()
// status: ok


undefined8 FUN_1801e95c0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    return 0x8876086c;
  }
  uVar1 = (**(code **)(*param_1 + 0x138))();
  return uVar1;
}


