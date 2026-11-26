// 0x180046310  FUN_180046310
// size=942 thunk=false
// signature: undefined FUN_180046310()
// status: ok


undefined8 FUN_180046310(undefined8 param_1,longlong param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  HMODULE pHVar6;
  INT_PTR IVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 uVar11;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2)) {
    return 0;
  }
  dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
  uVar10 = (uint)dVar1;
  if (((((int)uVar10 < 1) || (DAT_1803ff8a8 == 0)) ||
      (uVar5 = (ulonglong)(uVar10 & 0xf), 7 < (uVar10 & 0xf))) ||
     (((&DAT_1803ff7e0)[uVar5 * 0x18] == '\0' ||
      (*(uint *)(&DAT_1803ff7e4 + uVar5 * 0x18) != uVar10 >> 4)))) {
LAB_1800466a1:
    (**(code **)(*plVar4 + 0xf8))(plVar4,0);
    return 1;
  }
  dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,2);
  lVar9 = DAT_1803ff8a8;
  if (DAT_1803fcfa0 == (FARPROC)0x0) {
    pHVar6 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fcfa0 = GetProcAddress(pHVar6,"lua_gettop");
  }
  IVar7 = (*DAT_1803fcfa0)(lVar9);
  lVar9 = DAT_1803ff8a8;
  uVar10 = (uint)dVar1;
  if (uVar10 == 0) goto LAB_1800466a1;
  if ((int)uVar10 < 0) {
    uVar10 = uVar10 + 1 + (int)IVar7;
  }
  if (((int)uVar10 <= *(int *)(&DAT_1803ff7e8 + uVar5 * 0x18)) || ((int)IVar7 < (int)uVar10))
  goto LAB_1800466a1;
  if (DAT_1803fe490 == (FARPROC)0x0) {
    pHVar6 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fe490 = GetProcAddress(pHVar6,"lua_type");
  }
  IVar7 = (*DAT_1803fe490)(lVar9,(ulonglong)uVar10);
  lVar9 = DAT_1803ff8a8;
  if ((int)IVar7 != 5) {
    (**(code **)(*plVar4 + 0xf8))(plVar4,0);
    return 1;
  }
  if (DAT_1803fcfa0 == (FARPROC)0x0) {
    pHVar6 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fcfa0 = GetProcAddress(pHVar6,"lua_gettop");
  }
  uVar8 = (*DAT_1803fcfa0)(lVar9);
  iVar2 = (int)uVar8;
  if ((((*(int *)(&DAT_1803ff7e8 + uVar5 * 0x18) < iVar2) && (DAT_1803ff8a8 != 0)) &&
      (DAT_1803fb038 != (code *)0x0)) && (iVar3 = (*DAT_1803fb038)(DAT_1803ff8a8,5), iVar3 != 0)) {
    (*DAT_1803faf58)(DAT_1803ff8a8,FUN_18002d6c0,0);
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
    (*DAT_180423ad0)(lVar9,uVar8 & 0xffffffff);
    iVar3 = FUN_180023180(DAT_1803ff8a8,2,0xffffffff);
    lVar9 = DAT_1803ff8a8;
    if (iVar3 != 0) {
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar6 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar6,"lua_settop");
      }
      (*DAT_180425540)(lVar9,uVar8 & 0xffffffff);
      lVar9 = *plVar4;
      uVar11 = 0;
      goto LAB_180046633;
    }
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar6 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar6,"lua_gettop");
    }
    IVar7 = (*DAT_1803fcfa0)(lVar9);
    lVar9 = DAT_1803ff8a8;
    if (iVar2 < (int)IVar7) {
      (*DAT_1803faee0)(DAT_1803ff8a8,uVar8 & 0xffffffff);
      lVar9 = *plVar4;
      uVar11 = 1;
      goto LAB_180046633;
    }
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar6 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar6,"lua_settop");
    }
    (*DAT_180425540)(lVar9,(ulonglong)(iVar2 - 1));
  }
  lVar9 = *plVar4;
  uVar11 = 0;
LAB_180046633:
  (**(code **)(lVar9 + 0xf8))(plVar4,uVar11);
  return 1;
}


