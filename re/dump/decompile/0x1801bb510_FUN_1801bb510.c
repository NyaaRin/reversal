// 0x1801bb510  FUN_1801bb510
// size=95 thunk=false
// signature: undefined FUN_1801bb510()
// status: ok


void FUN_1801bb510(undefined8 *param_1,ulonglong param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)*param_1;
  plVar3 = (longlong *)plVar5[1];
  cVar1 = *(char *)((longlong)plVar3 + 0x19);
  plVar2 = plVar5;
  while (cVar1 == '\0') {
    plVar4 = plVar3;
    if ((ulonglong)plVar3[4] < param_2) {
      plVar3 = plVar3 + 2;
      plVar4 = plVar2;
    }
    plVar3 = (longlong *)*plVar3;
    plVar2 = plVar4;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  if ((((*(char *)((longlong)plVar2 + 0x19) == '\0') && ((ulonglong)plVar2[4] <= param_2)) &&
      (plVar2 != plVar5)) && (plVar5 = plVar2 + 5, (longlong *)param_3 != plVar5)) {
    if (0xf < (ulonglong)plVar2[8]) {
      plVar5 = (longlong *)*plVar5;
    }
    FUN_180212700(param_3,plVar5,plVar2[7]);
    return;
  }
  return;
}


