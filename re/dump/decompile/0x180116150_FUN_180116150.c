// 0x180116150  FUN_180116150
// size=131 thunk=false
// signature: undefined FUN_180116150()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180116150(undefined1 *param_1)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  uVar1 = *param_1;
  local_28 = 0x93fd561a96ab0c67;
  local_20 = 0x6c96c33ad11a014c;
  plVar2 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
  plVar2 = (longlong *)FUN_180241a30(*plVar2 + 0x28,local_38,&local_20);
  puVar3 = (undefined1 *)FUN_1801fcfc0(*plVar2 + 0x28);
  *puVar3 = uVar1;
  return;
}


