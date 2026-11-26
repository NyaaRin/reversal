// 0x1802eb46f  FUN_1802eb46f
// size=41 thunk=false
// signature: undefined FUN_1802eb46f()
// status: ok


void FUN_1802eb46f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x1b0));
  }
  return;
}


