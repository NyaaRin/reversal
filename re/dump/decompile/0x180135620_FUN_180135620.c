// 0x180135620  FUN_180135620
// size=132 thunk=false
// signature: undefined FUN_180135620()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180135620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_48 [16];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_1803da4c0 ^ (ulonglong)auStack_78;
  local_58 = 0;
  local_50 = param_1;
  FUN_180135100(local_48);
  if (local_38 == 0) {
    FUN_1801338c0(param_1,param_2,param_3);
  }
  else {
    FUN_18016d4c0(param_1,local_48);
  }
  local_58 = 1;
  FUN_18020e450(local_48);
  return param_1;
}


