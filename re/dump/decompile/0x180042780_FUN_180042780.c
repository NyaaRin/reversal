// 0x180042780  FUN_180042780
// size=987 thunk=false
// signature: undefined FUN_180042780()
// status: ok


undefined8 FUN_180042780(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  HMODULE pHVar9;
  INT_PTR IVar10;
  longlong lVar11;
  
  plVar7 = (longlong *)FUN_180039770();
  if ((plVar7 == (longlong *)0x0) || (plVar7[1] != param_2)) {
    return 0;
  }
  (**(code **)(*plVar7 + 0x98))(plVar7,1,6);
  cVar5 = FUN_18002d4d0();
  if (cVar5 == '\0') {
    FUN_18002d180();
    cVar5 = FUN_18002d4d0();
    if (cVar5 == '\0') {
      (**(code **)(*plVar7 + 0xf8))(plVar7,0);
      (**(code **)(*plVar7 + 0xe8))(plVar7,"the raw Lua exports this needs are unavailable",0);
      return 2;
    }
  }
  if (7 < DAT_1803ff8a0) {
    (**(code **)(*plVar7 + 0xf8))(plVar7,0);
    (**(code **)(*plVar7 + 0xe8))(plVar7,"stack nesting limit reached",0);
    return 2;
  }
  lVar8 = FUN_1800414c0(plVar7);
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 0xf8))(plVar7,0);
    (**(code **)(*plVar7 + 0xe8))(plVar7,"no private stack available",0);
    return 2;
  }
  if ((DAT_1803fb038 == (code *)0x0) || (iVar6 = (*DAT_1803fb038)(lVar8,0x18), iVar6 == 0)) {
    (**(code **)(*plVar7 + 0xf8))(plVar7,0);
    (**(code **)(*plVar7 + 0xe8))(plVar7,"private stack cannot grow",0);
    return 2;
  }
  lVar11 = 0;
  if ((((DAT_1803ff7e0 != '\0') && (lVar11 = 1, DAT_1803ff7f8 != '\0')) &&
      (lVar11 = 2, DAT_1803ff810 != '\0')) &&
     (((lVar11 = 3, DAT_1803ff828 != '\0' && (lVar11 = 4, DAT_1803ff840 != '\0')) &&
      ((lVar11 = 5, DAT_1803ff858 != '\0' && (lVar11 = 6, DAT_1803ff870 != '\0')))))) {
    if (DAT_1803ff888 != '\0') {
      (**(code **)(*plVar7 + 0xf8))(plVar7,0);
      (**(code **)(*plVar7 + 0xe8))(plVar7,"no free stack session",0);
      return 2;
    }
    lVar11 = 7;
  }
  lVar3 = lVar11 * 0x18;
  pcVar1 = &DAT_1803ff7e0 + lVar3;
  *pcVar1 = '\x01';
  DAT_1803e7568 = DAT_1803e7568 + 1 & 0x3ffffff;
  if (DAT_1803e7568 == 0) {
    DAT_1803e7568 = 1;
  }
  *(uint *)(&DAT_1803ff7e4 + lVar3) = DAT_1803e7568;
  if (DAT_1803fcfa0 == (FARPROC)0x0) {
    pHVar9 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fcfa0 = GetProcAddress(pHVar9,"lua_gettop");
  }
  IVar10 = (*DAT_1803fcfa0)(lVar8);
  uVar2 = *(uint *)(&DAT_1803ff7e4 + lVar3);
  DAT_1803ff8a0 = DAT_1803ff8a0 + 1;
  *(int *)(&DAT_1803ff7e8 + lVar3) = (int)IVar10;
  *(ulonglong *)(lVar3 + 0x1803ff7f0) = (ulonglong)uVar2 << 0x20 ^ (ulonglong)pcVar1;
  (**(code **)(*plVar7 + 8))(plVar7,1);
  (**(code **)(*plVar7 + 0xf0))(plVar7,(double)(int)(uVar2 << 4 | (uint)lVar11));
  iVar6 = FUN_180023180(param_2,1,0);
  uVar2 = *(uint *)(&DAT_1803ff7e8 + lVar3);
  if (DAT_180425540 == (FARPROC)0x0) {
    pHVar9 = GetModuleHandleA("lua_shared.dll");
    DAT_180425540 = GetProcAddress(pHVar9,"lua_settop");
  }
  (*DAT_180425540)(lVar8,(ulonglong)uVar2);
  iVar4 = DAT_1803ff8a0;
  *pcVar1 = '\0';
  if (0 < iVar4) {
    DAT_1803ff8a0 = iVar4 + -1;
  }
  if (iVar6 != 0) {
    (**(code **)(*plVar7 + 0xf8))(plVar7,0);
    if (DAT_1803fe490 == (FARPROC)0x0) {
      pHVar9 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fe490 = GetProcAddress(pHVar9,"lua_type");
    }
    IVar10 = (*DAT_1803fe490)(param_2,0xfffffffe);
    if ((int)IVar10 == 4) {
      (**(code **)(*plVar7 + 8))(plVar7,0xfffffffe);
    }
    else {
      (**(code **)(*plVar7 + 0xe8))(plVar7,"stack callback failed",0);
    }
    return 2;
  }
  (**(code **)(*plVar7 + 0xf8))(plVar7,1);
  return 1;
}


