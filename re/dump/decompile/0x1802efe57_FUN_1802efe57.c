// 0x1802efe57  FUN_1802efe57
// size=43 thunk=false
// signature: undefined FUN_1802efe57()
// status: ok


void FUN_1802efe57(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x200) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffdff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


