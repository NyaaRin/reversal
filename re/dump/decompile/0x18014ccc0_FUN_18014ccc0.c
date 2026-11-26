// 0x18014ccc0  FUN_18014ccc0
// size=137 thunk=false
// signature: undefined FUN_18014ccc0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_18014ccc0(LPCSTR param_1,HMODULE param_2)

{
  HMODULE pHVar1;
  HANDLE pvVar2;
  HMODULE pHVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  pHVar1 = GetModuleHandleA(param_1);
  pHVar3 = (HMODULE)0x0;
  if (pHVar1 != (HMODULE)0x0) {
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    pvVar2 = GetCurrentProcess();
    pHVar3 = (HMODULE)K32GetModuleInformation(pvVar2,pHVar1,&local_28,0x18);
    if ((((int)pHVar3 != 0) && (pHVar1 <= param_2)) &&
       (pHVar3 = (HMODULE)((longlong)&pHVar1->unused + (uStack_20 & 0xffffffff)), param_2 < pHVar3))
    {
      return CONCAT71((int7)((ulonglong)pHVar3 >> 8),1);
    }
  }
  return (ulonglong)pHVar3 & 0xffffffffffffff00;
}


