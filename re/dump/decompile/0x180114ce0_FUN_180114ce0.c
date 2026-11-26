// 0x180114ce0  FUN_180114ce0
// size=205 thunk=false
// signature: undefined FUN_180114ce0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180114ce0(void)

{
  char cVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  AcquireSRWLockShared((PSRWLOCK)&DAT_18040a280);
  if ((DAT_18040a258 == 0) && (DAT_18040a388 == '\0')) {
    local_28 = 0x93fd561a96ab0c67;
    local_20 = 0xb900ad038caed4bd;
    plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
    plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_38,&local_20);
    pcVar3 = (char *)FUN_1801fcfc0(*plVar2 + 0x28);
    if ((*pcVar3 != '\0') && (DAT_1803e8840 != '\0')) {
      cVar1 = FUN_180114710();
      if (cVar1 != '\0') {
        uVar4 = 1;
        goto LAB_180114d8a;
      }
    }
  }
  uVar4 = 0;
LAB_180114d8a:
  ReleaseSRWLockShared((PSRWLOCK)&DAT_18040a280);
  return uVar4;
}


