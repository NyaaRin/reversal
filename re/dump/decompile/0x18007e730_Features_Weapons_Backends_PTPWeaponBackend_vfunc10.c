// 0x18007e730  Features_Weapons_Backends_PTPWeaponBackend_vfunc10
// size=35 thunk=false
// signature: undefined Features_Weapons_Backends_PTPWeaponBackend_vfunc10()
// status: ok


undefined1
Features_Weapons_Backends_PTPWeaponBackend_vfunc10
          (longlong param_1,longlong param_2,longlong param_3)

{
  if ((param_3 != 0) &&
     (((*(byte *)(param_3 + 0x20) & 1) != 0 ||
      (((param_2 != 0 && (param_2 == *(longlong *)(param_1 + 8))) && (0 < *(int *)(param_1 + 0x20)))
      )))) {
    return 1;
  }
  return 0;
}


