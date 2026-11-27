// 0x18003d370  FUN_18003d370
// size=286 thunk=false
// signature: undefined FUN_18003d370()
// status: ok


undefined8 FUN_18003d370(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  double dVar8;
  
  plVar3 = (longlong *)FUN_180039770();
  if ((plVar3 == (longlong *)0x0) || (plVar3[1] != param_1)) {
    return 0;
  }
  dVar8 = (double)(**(code **)(*plVar3 + 0x160))(plVar3,1);
  uVar6 = (uint)dVar8;
  if ((((((int)uVar6 < 1) || (uVar4 = (ulonglong)(uVar6 & 0xf), 7 < (uVar6 & 0xf))) ||
       ((&DAT_1803e75c0)[uVar4 * 0x30] == '\0')) ||
      ((*(uint *)(&DAT_1803e75c4 + uVar4 * 0x30) != uVar6 >> 4 || ((&DAT_1803e75d0)[uVar4 * 6] == 0)
       ))) || ((&DAT_1803e75d8)[uVar4 * 6] == 0)) {
    (**(code **)(*plVar3 + 0xf8))(plVar3,0);
    return 1;
  }
  if (DAT_1803fb038 != (code *)0x0) {
    iVar2 = (*DAT_1803fb038)((&DAT_1803e75d8)[uVar4 * 6],2);
    if (iVar2 != 0) {
      plVar1 = (longlong *)(&DAT_1803e75d0)[uVar4 * 6];
      if (plVar1 != (longlong *)0x0) {
        if ((DAT_1803fafd8 == (code *)0x0) || (plVar1[1] == 0)) {
          (**(code **)(*plVar1 + 0xe0))();
        }
        else {
          (*DAT_1803fafd8)(plVar1[1]);
        }
      }
      lVar5 = *plVar3;
      uVar7 = 1;
      goto LAB_18003d44b;
    }
  }
  lVar5 = *plVar3;
  uVar7 = 0;
LAB_18003d44b:
  (**(code **)(lVar5 + 0xf8))(plVar3,uVar7);
  return 1;
}


