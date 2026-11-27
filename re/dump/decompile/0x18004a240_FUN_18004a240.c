// 0x18004a240  FUN_18004a240
// size=162 thunk=false
// signature: undefined FUN_18004a240()
// status: ok


undefined8 FUN_18004a240(undefined8 param_1)

{
  HMODULE pHVar1;
  
  if (DAT_180423ad0 == (FARPROC)0x0) {
    pHVar1 = GetModuleHandleA("lua_shared.dll");
    DAT_180423ad0 = GetProcAddress(pHVar1,"lua_pushvalue");
  }
  (*DAT_180423ad0)(param_1,2);
  if (DAT_1803faf68 != (code *)0x0) {
    (*DAT_1803faf68)(param_1,0);
    return 2;
  }
  if (DAT_1803ff2a8 == (FARPROC)0x0) {
    pHVar1 = GetModuleHandleA("lua_shared.dll");
    DAT_1803ff2a8 = GetProcAddress(pHVar1,"lua_pushnil");
  }
  (*DAT_1803ff2a8)(param_1);
  return 2;
}


