// 0x1802f07ca  FUN_1802f07ca
// size=46 thunk=false
// signature: undefined FUN_1802f07ca()
// status: ok


void FUN_1802f07ca(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x1000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfeffffff;
    thunk_FUN_18021e290(param_2 + 0x198);
  }
  return;
}


