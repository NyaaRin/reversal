// 0x1802e1d26  FUN_1802e1d26
// size=38 thunk=false
// signature: undefined FUN_1802e1d26()
// status: ok


void FUN_1802e1d26(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    FUN_18001bc60(param_2 + 0x40);
  }
  return;
}


