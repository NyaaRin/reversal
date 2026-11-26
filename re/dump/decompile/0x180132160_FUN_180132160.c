// 0x180132160  FUN_180132160
// size=115 thunk=false
// signature: undefined FUN_180132160()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180132160(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  iVar1 = FUN_1801318c0(param_1,param_2,"GetSteamID");
  if (iVar1 < 0) {
    return 0;
  }
  local_18 = 0;
  (**(code **)(*param_1 + (longlong)iVar1 * 8))(param_1,&local_18);
  return local_18;
}


