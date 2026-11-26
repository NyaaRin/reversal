// 0x180057ff0  FUN_180057ff0
// size=781 thunk=false
// signature: undefined FUN_180057ff0()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_180057ff0(undefined8 param_1)

{
  int iVar1;
  HMODULE pHVar2;
  ulonglong uVar3;
  INT_PTR IVar4;
  char *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  
  if (DAT_1803fcfa0 == (FARPROC)0x0) {
    pHVar2 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fcfa0 = GetProcAddress(pHVar2,"lua_gettop");
  }
  uVar3 = (*DAT_1803fcfa0)(param_1);
  if (DAT_180423ad0 == (FARPROC)0x0) {
    pHVar2 = GetModuleHandleA("lua_shared.dll");
    DAT_180423ad0 = GetProcAddress(pHVar2,"lua_pushvalue");
  }
  (*DAT_180423ad0)(param_1,0xffffd8eb);
  if (DAT_1803fe490 == (FARPROC)0x0) {
    pHVar2 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fe490 = GetProcAddress(pHVar2,"lua_type");
  }
  IVar4 = (*DAT_1803fe490)(param_1,0xffffffff);
  if ((int)IVar4 == 6) {
    uVar8 = 1;
    if (0 < (int)uVar3) {
      do {
        if (DAT_180423ad0 == (FARPROC)0x0) {
          pHVar2 = GetModuleHandleA("lua_shared.dll");
          DAT_180423ad0 = GetProcAddress(pHVar2,"lua_pushvalue");
        }
        (*DAT_180423ad0)(param_1,uVar8);
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
      } while ((int)uVar7 <= (int)uVar3);
    }
    iVar1 = FUN_180023180(param_1,uVar3 & 0xffffffff,0);
    if (iVar1 != 0) {
      _DAT_1803ff7cc = _DAT_1803ff7cc + 1;
      if (DAT_1803fe490 == (FARPROC)0x0) {
        pHVar2 = GetModuleHandleA("lua_shared.dll");
        DAT_1803fe490 = GetProcAddress(pHVar2,"lua_type");
      }
      IVar4 = (*DAT_1803fe490)(param_1,0xffffffff);
      if ((int)IVar4 == 4) {
        if (DAT_180425fe8 == (FARPROC)0x0) {
          pHVar2 = GetModuleHandleA("lua_shared.dll");
          DAT_180425fe8 = GetProcAddress(pHVar2,"luaL_checklstring");
        }
        pcVar5 = (char *)(*DAT_180425fe8)(param_1,0xffffffff,0);
      }
      else {
        pcVar5 = "(non-string error)";
      }
      if (DAT_180423ad0 == (FARPROC)0x0) {
        pHVar2 = GetModuleHandleA("lua_shared.dll");
        DAT_180423ad0 = GetProcAddress(pHVar2,"lua_pushvalue");
      }
      (*DAT_180423ad0)(param_1,0xffffd8ea);
      if (DAT_1803fe490 == (FARPROC)0x0) {
        pHVar2 = GetModuleHandleA("lua_shared.dll");
        DAT_1803fe490 = GetProcAddress(pHVar2,"lua_type");
      }
      IVar4 = (*DAT_1803fe490)(param_1,0xffffffff);
      if ((int)IVar4 == 4) {
        if (DAT_180425fe8 == (FARPROC)0x0) {
          pHVar2 = GetModuleHandleA("lua_shared.dll");
          DAT_180425fe8 = GetProcAddress(pHVar2,"luaL_checklstring");
        }
        puVar6 = (undefined1 *)(*DAT_180425fe8)(param_1,0xffffffff,0);
      }
      else {
        puVar6 = &DAT_18033e9cc;
      }
      pcVar10 = "?";
      if (pcVar5 != (char *)0x0) {
        pcVar10 = pcVar5;
      }
      puVar9 = &DAT_18033e9cc;
      if (puVar6 != (undefined1 *)0x0) {
        puVar9 = puVar6;
      }
      FUN_180014410("[LUAGUARD] contained error in %s: %s\n",puVar9,pcVar10);
      if (DAT_1803ff978 != (code *)0x0) {
        (*DAT_1803ff978)("guarded",puVar9,pcVar10);
      }
    }
  }
  if (DAT_180425540 == (FARPROC)0x0) {
    pHVar2 = GetModuleHandleA("lua_shared.dll");
    DAT_180425540 = GetProcAddress(pHVar2,"lua_settop");
  }
  (*DAT_180425540)(param_1,uVar3 & 0xffffffff);
  return 0;
}


