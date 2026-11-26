// 0x1802f110d  FUN_1802f110d
// size=46 thunk=false
// signature: undefined FUN_1802f110d()
// status: ok


void FUN_1802f110d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffff7ff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 400));
  }
  return;
}


