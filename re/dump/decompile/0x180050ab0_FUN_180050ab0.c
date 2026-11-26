// 0x180050ab0  FUN_180050ab0
// size=139 thunk=false
// signature: undefined FUN_180050ab0()
// status: ok


undefined8 FUN_180050ab0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    if (DAT_1803ff8ec == '\0') {
      (**(code **)(*plVar2 + 0xf8))(plVar2,0);
      return 1;
    }
    cVar1 = FUN_180280a90(0);
    if (cVar1 != '\0') {
      FUN_180049be0(7);
    }
    (**(code **)(*plVar2 + 0xf8))(plVar2,cVar1);
    return 1;
  }
  return 0;
}


