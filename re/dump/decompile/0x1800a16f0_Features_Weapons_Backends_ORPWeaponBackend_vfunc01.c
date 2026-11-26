// 0x1800a16f0  Features_Weapons_Backends_ORPWeaponBackend_vfunc01
// size=128 thunk=false
// signature: undefined Features_Weapons_Backends_ORPWeaponBackend_vfunc01()
// status: ok


ulonglong Features_Weapons_Backends_ORPWeaponBackend_vfunc01(undefined8 param_1,longlong param_2)

{
  longlong *in_RAX;
  longlong *plVar1;
  
  if ((param_2 != 0) && (param_2 == DAT_180409780)) {
    in_RAX = (longlong *)&DAT_1803e9f78;
    if (0xf < DAT_1803e9f90) {
      in_RAX = DAT_1803e9f78;
    }
    if ((DAT_1803e9f88 == 8) && (*in_RAX == 0x657361625f70726f)) {
LAB_1800a176a:
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
    in_RAX = DAT_1803edcf8;
    if (DAT_1803edcf8 != DAT_1803edd00) {
      do {
        plVar1 = in_RAX;
        if (0xf < (ulonglong)in_RAX[3]) {
          plVar1 = (longlong *)*in_RAX;
        }
      } while (((in_RAX[2] != 8) || (*plVar1 != 0x657361625f70726f)) &&
              (in_RAX = in_RAX + 4, in_RAX != DAT_1803edd00));
      if (in_RAX != DAT_1803edd00) goto LAB_1800a176a;
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}


