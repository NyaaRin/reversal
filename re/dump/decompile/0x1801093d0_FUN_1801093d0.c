// 0x1801093d0  FUN_1801093d0
// size=235 thunk=false
// signature: undefined FUN_1801093d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801093d0(void)

{
  longlong *plVar1;
  char *pcVar2;
  int *piVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  local_20 = 0x214e9812b55edc3;
  local_28 = 0x93fd561a96ab0c67;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_38,&local_20);
  pcVar2 = (char *)FUN_1801fcfc0(*plVar1 + 0x28);
  if (*pcVar2 != '\0') {
    local_20 = 0x93fd561a96ab0c67;
    local_28 = 0xd7a75c528ea57217;
    plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_38,&local_20);
    plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_48,&local_28);
    piVar3 = (int *)FUN_1802029c0(*plVar1 + 0x28);
    if (*piVar3 == 1) {
      return 1;
    }
  }
  return 0;
}


