// 0x180145ab0  FUN_180145ab0
// size=397 thunk=false
// signature: undefined FUN_180145ab0()
// status: ok


longlong * FUN_180145ab0(longlong *param_1,byte *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(char *)param_1 = '\0';
  if (param_2 == (byte *)0x0) {
    return param_1;
  }
  if ((ulonglong)param_1[3] < 0x3f) {
    lVar4 = param_1[2];
    FUN_18021aa80();
    param_1[2] = lVar4;
  }
  bVar1 = *param_2;
  while ((bVar1 != 0 && (uVar2 = param_1[2], uVar2 < 0x3f))) {
    bVar1 = *param_2;
    if ((0x3b < bVar1) || ((0x8000004ffffffffU >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
      if (uVar2 < (ulonglong)param_1[3]) {
        param_1[2] = uVar2 + 1;
        if ((ulonglong)param_1[3] < 0x10) {
          *(byte *)(uVar2 + (longlong)param_1) = bVar1;
          *(char *)(uVar2 + 1 + (longlong)param_1) = '\0';
        }
        else {
          lVar4 = *param_1;
          *(byte *)(uVar2 + lVar4) = bVar1;
          *(undefined1 *)(uVar2 + 1 + lVar4) = 0;
        }
      }
      else {
        FUN_18021abd0(param_1);
      }
    }
    param_2 = param_2 + 1;
    bVar1 = *param_2;
  }
  lVar4 = param_1[2];
  while( true ) {
    if (lVar4 == 0) {
      return param_1;
    }
    plVar3 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar3 = (longlong *)*param_1;
    }
    if ((char)*plVar3 != ' ') break;
    plVar3 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar3 = (longlong *)*param_1;
    }
    bVar5 = lVar4 != 0;
    lVar4 = lVar4 - (ulonglong)bVar5;
    memmove(plVar3,(char *)((ulonglong)bVar5 + (longlong)plVar3),lVar4 + 1);
    param_1[2] = lVar4;
  }
  if (lVar4 == 0) {
    return param_1;
  }
  do {
    plVar3 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar3 = (longlong *)*param_1;
    }
    lVar4 = lVar4 + -1;
    if (*(char *)(lVar4 + (longlong)plVar3) != ' ') {
      return param_1;
    }
    param_1[2] = lVar4;
    plVar3 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar3 = (longlong *)*param_1;
    }
    *(char *)(lVar4 + (longlong)plVar3) = '\0';
    lVar4 = param_1[2];
  } while (lVar4 != 0);
  return param_1;
}


