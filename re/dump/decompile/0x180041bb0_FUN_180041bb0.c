// 0x180041bb0  FUN_180041bb0
// size=519 thunk=false
// signature: undefined FUN_180041bb0()
// status: ok


undefined8 FUN_180041bb0(uint param_1)

{
  longlong lVar1;
  int iVar2;
  HMODULE pHVar3;
  INT_PTR IVar4;
  INT_PTR IVar5;
  INT_PTR IVar6;
  
  lVar1 = DAT_1803ff8a8;
  if (DAT_1803fe490 == (FARPROC)0x0) {
    pHVar3 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fe490 = GetProcAddress(pHVar3,"lua_type");
  }
  IVar4 = (*DAT_1803fe490)(lVar1,(ulonglong)param_1);
  lVar1 = DAT_1803ff8a8;
  if ((int)IVar4 == 5) {
    if (DAT_1803ff2d0 == (FARPROC)0x0) {
      pHVar3 = GetModuleHandleA("lua_shared.dll");
      DAT_1803ff2d0 = GetProcAddress(pHVar3,"lua_topointer");
    }
    IVar4 = (*DAT_1803ff2d0)(lVar1,(ulonglong)param_1);
    if (((IVar4 != 0) && (DAT_1803ff8a8 != 0)) && (DAT_1803fb038 != (code *)0x0)) {
      iVar2 = (*DAT_1803fb038)(DAT_1803ff8a8,2);
      lVar1 = DAT_1803ff8a8;
      if (iVar2 != 0) {
        if (DAT_180423ad0 == (FARPROC)0x0) {
          pHVar3 = GetModuleHandleA("lua_shared.dll");
          DAT_180423ad0 = GetProcAddress(pHVar3,"lua_pushvalue");
        }
        (*DAT_180423ad0)(lVar1,0xffffd8ee);
        lVar1 = DAT_1803ff8a8;
        if (DAT_1803ff2d0 == (FARPROC)0x0) {
          pHVar3 = GetModuleHandleA("lua_shared.dll");
          DAT_1803ff2d0 = GetProcAddress(pHVar3,"lua_topointer");
        }
        IVar5 = (*DAT_1803ff2d0)(lVar1,0xffffffff);
        lVar1 = DAT_1803ff8a8;
        if (DAT_1803fcfa0 == (FARPROC)0x0) {
          pHVar3 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fcfa0 = GetProcAddress(pHVar3,"lua_gettop");
        }
        IVar6 = (*DAT_1803fcfa0)(lVar1);
        lVar1 = DAT_1803ff8a8;
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar3 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar3,"lua_settop");
        }
        (*DAT_180425540)(lVar1,(ulonglong)((int)IVar6 - 1));
        if ((IVar5 != 0) && (IVar5 == IVar4)) {
          return 1;
        }
      }
    }
  }
  return 0;
}


