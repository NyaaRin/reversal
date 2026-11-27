// 0x180042f00  FUN_180042f00
// size=503 thunk=false
// signature: undefined FUN_180042f00()
// status: ok


undefined8 FUN_180042f00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  HMODULE pHVar6;
  INT_PTR IVar7;
  uint uVar8;
  int iVar9;
  double dVar10;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2)) {
    return 0;
  }
  dVar10 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
  uVar8 = (uint)dVar10;
  if ((((0 < (int)uVar8) && (DAT_1803ff8a8 != 0)) &&
      (uVar5 = (ulonglong)(uVar8 & 0xf), (uVar8 & 0xf) < 8)) &&
     (((&DAT_1803ff7e0)[uVar5 * 0x18] != '\0' &&
      (*(uint *)(&DAT_1803ff7e4 + uVar5 * 0x18) == uVar8 >> 4)))) {
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,3);
    if (cVar2 == '\0') {
      iVar3 = 1;
    }
    else {
      dVar10 = (double)(**(code **)(*plVar4 + 0xc0))(plVar4,2);
      iVar3 = (int)dVar10;
    }
    lVar1 = DAT_1803ff8a8;
    iVar9 = 0;
    if (-1 < iVar3) {
      iVar9 = iVar3;
    }
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar6 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar6,"lua_gettop");
    }
    IVar7 = (*DAT_1803fcfa0)(lVar1);
    lVar1 = DAT_1803ff8a8;
    iVar3 = (int)IVar7 - *(int *)(&DAT_1803ff7e8 + uVar5 * 0x18);
    if (iVar9 <= iVar3) {
      iVar3 = iVar9;
    }
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar6 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar6,"lua_gettop");
    }
    IVar7 = (*DAT_1803fcfa0)(lVar1);
    lVar1 = DAT_1803ff8a8;
    if (DAT_180425540 == (FARPROC)0x0) {
      pHVar6 = GetModuleHandleA("lua_shared.dll");
      DAT_180425540 = GetProcAddress(pHVar6,"lua_settop");
    }
    (*DAT_180425540)(lVar1,(ulonglong)(uint)((int)IVar7 - iVar3));
    (**(code **)(*plVar4 + 0xf8))(plVar4,1);
    return 1;
  }
  (**(code **)(*plVar4 + 0xf8))(plVar4,0);
  return 1;
}


