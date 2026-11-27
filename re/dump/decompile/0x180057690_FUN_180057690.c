// 0x180057690  FUN_180057690
// size=39 thunk=false
// signature: undefined FUN_180057690()
// status: ok


undefined8 FUN_180057690(longlong param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == 0) || (DAT_1803f9250 == (longlong *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*DAT_1803f9250 + 0x18))(DAT_1803f9250,param_1);
  }
  return uVar1;
}


