// 0x1802f0e92  FUN_1802f0e92
// size=38 thunk=false
// signature: undefined FUN_1802f0e92()
// status: ok


void FUN_1802f0e92(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


