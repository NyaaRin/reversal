// 0x1801aa400  FUN_1801aa400
// size=98 thunk=false
// signature: undefined FUN_1801aa400()
// status: ok


void FUN_1801aa400(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  param_1 = (longlong *)*param_1;
  plVar3 = (longlong *)param_1[1];
  cVar1 = *(char *)((longlong)plVar3 + 0x19);
  plVar2 = param_1;
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
  if (((*(char *)((longlong)plVar2 + 0x19) == '\0') && ((ulonglong)plVar2[4] <= param_2)) &&
     (plVar2 != param_1)) {
    plVar3 = plVar2 + 5;
    if (0xf < (ulonglong)plVar2[8]) {
      plVar3 = (longlong *)*plVar3;
    }
                    /* WARNING: Could not recover jumptable at 0x0001801aa45a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    strncpy_s(&DAT_180400ec0,0x200,(char *)plVar3,0xffffffffffffffff);
    return;
  }
  return;
}


