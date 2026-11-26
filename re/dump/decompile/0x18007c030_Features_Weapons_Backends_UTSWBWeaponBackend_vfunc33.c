// 0x18007c030  Features_Weapons_Backends_UTSWBWeaponBackend_vfunc33
// size=168 thunk=false
// signature: undefined Features_Weapons_Backends_UTSWBWeaponBackend_vfunc33()
// status: ok


double Features_Weapons_Backends_UTSWBWeaponBackend_vfunc33(longlong param_1,int *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong lVar3;
  double dVar4;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    return (double)*param_2;
  }
  dVar4 = *(double *)(DAT_1803fa608 + 0x10);
  pcVar1 = *(code **)(*DAT_1803fa360 + 0x18);
  uVar2 = (**(code **)(*DAT_1803fa668 + 0x60))();
  lVar3 = (*pcVar1)(DAT_1803fa360,uVar2);
  if (lVar3 != 0) {
    dVar4 = (double)(*(int *)(param_1 + 0x54) + DAT_1803de068) * *(double *)(DAT_1803fa608 + 0x28);
  }
  return (double)*param_2 + dVar4;
}


