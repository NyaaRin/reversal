// 0x1801aa240  FUN_1801aa240
// size=85 thunk=false
// signature: undefined FUN_1801aa240()
// status: ok


void FUN_1801aa240(longlong *param_1,ulonglong param_2,undefined1 *param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  param_1 = (longlong *)*param_1;
  plVar4 = (longlong *)param_1[1];
  cVar1 = *(char *)((longlong)plVar4 + 0x19);
  plVar2 = param_1;
  while (cVar1 == '\0') {
    plVar5 = plVar4;
    if ((ulonglong)plVar4[4] < param_2) {
      plVar4 = plVar4 + 2;
      plVar5 = plVar2;
    }
    plVar4 = (longlong *)*plVar4;
    plVar2 = plVar5;
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
  }
  if (((*(char *)((longlong)plVar2 + 0x19) == '\0') && ((ulonglong)plVar2[4] <= param_2)) &&
     (plVar2 != param_1)) {
    uVar3 = FUN_1801aa170(plVar2 + 5,*param_3);
    *param_3 = uVar3;
  }
  return;
}


