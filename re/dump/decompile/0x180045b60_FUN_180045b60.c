// 0x180045b60  FUN_180045b60
// size=824 thunk=false
// signature: undefined FUN_180045b60()
// status: ok


undefined8 FUN_180045b60(undefined8 param_1,longlong param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  HMODULE pHVar6;
  INT_PTR IVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2)) {
    return 0;
  }
  dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
  uVar10 = (uint)dVar1;
  if ((((0 < (int)uVar10) && (DAT_1803ff8a8 != 0)) &&
      (uVar5 = (ulonglong)(uVar10 & 0xf), (uVar10 & 0xf) < 8)) &&
     (((&DAT_1803ff7e0)[uVar5 * 0x18] != '\0' &&
      (*(uint *)(&DAT_1803ff7e4 + uVar5 * 0x18) == uVar10 >> 4)))) {
    dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,2);
    lVar9 = DAT_1803ff8a8;
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar6 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar6,"lua_gettop");
    }
    IVar7 = (*DAT_1803fcfa0)(lVar9);
    lVar9 = DAT_1803ff8a8;
    uVar10 = (uint)dVar1;
    if (uVar10 != 0) {
      if ((int)uVar10 < 0) {
        uVar10 = uVar10 + 1 + (int)IVar7;
      }
      if ((*(int *)(&DAT_1803ff7e8 + uVar5 * 0x18) < (int)uVar10) && ((int)uVar10 <= (int)IVar7)) {
        if (DAT_1803fcfa0 == (FARPROC)0x0) {
          pHVar6 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fcfa0 = GetProcAddress(pHVar6,"lua_gettop");
        }
        uVar8 = (*DAT_1803fcfa0)(lVar9);
        uVar11 = (int)uVar8 - 1;
        if ((int)uVar11 <= *(int *)(&DAT_1803ff7e8 + uVar5 * 0x18)) {
          (**(code **)(*plVar4 + 0xf8))(plVar4,0);
          return 1;
        }
        if (((DAT_1803ff8a8 == 0) || (DAT_1803fb038 == (code *)0x0)) ||
           (iVar3 = (*DAT_1803fb038)(DAT_1803ff8a8,5), iVar3 == 0)) {
          lVar9 = *plVar4;
          bVar12 = false;
        }
        else {
          cVar2 = FUN_180041bb0(uVar10);
          if (cVar2 != '\0') {
            FUN_180014410("[LUASTACK] write to _G: %s\n","<computed key>");
          }
          (*DAT_1803faf58)(DAT_1803ff8a8,FUN_18002d660,0);
          lVar9 = DAT_1803ff8a8;
          if (DAT_180423ad0 == (FARPROC)0x0) {
            pHVar6 = GetModuleHandleA("lua_shared.dll");
            DAT_180423ad0 = GetProcAddress(pHVar6,"lua_pushvalue");
          }
          (*DAT_180423ad0)(lVar9,(ulonglong)uVar10);
          lVar9 = DAT_1803ff8a8;
          if (DAT_180423ad0 == (FARPROC)0x0) {
            pHVar6 = GetModuleHandleA("lua_shared.dll");
            DAT_180423ad0 = GetProcAddress(pHVar6,"lua_pushvalue");
          }
          (*DAT_180423ad0)(lVar9,(ulonglong)uVar11);
          lVar9 = DAT_1803ff8a8;
          if (DAT_180423ad0 == (FARPROC)0x0) {
            pHVar6 = GetModuleHandleA("lua_shared.dll");
            DAT_180423ad0 = GetProcAddress(pHVar6,"lua_pushvalue");
          }
          (*DAT_180423ad0)(lVar9,uVar8 & 0xffffffff);
          iVar3 = FUN_180023180(DAT_1803ff8a8,3,0);
          lVar9 = DAT_1803ff8a8;
          if (DAT_180425540 == (FARPROC)0x0) {
            pHVar6 = GetModuleHandleA("lua_shared.dll");
            DAT_180425540 = GetProcAddress(pHVar6,"lua_settop");
          }
          (*DAT_180425540)(lVar9,(ulonglong)((int)uVar8 - 2));
          lVar9 = *plVar4;
          bVar12 = iVar3 == 0;
        }
        (**(code **)(lVar9 + 0xf8))(plVar4,bVar12);
        return 1;
      }
    }
  }
  (**(code **)(*plVar4 + 0xf8))(plVar4,0);
  return 1;
}


