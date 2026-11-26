// 0x1800235f0  FUN_1800235f0
// size=81 thunk=false
// signature: undefined FUN_1800235f0()
// status: ok


void FUN_1800235f0(undefined8 param_1,uint param_2)

{
  HMODULE hModule;
  
  if (DAT_1803fe490 == (FARPROC)0x0) {
    hModule = GetModuleHandleA("lua_shared.dll");
    DAT_1803fe490 = GetProcAddress(hModule,"lua_type");
  }
                    /* WARNING: Could not recover jumptable at 0x00018002363e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1803fe490)(param_1,(ulonglong)param_2);
  return;
}


