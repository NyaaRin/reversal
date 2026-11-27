// 0x18025dda0  FUN_18025dda0
// size=387 thunk=false
// signature: undefined FUN_18025dda0()
// status: ok


ulonglong * FUN_18025dda0(longlong *param_1,ulonglong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  short *psVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  short *psVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  
  uVar5 = (param_1[1] - *param_1 >> 3) * -0x5555555555555555;
  if (uVar5 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  plVar10 = (longlong *)(*param_4 * 0x60 + *param_3);
  uVar9 = plVar10[5];
  if (*(char *)((longlong)plVar10 + 0x22) == '\x03') {
    if (uVar5 < uVar9 || uVar5 - uVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180262180();
    }
    uVar5 = *(ulonglong *)(*param_1 + 0x10 + uVar9 * 0x18);
  }
  else {
    uVar5 = 0;
    plVar1 = (longlong *)plVar10[8];
    if (plVar1 == (longlong *)0x0) {
      psVar4 = (short *)*plVar10;
      psVar7 = psVar4 + param_4[1] * 8;
      while (psVar4 < psVar7) {
        if (*psVar4 == 9) {
          uVar5 = uVar5 + (param_1[3] - uVar5 % (ulonglong)param_1[3]);
          psVar4 = psVar4 + 8;
        }
        else {
          uVar5 = uVar5 + 1;
          psVar4 = psVar4 + 8;
        }
      }
    }
    else {
      lVar2 = *plVar1;
      for (uVar6 = uVar5; uVar6 < (ulonglong)(plVar1[1] - lVar2 >> 5); uVar6 = uVar6 + 1) {
        uVar3 = param_4[1];
        lVar8 = uVar6 * 0x20;
        if ((*(ulonglong *)(lVar8 + lVar2) <= uVar3) && (uVar3 <= *(ulonglong *)(lVar8 + 8 + lVar2))
           ) {
          uVar5 = *(ulonglong *)(lVar8 + 0x18 + lVar2);
          psVar4 = (short *)(*(ulonglong *)(lVar8 + lVar2) * 0x10 + *plVar10);
          while (psVar4 < (short *)(uVar3 * 0x10 + *plVar10)) {
            if (*psVar4 == 9) {
              uVar5 = uVar5 + (param_1[3] - uVar5 % (ulonglong)param_1[3]);
              psVar4 = psVar4 + 8;
            }
            else {
              uVar5 = uVar5 + 1;
              psVar4 = psVar4 + 8;
            }
          }
          break;
        }
        uVar9 = uVar9 + 1;
      }
    }
  }
  *param_2 = uVar9;
  param_2[1] = uVar5;
  return param_2;
}


