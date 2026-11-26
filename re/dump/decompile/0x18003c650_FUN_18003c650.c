// 0x18003c650  FUN_18003c650
// size=1126 thunk=false
// signature: undefined FUN_18003c650()
// status: ok


undefined8 FUN_18003c650(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  HMODULE pHVar8;
  INT_PTR IVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  char *pcVar13;
  
  plVar6 = (longlong *)FUN_180039770();
  if ((plVar6 == (longlong *)0x0) || (plVar6[1] != param_2)) {
    return 0;
  }
  dVar2 = (double)(**(code **)(*plVar6 + 0x160))(plVar6,1);
  (**(code **)(*plVar6 + 0x98))(plVar6,2,6);
  cVar3 = FUN_18002d4d0();
  if (cVar3 == '\0') {
    FUN_18002d180();
    cVar3 = FUN_18002d4d0();
    if (cVar3 == '\0') {
      (**(code **)(*plVar6 + 0xf8))(plVar6,0);
      (**(code **)(*plVar6 + 0xe8))(plVar6,"the raw Lua exports this needs are unavailable",0);
      return 2;
    }
  }
  if (7 < DAT_1803ff8f4) {
    (**(code **)(*plVar6 + 0xf8))(plVar6,0);
    (**(code **)(*plVar6 + 0xe8))(plVar6,"bridge nesting limit reached",0);
    return 2;
  }
  iVar10 = (int)dVar2;
  if (iVar10 == 0) {
    (**(code **)(*plVar6 + 0xf8))(plVar6,0);
    (**(code **)(*plVar6 + 0xe8))
              (plVar6,"the client state is not bridged from itself -- use mayrr.stack",0);
    return 2;
  }
  lVar7 = FUN_18003ae40(iVar10);
  if ((lVar7 == 0) || (*(longlong *)(lVar7 + 8) == 0)) {
    (**(code **)(*plVar6 + 0xf8))(plVar6,0);
    pcVar13 = "that Lua state is not ready";
    if (iVar10 == 1) {
      pcVar13 = "server realm exists only on a listen server";
    }
    (**(code **)(*plVar6 + 0xe8))(plVar6,pcVar13,0);
    return 2;
  }
  iVar4 = (*DAT_1803fb038)(*(longlong *)(lVar7 + 8),0x18);
  if (iVar4 == 0) {
    (**(code **)(*plVar6 + 0xf8))(plVar6,0);
    (**(code **)(*plVar6 + 0xe8))(plVar6,"that Lua stack cannot grow",0);
    return 2;
  }
  lVar11 = 0;
  if ((((DAT_1803e75c0 != '\0') && (lVar11 = 1, DAT_1803e75f0 != '\0')) &&
      (lVar11 = 2, DAT_1803e7620 != '\0')) &&
     (((lVar11 = 3, DAT_1803e7650 != '\0' && (lVar11 = 4, DAT_1803e7680 != '\0')) &&
      ((lVar11 = 5, DAT_1803e76b0 != '\0' && (lVar11 = 6, DAT_1803e76e0 != '\0')))))) {
    if (DAT_1803e7710 != '\0') {
      (**(code **)(*plVar6 + 0xf8))(plVar6,0);
      (**(code **)(*plVar6 + 0xe8))(plVar6,"no free bridge session",0);
      return 2;
    }
    lVar11 = 7;
  }
  lVar12 = lVar11 * 0x30;
  pcVar13 = &DAT_1803e75c0 + lVar12;
  uVar5 = DAT_1803e7740 + 1 & 0x3ffffff;
  DAT_1803e7740 = uVar5;
  *pcVar13 = '\x01';
  if (uVar5 == 0) {
    uVar5 = 1;
    DAT_1803e7740 = 1;
  }
  *(uint *)(&DAT_1803e75c4 + lVar12) = uVar5;
  *(int *)(&DAT_1803e75c8 + lVar12) = iVar10;
  (&DAT_1803e75d0)[lVar11 * 6] = lVar7;
  (&DAT_1803e75d8)[lVar11 * 6] = *(undefined8 *)(lVar7 + 8);
  uVar1 = *(undefined8 *)(lVar7 + 8);
  if (DAT_1803fcfa0 == (FARPROC)0x0) {
    pHVar8 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fcfa0 = GetProcAddress(pHVar8,"lua_gettop");
  }
  IVar9 = (*DAT_1803fcfa0)(uVar1);
  uVar5 = *(uint *)(&DAT_1803e75c4 + lVar12);
  DAT_1803ff8f4 = DAT_1803ff8f4 + 1;
  *(int *)(&DAT_1803e75e0 + lVar12) = (int)IVar9;
  *(ulonglong *)(lVar12 + 0x1803e75e8) = (ulonglong)uVar5 << 0x20 ^ (ulonglong)pcVar13;
  (**(code **)(*plVar6 + 8))(plVar6,2);
  (**(code **)(*plVar6 + 0xf0))(plVar6,(double)(int)(uVar5 << 4 | (uint)lVar11));
  iVar10 = FUN_180023180(param_2,1,0);
  uVar5 = *(uint *)(&DAT_1803e75e0 + lVar12);
  uVar1 = (&DAT_1803e75d8)[lVar11 * 6];
  if (DAT_180425540 == (FARPROC)0x0) {
    pHVar8 = GetModuleHandleA("lua_shared.dll");
    DAT_180425540 = GetProcAddress(pHVar8,"lua_settop");
  }
  (*DAT_180425540)(uVar1,(ulonglong)uVar5);
  iVar4 = DAT_1803ff8f4;
  *pcVar13 = '\0';
  (&DAT_1803e75d0)[lVar11 * 6] = 0;
  (&DAT_1803e75d8)[lVar11 * 6] = 0;
  if (0 < iVar4) {
    DAT_1803ff8f4 = iVar4 + -1;
  }
  if (iVar10 != 0) {
    (**(code **)(*plVar6 + 0xf8))(plVar6,0);
    if (DAT_1803fe490 == (FARPROC)0x0) {
      pHVar8 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fe490 = GetProcAddress(pHVar8,"lua_type");
    }
    IVar9 = (*DAT_1803fe490)(param_2,0xfffffffe);
    if ((int)IVar9 == 4) {
      (**(code **)(*plVar6 + 8))(plVar6,0xfffffffe);
    }
    else {
      (**(code **)(*plVar6 + 0xe8))(plVar6,"bridge callback failed",0);
    }
    return 2;
  }
  (**(code **)(*plVar6 + 0xf8))(plVar6,1);
  return 1;
}


