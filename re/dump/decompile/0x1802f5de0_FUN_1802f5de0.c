// 0x1802f5de0  FUN_1802f5de0
// size=38 thunk=false
// signature: undefined FUN_1802f5de0()
// status: ok


void FUN_1802f5de0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180209990(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


