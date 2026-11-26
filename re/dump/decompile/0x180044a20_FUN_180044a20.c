// 0x180044a20  FUN_180044a20
// size=374 thunk=false
// signature: undefined FUN_180044a20()
// status: ok


undefined8 FUN_180044a20(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  longlong *plVar3;
  HMODULE hModule;
  INT_PTR IVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  dVar2 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
  uVar6 = (uint)dVar2;
  if ((((0 < (int)uVar6) && (DAT_1803ff8a8 != 0)) &&
      (uVar5 = (ulonglong)(uVar6 & 0xf), (uVar6 & 0xf) < 8)) &&
     (((&DAT_1803ff7e0)[uVar5 * 0x18] != '\0' &&
      (*(uint *)(&DAT_1803ff7e4 + uVar5 * 0x18) == uVar6 >> 4)))) {
    dVar2 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,2);
    lVar1 = DAT_1803ff8a8;
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      hModule = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(hModule,"lua_gettop");
    }
    IVar4 = (*DAT_1803fcfa0)(lVar1);
    iVar7 = (int)dVar2;
    if (iVar7 != 0) {
      if (iVar7 < 0) {
        iVar7 = iVar7 + 1 + (int)IVar4;
      }
      if ((*(int *)(&DAT_1803ff7e8 + uVar5 * 0x18) < iVar7) && (iVar7 <= (int)IVar4)) {
        lVar1 = *plVar3;
        uVar5 = (*DAT_1803fb0a0)(DAT_1803ff8a8);
        (**(code **)(lVar1 + 0xf0))(plVar3,(double)uVar5);
        return 1;
      }
    }
  }
  (**(code **)(*plVar3 + 0xe0))(plVar3);
  return 1;
}


