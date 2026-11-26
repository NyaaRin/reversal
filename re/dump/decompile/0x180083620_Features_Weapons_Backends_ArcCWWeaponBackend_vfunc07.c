// 0x180083620  Features_Weapons_Backends_ArcCWWeaponBackend_vfunc07
// size=101 thunk=false
// signature: undefined Features_Weapons_Backends_ArcCWWeaponBackend_vfunc07()
// status: ok


undefined8 Features_Weapons_Backends_ArcCWWeaponBackend_vfunc07(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(char *)(param_1 + 0x60) == '\0')) {
    if ((*(double *)(param_1 + 0x58) <= 0.0) ||
       (*(double *)(param_1 + 0x58) <= *(double *)(DAT_1803fa608 + 0x10))) {
      if ((((1 < *(int *)(param_1 + 100) - 3U) && (*(char *)(param_1 + 0x69) == '\0')) &&
          (*(double *)(param_1 + 0x48) <= *(double *)(DAT_1803fa608 + 0x10))) &&
         ((((*(char *)(param_1 + 0x6a) == '\0' && (*(char *)(param_1 + 0x6c) == '\0')) &&
           (*(char *)(param_1 + 0x68) == '\0')) && (*(char *)(param_1 + 0x6b) == '\0')))) {
        return 0;
      }
    }
  }
  return 1;
}


