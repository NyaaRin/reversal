// 0x1802f07f8  FUN_1802f07f8
// size=46 thunk=false
// signature: undefined FUN_1802f07f8()
// status: ok


void FUN_1802f07f8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x2000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfdffffff;
    thunk_FUN_18021e290(param_2 + 0x90);
  }
  return;
}


