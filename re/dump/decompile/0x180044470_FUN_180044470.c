// 0x180044470  FUN_180044470
// size=479 thunk=false
// signature: undefined FUN_180044470()
// status: ok


undefined8 FUN_180044470(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  HMODULE pHVar5;
  INT_PTR IVar6;
  uint uVar7;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  dVar1 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
  uVar7 = (uint)dVar1;
  if (((((int)uVar7 < 1) || (DAT_1803ff8a8 == 0)) ||
      (uVar4 = (ulonglong)(uVar7 & 0xf), 7 < (uVar7 & 0xf))) ||
     (((&DAT_1803ff7e0)[uVar4 * 0x18] == '\0' ||
      (*(uint *)(&DAT_1803ff7e4 + uVar4 * 0x18) != uVar7 >> 4)))) {
    (**(code **)(*plVar3 + 0xe0))(plVar3);
  }
  else {
    dVar1 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,2);
    lVar2 = DAT_1803ff8a8;
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar5 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
    }
    IVar6 = (*DAT_1803fcfa0)(lVar2);
    lVar2 = DAT_1803ff8a8;
    uVar7 = (uint)dVar1;
    if (uVar7 != 0) {
      if ((int)uVar7 < 0) {
        uVar7 = uVar7 + 1 + (int)IVar6;
      }
      if ((*(int *)(&DAT_1803ff7e8 + uVar4 * 0x18) < (int)uVar7) && ((int)uVar7 <= (int)IVar6)) {
        if (DAT_180423ad0 == (FARPROC)0x0) {
          pHVar5 = GetModuleHandleA("lua_shared.dll");
          DAT_180423ad0 = GetProcAddress(pHVar5,"lua_pushvalue");
        }
        (*DAT_180423ad0)(lVar2,(ulonglong)uVar7);
        lVar2 = DAT_1803ff8a8;
        if (DAT_1803feb38 == (FARPROC)0x0) {
          pHVar5 = GetModuleHandleA("lua_shared.dll");
          DAT_1803feb38 = GetProcAddress(pHVar5,"lua_xmove");
        }
        (*DAT_1803feb38)(lVar2,param_1,1);
        return 1;
      }
    }
    (**(code **)(*plVar3 + 0xe0))(plVar3);
  }
  return 1;
}


