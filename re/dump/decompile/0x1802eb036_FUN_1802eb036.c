// 0x1802eb036  FUN_1802eb036
// size=43 thunk=false
// signature: undefined FUN_1802eb036()
// status: ok


void FUN_1802eb036(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffeffff;
    thunk_FUN_18021e290(param_2 + 0x70);
  }
  return;
}


