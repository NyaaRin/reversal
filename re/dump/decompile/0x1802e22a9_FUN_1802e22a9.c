// 0x1802e22a9  FUN_1802e22a9
// size=38 thunk=false
// signature: undefined FUN_1802e22a9()
// status: ok


void FUN_1802e22a9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;
    FUN_18021b5c0(param_2 + 0x78);
  }
  return;
}


