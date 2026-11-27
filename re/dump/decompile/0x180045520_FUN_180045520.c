// 0x180045520  FUN_180045520
// size=802 thunk=false
// signature: undefined FUN_180045520()
// status: ok


undefined8 FUN_180045520(undefined8 param_1,longlong param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  HMODULE pHVar6;
  INT_PTR IVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2)) {
    return 0;
  }
  dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
  uVar11 = (uint)dVar1;
  if ((((0 < (int)uVar11) && (DAT_1803ff8a8 != 0)) &&
      (uVar5 = (ulonglong)(uVar11 & 0xf), (uVar11 & 0xf) < 8)) &&
     (((&DAT_1803ff7e0)[uVar5 * 0x18] != '\0' &&
      (*(uint *)(&DAT_1803ff7e4 + uVar5 * 0x18) == uVar11 >> 4)))) {
    dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,2);
    lVar10 = DAT_1803ff8a8;
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar6 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar6,"lua_gettop");
    }
    IVar7 = (*DAT_1803fcfa0)(lVar10);
    uVar11 = (uint)dVar1;
    if (uVar11 != 0) {
      if ((int)uVar11 < 0) {
        uVar11 = uVar11 + 1 + (int)IVar7;
      }
      if ((*(int *)(&DAT_1803ff7e8 + uVar5 * 0x18) < (int)uVar11) && ((int)uVar11 <= (int)IVar7)) {
        lVar8 = (**(code **)(*plVar4 + 0x158))(plVar4,3);
        lVar10 = DAT_1803ff8a8;
        if (lVar8 == 0) {
          (**(code **)(*plVar4 + 0xf8))(plVar4,0);
          return 1;
        }
        if (DAT_1803fcfa0 == (FARPROC)0x0) {
          pHVar6 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fcfa0 = GetProcAddress(pHVar6,"lua_gettop");
        }
        uVar9 = (*DAT_1803fcfa0)(lVar10);
        if ((((*(int *)(&DAT_1803ff7e8 + uVar5 * 0x18) < (int)uVar9) && (DAT_1803ff8a8 != 0)) &&
            (DAT_1803fb038 != (code *)0x0)) &&
           (iVar3 = (*DAT_1803fb038)(DAT_1803ff8a8,5), iVar3 != 0)) {
          cVar2 = FUN_180041bb0(uVar11);
          if (cVar2 != '\0') {
            FUN_180014410("[LUASTACK] write to _G: %s\n",lVar8);
          }
          (*DAT_1803faf58)(DAT_1803ff8a8,FUN_18002d660,0);
          lVar10 = DAT_1803ff8a8;
          if (DAT_180423ad0 == (FARPROC)0x0) {
            pHVar6 = GetModuleHandleA("lua_shared.dll");
            DAT_180423ad0 = GetProcAddress(pHVar6,"lua_pushvalue");
          }
          (*DAT_180423ad0)(lVar10,(ulonglong)uVar11);
          (*DAT_1803fafa0)(DAT_1803ff8a8,lVar8);
          lVar10 = DAT_1803ff8a8;
          if (DAT_180423ad0 == (FARPROC)0x0) {
            pHVar6 = GetModuleHandleA("lua_shared.dll");
            DAT_180423ad0 = GetProcAddress(pHVar6,"lua_pushvalue");
          }
          (*DAT_180423ad0)(lVar10,uVar9 & 0xffffffff);
          iVar3 = FUN_180023180(DAT_1803ff8a8,3,0);
          lVar10 = DAT_1803ff8a8;
          if (DAT_180425540 == (FARPROC)0x0) {
            pHVar6 = GetModuleHandleA("lua_shared.dll");
            DAT_180425540 = GetProcAddress(pHVar6,"lua_settop");
          }
          (*DAT_180425540)(lVar10,(ulonglong)((int)uVar9 - 1));
          lVar10 = *plVar4;
          bVar12 = iVar3 == 0;
        }
        else {
          lVar10 = *plVar4;
          bVar12 = false;
        }
        (**(code **)(lVar10 + 0xf8))(plVar4,bVar12);
        return 1;
      }
    }
  }
  (**(code **)(*plVar4 + 0xf8))(plVar4,0);
  return 1;
}


