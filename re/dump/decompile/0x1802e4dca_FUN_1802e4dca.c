// 0x1802e4dca  FUN_1802e4dca
// size=38 thunk=false
// signature: undefined FUN_1802e4dca()
// status: ok


void FUN_1802e4dca(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


