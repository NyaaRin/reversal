// 0x1802f9848  FUN_1802f9848
// size=47 thunk=false
// signature: undefined FUN_1802f9848()
// status: ok


void FUN_1802f9848(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x84) & 0x40) != 0) {
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xffffffbf;
    thunk_FUN_18020d5c0(param_2 + 0x658);
  }
  return;
}


