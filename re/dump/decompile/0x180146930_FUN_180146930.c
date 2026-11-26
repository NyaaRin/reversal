// 0x180146930  FUN_180146930
// size=52 thunk=false
// signature: undefined FUN_180146930()
// status: ok


undefined8 FUN_180146930(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((DAT_1803fa358 == (longlong *)0x0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*DAT_1803fa358 + 0x118))(DAT_1803fa358,param_1,&DAT_1803589e8,param_2);
  }
  return uVar1;
}


