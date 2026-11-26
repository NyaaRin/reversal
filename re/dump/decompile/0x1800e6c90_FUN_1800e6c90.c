// 0x1800e6c90  FUN_1800e6c90
// size=96 thunk=false
// signature: undefined FUN_1800e6c90()
// status: ok


undefined8 FUN_1800e6c90(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803ff960 == (int *)0x0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*DAT_1803ff960);
    return 1;
  }
  return 0;
}


