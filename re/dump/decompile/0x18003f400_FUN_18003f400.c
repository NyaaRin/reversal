// 0x18003f400  FUN_18003f400
// size=751 thunk=false
// signature: undefined FUN_18003f400()
// status: ok


undefined8 FUN_18003f400(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  HMODULE hModule;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  
  plVar7 = (longlong *)FUN_180039770();
  if ((plVar7 == (longlong *)0x0) || (plVar7[1] != param_2)) {
    return 0;
  }
  dVar4 = (double)(**(code **)(*plVar7 + 0x160))(plVar7,1);
  uVar10 = (uint)dVar4;
  if ((0 < (int)uVar10) && (uVar8 = (ulonglong)(uVar10 & 0xf), (uVar10 & 0xf) < 8)) {
    lVar12 = uVar8 * 0x30;
    if (((&DAT_1803e75c0)[lVar12] != '\0') &&
       (((*(uint *)(&DAT_1803e75c4 + lVar12) == uVar10 >> 4 && ((&DAT_1803e75d0)[uVar8 * 6] != 0))
        && ((&DAT_1803e75d8)[uVar8 * 6] != 0)))) {
      dVar4 = (double)(**(code **)(*plVar7 + 0x160))(plVar7,2);
      puVar1 = (undefined8 *)(&DAT_1803e75d0)[uVar8 * 6];
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
        if ((*(int *)(&DAT_1803e75e0 + lVar12) < iVar11) && (iVar11 <= iVar5)) {
          lVar9 = (**(code **)(*plVar7 + 0x158))(plVar7,3);
          if (lVar9 == 0) {
            (**(code **)(*plVar7 + 0xf8))(plVar7,0);
            return 1;
          }
          puVar1 = (undefined8 *)(&DAT_1803e75d0)[uVar8 * 6];
          if (puVar1 == (undefined8 *)0x0) {
            iVar5 = 0;
          }
          else if ((DAT_1803fb088 == (code *)0x0) || (puVar1[1] == 0)) {
            iVar5 = (**(code **)*puVar1)();
          }
          else {
            iVar5 = (*DAT_1803fb088)(puVar1[1]);
          }
          if ((((*(int *)(&DAT_1803e75e0 + lVar12) < iVar5) && ((&DAT_1803e75d8)[uVar8 * 6] != 0))
              && (DAT_1803fb038 != (code *)0x0)) &&
             (iVar6 = (*DAT_1803fb038)((&DAT_1803e75d8)[uVar8 * 6],5), iVar6 != 0)) {
            FUN_18003b0b0(&DAT_1803e75c0 + lVar12,iVar11,lVar9);
            (*DAT_1803faf58)((&DAT_1803e75d8)[uVar8 * 6],FUN_18002d660,0);
            plVar2 = (longlong *)(&DAT_1803e75d0)[uVar8 * 6];
            if (plVar2 != (longlong *)0x0) {
              if ((DAT_1803faf38 == (code *)0x0) || (plVar2[1] == 0)) {
                (**(code **)(*plVar2 + 8))(plVar2,iVar11);
              }
              else {
                (*DAT_1803faf38)(plVar2[1],iVar11);
              }
            }
            (*DAT_1803fafa0)((&DAT_1803e75d8)[uVar8 * 6],lVar9);
            plVar2 = (longlong *)(&DAT_1803e75d0)[uVar8 * 6];
            if (plVar2 != (longlong *)0x0) {
              if ((DAT_1803faf38 == (code *)0x0) || (plVar2[1] == 0)) {
                (**(code **)(*plVar2 + 8))(plVar2,iVar5);
              }
              else {
                (*DAT_1803faf38)(plVar2[1],iVar5);
              }
            }
            iVar11 = FUN_180023180((&DAT_1803e75d8)[uVar8 * 6],3,0);
            uVar3 = (&DAT_1803e75d8)[uVar8 * 6];
            if (DAT_180425540 == (FARPROC)0x0) {
              hModule = GetModuleHandleA("lua_shared.dll");
              DAT_180425540 = GetProcAddress(hModule,"lua_settop");
            }
            (*DAT_180425540)(uVar3,(ulonglong)(iVar5 - 1));
            lVar12 = *plVar7;
            bVar13 = iVar11 == 0;
          }
          else {
            lVar12 = *plVar7;
            bVar13 = false;
          }
          (**(code **)(lVar12 + 0xf8))(plVar7,bVar13);
          return 1;
        }
      }
      (**(code **)(*plVar7 + 0xf8))(plVar7,0);
      return 1;
    }
  }
  (**(code **)(*plVar7 + 0xf8))(plVar7,0);
  return 1;
}


