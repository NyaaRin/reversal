// 0x1800529f0  FUN_1800529f0
// size=64 thunk=false
// signature: undefined FUN_1800529f0()
// status: ok


undefined8 FUN_1800529f0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf8))(plVar1,DAT_1803de067);
    return 1;
  }
  return 0;
}


