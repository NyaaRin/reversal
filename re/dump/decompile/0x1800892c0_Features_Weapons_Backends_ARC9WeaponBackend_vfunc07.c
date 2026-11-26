// 0x1800892c0  Features_Weapons_Backends_ARC9WeaponBackend_vfunc07
// size=23 thunk=false
// signature: undefined Features_Weapons_Backends_ARC9WeaponBackend_vfunc07()
// status: ok


bool Features_Weapons_Backends_ARC9WeaponBackend_vfunc07(longlong param_1)

{
  if ((*(char *)(param_1 + 0x2a) == '\0') && (*(char *)(param_1 + 0x28) == '\0')) {
    return *(char *)(param_1 + 0x29) != '\0';
  }
  return true;
}


