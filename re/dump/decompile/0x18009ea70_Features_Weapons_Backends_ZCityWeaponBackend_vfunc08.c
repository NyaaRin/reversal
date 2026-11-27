// 0x18009ea70  Features_Weapons_Backends_ZCityWeaponBackend_vfunc08
// size=271 thunk=false
// signature: undefined Features_Weapons_Backends_ZCityWeaponBackend_vfunc08()
// status: ok


bool Features_Weapons_Backends_ZCityWeaponBackend_vfunc08(longlong param_1,longlong param_2)

{
  int iVar1;
  double dVar2;
  
  if ((((param_2 != 0) && (*(char *)(param_1 + 0xab) != '\0')) &&
      (param_2 == *(longlong *)(param_1 + 8))) &&
     (((*(char *)(param_1 + 0xad) == '\0' && (*(char *)(param_1 + 0xae) != '\0')) &&
      ((*(char *)(param_1 + 0xb0) != '\0' &&
       ((*(char *)(param_1 + 0xb1) == '\0' || (*(char *)(param_1 + 0xb2) != '\0')))))))) {
    iVar1 = FUN_180097c30();
    if ((iVar1 == 0) ||
       ((iVar1 == 3 ||
        ((((0.0 <= *(double *)(param_1 + 0x58) && (DAT_1803fa608 != 0)) &&
          (dVar2 = *(double *)(DAT_1803fa608 + 0x10) - *(double *)(param_1 + 0x58), 0.0 <= dVar2))
         && (dVar2 <= DAT_180380c48)))))) {
      iVar1 = FUN_18001e5b0(param_2);
      if (iVar1 == 0) {
        return false;
      }
      if ((*(char *)(param_1 + 0xaf) != '\0') && (DAT_1803fa608 != 0)) {
        return *(double *)(param_1 + 0xa0) <= *(double *)(DAT_1803fa608 + 0x10);
      }
      return true;
    }
  }
  return false;
}


