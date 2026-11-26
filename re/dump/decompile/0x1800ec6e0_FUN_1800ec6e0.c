// 0x1800ec6e0  FUN_1800ec6e0
// size=135 thunk=false
// signature: undefined FUN_1800ec6e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ec6e0(longlong param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  if (param_1 != 0) {
    local_18 = 0;
    puVar2 = (ulonglong *)&local_18;
    local_14 = 2;
    do {
      lVar1 = FUN_1800ebf80((int)*puVar2);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) == param_1)) {
        FUN_1800240f0(lVar1,1,0);
        return 1;
      }
      puVar2 = (ulonglong *)((longlong)puVar2 + 4);
    } while (puVar2 != &local_10);
  }
  return 0;
}


