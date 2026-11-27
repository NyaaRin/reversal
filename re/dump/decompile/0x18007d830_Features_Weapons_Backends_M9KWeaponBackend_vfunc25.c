// 0x18007d830  Features_Weapons_Backends_M9KWeaponBackend_vfunc25
// size=223 thunk=false
// signature: undefined Features_Weapons_Backends_M9KWeaponBackend_vfunc25()
// status: ok


void Features_Weapons_Backends_M9KWeaponBackend_vfunc25(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar3;
  float local_res8 [8];
  
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  if (param_2 != 0) {
    uVar1 = FUN_18007d480();
    *(undefined1 *)(param_1 + 0x11) = uVar1;
    uVar3 = FUN_18007d060(extraout_XMM0_Da,param_2,"IronAccuracy",param_1 + 0x14);
    uVar3 = FUN_18007d060(uVar3,param_2,"Spread",param_1 + 0x18);
    uVar3 = FUN_18007d060(uVar3,param_2,&DAT_180347278,param_1 + 0x1c);
    uVar3 = FUN_18007d060(uVar3,param_2,"HipCone",param_1 + 0x20);
    local_res8[0] = 0.0;
    cVar2 = FUN_18007d060(uVar3,param_2,"Automatic",local_res8);
    if (cVar2 != '\0') {
      *(bool *)(param_1 + 0x12) = local_res8[0] != 0.0;
    }
    *(longlong *)(param_1 + 8) = param_2;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return;
}


