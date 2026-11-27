// 0x1801ed8c0  FUN_1801ed8c0
// size=306 thunk=false
// signature: undefined FUN_1801ed8c0()
// status: ok


void FUN_1801ed8c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar3 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar4 = (*pcVar1)(DAT_1803fa360,uVar3);
  iVar5 = 0;
  iVar6 = 0;
  while( true ) {
    if ((int)(DAT_1803fcc70 - DAT_1803fcc68 >> 3) <= iVar6) break;
    plVar2 = *(longlong **)(DAT_1803fcc68 + (longlong)iVar6 * 8);
    (**(code **)(*plVar2 + 0x60))(plVar2,param_1,param_2);
    iVar6 = iVar6 + 1;
  }
  if ((lVar4 != 0) && (param_1 == lVar4)) {
    iVar7 = 0;
    while( true ) {
      if ((int)(DAT_1803fcc70 - DAT_1803fcc68 >> 3) <= iVar7) break;
      plVar2 = *(longlong **)(DAT_1803fcc68 + (longlong)iVar7 * 8);
      (**(code **)(*plVar2 + 0x50))(plVar2,param_1,param_2);
      iVar7 = iVar7 + 1;
    }
    while( true ) {
      if ((int)(DAT_1803fcc70 - DAT_1803fcc68 >> 3) <= iVar5) break;
      plVar2 = *(longlong **)(DAT_1803fcc68 + (longlong)iVar5 * 8);
      (**(code **)(*plVar2 + 0x58))(plVar2,param_1,param_2,param_4,iVar6,iVar5);
      iVar5 = iVar5 + 1;
    }
  }
  return;
}


