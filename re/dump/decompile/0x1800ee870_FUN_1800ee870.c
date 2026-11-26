// 0x1800ee870  FUN_1800ee870
// size=704 thunk=false
// signature: undefined FUN_1800ee870()
// status: ok


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1800ee870(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  char *pcVar5;
  char *pcVar6;
  HMODULE pHVar7;
  ulonglong uVar8;
  code *pcVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  char *pcVar13;
  ulonglong *puVar14;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_1803da4c0 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    local_28 = 0;
    puVar14 = (ulonglong *)&local_28;
    local_24 = 2;
    do {
      plVar4 = (longlong *)FUN_1800ebf80((int)*puVar14);
      if ((plVar4 != (longlong *)0x0) && (plVar4[1] == param_2)) {
        pcVar5 = (char *)(**(code **)(*plVar4 + 0x158))(plVar4,1);
        cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,2,4);
        if (cVar2 == '\0') {
          pcVar6 = (char *)0x0;
        }
        else {
          pcVar6 = (char *)(**(code **)(*plVar4 + 0xb8))(plVar4,2,0);
        }
        pcVar13 = pcVar5;
        pcVar1 = "GLOBAL";
        if (pcVar6 != (char *)0x0) {
          pcVar13 = pcVar6;
          pcVar1 = pcVar5;
        }
        if (pcVar13 == (char *)0x0) {
          (**(code **)(*plVar4 + 0xe0))(plVar4);
          return 1;
        }
        if (DAT_1803fcfa0 == (FARPROC)0x0) {
          pHVar7 = GetModuleHandleA("lua_shared.dll");
          DAT_1803fcfa0 = GetProcAddress(pHVar7,"lua_gettop");
        }
        uVar8 = (*DAT_1803fcfa0)(param_2);
        lVar10 = 0;
        goto LAB_1800ee990;
      }
      puVar14 = (ulonglong *)((longlong)puVar14 + 4);
    } while (puVar14 != &local_20);
  }
  return 0;
  while (lVar10 = lVar11, lVar11 != 7) {
LAB_1800ee990:
    lVar11 = lVar10 + 1;
    if (pcVar1[lVar10] != "GLOBAL"[lVar10]) {
      if ((DAT_1803faf38 == (code *)0x0) || (plVar4[1] == 0)) {
        FUN_180023e60(plVar4,2);
      }
      else {
        (*DAT_1803faf38)(plVar4[1],0xffffd8f0);
      }
      FUN_18002db10(param_2,0xffffffff,pcVar1);
      if (DAT_1803faee0 == (code *)0x0) goto LAB_1800eea1d;
      uVar12 = 0xfffffffe;
      pcVar9 = DAT_1803faee0;
      lVar10 = param_2;
      goto LAB_1800eea1b;
    }
  }
  if ((DAT_1803faf38 == (code *)0x0) || (plVar4[1] == 0)) {
    FUN_180023e60(plVar4,0);
  }
  else {
    uVar12 = 0xffffd8ee;
    pcVar9 = DAT_1803faf38;
    lVar10 = plVar4[1];
LAB_1800eea1b:
    (*pcVar9)(lVar10,uVar12);
  }
LAB_1800eea1d:
  if ((DAT_1803faff8 == (code *)0x0) || (plVar4[1] == 0)) {
    cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,0xffffffff,5);
  }
  else {
    iVar3 = (*DAT_1803faff8)(plVar4[1],0xffffffff);
    cVar2 = iVar3 == 5;
  }
  if (cVar2 != '\0') {
    FUN_18002db10(param_2,0xffffffff,pcVar13);
    if ((DAT_1803faff8 == (code *)0x0) || (plVar4[1] == 0)) {
      cVar2 = (**(code **)(*plVar4 + 0x138))(plVar4,0xffffffff,6);
    }
    else {
      iVar3 = (*DAT_1803faff8)(plVar4[1],0xffffffff);
      cVar2 = iVar3 == 6;
    }
    if (cVar2 != '\0') {
      if (DAT_1803faee0 == (code *)0x0) {
        return 1;
      }
      (*DAT_1803faee0)(param_2,0xfffffffe);
      return 1;
    }
  }
  if (DAT_180425540 == (FARPROC)0x0) {
    pHVar7 = GetModuleHandleA("lua_shared.dll");
    DAT_180425540 = GetProcAddress(pHVar7,"lua_settop");
  }
  (*DAT_180425540)(param_2,uVar8 & 0xffffffff);
  (**(code **)(*plVar4 + 0xe0))(plVar4);
  return 1;
}


