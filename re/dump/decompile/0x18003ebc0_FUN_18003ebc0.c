// 0x18003ebc0  FUN_18003ebc0
// size=902 thunk=false
// signature: undefined FUN_18003ebc0()
// status: ok


undefined8 FUN_18003ebc0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  double dVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  HMODULE pHVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  
  plVar6 = (longlong *)FUN_180039770();
  if ((plVar6 == (longlong *)0x0) || (plVar6[1] != param_2)) {
    return 0;
  }
  dVar4 = (double)(**(code **)(*plVar6 + 0x160))(plVar6,1);
  uVar9 = (uint)dVar4;
  if (((((0 < (int)uVar9) && (uVar7 = (ulonglong)(uVar9 & 0xf), (uVar9 & 0xf) < 8)) &&
       ((&DAT_1803e75c0)[uVar7 * 0x30] != '\0')) &&
      ((*(uint *)(&DAT_1803e75c4 + uVar7 * 0x30) == uVar9 >> 4 && ((&DAT_1803e75d0)[uVar7 * 6] != 0)
       ))) && ((&DAT_1803e75d8)[uVar7 * 6] != 0)) {
    dVar4 = (double)(**(code **)(*plVar6 + 0x160))(plVar6,2);
    puVar1 = (undefined8 *)(&DAT_1803e75d0)[uVar7 * 6];
    if (puVar1 == (undefined8 *)0x0) {
      iVar5 = 0;
    }
    else if ((DAT_1803fb088 == (code *)0x0) || (puVar1[1] == 0)) {
      iVar5 = (**(code **)*puVar1)();
    }
    else {
      iVar5 = (*DAT_1803fb088)(puVar1[1]);
    }
    iVar10 = (int)dVar4;
    if (iVar10 != 0) {
      if (iVar10 < 0) {
        iVar10 = iVar10 + 1 + iVar5;
      }
      if ((*(int *)(&DAT_1803e75e0 + uVar7 * 0x30) < iVar10) && (iVar10 <= iVar5)) {
        dVar4 = (double)(**(code **)(*plVar6 + 0x160))(plVar6,3);
        puVar1 = (undefined8 *)(&DAT_1803e75d0)[uVar7 * 6];
        if (puVar1 == (undefined8 *)0x0) {
          iVar5 = 0;
        }
        else if ((DAT_1803fb088 == (code *)0x0) || (puVar1[1] == 0)) {
          iVar5 = (**(code **)*puVar1)();
        }
        else {
          iVar5 = (*DAT_1803fb088)(puVar1[1]);
        }
        iVar11 = (int)dVar4;
        if (iVar11 != 0) {
          if (iVar11 < 0) {
            iVar11 = iVar11 + 1 + iVar5;
          }
          if ((((*(int *)(&DAT_1803e75e0 + uVar7 * 0x30) < iVar11) && (iVar11 <= iVar5)) &&
              ((&DAT_1803e75d8)[uVar7 * 6] != 0)) &&
             ((DAT_1803fb038 != (code *)0x0 &&
              (iVar5 = (*DAT_1803fb038)((&DAT_1803e75d8)[uVar7 * 6],4), iVar5 != 0)))) {
            puVar1 = (undefined8 *)(&DAT_1803e75d0)[uVar7 * 6];
            if (puVar1 == (undefined8 *)0x0) {
              uVar12 = 0;
            }
            else {
              if ((DAT_1803fb088 == (code *)0x0) || (puVar1[1] == 0)) {
                uVar9 = (**(code **)*puVar1)();
              }
              else {
                uVar9 = (*DAT_1803fb088)(puVar1[1]);
              }
              uVar12 = (ulonglong)uVar9;
            }
            (*DAT_1803faf58)((&DAT_1803e75d8)[uVar7 * 6],FUN_18002d680,0);
            plVar2 = (longlong *)(&DAT_1803e75d0)[uVar7 * 6];
            if (plVar2 != (longlong *)0x0) {
              if ((DAT_1803faf38 == (code *)0x0) || (plVar2[1] == 0)) {
                (**(code **)(*plVar2 + 8))(plVar2,iVar10);
              }
              else {
                (*DAT_1803faf38)(plVar2[1],iVar10);
              }
            }
            plVar2 = (longlong *)(&DAT_1803e75d0)[uVar7 * 6];
            if (plVar2 != (longlong *)0x0) {
              if ((DAT_1803faf38 == (code *)0x0) || (plVar2[1] == 0)) {
                (**(code **)(*plVar2 + 8))(plVar2,iVar11);
              }
              else {
                (*DAT_1803faf38)(plVar2[1],iVar11);
              }
            }
            iVar5 = FUN_180023180((&DAT_1803e75d8)[uVar7 * 6],2,1);
            uVar3 = (&DAT_1803e75d8)[uVar7 * 6];
            if (iVar5 != 0) {
              if (DAT_180425540 == (FARPROC)0x0) {
                pHVar8 = GetModuleHandleA("lua_shared.dll");
                DAT_180425540 = GetProcAddress(pHVar8,"lua_settop");
              }
              (*DAT_180425540)(uVar3,uVar12);
              (**(code **)(*plVar6 + 0xe0))(plVar6);
              return 1;
            }
            iVar5 = (*DAT_1803fb058)(uVar3,0xffffffff);
            uVar3 = (&DAT_1803e75d8)[uVar7 * 6];
            if (DAT_180425540 == (FARPROC)0x0) {
              pHVar8 = GetModuleHandleA("lua_shared.dll");
              DAT_180425540 = GetProcAddress(pHVar8,"lua_settop");
            }
            (*DAT_180425540)(uVar3,uVar12);
            (**(code **)(*plVar6 + 0xf8))(plVar6,iVar5 != 0);
            return 1;
          }
        }
        (**(code **)(*plVar6 + 0xe0))(plVar6);
        return 1;
      }
    }
    (**(code **)(*plVar6 + 0xe0))(plVar6);
    return 1;
  }
  (**(code **)(*plVar6 + 0xe0))(plVar6);
  return 1;
}


