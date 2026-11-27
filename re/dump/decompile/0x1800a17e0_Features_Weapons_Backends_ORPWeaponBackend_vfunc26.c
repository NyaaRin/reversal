// 0x1800a17e0  Features_Weapons_Backends_ORPWeaponBackend_vfunc26
// size=125 thunk=false
// signature: undefined Features_Weapons_Backends_ORPWeaponBackend_vfunc26()
// status: ok


void Features_Weapons_Backends_ORPWeaponBackend_vfunc26(longlong *param_1)

{
  if (0 < (int)param_1[0xe]) {
    *(undefined4 *)(param_1 + 0xe) = 1;
    (**(code **)(*param_1 + 0xc0))(param_1,param_1[1]);
  }
  if (DAT_180423968 == param_1[1]) {
    DAT_180423986 = 0;
    DAT_180423968 = 0;
    DAT_180423988 = 0;
    DAT_18042398a = 0;
  }
  param_1[1] = 0;
  param_1[4] = -0x4010000000000000;
  param_1[3] = -0x4010000000000000;
  *(undefined1 *)((longlong)param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0xffffffff;
  return;
}


