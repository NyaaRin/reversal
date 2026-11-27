// 0x18003df90  FUN_18003df90
// size=344 thunk=false
// signature: undefined FUN_18003df90()
// status: ok


undefined8 FUN_18003df90(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  double dVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  
  plVar4 = (longlong *)FUN_180039770();
  if ((plVar4 == (longlong *)0x0) || (plVar4[1] != param_2)) {
    return 0;
  }
  dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,1);
  uVar7 = (uint)dVar2;
  if (((((0 < (int)uVar7) && (uVar5 = (ulonglong)(uVar7 & 0xf), (uVar7 & 0xf) < 8)) &&
       ((&DAT_1803e75c0)[uVar5 * 0x30] != '\0')) &&
      ((*(uint *)(&DAT_1803e75c4 + uVar5 * 0x30) == uVar7 >> 4 && ((&DAT_1803e75d0)[uVar5 * 6] != 0)
       ))) && ((&DAT_1803e75d8)[uVar5 * 6] != 0)) {
    dVar2 = (double)(**(code **)(*plVar4 + 0x160))(plVar4,2);
    puVar1 = (undefined8 *)(&DAT_1803e75d0)[uVar5 * 6];
    if (puVar1 == (undefined8 *)0x0) {
      iVar3 = 0;
    }
    else if ((DAT_1803fb088 == (code *)0x0) || (puVar1[1] == 0)) {
      iVar3 = (**(code **)*puVar1)();
    }
    else {
      iVar3 = (*DAT_1803fb088)(puVar1[1]);
    }
    iVar8 = (int)dVar2;
    if (iVar8 != 0) {
      if (iVar8 < 0) {
        iVar8 = iVar8 + 1 + iVar3;
      }
      if ((*(int *)(&DAT_1803e75e0 + uVar5 * 0x30) < iVar8) && (iVar8 <= iVar3)) {
        puVar6 = (undefined1 *)(**(code **)(*(longlong *)(&DAT_1803e75d0)[uVar5 * 6] + 0x3c0))();
        puVar9 = &DAT_18033e9cc;
        if (puVar6 != (undefined1 *)0x0) {
          puVar9 = puVar6;
        }
        (**(code **)(*plVar4 + 0xe8))(plVar4,puVar9,0);
        return 1;
      }
    }
  }
  (**(code **)(*plVar4 + 0xe0))(plVar4);
  return 1;
}


