// 0x1802e498d  FUN_1802e498d
// size=41 thunk=false
// signature: undefined FUN_1802e498d()
// status: ok


void FUN_1802e498d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


