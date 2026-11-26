// 0x1802de794  FUN_1802de794
// size=38 thunk=false
// signature: undefined FUN_1802de794()
// status: ok


void FUN_1802de794(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x50));
  }
  return;
}


