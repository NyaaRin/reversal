// 0x1800a7960  Features_Weapons_Backends_OctoWeaponBackend_vfunc02
// size=176 thunk=false
// signature: undefined Features_Weapons_Backends_OctoWeaponBackend_vfunc02()
// status: ok


undefined1
Features_Weapons_Backends_OctoWeaponBackend_vfunc02
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar2 = (undefined8 *)*param_2;
  }
  if (((0xf < (ulonglong)param_2[2]) &&
      (puVar1 = (undefined8 *)thunk_FUN_1802d5870(puVar2,puVar2 + 2,"weapon_octo_base",0x10),
      puVar1 != puVar2 + 2)) && (puVar1 == puVar2)) {
    return 1;
  }
  if (param_2[2] == 0) {
    puVar2 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar2 = (undefined8 *)*param_3;
    }
    if (((0xb < (ulonglong)param_3[2]) &&
        (puVar1 = (undefined8 *)
                  thunk_FUN_1802d5870(puVar2,(undefined8 *)((longlong)puVar2 + 0xc),"weapon_octo_",
                                      0xc), puVar1 != (undefined8 *)((longlong)puVar2 + 0xc))) &&
       (puVar1 == puVar2)) {
      return 1;
    }
  }
  return 0;
}


