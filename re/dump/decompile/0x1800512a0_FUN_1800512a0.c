// 0x1800512a0  FUN_1800512a0
// size=194 thunk=false
// signature: undefined FUN_1800512a0()
// status: ok


undefined8 FUN_1800512a0(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  double dVar5;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    pcVar1 = *(code **)(*plVar4 + 0xf8);
    if (DAT_1803ff8ec != '\0') {
      cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,3);
      if (cVar2 == '\0') {
        iVar3 = 0;
      }
      else {
        dVar5 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);
        iVar3 = (int)dVar5;
      }
      cVar2 = FUN_18027bce0(iVar3,0,0);
      if (cVar2 != '\0') {
        cVar2 = FUN_18026ee60(0);
        if (cVar2 != '\0') {
          (*pcVar1)(plVar4,1);
          return 1;
        }
      }
    }
    (*pcVar1)(plVar4,0);
    return 1;
  }
  return 0;
}


