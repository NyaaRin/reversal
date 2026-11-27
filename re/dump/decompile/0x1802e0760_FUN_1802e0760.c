// 0x1802e0760  FUN_1802e0760
// size=38 thunk=false
// signature: undefined FUN_1802e0760()
// status: ok


void FUN_1802e0760(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_18001bc60(param_2 + 0x78);
  }
  return;
}


