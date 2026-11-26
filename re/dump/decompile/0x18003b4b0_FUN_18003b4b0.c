// 0x18003b4b0  FUN_18003b4b0
// size=1632 thunk=false
// signature: undefined FUN_18003b4b0()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_18003b4b0(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  HMODULE pHVar9;
  INT_PTR IVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined1 auStack_98 [32];
  uint local_78;
  undefined4 local_70 [4];
  int local_60 [2];
  undefined4 local_58 [2];
  ulonglong local_50;
  
  local_50 = DAT_1803da4c0 ^ (ulonglong)auStack_98;
  if (param_1 == 0) {
    return 0;
  }
  local_70[0] = 0;
  uVar18 = 2;
  local_70[1] = 2;
  uVar19 = 1;
  local_70[2] = 1;
  puVar16 = local_70;
  while ((plVar7 = (longlong *)FUN_18003ae40(*puVar16), plVar7 == (longlong *)0x0 ||
         (plVar7[1] != param_1))) {
    puVar16 = puVar16 + 1;
    if (puVar16 == local_70 + 3) {
      FUN_180039770();
      return 0;
    }
  }
  plVar8 = (longlong *)FUN_180039770();
  if (plVar8 == (longlong *)0x0) {
    return 0;
  }
  if (plVar8[1] == 0) {
    return 0;
  }
  if (DAT_1803fcfa0 == (FARPROC)0x0) {
    pHVar9 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fcfa0 = GetProcAddress(pHVar9,"lua_gettop");
  }
  IVar10 = (*DAT_1803fcfa0)(param_1);
  if ((int)IVar10 < 1) {
    return 0;
  }
  if (DAT_1803fe490 == (FARPROC)0x0) {
    pHVar9 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fe490 = GetProcAddress(pHVar9,"lua_type");
  }
  IVar10 = (*DAT_1803fe490)(param_1,1);
  if ((int)IVar10 != 3) {
    return 0;
  }
  lVar1 = plVar8[1];
  dVar3 = (double)(**(code **)(*plVar7 + 0xc0))(plVar7,1);
  iVar15 = (int)dVar3;
  if (iVar15 == -1) {
    return 0;
  }
  lVar11 = DAT_1803eb3e0;
  if (DAT_1803eb3e0 == DAT_1803eb3e8) {
    return 0;
  }
  while ((*(int *)(lVar11 + 8) != iVar15 || (*(longlong *)(lVar11 + 0x10) != lVar1))) {
    lVar11 = lVar11 + 0x18;
    if (lVar11 == DAT_1803eb3e8) {
      return 0;
    }
  }
  if (DAT_1803fcfa0 == (FARPROC)0x0) {
    pHVar9 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fcfa0 = GetProcAddress(pHVar9,"lua_gettop");
  }
  IVar10 = (*DAT_1803fcfa0)(param_1);
  local_60[0] = (int)IVar10;
  if (DAT_1803fcfa0 == (FARPROC)0x0) {
    pHVar9 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fcfa0 = GetProcAddress(pHVar9,"lua_gettop");
  }
  uVar12 = (*DAT_1803fcfa0)(lVar1);
  local_78 = (uint)uVar12;
  uVar12 = uVar12 & 0xffffffff;
  if ((DAT_1803fb038 != (code *)0x0) && (iVar6 = (*DAT_1803fb038)(lVar1,0x24), iVar6 == 0)) {
    return 0;
  }
  if (iVar15 < 0x40000000) {
    (**(code **)(*plVar8 + 0x128))(plVar8,iVar15);
    goto LAB_18003b72c;
  }
  lVar11 = plVar8[1];
  cVar4 = FUN_18002d6e0(lVar11);
  if (cVar4 == '\0') {
LAB_18003b7c4:
    if ((lVar11 != 0) && (DAT_1803fafd8 != (code *)0x0)) {
      (*DAT_1803fafd8)(lVar11);
    }
  }
  else {
    (*DAT_1803faf38)(lVar11,0xffffd8ed);
    iVar6 = (*DAT_1803faff8)(lVar11,0xffffffff);
    pcVar2 = DAT_1803faf10;
    if (iVar6 != 5) {
      iVar15 = (*DAT_1803fb088)(lVar11);
      (*pcVar2)(lVar11,iVar15 + -1);
      goto LAB_18003b7c4;
    }
    (*DAT_1803faf88)(lVar11,0xffffffff,iVar15 + -0x40000000);
    (*DAT_1803faee0)(lVar11,0xfffffffe);
  }
  uVar12 = (ulonglong)local_78;
