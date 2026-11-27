// 0x1801973a0  FUN_1801973a0
// size=189 thunk=false
// signature: undefined FUN_1801973a0()
// status: ok


undefined8 *
FUN_1801973a0(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(char *)((longlong)param_2 + 0x24) == '\0') {
    plVar1 = param_2 + 2;
    plVar3 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      plVar3 = (longlong *)*param_2;
    }
    if ((*plVar1 != 8) || (param_4 = 0x6b636162706f6f6c, *plVar3 != 0x6b636162706f6f6c)) {
      if (0xf < (ulonglong)param_2[3]) {
        param_2 = (longlong *)*param_2;
      }
      if (*plVar1 == 9) {
        lVar2 = *param_2 + -0x736f686c61636f6c;
        if (lVar2 == 0) {
          lVar2 = (ulonglong)*(byte *)(param_2 + 1) - 0x74;
        }
        if (lVar2 == 0) goto LAB_180197428;
      }
      FUN_18016d4c0(param_1);
      return param_1;
    }
  }
LAB_180197428:
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_18001d080(param_1,"localhost",9,param_4,0);
  return param_1;
}


