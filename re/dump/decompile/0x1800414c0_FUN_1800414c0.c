// 0x1800414c0  FUN_1800414c0
// size=628 thunk=false
// signature: undefined FUN_1800414c0()
// status: ok


INT_PTR FUN_1800414c0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  HMODULE pHVar6;
  ulonglong uVar7;
  INT_PTR IVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 8) == 0)) {
    return 0;
  }
  if (DAT_1803ff8a8 != 0) {
    if (DAT_1803ff7d0 == *(longlong *)(param_1 + 8)) {
      return DAT_1803ff8a8;
    }
    DAT_1803e7564 = -1;
    DAT_1803ff8a8 = 0;
    DAT_1803ff7d0 = 0;
    DAT_1803ff8a0 = 0;
    puVar4 = (undefined4 *)&DAT_1803ff7e0;
    do {
      *(undefined1 *)puVar4 = 0;
      puVar4 = puVar4 + 6;
    } while (puVar4 != &DAT_1803ff8a0);
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if ((lVar2 != 0) && (uVar7 = *(ulonglong *)(lVar2 + 0x10), uVar7 != 0)) {
    plVar5 = (longlong *)DAT_1803fa7f0[1];
    cVar1 = *(char *)((longlong)plVar5 + 0x19);
    plVar10 = DAT_1803fa7f0;
    while (cVar1 == '\0') {
      plVar9 = plVar5;
      if ((ulonglong)plVar5[4] < uVar7) {
        plVar5 = plVar5 + 2;
        plVar9 = plVar10;
      }
      plVar5 = (longlong *)*plVar5;
      plVar10 = plVar9;
      cVar1 = *(char *)((longlong)plVar5 + 0x19);
    }
    if ((*(char *)((longlong)plVar10 + 0x19) != '\0') || (uVar7 < (ulonglong)plVar10[4])) {
      plVar10 = DAT_1803fa7f0;
    }
    if ((plVar10 != DAT_1803fa7f0) && (plVar10 != (longlong *)0xffffffffffffffd8)) {
      if (DAT_1803fcfa0 == (FARPROC)0x0) {
        pHVar6 = GetModuleHandleA("lua_shared.dll");
        DAT_1803fcfa0 = GetProcAddress(pHVar6,"lua_gettop");
      }
      uVar7 = (*DAT_1803fcfa0)(lVar2);
      if (DAT_180425b78 == (FARPROC)0x0) {
        pHVar6 = GetModuleHandleA("lua_shared.dll");
        DAT_180425b78 = GetProcAddress(pHVar6,"lua_newthread");
      }
      IVar8 = (*DAT_180425b78)(lVar2);
      if (IVar8 == 0) {
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar6 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar6,"lua_settop");
        }
        (*DAT_180425540)(lVar2,uVar7 & 0xffffffff);
        IVar8 = 0;
      }
      else {
        iVar3 = FUN_18002d7a0(param_1);
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar6 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar6,"lua_settop");
        }
        (*DAT_180425540)(lVar2,uVar7 & 0xffffffff);
        if (iVar3 < 0x40000000) {
          if (iVar3 != -1) {
            FUN_18002d8c0(param_1,iVar3);
          }
          FUN_180014410("[LUASTACK] refusing to open: private stack could not be hidden\n");
          IVar8 = 0;
        }
        else {
          DAT_1803e7564 = iVar3;
          DAT_1803ff7d0 = lVar2;
          DAT_1803ff8a8 = IVar8;
          FUN_180014410("[LUASTACK] private stack created\n");
        }
      }
      return IVar8;
    }
  }
  FUN_180014410("[LUASTACK] refusing to open: persist table unavailable\n");
  return 0;
}