LAB_18003b72c:
  if (DAT_1803fe490 == (FARPROC)0x0) {
    pHVar9 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fe490 = GetProcAddress(pHVar9,"lua_type");
  }
  IVar10 = (*DAT_1803fe490)(lVar1,0xffffffff);
  if ((int)IVar10 != 6) {
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar9 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar9,"lua_settop");
    }
    (*DAT_180425540)(lVar1,uVar12);
    return 0;
  }
  iVar15 = 0;
  if (1 < local_60[0]) {
    do {
      if (0x1f < iVar15) break;
      if (DAT_1803fe490 == (FARPROC)0x0) {
        pHVar9 = GetModuleHandleA("lua_shared.dll");
        DAT_1803fe490 = GetProcAddress(pHVar9,"lua_type");
      }
      IVar10 = (*DAT_1803fe490)(param_1,uVar18);
      iVar6 = (int)IVar10;
      if (iVar6 == 1) {
        pcVar2 = *(code **)(*plVar8 + 0xf8);
        uVar5 = (**(code **)(*plVar7 + 200))(plVar7,uVar18);
        (*pcVar2)(plVar8,uVar5);
      }
      else if (iVar6 == 3) {
        pcVar2 = *(code **)(*plVar8 + 0xf0);
        uVar20 = (**(code **)(*plVar7 + 0xc0))(plVar7,uVar18);
        (*pcVar2)(plVar8,uVar20);
      }
      else if (iVar6 == 4) {
        local_58[0] = 0;
        puVar14 = (undefined1 *)(**(code **)(*plVar7 + 0xb8))(plVar7,uVar18,local_58);
        puVar13 = &DAT_18033e5ea;
        if (puVar14 != (undefined1 *)0x0) {
          puVar13 = puVar14;
        }
        (**(code **)(*plVar8 + 0xe8))(plVar8,puVar13,local_58[0]);
      }
      else {
        (**(code **)(*plVar8 + 0xe0))(plVar8);
      }
      iVar15 = iVar15 + 1;
      uVar17 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar17;
    } while ((int)uVar17 <= local_60[0]);
  }
  DAT_1803ff8e8 = DAT_1803ff8e8 + 1;
  iVar15 = FUN_180023180(lVar1,iVar15,1);
  if (iVar15 != 0) {
    if (DAT_1803fe490 == (FARPROC)0x0) {
      pHVar9 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fe490 = GetProcAddress(pHVar9,"lua_type");
    }
    IVar10 = (*DAT_1803fe490)(lVar1,0xffffffff);
    if ((int)IVar10 == 4) {
      puVar13 = (undefined1 *)(**(code **)(*plVar8 + 0xb8))(plVar8,0xffffffff,0);
    }
    else {
      puVar13 = &DAT_18033e9cc;
    }
    puVar14 = &DAT_18033e9cc;
    if (puVar13 != (undefined1 *)0x0) {
      puVar14 = puVar13;
    }
    FUN_180014410("[LUABRIDGE] cross-state callback error: %s\n",puVar14);
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar9 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar9,"lua_settop");
    }
    (*DAT_180425540)(lVar1,(ulonglong)local_78);
    if (0 < DAT_1803ff8e8) {
      DAT_1803ff8e8 = DAT_1803ff8e8 + -1;
    }
    return 0;
  }
  if (0 < DAT_1803ff8e8) {
    DAT_1803ff8e8 = DAT_1803ff8e8 + -1;
  }
  if (DAT_1803fe490 == (FARPROC)0x0) {
    pHVar9 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fe490 = GetProcAddress(pHVar9,"lua_type");
  }
  IVar10 = (*DAT_1803fe490)(lVar1,0xffffffff);
  iVar15 = (int)IVar10;
  if (iVar15 == 1) {
    pcVar2 = *(code **)(*plVar7 + 0xf8);
    uVar5 = (**(code **)(*plVar8 + 200))(plVar8,0xffffffff);
    (*pcVar2)(plVar7,uVar5);
  }
  else if (iVar15 == 3) {
    pcVar2 = *(code **)(*plVar7 + 0xf0);
    uVar20 = (**(code **)(*plVar8 + 0xc0))(plVar8,0xffffffff);
    (*pcVar2)(plVar7,uVar20);
  }
  else if (iVar15 == 4) {
    local_60[0] = 0;
    puVar14 = (undefined1 *)(**(code **)(*plVar8 + 0xb8))(plVar8,0xffffffff,local_60);
    puVar13 = &DAT_18033e5ea;
    if (puVar14 != (undefined1 *)0x0) {
      puVar13 = puVar14;
    }
    (**(code **)(*plVar7 + 0xe8))(plVar7,puVar13,local_60[0]);
  }
  else {
    uVar19 = 0;
  }
  if (DAT_180425540 == (FARPROC)0x0) {
    pHVar9 = GetModuleHandleA("lua_shared.dll");
    DAT_180425540 = GetProcAddress(pHVar9,"lua_settop");
  }
  (*DAT_180425540)(lVar1,(ulonglong)local_78);
  return uVar19;
}


