// 0x180022fb0  FUN_180022fb0
// size=81 thunk=false
// signature: undefined FUN_180022fb0()
// status: ok


void FUN_180022fb0(undefined8 param_1,uint param_2)

{
  HMODULE hModule;
  
  if (DAT_180425540 == (FARPROC)0x0) {
    hModule = GetModuleHandleA("lua_shared.dll");
    DAT_180425540 = GetProcAddress(hModule,"lua_settop");
  }
                    /* WARNING: Could not recover jumptable at 0x000180022ffe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_180425540)(param_1,(ulonglong)param_2);
  return;
}


