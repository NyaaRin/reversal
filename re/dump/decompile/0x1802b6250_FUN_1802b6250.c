// 0x1802b6250  FUN_1802b6250
// size=650 thunk=false
// signature: undefined FUN_1802b6250()
// status: ok


void FUN_1802b6250(longlong param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  void *_Dst;
  int iVar9;
  
  lVar6 = (longlong)(short)param_2[0x28e];
  if ((short)param_2[0x28e] != 0) {
    sVar1 = *(short *)((longlong)param_2 + 0xa3a);
    iVar5 = param_2[lVar6 * 4 + 6];
    iVar2 = param_2[lVar6 * 4 + 7];
    iVar3 = param_2[lVar6 * 4 + 4];
    iVar4 = param_2[lVar6 * 4 + 5];
    param_2[(longlong)sVar1 * 4 + 7] = -1;
    param_2[(longlong)sVar1 * 4 + 5] = iVar5;
    param_2[(longlong)sVar1 * 4 + 6] = iVar4;
    param_2[(longlong)sVar1 * 4 + 4] = iVar3;
    if (iVar5 != 0) {
      if (param_2[0x28f] + iVar5 < 999) {
        iVar7 = param_2[0x290];
        if (iVar7 < param_2[0x28f] + iVar5) {
          do {
            if (*(short *)((longlong)param_2 + 0xa3a) == 99) {
              return;
            }
            if (*(short *)((longlong)param_2 + 0xa3a) < 99) {
              if (-1 < param_2[0x193]) {
                iVar9 = param_2[0x191];
                iVar7 = iVar7 + iVar9;
                param_2[0x290] = iVar7;
                memmove((void *)((longlong)param_2 + (longlong)iVar7 + 0x650),
                        (void *)(((longlong)iVar7 - (longlong)iVar9) + 0x650 + (longlong)param_2),
                        (longlong)(999 - iVar7));
                for (iVar7 = (int)*(short *)((longlong)param_2 + 0xa3a); iVar7 < 0x62;
                    iVar7 = iVar7 + 1) {
                  if (-1 < param_2[(longlong)iVar7 * 4 + 0xb]) {
                    param_2[(longlong)iVar7 * 4 + 0xb] = param_2[(longlong)iVar7 * 4 + 0xb] + iVar9;
                  }
                }
              }
              memmove(param_2 + (longlong)*(short *)((longlong)param_2 + 0xa3a) * 4 + 8 + 4,
                      param_2 + (longlong)*(short *)((longlong)param_2 + 0xa3a) * 4 + 8,
                      (longlong)(0x62 - *(short *)((longlong)param_2 + 0xa3a)) << 4);
              *(short *)((longlong)param_2 + 0xa3a) = *(short *)((longlong)param_2 + 0xa3a) + 1;
            }
            iVar7 = param_2[0x290];
          } while (iVar7 < param_2[0x28f] + iVar5);
        }
        sVar1 = *(short *)((longlong)param_2 + 0xa3a);
        iVar9 = 0;
        param_2[(longlong)sVar1 * 4 + 7] = iVar7 - iVar5;
        param_2[0x290] = param_2[0x290] - iVar5;
        if (0 < iVar5) {
          do {
            iVar7 = iVar3 + iVar9;
            iVar8 = param_2[(longlong)sVar1 * 4 + 7] + iVar9;
            iVar9 = iVar9 + 1;
            *(undefined1 *)((longlong)iVar8 + 0x650 + (longlong)param_2) =
                 *(undefined1 *)((longlong)iVar7 + *(longlong *)(param_1 + 0x20));
          } while (iVar9 < iVar5);
        }
      }
      else {
        param_2[(longlong)sVar1 * 4 + 5] = 0;
      }
      _Dst = (void *)((longlong)iVar3 + *(longlong *)(param_1 + 0x30));
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar5),
              (longlong)(((*(int *)(param_1 + 0x18) - iVar5) - iVar3) + 1));
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar5;
      *(undefined2 *)(param_1 + 0x73) = 0x101;
    }
    iVar5 = 0;
    if (iVar4 != 0) {
      iVar5 = FUN_1802b49e0(param_1,iVar3,(longlong)param_2 + (longlong)iVar2 + 0x650,iVar4);
      param_2[0x28f] = param_2[0x28f] - iVar5;
    }
    *param_2 = iVar5 + iVar3;
    *(short *)(param_2 + 0x28e) = (short)param_2[0x28e] + -1;
    *(short *)((longlong)param_2 + 0xa3a) = *(short *)((longlong)param_2 + 0xa3a) + -1;
  }
  return;
}


