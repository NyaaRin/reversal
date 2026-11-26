// 0x180092490  Features_Weapons_Backends_ZSWeaponBackend_vfunc10
// size=106 thunk=false
// signature: undefined Features_Weapons_Backends_ZSWeaponBackend_vfunc10()
// status: ok


undefined8
Features_Weapons_Backends_ZSWeaponBackend_vfunc10
          (longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  
  if (((param_3 != (undefined4 *)0x0) && (*(char *)(param_1 + 0xc) != '\0')) &&
     (cVar1 = FUN_18008e960(), cVar1 != '\0')) {
    if ((*(byte *)(param_3 + 8) & 1) == 0) {
      cVar1 = FUN_180090f30(param_1,param_2);
      if (cVar1 == '\0') {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x30) = *param_3;
    }
    return 1;
  }
  return 0;
}


