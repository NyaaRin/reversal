// 0x18007e760  Features_Weapons_Backends_PTPWeaponBackend_vfunc07
// size=44 thunk=false
// signature: undefined Features_Weapons_Backends_PTPWeaponBackend_vfunc07()
// status: ok


ulonglong Features_Weapons_Backends_PTPWeaponBackend_vfunc07(longlong param_1,longlong param_2)

{
  ulonglong in_RAX;
  
  if ((((param_2 != 0) && (param_2 == *(longlong *)(param_1 + 8))) &&
      (in_RAX = DAT_1803fa608, DAT_1803fa608 != 0)) &&
     (*(double *)(DAT_1803fa608 + 0x10) <= (double)*(float *)(param_1 + 0x1c) &&
      (double)*(float *)(param_1 + 0x1c) != *(double *)(DAT_1803fa608 + 0x10))) {
    return CONCAT71((int7)(DAT_1803fa608 >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}


