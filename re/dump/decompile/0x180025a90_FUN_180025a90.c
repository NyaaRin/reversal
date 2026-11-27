// 0x180025a90  FUN_180025a90
// size=360 thunk=false
// signature: undefined FUN_180025a90()
// status: ok


void FUN_180025a90(longlong *param_1)

{
  longlong lVar1;
  HMODULE pHVar2;
  ulonglong uVar3;
  
  if ((*(char *)((longlong)param_1 + 0xc) != '\0') && (*param_1 != 0)) {
    if ((DAT_18042cd60 & 1) == 0) {
      DAT_18042cd60 = DAT_18042cd60 | 1;
      pHVar2 = GetModuleHandleA("lua_shared.dll");
      DAT_1804277b0 = GetProcAddress(pHVar2,"luaL_unref");
    }
    if ((DAT_18042cd60 & 2) == 0) {
      DAT_18042cd60 = DAT_18042cd60 | 2;
      pHVar2 = GetModuleHandleA("lua_shared.dll");
      DAT_180426250 = GetProcAddress(pHVar2,"lua_rawgeti");
    }
    if ((DAT_1804277b0 != (FARPROC)0x0) && (DAT_180426250 != (FARPROC)0x0)) {
      lVar1 = *param_1;
      if (DAT_1803fcfa0 == (FARPROC)0x0) {
        pHVar2 = GetModuleHandleA("lua_shared.dll");
        DAT_1803fcfa0 = GetProcAddress(pHVar2,"lua_gettop");
      }
      uVar3 = (*DAT_1803fcfa0)(lVar1);
      (*DAT_180426250)(*param_1,0xffffd8f0,(ulonglong)*(uint *)(param_1 + 1));
      (*DAT_1803fcbe0)(*param_1,0xffffd8f0,"_VMEVENTS");
      (*DAT_1804277b0)(*param_1,0xffffd8f0,(ulonglong)*(uint *)(param_1 + 1));
      lVar1 = *param_1;
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar2 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar2,"lua_settop");
      }
      (*DAT_180425540)(lVar1,uVar3 & 0xffffffff);
    }
  }
  return;
}


