// 0x1802ded0d  FUN_1802ded0d
// size=41 thunk=false
// signature: undefined FUN_1802ded0d()
// status: ok


void FUN_1802ded0d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));
  }
  return;
}


