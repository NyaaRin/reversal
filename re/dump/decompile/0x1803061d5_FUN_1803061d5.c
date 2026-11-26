// 0x1803061d5  FUN_1803061d5
// size=38 thunk=false
// signature: undefined FUN_1803061d5()
// status: ok


void FUN_1803061d5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18020c610(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


