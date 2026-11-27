// 0x180231a60  FUN_180231a60
// size=751 thunk=false
// signature: undefined FUN_180231a60()
// status: ok


void FUN_180231a60(int *param_1,int *param_2,int *param_3,longlong param_4,longlong param_5,
                  int *param_6,longlong param_7,longlong *param_8)

{
  int *_Dst;
  int iVar1;
  int iVar2;
  int *piVar3;
  ulonglong uVar4;
  size_t _Size;
  longlong lVar5;
  int *piVar6;
  ulonglong uVar7;
  longlong lVar8;
  int *piVar9;
  
  if ((param_5 < param_4) || (param_7 < param_4)) {
    if (param_7 < param_5) {
      if (param_5 < param_4) {
        lVar8 = param_5 >> 1;
        uVar4 = (longlong)param_2 - (longlong)param_1 >> 2;
        piVar3 = param_1;
        if (0 < (longlong)uVar4) {
          do {
            uVar7 = uVar4 >> 1;
            if (*(int *)(*param_8 + (longlong)param_2[lVar8] * 4) <=
                *(int *)(*param_8 + (longlong)piVar3[uVar7] * 4)) {
              piVar3 = piVar3 + uVar7 + 1;
              uVar7 = uVar4 + (-1 - uVar7);
            }
            uVar4 = uVar7;
          } while (0 < (longlong)uVar7);
        }
        lVar5 = (longlong)piVar3 - (longlong)param_1 >> 2;
        piVar6 = param_2 + lVar8;
      }
      else {
        lVar5 = param_4 >> 1;
        uVar4 = (longlong)param_3 - (longlong)param_2 >> 2;
        piVar6 = param_2;
        if (0 < (longlong)uVar4) {
          do {
            uVar7 = uVar4 >> 1;
            if (*(int *)(*param_8 + (longlong)param_1[lVar5] * 4) <
                *(int *)(*param_8 + (longlong)piVar6[uVar7] * 4)) {
              piVar6 = piVar6 + uVar7 + 1;
              uVar7 = uVar4 + (-1 - uVar7);
            }
            uVar4 = uVar7;
          } while (0 < (longlong)uVar7);
        }
        piVar3 = param_1 + lVar5;
        lVar8 = (longlong)piVar6 - (longlong)param_2 >> 2;
      }
      FUN_18023cc90(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar3,piVar6,
                    lVar5,lVar8);
    }
    else {
      memmove(param_6,param_2,(longlong)param_3 - (longlong)param_2);
      piVar6 = param_3 + -1;
      *piVar6 = param_2[-1];
      piVar3 = param_2 + -2;
      piVar9 = (int *)((longlong)param_6 + (((longlong)param_3 - (longlong)param_2) - 4U));
      while( true ) {
        while( true ) {
          iVar1 = *piVar9;
          if (*(int *)(*param_8 + (longlong)iVar1 * 4) <= *(int *)(*param_8 + (longlong)*piVar3 * 4)
             ) break;
          piVar6[-1] = *piVar3;
          if (param_1 == piVar3) {
            piVar6[-2] = *piVar9;
            memmove((void *)((longlong)(piVar6 + -2) - ((longlong)piVar9 - (longlong)param_6)),
                    param_6,(longlong)piVar9 - (longlong)param_6);
            return;
          }
          piVar3 = piVar3 + -1;
          piVar6 = piVar6 + -1;
        }
        piVar9 = piVar9 + -1;
        piVar6[-1] = iVar1;
        if (param_6 == piVar9) break;
        piVar6 = piVar6 + -1;
      }
      piVar6[-2] = *piVar3;
      memmove((void *)((longlong)(piVar6 + -2) - ((longlong)piVar3 - (longlong)param_1)),param_1,
              (longlong)piVar3 - (longlong)param_1);
      *param_1 = *param_6;
    }
  }
  else {
    _Size = (longlong)param_2 - (longlong)param_1;
    memmove(param_6,param_1,_Size);
    *param_1 = *param_2;
    piVar3 = (int *)((longlong)param_6 + (_Size - 4));
    param_2 = param_2 + 1;
    piVar6 = param_6;
    piVar9 = param_1 + 1;
    do {
      while( true ) {
        _Dst = piVar9 + 1;
        iVar1 = *piVar6;
        iVar2 = *param_2;
        if (*(int *)(*param_8 + (longlong)iVar2 * 4) <= *(int *)(*param_8 + (longlong)iVar1 * 4))
        break;
        param_2 = param_2 + 1;
        *piVar9 = iVar2;
        piVar9 = _Dst;
        if (param_2 == param_3) {
          memmove(_Dst,piVar6,(longlong)param_6 + (_Size - (longlong)piVar6));
          return;
        }
      }
      piVar6 = piVar6 + 1;
      *piVar9 = iVar1;
      piVar9 = _Dst;
    } while (piVar6 != piVar3);
    iVar1 = *piVar3;
    memmove(_Dst,param_2,(longlong)param_3 - (longlong)param_2);
    *(int *)((longlong)_Dst + ((longlong)param_3 - (longlong)param_2)) = iVar1;
  }
  return;
}


