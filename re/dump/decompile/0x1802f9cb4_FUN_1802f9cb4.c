// 0x1802f9cb4  FUN_1802f9cb4
// size=46 thunk=false
// signature: undefined FUN_1802f9cb4()
// status: ok


void FUN_1802f9cb4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x80) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffffff7f;
    thunk_FUN_18021e290(param_2 + 0xe0);
  }
  return;
}


