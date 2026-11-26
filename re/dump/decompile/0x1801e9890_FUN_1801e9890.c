// 0x1801e9890  FUN_1801e9890
// size=201 thunk=false
// signature: undefined FUN_1801e9890()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1801e9890(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  if (param_1 != (longlong *)0x0) {
    local_28 = &local_18;
    local_18 = 0;
    iVar1 = (**(code **)(*param_1 + 0x90))(param_1,0,0,0);
    if ((-1 < iVar1) && (local_18 != 0)) {
      return local_18;
    }
    local_18 = 0;
    iVar1 = (**(code **)(*param_1 + 0x130))(param_1,0,&local_18);
    if ((-1 < iVar1) && (local_18 != 0)) {
      if (DAT_180426194 != '\0') {
        return local_18;
      }
      DAT_180426194 = 1;
      FUN_180014410("[VIS] GetBackBuffer failed, falling back to the bound RT\n");
      return local_18;
    }
  }
  return 0;
}


