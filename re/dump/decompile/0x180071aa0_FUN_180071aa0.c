// 0x180071aa0  FUN_180071aa0
// size=94 thunk=false
// signature: undefined FUN_180071aa0()
// status: ok


undefined4 FUN_180071aa0(int param_1)

{
  if ((((DAT_180423a28 != '\0') && (0.0 <= DAT_1803e9240)) && (DAT_1803fa608 != (float *)0x0)) &&
     (((0.0 <= (double)*DAT_1803fa608 - DAT_1803e9240 &&
       ((double)*DAT_1803fa608 - DAT_1803e9240 <= DAT_180380cb0)) && (param_1 - 1U < 0x80)))) {
    return *(undefined4 *)(&DAT_180423760 + (longlong)param_1 * 4);
  }
  return 0;
}


