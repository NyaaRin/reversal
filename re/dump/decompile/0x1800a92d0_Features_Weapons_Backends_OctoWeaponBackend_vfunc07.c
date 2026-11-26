// 0x1800a92d0  Features_Weapons_Backends_OctoWeaponBackend_vfunc07
// size=107 thunk=false
// signature: undefined Features_Weapons_Backends_OctoWeaponBackend_vfunc07()
// status: ok


undefined1 Features_Weapons_Backends_OctoWeaponBackend_vfunc07(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1800a7ab0();
  if (((((cVar1 != '\0') && (*(char *)(param_1 + 0x59) != '\0')) &&
       (*(float *)(param_1 + 0x4c) <= DAT_180380ae4)) &&
      ((*(int *)(param_1 + 0x50) < 3 && ((DAT_18040a238 != param_2 || (DAT_18040a240 == '\0'))))))
     && ((*(char *)(param_1 + 0x5a) == '\0' || (*(char *)(param_1 + 0x58) != '\0')))) {
    return 0;
  }
  return 1;
}


