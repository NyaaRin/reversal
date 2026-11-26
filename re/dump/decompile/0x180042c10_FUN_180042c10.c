// 0x180042c10  FUN_180042c10
// size=277 thunk=false
// signature: undefined FUN_180042c10()
// status: ok


undefined8 FUN_180042c10(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  HMODULE hModule;
  INT_PTR IVar5;
  uint uVar6;
  double dVar7;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 != (longlong *)0x0) && (plVar3[1] == param_1)) {
    dVar7 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
    lVar1 = DAT_1803ff8a8;
    uVar6 = (uint)dVar7;
    if (((((int)uVar6 < 1) || (DAT_1803ff8a8 == 0)) ||
        (uVar4 = (ulonglong)(uVar6 & 0xf), 7 < (uVar6 & 0xf))) ||
       (((&DAT_1803ff7e0)[uVar4 * 0x18] == '\0' ||
        (*(uint *)(&DAT_1803ff7e4 + uVar4 * 0x18) != uVar6 >> 4)))) {
      (**(code **)(*plVar3 + 0xe0))(plVar3);
    }
    else {
      if (DAT_1803fcfa0 == (FARPROC)0x0) {
        hModule = GetModuleHandleA("lua_shared.dll");
        DAT_1803fcfa0 = GetProcAddress(hModule,"lua_gettop");
      }
      IVar5 = (*DAT_1803fcfa0)(lVar1);
      iVar2 = (int)IVar5 - *(int *)(&DAT_1803ff7e8 + uVar4 * 0x18);
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      (**(code **)(*plVar3 + 0xf0))(plVar3,(double)iVar2);
    }
    return 1;
  }
  return 0;
}


