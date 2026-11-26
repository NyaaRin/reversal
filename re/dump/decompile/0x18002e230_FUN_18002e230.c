// 0x18002e230  FUN_18002e230
// size=1853 thunk=false
// signature: undefined FUN_18002e230()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_18002e230(void)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  char *pcVar11;
  char *pcVar12;
  longlong lVar13;
  char cVar14;
  
  if (((DAT_1803fa678 == (longlong *)0x0) ||
      (plVar7 = (longlong *)(**(code **)(*DAT_1803fa678 + 0x30))(DAT_1803fa678,0),
      plVar7 == (longlong *)0x0)) || (plVar7[1] == 0)) {
    return 0;
  }
  if ((DAT_1803faf50 != 0) && (DAT_1803faf50 != plVar7[1])) {
    FUN_18002df10(0,0);
  }
  if ((DAT_1803fa807 != '\0') && (DAT_1803faf50 == plVar7[1])) {
    return 1;
  }
  FUN_18002d180();
  if (((DAT_1803faf58 == 0) || (DAT_1803fafa0 == 0)) || (DAT_1803faed8 == 0)) {
    FUN_180014410("[TRAMP] Failed to resolve raw Lua API\n");
    return 0;
  }
  if ((plVar7[1] != 0) && (uVar1 = *(ulonglong *)(plVar7[1] + 0x10), uVar1 != 0)) {
    plVar8 = (longlong *)DAT_1803fa7f0[1];
    cVar14 = *(char *)((longlong)plVar8 + 0x19);
    plVar10 = DAT_1803fa7f0;
    while (cVar14 == '\0') {
      plVar9 = plVar8;
      if ((ulonglong)plVar8[4] < uVar1) {
        plVar8 = plVar8 + 2;
        plVar9 = plVar10;
      }
      plVar8 = (longlong *)*plVar8;
      plVar10 = plVar9;
      cVar14 = *(char *)((longlong)plVar8 + 0x19);
    }
    if ((*(char *)((longlong)plVar10 + 0x19) != '\0') || (uVar1 < (ulonglong)plVar10[4])) {
      plVar10 = DAT_1803fa7f0;
    }
    if ((plVar10 != DAT_1803fa7f0) && (plVar10 != (longlong *)0xffffffffffffffd8))
    goto LAB_18002e354;
  }
  FUN_180023720(plVar7);
