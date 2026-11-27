// 0x1800e2280  FUN_1800e2280
// size=166 thunk=false
// signature: undefined FUN_1800e2280()
// status: ok


undefined8 FUN_1800e2280(undefined8 param_1,char param_2)

{
  double dVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  double extraout_XMM0_Qa;
  
  plVar4 = (longlong *)FUN_180076750();
  if (plVar4 == (longlong *)0x0) {
    iVar3 = FUN_18001e5b0(param_1);
    if (iVar3 == 0) {
      if (param_2 != '\0') {
        FUN_180014410("[TB] no ammo\n");
      }
      return 0;
    }
    dVar1 = *(double *)(DAT_1803fa608 + 0x10);
    FUN_18001eff0(param_1);
    if (dVar1 < extraout_XMM0_Qa) {
      if (param_2 != '\0') {
        FUN_180014410("[TB] weapon cooldown\n");
      }
      return 0;
    }
  }
  else {
    cVar2 = (**(code **)(*plVar4 + 0x40))(plVar4,param_1);
    if (cVar2 == '\0') {
      if (param_2 != '\0') {
        FUN_180014410("[TB] weapon not ready (backend)\n");
      }
      return 0;
    }
  }
  return 1;
}


