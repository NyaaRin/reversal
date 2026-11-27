// 0x18004dbd0  FUN_18004dbd0
// size=188 thunk=false
// signature: undefined FUN_18004dbd0()
// status: ok


undefined8 FUN_18004dbd0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  char *pcVar5;
  char *pcVar6;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    pcVar1 = *(code **)(*plVar4 + 0xf8);
    if (DAT_1803ff8ec == '\0') {
      (*pcVar1)(plVar4,0);
      return 1;
    }
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
    if (cVar2 == '\0') {
      pcVar6 = "button";
    }
    else {
      pcVar5 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
      pcVar6 = "button";
      if (pcVar5 != (char *)0x0) {
        pcVar6 = pcVar5;
      }
    }
    uVar3 = FUN_1802ac330(pcVar6);
    (*pcVar1)(plVar4,uVar3);
    return 1;
  }
  return 0;
}


