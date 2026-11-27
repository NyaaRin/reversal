// 0x180140b70  FUN_180140b70
// size=502 thunk=false
// signature: undefined FUN_180140b70()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180140b70(longlong *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  byte *pbVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  longlong *local_30;
  byte *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(char *)param_1 = '\0';
  local_38 = 1;
  uVar3 = *(ulonglong *)(param_2 + 0x10);
  local_30 = param_1;
  local_28 = param_2;
  if ((ulonglong)param_1[3] < uVar3) {
    lVar6 = param_1[2];
    FUN_18021aa80(0,uVar3 - lVar6);
    param_1[2] = lVar6;
    uVar3 = *(ulonglong *)(param_2 + 0x10);
  }
  pbVar5 = param_2;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    pbVar5 = *(byte **)param_2;
  }
  pbVar1 = pbVar5 + uVar3;
  for (; pbVar5 != pbVar1; pbVar5 = pbVar5 + 1) {
    bVar2 = *pbVar5;
    if ((0x3b < bVar2) || ((0x800000400002401U >> ((longlong)(char)bVar2 & 0x3fU) & 1) == 0)) {
      uVar3 = param_1[2];
      if (uVar3 < (ulonglong)param_1[3]) {
        param_1[2] = uVar3 + 1;
        if ((ulonglong)param_1[3] < 0x10) {
          *(byte *)(uVar3 + (longlong)param_1) = bVar2;
          *(char *)(uVar3 + 1 + (longlong)param_1) = '\0';
        }
        else {
          lVar6 = *param_1;
          *(byte *)(uVar3 + lVar6) = bVar2;
          *(undefined1 *)(uVar3 + 1 + lVar6) = 0;
        }
      }
      else {
        FUN_18021abd0(param_1);
      }
    }
  }
  if (0x78 < (ulonglong)param_1[2]) {
    FUN_18020e770(param_1);
  }
  lVar6 = param_1[2];
  while (lVar6 != 0) {
    plVar4 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar4 = (longlong *)*param_1;
    }
    if ((char)*plVar4 != ' ') {
      if (lVar6 != 0) goto LAB_180140d00;
      break;
    }
    plVar4 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar4 = (longlong *)*param_1;
    }
    bVar7 = lVar6 != 0;
    lVar6 = lVar6 - (ulonglong)bVar7;
    memmove(plVar4,(char *)((ulonglong)bVar7 + (longlong)plVar4),lVar6 + 1);
    param_1[2] = lVar6;
  }
  goto LAB_180140d3a;
  while( true ) {
    param_1[2] = lVar6;
    plVar4 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar4 = (longlong *)*param_1;
    }
    *(char *)(lVar6 + (longlong)plVar4) = '\0';
    lVar6 = param_1[2];
    if (lVar6 == 0) break;
LAB_180140d00:
    plVar4 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar4 = (longlong *)*param_1;
    }
    lVar6 = lVar6 + -1;
    if (*(char *)(lVar6 + (longlong)plVar4) != ' ') break;
  }
LAB_180140d3a:
  FUN_18020e450(param_2);
  return param_1;
}


