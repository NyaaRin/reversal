// 0x1801759e0  FUN_1801759e0
// size=225 thunk=false
// signature: undefined FUN_1801759e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1801759e0(longlong *param_1,byte *param_2,undefined4 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(byte **)param_2;
  }
  uVar4 = 0x14650fb0739d0383;
  for (; (param_2 != (byte *)0x0 && (*param_2 != 0)); param_2 = param_2 + 1) {
    uVar4 = (uVar4 ^ *param_2) * 0x100000001b3;
  }
  param_1 = (longlong *)*param_1;
  plVar3 = (longlong *)param_1[1];
  cVar1 = *(char *)((longlong)plVar3 + 0x19);
  plVar2 = param_1;
  while (cVar1 == '\0') {
    plVar5 = plVar3;
    if ((ulonglong)plVar3[4] < uVar4) {
      plVar3 = plVar3 + 2;
      plVar5 = plVar2;
    }
    plVar3 = (longlong *)*plVar3;
    plVar2 = plVar5;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  if (((*(char *)((longlong)plVar2 + 0x19) == '\0') && ((ulonglong)plVar2[4] <= uVar4)) &&
     (plVar2 != param_1)) {
    plVar5 = plVar2 + 5;
    local_28 = (longlong *)0x0;
    plVar3 = plVar5;
    if (0xf < (ulonglong)plVar2[8]) {
      plVar3 = (longlong *)*plVar5;
    }
    uVar6 = strtof(plVar3,&local_28);
    if (0xf < (ulonglong)plVar2[8]) {
      plVar5 = (longlong *)*plVar5;
    }
    if (local_28 != plVar5) {
      return uVar6;
    }
  }
  return param_3;
}


