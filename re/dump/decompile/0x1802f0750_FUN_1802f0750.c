// 0x1802f0750  FUN_1802f0750
// size=43 thunk=false
// signature: undefined FUN_1802f0750()
// status: ok


void FUN_1802f0750(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x400000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffbfffff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


