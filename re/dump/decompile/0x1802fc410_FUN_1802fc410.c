// 0x1802fc410  FUN_1802fc410
// size=38 thunk=false
// signature: undefined FUN_1802fc410()
// status: ok


void FUN_1802fc410(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b1d0(param_2 + 0x58);
  }
  return;
}


