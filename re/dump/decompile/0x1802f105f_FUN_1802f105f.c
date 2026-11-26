// 0x1802f105f  FUN_1802f105f
// size=46 thunk=false
// signature: undefined FUN_1802f105f()
// status: ok


void FUN_1802f105f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffeff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x188));
  }
  return;
}


