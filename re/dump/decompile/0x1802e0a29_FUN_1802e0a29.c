// 0x1802e0a29  FUN_1802e0a29
// size=41 thunk=false
// signature: undefined FUN_1802e0a29()
// status: ok


void FUN_1802e0a29(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 2) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffd;
    FUN_18001bc60(param_2 + 0x98);
  }
  return;
}


