// 0x180052c10  FUN_180052c10
// size=68 thunk=false
// signature: undefined FUN_180052c10()
// status: ok


undefined8 FUN_180052c10(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4a0);
    return 1;
  }
  return 0;
}


