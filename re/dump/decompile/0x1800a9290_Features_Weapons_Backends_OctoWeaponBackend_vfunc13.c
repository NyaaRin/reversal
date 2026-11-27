// 0x1800a9290  Features_Weapons_Backends_OctoWeaponBackend_vfunc13
// size=62 thunk=false
// signature: undefined Features_Weapons_Backends_OctoWeaponBackend_vfunc13()
// status: ok


float Features_Weapons_Backends_OctoWeaponBackend_vfunc13(longlong param_1)

{
  char cVar1;
  float fVar2;
  
  cVar1 = FUN_1800a7ab0();
  if (cVar1 == '\0') {
    return DAT_180381384;
  }
  fVar2 = *(float *)(param_1 + 0x54);
  if (*(float *)(param_1 + 0x54) <= 0.0) {
    fVar2 = DAT_180381384;
  }
  return fVar2;
}


