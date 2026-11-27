// 0x180214c90  FUN_180214c90
// size=98 thunk=false
// signature: undefined FUN_180214c90()
// status: ok


void FUN_180214c90(longlong param_1,longlong param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x90) {
    FUN_18020e450(param_1 + 0x60);
    FUN_18020e450(param_1 + 0x40);
    FUN_18020e450(param_1 + 0x20);
    FUN_18020e450(param_1);
  }
  return;
}


