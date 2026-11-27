// 0x180040c20  FUN_180040c20
// size=397 thunk=false
// signature: undefined FUN_180040c20()
// status: ok


undefined8 FUN_180040c20(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  if ((((((int)uVar8 < 1) || (uVar7 = (ulonglong)(uVar8 & 0xf), 7 < (uVar8 & 0xf))) ||
       ((&DAT_1803e75c0)[uVar7 * 0x30] == '\0')) ||
      ((*(uint *)(&DAT_1803e75c4 + uVar7 * 0x30) != uVar8 >> 4 || ((&DAT_1803e75d0)[uVar7 * 6] == 0)
       ))) || ((&DAT_1803e75d8)[uVar7 * 6] == 0)) {
    (**(code **)(*plVar6 + 0xf8))(plVar6,0);
  }
  else {
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
        dVar3 = (double)(**(code **)(*plVar6 + 0x160))(plVar6,3);
        pcVar2 = *(code **)(*plVar6 + 0xf8);
        uVar4 = (**(code **)(*(longlong *)(&DAT_1803e75d0)[uVar7 * 6] + 0x138))
                          ((longlong *)(&DAT_1803e75d0)[uVar7 * 6],iVar9,(int)dVar3);
        (*pcVar2)(plVar6,uVar4);
        return 1;
      }
    }
    (**(code **)(*plVar6 + 0xf8))(plVar6,0);
  }
  return 1;
}


