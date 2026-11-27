// 0x180071b00  FUN_180071b00
// size=139 thunk=false
// signature: undefined FUN_180071b00()
// status: ok


int FUN_180071b00(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((0 < param_1) && (DAT_1803fa608 != (float *)0x0)) {
    iVar2 = (int)DAT_1803fa608[7] + 1;
    if (iVar2 < 0x81) {
      if (iVar2 < 2) {
        return 0;
      }
    }
    else {
      iVar2 = 0x81;
    }
    iVar1 = 1;
    while ((((DAT_1803e9240 < 0.0 || ((double)*DAT_1803fa608 - DAT_1803e9240 < 0.0)) ||
            (DAT_180380cb0 < (double)*DAT_1803fa608 - DAT_1803e9240)) ||
           ((0x7f < iVar1 - 1U || (*(int *)(&DAT_180423760 + (longlong)iVar1 * 4) != param_1))))) {
      iVar1 = iVar1 + 1;
      if (iVar2 <= iVar1) {
        return 0;
      }
    }
    return iVar1;
  }
  return 0;
}


