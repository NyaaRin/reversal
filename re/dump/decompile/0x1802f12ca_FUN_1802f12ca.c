// 0x1802f12ca  FUN_1802f12ca
// size=41 thunk=false
// signature: undefined FUN_1802f12ca()
// status: ok


void FUN_1802f12ca(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x40) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffffbf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x120));
  }
  return;
}


