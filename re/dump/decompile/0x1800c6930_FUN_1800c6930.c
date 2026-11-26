// 0x1800c6930  FUN_1800c6930
// size=141 thunk=false
// signature: undefined FUN_1800c6930()
// status: ok


bool FUN_1800c6930(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_1800c6870();
  if ((iVar2 <= param_1 - param_2) && (param_1 - param_2 <= param_3)) {
    cVar1 = FUN_1800c6700();
    if ((cVar1 != '\0') && (0 < DAT_1803fb0cc)) {
      if ((0 < DAT_1803fb0c0) && (DAT_1803fb0d0 != (int *)0x0)) {
        if (*DAT_1803fb0d0 == DAT_1803fb0c0 + 1) {
          return param_2 != DAT_1803fb0cc;
        }
      }
    }
    return true;
  }
  return false;
}


