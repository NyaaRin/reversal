// 0x180092500  Features_Weapons_Backends_ZSWeaponBackend_vfunc32
// size=101 thunk=false
// signature: undefined Features_Weapons_Backends_ZSWeaponBackend_vfunc32()
// status: ok


undefined8 *
Features_Weapons_Backends_ZSWeaponBackend_vfunc32
          (longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 local_res8 [8];
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    return param_2;
  }
  local_res8[0] = 0;
  cVar1 = FUN_18008f000(param_1,param_3,local_res8);
  *(undefined4 *)(param_2 + 1) = 0;
  if (cVar1 == '\0') {
    *param_2 = 0;
    return param_2;
  }
  *(undefined4 *)param_2 = local_res8[0];
  *(undefined4 *)((longlong)param_2 + 4) = local_res8[0];
  return param_2;
}


