// 0x1802f077b  FUN_1802f077b
// size=43 thunk=false
// signature: undefined FUN_1802f077b()
// status: ok


void FUN_1802f077b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x800000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xff7fffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


