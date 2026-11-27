// 0x1802f0d7f  FUN_1802f0d7f
// size=43 thunk=false
// signature: undefined FUN_1802f0d7f()
// status: ok


void FUN_1802f0d7f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffff7fff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


