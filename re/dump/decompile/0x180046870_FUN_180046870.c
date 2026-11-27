// 0x180046870  FUN_180046870
// size=572 thunk=false
// signature: undefined FUN_180046870()
// status: ok


undefined8 FUN_180046870(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  HMODULE pHVar6;
  INT_PTR IVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2)) {
    return 0;
  }
  dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
  uVar9 = (uint)dVar2;
  if (((((int)uVar9 < 1) || (DAT_1803ff8a8 == 0)) ||
      (uVar5 = (ulonglong)(uVar9 & 0xf), 7 < (uVar9 & 0xf))) ||
     (((&DAT_1803ff7e0)[uVar5 * 0x18] == '\0' ||
      (*(uint *)(&DAT_1803ff7e4 + uVar5 * 0x18) != uVar9 >> 4)))) {
    (**(code **)(*plVar4 + 0xf8))(plVar4,0);
  }
  else {
    dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,2);
    lVar3 = DAT_1803ff8a8;
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar6 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar6,"lua_gettop");
    }
    IVar7 = (*DAT_1803fcfa0)(lVar3);
    lVar3 = DAT_1803ff8a8;
    iVar10 = (int)dVar2;
    if (iVar10 != 0) {
      if (iVar10 < 0) {
        iVar10 = iVar10 + 1 + (int)IVar7;
      }
      if ((*(int *)(&DAT_1803ff7e8 + uVar5 * 0x18) < iVar10) && (iVar10 <= (int)IVar7)) {
        if (DAT_1803fcfa0 == (FARPROC)0x0) {
          pHVar6 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fcfa0 = GetProcAddress(pHVar6,"lua_gettop");
        }
        uVar8 = (*DAT_1803fcfa0)(lVar3);
        lVar3 = DAT_1803ff8a8;
        if ((int)uVar8 <= *(int *)(&DAT_1803ff7e8 + uVar5 * 0x18)) {
          (**(code **)(*plVar4 + 0xf8))(plVar4,0);
          return 1;
        }
        if (DAT_1803fe490 == (FARPROC)0x0) {
          pHVar6 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(pHVar6,"lua_type");
        }
        IVar7 = (*DAT_1803fe490)(lVar3,uVar8 & 0xffffffff);
        if (((int)IVar7 != 5) && ((int)IVar7 != 0)) {
          (**(code **)(*plVar4 + 0xf8))(plVar4,0);
          return 1;
        }
        pcVar1 = *(code **)(*plVar4 + 0xf8);
        iVar10 = (*DAT_1803faed0)(DAT_1803ff8a8,iVar10);
        (*pcVar1)(plVar4,iVar10 != 0);
        return 1;
      }
    }
    (**(code **)(*plVar4 + 0xf8))(plVar4,0);
  }
  return 1;
}


