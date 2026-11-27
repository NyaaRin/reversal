// 0x180025450  FUN_180025450
// size=454 thunk=false
// signature: undefined FUN_180025450()
// status: ok


bool FUN_180025450(void)

{
  HMODULE hModule;
  
  if (DAT_1803facfc != '\0') {
    return DAT_1803fcbd8 != (FARPROC)0x0;
  }
  hModule = GetModuleHandleA("lua_shared.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_1803facfc = '\x01';
    DAT_1803fcbd8 = GetProcAddress(hModule,"lua_pushstring");
    GetProcAddress(hModule,"lua_pushlstring");
    DAT_1803fcbc0 = GetProcAddress(hModule,"lua_pushcclosure");
    DAT_1803fcbd0 = GetProcAddress(hModule,"lua_pushboolean");
    DAT_1803fcbb0 = GetProcAddress(hModule,"lua_rawget");
    DAT_1803fcbb8 = GetProcAddress(hModule,"lua_rawset");
    DAT_1803fcba8 = GetProcAddress(hModule,"lua_getfield");
    DAT_1803fcbe0 = GetProcAddress(hModule,"lua_setfield");
    DAT_1803fcb90 = GetProcAddress(hModule,"lua_setmetatable");
    DAT_1803fcbc8 = GetProcAddress(hModule,"lua_insert");
    DAT_1803fcba0 = GetProcAddress(hModule,"lua_remove");
    DAT_1803fcb98 = GetProcAddress(hModule,"lua_pushnumber");
    if ((((((DAT_1803fcbd8 != (FARPROC)0x0) && (DAT_1803fcbc0 != (FARPROC)0x0)) &&
          (DAT_1803fcbb0 != (FARPROC)0x0)) &&
         ((DAT_1803fcbb8 != (FARPROC)0x0 && (DAT_1803fcba8 != (FARPROC)0x0)))) &&
        ((DAT_1803fcbe0 != (FARPROC)0x0 &&
         ((DAT_1803fcb90 != (FARPROC)0x0 && (DAT_1803fcbc8 != (FARPROC)0x0)))))) &&
       ((DAT_1803fcba0 != (FARPROC)0x0 && (DAT_1803fcb98 != (FARPROC)0x0)))) {
      return true;
    }
  }
  return false;
}


