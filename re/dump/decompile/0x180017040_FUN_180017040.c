// 0x180017040  FUN_180017040
// size=44 thunk=false
// signature: undefined FUN_180017040()
// status: ok


undefined8 FUN_180017040(longlong param_1)

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


