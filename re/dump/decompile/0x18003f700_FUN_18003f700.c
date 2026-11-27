// 0x18003f700  FUN_18003f700
// size=707 thunk=false
// signature: undefined FUN_18003f700()
// status: ok


undefined8 FUN_18003f700(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  HMODULE hModule;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) {
    return 0;
  }
  dVar3 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);
  uVar8 = (uint)dVar3;
  if ((((((int)uVar8 < 1) || (uVar6 = (ulonglong)(uVar8 & 0xf), 7 < (uVar8 & 0xf))) ||
       ((&DAT_1803e75c0)[uVar6 * 0x30] == '\0')) ||
      ((*(uint *)(&DAT_1803e75c4 + uVar6 * 0x30) != uVar8 >> 4 || ((&DAT_1803e75d0)[uVar6 * 6] == 0)
       ))) || ((&DAT_1803e75d8)[uVar6 * 6] == 0)) {
    (**(code **)(*plVar5 + 0xf8))(plVar5,0);
    return 1;
  }
  dVar3 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,2);
  puVar1 = (undefined8 *)(&DAT_1803e75d0)[uVar6 * 6];
  if (puVar1 == (undefined8 *)0x0) {
    iVar4 = 0;
  }
  else if ((DAT_1803fb088 == (code *)0x0) || (puVar1[1] == 0)) {
    iVar4 = (**(code **)*puVar1)();
  }
  else {
    iVar4 = (*DAT_1803fb088)(puVar1[1]);
  }
  iVar10 = (int)dVar3;
  if (iVar10 == 0) {
LAB_18003f996:
    (**(code **)(*plVar5 + 0xf8))(plVar5,0);
    return 1;
  }
  if (iVar10 < 0) {
    iVar10 = iVar10 + 1 + iVar4;
  }
  if ((iVar10 <= *(int *)(&DAT_1803e75e0 + uVar6 * 0x30)) || (iVar4 < iVar10)) goto LAB_18003f996;
  puVar1 = (undefined8 *)(&DAT_1803e75d0)[uVar6 * 6];
  if (puVar1 == (undefined8 *)0x0) {
    uVar8 = 0;
  }
  else if ((DAT_1803fb088 == (code *)0x0) || (puVar1[1] == 0)) {
    uVar8 = (**(code **)*puVar1)();
  }
  else {
    uVar8 = (*DAT_1803fb088)(puVar1[1]);
  }
  if ((int)uVar8 <= *(int *)(&DAT_1803e75e0 + uVar6 * 0x30)) {
    (**(code **)(*plVar5 + 0xf8))(plVar5,0);
    return 1;
  }
  if ((((&DAT_1803e75d8)[uVar6 * 6] != 0) && (DAT_1803fb038 != (code *)0x0)) &&
     (iVar4 = (*DAT_1803fb038)((&DAT_1803e75d8)[uVar6 * 6],4), iVar4 != 0)) {
    (*DAT_1803faf58)((&DAT_1803e75d8)[uVar6 * 6],FUN_18002d640,0);
    plVar2 = (longlong *)(&DAT_1803e75d0)[uVar6 * 6];
    if (plVar2 != (longlong *)0x0) {
      if ((DAT_1803faf38 == (code *)0x0) || (plVar2[1] == 0)) {
        (**(code **)(*plVar2 + 8))(plVar2,iVar10);
      }
      else {
        (*DAT_1803faf38)(plVar2[1],iVar10);
      }
    }
    plVar2 = (longlong *)(&DAT_1803e75d0)[uVar6 * 6];
    if (plVar2 != (longlong *)0x0) {
      if ((DAT_1803faf38 == (code *)0x0) || (plVar2[1] == 0)) {
        (**(code **)(*plVar2 + 8))(plVar2,uVar8);
      }
      else {
        (*DAT_1803faf38)(plVar2[1],uVar8);
      }
    }
    iVar4 = FUN_180023180((&DAT_1803e75d8)[uVar6 * 6],2,1);
    uVar9 = (&DAT_1803e75d8)[uVar6 * 6];
    if (iVar4 == 0) {
      (*DAT_1803faee0)(uVar9,uVar8);
      lVar7 = *plVar5;
      uVar9 = 1;
      goto LAB_18003f95c;
    }
    if (DAT_180425540 == (FARPROC)0x0) {
      hModule = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(hModule,"lua_settop");
    }
    (*DAT_180425540)(uVar9,(ulonglong)uVar8);
  }
  lVar7 = *plVar5;
  uVar9 = 0;
LAB_18003f95c:
  (**(code **)(lVar7 + 0xf8))(plVar5,uVar9);
  return 1;
}


