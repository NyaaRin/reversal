// 0x1800e7560  FUN_1800e7560
// size=97 thunk=false
// signature: undefined FUN_1800e7560()
// status: ok


undefined8 FUN_1800e7560(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_180039770();
  if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
    if (DAT_1803ff960 == 0) {
      (**(code **)(*plVar1 + 0xe0))();
      return 1;
    }
    (**(code **)(*plVar1 + 0xf0))(plVar1,(double)*(byte *)(DAT_1803ff960 + 0x35));
    return 1;
  }
  return 0;
}


