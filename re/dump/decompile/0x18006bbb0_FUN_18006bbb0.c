// 0x18006bbb0  FUN_18006bbb0
// size=477 thunk=false
// signature: undefined FUN_18006bbb0()
// status: ok


int FUN_18006bbb0(void *param_1,longlong param_2,int param_3,int *param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  BOOL BVar6;
  int iVar7;
  ulonglong uVar8;
  UINT_PTR ucb;
  int iVar9;
  ulonglong uVar10;
  byte *lp;
  int iVar11;
  int iVar12;
  
  if ((param_1 == (void *)0x0) || (BVar6 = IsBadReadPtr(param_1,0x58), BVar6 != 0)) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)((longlong)param_1 + 0x20);
    if (iVar11 - 1U < 0x1000000) {
      uVar3 = *(uint *)((longlong)param_1 + 0x44);
      uVar10 = (ulonglong)(int)uVar3;
      if (uVar3 < 0x21) {
        uVar4 = *(uint *)((longlong)param_1 + 0x40);
        lp = *(byte **)((longlong)param_1 + 0x48);
        if (((lp == (byte *)0x0) ||
            (pbVar5 = *(byte **)((longlong)param_1 + 0x50), pbVar5 == (byte *)0x0)) || (pbVar5 < lp)
           ) {
          iVar11 = 0;
        }
        else {
          lVar1 = uVar10 + ((longlong)pbVar5 - (longlong)lp) * 8;
          iVar12 = (int)lVar1;
          if (iVar11 <= lVar1) {
            iVar12 = iVar11;
          }
          if (iVar12 < 1) {
            iVar11 = 0;
          }
          else {
            iVar7 = (int)(iVar12 + 7 + (iVar12 + 7 >> 0x1f & 7U)) >> 3;
            if (param_3 < iVar7) {
              iVar7 = param_3;
            }
            ucb = (longlong)iVar7 + 4U;
            if (pbVar5 < lp + (longlong)iVar7 + 4U) {
              ucb = (longlong)pbVar5 - (longlong)lp;
            }
            if ((ucb == 0) || (BVar6 = IsBadReadPtr(lp,ucb), BVar6 == 0)) {
              if (uVar3 == 0x20) {
                uVar8 = 0xffffffff;
              }
              else if (uVar3 == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = (ulonglong)((1 << ((byte)uVar3 & 0x1f)) - 1);
              }
              uVar8 = uVar4 & uVar8;
              for (iVar11 = 0; iVar11 < iVar7; iVar11 = iVar11 + 1) {
                while (iVar9 = (int)uVar10, iVar9 < 8) {
                  if (pbVar5 <= lp) {
                    if (iVar9 < 8) goto LAB_18006bd44;
                    break;
                  }
                  bVar2 = *lp;
                  lp = lp + 1;
                  uVar8 = (ulonglong)bVar2 << ((byte)uVar10 & 0x3f) | uVar8;
                  uVar10 = (ulonglong)(iVar9 + 8);
                }
                *(char *)(iVar11 + param_2) = (char)uVar8;
                uVar8 = uVar8 >> 8;
                uVar10 = (ulonglong)(iVar9 - 8);
              }
LAB_18006bd44:
              if (iVar11 < 1) {
                iVar11 = 0;
              }
              else if (param_4 != (int *)0x0) {
                *param_4 = iVar12;
              }
            }
            else {
              iVar11 = 0;
            }
          }
        }
      }
      else {
        iVar11 = 0;
      }
    }
    else {
      iVar11 = 0;
    }
  }
  return iVar11;
}


