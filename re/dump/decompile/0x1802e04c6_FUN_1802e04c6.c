// 0x1802e04c6  FUN_1802e04c6
// size=38 thunk=false
// signature: undefined FUN_1802e04c6()
// status: ok


void FUN_1802e04c6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 2) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffd;
    FUN_18001bc60(param_2 + 0x28);
  }
  return;
}


