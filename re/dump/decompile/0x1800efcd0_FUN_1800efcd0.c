// 0x1800efcd0  FUN_1800efcd0
// size=118 thunk=false
// signature: undefined FUN_1800efcd0()
// status: ok


void FUN_1800efcd0(undefined8 param_1,undefined8 *param_2)

{
  HMODULE hModule;
  
  if (*(char *)(param_2 + 2) != '\0') {
    if ((DAT_1805c3910 & 1) == 0) {
      DAT_1805c3910 = DAT_1805c3910 | 1;
      hModule = GetModuleHandleA("lua_shared.dll");
      DAT_180427608 = GetProcAddress(hModule,"lua_sethook");
    }
    if (DAT_180427608 != (FARPROC)0x0) {
      (*DAT_180427608)(param_1,*param_2,(ulonglong)*(uint *)(param_2 + 1),
                       (ulonglong)*(uint *)((longlong)param_2 + 0xc));
    }
  }
  return;
}


