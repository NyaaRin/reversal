// 0x1802d8d2c  FUN_1802d8d2c
// size=99 thunk=false
// signature: undefined FUN_1802d8d2c()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1802d8d2c(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
  if ((*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xf) != 0) {
    param_1 = ((ulonglong)*(byte *)(uVar1 + 3 + *(longlong *)(param_2 + 8)) & 0xfffffff0) + param_1;
  }
  return param_1;
}


