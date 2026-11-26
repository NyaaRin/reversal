// 0x180184190  FUN_180184190
// size=235 thunk=false
// signature: undefined FUN_180184190()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180184190(longlong *param_1)

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
  if (((param_1 != (longlong *)0x0) &&
      (plVar2 = (longlong *)(**(code **)(*param_1 + 0x20))(), plVar2 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*plVar2 + 0x40))(plVar2), cVar1 == '\0')) {
    local_28 = 0x93fd561a96ab0c67;
    local_20 = 0x5391b64679e936ba;
    plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
    plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_38,&local_20);
    pcVar3 = (char *)FUN_1801fcfc0(*plVar2 + 0x28);
    if (((*pcVar3 != '\0') ||
        (plVar2 = (longlong *)(**(code **)(*param_1 + 0x28))(param_1), plVar2 == (longlong *)0x0))
       || (cVar1 = (**(code **)(*plVar2 + 0x18))(plVar2), cVar1 != '\0')) {
      return 0;
    }
  }
  return 1;
}


