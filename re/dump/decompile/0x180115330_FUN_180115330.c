// 0x180115330  FUN_180115330
// size=148 thunk=false
// signature: undefined FUN_180115330()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180115330(void)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if (DAT_1803fa348 != 0) {
    local_28 = 0x93fd561a96ab0c67;
    local_20 = 0x5ec423757a9ceab;
    plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
    plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_38,&local_20);
    FUN_1801fcfc0(*plVar1 + 0x28);
    FUN_1801152f0();
  }
  return;
}


