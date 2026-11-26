// 0x1802f2b4b  FUN_1802f2b4b
// size=38 thunk=false
// signature: undefined FUN_1802f2b4b()
// status: ok


void FUN_1802f2b4b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


