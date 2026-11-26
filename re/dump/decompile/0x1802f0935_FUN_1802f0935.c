// 0x1802f0935  FUN_1802f0935
// size=38 thunk=false
// signature: undefined FUN_1802f0935()
// status: ok


void FUN_1802f0935(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 4) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


