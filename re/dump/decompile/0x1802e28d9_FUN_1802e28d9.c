// 0x1802e28d9  FUN_1802e28d9
// size=38 thunk=false
// signature: undefined FUN_1802e28d9()
// status: ok


void FUN_1802e28d9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_18001bc60(param_2 + 0x68);
  }
  return;
}


