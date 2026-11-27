// 0x18020c660  FUN_18020c660
// size=333 thunk=false
// signature: undefined FUN_18020c660()
// status: ok


longlong * FUN_18020c660(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  longlong *plVar7;
  short *psVar8;
  short *psVar9;
  short *psVar10;
  
  psVar6 = (short *)param_1[5];
  plVar7 = param_1 + 1;
  lVar2 = param_1[3];
  psVar10 = psVar6;
  if (7 < *(ulonglong *)(psVar6 + 0xc)) {
    psVar10 = *(short **)psVar6;
  }
  psVar9 = (short *)*param_1;
  plVar1 = (longlong *)(psVar6 + 8);
  lVar3 = *plVar1;
  if (psVar10 == psVar9) {
    psVar9 = psVar9 + lVar2;
    *param_1 = (longlong)psVar9;
    if (7 < *(ulonglong *)(psVar6 + 0xc)) {
      psVar6 = *(short **)psVar6;
    }
    psVar5 = psVar6 + *plVar1;
    psVar4 = (short *)FUN_180065240(psVar6);
    for (psVar8 = psVar4; (psVar8 != psVar5 && ((*psVar8 == 0x5c || (*psVar8 == 0x2f))));
        psVar8 = psVar8 + 1) {
    }
    if ((psVar6 != psVar4) && (psVar4 != psVar8)) {
      FUN_18021a7b0(plVar7,psVar4,(longlong)psVar8 - (longlong)psVar4 >> 1);
      return param_1;
    }
  }
  else {
    if (((*psVar9 == 0x5c) || (*psVar9 == 0x2f)) && (lVar2 == 0)) {
      *param_1 = (longlong)(psVar9 + 1);
      return param_1;
    }
    psVar9 = psVar9 + lVar2;
    *param_1 = (longlong)psVar9;
  }
  psVar10 = psVar10 + lVar3;
  if (psVar9 != psVar10) {
    do {
      psVar6 = psVar9;
      if ((*psVar6 != 0x5c) && (*psVar6 != 0x2f)) goto LAB_18020c780;
      psVar9 = psVar6 + 1;
      *param_1 = (longlong)psVar9;
    } while (psVar9 != psVar10);
    *param_1 = (longlong)psVar6;
  }
  param_1[3] = 0;
  if (7 < (ulonglong)param_1[4]) {
    plVar7 = (longlong *)*plVar7;
  }
  *(undefined2 *)plVar7 = 0;
  return param_1;
LAB_18020c780:
  if (*psVar6 == 0x5c) {
LAB_18020c799:
    FUN_18021a7b0(plVar7,*param_1,(longlong)psVar6 - *param_1 >> 1);
    return param_1;
  }
  if ((*psVar6 == 0x2f) || (psVar6 = psVar6 + 1, psVar6 == psVar10)) goto LAB_18020c799;
  goto LAB_18020c780;
}


