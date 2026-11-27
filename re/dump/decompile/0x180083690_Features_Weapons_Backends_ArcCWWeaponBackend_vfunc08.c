// 0x180083690  Features_Weapons_Backends_ArcCWWeaponBackend_vfunc08
// size=132 thunk=false
// signature: undefined Features_Weapons_Backends_ArcCWWeaponBackend_vfunc08()
// status: ok


bool Features_Weapons_Backends_ArcCWWeaponBackend_vfunc08(longlong *param_1,longlong param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  double extraout_XMM0_Qa;
  
  if ((param_2 != 0) && (cVar2 = (**(code **)(*param_1 + 0x38))(), cVar2 == '\0')) {
    iVar3 = FUN_18001e5b0(param_2);
    if (iVar3 == 0) {
      return false;
    }
    dVar1 = *(double *)(DAT_1803fa608 + 0x10);
    if ((double)param_1[10] <= dVar1) {
      FUN_18001eff0(param_2);
      return extraout_XMM0_Qa <= dVar1;
    }
  }
  return false;
}


