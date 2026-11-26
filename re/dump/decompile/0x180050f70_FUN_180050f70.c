// 0x180050f70  FUN_180050f70
// size=148 thunk=false
// signature: undefined FUN_180050f70()
// status: ok


undefined8 FUN_180050f70(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  int iVar5;
  double dVar6;
  
  plVar4 = (longlong *)FUN_180039770();
  if (((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    pcVar1 = *(code **)(*plVar4 + 0xf8);
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,3);
    if (cVar2 == '\0') {
      iVar5 = 1;
    }
    else {
      dVar6 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);
      iVar5 = (int)dVar6;
    }
    uVar3 = FUN_1802a5270(iVar5 + -1);
    (*pcVar1)(plVar4,uVar3);
    return 1;
  }
  return 0;
}


