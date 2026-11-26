// 0x1800466d0  FUN_1800466d0
// size=395 thunk=false
// signature: undefined FUN_1800466d0()
// status: ok


undefined8 FUN_1800466d0(undefined8 param_1,longlong param_2)

{
  double dVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  HMODULE hModule;
  INT_PTR IVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_2)) {
    return 0;
  }
  dVar1 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
  uVar6 = (uint)dVar1;
  if ((((0 < (int)uVar6) && (DAT_1803ff8a8 != 0)) &&
      (uVar4 = (ulonglong)(uVar6 & 0xf), (uVar6 & 0xf) < 8)) &&
     (((&DAT_1803ff7e0)[uVar4 * 0x18] != '\0' &&
      (*(uint *)(&DAT_1803ff7e4 + uVar4 * 0x18) == uVar6 >> 4)))) {
    dVar1 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,2);
    lVar7 = DAT_1803ff8a8;
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      hModule = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(hModule,"lua_gettop");
    }
    IVar5 = (*DAT_1803fcfa0)(lVar7);
    iVar8 = (int)dVar1;
    if (iVar8 != 0) {
      if (iVar8 < 0) {
        iVar8 = iVar8 + 1 + (int)IVar5;
      }
      if ((*(int *)(&DAT_1803ff7e8 + uVar4 * 0x18) < iVar8) && (iVar8 <= (int)IVar5)) {
        if ((DAT_1803ff8a8 == 0) || (DAT_1803fb038 == (code *)0x0)) {
          lVar7 = *plVar3;
        }
        else {
          iVar2 = (*DAT_1803fb038)(DAT_1803ff8a8,2);
          lVar7 = *plVar3;
          if (iVar2 != 0) {
            iVar8 = (*DAT_1803fb010)(DAT_1803ff8a8,iVar8);
            (**(code **)(lVar7 + 0xf8))(plVar3,iVar8 != 0);
            return 1;
          }
        }
        (**(code **)(lVar7 + 0xe0))(plVar3);
        return 1;
      }
    }
  }
  (**(code **)(*plVar3 + 0xe0))(plVar3);
  return 1;
}


