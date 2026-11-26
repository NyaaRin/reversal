// 0x18002d180  FUN_18002d180
// size=842 thunk=false
// signature: undefined FUN_18002d180()
// status: ok


void FUN_18002d180(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("lua_shared.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_1803faf58 = GetProcAddress(hModule,"lua_pushcclosure");
    DAT_1803fafa0 = GetProcAddress(hModule,"lua_pushstring");
    DAT_1803faed8 = GetProcAddress(hModule,"lua_pushnumber");
    DAT_1803faf68 = GetProcAddress(hModule,"lua_pushboolean");
    DAT_1803fb058 = GetProcAddress(hModule,"lua_toboolean");
    DAT_1803fafc0 = GetProcAddress(hModule,"lua_tonumber");
    DAT_1803fb008 = GetProcAddress(hModule,"lua_tolstring");
    DAT_1803faff8 = GetProcAddress(hModule,"lua_type");
    DAT_1803faf88 = GetProcAddress(hModule,"lua_rawgeti");
    DAT_1803faef0 = GetProcAddress(hModule,"lua_rawget");
    DAT_1803faee8 = GetProcAddress(hModule,"lua_getfield");
    DAT_1803fb098 = GetProcAddress(hModule,"lua_setfield");
    DAT_1803fb040 = GetProcAddress(hModule,"lua_getfenv");
    DAT_1803faf80 = GetProcAddress(hModule,"lua_getupvalue");
    DAT_1803fb088 = GetProcAddress(hModule,"lua_gettop");
    DAT_1803faf10 = GetProcAddress(hModule,"lua_settop");
    DAT_1803faf18 = GetProcAddress(hModule,"lua_tocfunction");
    DAT_1803fb048 = GetProcAddress(hModule,"lua_next");
    DAT_1803faf38 = GetProcAddress(hModule,"lua_pushvalue");
    DAT_1803fb030 = GetProcAddress(hModule,"lua_topointer");
    DAT_1803faec8 = GetProcAddress(hModule,"lua_touserdata");
    DAT_1803fb020 = GetProcAddress(hModule,"lua_rawequal");
    DAT_1803fb038 = GetProcAddress(hModule,"lua_checkstack");
    DAT_1803fafd8 = GetProcAddress(hModule,"lua_pushnil");
    DAT_1803fb000 = GetProcAddress(hModule,"lua_rawseti");
    DAT_1803faee0 = GetProcAddress(hModule,"lua_remove");
    DAT_1803faf60 = GetProcAddress(hModule,"lua_insert");
    DAT_1803fb050 = GetProcAddress(hModule,"lua_gettable");
    DAT_1803fafc8 = GetProcAddress(hModule,"lua_settable");
    DAT_1803faf40 = GetProcAddress(hModule,"lua_rawset");
    DAT_1803fb010 = GetProcAddress(hModule,"lua_getmetatable");
    DAT_1803faed0 = GetProcAddress(hModule,"lua_setmetatable");
    DAT_1803fb0a0 = GetProcAddress(hModule,"lua_objlen");
    DAT_1803faef8 = GetProcAddress(hModule,"lua_equal");
    DAT_1803faf48 = GetProcAddress(hModule,"lua_pushlstring");
  }
  return;
}


