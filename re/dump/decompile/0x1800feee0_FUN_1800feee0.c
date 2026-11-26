// 0x1800feee0  FUN_1800feee0
// size=256 thunk=false
// signature: undefined FUN_1800feee0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

long FUN_1800feee0(undefined8 *param_1,byte *param_2)

{
  char cVar1;
  longlong *plVar2;
  long lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_38 [32];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(byte **)param_2;
  }
  uVar5 = 0x14650fb0739d0383;
  for (; (param_2 != (byte *)0x0 && (*param_2 != 0)); param_2 = param_2 + 1) {
    uVar5 = (uVar5 ^ *param_2) * 0x100000001b3;
  }
  plVar7 = *(longlong **)*param_1;
  plVar4 = (longlong *)plVar7[1];
  cVar1 = *(char *)((longlong)plVar4 + 0x19);
  plVar2 = plVar7;
  while (cVar1 == '\0') {
    plVar6 = plVar4;
    if ((ulonglong)plVar4[4] < uVar5) {
      plVar4 = plVar4 + 2;
      plVar6 = plVar2;
    }
    plVar4 = (longlong *)*plVar4;
    plVar2 = plVar6;
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
  }
  if (((*(char *)((longlong)plVar2 + 0x19) == '\0') && ((ulonglong)plVar2[4] <= uVar5)) &&
     (plVar2 != plVar7)) {
    plVar7 = plVar2 + 5;
    local_18 = (longlong *)0x0;
    plVar4 = plVar7;
    if (0xf < (ulonglong)plVar2[8]) {
      plVar4 = (longlong *)*plVar7;
    }
    lVar3 = strtol((char *)plVar4,(char **)&local_18,10);
    if (0xf < (ulonglong)plVar2[8]) {
      plVar7 = (longlong *)*plVar7;
    }
    if (local_18 == plVar7) {
      lVar3 = 0;
    }
    return lVar3;
  }
  return 0;
}


