// 0x180052b50  FUN_180052b50
// size=120 thunk=false
// signature: undefined FUN_180052b50()
// status: ok


undefined8 FUN_180052b50(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  pcVar1 = *(code **)(*plVar3 + 0xf8);
  cVar2 = FUN_180051c50();
  if ((cVar2 != '\0') && (DAT_1803ff960 != 0)) {
    (*pcVar1)(plVar3,1);
    return 1;
  }
  (*pcVar1)(plVar3,0);
  return 1;
}


