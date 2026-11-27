// 0x18003f9e0  FUN_18003f9e0
// size=762 thunk=false
// signature: undefined FUN_18003f9e0()
// status: ok


undefined8 FUN_18003f9e0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  HMODULE hModule;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
  
  plVar7 = (longlong *)FUN_180039770();
  if ((plVar7 == (longlong *)0x0) || (plVar7[1] != param_2)) {
    return 0;
  }
  dVar4 = (double)(**(code **)(*plVar7 + 0x160))(plVar7,1);
  uVar9 = (uint)dVar4;
  if ((0 < (int)uVar9) && (uVar8 = (ulonglong)(uVar9 & 0xf), (uVar9 & 0xf) < 8)) {
    lVar11 = uVar8 * 0x30;
    if (((&DAT_1803e75c0)[lVar11] != '\0') &&
       (((*(uint *)(&DAT_1803e75c4 + lVar11) == uVar9 >> 4 && ((&DAT_1803e75d0)[uVar8 * 6] != 0)) &&
        ((&DAT_1803e75d8)[uVar8 * 6] != 0)))) {
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
      iVar10 = (int)dVar4;
      if (iVar10 != 0) {
        if (iVar10 < 0) {
          iVar10 = iVar10 + 1 + iVar5;
        }
        if ((*(int *)(&DAT_1803e75e0 + lVar11) < iVar10) && (iVar10 <= iVar5)) {
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
          iVar12 = iVar5 + -1;
          if (iVar12 <= *(int *)(&DAT_1803e75e0 + lVar11)) {
            (**(code **)(*plVar7 + 0xf8))(plVar7,0);
            return 1;
          }
          if ((((&DAT_1803e75d8)[uVar8 * 6] == 0) || (DAT_1803fb038 == (code *)0x0)) ||
             (iVar6 = (*DAT_1803fb038)((&DAT_1803e75d8)[uVar8 * 6],5), iVar6 == 0)) {
            lVar11 = *plVar7;
            bVar13 = false;
          }
          else {
            FUN_18003b0b0(&DAT_1803e75c0 + lVar11,iVar10,0);
            (*DAT_1803faf58)((&DAT_1803e75d8)[uVar8 * 6],FUN_18002d660,0);
            plVar2 = (longlong *)(&DAT_1803e75d0)[uVar8 * 6];
            if (plVar2 != (longlong *)0x0) {
              if ((DAT_1803faf38 == (code *)0x0) || (plVar2[1] == 0)) {
                (**(code **)(*plVar2 + 8))(plVar2,iVar10);
              }
              else {
                (*DAT_1803faf38)(plVar2[1],iVar10);
              }
            }
            plVar2 = (longlong *)(&DAT_1803e75d0)[uVar8 * 6];
            if (plVar2 != (longlong *)0x0) {
              if ((DAT_1803faf38 == (code *)0x0) || (plVar2[1] == 0)) {
                (**(code **)(*plVar2 + 8))(plVar2,iVar12);
              }
              else {
                (*DAT_1803faf38)(plVar2[1],iVar12);
              }
            }
            plVar2 = (longlong *)(&DAT_1803e75d0)[uVar8 * 6];
            if (plVar2 != (longlong *)0x0) {
              if ((DAT_1803faf38 == (code *)0x0) || (plVar2[1] == 0)) {
                (**(code **)(*plVar2 + 8))(plVar2,iVar5);
              }
              else {
                (*DAT_1803faf38)(plVar2[1],iVar5);
              }
            }
            iVar10 = FUN_180023180((&DAT_1803e75d8)[uVar8 * 6],3,0);
            uVar3 = (&DAT_1803e75d8)[uVar8 * 6];
            if (DAT_180425540 == (FARPROC)0x0) {
              hModule = GetModuleHandleA("lua_shared.dll");
              DAT_180425540 = GetProcAddress(hModule,"lua_settop");
            }
            (*DAT_180425540)(uVar3,(ulonglong)(iVar5 - 2));
            lVar11 = *plVar7;
            bVar13 = iVar10 == 0;
          }
          (**(code **)(lVar11 + 0xf8))(plVar7,bVar13);
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


