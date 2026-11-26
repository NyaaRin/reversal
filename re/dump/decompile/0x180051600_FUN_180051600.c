// 0x180051600  FUN_180051600
// size=150 thunk=false
// signature: undefined FUN_180051600()
// status: ok


undefined8 FUN_180051600(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  double dVar6;
  
  plVar5 = (longlong *)FUN_180039770();
  if (((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) && (DAT_1803ff8ec != '\0')) {
    pcVar1 = *(code **)(*plVar5 + 0xf8);
    cVar2 = (**(code **)(*plVar5 + 0x138))(plVar5,1,3);
    if (cVar2 == '\0') {
      iVar4 = 0;
    }
    else {
      dVar6 = (double)(**(code **)(*plVar5 + 0xc0))(plVar5,1);
      iVar4 = (int)dVar6;
    }
    uVar3 = FUN_18027bce0(iVar4,0,0);
    (*pcVar1)(plVar5,uVar3);
    return 1;
  }
  return 0;
}


