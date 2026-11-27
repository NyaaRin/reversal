// 0x18003e270  FUN_18003e270
// size=455 thunk=false
// signature: undefined FUN_18003e270()
// status: ok


undefined8 FUN_18003e270(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  double dVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  HMODULE hModule;
  INT_PTR IVar8;
  uint uVar9;
  undefined4 uVar10;
  
  plVar6 = (longlong *)FUN_180039770();
  if ((plVar6 == (longlong *)0x0) || (plVar6[1] != param_2)) {
    return 0;
  }
  dVar4 = (double)(**(code **)(*plVar6 + 0x160))(plVar6,1);
  uVar9 = (uint)dVar4;
  if ((((((int)uVar9 < 1) || (uVar7 = (ulonglong)(uVar9 & 0xf), 7 < (uVar9 & 0xf))) ||
       ((&DAT_1803e75c0)[uVar7 * 0x30] == '\0')) ||
      ((*(uint *)(&DAT_1803e75c4 + uVar7 * 0x30) != uVar9 >> 4 || ((&DAT_1803e75d0)[uVar7 * 6] == 0)
       ))) || ((&DAT_1803e75d8)[uVar7 * 6] == 0)) {
    (**(code **)(*plVar6 + 0xe0))(plVar6);
  }
  else {
    dVar4 = (double)(**(code **)(*plVar6 + 0x160))(plVar6,2);
    puVar1 = (undefined8 *)(&DAT_1803e75d0)[uVar7 * 6];
    if (puVar1 == (undefined8 *)0x0) {
      iVar5 = 0;
    }
    else if ((DAT_1803fb088 == (code *)0x0) || (puVar1[1] == 0)) {
      iVar5 = (**(code **)*puVar1)();
    }
    else {
      iVar5 = (*DAT_1803fb088)(puVar1[1]);
    }
    uVar9 = (uint)dVar4;
    if (uVar9 != 0) {
      if ((int)uVar9 < 0) {
        uVar9 = uVar9 + 1 + iVar5;
      }
      if ((*(int *)(&DAT_1803e75e0 + uVar7 * 0x30) < (int)uVar9) && ((int)uVar9 <= iVar5)) {
        uVar2 = (&DAT_1803e75d8)[uVar7 * 6];
        if (DAT_1803fe490 == (FARPROC)0x0) {
          hModule = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(hModule,"lua_type");
        }
        IVar8 = (*DAT_1803fe490)(uVar2,(ulonglong)uVar9);
        lVar3 = *plVar6;
        if ((int)IVar8 != 3) {
          (**(code **)(lVar3 + 0xe0))(plVar6);
          return 1;
        }
        uVar10 = (**(code **)(*(longlong *)(&DAT_1803e75d0)[uVar7 * 6] + 0xc0))
                           ((longlong *)(&DAT_1803e75d0)[uVar7 * 6],uVar9);
        (**(code **)(lVar3 + 0xf0))(plVar6,uVar10);
        return 1;
      }
    }
    (**(code **)(*plVar6 + 0xe0))(plVar6);
  }
  return 1;
}


