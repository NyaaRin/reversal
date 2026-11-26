// 0x18003ff00  FUN_18003ff00
// size=518 thunk=false
// signature: undefined FUN_18003ff00()
// status: ok


undefined8 FUN_18003ff00(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  HMODULE hModule;
  INT_PTR IVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2)) {
    return 0;
  }
  dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
  uVar7 = (uint)dVar2;
  if (((int)uVar7 < 1) || (uVar5 = (ulonglong)(uVar7 & 0xf), 7 < (uVar7 & 0xf))) {
LAB_1800400db:
    (**(code **)(*plVar4 + 0xf8))(plVar4,0);
    return 1;
  }
  lVar9 = uVar5 * 0x30;
  if (((&DAT_1803e75c0)[lVar9] == '\0') ||
     (((*(uint *)(&DAT_1803e75c4 + lVar9) != uVar7 >> 4 || ((&DAT_1803e75d0)[uVar5 * 6] == 0)) ||
      ((&DAT_1803e75d8)[uVar5 * 6] == 0)))) goto LAB_1800400db;
  dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,2);
  puVar1 = (undefined8 *)(&DAT_1803e75d0)[uVar5 * 6];
  if (puVar1 == (undefined8 *)0x0) {
    iVar3 = 0;
  }
  else if ((DAT_1803fb088 == (code *)0x0) || (puVar1[1] == 0)) {
    iVar3 = (**(code **)*puVar1)();
  }
  else {
    iVar3 = (*DAT_1803fb088)(puVar1[1]);
  }
  uVar7 = (uint)dVar2;
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
      uVar7 = uVar7 + 1 + iVar3;
    }
    if ((*(int *)(&DAT_1803e75e0 + lVar9) < (int)uVar7) && ((int)uVar7 <= iVar3)) {
      uVar8 = (&DAT_1803e75d8)[uVar5 * 6];
      if (DAT_1803fe490 == (FARPROC)0x0) {
        hModule = GetModuleHandleA("lua_shared.dll");
        DAT_1803fe490 = GetProcAddress(hModule,"lua_type");
      }
      IVar6 = (*DAT_1803fe490)(uVar8,(ulonglong)uVar7);
      if ((int)IVar6 != 5) {
        (**(code **)(*plVar4 + 0xf8))(plVar4,0);
        return 1;
      }
      puVar1 = (undefined8 *)(&DAT_1803e75d0)[uVar5 * 6];
      if (puVar1 == (undefined8 *)0x0) {
        iVar3 = 0;
      }
      else if ((DAT_1803fb088 == (code *)0x0) || (puVar1[1] == 0)) {
        iVar3 = (**(code **)*puVar1)();
      }
      else {
        iVar3 = (*DAT_1803fb088)(puVar1[1]);
      }
      if (*(int *)(&DAT_1803e75e0 + lVar9) < iVar3 + -1) {
        FUN_18003b0b0(&DAT_1803e75c0 + lVar9,uVar7,0);
        (**(code **)(*(longlong *)(&DAT_1803e75d0)[uVar5 * 6] + 0xb0))
                  ((longlong *)(&DAT_1803e75d0)[uVar5 * 6],uVar7);
        lVar9 = *plVar4;
        uVar8 = 1;
        goto LAB_1800400b6;
      }
    }
  }
  lVar9 = *plVar4;
  uVar8 = 0;
LAB_1800400b6:
  (**(code **)(lVar9 + 0xf8))(plVar4,uVar8);
  return 1;
}


