// 0x1802f1295  FUN_1802f1295
// size=41 thunk=false
// signature: undefined FUN_1802f1295()
// status: ok


void FUN_1802f1295(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 0x20) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x140));
  }
  return;
}


