// 0x1800c95d0  Features_Backtrack_BacktrackFeature_vfunc16
// size=108 thunk=false
// signature: undefined Features_Backtrack_BacktrackFeature_vfunc16()
// status: ok


void Features_Backtrack_BacktrackFeature_vfunc16(void)

{
  longlong lVar1;
  undefined *puVar2;
  
  if (((DAT_1803fac7a != '\0') && (DAT_1803fac7b != '\0')) && (DAT_1803fa340 != 0)) {
    lVar1 = FUN_180016fb0("cl_extrapolate");
    if (lVar1 != 0) {
      puVar2 = &DAT_180347810;
      if (DAT_1803db380 != 0.0) {
        puVar2 = &DAT_18034124c;
      }
      FUN_1801fcdc0(lVar1,0,puVar2);
    }
    DAT_1803fac7b = '\0';
    DAT_1803fac7a = '\0';
  }
  return;
}


