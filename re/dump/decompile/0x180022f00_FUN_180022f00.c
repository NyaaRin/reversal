// 0x180022f00  FUN_180022f00
// size=81 thunk=false
// signature: undefined FUN_180022f00()
// status: ok


void FUN_180022f00(undefined8 param_1,uint param_2)

{
  HMODULE hModule;
  
  if (DAT_180423ad0 == (FARPROC)0x0) {
    hModule = GetModuleHandleA("lua_shared.dll");
    DAT_180423ad0 = GetProcAddress(hModule,"lua_pushvalue");
  }
                    /* WARNING: Could not recover jumptable at 0x000180022f4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_180423ad0)(param_1,(ulonglong)param_2);
  return;
}


