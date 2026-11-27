// 0x1802f0826  FUN_1802f0826
// size=46 thunk=false
// signature: undefined FUN_1802f0826()
// status: ok


void FUN_1802f0826(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x4000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfbffffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x170));
  }
  return;
}


