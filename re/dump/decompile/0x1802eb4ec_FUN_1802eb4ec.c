// 0x1802eb4ec  FUN_1802eb4ec
// size=41 thunk=false
// signature: undefined FUN_1802eb4ec()
// status: ok


void FUN_1802eb4ec(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    thunk_FUN_18021e290(param_2 + 0x108);
  }
  return;
}


