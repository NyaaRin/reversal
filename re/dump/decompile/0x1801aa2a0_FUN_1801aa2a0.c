// 0x1801aa2a0  FUN_1801aa2a0
// size=175 thunk=false
// signature: undefined FUN_1801aa2a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801aa2a0(longlong *param_1,ulonglong param_2,long *param_3)

{
  char cVar1;
  longlong *plVar2;
  long lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_38 [32];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  param_1 = (longlong *)*param_1;
  plVar4 = (longlong *)param_1[1];
  cVar1 = *(char *)((longlong)plVar4 + 0x19);
  plVar2 = param_1;
  while (cVar1 == '\0') {
    plVar5 = plVar4;
    if ((ulonglong)plVar4[4] < param_2) {
      plVar4 = plVar4 + 2;
      plVar5 = plVar2;
    }
    plVar4 = (longlong *)*plVar4;
    plVar2 = plVar5;
    cVar1 = *(char *)((longlong)plVar4 + 0x19);
  }
  if (((*(char *)((longlong)plVar2 + 0x19) == '\0') && ((ulonglong)plVar2[4] <= param_2)) &&
     (plVar2 != param_1)) {
    plVar5 = plVar2 + 5;
    local_18 = (longlong *)0x0;
    plVar4 = plVar5;
    if (0xf < (ulonglong)plVar2[8]) {
      plVar4 = (longlong *)*plVar5;
    }
    lVar3 = strtol((char *)plVar4,(char **)&local_18,10);
    if (0xf < (ulonglong)plVar2[8]) {
      plVar5 = (longlong *)*plVar5;
    }
    if (local_18 != plVar5) {
      *param_3 = lVar3;
    }
  }
  return;
}


