// 0x180221960  FUN_180221960
// size=282 thunk=false
// signature: undefined FUN_180221960()
// status: ok


void FUN_180221960(int *param_1,int *param_2,int *param_3,longlong param_4,longlong param_5,
                  undefined8 param_6,undefined8 param_7,longlong *param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  
  if ((param_2 != param_3) && (param_1 != param_2)) {
    iVar1 = *param_2;
    lVar3 = *param_8;
    while (iVar2 = *param_1,
          *(int *)(lVar3 + (longlong)iVar1 * 4) <= *(int *)(lVar3 + (longlong)iVar2 * 4)) {
      param_1 = param_1 + 1;
      param_4 = param_4 + -1;
      if (param_1 == param_2) {
        return;
      }
    }
    if (param_2 != param_3 + -1) {
      piVar5 = param_3;
      piVar4 = param_3 + -1;
      do {
        param_3 = piVar4;
        if (*(int *)(lVar3 + (longlong)param_2[-1] * 4) < *(int *)(lVar3 + (longlong)*param_3 * 4))
        {
          if (param_4 == 1) {
            memmove(param_1,param_2,(longlong)piVar5 - (longlong)param_2);
            *(int *)(((longlong)piVar5 - (longlong)param_2) + (longlong)param_1) = iVar2;
            return;
          }
          FUN_180231a60(param_1,param_2,piVar5,param_4,param_5,param_6,param_7,param_8);
          return;
        }
        param_5 = param_5 + -1;
        piVar5 = param_3;
        piVar4 = param_3 + -1;
      } while (param_2 != param_3 + -1);
    }
    memmove((void *)((longlong)param_3 - ((longlong)param_2 - (longlong)param_1)),param_1,
            (longlong)param_2 - (longlong)param_1);
    *param_1 = iVar1;
  }
  return;
}


