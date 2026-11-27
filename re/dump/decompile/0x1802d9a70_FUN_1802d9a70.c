// 0x1802d9a70  FUN_1802d9a70
// size=38 thunk=false
// signature: undefined FUN_1802d9a70()
// status: ok


void FUN_1802d9a70(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180209700(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}


