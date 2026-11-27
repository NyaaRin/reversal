// 0x1802de740  FUN_1802de740
// size=38 thunk=false
// signature: undefined FUN_1802de740()
// status: ok


void FUN_1802de740(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


