// 0x180155d10  FUN_180155d10
// size=159 thunk=false
// signature: undefined FUN_180155d10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180155d10(void)

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
  cVar1 = FUN_180155560();
  if (cVar1 != '\0') {
    local_28 = 0x93fd561a96ab0c67;
    local_20 = 0xda04d326321e3cd7;
    plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
    plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_38,&local_20);
    pcVar3 = (char *)FUN_1801fcfc0(*plVar2 + 0x28);
    if (*pcVar3 != '\0') {
      return 1;
    }
  }
  return 0;
}


