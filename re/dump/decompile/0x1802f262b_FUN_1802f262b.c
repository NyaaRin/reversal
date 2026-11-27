// 0x1802f262b  FUN_1802f262b
// size=43 thunk=false
// signature: undefined FUN_1802f262b()
// status: ok


void FUN_1802f262b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffbffff;
    FUN_18021b3f0(param_2 + 0x78);
  }
  return;
}


