// 0x180229320  FUN_180229320
// size=158 thunk=false
// signature: undefined FUN_180229320()
// status: ok


longlong FUN_180229320(longlong param_1,longlong param_2,longlong param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_18016d4c0(param_3,param_1);
    FUN_18016d4c0(param_3 + 0x20,param_1 + 0x20);
    *(undefined8 *)(param_3 + 0x40) = *(undefined8 *)(param_1 + 0x40);
    *(undefined1 *)(param_3 + 0x48) = *(undefined1 *)(param_1 + 0x48);
    param_3 = param_3 + 0x50;
    param_1 = param_1 + 0x50;
  }
  return param_3;
}


