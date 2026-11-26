// 0x180057360  FUN_180057360
// size=165 thunk=false
// signature: undefined FUN_180057360()
// status: ok


undefined8 FUN_180057360(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  double dVar5;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_1)) {
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,1,3);
    if (cVar2 == '\0') {
      (**(code **)(*plVar4 + 0xe0))();
      return 1;
    }
    dVar5 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,1);
    pcVar1 = *(code **)(*plVar4 + 0xf0);
    uVar3 = FUN_180015e50((longlong)dVar5);
    (*pcVar1)(plVar4,(double)uVar3);
    return 1;
  }
  return 0;
}


