// 0x180159270  FUN_180159270
// size=19 thunk=false
// signature: undefined FUN_180159270()
// status: ok


undefined1 FUN_180159270(int *param_1,int param_2)

{
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 != param_2) {
    *param_1 = param_2;
  }
  return 1;
}


