// 0x1800438f0  FUN_1800438f0
// size=479 thunk=false
// signature: undefined FUN_1800438f0()
// status: ok


undefined8 FUN_1800438f0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  HMODULE pHVar5;
  INT_PTR IVar6;
  uint uVar7;
  double dVar8;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_1)) {
    return 0;
  }
  dVar8 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
  uVar7 = (uint)dVar8;
  if ((((0 < (int)uVar7) && (DAT_1803ff8a8 != 0)) && (uVar2 = uVar7 & 0xf, uVar2 < 8)) &&
     (((&DAT_1803ff7e0)[(ulonglong)uVar2 * 0x18] != '\0' &&
      (*(uint *)(&DAT_1803ff7e4 + (ulonglong)uVar2 * 0x18) == uVar7 >> 4)))) {
    if ((DAT_1803ff8a8 != 0) && (DAT_1803fb038 != (code *)0x0)) {
      iVar3 = (*DAT_1803fb038)(DAT_1803ff8a8,2);
      if (iVar3 != 0) {
        if (DAT_1803fcfa0 == (FARPROC)0x0) {
          pHVar5 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
        }
        IVar6 = (*DAT_1803fcfa0)(param_1);
        if (1 < (int)IVar6) {
          if (DAT_180423ad0 == (FARPROC)0x0) {
            pHVar5 = GetModuleHandleA("lua_shared.dll");
            DAT_180423ad0 = GetProcAddress(pHVar5,"lua_pushvalue");
          }
          (*DAT_180423ad0)(param_1,2);
          lVar1 = DAT_1803ff8a8;
          if (DAT_1803feb38 == (FARPROC)0x0) {
            pHVar5 = GetModuleHandleA("lua_shared.dll");
            DAT_1803feb38 = GetProcAddress(pHVar5,"lua_xmove");
          }
          (*DAT_1803feb38)(param_1,lVar1,1);
          (**(code **)(*plVar4 + 0xf8))(plVar4,1);
          return 1;
        }
      }
    }
    (**(code **)(*plVar4 + 0xf8))(plVar4,0);
    return 1;
  }
  (**(code **)(*plVar4 + 0xf8))(plVar4,0);
  return 1;
}


