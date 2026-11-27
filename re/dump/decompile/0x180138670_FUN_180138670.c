// 0x180138670  FUN_180138670
// size=128 thunk=false
// signature: undefined FUN_180138670()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180138670(char *param_1)

{
  int iVar1;
  char ***_Str1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  char **local_30 [2];
  longlong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  FUN_180138610(local_30);
  if ((local_20 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    if (0xf < *(ulonglong *)(param_1 + 0x18)) {
      param_1 = *(char **)param_1;
    }
    _Str1 = local_30;
    if (0xf < local_18) {
      _Str1 = (char ***)local_30[0];
    }
    iVar1 = _stricmp((char *)_Str1,param_1);
    if (iVar1 == 0) {
      uVar2 = 1;
      goto LAB_1801386d0;
    }
  }
  uVar2 = 0;
LAB_1801386d0:
  FUN_18020e450(local_30);
  return uVar2;
}


