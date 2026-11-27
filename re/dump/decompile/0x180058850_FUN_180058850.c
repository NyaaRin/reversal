// 0x180058850  FUN_180058850
// size=677 thunk=false
// signature: undefined FUN_180058850()
// status: ok


void FUN_180058850(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  HMODULE pHVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  char cVar9;
  
  if (((param_1 != (longlong *)0x0) && (lVar1 = param_1[1], lVar1 != 0)) &&
     (DAT_1803eb7d0 != DAT_1803eb7d8)) {
    if (DAT_1803fcfa0 == (FARPROC)0x0) {
      pHVar3 = GetModuleHandleA("lua_shared.dll");
      DAT_1803fcfa0 = GetProcAddress(pHVar3,"lua_gettop");
    }
    uVar4 = (*DAT_1803fcfa0)(lVar1);
    puVar7 = DAT_1803eb7d8;
    for (puVar8 = DAT_1803eb7d0; puVar8 != puVar7; puVar8 = puVar8 + 8) {
      if ((DAT_1803faf38 == (code *)0x0) || (param_1[1] == 0)) {
        FUN_180023e60(param_1,0);
      }
      else {
        (*DAT_1803faf38)(param_1[1],0xffffd8ee);
      }
      FUN_18002db10(lVar1,0xffffffff,&DAT_1803445e0);
      if ((DAT_1803faff8 == (code *)0x0) || (param_1[1] == 0)) {
        cVar9 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,5);
      }
      else {
        iVar2 = (*DAT_1803faff8)(param_1[1],0xffffffff);
        cVar9 = iVar2 == 5;
      }
      if (cVar9 == '\0') {
LAB_180058a47:
        if (DAT_180425540 == (FARPROC)0x0) {
          pHVar3 = GetModuleHandleA("lua_shared.dll");
          DAT_180425540 = GetProcAddress(pHVar3,"lua_settop");
        }
        (*DAT_180425540)(lVar1,uVar4 & 0xffffffff);
        break;
      }
      FUN_18002db10(lVar1,0xffffffff,"Remove");
      if ((DAT_1803faff8 == (code *)0x0) || (param_1[1] == 0)) {
        cVar9 = (**(code **)(*param_1 + 0x138))(param_1,0xffffffff,6);
      }
      else {
        iVar2 = (*DAT_1803faff8)(param_1[1],0xffffffff);
        cVar9 = iVar2 == 6;
      }
      if (cVar9 == '\0') goto LAB_180058a47;
      puVar5 = puVar8;
      if (0xf < (ulonglong)puVar8[3]) {
        puVar5 = (undefined8 *)*puVar8;
      }
      (**(code **)(*param_1 + 0xe8))(param_1,puVar5,0);
      plVar6 = puVar8 + 4;
      if (0xf < (ulonglong)puVar8[7]) {
        plVar6 = (longlong *)*plVar6;
      }
      (**(code **)(*param_1 + 0xe8))(param_1,plVar6,0);
      FUN_180023180(lVar1,2,0);
      if (DAT_180425540 == (FARPROC)0x0) {
        pHVar3 = GetModuleHandleA("lua_shared.dll");
        DAT_180425540 = GetProcAddress(pHVar3,"lua_settop");
      }
      (*DAT_180425540)(lVar1);
    }
    FUN_180014410("[LUAGUARD] removed %zu wrapped hook(s) on teardown\n",
                  (longlong)DAT_1803eb7d8 - (longlong)DAT_1803eb7d0 >> 6);
    puVar8 = DAT_1803eb7d8;
    puVar7 = DAT_1803eb7d0;
    if (DAT_1803eb7d0 != DAT_1803eb7d8) {
      do {
        FUN_18020e450(puVar7 + 4);
        FUN_18020e450(puVar7);
        puVar7 = puVar7 + 8;
      } while (puVar7 != puVar8);
      DAT_1803eb7d8 = DAT_1803eb7d0;
    }
  }
  return;
}


