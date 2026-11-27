// 0x180065680  FUN_180065680
// size=385 thunk=false
// signature: undefined FUN_180065680()
// status: ok


longlong * FUN_180065680(longlong *param_1,short *param_2)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  ulonglong uVar4;
  longlong *plVar5;
  short *psVar6;
  
  plVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    plVar5 = (longlong *)*param_1;
  }
  psVar6 = (short *)((longlong)plVar5 + param_1[2] * 2);
  psVar3 = psVar6;
  psVar2 = (short *)FUN_180065240(plVar5);
  if (psVar2 != psVar3) {
    do {
      psVar1 = psVar6;
      if ((*psVar2 != 0x5c) && (*psVar2 != 0x2f)) break;
      psVar2 = psVar2 + 1;
    } while (psVar2 != psVar3);
    do {
      psVar6 = psVar1;
      if (psVar2 == psVar3) break;
      psVar3 = psVar6 + -1;
      if ((psVar6[-1] == 0x5c) || (psVar1 = psVar3, psVar6[-1] == 0x2f)) break;
    } while( true );
  }
  psVar3 = (short *)thunk_FUN_1802d5d20(psVar6);
  if ((psVar6 != psVar3) && (psVar2 = psVar3 + -1, psVar6 != psVar2)) {
    if (*psVar2 == 0x2e) {
      if ((psVar6 != psVar3 + -2) || (psVar3[-2] != 0x2e)) {
LAB_180065730:
        psVar3 = psVar2;
      }
    }
    else {
      for (psVar2 = psVar3 + -2; psVar6 != psVar2; psVar2 = psVar2 + -1) {
        if (*psVar2 == 0x2e) goto LAB_180065730;
      }
    }
  }
  uVar4 = (longlong)psVar3 - (longlong)plVar5 >> 1;
  if ((ulonglong)param_1[2] < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_18022ec00();
  }
  param_1[2] = uVar4;
  plVar5 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    plVar5 = (longlong *)*param_1;
  }
  *(undefined2 *)((longlong)plVar5 + uVar4 * 2) = 0;
  if (*(longlong *)(param_2 + 8) != 0) {
    psVar3 = param_2;
    if (7 < *(ulonglong *)(param_2 + 0xc)) {
      psVar3 = *(short **)param_2;
    }
    if (*psVar3 != 0x2e) {
      uVar4 = param_1[2];
      if (uVar4 < (ulonglong)param_1[3]) {
        param_1[2] = uVar4 + 1;
        if ((ulonglong)param_1[3] < 8) {
          *(undefined4 *)((longlong)param_1 + uVar4 * 2) = 0x2e;
        }
        else {
          *(undefined4 *)(*param_1 + uVar4 * 2) = 0x2e;
        }
      }
      else {
        FUN_18021a440(param_1);
      }
    }
  }
  psVar3 = param_2 + 8;
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    param_2 = *(short **)param_2;
  }
  FUN_180211740(param_1,param_2,*(undefined8 *)psVar3);
  return param_1;
}


