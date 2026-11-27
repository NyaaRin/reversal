// 0x1800b9fe0  FUN_1800b9fe0
// size=42 thunk=false
// signature: undefined FUN_1800b9fe0()
// status: ok


undefined8 FUN_1800b9fe0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((DAT_1803f9250 == (longlong *)0x0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*DAT_1803f9250 + 0xe0))();
  }
  return uVar1;
}


