// 0x1801145d0  FUN_1801145d0
// size=320 thunk=false
// signature: undefined FUN_1801145d0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801145d0(void)

{
  longlong *plVar1;
  char *pcVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  local_20 = 0x6c96c33ad11a014c;
  local_28 = 0x93fd561a96ab0c67;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_38,&local_20);
  pcVar2 = (char *)FUN_1801fcfc0(*plVar1 + 0x28);
  if (*pcVar2 != '\0') {
    local_20 = 0x93fd561a96ab0c67;
    local_28 = 0x404ea8e2391a46c5;
    plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_38,&local_20);
    plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_48,&local_28);
    pcVar2 = (char *)FUN_1801fcfc0(*plVar1 + 0x28);
    if (*pcVar2 != '\0') {
      local_20 = 0x93fd561a96ab0c67;
      local_28 = 0xb900ad038caed4bd;
      plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_38,&local_20);
      plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_48,&local_28);
      pcVar2 = (char *)FUN_1801fcfc0(*plVar1 + 0x28);
      if (*pcVar2 != '\0') {
        return 1;
      }
    }
  }
  return 0;
}


