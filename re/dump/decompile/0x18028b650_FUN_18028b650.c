// 0x18028b650  FUN_18028b650
// size=307 thunk=false
// signature: undefined FUN_18028b650()
// status: ok


longlong * FUN_18028b650(longlong *param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  iVar3 = *(int *)((longlong)param_2 + 0xc);
  iVar8 = 0;
  if (iVar3 < 0) {
    iVar8 = iVar3;
  }
  *(int *)(param_2 + 1) = iVar8;
  if (iVar8 < iVar3) {
LAB_18028b680:
    do {
      iVar3 = (int)param_2[1];
      iVar1 = *(int *)((longlong)param_2 + 0xc);
      if (iVar3 < iVar1) {
        lVar5 = *param_2;
        bVar2 = *(byte *)(lVar5 + iVar3);
        if (0x1b < bVar2) {
          if (bVar2 == 0x1e) {
            iVar3 = iVar3 + 1;
            if ((iVar1 < iVar3) || (iVar3 < 0)) {
              *(int *)(param_2 + 1) = iVar1;
            }
            else {
              *(int *)(param_2 + 1) = iVar3;
              iVar7 = iVar3;
              while (iVar3 < iVar1) {
                if (iVar7 < iVar1) {
                  lVar6 = (longlong)iVar3;
                  iVar3 = iVar7 + 1;
                  bVar2 = *(byte *)(lVar6 + lVar5);
                  *(int *)(param_2 + 1) = iVar3;
                  if (((bVar2 & 0xf) == 0xf) || (iVar7 = iVar3, (bVar2 & 0xf0) == 0xf0)) break;
                }
              }
            }
          }
          else {
            FUN_18028b470(param_2);
          }
          goto LAB_18028b680;
        }
        iVar7 = iVar3 + 1;
        *(int *)(param_2 + 1) = iVar7;
        if (bVar2 != 0xc) goto LAB_18028b729;
        if (iVar7 < iVar1) {
          lVar6 = (longlong)iVar7;
          iVar7 = iVar3 + 2;
          uVar4 = *(byte *)(lVar6 + lVar5) | 0x100;
          *(int *)(param_2 + 1) = iVar7;
        }
        else {
          uVar4 = 0x100;
        }
      }
      else {
        bVar2 = 0;
        iVar7 = iVar3;
LAB_18028b729:
        uVar4 = (uint)bVar2;
      }
      if (uVar4 == param_3) {
        *param_1 = 0;
        param_1[1] = 0;
        if (iVar8 < 0) {
          return param_1;
        }
        iVar3 = iVar3 - iVar8;
        if (iVar3 < 0) {
          return param_1;
        }
        if (*(int *)((longlong)param_2 + 0xc) < iVar8) {
          return param_1;
        }
        if (*(int *)((longlong)param_2 + 0xc) - iVar8 < iVar3) {
          return param_1;
        }
        lVar5 = (longlong)iVar8 + *param_2;
        *(int *)((longlong)param_1 + 0xc) = iVar3;
        goto LAB_18028b74b;
      }
      iVar8 = iVar7;
    } while (iVar7 < iVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (-1 < *(int *)((longlong)param_2 + 0xc)) {
    lVar5 = *param_2;
LAB_18028b74b:
    *param_1 = lVar5;
  }
  return param_1;
}


