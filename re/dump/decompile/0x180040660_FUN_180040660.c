// 0x180040660  FUN_180040660
// size=542 thunk=false
// signature: undefined FUN_180040660()
// status: ok


undefined8 FUN_180040660(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  HMODULE hModule;
  INT_PTR IVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2)) {
    return 0;
  }
  dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
  uVar8 = (uint)dVar2;
  if (((((0 < (int)uVar8) && (uVar5 = (ulonglong)(uVar8 & 0xf), (uVar8 & 0xf) < 8)) &&
       ((&DAT_1803e75c0)[uVar5 * 0x30] != '\0')) &&
      ((*(uint *)(&DAT_1803e75c4 + uVar5 * 0x30) == uVar8 >> 4 && ((&DAT_1803e75d0)[uVar5 * 6] != 0)
       ))) && ((&DAT_1803e75d8)[uVar5 * 6] != 0)) {
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
    iVar10 = (int)dVar2;
    if (iVar10 != 0) {
      if (iVar10 < 0) {
        iVar10 = iVar10 + 1 + iVar3;
      }
      if ((*(int *)(&DAT_1803e75e0 + uVar5 * 0x30) < iVar10) && (iVar10 <= iVar3)) {
        puVar1 = (undefined8 *)(&DAT_1803e75d0)[uVar5 * 6];
        if (puVar1 == (undefined8 *)0x0) {
          uVar8 = 0;
        }
        else if ((DAT_1803fb088 == (code *)0x0) || (puVar1[1] == 0)) {
          uVar8 = (**(code **)*puVar1)();
        }
        else {
          uVar8 = (*DAT_1803fb088)(puVar1[1]);
        }
        if ((int)uVar8 <= *(int *)(&DAT_1803e75e0 + uVar5 * 0x30)) {
          (**(code **)(*plVar4 + 0xf8))(plVar4,0);
          return 1;
        }
        uVar9 = (&DAT_1803e75d8)[uVar5 * 6];
        if (DAT_1803fe490 == (FARPROC)0x0) {
          hModule = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(hModule,"lua_type");
        }
        IVar6 = (*DAT_1803fe490)(uVar9,(ulonglong)uVar8);
        if (((int)IVar6 == 5) || ((int)IVar6 == 0)) {
          (**(code **)(*(longlong *)(&DAT_1803e75d0)[uVar5 * 6] + 0x40))
                    ((longlong *)(&DAT_1803e75d0)[uVar5 * 6],iVar10);
          lVar7 = *plVar4;
          uVar9 = 1;
        }
        else {
          lVar7 = *plVar4;
          uVar9 = 0;
        }
        (**(code **)(lVar7 + 0xf8))(plVar4,uVar9);
        return 1;
      }
    }
    (**(code **)(*plVar4 + 0xf8))(plVar4,0);
    return 1;
  }
  (**(code **)(*plVar4 + 0xf8))(plVar4,0);
  return 1;
}


