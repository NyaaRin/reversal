// 0x1800552f0  FUN_1800552f0
// size=126 thunk=false
// signature: undefined FUN_1800552f0()
// status: ok


undefined8 FUN_1800552f0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    pcVar1 = *(code **)(*plVar3 + 0xf8);
    if (DAT_1803fa668 != (longlong *)0x0) {
      cVar2 = (**(code **)(*DAT_1803fa668 + 0xd8))();
      if (cVar2 != '\0') {
        (*pcVar1)(plVar3,1);
        return 1;
      }
    }
    (*pcVar1)(plVar3,0);
    return 1;
  }
  return 0;
}


