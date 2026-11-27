// 0x18014fdb0  FUN_18014fdb0
// size=212 thunk=false
// signature: undefined FUN_18014fdb0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_18014fdb0(LPCWSTR param_1)

{
  BOOL BVar1;
  HANDLE hFile;
  longlong lVar2;
  undefined1 auStackY_58 [32];
  _FILETIME local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStackY_58;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    param_1 = *(LPCWSTR *)param_1;
  }
  hFile = CreateFileW(param_1,0x80,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x2000000,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffffffffffff) {
    local_18.dwLowDateTime = 0;
    local_18.dwHighDateTime = 0;
    BVar1 = GetFileTime(hFile,(LPFILETIME)0x0,(LPFILETIME)0x0,&local_18);
    CloseHandle(hFile);
    if (BVar1 != 0) {
      lVar2 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816((longlong)local_18 + -0x19db1ded53e8000)
                     ,8) + (longlong)local_18 + -0x19db1ded53e8000;
      return (lVar2 >> 0x17) - (lVar2 >> 0x3f);
    }
  }
  return 0;
}


