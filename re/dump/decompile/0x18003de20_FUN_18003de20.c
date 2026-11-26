// 0x18003de20  FUN_18003de20
// size=345 thunk=false
// signature: undefined FUN_18003de20()
// status: ok


undefined8 FUN_18003de20(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  double dVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_2)) {
    return 0;
  }
  dVar3 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);
  uVar7 = (uint)dVar3;
  if (((((0 < (int)uVar7) && (uVar6 = (ulonglong)(uVar7 & 0xf), (uVar7 & 0xf) < 8)) &&
       ((&DAT_1803e75c0)[uVar6 * 0x30] != '\0')) &&
      ((*(uint *)(&DAT_1803e75c4 + uVar6 * 0x30) == uVar7 >> 4 && ((&DAT_1803e75d0)[uVar6 * 6] != 0)
       ))) && ((&DAT_1803e75d8)[uVar6 * 6] != 0)) {
    dVar3 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,2);
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
    iVar8 = (int)dVar3;
    if (iVar8 != 0) {
      if (iVar8 < 0) {
        iVar8 = iVar8 + 1 + iVar4;
      }
      if ((*(int *)(&DAT_1803e75e0 + uVar6 * 0x30) < iVar8) && (iVar8 <= iVar4)) {
        lVar2 = *plVar5;
        iVar4 = (**(code **)(*(longlong *)(&DAT_1803e75d0)[uVar6 * 6] + 0x140))();
        (**(code **)(lVar2 + 0xf0))(plVar5,(double)iVar4);
        return 1;
      }
    }
  }
  (**(code **)(*plVar5 + 0xe0))(plVar5);
  return 1;
}


