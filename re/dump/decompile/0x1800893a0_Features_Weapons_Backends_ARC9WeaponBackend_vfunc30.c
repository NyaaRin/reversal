// 0x1800893a0  Features_Weapons_Backends_ARC9WeaponBackend_vfunc30
// size=97 thunk=false
// signature: undefined Features_Weapons_Backends_ARC9WeaponBackend_vfunc30()
// status: ok


void Features_Weapons_Backends_ARC9WeaponBackend_vfunc30(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (DAT_1803fa608 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(DAT_1803fa608 + 0x20);
  }
  if (DAT_1803fa608 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(DAT_1803fa608 + 0x20);
  }
  FUN_180014410("[ARC9-DIAG] predTick=%d actualTick=%d off=%d luaTickOffset=%d loopback=%d path=%d\n"
                ,*(int *)(param_1 + 0x58),uVar1,iVar2 - *(int *)(param_1 + 0x58),
                *(undefined4 *)(param_1 + 0x4c),*(char *)(param_1 + 0x5c) != '\0',
                *(undefined4 *)(param_1 + 0x48));
  return;
}


