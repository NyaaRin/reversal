// 0x1802e3e90  FUN_1802e3e90
// size=41 thunk=false
// signature: undefined FUN_1802e3e90()
// status: ok


void FUN_1802e3e90(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18001bc60(param_2 + 0x88);
  }
  return;
}


