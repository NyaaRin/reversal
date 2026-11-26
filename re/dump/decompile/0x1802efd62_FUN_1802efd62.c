// 0x1802efd62  FUN_1802efd62
// size=46 thunk=false
// signature: undefined FUN_1802efd62()
// status: ok


void FUN_1802efd62(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffbfff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x118));
  }
  return;
}


