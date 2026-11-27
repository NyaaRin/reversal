// 0x18009a8c0  Features_Weapons_Backends_ZCityWeaponBackend_vfunc24
// size=285 thunk=false
// signature: undefined Features_Weapons_Backends_ZCityWeaponBackend_vfunc24()
// status: ok


void Features_Weapons_Backends_ZCityWeaponBackend_vfunc24(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *local_28;
  undefined8 uStack_20;
  longlong *local_18;
  int local_10;
  
  if ((param_2 == *(longlong *)(param_1 + 8)) && (DAT_1803fa678 != 0)) {
    local_28 = (longlong *)0x0;
    uStack_20 = 0;
    local_18 = (longlong *)0x0;
    FUN_18001bcd0(0,&local_28);
    if ((local_28 != (longlong *)0x0) && (local_28[1] != 0)) {
      iVar3 = (**(code **)*local_28)();
      local_10 = iVar3;
      cVar2 = FUN_18001e2b0(param_2,local_28);
      if (cVar2 != '\0') {
        uVar4 = (**(code **)*local_28)();
        uVar4 = FUN_180095e30(local_28,uVar4,"lastShoot",0);
        FUN_1800950e0(uVar4,uVar4);
      }
      plVar1 = local_28;
      if ((local_28 != (longlong *)0x0) && (iVar5 = (**(code **)*local_28)(local_28), iVar3 < iVar5)
         ) {
        (**(code **)(*plVar1 + 0x10))(plVar1,iVar5 - iVar3);
      }
    }
    if (local_28 != (longlong *)0x0) {
      (**(code **)*local_28)();
      DAT_1803fa338 = local_18 != (longlong *)0x0;
      DAT_1803fa330 = local_28;
      if ((bool)DAT_1803fa338) {
        DAT_1803fa330 = local_18;
      }
      DAT_1803fa339 = uStack_20._1_4_;
      DAT_1803fa33d = uStack_20._5_2_;
      DAT_1803fa33f = uStack_20._7_1_;
    }
  }
  return;
}


