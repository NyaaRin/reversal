// 0x1800a1bc0  Features_Weapons_Backends_ORPWeaponBackend_vfunc07
// size=68 thunk=false
// signature: undefined Features_Weapons_Backends_ORPWeaponBackend_vfunc07()
// status: ok


undefined8 Features_Weapons_Backends_ORPWeaponBackend_vfunc07(longlong param_1,longlong param_2)

{
  if ((((param_2 == *(longlong *)(param_1 + 8)) && (*(char *)(param_1 + 0x10) != '\0')) &&
      (DAT_1803fa608 != (float *)0x0)) && (*(char *)(param_1 + 0x11) == '\0')) {
    if ((*(double *)(param_1 + 0x18) <= (double)*DAT_1803fa608) &&
       ((double)*DAT_1803fa608 - *(double *)(param_1 + 0x18) <= DAT_180380c90)) {
      return 0;
    }
  }
  return 1;
}


