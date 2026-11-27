// 0x180076400  FUN_180076400
// size=97 thunk=false
// signature: undefined FUN_180076400()
// status: ok


bool FUN_180076400(longlong param_1)

{
  double extraout_XMM0_Qa;
  double dVar1;
  
  if ((param_1 != 0) && (DAT_1803fa608 != 0)) {
    FUN_18001eff0();
    if (0.0 < extraout_XMM0_Qa) {
      dVar1 = *(double *)(DAT_1803fa608 + 0x28);
      if (*(double *)(DAT_1803fa608 + 0x28) <= 0.0) {
        dVar1 = DAT_180380bd0;
      }
      return dVar1 * DAT_180380d18 < extraout_XMM0_Qa - *(double *)(DAT_1803fa608 + 0x10);
    }
  }
  return false;
}


