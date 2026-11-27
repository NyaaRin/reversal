// 0x1800e4bb0  FUN_1800e4bb0
// size=161 thunk=false
// signature: undefined FUN_1800e4bb0()
// status: ok


undefined8 FUN_1800e4bb0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803db610 == '\0') {
      (**(code **)(*plVar1 + 0xe0))();
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db614);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db618);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db61c);
    return 3;
  }
  return 0;
}


