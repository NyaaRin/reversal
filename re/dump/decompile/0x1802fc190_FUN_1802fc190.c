// 0x1802fc190  FUN_1802fc190
// size=38 thunk=false
// signature: undefined FUN_1802fc190()
// status: ok


void FUN_1802fc190(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b0b0(param_2 + 0x28);
  }
  return;
}


