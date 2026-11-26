// 0x1802fd63d  FUN_1802fd63d
// size=38 thunk=false
// signature: undefined FUN_1802fd63d()
// status: ok


void FUN_1802fd63d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180209d90(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


