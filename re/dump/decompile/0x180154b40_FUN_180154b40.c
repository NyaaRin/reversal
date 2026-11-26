// 0x180154b40  FUN_180154b40
// size=631 thunk=false
// signature: undefined FUN_180154b40()
// status: ok


undefined1 FUN_180154b40(void)

{
  HMODULE hModule;
  
  if (DAT_180409f60 != '\0') {
    return 1;
  }
  hModule = GetModuleHandleA("lua_shared.dll");
  if (hModule == (HMODULE)0x0) {
    return 0;
  }
  DAT_180409e50 = GetProcAddress(hModule,"lua_gettop");
  DAT_180409f20 = GetProcAddress(hModule,"lua_settop");
  DAT_180409f10 = GetProcAddress(hModule,"lua_type");
  DAT_180409e58 = GetProcAddress(hModule,"lua_tolstring");
  DAT_180409f30 = GetProcAddress(hModule,"lua_pushstring");
  DAT_180409f48 = GetProcAddress(hModule,"lua_pushlstring");
  DAT_180409d08 = GetProcAddress(hModule,"lua_pushnumber");
  DAT_180409e48 = GetProcAddress(hModule,"lua_pushboolean");
  DAT_180409e60 = GetProcAddress(hModule,"lua_rawset");
  DAT_180409f58 = GetProcAddress(hModule,"lua_pushnil");
  DAT_180409f50 = GetProcAddress(hModule,"lua_replace");
  DAT_180409f38 = GetProcAddress(hModule,"lua_rawget");
  DAT_180409f18 = GetProcAddress(hModule,"lua_rawgeti");
  DAT_180409d10 = GetProcAddress(hModule,"lua_rawseti");
  DAT_180409d38 = GetProcAddress(hModule,"lua_objlen");
  DAT_180409d48 = GetProcAddress(hModule,"lua_tocfunction");
  if (((((DAT_180409e50 != (FARPROC)0x0) && (DAT_180409f20 != (FARPROC)0x0)) &&
       (DAT_180409f10 != (FARPROC)0x0)) &&
      (((DAT_180409e58 != (FARPROC)0x0 && (DAT_180409f30 != (FARPROC)0x0)) &&
       ((DAT_180409f58 != (FARPROC)0x0 &&
        ((DAT_180409f50 != (FARPROC)0x0 && (DAT_180409f38 != (FARPROC)0x0)))))))) &&
     ((DAT_180409f18 != (FARPROC)0x0 &&
      (((((DAT_180409d10 != (FARPROC)0x0 && (DAT_180409d38 != (FARPROC)0x0)) &&
         (DAT_180409d48 != (FARPROC)0x0)) &&
        ((DAT_180409f48 != (FARPROC)0x0 && (DAT_180409d08 != (FARPROC)0x0)))) &&
       ((DAT_180409e48 != (FARPROC)0x0 && (DAT_180409e60 != (FARPROC)0x0)))))))) {
    DAT_180409f60 = 1;
    return 1;
  }
  DAT_180409f60 = 0;
  return 0;
}


