// 0x1800265c0  FUN_1800265c0
// size=705 thunk=false
// signature: undefined FUN_1800265c0()
// status: ok


undefined8 FUN_1800265c0(longlong param_1)

{
  char cVar1;
  HMODULE pHVar2;
  ulonglong uVar3;
  INT_PTR IVar4;
  ulonglong uVar5;
  
  if (param_1 != 0) {
    cVar1 = FUN_180025450();
    if (cVar1 != '\0') {
      cVar1 = FUN_1800260c0(param_1,0x20cf586ef656cb7a);
      if (cVar1 != '\0') {
        if (DAT_1803fcfa0 == (FARPROC)0x0) {
          pHVar2 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fcfa0 = GetProcAddress(pHVar2,"lua_gettop");
        }
        uVar3 = (*DAT_1803fcfa0)(param_1);
        (*DAT_1803fcb98)(param_1,0);
        (*DAT_1803fcbb0)(param_1,uVar3 & 0xffffffff);
        if (DAT_1803fe490 == (FARPROC)0x0) {
          pHVar2 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(pHVar2,"lua_type");
        }
        IVar4 = (*DAT_1803fe490)(param_1,0xffffffff);
        if ((int)IVar4 == 5) {
          (*DAT_1803fcba0)(param_1,uVar3 & 0xffffffff);
          return 1;
        }
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar2 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar2,"lua_settop");
        }
        (*DAT_180425540)(param_1,0xfffffffe);
        if (DAT_1803fd0f8 == (FARPROC)0x0) {
          pHVar2 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fd0f8 = GetProcAddress(pHVar2,"lua_createtable");
        }
        (*DAT_1803fd0f8)(param_1,0,8);
        if (DAT_1803fcfa0 == (FARPROC)0x0) {
          pHVar2 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fcfa0 = GetProcAddress(pHVar2,"lua_gettop");
        }
        uVar5 = (*DAT_1803fcfa0)(param_1);
        if (DAT_1803fd0f8 == (FARPROC)0x0) {
          pHVar2 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fd0f8 = GetProcAddress(pHVar2,"lua_createtable");
        }
        (*DAT_1803fd0f8)(param_1,0,3);
        (*DAT_1803fcbc0)(param_1,FUN_180026360,0);
        (*DAT_1803fcbe0)(param_1,0xfffffffe,"__index");
        (*DAT_1803fcbc0)(param_1,FUN_180026560,0);
        (*DAT_1803fcbe0)(param_1,0xfffffffe,"__newindex");
        (*DAT_1803fcbd0)(param_1,0);
        (*DAT_1803fcbe0)(param_1,0xfffffffe,"__metatable");
        (*DAT_1803fcb90)(param_1,uVar5 & 0xffffffff);
        (*DAT_1803fcb98)(param_1,0);
        if (DAT_180423ad0 == (FARPROC)0x0) {
          pHVar2 = GetModuleHandleA("lua_shared.dll");
          DAT_180423ad0 = GetProcAddress(pHVar2,"lua_pushvalue");
        }
        (*DAT_180423ad0)(param_1,uVar5 & 0xffffffff);
        (*DAT_1803fcbb8)(param_1,uVar3 & 0xffffffff);
        (*DAT_1803fcba0)(param_1,uVar3 & 0xffffffff);
        return 1;
      }
    }
  }
  return 0;
}


