// 0x180042d30  FUN_180042d30
// size=436 thunk=false
// signature: undefined FUN_180042d30()
// status: ok


undefined8 FUN_180042d30(undefined8 param_1,longlong param_2)

{
  double dVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  HMODULE pHVar6;
  INT_PTR IVar7;
  uint uVar8;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2)) {
    return 0;
  }
  dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
  uVar8 = (uint)dVar1;
  if ((((0 < (int)uVar8) && (DAT_1803ff8a8 != 0)) &&
      (uVar5 = (ulonglong)(uVar8 & 0xf), (uVar8 & 0xf) < 8)) &&
     (((&DAT_1803ff7e0)[uVar5 * 0x18] != '\0' &&
      (*(uint *)(&DAT_1803ff7e4 + uVar5 * 0x18) == uVar8 >> 4)))) {
    dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,2);
    lVar2 = DAT_1803ff8a8;
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar6 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar6,"lua_gettop");
    }
    IVar7 = (*DAT_1803fcfa0)(lVar2);
    uVar8 = (uint)dVar1;
    if (uVar8 != 0) {
      if ((int)uVar8 < 0) {
        uVar8 = uVar8 + 1 + (int)IVar7;
      }
      if (((*(int *)(&DAT_1803ff7e8 + uVar5 * 0x18) < (int)uVar8) && ((int)uVar8 <= (int)IVar7)) &&
         ((DAT_1803ff8a8 != 0 &&
          ((DAT_1803fb038 != (code *)0x0 &&
           (iVar3 = (*DAT_1803fb038)(DAT_1803ff8a8,2), lVar2 = DAT_1803ff8a8, iVar3 != 0)))))) {
        if (DAT_180423ad0 == (FARPROC)0x0) {
          pHVar6 = GetModuleHandleA("lua_shared.dll");
          DAT_180423ad0 = GetProcAddress(pHVar6,"lua_pushvalue");
        }
        (*DAT_180423ad0)(lVar2,(ulonglong)uVar8);
        (**(code **)(*plVar4 + 0xf8))(plVar4,1);
        return 1;
      }
    }
  }
  (**(code **)(*plVar4 + 0xf8))(plVar4,0);
  return 1;
}


