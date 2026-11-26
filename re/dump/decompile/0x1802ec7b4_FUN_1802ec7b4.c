// 0x1802ec7b4  FUN_1802ec7b4
// size=38 thunk=false
// signature: undefined FUN_1802ec7b4()
// status: ok


void FUN_1802ec7b4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    FUN_18021b0b0(param_2 + 0x58);
  }
  return;
}


