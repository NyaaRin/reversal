// 0x1800dbc70  Features_ZCityCompat_ZCityCompatFeature_vfunc13
// size=569 thunk=false
// signature: undefined Features_ZCityCompat_ZCityCompatFeature_vfunc13()
// status: ok


void Features_ZCityCompat_ZCityCompatFeature_vfunc13(longlong param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_3f;
  undefined2 local_3b;
  undefined1 local_39;
  longlong *local_38;
  undefined8 uStack_30;
  longlong local_28;
  int local_20;
  
  cVar4 = FUN_1800da0f0();
  if ((cVar4 == '\0') || (cVar4 = FUN_1800da190(), cVar4 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  cVar4 = FUN_1800da140();
  if ((cVar4 == '\0') || (cVar4 = FUN_1800da1e0(), cVar4 == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((((param_2 != 0) && (cVar4 = FUN_1800da0a0(), cVar4 != '\0')) && ((bVar1 || (bVar2)))) &&
     (DAT_1803fa678 != 0)) {
    local_38 = (longlong *)0x0;
    uStack_30 = 0;
    local_28 = 0;
    FUN_18001bcd0(0,&local_38);
    if ((local_38 != (longlong *)0x0) && (local_38[1] != 0)) {
      iVar5 = (**(code **)*local_38)();
      local_20 = iVar5;
      cVar4 = FUN_18001e2b0(param_2,local_38);
      if (cVar4 != '\0') {
        uVar6 = (**(code **)*local_38)();
        cVar4 = FUN_1800da330(local_38,uVar6);
        if (cVar4 != '\0') {
          uVar6 = (**(code **)*local_38)();
          iVar7 = FUN_1800da4c0(local_38,uVar6);
          plVar3 = local_38;
          if (0 < iVar7) {
            if (*(int *)(param_1 + 0x18) == 0) {
              cVar4 = (**(code **)(*local_38 + 0x138))(local_38,iVar7,5);
              if (cVar4 != '\0') {
                *(longlong *)(param_1 + 8) = plVar3[1];
                (**(code **)(*plVar3 + 8))(plVar3,iVar7);
                uVar6 = (**(code **)(*plVar3 + 0x118))(plVar3);
                *(undefined4 *)(param_1 + 0x10) = uVar6;
                FUN_18002db10(plVar3[1],iVar7,"recoilmul");
                uVar6 = (**(code **)(*plVar3 + 0x118))(plVar3);
                *(undefined4 *)(param_1 + 0x14) = uVar6;
                *(undefined4 *)(param_1 + 0x18) = 1;
                (**(code **)(*plVar3 + 0xf0))(plVar3,0);
                FUN_18002da40(plVar3[1],iVar7,"recoilmul");
              }
            }
            else {
              *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
            }
          }
        }
      }
      plVar3 = local_38;
      if ((local_38 != (longlong *)0x0) && (iVar7 = (**(code **)*local_38)(local_38), iVar5 < iVar7)
         ) {
        (**(code **)(*plVar3 + 0x10))(plVar3,iVar7 - iVar5);
      }
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)*local_38)();
      DAT_1803fa338 = local_28 != 0;
      DAT_1803fa330 = param_1;
      if ((bool)DAT_1803fa338) {
        DAT_1803fa330 = local_28;
      }
      DAT_1803fa339 = local_3f;
      DAT_1803fa33d = local_3b;
      DAT_1803fa33f = local_39;
    }
  }
  return;
}


