// 0x18006e2e0  FUN_18006e2e0
// size=112 thunk=false
// signature: undefined FUN_18006e2e0()
// status: ok


ulonglong FUN_18006e2e0(longlong param_1)

{
  char *lp;
  BOOL BVar1;
  
  if (param_1 != 0) {
    BVar1 = IsBadReadPtr((undefined8 *)(param_1 + 0x60),8);
    if (BVar1 == 0) {
      lp = *(char **)(param_1 + 0x60);
      if ((lp != (char *)0x0) && (BVar1 = IsBadReadPtr(lp,3), BVar1 == 0)) {
        if (*lp == '\0') {
          return (ulonglong)*(ushort *)(lp + 1);
        }
        return (ulonglong)CONCAT11(lp[1],*lp);
      }
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}


