// 180145c40  FUN_180145c40
// signature: undefined FUN_180145c40()
// status: ok


longlong * FUN_180145c40(longlong *param_1,byte *param_2)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  longlong *plVar5;
  longlong *plVar6;
  int *piVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 local_50 [32];
  longlong *local_30;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(char *)param_1 = '\0';
  if (param_2 == (byte *)0x0) {
    return param_1;
  }
  local_30 = param_1;
  if ((ulonglong)param_1[3] < 0xf0) {
    lVar2 = param_1[2];
    FUN_18021aa80();
    param_1[2] = lVar2;
  }
  bVar1 = *param_2;
  while ((bVar1 != 0 && (uVar8 = param_1[2], uVar8 < 0xf0))) {
    bVar1 = *param_2;
    if ((0x3b < bVar1) || ((0x800000400002400U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
      if (bVar1 == 0x5c) {
        bVar1 = 0x2f;
      }
      if (uVar8 < (ulonglong)param_1[3]) {
        param_1[2] = uVar8 + 1;
        if ((ulonglong)param_1[3] < 0x10) {
          *(byte *)(uVar8 + (longlong)param_1) = bVar1;
          *(char *)(uVar8 + 1 + (longlong)param_1) = '\0';
        }
        else {
          lVar2 = *param_1;
          *(byte *)(uVar8 + lVar2) = bVar1;
          *(undefined1 *)(uVar8 + 1 + lVar2) = 0;
        }
      }
      else {
        FUN_18021abd0(param_1);
      }
    }
    param_2 = param_2 + 1;
    bVar1 = *param_2;
  }
  uVar8 = param_1[2];
  while( true ) {
    if (uVar8 == 0) {
      return param_1;
    }
    plVar5 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar5 = (longlong *)*param_1;
    }
    if ((char)*plVar5 != ' ') break;
    plVar5 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar5 = (longlong *)*param_1;
    }
    bVar9 = uVar8 != 0;
    uVar8 = uVar8 - bVar9;
    memmove(plVar5,(char *)((ulonglong)bVar9 + (longlong)plVar5),uVar8 + 1);
    param_1[2] = uVar8;
  }
  if (uVar8 == 0) {
    return param_1;
  }
  while( true ) {
    uVar3 = param_1[3];
    plVar5 = param_1;
    if (0xf < uVar3) {
      plVar5 = (longlong *)*param_1;
    }
    lVar2 = uVar8 - 1;
    if (*(char *)(lVar2 + (longlong)plVar5) != ' ') break;
    param_1[2] = lVar2;
    plVar5 = param_1;
    if (0xf < uVar3) {
      plVar5 = (longlong *)*param_1;
    }
    *(char *)((longlong)plVar5 + lVar2) = '\0';
    uVar8 = param_1[2];
    if (uVar8 == 0) {
      return param_1;
    }
  }
  if (uVar8 == 0) {
    return param_1;
  }
  plVar5 = param_1;
  if (0xf < uVar3) {
    plVar5 = (longlong *)*param_1;
  }
  if (((uVar8 < 7) ||
      (plVar6 = (longlong *)
                thunk_FUN_1802d5870(plVar5,(longlong *)((longlong)plVar5 + 7),"models/",7),
      plVar6 == (longlong *)((longlong)plVar5 + 7))) || (plVar6 != plVar5)) {
    if (0x7fffffffffffffffU - param_1[2] < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_1800130a0();
    }
    FUN_18020e930(local_50);
    FUN_18020e8a0(param_1,local_50);
    FUN_18020e450(local_50);
  }
  bVar9 = false;
  if (3 < (ulonglong)param_1[2]) {
    piVar7 = (int *)FUN_18020e670(param_1,local_50,param_1[2] - 4,0xffffffffffffffff);
    bVar9 = true;
    plVar5 = (longlong *)(piVar7 + 4);
    if (0xf < *(ulonglong *)(piVar7 + 6)) {
      piVar7 = *(int **)piVar7;
    }
    if ((*plVar5 == 4) && (*piVar7 == 0x6c646d2e)) {
      bVar4 = false;
      goto LAB_180145ee4;
    }
  }
  bVar4 = true;
LAB_180145ee4:
  if (bVar9) {
    FUN_18020e450(local_50);
  }
  if (!bVar4) {
    return param_1;
  }
  FUN_18021aef0(param_1,&DAT_18035d820,4);
  return param_1;
}


