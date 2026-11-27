// 0x1800ea100  FUN_1800ea100
// size=107 thunk=false
// signature: undefined FUN_1800ea100()
// status: ok


undefined8 FUN_1800ea100(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803da700);
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)DAT_1803da704);
    return 2;
  }
  return 0;
}


