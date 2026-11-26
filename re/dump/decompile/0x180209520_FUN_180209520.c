// 0x180209520  FUN_180209520
// size=207 thunk=false
// signature: undefined FUN_180209520()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180209520(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 local_58 [32];
  int local_38 [2];
  undefined8 local_30;
  longlong local_28 [2];
  DWORD local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)local_58;
  lVar1 = (longlong)param_2 * 8;
  local_30 = *(undefined8 *)(lVar1 + DAT_1803faaf0);
  local_38[0] = param_2;
  FUN_180208e00(&DAT_1803fab00,local_28,local_38);
  *param_4 = *(undefined8 *)(local_28[0] + 0x28);
  LOCK();
  UNLOCK();
  VirtualProtect((LPVOID)(DAT_1803faaf0 + lVar1),8,0x40,local_18);
  *(undefined8 *)(lVar1 + DAT_1803faaf0) = param_3;
  VirtualProtect((LPVOID)(DAT_1803faaf0 + lVar1),8,local_18[0],(PDWORD)0x0);
  return;
}


