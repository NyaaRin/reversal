// 0x1802f20d4  FUN_1802f20d4
// size=38 thunk=false
// signature: undefined FUN_1802f20d4()
// status: ok


void FUN_1802f20d4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


