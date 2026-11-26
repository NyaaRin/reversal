// 0x180079b30  Features_Weapons_Backends_CWBaseWeaponBackend_vfunc34
// size=76 thunk=false
// signature: undefined Features_Weapons_Backends_CWBaseWeaponBackend_vfunc34()
// status: ok


float Features_Weapons_Backends_CWBaseWeaponBackend_vfunc34(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 0.0;
  fVar1 = *(float *)(param_1 + 0x58);
  if (*(float *)(param_1 + 0x58) <= 0.0) {
    if ((DAT_1803fa608 != 0) && (0.0 < *(double *)(DAT_1803fa608 + 0x28))) {
      fVar3 = (float)*(double *)(DAT_1803fa608 + 0x28) * DAT_180380fcc;
    }
    fVar2 = DAT_180380bb0;
    if (fVar3 <= DAT_180380bb0) {
      fVar2 = fVar3;
    }
    fVar1 = DAT_1803809a0;
    if (DAT_1803809a0 <= fVar2) {
      fVar1 = fVar2;
    }
  }
  return fVar1;
}


