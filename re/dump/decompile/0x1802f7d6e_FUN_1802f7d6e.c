// 0x1802f7d6e  FUN_1802f7d6e
// size=41 thunk=false
// signature: undefined FUN_1802f7d6e()
// status: ok


void FUN_1802f7d6e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_18021e290(param_2 + 0x80);
  }
  return;
}


