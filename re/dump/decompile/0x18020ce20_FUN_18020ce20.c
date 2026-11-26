// 0x18020ce20  FUN_18020ce20
// size=72 thunk=false
// signature: undefined FUN_18020ce20()
// status: ok


longlong * FUN_18020ce20(longlong *param_1,longlong *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  param_1 = (longlong *)*param_1;
  plVar1 = (longlong *)param_1[1];
  plVar3 = param_1;
  if (*(char *)((longlong)plVar1 + 0x19) == '\0') {
    plVar2 = param_1;
    do {
      plVar3 = plVar1;
      if ((ulonglong)plVar1[4] < *param_3) {
        plVar1 = plVar1 + 2;
        plVar3 = plVar2;
      }
      plVar1 = (longlong *)*plVar1;
      plVar2 = plVar3;
    } while (*(char *)((longlong)plVar1 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar3 + 0x19) == '\0') && ((ulonglong)plVar3[4] <= *param_3)) {
    *param_2 = (longlong)plVar3;
    return param_2;
  }
  *param_2 = (longlong)param_1;
  return param_2;
}


