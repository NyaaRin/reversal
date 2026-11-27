// 0x1802f042c  FUN_1802f042c
// size=38 thunk=false
// signature: undefined FUN_1802f042c()
// status: ok


void FUN_1802f042c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}


