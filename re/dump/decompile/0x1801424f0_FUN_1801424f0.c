// 0x1801424f0  FUN_1801424f0
// size=31 thunk=false
// signature: undefined FUN_1801424f0()
// status: ok


undefined8 FUN_1801424f0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == (longlong *)0x0) || (param_2 == 0)) {
    uVar1 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x38))();
    uVar1 = 1;
  }
  return uVar1;
}


