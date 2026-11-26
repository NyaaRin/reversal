// 0x180020770  FUN_180020770
// size=97 thunk=false
// signature: undefined FUN_180020770()
// status: ok


void FUN_180020770(double param_1)

{
  HMODULE hModule;
  
  if ((DAT_180426240 & 1) == 0) {
    DAT_180426240 = DAT_180426240 | 1;
    hModule = GetModuleHandleA("vstdlib.dll");
    DAT_180427618 = GetProcAddress(hModule,"RandomSeed");
  }
  if (DAT_180427618 != (FARPROC)0x0) {
    (*DAT_180427618)((ulonglong)(uint)(int)param_1);
  }
  return;
}


