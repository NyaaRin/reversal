// 0x180023180  FUN_180023180
// size=191 thunk=false
// signature: undefined FUN_180023180()
// status: ok


ulonglong FUN_180023180(undefined8 param_1,uint param_2,uint param_3)

{
  HMODULE hModule;
  ulonglong uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  char local_10;
  
  if (DAT_180426008 == (FARPROC)0x0) {
    hModule = GetModuleHandleA("lua_shared.dll");
    DAT_180426008 = GetProcAddress(hModule,"lua_pcall");
    if (DAT_180426008 == (FARPROC)0x0) {
      return 0xffffffff;
    }
  }
  FUN_180023010(&local_28,param_1);
  uVar1 = (*DAT_180426008)(param_1,(ulonglong)param_2,(ulonglong)param_3,0);
  if ((local_10 != '\0') && (DAT_1803fae90 != (code *)0x0)) {
    (*DAT_1803fae90)(local_28,local_20,local_18,local_14);
  }
  return uVar1 & 0xffffffff;
}


