// 0x1802eb446  FUN_1802eb446
// size=41 thunk=false
// signature: undefined FUN_1802eb446()
// status: ok


void FUN_1802eb446(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x1b0));
  }
  return;
}


