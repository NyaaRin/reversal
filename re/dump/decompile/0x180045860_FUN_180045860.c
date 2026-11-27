// 0x180045860  FUN_180045860
// size=744 thunk=false
// signature: undefined FUN_180045860()
// status: ok


undefined8 FUN_180045860(undefined8 param_1,longlong param_2)

{
  double dVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  HMODULE pHVar5;
  INT_PTR IVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 uVar10;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
    return 0;
  }
  dVar1 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
  uVar9 = (uint)dVar1;
  if (((((int)uVar9 < 1) || (DAT_1803ff8a8 == 0)) ||
      (uVar4 = (ulonglong)(uVar9 & 0xf), 7 < (uVar9 & 0xf))) ||
     (((&DAT_1803ff7e0)[uVar4 * 0x18] == '\0' ||
      (*(uint *)(&DAT_1803ff7e4 + uVar4 * 0x18) != uVar9 >> 4)))) {
LAB_180045b2b:
    (**(code **)(*plVar3 + 0xf8))(plVar3,0);
    return 1;
  }
  dVar1 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,2);
  lVar8 = DAT_1803ff8a8;
  if (DAT_1803fcfa0 == (FARPROC)0x0) {
    pHVar5 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
  }
  IVar6 = (*DAT_1803fcfa0)(lVar8);
  lVar8 = DAT_1803ff8a8;
  uVar9 = (uint)dVar1;
  if (uVar9 == 0) goto LAB_180045b2b;
  if ((int)uVar9 < 0) {
    uVar9 = uVar9 + 1 + (int)IVar6;
  }
  if (((int)uVar9 <= *(int *)(&DAT_1803ff7e8 + uVar4 * 0x18)) || ((int)IVar6 < (int)uVar9))
  goto LAB_180045b2b;
  if (DAT_1803fcfa0 == (FARPROC)0x0) {
    pHVar5 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
  }
  uVar7 = (*DAT_1803fcfa0)(lVar8);
  if ((int)uVar7 <= *(int *)(&DAT_1803ff7e8 + uVar4 * 0x18)) {
    (**(code **)(*plVar3 + 0xf8))(plVar3,0);
    return 1;
  }
  if (((DAT_1803ff8a8 != 0) && (DAT_1803fb038 != (code *)0x0)) &&
     (iVar2 = (*DAT_1803fb038)(DAT_1803ff8a8,4), iVar2 != 0)) {
    (*DAT_1803faf58)(DAT_1803ff8a8,FUN_18002d640,0);
    lVar8 = DAT_1803ff8a8;
    if (DAT_180423ad0 == (FARPROC)0x0) {
      pHVar5 = GetModuleHandleA("lua_shared.dll");
      DAT_180423ad0 = GetProcAddress(pHVar5,"lua_pushvalue");
    }
    (*DAT_180423ad0)(lVar8,(ulonglong)uVar9);
    lVar8 = DAT_1803ff8a8;
    if (DAT_180423ad0 == (FARPROC)0x0) {
      pHVar5 = GetModuleHandleA("lua_shared.dll");
      DAT_180423ad0 = GetProcAddress(pHVar5,"lua_pushvalue");
    }
    (*DAT_180423ad0)(lVar8,uVar7 & 0xffffffff);
    iVar2 = FUN_180023180(DAT_1803ff8a8,2,1);
    lVar8 = DAT_1803ff8a8;
    if (iVar2 == 0) {
      (*DAT_1803faee0)(DAT_1803ff8a8,uVar7 & 0xffffffff);
      lVar8 = *plVar3;
      uVar10 = 1;
      goto LAB_180045aed;
    }
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar5 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
    }
    (*DAT_180425540)(lVar8,uVar7 & 0xffffffff);
  }
  lVar8 = *plVar3;
  uVar10 = 0;
LAB_180045aed:
  (**(code **)(lVar8 + 0xf8))(plVar3,uVar10);
  return 1;
}


