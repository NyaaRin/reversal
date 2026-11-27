// 0x1800e9830  FUN_1800e9830
// size=128 thunk=false
// signature: undefined FUN_1800e9830()
// status: ok


undefined8 FUN_1800e9830(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_2)) {
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803fac60,plVar1,param_4,(double)DAT_1803fac60)
    ;
    return 1;
  }
  return 0;
}


