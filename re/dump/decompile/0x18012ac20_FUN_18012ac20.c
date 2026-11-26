// 0x18012ac20  FUN_18012ac20
// size=29 thunk=false
// signature: undefined FUN_18012ac20()
// status: ok


undefined8 FUN_18012ac20(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x188))();
  }
  return uVar1;
}


