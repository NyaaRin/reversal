// 0x1802194b0  FUN_1802194b0
// size=65 thunk=false
// signature: undefined FUN_1802194b0()
// status: ok


longlong * FUN_1802194b0(longlong *param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  param_1 = (longlong *)*param_1;
  plVar1 = (longlong *)param_1[1];
  plVar2 = param_1;
  if (*(char *)((longlong)plVar1 + 0x19) == '\0') {
    plVar3 = param_1;
    do {
      plVar2 = plVar1;
      if ((ulonglong)plVar1[4] < *param_2) {
        plVar1 = plVar1 + 2;
        plVar2 = plVar3;
      }
      plVar1 = (longlong *)*plVar1;
      plVar3 = plVar2;
    } while (*(char *)((longlong)plVar1 + 0x19) == '\0');
  }
  if ((*(char *)((longlong)plVar2 + 0x19) != '\0') || (*param_2 < (ulonglong)plVar2[4])) {
    plVar2 = param_1;
  }
  return plVar2;
}


