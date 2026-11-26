// 0x1802fd469  FUN_1802fd469
// size=38 thunk=false
// signature: undefined FUN_1802fd469()
// status: ok


void FUN_1802fd469(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180209d90(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


