// 0x1800137a0  std__System_error_category_vfunc02
// size=186 thunk=false
// signature: undefined std__System_error_category_vfunc02()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
std__System_error_category_vfunc02(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_30;
  HLOCAL local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_28 = (HLOCAL)0x0;
  local_30 = param_2;
  local_20 = FUN_1802d7ff4(param_3,&local_28);
  if ((local_28 == (HLOCAL)0x0) || (local_20 == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    FUN_18001d080(param_2,"unknown error",0xd);
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    FUN_18001d080(param_2);
  }
  local_38 = 1;
  LocalFree(local_28);
  return param_2;
}


