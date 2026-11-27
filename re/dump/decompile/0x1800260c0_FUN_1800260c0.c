// 0x1800260c0  FUN_1800260c0
// size=666 thunk=false
// signature: undefined FUN_1800260c0()
// status: ok


undefined8 FUN_1800260c0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  HMODULE pHVar5;
  INT_PTR IVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  
  if (((param_1 != 0) && (cVar2 = FUN_180025450(), cVar2 != '\0')) &&
     (uVar1 = *(ulonglong *)(param_1 + 0x10), uVar1 != 0)) {
    plVar3 = (longlong *)DAT_1803fa7f0[1];
    cVar2 = *(char *)((longlong)plVar3 + 0x19);
    plVar8 = DAT_1803fa7f0;
    while (cVar2 == '\0') {
      plVar7 = plVar3;
      if ((ulonglong)plVar3[4] < uVar1) {
        plVar3 = plVar3 + 2;
        plVar7 = plVar8;
      }
      plVar3 = (longlong *)*plVar3;
      plVar8 = plVar7;
      cVar2 = *(char *)((longlong)plVar3 + 0x19);
    }
    if ((*(char *)((longlong)plVar8 + 0x19) != '\0') || (uVar1 < (ulonglong)plVar8[4])) {
      plVar8 = DAT_1803fa7f0;
    }
    if ((plVar8 != DAT_1803fa7f0) && (plVar8 != (longlong *)0xffffffffffffffd8)) {
      puVar4 = (undefined8 *)FUN_180025620(param_2);
      if (DAT_180423ad0 == (FARPROC)0x0) {
        pHVar5 = GetModuleHandleA("lua_shared.dll");
        DAT_180423ad0 = GetProcAddress(pHVar5,"lua_pushvalue");
      }
      (*DAT_180423ad0)(param_1,0xffffd8ed);
      if (DAT_1803fe490 == (FARPROC)0x0) {
        pHVar5 = GetModuleHandleA("lua_shared.dll");
        DAT_1803fe490 = GetProcAddress(pHVar5,"lua_type");
      }
      IVar6 = (*DAT_1803fe490)(param_1,0xffffffff);
      if ((int)IVar6 == 5) {
        puVar9 = puVar4;
        if (0xf < (ulonglong)puVar4[3]) {
          puVar9 = (undefined8 *)*puVar4;
        }
        (*DAT_1803fcba8)(param_1,0xffffffff,puVar9);
        if (DAT_1803fe490 == (FARPROC)0x0) {
          pHVar5 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(pHVar5,"lua_type");
        }
        IVar6 = (*DAT_1803fe490)(param_1,0xffffffff);
        if ((int)IVar6 != 5) {
          if (DAT_180425540 == (FARPROC)0x0) {
            pHVar5 = GetModuleHandleA("lua_shared.dll");
            DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
          }
          (*DAT_180425540)(param_1,0xfffffffe);
          if (DAT_1803fd0f8 == (FARPROC)0x0) {
            pHVar5 = GetModuleHandleA("lua_shared.dll");
            DAT_1803fd0f8 = GetProcAddress(pHVar5,"lua_createtable");
          }
          (*DAT_1803fd0f8)(param_1,0,8);
          if (DAT_180423ad0 == (FARPROC)0x0) {
            pHVar5 = GetModuleHandleA("lua_shared.dll");
            DAT_180423ad0 = GetProcAddress(pHVar5,"lua_pushvalue");
          }
          (*DAT_180423ad0)(param_1,0xffffffff);
          if (0xf < (ulonglong)puVar4[3]) {
            puVar4 = (undefined8 *)*puVar4;
          }
          (*DAT_1803fcbe0)(param_1,0xfffffffd,puVar4);
        }
        (*DAT_1803fcba0)(param_1,0xfffffffe);
        return 1;
      }
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar5 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
      }
      (*DAT_180425540)(param_1,0xfffffffe);
    }
  }
  return 0;
}


