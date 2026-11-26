// 0x1802e4250  FUN_1802e4250
// size=41 thunk=false
// signature: undefined FUN_1802e4250()
// status: ok


void FUN_1802e4250(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    FUN_18001bc60(param_2 + 0xb0);
  }
  return;
}