LAB_18002e354:
  if ((DAT_1803fb088 == (code *)0x0) || (plVar7[1] == 0)) {
    iVar3 = (**(code **)*plVar7)(plVar7);
  }
  else {
    iVar3 = (*DAT_1803fb088)();
  }
  if ((DAT_1803faf38 == (code *)0x0) || (plVar7[1] == 0)) {
    FUN_180023e60(plVar7,2);
  }
  else {
    (*DAT_1803faf38)(plVar7[1],0xffffd8f0);
  }
  iVar6 = -1;
  FUN_18002db10(plVar7[1],0xffffffff,"Entity");
  if ((DAT_1803faff8 == (code *)0x0) || (plVar7[1] == 0)) {
    cVar14 = (**(code **)(*plVar7 + 0x138))(plVar7,0xffffffff,5);
  }
  else {
    iVar4 = (*DAT_1803faff8)(plVar7[1],0xffffffff);
    cVar14 = iVar4 == 5;
  }
  if (cVar14 == '\0') {
    FUN_180014410("[TRAMP] Registry \'Entity\' metatable not found\n");
  }
  else {
    DAT_1803fafb0 = FUN_18002dda0(plVar7);
    DAT_1803fafe0 = FUN_18002dda0(plVar7);
    DAT_1803fb090 = FUN_18002dda0(plVar7);
    DAT_1803faec0 = FUN_18002dda0(plVar7);
    DAT_1803fafb8 = FUN_18002dda0(plVar7);
    DAT_1803faf28 = FUN_18002dda0(plVar7);
    DAT_1803faf08 = FUN_18002dda0(plVar7);
    DAT_1803fb028 = FUN_18002dda0(plVar7);
  }
  if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (plVar7[1] == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7,2);
  }
  else {
    iVar5 = (*DAT_1803fb088)();
    iVar4 = 0;
    if (-1 < iVar5 + -2) {
      iVar4 = iVar5 + -2;
    }
    (*DAT_1803faf10)(plVar7[1],iVar4);
  }
  if ((DAT_1803faf38 == (code *)0x0) || (plVar7[1] == 0)) {
    FUN_180023e60(plVar7,2);
  }
  else {
    (*DAT_1803faf38)(plVar7[1],0xffffd8f0);
  }
  FUN_18002db10(plVar7[1],0xffffffff,"Player");
  if ((DAT_1803faff8 == (code *)0x0) || (plVar7[1] == 0)) {
    cVar14 = (**(code **)(*plVar7 + 0x138))(plVar7,0xffffffff,5);
  }
  else {
    iVar4 = (*DAT_1803faff8)(plVar7[1],0xffffffff);
    cVar14 = iVar4 == 5;
  }
  iVar4 = DAT_1803db338;
  if (cVar14 != '\0') {
    if (DAT_1803fafb0 == 0) {
      DAT_1803fafb0 = FUN_18002dda0(plVar7);
    }
    if (DAT_1803fafe0 == 0) {
      DAT_1803fafe0 = FUN_18002dda0(plVar7);
    }
    if (DAT_1803fb090 == 0) {
      DAT_1803fb090 = FUN_18002dda0(plVar7);
    }
    if (DAT_1803faec0 == 0) {
      DAT_1803faec0 = FUN_18002dda0(plVar7);
    }
    if (DAT_1803faf28 == 0) {
      DAT_1803faf28 = FUN_18002dda0(plVar7);
    }
    if (DAT_1803faf08 == 0) {
      DAT_1803faf08 = FUN_18002dda0(plVar7);
    }
    DAT_1803faff0 = FUN_18002dda0(plVar7);
    DAT_1803faf70 = FUN_18002dda0(plVar7);
    iVar4 = DAT_1803db338;
    if ((((DAT_1803faf28 == 0) && (DAT_1803db338 == -1)) &&
        (lVar13 = plVar7[1], iVar4 = iVar6, lVar13 != 0)) && (DAT_1803faff8 != (code *)0x0)) {
      FUN_18002db10(lVar13,0xffffffff,"HasGodMode");
      iVar6 = (*DAT_1803faff8)(lVar13,0xffffffff);
      if (iVar6 == 6) {
        iVar4 = FUN_18002d7a0(plVar7);
        FUN_180014410("[TRAMP] %s: stored as ref=%d\n","HasGodMode",iVar4);
      }
      else if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) ||
              (plVar7[1] == 0)) {
        (**(code **)(*plVar7 + 0x10))(plVar7,1);
      }
      else {
        iVar5 = (*DAT_1803fb088)();
        iVar6 = 0;
        if (-1 < iVar5 + -1) {
          iVar6 = iVar5 + -1;
        }
        (*DAT_1803faf10)(plVar7[1],iVar6);
      }
    }
  }
  DAT_1803db338 = iVar4;
  if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (plVar7[1] == 0)) {
    (**(code **)(*plVar7 + 0x10))(plVar7,2);
  }
  else {
    iVar4 = (*DAT_1803fb088)();
    iVar6 = 0;
    if (-1 < iVar4 + -2) {
      iVar6 = iVar4 + -2;
    }
    (*DAT_1803faf10)(plVar7[1],iVar6);
  }
  if ((DAT_1803faf38 == (code *)0x0) || (plVar7[1] == 0)) {
    FUN_180023e60(plVar7,0);
  }
  else {
    (*DAT_1803faf38)(plVar7[1],0xffffd8ee);
  }
  DAT_1803fb018 = FUN_18002dda0(plVar7);
  _DAT_1803fafe8 = FUN_18002dda0(plVar7);
  do {
    if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (plVar7[1] == 0)) {
      (**(code **)(*plVar7 + 0x10))(plVar7,1);
    }
    else {
      iVar4 = (*DAT_1803fb088)();
      iVar6 = 0;
      if (-1 < iVar4 + -1) {
        iVar6 = iVar4 + -1;
      }
      (*DAT_1803faf10)(plVar7[1],iVar6);
    }
    if ((DAT_1803fb088 == (code *)0x0) || (plVar7[1] == 0)) {
      iVar6 = (**(code **)*plVar7)(plVar7);
    }
    else {
      iVar6 = (*DAT_1803fb088)();
    }
  } while (iVar3 < iVar6);
  if ((DAT_1803fa360 == 0) || (DAT_1803fcf38 == -1)) {
    cVar14 = '\0';
  }
  else {
    cVar14 = '\x01';
  }
  if ((DAT_1803fb018 == 0) && (cVar14 == '\0')) {
    DAT_1803fa807 = 0;
  }
  else {
    DAT_1803faf50 = plVar7[1];
    DAT_1803fa807 = 1;
  }
  lVar13 = DAT_1803fb018;
  cVar2 = FUN_18002d6e0(plVar7[1]);
  pcVar11 = "REGISTRY (fallback)";
  if (cVar2 != '\0') {
    pcVar11 = "persist";
  }
  if (lVar13 == 0) {
    pcVar12 = "NONE";
    if (cVar14 != '\0') {
      pcVar12 = "NATIVE ONLY";
    }
  }
  else {
    pcVar12 = "cfunc+native";
  }
  FUN_180014410("[TRAMP] Installed: Entity=%p (push=%s) GetNWBool=%p GetNWString=%p NWVarTable=%p NW2VarTable=%p SetupBones=%p GetClass=%p IsDormant=%p TeamsTable(ref=%d) DarkRPVars(ref=%d) refs=%s\n"
                ,lVar13,pcVar12,DAT_1803fafb0,DAT_1803fafe0,DAT_1803fb090,DAT_1803faec0,
                DAT_1803fafb8,DAT_1803faf08,DAT_1803fb028,DAT_1803db33c,DAT_1803db330,pcVar11);
  return DAT_1803fa807;
}


