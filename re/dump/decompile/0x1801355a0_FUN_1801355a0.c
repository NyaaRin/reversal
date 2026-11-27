// 0x1801355a0  FUN_1801355a0
// size=116 thunk=false
// signature: undefined FUN_1801355a0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_1801355a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  FUN_1801338c0(local_38,param_1,param_2);
  if (local_28 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_180134a00(param_1,param_2,local_38);
  }
  FUN_18020e450(local_38);
  return uVar1;
}


