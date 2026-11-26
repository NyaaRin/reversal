// 0x1800e9d60  FUN_1800e9d60
// size=127 thunk=false
// signature: undefined FUN_1800e9d60()
// status: ok


undefined8 FUN_1800e9d60(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    dVar4 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    cVar1 = (**(code **)(*plVar2 + 0x138))(plVar2,2,3);
    if (cVar1 == '\0') {
      iVar3 = 0;
    }
    else {
      dVar5 = (double)(**(code **)(*plVar2 + 0xc0))(plVar2,2);
      iVar3 = (int)dVar5;
    }
    FUN_1800210b0((int)dVar4,iVar3);
  }
  return 0;
}


