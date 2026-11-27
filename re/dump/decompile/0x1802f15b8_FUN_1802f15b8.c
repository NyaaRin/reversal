// 0x1802f15b8  FUN_1802f15b8
// size=38 thunk=false
// signature: undefined FUN_1802f15b8()
// status: ok


void FUN_1802f15b8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180021090(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


