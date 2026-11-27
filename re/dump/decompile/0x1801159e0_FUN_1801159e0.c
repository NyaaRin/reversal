// 0x1801159e0  FUN_1801159e0
// size=109 thunk=false
// signature: undefined FUN_1801159e0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801159e0(longlong param_1,int param_2,undefined8 param_3)

{
  undefined8 *lpAddress;
  undefined1 auStack_38 [32];
  DWORD local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  lpAddress = (undefined8 *)(param_1 + (longlong)param_2 * 8);
  VirtualProtect(lpAddress,8,0x40,local_18);
  *lpAddress = param_3;
  VirtualProtect(lpAddress,8,local_18[0],(PDWORD)0x0);
  return;
}


