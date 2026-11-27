// 0x180022eb0  FUN_180022eb0
// size=76 thunk=false
// signature: undefined FUN_180022eb0()
// status: ok


void FUN_180022eb0(undefined8 param_1)

{
  HMODULE hModule;
  
  if (DAT_180425fe8 == (FARPROC)0x0) {
    hModule = GetModuleHandleA("lua_shared.dll");
    DAT_180425fe8 = GetProcAddress(hModule,"luaL_checklstring");
  }
                    /* WARNING: Could not recover jumptable at 0x000180022ef9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_180425fe8)(param_1,0xffffffff,0);
  return;
}


