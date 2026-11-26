// 0x18005bc20  FUN_18005bc20
// size=208 thunk=false
// signature: undefined FUN_18005bc20()
// status: ok


undefined8 FUN_18005bc20(longlong param_1)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  plVar5 = (longlong *)FUN_180039770();
  if ((plVar5 != (longlong *)0x0) && (plVar5[1] == param_1)) {
    if (DAT_1803fa668 == (longlong *)0x0) {
      lVar8 = *plVar5;
    }
    else {
      plVar6 = (longlong *)(**(code **)(*DAT_1803fa668 + 0x240))();
      lVar8 = *plVar5;
      if (plVar6 != (longlong *)0x0) {
        uVar7 = 0;
        cVar2 = (**(code **)(lVar8 + 0x138))(plVar5,1,1);
        if (cVar2 == '\0') {
          uVar7 = uVar7 & 0xffffffffffffff00;
        }
        else {
          bVar3 = (**(code **)(*plVar5 + 200))(plVar5,1);
          uVar7 = (ulonglong)bVar3;
        }
        pcVar1 = *(code **)(*plVar5 + 0xf0);
        iVar4 = (**(code **)(*plVar6 + 0x208))(plVar6,uVar7);
        (*pcVar1)(plVar5,(double)iVar4);
        return 1;
      }
    }
    (**(code **)(lVar8 + 0xe0))(plVar5);
    return 1;
  }
  return 0;
}


