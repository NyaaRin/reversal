// 0x1800ed4f0  FUN_1800ed4f0
// size=203 thunk=false
// signature: undefined FUN_1800ed4f0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ed4f0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  HMODULE hModule;
  undefined8 uVar3;
  ulonglong *puVar4;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1803da4c0 ^ (ulonglong)auStack_38;
  if (param_1 != 0) {
    local_18 = 0;
    puVar4 = (ulonglong *)&local_18;
    local_14 = 2;
    do {
      plVar1 = (longlong *)FUN_1800ebf80((int)*puVar4);
      if ((plVar1 != (longlong *)0x0) && (plVar1[1] == param_1)) {
        lVar2 = (**(code **)(*plVar1 + 0x158))(plVar1,1);
        if (lVar2 == 0) {
          return 0;
        }
        if (DAT_1803fcfa0 == (FARPROC)0x0) {
          hModule = GetModuleHandleA("lua_shared.dll");
          DAT_1803fcfa0 = GetProcAddress(hModule,"lua_gettop");
        }
        (*DAT_1803fcfa0)(param_1);
        uVar3 = FUN_18003a310(lVar2);
        return uVar3;
      }
      puVar4 = (ulonglong *)((longlong)puVar4 + 4);
    } while (puVar4 != &local_10);
  }
  return 0;
}


