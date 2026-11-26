// 0x180114890  FUN_180114890
// size=247 thunk=false
// signature: undefined FUN_180114890()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180114890(void)

{
  char cVar1;
  longlong *plVar2;
  char *pcVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  AcquireSRWLockShared((PSRWLOCK)&DAT_18040a280);
  plVar2 = (longlong *)0x0;
  plVar4 = (longlong *)0x0;
  if (((DAT_18040a258 != (longlong *)0x0) && (DAT_18040a26c == DAT_1803e8844)) &&
     (DAT_18040a389 != '\0')) {
    local_28 = 0x93fd561a96ab0c67;
    local_20 = 0xb900ad038caed4bd;
    plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
    plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_38,&local_20);
    pcVar3 = (char *)FUN_1801fcfc0(*plVar2 + 0x28);
    plVar2 = plVar4;
    if ((*pcVar3 != '\0') && (DAT_1803e8840 != '\0')) {
      cVar1 = FUN_180114710();
      if (cVar1 != '\0') {
        (**(code **)(*DAT_18040a258 + 8))();
        plVar2 = DAT_18040a258;
      }
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_18040a280);
  return plVar2;
}


