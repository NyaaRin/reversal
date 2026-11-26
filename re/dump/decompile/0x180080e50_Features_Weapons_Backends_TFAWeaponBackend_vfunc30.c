// 0x180080e50  Features_Weapons_Backends_TFAWeaponBackend_vfunc30
// size=236 thunk=false
// signature: undefined Features_Weapons_Backends_TFAWeaponBackend_vfunc30()
// status: ok


void Features_Weapons_Backends_TFAWeaponBackend_vfunc30(longlong param_1)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (DAT_1803fa608 == 0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    dVar1 = *(double *)(DAT_1803fa608 + 0x28);
    uVar2 = SUB84(dVar1,0);
    uVar3 = (undefined4)((ulonglong)dVar1 >> 0x20);
    uVar4 = (undefined4)*(undefined8 *)(DAT_1803fa608 + 0x10);
    uVar5 = (undefined4)((ulonglong)*(undefined8 *)(DAT_1803fa608 + 0x10) >> 0x20);
    if (0.0 < dVar1) goto LAB_180080e98;
  }
  uVar2 = (undefined4)DAT_180380d08;
  uVar3 = (undefined4)((ulonglong)DAT_180380d08 >> 0x20);
LAB_180080e98:
  FUN_180014410("[TFA-DIAG] predCT=%.17g actualCT=%.17g dTicks=%.3f cone=%.5f dev(yaw=%.3f pitch=%.3f) shots=%d ownPunch=(%.3f,%.3f) punchIsEngine=%d\n"
                ,*(double *)(param_1 + 0x18),CONCAT44(uVar5,uVar4),
                ((double)CONCAT44(uVar5,uVar4) - *(double *)(param_1 + 0x18)) /
                (double)CONCAT44(uVar3,uVar2),(double)*(float *)(param_1 + 0x20),
                (double)*(float *)(param_1 + 0x24),(double)*(float *)(param_1 + 0x28),
                *(undefined4 *)(param_1 + 0x14),(double)*(float *)(param_1 + 0x3c),
                (double)*(float *)(param_1 + 0x40),*(char *)(param_1 + 0x2c) != '\0');
  return;
}


