// 0x180013100  FUN_180013100
// size=120 thunk=false
// signature: undefined FUN_180013100()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_180013100(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  char *local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  *param_1 = vftable_std_exception;
  param_1[1] = 0;
  param_1[2] = 0;
  local_20 = "Invalid module passed.";
  local_18 = 1;
  local_28 = param_1;
  __std_exception_copy(&local_20);
  *param_1 = vftable_std_logic_error;
  *param_1 = vftable_std_invalid_argument;
  return param_1;
}


