// 0x180023fc0  FUN_180023fc0
// size=298 thunk=false
// signature: undefined FUN_180023fc0()
// status: ok


void FUN_180023fc0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  HMODULE hModule;
  longlong *plVar8;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  iVar4 = (**(code **)*param_1)();
  lVar2 = param_1[1];
  if ((lVar2 != 0) && (uVar3 = *(ulonglong *)(lVar2 + 0x10), uVar3 != 0)) {
    cVar1 = *(char *)(DAT_1803fa7f0[1] + 0x19);
    plVar8 = (longlong *)DAT_1803fa7f0[1];
    plVar7 = DAT_1803fa7f0;
    while (plVar6 = plVar8, cVar1 == '\0') {
      plVar8 = plVar6;
      if ((ulonglong)plVar6[4] < uVar3) {
        plVar8 = plVar6 + 2;
        plVar6 = plVar7;
      }
      cVar1 = *(char *)(*plVar8 + 0x19);
      plVar8 = (longlong *)*plVar8;
      plVar7 = plVar6;
    }
    if ((*(char *)((longlong)plVar7 + 0x19) != '\0') || (uVar3 < (ulonglong)plVar7[4])) {
      plVar7 = DAT_1803fa7f0;
    }
    if ((plVar7 != DAT_1803fa7f0) && (plVar7 != (longlong *)0xffffffffffffffd8)) {
      if (DAT_180423ad0 == (FARPROC)0x0) {
        hModule = GetModuleHandleA("lua_shared.dll");
        DAT_180423ad0 = GetProcAddress(hModule,"lua_pushvalue");
      }
      (*DAT_180423ad0)(lVar2,0xffffd8ed);
      (**(code **)(*param_1 + 8))(param_1,iVar4);
      (**(code **)(*param_1 + 0x28))(param_1,0xfffffffe,"COPYCACHE");
      (**(code **)(*param_1 + 0x10))(param_1,1);
      goto LAB_1800240cf;
    }
  }
  FUN_180014410("[LUA] persist object \'%s\' skipped: cache is not ready\n","COPYCACHE");
  if (iVar4 < 1) {
    return;
  }
  iVar5 = (**(code **)*param_1)(param_1);
  if (iVar5 < iVar4) {
    return;
  }
LAB_1800240cf:
  (**(code **)(*param_1 + 0x78))(param_1,iVar4);
  return;
}


