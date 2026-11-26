// 0x1802f0f9c  FUN_1802f0f9c
// size=41 thunk=false
// signature: undefined FUN_1802f0f9c()
// status: ok


void FUN_1802f0f9c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x180));
  }
  return;
}


