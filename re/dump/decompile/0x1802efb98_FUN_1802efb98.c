// 0x1802efb98  FUN_1802efb98
// size=46 thunk=false
// signature: undefined FUN_1802efb98()
// status: ok


void FUN_1802efb98(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfff7ffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x100));
  }
  return;
}


