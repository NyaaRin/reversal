// 0x180054e70  FUN_180054e70
// size=125 thunk=false
// signature: undefined FUN_180054e70()
// status: ok


undefined8 FUN_180054e70(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_180039770();
  if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803fa668 != (longlong *)0x0))
  {
    pcVar1 = *(code **)(*DAT_1803fa668 + 0x358);
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);
    if (cVar2 == '\0') {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)(*plVar4 + 200))(plVar4,1);
    }
    (*pcVar1)(DAT_1803fa668,uVar3);
  }
  return 0;
}


