// 0x18008d340  Features_Weapons_Backends_TacRPWeaponBackend_vfunc11
// size=88 thunk=false
// signature: undefined Features_Weapons_Backends_TacRPWeaponBackend_vfunc11()
// status: ok


float Features_Weapons_Backends_TacRPWeaponBackend_vfunc11(longlong param_1)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((*(float *)(param_1 + 100) < 0.0) && (0.0 < *(float *)(param_1 + 0x68))) {
    fVar1 = DAT_180380984;
    if ((DAT_1803fa608 != 0) && (0.0 < *(double *)(DAT_1803fa608 + 0x28))) {
      fVar1 = (float)*(double *)(DAT_1803fa608 + 0x28);
    }
    fVar1 = (fVar1 + fVar1) -
            (DAT_1803810c8 / *(float *)(param_1 + 0x68)) * *(float *)(param_1 + 100);
  }
  return fVar1;
}


