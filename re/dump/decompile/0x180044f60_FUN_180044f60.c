// 0x180044f60  FUN_180044f60
// size=494 thunk=false
// signature: undefined FUN_180044f60()
// status: ok


undefined8 FUN_180044f60(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  double dVar2;
  longlong *plVar3;
  ulonglong uVar4;
  HMODULE pHVar5;
  INT_PTR IVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
    return 0;
  }
  dVar2 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
  uVar7 = (uint)dVar2;
  if (((((int)uVar7 < 1) || (DAT_1803ff8a8 == 0)) ||
      (uVar4 = (ulonglong)(uVar7 & 0xf), 7 < (uVar7 & 0xf))) ||
     (((&DAT_1803ff7e0)[uVar4 * 0x18] == '\0' ||
      (*(uint *)(&DAT_1803ff7e4 + uVar4 * 0x18) != uVar7 >> 4)))) {
    (**(code **)(*plVar3 + 0xe0))(plVar3);
  }
  else {
    dVar2 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,2);
    lVar1 = DAT_1803ff8a8;
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar5 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
    }
    IVar6 = (*DAT_1803fcfa0)(lVar1);
    iVar8 = (int)dVar2;
    if (iVar8 != 0) {
      if (iVar8 < 0) {
        iVar8 = iVar8 + 1 + (int)IVar6;
      }
      if ((*(int *)(&DAT_1803ff7e8 + uVar4 * 0x18) < iVar8) && (iVar8 <= (int)IVar6)) {
        dVar2 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,3);
        lVar1 = DAT_1803ff8a8;
        if (DAT_1803fcfa0 == (FARPROC)0x0) {
          pHVar5 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
        }
        IVar6 = (*DAT_1803fcfa0)(lVar1);
        iVar9 = (int)dVar2;
        if (iVar9 != 0) {
          if (iVar9 < 0) {
            iVar9 = iVar9 + 1 + (int)IVar6;
          }
          if ((*(int *)(&DAT_1803ff7e8 + uVar4 * 0x18) < iVar9) && (iVar9 <= (int)IVar6)) {
            lVar1 = *plVar3;
            iVar8 = (*DAT_1803fb020)(DAT_1803ff8a8,iVar8);
            (**(code **)(lVar1 + 0xf8))(plVar3,iVar8 != 0);
            return 1;
          }
        }
      }
    }
    (**(code **)(*plVar3 + 0xe0))(plVar3);
  }
  return 1;
}


