// 0x1801ebc10  FUN_1801ebc10
// size=144 thunk=false
// signature: undefined FUN_1801ebc10()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1801ebc10(LPCWSTR param_1)

{
  BOOL BVar1;
  HMODULE pHVar2;
  undefined1 auStack_38 [32];
  HMODULE local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  if (param_1 != (LPCWSTR)0x0) {
    local_18 = (HMODULE)0x0;
    BVar1 = GetModuleHandleExW(6,param_1,&local_18);
    if ((BVar1 != 0) && (local_18 != (HMODULE)0x0)) {
      pHVar2 = GetModuleHandleW(L"graphics-hook64.dll");
      if ((local_18 != pHVar2) &&
         (pHVar2 = GetModuleHandleW(L"graphics-hook32.dll"), local_18 != pHVar2)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}


