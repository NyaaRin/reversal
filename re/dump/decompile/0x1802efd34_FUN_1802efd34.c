// 0x1802efd34  FUN_1802efd34
// size=46 thunk=false
// signature: undefined FUN_1802efd34()
// status: ok


void FUN_1802efd34(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffdfff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x118));
  }
  return;
}


