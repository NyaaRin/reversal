// 0x180053110  FUN_180053110
// size=161 thunk=false
// signature: undefined FUN_180053110()
// status: ok


undefined8 FUN_180053110(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803eb490 == '\0') {
      (**(code **)(*plVar1 + 0xe0))();
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4e4);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4e8);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803eb4ec);
    return 3;
  }
  return 0;
}


