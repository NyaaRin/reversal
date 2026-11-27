// 0x1802def08  FUN_1802def08
// size=41 thunk=false
// signature: undefined FUN_1802def08()
// status: ok


void FUN_1802def08(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180066900(param_2 + 0xd0);
  }
  return;
}


