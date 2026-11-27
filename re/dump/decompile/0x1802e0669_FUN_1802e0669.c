// 0x1802e0669  FUN_1802e0669
// size=38 thunk=false
// signature: undefined FUN_1802e0669()
// status: ok


void FUN_1802e0669(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x74) & 2) != 0) {
    *(uint *)(param_2 + 0x74) = *(uint *)(param_2 + 0x74) & 0xfffffffd;
    FUN_18001bc60(param_2 + 0x78);
  }
  return;
}


