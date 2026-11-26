// 0x18029aa80  FUN_18029aa80
// size=723 thunk=false
// signature: undefined FUN_18029aa80()
// status: ok


longlong FUN_18029aa80(longlong param_1,longlong param_2,float param_3,float param_4)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  
  lVar3 = *(longlong *)(param_1 + 0x2b0);
  iVar9 = 0;
  iVar2 = *(int *)(lVar3 + 0xc0);
  do {
    lVar7 = 0;
    lVar6 = 0;
    uVar8 = 0;
    if (iVar2 < 4) {
      if (0 < iVar2) {
        lVar5 = *(longlong *)(lVar3 + 0xd0);
        goto LAB_18029ac85;
      }
    }
    else {
      lVar5 = *(longlong *)(lVar3 + 0xd0);
      do {
        lVar4 = *(longlong *)(lVar5 + (ulonglong)(uVar8 >> 5) * 8) +
                (ulonglong)(uVar8 & 0x1f) * 0x68;
        if (((*(longlong *)(lVar4 + 0x58) == param_2) &&
            ((*(uint *)(lVar4 + 0x4c) & 0x4000000) == 0)) &&
           ((iVar9 != 0 || (*(float *)(lVar4 + 0x18) == param_4)))) {
          fVar1 = *(float *)(lVar4 + 0x14);
          if ((param_3 < fVar1) && ((lVar7 == 0 || (fVar1 < *(float *)(lVar7 + 0x14))))) {
            lVar7 = lVar4;
          }
          if ((fVar1 < param_3) &&
             ((lVar6 == 0 ||
              (*(float *)(lVar6 + 0x14) <= fVar1 && fVar1 != *(float *)(lVar6 + 0x14))))) {
            lVar6 = lVar4;
          }
        }
        lVar4 = *(longlong *)(lVar5 + (ulonglong)(uVar8 + 1 >> 5) * 8) +
                (ulonglong)(uVar8 + 1 & 0x1f) * 0x68;
        if (((*(longlong *)(lVar4 + 0x58) == param_2) &&
            ((*(uint *)(lVar4 + 0x4c) & 0x4000000) == 0)) &&
           ((iVar9 != 0 || (*(float *)(lVar4 + 0x18) == param_4)))) {
          fVar1 = *(float *)(lVar4 + 0x14);
          if ((param_3 < fVar1) && ((lVar7 == 0 || (fVar1 < *(float *)(lVar7 + 0x14))))) {
            lVar7 = lVar4;
          }
          if ((fVar1 < param_3) &&
             ((lVar6 == 0 ||
              (*(float *)(lVar6 + 0x14) <= fVar1 && fVar1 != *(float *)(lVar6 + 0x14))))) {
            lVar6 = lVar4;
          }
        }
        lVar4 = *(longlong *)(lVar5 + (ulonglong)(uVar8 + 2 >> 5) * 8) +
                (ulonglong)(uVar8 + 2 & 0x1f) * 0x68;
        if (((*(longlong *)(lVar4 + 0x58) == param_2) &&
            ((*(uint *)(lVar4 + 0x4c) & 0x4000000) == 0)) &&
           ((iVar9 != 0 || (*(float *)(lVar4 + 0x18) == param_4)))) {
          fVar1 = *(float *)(lVar4 + 0x14);
          if ((param_3 < fVar1) && ((lVar7 == 0 || (fVar1 < *(float *)(lVar7 + 0x14))))) {
            lVar7 = lVar4;
          }
          if ((fVar1 < param_3) &&
             ((lVar6 == 0 ||
              (*(float *)(lVar6 + 0x14) <= fVar1 && fVar1 != *(float *)(lVar6 + 0x14))))) {
            lVar6 = lVar4;
          }
        }
        lVar4 = *(longlong *)(lVar5 + (ulonglong)(uVar8 + 3 >> 5) * 8) +
                (ulonglong)(uVar8 + 3 & 0x1f) * 0x68;
        if (((*(longlong *)(lVar4 + 0x58) == param_2) &&
            ((*(uint *)(lVar4 + 0x4c) & 0x4000000) == 0)) &&
           ((iVar9 != 0 || (*(float *)(lVar4 + 0x18) == param_4)))) {
          fVar1 = *(float *)(lVar4 + 0x14);
          if ((param_3 < fVar1) && ((lVar7 == 0 || (fVar1 < *(float *)(lVar7 + 0x14))))) {
            lVar7 = lVar4;
          }
          if ((fVar1 < param_3) &&
             ((lVar6 == 0 ||
              (*(float *)(lVar6 + 0x14) <= fVar1 && fVar1 != *(float *)(lVar6 + 0x14))))) {
            lVar6 = lVar4;
          }
        }
        uVar8 = uVar8 + 4;
      } while ((int)uVar8 < iVar2 + -3);
      for (; (int)uVar8 < iVar2; uVar8 = uVar8 + 1) {
LAB_18029ac85:
        lVar4 = *(longlong *)(lVar5 + (ulonglong)(uVar8 >> 5) * 8) +
                (ulonglong)(uVar8 & 0x1f) * 0x68;
        if (((*(longlong *)(lVar4 + 0x58) == param_2) &&
            ((*(uint *)(lVar4 + 0x4c) & 0x4000000) == 0)) &&
           ((iVar9 != 0 || (*(float *)(lVar4 + 0x18) == param_4)))) {
          fVar1 = *(float *)(lVar4 + 0x14);
          if ((param_3 < fVar1) && ((lVar7 == 0 || (fVar1 < *(float *)(lVar7 + 0x14))))) {
            lVar7 = lVar4;
          }
          if ((fVar1 < param_3) &&
             ((lVar6 == 0 ||
              (*(float *)(lVar6 + 0x14) <= fVar1 && fVar1 != *(float *)(lVar6 + 0x14))))) {
            lVar6 = lVar4;
          }
        }
      }
      if (lVar7 != 0) {
        if (lVar6 == 0) {
          return lVar7;
        }
        if (*(float *)(lVar7 + 0x14) < param_3 + param_3) {
          return lVar6;
        }
        if (param_3 * DAT_180380ac0 < *(float *)(lVar6 + 0x14)) {
          return lVar7;
        }
      }
      if (lVar6 != 0) {
        return lVar6;
      }
    }
    iVar9 = iVar9 + 1;
    if (1 < iVar9) {
      return 0;
    }
  } while( true );
}


