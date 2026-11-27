// 0x1802f21ca  FUN_1802f21ca
// size=38 thunk=false
// signature: undefined FUN_1802f21ca()
// status: ok


void FUN_1802f21ca(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    FUN_18021b490(param_2 + 0x78);
  }
  return;
}


