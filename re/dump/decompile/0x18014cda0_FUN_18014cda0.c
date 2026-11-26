// 0x18014cda0  FUN_18014cda0
// size=185 thunk=false
// signature: undefined FUN_18014cda0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_18014cda0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  char *_Str;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  char **local_38;
  undefined4 local_30;
  char *local_28;
  char *pcStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_68;
  local_28 = (char *)0x0;
  pcStack_20 = (char *)0x0;
  iVar3 = 0;
  local_18 = 0;
  if ((((longlong *)*param_1 != (longlong *)0x0) && (lVar1 = *(longlong *)*param_1, lVar1 != 0)) &&
     ((code *)param_1[1] != (code *)0x0)) {
    local_38 = &local_28;
    local_30 = 0;
    local_48 = 0;
    iVar2 = (*(code *)param_1[1])(lVar1,"PRAGMA freelist_count",FUN_18014cd50,&local_38);
    iVar3 = 0;
    if ((iVar2 == 0) && (local_28 != pcStack_20)) {
      _Str = local_28;
      if (0xf < *(ulonglong *)(local_28 + 0x18)) {
        _Str = *(char **)local_28;
      }
      iVar3 = atoi(_Str);
    }
  }
  FUN_18020d5c0(&local_28);
  return iVar3;
}


