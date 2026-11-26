// 0x1800e99e0  FUN_1800e99e0
// size=68 thunk=false
// signature: undefined FUN_1800e99e0()
// status: ok


undefined8 FUN_1800e99e0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_18040a618);
    return 1;
  }
  return 0;
}


