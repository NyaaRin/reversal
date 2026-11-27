// 0x1800ea000  FUN_1800ea000
// size=140 thunk=false
// signature: undefined FUN_1800ea000()
// status: ok


undefined8 FUN_1800ea000(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803fa54c);
    if (DAT_1803fa545 != '\0') {
      (**(code **)(*plVar1 + 0xf0))(plVar1,DAT_180380d08);
      return 2;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,0);
    return 2;
  }
  return 0;
}


