// 0x18008d3a0  Features_Weapons_Backends_TacRPWeaponBackend_vfunc12
// size=67 thunk=false
// signature: undefined Features_Weapons_Backends_TacRPWeaponBackend_vfunc12()
// status: ok


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float Features_Weapons_Backends_TacRPWeaponBackend_vfunc12(longlong param_1)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (*(float *)(param_1 + 100) <= 0.0 && *(float *)(param_1 + 100) != 0.0) {
    if (0.0 < *(float *)(param_1 + 0x68)) {
      return DAT_1803810c8 / *(float *)(param_1 + 0x68) + *(float *)(param_1 + 0x6c) +
             _DAT_1803809b0;
    }
    fVar1 = DAT_1803809ec + *(float *)(param_1 + 0x6c) + _DAT_1803809b0;
  }
  return fVar1;
}


