// 0x18014fcf0  FUN_18014fcf0
// size=192 thunk=false
// signature: undefined FUN_18014fcf0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18014fcf0(LPCWSTR param_1,longlong param_2)

{
  BOOL BVar1;
  BOOL BVar2;
  HANDLE hFile;
  undefined8 uVar3;
  undefined4 extraout_var;
  undefined1 auStackY_58 [32];
  FILETIME local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStackY_58;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    param_1 = *(LPCWSTR *)param_1;
  }
  hFile = CreateFileW(param_1,0x100,7,(LPSECURITY_ATTRIBUTES)0x0,3,0x2000000,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    uVar3 = 0xffffffffffffff00;
  }
  else {
    local_18 = (FILETIME)((param_2 + 0x2b6109100) * 10000000);
    BVar1 = SetFileTime(hFile,&local_18,&local_18,&local_18);
    BVar2 = CloseHandle(hFile);
    uVar3 = CONCAT71((int7)(CONCAT44(extraout_var,BVar2) >> 8),BVar1 != 0);
  }
  return uVar3;
}


