// 0x180243970  FUN_180243970
// size=324 thunk=false
// signature: undefined FUN_180243970()
// status: ok


ulonglong * FUN_180243970(longlong param_1,ulonglong *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  short *psVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  short *psVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  lVar5 = *(longlong *)(param_1 + 0x1d8);
  uVar6 = *param_3;
  if (uVar6 < (ulonglong)((*(longlong *)(param_1 + 0x1e0) - lVar5 >> 3) * -0x5555555555555555)) {
    uVar12 = *(ulonglong *)(lVar5 + uVar6 * 0x18);
    plVar7 = (longlong *)(uVar12 * 0x60 + *(longlong *)(param_1 + 0x50));
    plVar1 = (longlong *)plVar7[8];
    if (plVar1 == (longlong *)0x0) {
      psVar4 = (short *)*plVar7;
      uVar6 = 0;
      psVar8 = (short *)plVar7[1];
      uVar11 = uVar6;
    }
    else {
      lVar2 = *plVar1;
      uVar6 = *(ulonglong *)(lVar5 + uVar6 * 0x18 + 8);
      if ((ulonglong)(plVar1[1] - lVar2 >> 5) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_180262180();
      }
      lVar5 = uVar6 * 0x20;
      uVar6 = *(ulonglong *)(lVar5 + 0x18 + lVar2);
      psVar4 = (short *)(*(ulonglong *)(lVar5 + lVar2) * 0x10 + *plVar7);
      psVar8 = (short *)(*(longlong *)(lVar5 + 8 + lVar2) * 0x10 + *plVar7);
      uVar11 = *(ulonglong *)(lVar5 + lVar2);
    }
    uVar3 = param_3[1];
    uVar10 = uVar6;
    uVar9 = uVar6;
    if (uVar6 < uVar3) {
      for (; uVar10 = uVar9, psVar4 < psVar8; psVar4 = psVar4 + 8) {
        if (*psVar4 == 9) {
          uVar10 = uVar9 + (*(ulonglong *)(param_1 + 0x1f0) -
                           uVar9 % *(ulonglong *)(param_1 + 0x1f0));
        }
        else {
          uVar10 = uVar9 + 1;
        }
        uVar11 = uVar11 + 1;
        uVar6 = uVar9;
        if (uVar3 <= uVar10) break;
        uVar9 = uVar10;
      }
    }
    if ((1 < uVar10 - uVar6) && (uVar3 - uVar6 <= uVar10 - uVar3)) {
      uVar11 = uVar11 - 1;
    }
  }
  else {
    uVar11 = 0;
    uVar12 = uVar11;
  }
  *param_2 = uVar12;
  param_2[1] = uVar11;
  return param_2;
}


