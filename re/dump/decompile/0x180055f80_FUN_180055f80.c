// 0x180055f80  FUN_180055f80
// size=95 thunk=false
// signature: undefined FUN_180055f80()
// status: ok


undefined8 FUN_180055f80(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803fa608 == (float *)0x0) {
      (**(code **)(*plVar1 + 0xe0))(plVar1);
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*DAT_1803fa608);
    return 1;
  }
  return 0;
}


