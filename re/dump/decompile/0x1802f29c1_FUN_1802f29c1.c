// 0x1802f29c1  FUN_1802f29c1
// size=43 thunk=false
// signature: undefined FUN_1802f29c1()
// status: ok


void FUN_1802f29c1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xefffffff;
    FUN_18021b360(param_2 + 0x78);
  }
  return;
}


