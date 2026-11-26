// 0x180147920  FUN_180147920
// size=225 thunk=false
// signature: undefined FUN_180147920()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_180147920(longlong param_1)

{
  int iVar1;
  HMODULE pHVar2;
  HANDLE pvVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1803da4c0 ^ (ulonglong)auStack_58;
  pHVar2 = GetModuleHandleA("engine.dll");
  if (pHVar2 != (HMODULE)0x0) {
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    pvVar3 = GetCurrentProcess();
    iVar1 = K32GetModuleInformation(pvVar3,pHVar2,&local_30,0x18);
    if (iVar1 != 0) {
      lVar4 = 0;
      while (lVar4 + 0xcU < (uStack_28 & 0xffffffff)) {
        if ((((*(char *)((longlong)&pHVar2->unused + lVar4) == 'H') &&
             (*(char *)((longlong)&pHVar2->unused + lVar4 + 1) == -0x73)) &&
            (*(char *)((longlong)&pHVar2->unused + lVar4 + 2) == '\r')) &&
           (*(char *)((longlong)&pHVar2[1].unused + lVar4 + 3) == -0x18)) {
          if ((longlong)&pHVar2[3].unused + *(int *)((longlong)&pHVar2[2].unused + lVar4) + lVar4 ==
              param_1) {
            return (longlong)&pHVar2[1].unused +
                   lVar4 + *(int *)((longlong)&pHVar2->unused + lVar4 + 3) + 3;
          }
          lVar4 = lVar4 + 1;
        }
        else {
          lVar4 = lVar4 + 1;
        }
      }
    }
  }
  return 0;
}


