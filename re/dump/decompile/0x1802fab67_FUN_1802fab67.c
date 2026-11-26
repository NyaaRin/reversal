// 0x1802fab67  FUN_1802fab67
// size=41 thunk=false
// signature: undefined FUN_1802fab67()
// status: ok


void FUN_1802fab67(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 2) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffd;
    FUN_18001bc60(param_2 + 200);
  }
  return;
}


