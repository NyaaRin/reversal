// 0x1802dded6  FUN_1802dded6
// size=38 thunk=false
// signature: undefined FUN_1802dded6()
// status: ok


void FUN_1802dded6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_18020e450(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


