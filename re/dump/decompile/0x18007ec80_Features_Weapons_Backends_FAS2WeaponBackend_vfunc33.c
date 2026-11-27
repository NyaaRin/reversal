// 0x18007ec80  Features_Weapons_Backends_FAS2WeaponBackend_vfunc33
// size=104 thunk=false
// signature: undefined Features_Weapons_Backends_FAS2WeaponBackend_vfunc33()
// status: ok


double Features_Weapons_Backends_FAS2WeaponBackend_vfunc33(void)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);
  if (lVar3 == 0) {
    return *(double *)(DAT_1803fa608 + 0x10);
  }
  if (DAT_1803fa608 != 0) {
    return (double)DAT_1803de068 * *(double *)(DAT_1803fa608 + 0x28);
  }
  return 0.0;
}


