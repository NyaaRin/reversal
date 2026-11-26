// 0x1802dee2d  FUN_1802dee2d
// size=41 thunk=false
// signature: undefined FUN_1802dee2d()
// status: ok


void FUN_1802dee2d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


