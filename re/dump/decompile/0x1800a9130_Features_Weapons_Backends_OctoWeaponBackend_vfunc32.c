// 0x1800a9130  Features_Weapons_Backends_OctoWeaponBackend_vfunc32
// size=351 thunk=false
// signature: undefined Features_Weapons_Backends_OctoWeaponBackend_vfunc32()
// status: ok


float * Features_Weapons_Backends_OctoWeaponBackend_vfunc32
                  (longlong param_1,float *param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  
  cVar2 = FUN_1800a7ab0(param_1,param_3);
  if (((((cVar2 != '\0') && (*(char *)(param_1 + 0x40) == '\0')) &&
       (*(char *)(param_1 + 0x41) == '\0')) &&
      ((*(int *)(param_1 + 0x3c) < 2 && (*(char *)(param_1 + 0x42) == '\0')))) &&
     (fVar1 = *(float *)(param_1 + 0x38), 0.0 < fVar1)) {
    sVar3 = _fdclass(fVar1);
    if (sVar3 < 1) {
      fVar6 = fVar1;
      if (*(char *)(param_1 + 0x44) != '\0') {
        fVar6 = fVar1 * DAT_180380bc4;
      }
      if (DAT_180380b3c < *(float *)(param_1 + 0x48)) {
        fVar6 = fVar6 * DAT_180380c00;
      }
      if ((param_4 != 0) && ((*(byte *)(param_4 + 0x20) & 1) != 0)) {
        iVar4 = DAT_1804261d0 + 1;
        bVar5 = DAT_1804261d0 == (DAT_1804261d0 / 0x78) * 0x78;
        DAT_1804261d0 = iVar4;
        if (bVar5) {
          FUN_180014410("[OCTO] cone=%.5f base=%.5f stock=%d supp=%.2f ready=%d auto=%d\n",
                        (double)fVar6,(double)fVar1,*(char *)(param_1 + 0x44) != '\0',
                        (double)*(float *)(param_1 + 0x48),*(char *)(param_1 + 0x58) != '\0',
                        *(char *)(param_1 + 0x43) != '\0');
        }
      }
      *param_2 = fVar6;
      param_2[1] = fVar6;
      goto LAB_1800a9270;
    }
  }
  param_2[0] = 0.0;
  param_2[1] = 0.0;
LAB_1800a9270:
  param_2[2] = 0.0;
  return param_2;
}


