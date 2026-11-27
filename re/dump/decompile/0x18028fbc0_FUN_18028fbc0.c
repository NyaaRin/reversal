// 0x18028fbc0  FUN_18028fbc0
// size=656 thunk=false
// signature: undefined FUN_18028fbc0()
// status: ok


void FUN_18028fbc0(undefined8 param_1,longlong param_2,longlong param_3,uint param_4,float param_5,
                  uint param_6,float param_7,float param_8)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  float fVar13;
  
  if (0 < (int)param_4) {
    iVar8 = 0;
    if (7 < param_4) {
      do {
        iVar8 = iVar8 + 8;
      } while (iVar8 < (int)(param_4 & 0xfffffff8));
      if ((int)param_4 <= iVar8) goto LAB_18028fc85;
    }
    if (1 < (int)(param_4 - iVar8)) {
      do {
        iVar8 = iVar8 + 2;
      } while (iVar8 < (int)(param_4 - 1));
    }
  }
LAB_18028fc85:
  lVar3 = FUN_18026f580();
  if (lVar3 != 0) {
    fVar13 = (float)(param_6 ^ DAT_1803817f0);
    iVar8 = 0;
    iVar10 = 0;
    uVar12 = 0;
    if (0 < (int)param_4) {
      do {
        iVar6 = *(int *)(param_3 + uVar12 * 4);
        lVar7 = (longlong)iVar10 * 8 + param_2;
        iVar10 = iVar10 + iVar6;
        iVar9 = iVar6 + -1;
        iVar5 = 0;
        if (0 < iVar6) {
          do {
            if (*(float *)(lVar7 + 4 + (longlong)iVar9 * 8) !=
                *(float *)(lVar7 + 4 + (longlong)iVar5 * 8)) {
              lVar4 = (longlong)iVar8;
              *(undefined4 *)(lVar3 + 0x10 + lVar4 * 0x14) = 0;
              fVar2 = *(float *)(lVar7 + 4 + (longlong)iVar9 * 8);
              pfVar1 = (float *)(lVar7 + 4 + (longlong)iVar5 * 8);
              iVar6 = iVar5;
              if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
                *(undefined4 *)(lVar3 + 0x10 + lVar4 * 0x14) = 1;
                iVar6 = iVar9;
                iVar9 = iVar5;
              }
              iVar8 = iVar8 + 1;
              *(float *)(lVar3 + lVar4 * 0x14) =
                   param_5 * *(float *)(lVar7 + (longlong)iVar6 * 8) + param_7;
              *(float *)(lVar3 + 4 + lVar4 * 0x14) =
                   fVar13 * *(float *)(lVar7 + 4 + (longlong)iVar6 * 8) + param_8;
              *(float *)(lVar3 + 8 + lVar4 * 0x14) =
                   param_5 * *(float *)(lVar7 + (longlong)iVar9 * 8) + param_7;
              *(float *)(lVar3 + 0xc + lVar4 * 0x14) =
                   fVar13 * *(float *)(lVar7 + 4 + (longlong)iVar9 * 8) + param_8;
            }
            iVar6 = iVar5 + 1;
            iVar9 = iVar5;
            iVar5 = iVar6;
          } while (iVar6 < *(int *)(param_3 + uVar12 * 4));
        }
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
      } while ((int)uVar11 < (int)param_4);
    }
    FUN_18028fa20(lVar3,iVar8);
    FUN_18028f860(lVar3,iVar8);
    FUN_18028f3f0(param_1,lVar3,iVar8);
    FUN_18026f680(lVar3);
  }
  return;
}


