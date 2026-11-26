// 0x1801201c0  FUN_1801201c0
// size=55 thunk=false
// signature: undefined FUN_1801201c0()
// status: ok


undefined8 FUN_1801201c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if ((DAT_1803fa610 == (longlong *)0x0) || (param_4 == 0)) {
    uVar1 = 0;
  }
  else {
    (**(code **)(*DAT_1803fa610 + 0x20))(DAT_1803fa610,param_1,0x400b,param_3,param_4);
    uVar1 = 1;
  }
  return uVar1;
}


