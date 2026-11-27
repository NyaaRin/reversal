// 0x180022850  FUN_180022850
// size=92 thunk=false
// signature: undefined FUN_180022850()
// status: ok


void FUN_180022850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  HMODULE hModule;
  
  if (DAT_1803feb68 == (FARPROC)0x0) {
    hModule = GetModuleHandleA("lua_shared.dll");
    DAT_1803feb68 = GetProcAddress(hModule,"luaL_loadbufferx");
  }
                    /* WARNING: Could not recover jumptable at 0x0001800228a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1803feb68)(param_1,param_2,param_3,param_4);
  return;
}


