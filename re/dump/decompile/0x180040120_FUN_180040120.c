// 0x180040120  FUN_180040120
// size=895 thunk=false
// signature: undefined FUN_180040120()
// status: ok


undefined8 FUN_180040120(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  HMODULE pHVar9;
  INT_PTR IVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  
  plVar7 = (longlong *)FUN_180039770();
  if ((plVar7 == (longlong *)0x0) || (plVar7[1] != param_2)) {
    return 0;
  }
  dVar3 = (double)(**(code **)(*plVar7 + 0x160))(plVar7,1);
  uVar12 = (uint)dVar3;
  if ((((((int)uVar12 < 1) || (uVar8 = (ulonglong)(uVar12 & 0xf), 7 < (uVar12 & 0xf))) ||
       ((&DAT_1803e75c0)[uVar8 * 0x30] == '\0')) ||
      ((*(uint *)(&DAT_1803e75c4 + uVar8 * 0x30) != uVar12 >> 4 ||
       ((&DAT_1803e75d0)[uVar8 * 6] == 0)))) || ((&DAT_1803e75d8)[uVar8 * 6] == 0)) {
    (**(code **)(*plVar7 + 0xf8))(plVar7,0);
    return 1;
  }
  dVar3 = (double)(**(code **)(*plVar7 + 0x160))(plVar7,2);
  puVar1 = (undefined8 *)(&DAT_1803e75d0)[uVar8 * 6];
  if (puVar1 == (undefined8 *)0x0) {
    iVar4 = 0;
  }
  else if ((DAT_1803fb088 == (code *)0x0) || (puVar1[1] == 0)) {
    iVar4 = (**(code **)*puVar1)();
  }
  else {
    iVar4 = (*DAT_1803fb088)(puVar1[1]);
  }
  uVar12 = (uint)dVar3;
  if (uVar12 == 0) {
LAB_180040472:
    (**(code **)(*plVar7 + 0xf8))(plVar7,0);
    return 1;
  }
  if ((int)uVar12 < 0) {
    uVar12 = uVar12 + 1 + iVar4;
  }
  if (((int)uVar12 <= *(int *)(&DAT_1803e75e0 + uVar8 * 0x30)) || (iVar4 < (int)uVar12))
  goto LAB_180040472;
  uVar13 = (&DAT_1803e75d8)[uVar8 * 6];
  if (DAT_1803fe490 == (FARPROC)0x0) {
    pHVar9 = GetModuleHandleA("lua_shared.dll");
    DAT_1803fe490 = GetProcAddress(pHVar9,"lua_type");
  }
  IVar10 = (*DAT_1803fe490)(uVar13,(ulonglong)uVar12);
  if ((int)IVar10 != 5) {
    (**(code **)(*plVar7 + 0xf8))(plVar7,0);
    return 1;
  }
  puVar1 = (undefined8 *)(&DAT_1803e75d0)[uVar8 * 6];
  if (puVar1 == (undefined8 *)0x0) {
    uVar14 = 0;
  }
  else {
    if ((DAT_1803fb088 == (code *)0x0) || (puVar1[1] == 0)) {
      uVar5 = (**(code **)*puVar1)();
    }
    else {
      uVar5 = (*DAT_1803fb088)(puVar1[1]);
    }
    uVar14 = (ulonglong)uVar5;
  }
  iVar4 = (int)uVar14;
  if ((((*(int *)(&DAT_1803e75e0 + uVar8 * 0x30) < iVar4) && ((&DAT_1803e75d8)[uVar8 * 6] != 0)) &&
      (DAT_1803fb038 != (code *)0x0)) &&
     (iVar6 = (*DAT_1803fb038)((&DAT_1803e75d8)[uVar8 * 6],5), iVar6 != 0)) {
    (*DAT_1803faf58)((&DAT_1803e75d8)[uVar8 * 6],FUN_18002d6c0,0);
    plVar2 = (longlong *)(&DAT_1803e75d0)[uVar8 * 6];
    if (plVar2 != (longlong *)0x0) {
      if ((DAT_1803faf38 == (code *)0x0) || (plVar2[1] == 0)) {
        (**(code **)(*plVar2 + 8))(plVar2,uVar12);
      }
      else {
        (*DAT_1803faf38)(plVar2[1],uVar12);
      }
    }
    plVar2 = (longlong *)(&DAT_1803e75d0)[uVar8 * 6];
    if (plVar2 != (longlong *)0x0) {
      if ((DAT_1803faf38 == (code *)0x0) || (plVar2[1] == 0)) {
        (**(code **)(*plVar2 + 8))(plVar2,uVar14);
      }
      else {
        (*DAT_1803faf38)(plVar2[1],uVar14);
      }
    }
    iVar6 = FUN_180023180((&DAT_1803e75d8)[uVar8 * 6],2,0xffffffff);
    if (iVar6 != 0) {
      uVar13 = (&DAT_1803e75d8)[uVar8 * 6];
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar9 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar9,"lua_settop");
      }
      (*DAT_180425540)(uVar13,uVar14);
      lVar11 = *plVar7;
      uVar13 = 0;
      goto LAB_18004040b;
    }
    puVar1 = (undefined8 *)(&DAT_1803e75d0)[uVar8 * 6];
    if (puVar1 == (undefined8 *)0x0) {
      iVar6 = 0;
    }
    else if ((DAT_1803fb088 == (code *)0x0) || (puVar1[1] == 0)) {
      iVar6 = (**(code **)*puVar1)();
    }
    else {
      iVar6 = (*DAT_1803fb088)(puVar1[1]);
    }
    uVar13 = (&DAT_1803e75d8)[uVar8 * 6];
    if (iVar4 < iVar6) {
      (*DAT_1803faee0)(uVar13,uVar14);
      lVar11 = *plVar7;
      uVar13 = 1;
      goto LAB_18004040b;
    }
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar9 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar9,"lua_settop");
    }
    (*DAT_180425540)(uVar13,(ulonglong)(iVar4 - 1));
  }
  lVar11 = *plVar7;
  uVar13 = 0;
LAB_18004040b:
  (**(code **)(lVar11 + 0xf8))(plVar7,uVar13);
  return 1;
}


