// 0x1802f226e  FUN_1802f226e
// size=43 thunk=false
// signature: undefined FUN_1802f226e()
// status: ok


void FUN_1802f226e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


