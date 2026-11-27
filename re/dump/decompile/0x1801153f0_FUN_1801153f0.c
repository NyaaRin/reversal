// 0x1801153f0  FUN_1801153f0
// size=36 thunk=false
// signature: undefined FUN_1801153f0()
// status: ok


undefined8 FUN_1801153f0(void)

{
  undefined8 uVar1;
  
  if (DAT_1803fa640 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*DAT_1803fa640 + 0x330))();
  }
  return uVar1;
}


