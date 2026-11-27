// 0x1802eb3de  FUN_1802eb3de
// size=46 thunk=false
// signature: undefined FUN_1802eb3de()
// status: ok


void FUN_1802eb3de(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x1a8));
  }
  return;
}


