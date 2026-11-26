// 0x1802fc540  FUN_1802fc540
// size=38 thunk=false
// signature: undefined FUN_1802fc540()
// status: ok


void FUN_1802fc540(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b1b0(param_2 + 0x28);
  }
  return;
}


