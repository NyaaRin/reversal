// 0x18009eb90  Features_Weapons_Backends_ZCityWeaponBackend_vfunc10
// size=48 thunk=false
// signature: undefined Features_Weapons_Backends_ZCityWeaponBackend_vfunc10()
// status: ok


undefined1
Features_Weapons_Backends_ZCityWeaponBackend_vfunc10
          (longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  if (((param_3 != 0) && ((*(byte *)(param_3 + 0x20) & 1) != 0)) &&
     (*(char *)(param_1 + 0xa9) != '\0')) {
    cVar1 = Features_Weapons_Backends_ZCityWeaponBackend_vfunc08();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}


