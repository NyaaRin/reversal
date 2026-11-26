// 0x180084050  Features_Weapons_Backends_SWCSWeaponBackend_vfunc02
// size=190 thunk=false
// signature: undefined Features_Weapons_Backends_SWCSWeaponBackend_vfunc02()
// status: ok


bool Features_Weapons_Backends_SWCSWeaponBackend_vfunc02
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar2 = (undefined8 *)*param_2;
  }
  if (((0xb < (ulonglong)param_2[2]) &&
      (puVar1 = (undefined8 *)
                thunk_FUN_1802d5870(puVar2,(undefined8 *)((longlong)puVar2 + 0xc),"weapon_swcs_",0xc
                                   ), puVar1 != (undefined8 *)((longlong)puVar2 + 0xc))) &&
     (puVar1 == puVar2)) {
    return true;
  }
  if (param_2[2] == 0) {
    puVar2 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar2 = (undefined8 *)*param_3;
    }
    if ((0xb < (ulonglong)param_3[2]) &&
       (puVar1 = (undefined8 *)
                 thunk_FUN_1802d5870(puVar2,(undefined8 *)((longlong)puVar2 + 0xc),"weapon_swcs_",
                                     0xc), puVar1 != (undefined8 *)((longlong)puVar2 + 0xc))) {
      return puVar1 == puVar2;
    }
  }
  return false;
}


