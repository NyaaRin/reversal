// 0x1802f11d9  FUN_1802f11d9
// size=41 thunk=false
// signature: undefined FUN_1802f11d9()
// status: ok


void FUN_1802f11d9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 2) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x130));
  }
  return;
}


