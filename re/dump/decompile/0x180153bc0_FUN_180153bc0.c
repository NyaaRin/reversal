// 0x180153bc0  FUN_180153bc0
// size=155 thunk=false
// signature: undefined FUN_180153bc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180153bc0(void)

{
  BOOL BVar1;
  undefined1 auStack_38 [32];
  DWORD local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  if (DAT_180400af8 != (HANDLE)0x0) {
    local_18[0] = 0;
    BVar1 = GetExitCodeProcess(DAT_180400af8,local_18);
    if ((BVar1 != 0) && (local_18[0] == 0x103)) {
      TerminateProcess(DAT_180400af8,0);
      WaitForSingleObject(DAT_180400af8,1000);
    }
    CloseHandle(DAT_180400af8);
    DAT_180400af8 = (HANDLE)0x0;
    DAT_180400b04 = 0;
    DAT_180400b00 = 0;
  }
  return;
}


