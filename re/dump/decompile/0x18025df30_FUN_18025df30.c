// 0x18025df30  FUN_18025df30
// size=837 thunk=false
// signature: undefined FUN_18025df30()
// status: ok


void FUN_18025df30(longlong *param_1,longlong *param_2,undefined8 param_3,ulonglong *param_4,
                  ulonglong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  short *psVar7;
  longlong lVar8;
  short *psVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  
  fVar16 = (float)param_3;
  fVar15 = (float)((ulonglong)param_3 >> 0x20);
  if (fVar15 <= 0.0) {
    *param_4 = 0;
    param_4[1] = 0;
    uVar6 = param_4[1];
    *param_5 = *param_4;
    param_5[1] = uVar6;
    return;
  }
  lVar3 = 0;
  if ((DAT_180381300 <= fVar15) && (fVar15 = fVar15 - DAT_180381300, fVar15 < DAT_180381300)) {
    lVar3 = -0x8000000000000000;
  }
  lVar5 = (longlong)fVar15;
  uVar6 = lVar5 + lVar3;
  if (uVar6 < (ulonglong)param_1[7]) {
    lVar3 = *param_1;
    uVar4 = (param_1[1] - lVar3 >> 3) * -0x5555555555555555;
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180262180();
    }
    uVar6 = *(ulonglong *)(lVar3 + lVar5 * 0x18);
    if (0.0 < fVar16) {
      lVar1 = *param_2;
      lVar13 = 0;
      lVar8 = uVar6 * 0x60;
      plVar2 = *(longlong **)(lVar8 + 0x40 + lVar1);
      fVar15 = fVar16;
      if ((DAT_180381300 <= fVar16) && (fVar15 = fVar16 - DAT_180381300, fVar15 < DAT_180381300)) {
        lVar13 = -0x8000000000000000;
      }
      if (*(ulonglong *)(lVar3 + 0x10 + lVar5 * 0x18) < (ulonglong)((longlong)fVar15 + lVar13)) {
        if (plVar2 == (longlong *)0x0) {
          uVar4 = (param_2[1] - lVar1 >> 5) * -0x5555555555555555;
          if (uVar4 < uVar6 || uVar4 - uVar6 == 0) goto LAB_18025e26c;
          uVar4 = *(longlong *)(lVar8 + 8 + lVar1) - *(longlong *)(lVar8 + lVar1) >> 4;
        }
        else {
          uVar4 = *(ulonglong *)(lVar3 + 8 + lVar5 * 0x18);
          if ((ulonglong)(plVar2[1] - *plVar2 >> 5) <= uVar4) {
LAB_18025e272:
                    /* WARNING: Subroutine does not return */
            FUN_180262180();
          }
          uVar4 = *(ulonglong *)(uVar4 * 0x20 + 8 + *plVar2);
        }
        *param_4 = uVar6;
        param_4[1] = uVar4;
        uVar6 = param_4[1];
        *param_5 = *param_4;
        param_5[1] = uVar6;
      }
      else {
        if (plVar2 == (longlong *)0x0) {
          psVar7 = *(short **)(lVar8 + lVar1);
          uVar4 = 0;
          psVar9 = *(short **)(lVar8 + 8 + lVar1);
          uVar12 = 0;
        }
        else {
          lVar13 = *plVar2;
          uVar4 = *(ulonglong *)(lVar3 + 8 + lVar5 * 0x18);
          if ((ulonglong)(plVar2[1] - lVar13 >> 5) <= uVar4) goto LAB_18025e272;
          lVar10 = uVar4 * 0x20;
          uVar4 = *(ulonglong *)(lVar10 + lVar13);
          uVar12 = *(ulonglong *)(lVar10 + 0x18 + lVar13);
          psVar7 = (short *)(uVar4 * 0x10 + *(longlong *)(lVar8 + lVar1));
          psVar9 = (short *)(*(longlong *)(lVar10 + 8 + lVar13) * 0x10 +
                            *(longlong *)(lVar8 + lVar1));
        }
        uVar14 = uVar12;
        if ((float)uVar12 < fVar16) {
          for (; uVar11 = uVar12, uVar12 = uVar11, psVar7 < psVar9; psVar7 = psVar7 + 8) {
            if (*psVar7 == 9) {
              uVar12 = uVar11 + (param_1[3] - uVar11 % (ulonglong)param_1[3]);
            }
            else {
              uVar12 = uVar11 + 1;
            }
            uVar4 = uVar4 + 1;
            uVar14 = uVar11;
            if (fVar16 <= (float)uVar12) break;
          }
        }
        *param_4 = uVar6;
        uVar6 = uVar4;
        if (uVar14 != uVar12) {
          uVar6 = uVar4 - 1;
        }
        param_4[1] = uVar6;
        *param_5 = *(ulonglong *)(lVar3 + lVar5 * 0x18);
        uVar6 = uVar4 - 1;
        if ((float)uVar12 - fVar16 < fVar16 - (float)uVar14) {
          uVar6 = uVar4;
        }
        param_5[1] = uVar6;
      }
    }
    else {
      *param_4 = uVar6;
      param_4[1] = 0;
      uVar6 = param_4[1];
      *param_5 = *param_4;
      param_5[1] = uVar6;
    }
  }
  else {
    lVar3 = *param_2;
    uVar4 = (param_2[1] - lVar3 >> 5) * -0x5555555555555555;
    uVar6 = uVar4 - 1;
    if (uVar4 < uVar6 || uVar4 - uVar6 == 0) {
LAB_18025e26c:
                    /* WARNING: Subroutine does not return */
      FUN_180262180();
    }
    lVar5 = *(longlong *)(uVar6 * 0x60 + 8 + lVar3);
    lVar3 = *(longlong *)(uVar6 * 0x60 + lVar3);
    *param_4 = uVar6;
    param_4[1] = lVar5 - lVar3 >> 4;
    uVar6 = param_4[1];
    *param_5 = *param_4;
    param_5[1] = uVar6;
  }
  return;
}


