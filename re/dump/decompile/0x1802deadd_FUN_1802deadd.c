// 0x1802deadd  FUN_1802deadd
// size=46 thunk=false
// signature: undefined FUN_1802deadd()
// status: ok


void FUN_1802deadd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffdfff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa8));
  }
  return;
}


