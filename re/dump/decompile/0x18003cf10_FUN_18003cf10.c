// 0x18003cf10  FUN_18003cf10
// size=455 thunk=false
// signature: undefined FUN_18003cf10()
// status: ok


undefined8 FUN_18003cf10(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  
  plVar7 = (longlong *)FUN_180039770();
  if ((plVar7 == (longlong *)0x0) || (plVar7[1] != param_2)) {
    return 0;
  }
  dVar11 = (double)(**(code **)(*plVar7 + 0x160))(plVar7,1);
  uVar9 = (uint)dVar11;
  if ((((0 < (int)uVar9) && (uVar8 = (ulonglong)(uVar9 & 0xf), (uVar9 & 0xf) < 8)) &&
      (lVar10 = uVar8 * 0x30, (&DAT_1803e75c0)[lVar10] != '\0')) &&
     (((*(uint *)(&DAT_1803e75c4 + lVar10) == uVar9 >> 4 && ((&DAT_1803e75d0)[uVar8 * 6] != 0)) &&
      ((&DAT_1803e75d8)[uVar8 * 6] != 0)))) {
    cVar4 = (**(code **)(*plVar7 + 0x138))(plVar7,2,3);
    if (cVar4 == '\0') {
      iVar5 = 1;
    }
    else {
      dVar11 = (double)(**(code **)(*plVar7 + 0xc0))(plVar7,2);
      iVar5 = (int)dVar11;
    }
    puVar1 = (undefined8 *)(&DAT_1803e75d0)[uVar8 * 6];
    iVar6 = 0;
    if (-1 < iVar5) {
      iVar6 = iVar5;
    }
    if (puVar1 == (undefined8 *)0x0) {
      iVar5 = 0;
    }
    else if ((DAT_1803fb088 == (code *)0x0) || (puVar1[1] == 0)) {
      iVar5 = (**(code **)*puVar1)();
    }
    else {
      iVar5 = (*DAT_1803fb088)(puVar1[1]);
    }
    plVar2 = (longlong *)(&DAT_1803e75d0)[uVar8 * 6];
    iVar3 = iVar5 - *(int *)(&DAT_1803e75e0 + lVar10);
    if (iVar6 <= iVar5 - *(int *)(&DAT_1803e75e0 + lVar10)) {
      iVar3 = iVar6;
    }
    if (plVar2 != (longlong *)0x0) {
      if (((DAT_1803fb088 == (code *)0x0) || (DAT_1803faf10 == (code *)0x0)) || (plVar2[1] == 0)) {
        (**(code **)(*plVar2 + 0x10))(plVar2,iVar3);
      }
      else {
        iVar6 = (*DAT_1803fb088)();
        iVar5 = 0;
        if (-1 < iVar6 - iVar3) {
          iVar5 = iVar6 - iVar3;
        }
        (*DAT_1803faf10)(plVar2[1],iVar5);
      }
    }
    (**(code **)(*plVar7 + 0xf8))(plVar7,1);
    return 1;
  }
  (**(code **)(*plVar7 + 0xf8))(plVar7,0);
  return 1;
}


