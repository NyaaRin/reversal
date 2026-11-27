// 0x1800c08f0  FUN_1800c08f0
// size=44 thunk=false
// signature: undefined FUN_1800c08f0()
// status: ok


undefined8 FUN_1800c08f0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((DAT_1803fa668 == (longlong *)0x0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    (**(code **)(*DAT_1803fa668 + 0x350))();
    uVar1 = 1;
  }
  return uVar1;
}


