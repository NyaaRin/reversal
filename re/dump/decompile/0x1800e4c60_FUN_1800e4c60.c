// 0x1800e4c60  FUN_1800e4c60
// size=161 thunk=false
// signature: undefined FUN_1800e4c60()
// status: ok


undefined8 FUN_1800e4c60(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803db610 == '\0') {
      (**(code **)(*plVar1 + 0xe0))();
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db620);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db624);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803db628);
    return 3;
  }
  return 0;
}


