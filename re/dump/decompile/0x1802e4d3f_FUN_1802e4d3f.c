// 0x1802e4d3f  FUN_1802e4d3f
// size=38 thunk=false
// signature: undefined FUN_1802e4d3f()
// status: ok


void FUN_1802e4d3f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


