// 0x1800654d0  FUN_1800654d0
// size=429 thunk=false
// signature: undefined FUN_1800654d0()
// status: ok


longlong * FUN_1800654d0(longlong *param_1,longlong *param_2)

{
  short *psVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  short *psVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  
  cVar3 = FUN_180066140(param_2);
  if (cVar3 != '\0') {
LAB_18006557e:
    if (param_1 == param_2) {
      return param_1;
    }
    plVar9 = param_2 + 2;
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (longlong *)*param_2;
    }
    FUN_18021a7b0(param_1,param_2,*plVar9);
    return param_1;
  }
  plVar9 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    plVar9 = (longlong *)*param_1;
  }
  psVar1 = (short *)((longlong)plVar9 + param_1[2] * 2);
  plVar11 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    plVar11 = (longlong *)*param_2;
  }
  plVar2 = (longlong *)((longlong)plVar11 + param_2[2] * 2);
  psVar5 = (short *)FUN_180065240(plVar9,psVar1);
  plVar6 = (longlong *)FUN_180065240(plVar11,plVar2);
  uVar7 = (longlong)psVar5 - (longlong)plVar9 >> 1;
  if (plVar11 != plVar6) {
    uVar10 = (longlong)plVar6 - (longlong)plVar11 >> 1;
    uVar8 = uVar7;
    if (uVar10 < uVar7) {
      uVar8 = uVar10;
    }
    iVar4 = FUN_180012bf0(plVar9,plVar11,uVar8);
    if (((iVar4 != 0) || (uVar7 < uVar10)) || (uVar10 < uVar7)) goto LAB_18006557e;
  }
  if ((plVar6 == plVar2) || (((short)*plVar6 != 0x5c && ((short)*plVar6 != 0x2f)))) {
    if (psVar5 == psVar1) {
      if ((longlong)uVar7 < 3) goto LAB_180065649;
    }
    else if ((psVar1[-1] == 0x5c) || (psVar1[-1] == 0x2f)) goto LAB_180065649;
    uVar7 = param_1[2];
    if (uVar7 < (ulonglong)param_1[3]) {
      param_1[2] = uVar7 + 1;
      if ((ulonglong)param_1[3] < 8) {
        psVar1 = (short *)((longlong)param_1 + uVar7 * 2);
        psVar1[0] = 0x5c;
        psVar1[1] = 0;
      }
      else {
        *(undefined4 *)(*param_1 + uVar7 * 2) = 0x5c;
      }
    }
    else {
      FUN_18021a440(param_1);
    }
  }
  else {
    if ((ulonglong)param_1[2] < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18022ec00();
    }
    param_1[2] = uVar7;
    if ((ulonglong)param_1[3] < 8) {
      *(short *)((longlong)param_1 + uVar7 * 2) = 0;
    }
    else {
      *(undefined2 *)(*param_1 + uVar7 * 2) = 0;
    }
  }
LAB_180065649:
  FUN_180211740(param_1,plVar6,(longlong)plVar2 - (longlong)plVar6 >> 1);
  return param_1;
}


