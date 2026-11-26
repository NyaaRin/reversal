// 0x180052a30  FUN_180052a30
// size=68 thunk=false
// signature: undefined FUN_180052a30()
// status: ok


undefined8 FUN_180052a30(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803de068);
    return 1;
  }
  return 0;
}


