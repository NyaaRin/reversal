// 0x1802f8996  FUN_1802f8996
// size=41 thunk=false
// signature: undefined FUN_1802f8996()
// status: ok


void FUN_1802f8996(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;
    thunk_FUN_18021e290(param_2 + 0x90);
  }
  return;
}


