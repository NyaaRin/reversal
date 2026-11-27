// 0x18003e100  FUN_18003e100
// size=340 thunk=false
// signature: undefined FUN_18003e100()
// status: ok


undefined8 FUN_18003e100(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  double dVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  
  plVar6 = (longlong *)FUN_180039770();
  if ((plVar6 == (longlong *)0x0) || (plVar6[1] != param_2)) {
    return 0;
  }
  dVar3 = (double)(**(code **)(*plVar6 + 0x160))(plVar6,1);
  uVar8 = (uint)dVar3;
  if (((((0 < (int)uVar8) && (uVar7 = (ulonglong)(uVar8 & 0xf), (uVar8 & 0xf) < 8)) &&
       ((&DAT_1803e75c0)[uVar7 * 0x30] != '\0')) &&
      ((*(uint *)(&DAT_1803e75c4 + uVar7 * 0x30) == uVar8 >> 4 && ((&DAT_1803e75d0)[uVar7 * 6] != 0)
       ))) && ((&DAT_1803e75d8)[uVar7 * 6] != 0)) {
    dVar3 = (double)(**(code **)(*plVar6 + 0x160))(plVar6,2);
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
    iVar9 = (int)dVar3;
    if (iVar9 != 0) {
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1 + iVar5;
      }
      if ((*(int *)(&DAT_1803e75e0 + uVar7 * 0x30) < iVar9) && (iVar9 <= iVar5)) {
        lVar2 = *plVar6;
        uVar4 = (**(code **)(*(longlong *)(&DAT_1803e75d0)[uVar7 * 6] + 200))();
        (**(code **)(lVar2 + 0xf8))(plVar6,uVar4);
        return 1;
      }
    }
  }
  (**(code **)(*plVar6 + 0xe0))(plVar6);
  return 1;
}


