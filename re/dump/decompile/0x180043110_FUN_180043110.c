// 0x180043110  FUN_180043110
// size=330 thunk=false
// signature: undefined FUN_180043110()
// status: ok


undefined8 FUN_180043110(longlong param_1)

{
  double dVar1;
  longlong *plVar2;
  ulonglong uVar3;
  HMODULE hModule;
  INT_PTR IVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  
  plVar2 = (longlong *)FUN_180039770();
  if ((plVar2 == (longlong *)0x0) || (plVar2[1] != param_1)) {
    return 0;
  }
  dVar1 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,1);
  uVar6 = (uint)dVar1;
  if ((((0 < (int)uVar6) && (DAT_1803ff8a8 != 0)) &&
      (uVar3 = (ulonglong)(uVar6 & 0xf), (uVar6 & 0xf) < 8)) &&
     (((&DAT_1803ff7e0)[uVar3 * 0x18] != '\0' &&
      (*(uint *)(&DAT_1803ff7e4 + uVar3 * 0x18) == uVar6 >> 4)))) {
    dVar1 = (double)(**(code **)(*plVar2 + 0x160))(plVar2,2);
    lVar5 = DAT_1803ff8a8;
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      hModule = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(hModule,"lua_gettop");
    }
    IVar4 = (*DAT_1803fcfa0)(lVar5);
    iVar7 = (int)dVar1;
    if (iVar7 != 0) {
      if (iVar7 < 0) {
        iVar7 = iVar7 + 1 + (int)IVar4;
      }
      if ((*(int *)(&DAT_1803ff7e8 + uVar3 * 0x18) < iVar7) && (iVar7 <= (int)IVar4)) {
        (*DAT_1803faf60)(DAT_1803ff8a8);
        lVar5 = *plVar2;
        uVar8 = 1;
        goto LAB_180043228;
      }
    }
  }
  lVar5 = *plVar2;
  uVar8 = 0;
LAB_180043228:
  (**(code **)(lVar5 + 0xf8))(plVar2,uVar8);
  return 1;
}


