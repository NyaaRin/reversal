// 0x18003d490  FUN_18003d490
// size=275 thunk=false
// signature: undefined FUN_18003d490()
// status: ok


undefined8 FUN_18003d490(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  double dVar10;
  
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 == (longlong *)0x0) || (plVar5[1] != param_1)) {
    return 0;
  }
  dVar10 = (double)(**(code **)(*plVar5 + 0x160))(plVar5,1);
  uVar8 = (uint)dVar10;
  if (((((0 < (int)uVar8) && (uVar6 = (ulonglong)(uVar8 & 0xf), (uVar8 & 0xf) < 8)) &&
       ((&DAT_1803e75c0)[uVar6 * 0x30] != '\0')) &&
      ((*(uint *)(&DAT_1803e75c4 + uVar6 * 0x30) == uVar8 >> 4 && ((&DAT_1803e75d0)[uVar6 * 6] != 0)
       ))) && ((&DAT_1803e75d8)[uVar6 * 6] != 0)) {
    if ((DAT_1803fb038 == (code *)0x0) ||
       (iVar4 = (*DAT_1803fb038)((&DAT_1803e75d8)[uVar6 * 6],2), iVar4 == 0)) {
      lVar7 = *plVar5;
      uVar9 = 0;
    }
    else {
      plVar1 = (longlong *)(&DAT_1803e75d0)[uVar6 * 6];
      pcVar2 = *(code **)(*plVar1 + 0xf8);
      uVar3 = (**(code **)(*plVar5 + 200))(plVar5,2);
      (*pcVar2)(plVar1,uVar3);
      lVar7 = *plVar5;
      uVar9 = 1;
    }
    (**(code **)(lVar7 + 0xf8))(plVar5,uVar9);
    return 1;
  }
  (**(code **)(*plVar5 + 0xf8))(plVar5,0);
  return 1;
}


