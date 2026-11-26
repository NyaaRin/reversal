// 0x180064e50  FUN_180064e50
// size=137 thunk=false
// signature: undefined FUN_180064e50()
// status: ok


undefined8 FUN_180064e50(longlong param_1)

{
  code *pcVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  double dVar5;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 != (longlong *)0x0) && (plVar2[1] == param_1)) {
    pcVar1 = *(code **)(*plVar2 + 0xf0);
    dVar5 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
    iVar3 = 1;
    for (uVar4 = (longlong)dVar5 & 0xffffffff; 0x7f < uVar4; uVar4 = uVar4 >> 7) {
      iVar3 = iVar3 + 1;
    }
    (*pcVar1)(plVar2,(double)iVar3);
    return 1;
  }
  return 0;
}


