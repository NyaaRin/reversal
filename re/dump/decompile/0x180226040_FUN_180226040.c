// 0x180226040  FUN_180226040
// size=123 thunk=false
// signature: undefined FUN_180226040()
// status: ok


longlong FUN_180226040(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_18023cb00(param_3,param_1);
    param_3 = param_3 + 0x50;
    param_1 = param_1 + 0x50;
  }
  return param_3;
}


