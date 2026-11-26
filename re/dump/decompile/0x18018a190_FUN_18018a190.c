// 0x18018a190  FUN_18018a190
// size=306 thunk=false
// signature: undefined FUN_18018a190()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18018a190(longlong *param_1)

{
  char cVar1;
  BOOL BVar2;
  longlong *plVar3;
  char *pcVar4;
  undefined1 auStack_68 [32];
  char local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  longlong *local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  if (param_1 == (longlong *)0x0) {
    return 1;
  }
  local_20 = param_1;
  BVar2 = IsBadReadPtr(param_1,8);
  if (BVar2 != 0) {
    return 1;
  }
  BVar2 = IsBadReadPtr((void *)*param_1,8);
  if (BVar2 != 0) {
    return 1;
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
  if ((plVar3 != (longlong *)0x0) && (cVar1 = (**(code **)(*plVar3 + 0x40))(plVar3), cVar1 == '\0'))
  {
    local_48 = 0;
    local_48 = (**(code **)(*param_1 + 0x420))(param_1);
    if (local_48 != '\0') {
      local_20 = (longlong *)0x93fd561a96ab0c67;
      local_18 = 0x5391b64679e936ba;
      plVar3 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_40,&local_20);
      plVar3 = (longlong *)FUN_180241a30(*plVar3 + 0x28,local_30,&local_18);
      pcVar4 = (char *)FUN_1801fcfc0(*plVar3 + 0x28);
      if (*pcVar4 != '\0') {
        return 0;
      }
    }
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x28))(param_1);
    if ((plVar3 != (longlong *)0x0) &&
       (cVar1 = (**(code **)(*plVar3 + 0x18))(plVar3), cVar1 == '\0')) {
      return 1;
    }
    return 0;
  }
  return 1;
}


