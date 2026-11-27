// 0x1802e4c4c  FUN_1802e4c4c
// size=38 thunk=false
// signature: undefined FUN_1802e4c4c()
// status: ok


void FUN_1802e4c4c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}


