// 0x1800460d0  FUN_1800460d0
// size=555 thunk=false
// signature: undefined FUN_1800460d0()
// status: ok


undefined8 FUN_1800460d0(undefined8 param_1,longlong param_2)

{
  double dVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  HMODULE pHVar5;
  INT_PTR IVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
    return 0;
  }
  dVar1 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
  uVar8 = (uint)dVar1;
  if ((((0 < (int)uVar8) && (DAT_1803ff8a8 != 0)) &&
      (uVar4 = (ulonglong)(uVar8 & 0xf), (uVar8 & 0xf) < 8)) &&
     (((&DAT_1803ff7e0)[uVar4 * 0x18] != '\0' &&
      (*(uint *)(&DAT_1803ff7e4 + uVar4 * 0x18) == uVar8 >> 4)))) {
    dVar1 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,2);
    lVar7 = DAT_1803ff8a8;
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar5 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
    }
    IVar6 = (*DAT_1803fcfa0)(lVar7);
    lVar7 = DAT_1803ff8a8;
    uVar8 = (uint)dVar1;
    if (uVar8 != 0) {
      if ((int)uVar8 < 0) {
        uVar8 = uVar8 + 1 + (int)IVar6;
      }
      if ((*(int *)(&DAT_1803ff7e8 + uVar4 * 0x18) < (int)uVar8) && ((int)uVar8 <= (int)IVar6)) {
        if (DAT_1803fe490 == (FARPROC)0x0) {
          pHVar5 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fe490 = GetProcAddress(pHVar5,"lua_type");
        }
        IVar6 = (*DAT_1803fe490)(lVar7,(ulonglong)uVar8);
        lVar7 = DAT_1803ff8a8;
        if ((int)IVar6 != 5) {
          (**(code **)(*plVar3 + 0xf8))(plVar3,0);
          return 1;
        }
        if (DAT_1803fcfa0 == (FARPROC)0x0) {
          pHVar5 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
        }
        IVar6 = (*DAT_1803fcfa0)(lVar7);
        if (*(int *)(&DAT_1803ff7e8 + uVar4 * 0x18) < (int)IVar6 + -1) {
          cVar2 = FUN_180041bb0(uVar8);
          if (cVar2 != '\0') {
            FUN_180014410("[LUASTACK] write to _G: %s\n","<computed key>");
          }
          (*DAT_1803faf40)(DAT_1803ff8a8,uVar8);
          lVar7 = *plVar3;
          uVar9 = 1;
        }
        else {
          lVar7 = *plVar3;
          uVar9 = 0;
        }
        (**(code **)(lVar7 + 0xf8))(plVar3,uVar9);
        return 1;
      }
    }
  }
  (**(code **)(*plVar3 + 0xf8))(plVar3,0);
  return 1;
}


