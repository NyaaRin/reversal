// 0x1802f090f  FUN_1802f090f
// size=38 thunk=false
// signature: undefined FUN_1802f090f()
// status: ok


void FUN_1802f090f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 2) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


