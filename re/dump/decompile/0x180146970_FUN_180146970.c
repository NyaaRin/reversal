// 0x180146970  FUN_180146970
// size=42 thunk=false
// signature: undefined FUN_180146970()
// status: ok


undefined8 FUN_180146970(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_1803fa358 == (longlong *)0x0) {
    return 0;
  }
  uVar1 = (**(code **)(*DAT_1803fa358 + 0x100))(DAT_1803fa358,param_1);
  return uVar1;
}


