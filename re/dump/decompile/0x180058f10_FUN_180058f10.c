// 0x180058f10  FUN_180058f10
// size=925 thunk=false
// signature: undefined FUN_180058f10()
// status: ok


void FUN_180058f10(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  HMODULE pHVar5;
  ulonglong uVar6;
  INT_PTR IVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  cVar3 = FUN_180025450();
  if ((cVar3 != '\0') &&
     (((DAT_1803fcfb0 != (FARPROC)0x0 ||
       ((pHVar5 = GetModuleHandleA("lua_shared.dll"), pHVar5 != (HMODULE)0x0 &&
        (DAT_1803fcfb0 = GetProcAddress(pHVar5,"lua_next"), DAT_1803fcfb0 != (FARPROC)0x0)))) &&
      (DAT_1803fcb90 != (code *)0x0)))) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar5 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
    }
    uVar6 = (*DAT_1803fcfa0)(uVar1);
    if (DAT_180423ad0 == (FARPROC)0x0) {
      pHVar5 = GetModuleHandleA("lua_shared.dll");
      DAT_180423ad0 = GetProcAddress(pHVar5,"lua_pushvalue");
    }
    (*DAT_180423ad0)(uVar1,0xffffd8ed);
    if (DAT_1803fe490 == (FARPROC)0x0) {
      pHVar5 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fe490 = GetProcAddress(pHVar5,"lua_type");
    }
    IVar7 = (*DAT_1803fe490)(uVar1,0xffffffff);
    pcVar2 = DAT_1803fcba8;
    if ((int)IVar7 == 5) {
      puVar8 = (undefined8 *)FUN_180025620(0x20cf586ef656cb7a);
      if (0xf < (ulonglong)puVar8[3]) {
        puVar8 = (undefined8 *)*puVar8;
      }
      (*pcVar2)(uVar1,0xffffffff,puVar8);
      if (DAT_1803fe490 == (FARPROC)0x0) {
        pHVar5 = GetModuleHandleA("lua_shared.dll");
        DAT_1803fe490 = GetProcAddress(pHVar5,"lua_type");
      }
      IVar7 = (*DAT_1803fe490)(uVar1,0xffffffff);
      if ((int)IVar7 == 5) {
        if (DAT_1803fcfa0 == (FARPROC)0x0) {
          pHVar5 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
        }
        uVar9 = (*DAT_1803fcfa0)(uVar1);
        iVar10 = 0;
        if (DAT_1803ff2a8 == (FARPROC)0x0) {
          pHVar5 = GetModuleHandleA("lua_shared.dll");
          DAT_1803ff2a8 = GetProcAddress(pHVar5,"lua_pushnil");
        }
        (*DAT_1803ff2a8)(uVar1);
        IVar7 = (*DAT_1803fcfb0)(uVar1,uVar9 & 0xffffffff);
        iVar4 = (int)IVar7;
        while (iVar4 != 0) {
          if (DAT_1803fe490 == (FARPROC)0x0) {
            pHVar5 = GetModuleHandleA("lua_shared.dll");
            DAT_1803fe490 = GetProcAddress(pHVar5,"lua_type");
          }
          IVar7 = (*DAT_1803fe490)(uVar1,0xffffffff);
          if ((int)IVar7 == 5) {
            if (DAT_1803ff2a8 == (FARPROC)0x0) {
              pHVar5 = GetModuleHandleA("lua_shared.dll");
              DAT_1803ff2a8 = GetProcAddress(pHVar5,"lua_pushnil");
            }
            (*DAT_1803ff2a8)(uVar1);
            (*DAT_1803fcb90)(uVar1,0xfffffffe);
            iVar10 = iVar10 + 1;
          }
          if (DAT_180425540 == (FARPROC)0x0) {
            pHVar5 = GetModuleHandleA("lua_shared.dll");
            DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
          }
          (*DAT_180425540)(uVar1,0xfffffffe);
          IVar7 = (*DAT_1803fcfb0)(uVar1,uVar9 & 0xffffffff);
          iVar4 = (int)IVar7;
        }
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar5 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
        }
        (*DAT_180425540)(uVar1,uVar6 & 0xffffffff);
        FUN_180058d90(param_1,0x20cf586ef656cb7a);
        FUN_180014410("[LUAGUARD] revoked %d script environment(s)\n",iVar10);
        return;
      }
    }
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar5 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
    }
    (*DAT_180425540)(uVar1,uVar6 & 0xffffffff);
  }
  return;
}


