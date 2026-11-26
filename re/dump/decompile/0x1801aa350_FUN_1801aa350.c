// 0x1801aa350  FUN_1801aa350
// size=171 thunk=false
// signature: undefined FUN_1801aa350()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801aa350(longlong *param_1,ulonglong param_2,undefined4 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_38 [32];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  param_1 = (longlong *)*param_1;
  plVar3 = (longlong *)param_1[1];
  cVar1 = *(char *)((longlong)plVar3 + 0x19);
  plVar2 = param_1;
  while (cVar1 == '\0') {
    plVar4 = plVar3;
    if ((ulonglong)plVar3[4] < param_2) {
      plVar3 = plVar3 + 2;
      plVar4 = plVar2;
    }
    plVar3 = (longlong *)*plVar3;
    plVar2 = plVar4;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  if (((*(char *)((longlong)plVar2 + 0x19) == '\0') && ((ulonglong)plVar2[4] <= param_2)) &&
     (plVar2 != param_1)) {
    plVar4 = plVar2 + 5;
    local_18 = (longlong *)0x0;
    plVar3 = plVar4;
    if (0xf < (ulonglong)plVar2[8]) {
      plVar3 = (longlong *)*plVar4;
    }
    uVar5 = strtof(plVar3,&local_18);
    if (0xf < (ulonglong)plVar2[8]) {
      plVar4 = (longlong *)*plVar4;
    }
    if (local_18 != plVar4) {
      *param_3 = uVar5;
    }
  }
  return;
}


