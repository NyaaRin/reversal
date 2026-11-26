// 0x180053ec0  FUN_180053ec0
// size=121 thunk=false
// signature: undefined FUN_180053ec0()
// status: ok


undefined8 FUN_180053ec0(longlong param_1)

{
  undefined8 *lp;
  FARPROC lpfn;
  BOOL BVar1;
  
  if (((DAT_1803fa668 != (longlong *)0x0) && (param_1 != 0)) && (*DAT_1803fa668 != 0)) {
    lp = (undefined8 *)(*DAT_1803fa668 + 0x458);
    BVar1 = IsBadReadPtr(lp,8);
    if (BVar1 == 0) {
      lpfn = (FARPROC)*lp;
      if ((lpfn != (FARPROC)0x0) && (BVar1 = IsBadCodePtr(lpfn), BVar1 == 0)) {
        (*lpfn)(DAT_1803fa668,param_1);
        return 1;
      }
      return 0;
    }
  }
  return 0;
}


