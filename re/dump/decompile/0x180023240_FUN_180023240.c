// 0x180023240  FUN_180023240
// size=68 thunk=false
// signature: undefined FUN_180023240()
// status: ok


void FUN_180023240(undefined8 param_1)

{
  HMODULE hModule;
  
  if (DAT_1803ff2a8 == (FARPROC)0x0) {
    hModule = GetModuleHandleA("lua_shared.dll");
    DAT_1803ff2a8 = GetProcAddress(hModule,"lua_pushnil");
  }
                    /* WARNING: Could not recover jumptable at 0x000180023281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1803ff2a8)(param_1);
  return;
}


