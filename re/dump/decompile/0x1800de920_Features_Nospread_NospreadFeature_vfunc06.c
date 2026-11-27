// 0x1800de920  Features_Nospread_NospreadFeature_vfunc06
// size=134 thunk=false
// signature: undefined Features_Nospread_NospreadFeature_vfunc06()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void Features_Nospread_NospreadFeature_vfunc06(void)

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
  local_28 = 0x93fd561a96ab0c67;
  local_20 = 0x4660102069c10657;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_38,&local_20);
  pcVar2 = (char *)FUN_1801fcfc0(*plVar1 + 0x28);
  if (*pcVar2 != '\0') {
    FUN_180076b50();
  }
  return;
}


