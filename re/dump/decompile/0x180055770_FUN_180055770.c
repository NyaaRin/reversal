// 0x180055770  FUN_180055770
// size=189 thunk=false
// signature: undefined FUN_180055770()
// status: ok


undefined8 FUN_180055770(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    return 0;
  }
  cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,4);
  if (cVar2 != '\0') {
    lVar5 = (**(code **)(*plVar4 + 0xb8))(plVar4,1,0);
    if ((lVar5 != 0) && (DAT_1803fa668 != 0)) {
      pcVar1 = *(code **)(*plVar4 + 0xf8);
      uVar3 = FUN_180053ec0(lVar5);
      (*pcVar1)(plVar4,uVar3);
      return 1;
    }
  }
  (**(code **)(*plVar4 + 0xf8))(plVar4,0);
  return 1;
}


