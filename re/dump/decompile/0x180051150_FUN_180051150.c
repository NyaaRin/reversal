// 0x180051150  FUN_180051150
// size=121 thunk=false
// signature: undefined FUN_180051150()
// status: ok


undefined8 FUN_180051150(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    pcVar1 = *(code **)(*plVar3 + 0xf8);
    if (DAT_1803ff8ec != '\0') {
      cVar2 = FUN_18026ee60(0);
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


