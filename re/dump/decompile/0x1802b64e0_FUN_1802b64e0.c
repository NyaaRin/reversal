// 0x1802b64e0  FUN_1802b64e0
// size=352 thunk=false
// signature: undefined FUN_1802b64e0()
// status: ok


void FUN_1802b64e0(longlong param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  void *_Dst;
  int iVar9;
  
  lVar8 = (longlong)*(short *)((longlong)param_2 + 0xa3a);
  if (*(short *)((longlong)param_2 + 0xa3a) != 99) {
    sVar1 = (short)param_2[0x28e];
    iVar2 = param_2[lVar8 * 4 + 8];
    iVar3 = param_2[lVar8 * 4 + 9];
    iVar4 = param_2[lVar8 * 4 + 0xb];
    iVar7 = param_2[lVar8 * 4 + 10];
    param_2[(longlong)sVar1 * 4 + 10] = iVar3;
    param_2[(longlong)sVar1 * 4 + 9] = iVar7;
    param_2[(longlong)sVar1 * 4 + 8] = iVar2;
    param_2[(longlong)sVar1 * 4 + 0xb] = -1;
    if (iVar7 != 0) {
      iVar9 = 0;
      if (param_2[0x290] < iVar7 + param_2[0x28f]) {
        (param_2 + (longlong)sVar1 * 4 + 9)[0] = 0;
        (param_2 + (longlong)sVar1 * 4 + 9)[1] = 0;
      }
      else {
        param_2[(longlong)sVar1 * 4 + 0xb] = param_2[0x28f];
        param_2[0x28f] = param_2[0x28f] + iVar7;
        if (0 < param_2[(longlong)sVar1 * 4 + 9]) {
          do {
            iVar5 = param_2[(longlong)sVar1 * 4 + 8] + iVar9;
            iVar6 = param_2[(longlong)sVar1 * 4 + 0xb] + iVar9;
            iVar9 = iVar9 + 1;
            *(undefined1 *)((longlong)iVar6 + 0x650 + (longlong)param_2) =
                 *(undefined1 *)((longlong)iVar5 + *(longlong *)(param_1 + 0x20));
          } while (iVar9 < param_2[(longlong)sVar1 * 4 + 9]);
        }
      }
      _Dst = (void *)((longlong)iVar2 + *(longlong *)(param_1 + 0x30));
      memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar7),
              (longlong)(((*(int *)(param_1 + 0x18) - iVar7) - iVar2) + 1));
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - iVar7;
      *(undefined2 *)(param_1 + 0x73) = 0x101;
    }
    iVar7 = 0;
    if (iVar3 != 0) {
      iVar7 = FUN_1802b49e0(param_1,iVar2,(longlong)param_2 + (longlong)iVar4 + 0x650,iVar3);
      param_2[0x290] = param_2[0x290] + iVar7;
    }
    *param_2 = iVar7 + iVar2;
    *(short *)(param_2 + 0x28e) = (short)param_2[0x28e] + 1;
    *(short *)((longlong)param_2 + 0xa3a) = *(short *)((longlong)param_2 + 0xa3a) + 1;
  }
  return;
}


