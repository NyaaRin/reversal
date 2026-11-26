// 0x1800c7470  FUN_1800c7470
// size=508 thunk=false
// signature: undefined FUN_1800c7470()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800c7470(int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  double dVar7;
  int local_28 [6];
  undefined1 local_10 [8];
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if (*param_1 == 0) {
    return;
  }
  cVar1 = FUN_1800c6700();
  if (((((cVar1 == '\0') || ((*(byte *)(param_1 + 8) & 1) == 0)) || (DAT_1803fb0cc < 1)) ||
      ((DAT_1803fb0c0 < 1 || (DAT_1803fb0d0 == (int *)0x0)))) ||
     (*DAT_1803fb0d0 != DAT_1803fb0c0 + 1)) goto LAB_1800c7642;
  iVar5 = -(param_1[1] - DAT_1803fb0cc);
  if (iVar5 < 0) {
    iVar5 = param_1[1] - DAT_1803fb0cc;
  }
  if ((iVar5 != 0) && (iVar5 < 4)) goto LAB_1800c7642;
  plVar3 = (longlong *)FUN_180014300(local_10);
  dVar7 = (double)(*plVar3 - _DAT_1803fb0e0);
  if (dVar7 < DAT_180381050) {
LAB_1800c7598:
    local_28[2] = param_1[1];
    if (param_2 == (int *)0x0) {
      param_2 = param_1;
    }
    piVar6 = local_28;
    if (DAT_1803fb0cc + -3 <= local_28[2]) {
      piVar6 = local_28 + 2;
    }
    iVar5 = param_2[1];
    local_28[0] = DAT_1803fb0cc + -3;
    piVar4 = local_28 + 4;
    if (local_28[2] <= DAT_1803fb0cc + 3) {
      piVar4 = piVar6;
    }
    local_28[4] = DAT_1803fb0cc + 3;
    iVar2 = iVar5;
    if (*piVar4 <= iVar5) {
      iVar2 = *piVar4;
    }
    if (iVar2 == DAT_1803fb0cc) {
      iVar2 = iVar2 + -1;
    }
    if (0 < iVar2) {
      iVar5 = iVar2;
    }
    DAT_1803f91fc = DAT_1803f91fc + 1;
    if ((DAT_1803f91fc == (DAT_1803f91fc / 0x32) * 0x32) || (DAT_1803f91fc < 6)) {
      FUN_180014410("[BT-LSAC] budget spent: want=%d last=%d -> sending %d (walking back in <=%d/cmd)\n"
                    ,local_28[2],DAT_1803fb0cc,iVar5,3);
    }
    param_1[1] = iVar5;
  }
  else {
    if (dVar7 <= DAT_180381050) {
      if (dVar7 == DAT_180381050) {
        cVar1 = '\0';
      }
      else {
        cVar1 = -0x80;
      }
      if (cVar1 < '\0') goto LAB_1800c7598;
    }
    plVar3 = (longlong *)FUN_180014300(local_10);
    DAT_1803fb0c8 = DAT_1803fb0c8 + 1;
    _DAT_1803fb0e0 = *plVar3;
    FUN_180014410(&DAT_18034caa0);
  }
LAB_1800c7642:
  DAT_1803fb0d0 = (int *)0x0;
  DAT_1803fb0cc = param_1[1];
  DAT_1803fb0c0 = *param_1;
  return;
}


