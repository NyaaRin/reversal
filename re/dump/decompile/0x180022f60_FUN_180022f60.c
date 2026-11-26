// 0x180022f60  FUN_180022f60
// size=68 thunk=false
// signature: undefined FUN_180022f60()
// status: ok


void FUN_180022f60(undefined8 param_1)

{
  HMODULE hModule;
  
  if (DAT_1803fcfa0 == (FARPROC)0x0) {
    hModule = GetModuleHandleA("lua_shared.dll");
    DAT_1803fcfa0 = GetProcAddress(hModule,"lua_gettop");
  }
                    /* WARNING: Could not recover jumptable at 0x000180022fa1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1803fcfa0)(param_1);
  return;
}


