// 0x180214490  FUN_180214490
// size=188 thunk=false
// signature: undefined FUN_180214490()
// status: ok


int * FUN_180214490(int *param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  
  piVar4 = param_1;
  if (param_1 != param_2) {
    while (piVar4 = piVar4 + 1, piVar4 != param_2) {
      lVar3 = *param_3;
      iVar1 = *piVar4;
      iVar2 = *(int *)((longlong)iVar1 * 4 + lVar3);
      if (*(int *)(lVar3 + (longlong)*param_1 * 4) < iVar2) {
        memmove((void *)((longlong)piVar4 + (4 - ((longlong)piVar4 - (longlong)param_1))),param_1,
                (longlong)piVar4 - (longlong)param_1);
        *param_1 = iVar1;
      }
      else {
        lVar6 = (longlong)piVar4[-1];
        piVar5 = piVar4 + -1;
        piVar7 = piVar4;
        piVar8 = piVar4;
        if (*(int *)(lVar3 + lVar6 * 4) < iVar2) {
          do {
            piVar8 = piVar5;
            *piVar7 = (int)lVar6;
            lVar6 = (longlong)piVar8[-1];
            piVar5 = piVar8 + -1;
            piVar7 = piVar8;
          } while (*(int *)(*param_3 + lVar6 * 4) < *(int *)(*param_3 + (longlong)iVar1 * 4));
        }
        *piVar8 = iVar1;
      }
    }
  }
  return param_2;
}


