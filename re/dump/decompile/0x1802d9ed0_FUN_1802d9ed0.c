// 0x1802d9ed0  FUN_1802d9ed0
// size=38 thunk=false
// signature: undefined FUN_1802d9ed0()
// status: ok


void FUN_1802d9ed0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18001bc60(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}


