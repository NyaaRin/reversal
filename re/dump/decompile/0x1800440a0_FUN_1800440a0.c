// 0x1800440a0  FUN_1800440a0
// size=433 thunk=false
// signature: undefined FUN_1800440a0()
// status: ok


undefined8 FUN_1800440a0(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  longlong *plVar3;
  ulonglong uVar4;
  HMODULE pHVar5;
  INT_PTR IVar6;
  uint uVar7;
  undefined4 uVar8;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  dVar2 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
  uVar7 = (uint)dVar2;
  if ((((0 < (int)uVar7) && (DAT_1803ff8a8 != 0)) &&
      (uVar4 = (ulonglong)(uVar7 & 0xf), (uVar7 & 0xf) < 8)) &&
     (((&DAT_1803ff7e0)[uVar4 * 0x18] != '\0' &&
      (*(uint *)(&DAT_1803ff7e4 + uVar4 * 0x18) == uVar7 >> 4)))) {
    dVar2 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,2);
    lVar1 = DAT_1803ff8a8;
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar5 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
    }
    IVar6 = (*DAT_1803fcfa0)(lVar1);
    lVar1 = DAT_1803ff8a8;
    uVar7 = (uint)dVar2;
    if (uVar7 != 0) {
      if ((int)uVar7 < 0) {
        uVar7 = uVar7 + 1 + (int)IVar6;
      }
      if ((*(int *)(&DAT_1803ff7e8 + uVar4 * 0x18) < (int)uVar7) && ((int)uVar7 <= (int)IVar6)) {
        if (DAT_1803fe490 == (FARPROC)0x0) {
          pHVar5 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(pHVar5,"lua_type");
        }
        IVar6 = (*DAT_1803fe490)(lVar1,(ulonglong)uVar7);
        lVar1 = *plVar3;
        if ((int)IVar6 != 3) {
          (**(code **)(lVar1 + 0xe0))(plVar3);
          return 1;
        }
        uVar8 = (*DAT_1803fafc0)(DAT_1803ff8a8,uVar7);
        (**(code **)(lVar1 + 0xf0))(plVar3,uVar8);
        return 1;
      }
    }
  }
  (**(code **)(*plVar3 + 0xe0))(plVar3);
  return 1;
}


