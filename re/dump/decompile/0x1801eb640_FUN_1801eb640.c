// 0x1801eb640  FUN_1801eb640
// size=261 thunk=false
// signature: undefined FUN_1801eb640()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801eb640(void)

{
  char cVar1;
  longlong *plVar2;
  char *pcVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  cVar1 = FUN_1801eb5c0();
  if (cVar1 != '\0') {
    return 1;
  }
  local_28 = 0x93fd561a96ab0c67;
  local_20 = 0x8d6c6958b3bd884;
  plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
  plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_38,&local_20);
  pcVar3 = (char *)FUN_1801fcfc0(*plVar2 + 0x28);
  if (*pcVar3 != '\0') {
    AcquireSRWLockShared((PSRWLOCK)&DAT_1803ff290);
    if ((DAT_1803ff284 == '\0') && (-1 < DAT_1803da6a0)) {
      lVar4 = DAT_1803fa4c8;
      if ((DAT_1803da6a0 != 0) && (lVar4 = 0, DAT_1803da6a0 == 1)) {
        lVar4 = DAT_1803fa500;
      }
      if ((lVar4 != 0) && (DAT_1803fa455 != '\0')) {
        ReleaseSRWLockShared((PSRWLOCK)&DAT_1803ff290);
        return 1;
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_1803ff290);
  }
  return 0;
}


