// 0x180025890  FUN_180025890
// size=506 thunk=false
// signature: undefined FUN_180025890()
// status: ok


longlong * FUN_180025890(longlong *param_1,longlong param_2)

{
  char cVar1;
  HMODULE pHVar2;
  ulonglong uVar3;
  INT_PTR IVar4;
  longlong lVar5;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  if ((param_2 == 0) || (cVar1 = FUN_180025450(), cVar1 == '\0')) {
    return param_1;
  }
  if (DAT_180425550 == (FARPROC)0x0) {
    pHVar2 = GetModuleHandleA("lua_shared.dll");
    if (pHVar2 == (HMODULE)0x0) {
      return param_1;
    }
    DAT_180425550 = GetProcAddress(pHVar2,"luaL_ref");
    DAT_180426148 = GetProcAddress(pHVar2,"luaL_unref");
    if (DAT_180425550 == (FARPROC)0x0) {
      return param_1;
    }
  }
  if (DAT_180426148 == (FARPROC)0x0) {
    return param_1;
  }
  lVar5 = *param_1;
  if (DAT_1803fcfa0 == (FARPROC)0x0) {
    pHVar2 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fcfa0 = GetProcAddress(pHVar2,"lua_gettop");
  }
  uVar3 = (*DAT_1803fcfa0)(lVar5);
  (*DAT_1803fcba8)(*param_1,0xffffd8f0,"_VMEVENTS");
  lVar5 = *param_1;
  if (DAT_1803fe490 == (FARPROC)0x0) {
    pHVar2 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fe490 = GetProcAddress(pHVar2,"lua_type");
  }
  IVar4 = (*DAT_1803fe490)(lVar5,0xffffffff);
  lVar5 = *param_1;
  if ((int)IVar4 != 0) {
    IVar4 = (*DAT_180425550)(lVar5,0xffffd8f0);
    lVar5 = *param_1;
    *(int *)(param_1 + 1) = (int)IVar4;
    if (0 < (int)IVar4) {
      if (DAT_1803ff2a8 == (FARPROC)0x0) {
        pHVar2 = GetModuleHandleA("lua_shared.dll");
        DAT_1803ff2a8 = GetProcAddress(pHVar2,"lua_pushnil");
      }
      (*DAT_1803ff2a8)(lVar5);
      (*DAT_1803fcbe0)(*param_1,0xffffd8f0,"_VMEVENTS");
      lVar5 = *param_1;
      *(undefined1 *)((longlong)param_1 + 0xc) = 1;
    }
  }
  if (DAT_180425540 == (FARPROC)0x0) {
    pHVar2 = GetModuleHandleA("lua_shared.dll");
    DAT_180425540 = GetProcAddress(pHVar2,"lua_settop");
  }
  (*DAT_180425540)(lVar5,uVar3 & 0xffffffff);
  return param_1;
}


