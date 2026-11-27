// 0x18003e680  FUN_18003e680
// size=460 thunk=false
// signature: undefined FUN_18003e680()
// status: ok


undefined8 FUN_18003e680(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  HMODULE hModule;
  INT_PTR IVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 uVar11;
  
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) {
    return 0;
  }
  dVar3 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);
  uVar9 = (uint)dVar3;
  if ((0 < (int)uVar9) && (uVar6 = (ulonglong)(uVar9 & 0xf), (uVar9 & 0xf) < 8)) {
    lVar10 = uVar6 * 0x30;
    if (((&DAT_1803e75c0)[lVar10] != '\0') &&
       (((*(uint *)(&DAT_1803e75c4 + lVar10) == uVar9 >> 4 && ((&DAT_1803e75d0)[uVar6 * 6] != 0)) &&
        ((&DAT_1803e75d8)[uVar6 * 6] != 0)))) {
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
      uVar9 = (uint)dVar3;
      if (uVar9 != 0) {
        if ((int)uVar9 < 0) {
          uVar9 = uVar9 + 1 + iVar4;
        }
        if ((*(int *)(&DAT_1803e75e0 + lVar10) < (int)uVar9) && ((int)uVar9 <= iVar4)) {
          uVar8 = (&DAT_1803e75d8)[uVar6 * 6];
          if (DAT_1803fe490 == (FARPROC)0x0) {
            hModule = GetModuleHandleA("lua_shared.dll");
            DAT_1803fe490 = GetProcAddress(hModule,"lua_type");
          }
          IVar7 = (*DAT_1803fe490)(uVar8,(ulonglong)uVar9);
          if (((int)IVar7 != 7) && ((int)IVar7 != 2)) {
            (**(code **)(*plVar5 + 0xe0))(plVar5);
            return 1;
          }
          pcVar2 = *(code **)(*plVar5 + 0xf0);
          uVar8 = (**(code **)(*(longlong *)(&DAT_1803e75d0)[uVar6 * 6] + 0xd8))
                            ((longlong *)(&DAT_1803e75d0)[uVar6 * 6],uVar9);
          uVar11 = FUN_18003afe0(&DAT_1803e75c0 + lVar10,uVar8);
          (*pcVar2)(plVar5,uVar11);
          return 1;
        }
      }
      (**(code **)(*plVar5 + 0xe0))(plVar5);
      return 1;
    }
  }
  (**(code **)(*plVar5 + 0xe0))(plVar5);
  return 1;
}


