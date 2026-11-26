// 0x180044ba0  FUN_180044ba0
// size=938 thunk=false
// signature: undefined FUN_180044ba0()
// status: ok


undefined8 FUN_180044ba0(undefined8 param_1,longlong param_2)

{
  double dVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  HMODULE pHVar5;
  INT_PTR IVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2)) {
    return 0;
  }
  dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
  uVar8 = (uint)dVar1;
  if (((((int)uVar8 < 1) || (DAT_1803ff8a8 == 0)) ||
      (uVar7 = (ulonglong)(uVar8 & 0xf), 7 < (uVar8 & 0xf))) ||
     (((&DAT_1803ff7e0)[uVar7 * 0x18] == '\0' ||
      (*(uint *)(&DAT_1803ff7e4 + uVar7 * 0x18) != uVar8 >> 4)))) {
    (**(code **)(*plVar4 + 0xe0))(plVar4);
  }
  else {
    dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,2);
    lVar2 = DAT_1803ff8a8;
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar5 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
    }
    IVar6 = (*DAT_1803fcfa0)(lVar2);
    uVar8 = (uint)dVar1;
    if (uVar8 != 0) {
      if ((int)uVar8 < 0) {
        uVar8 = uVar8 + 1 + (int)IVar6;
      }
      if ((*(int *)(&DAT_1803ff7e8 + uVar7 * 0x18) < (int)uVar8) && ((int)uVar8 <= (int)IVar6)) {
        dVar1 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,3);
        lVar2 = DAT_1803ff8a8;
        if (DAT_1803fcfa0 == (FARPROC)0x0) {
          pHVar5 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
        }
        IVar6 = (*DAT_1803fcfa0)(lVar2);
        uVar9 = (uint)dVar1;
        if (uVar9 != 0) {
          if ((int)uVar9 < 0) {
            uVar9 = uVar9 + 1 + (int)IVar6;
          }
          if ((((*(int *)(&DAT_1803ff7e8 + uVar7 * 0x18) < (int)uVar9) && ((int)uVar9 <= (int)IVar6)
               ) && (DAT_1803ff8a8 != 0)) &&
             ((DAT_1803fb038 != (code *)0x0 &&
              (iVar3 = (*DAT_1803fb038)(DAT_1803ff8a8,4), lVar2 = DAT_1803ff8a8, iVar3 != 0)))) {
            if (DAT_1803fcfa0 == (FARPROC)0x0) {
              pHVar5 = GetModuleHandleA("lua_shared.dll");
              DAT_1803fcfa0 = GetProcAddress(pHVar5,"lua_gettop");
            }
            uVar7 = (*DAT_1803fcfa0)(lVar2);
            (*DAT_1803faf58)(DAT_1803ff8a8,FUN_18002d680,0);
            lVar2 = DAT_1803ff8a8;
            if (DAT_180423ad0 == (FARPROC)0x0) {
              pHVar5 = GetModuleHandleA("lua_shared.dll");
              DAT_180423ad0 = GetProcAddress(pHVar5,"lua_pushvalue");
            }
            (*DAT_180423ad0)(lVar2,(ulonglong)uVar8);
            lVar2 = DAT_1803ff8a8;
            if (DAT_180423ad0 == (FARPROC)0x0) {
              pHVar5 = GetModuleHandleA("lua_shared.dll");
              DAT_180423ad0 = GetProcAddress(pHVar5,"lua_pushvalue");
            }
            (*DAT_180423ad0)(lVar2,(ulonglong)uVar9);
            iVar3 = FUN_180023180(DAT_1803ff8a8,2,1);
            lVar2 = DAT_1803ff8a8;
            if (iVar3 != 0) {
              if (DAT_180425540 == (FARPROC)0x0) {
                pHVar5 = GetModuleHandleA("lua_shared.dll");
                DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
              }
              (*DAT_180425540)(lVar2,uVar7 & 0xffffffff);
              (**(code **)(*plVar4 + 0xe0))(plVar4);
              return 1;
            }
            iVar3 = (*DAT_1803fb058)(DAT_1803ff8a8,0xffffffff);
            lVar2 = DAT_1803ff8a8;
            if (DAT_180425540 == (FARPROC)0x0) {
              pHVar5 = GetModuleHandleA("lua_shared.dll");
              DAT_180425540 = GetProcAddress(pHVar5,"lua_settop");
            }
            (*DAT_180425540)(lVar2,uVar7 & 0xffffffff);
            (**(code **)(*plVar4 + 0xf8))(plVar4,iVar3 != 0);
            return 1;
          }
        }
      }
    }
    (**(code **)(*plVar4 + 0xe0))(plVar4);
  }
  return 1;
}


