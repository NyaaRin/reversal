// 0x1800404b0  FUN_1800404b0
// size=416 thunk=false
// signature: undefined FUN_1800404b0()
// status: ok


undefined8 FUN_1800404b0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  double dVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) {
    return 0;
  }
  dVar2 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);
  uVar7 = (uint)dVar2;
  if ((((((int)uVar7 < 1) || (uVar6 = (ulonglong)(uVar7 & 0xf), 7 < (uVar7 & 0xf))) ||
       ((&DAT_1803e75c0)[uVar6 * 0x30] == '\0')) ||
      ((*(uint *)(&DAT_1803e75c4 + uVar6 * 0x30) != uVar7 >> 4 || ((&DAT_1803e75d0)[uVar6 * 6] == 0)
       ))) || ((&DAT_1803e75d8)[uVar6 * 6] == 0)) {
    (**(code **)(*plVar5 + 0xe0))(plVar5);
  }
  else {
    dVar2 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,2);
    puVar1 = (undefined8 *)(&DAT_1803e75d0)[uVar6 * 6];
    if (puVar1 == (undefined8 *)0x0) {
      iVar4 = 0;
    }
    else if ((DAT_1803fb088 == (code *)0x0) || (puVar1[1] == 0)) {
      iVar4 = (**(code **)*puVar1)();
    }
    else {
      iVar4 = (*DAT_1803fb088)(puVar1[1]);
    }
    iVar9 = (int)dVar2;
    if (iVar9 != 0) {
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1 + iVar4;
      }
      if ((*(int *)(&DAT_1803e75e0 + uVar6 * 0x30) < iVar9) && (iVar9 <= iVar4)) {
        if (((&DAT_1803e75d8)[uVar6 * 6] == 0) || (DAT_1803fb038 == (code *)0x0)) {
          lVar8 = *plVar5;
        }
        else {
          iVar4 = (*DAT_1803fb038)((&DAT_1803e75d8)[uVar6 * 6],2);
          lVar8 = *plVar5;
          if (iVar4 != 0) {
            uVar3 = (**(code **)(*(longlong *)(&DAT_1803e75d0)[uVar6 * 6] + 0x48))
                              ((longlong *)(&DAT_1803e75d0)[uVar6 * 6],iVar9);
            (**(code **)(lVar8 + 0xf8))(plVar5,uVar3);
            return 1;
          }
        }
        (**(code **)(lVar8 + 0xe0))(plVar5);
        return 1;
      }
    }
    (**(code **)(*plVar5 + 0xe0))(plVar5);
  }
  return 1;
}


