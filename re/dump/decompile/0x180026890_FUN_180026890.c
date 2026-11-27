// 0x180026890  FUN_180026890
// size=183 thunk=false
// signature: undefined FUN_180026890()
// status: ok


bool FUN_180026890(longlong param_1)

{
  char cVar1;
  HMODULE pHVar2;
  INT_PTR IVar3;
  
  if (param_1 != 0) {
    cVar1 = FUN_180025450();
    if (cVar1 != '\0') {
      if (DAT_1803fe490 == (FARPROC)0x0) {
        pHVar2 = GetModuleHandleA("lua_shared.dll");
        DAT_1803fe490 = GetProcAddress(pHVar2,"lua_type");
      }
      IVar3 = (*DAT_1803fe490)(param_1,0xffffffff);
      if ((int)IVar3 == 6) {
        cVar1 = FUN_1800265c0(param_1);
        if (cVar1 != '\0') {
          if (DAT_1804253c0 == (FARPROC)0x0) {
            pHVar2 = GetModuleHandleA("lua_shared.dll");
            DAT_1804253c0 = GetProcAddress(pHVar2,"lua_setfenv");
          }
          IVar3 = (*DAT_1804253c0)(param_1,0xfffffffe);
          return (int)IVar3 != 0;
        }
      }
    }
  }
  return false;
}


