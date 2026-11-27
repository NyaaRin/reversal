// 0x1802de1d4  FUN_1802de1d4
// size=38 thunk=false
// signature: undefined FUN_1802de1d4()
// status: ok


void FUN_1802de1d4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180066900(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


