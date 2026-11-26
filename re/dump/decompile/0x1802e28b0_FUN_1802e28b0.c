// 0x1802e28b0  FUN_1802e28b0
// size=41 thunk=false
// signature: undefined FUN_1802e28b0()
// status: ok


void FUN_1802e28b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18001bc60(param_2 + 0x80);
  }
  return;
}


