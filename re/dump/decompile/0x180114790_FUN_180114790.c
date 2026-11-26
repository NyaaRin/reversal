// 0x180114790  FUN_180114790
// size=244 thunk=false
// signature: undefined FUN_180114790()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180114790(void)

{
  char cVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  local_20 = 0xb900ad038caed4bd;
  local_28 = 0x93fd561a96ab0c67;
  plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
  plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_38,&local_20);
  pcVar3 = (char *)FUN_1801fcfc0(*plVar2 + 0x28);
  if (*pcVar3 == '\0') {
    return 0;
  }
  local_20 = 0x93fd561a96ab0c67;
  local_28 = 0x8d6c6958b3bd884;
  plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_38,&local_20);
  plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_48,&local_28);
  pcVar3 = (char *)FUN_1801fcfc0(*plVar2 + 0x28);
  if ((*pcVar3 == '\0') && (cVar1 = FUN_1801145d0(), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}


