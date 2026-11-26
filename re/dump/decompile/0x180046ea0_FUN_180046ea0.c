// 0x180046ea0  FUN_180046ea0
// size=391 thunk=false
// signature: undefined FUN_180046ea0()
// status: ok


undefined8 FUN_180046ea0(longlong param_1)

{
  code *pcVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  HMODULE hModule;
  INT_PTR IVar6;
  uint uVar7;
  int iVar8;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    return 0;
  }
  dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
  uVar7 = (uint)dVar2;
  if (((((int)uVar7 < 1) || (DAT_1803ff8a8 == 0)) ||
      (uVar5 = (ulonglong)(uVar7 & 0xf), 7 < (uVar7 & 0xf))) ||
     (((&DAT_1803ff7e0)[uVar5 * 0x18] == '\0' ||
      (*(uint *)(&DAT_1803ff7e4 + uVar5 * 0x18) != uVar7 >> 4)))) {
    (**(code **)(*plVar4 + 0xf8))(plVar4,0);
  }
  else {
    dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,2);
    lVar3 = DAT_1803ff8a8;
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      hModule = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(hModule,"lua_gettop");
    }
    IVar6 = (*DAT_1803fcfa0)(lVar3);
    iVar8 = (int)dVar2;
    if (iVar8 != 0) {
      if (iVar8 < 0) {
        iVar8 = iVar8 + 1 + (int)IVar6;
      }
      if ((*(int *)(&DAT_1803ff7e8 + uVar5 * 0x18) < iVar8) && (iVar8 <= (int)IVar6)) {
        dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,3);
        pcVar1 = *(code **)(*plVar4 + 0xf8);
        iVar8 = FUN_180041810(plVar4,iVar8);
        (*pcVar1)(plVar4,iVar8 == (int)dVar2);
        return 1;
      }
    }
    (**(code **)(*plVar4 + 0xf8))(plVar4,0);
  }
  return 1;
}


