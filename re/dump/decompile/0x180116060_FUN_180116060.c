// 0x180116060  FUN_180116060
// size=228 thunk=false
// signature: undefined FUN_180116060()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_180116060(undefined1 *param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  local_28 = 0x93fd561a96ab0c67;
  local_20 = 0x6c96c33ad11a014c;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_48,&local_28);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_38,&local_20);
  puVar2 = (undefined1 *)FUN_1801fcfc0(*plVar1 + 0x28);
  local_20 = 0x93fd561a96ab0c67;
  local_28 = 0x6c96c33ad11a014c;
  *param_1 = *puVar2;
  plVar1 = (longlong *)FUN_180241a30(&DAT_1803fadf0,local_38,&local_20);
  plVar1 = (longlong *)FUN_180241a30(*plVar1 + 0x28,local_48,&local_28);
  puVar2 = (undefined1 *)FUN_1801fcfc0(*plVar1 + 0x28);
  *puVar2 = 0;
  return param_1;
}


