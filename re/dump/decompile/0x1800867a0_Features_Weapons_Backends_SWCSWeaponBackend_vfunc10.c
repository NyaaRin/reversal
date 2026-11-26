// 0x1800867a0  Features_Weapons_Backends_SWCSWeaponBackend_vfunc10
// size=30 thunk=false
// signature: undefined Features_Weapons_Backends_SWCSWeaponBackend_vfunc10()
// status: ok


undefined1
Features_Weapons_Backends_SWCSWeaponBackend_vfunc10
          (longlong param_1,undefined8 param_2,longlong param_3)

{
  if ((param_3 != 0) &&
     (((*(byte *)(param_3 + 0x20) & 1) != 0 ||
      ((*(char *)(param_1 + 0x20) != '\0' && (0 < *(int *)(param_1 + 0x1c))))))) {
    return 1;
  }
  return 0;
}


