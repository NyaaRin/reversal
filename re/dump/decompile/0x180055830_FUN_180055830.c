// 0x180055830  FUN_180055830
// size=188 thunk=false
// signature: undefined FUN_180055830()
// status: ok


undefined8 FUN_180055830(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  BOOL BVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    if (DAT_1803fa618 == (HWND)0x0) {
      (**(code **)(*plVar4 + 0xf8))(plVar4,0);
      return 1;
    }
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,1);
    if (cVar2 == '\0') {
      cVar2 = '\x01';
    }
    else {
      cVar2 = (**(code **)(*plVar4 + 200))(plVar4,1);
    }
    pcVar1 = *(code **)(*plVar4 + 0xf8);
    BVar3 = SetWindowDisplayAffinity(DAT_1803fa618,-(uint)(cVar2 != '\0') & 0x11);
    (*pcVar1)(plVar4,BVar3 != 0);
    return 1;
  }
  return 0;
}


