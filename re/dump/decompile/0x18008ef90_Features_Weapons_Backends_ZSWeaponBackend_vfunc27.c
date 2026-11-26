// 0x18008ef90  Features_Weapons_Backends_ZSWeaponBackend_vfunc27
// size=106 thunk=false
// signature: undefined Features_Weapons_Backends_ZSWeaponBackend_vfunc27()
// status: ok


void Features_Weapons_Backends_ZSWeaponBackend_vfunc27
               (longlong param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  float local_res8 [2];
  
  *(undefined4 *)(param_1 + 0x60) = 0x80000000;
  if (((*(char *)(param_1 + 0xc) != '\0') && (param_2 != 0)) && (param_3 != (undefined4 *)0x0)) {
    local_res8[0] = 0.0;
    cVar1 = FUN_18008f000(param_1,param_2,local_res8);
    if ((cVar1 != '\0') && (0.0 < local_res8[0])) {
      *(float *)(param_1 + 0x5c) = local_res8[0];
      *(undefined4 *)(param_1 + 0x60) = *param_3;
    }
  }
  return;
}


