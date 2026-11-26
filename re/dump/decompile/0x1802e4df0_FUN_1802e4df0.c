// 0x1802e4df0  FUN_1802e4df0
// size=38 thunk=false
// signature: undefined FUN_1802e4df0()
// status: ok


void FUN_1802e4df0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


