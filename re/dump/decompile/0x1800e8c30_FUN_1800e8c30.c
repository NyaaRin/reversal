// 0x1800e8c30  FUN_1800e8c30
// size=64 thunk=false
// signature: undefined FUN_1800e8c30()
// status: ok


undefined8 FUN_1800e8c30(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803db45d);
    return 1;
  }
  return 0;
}


