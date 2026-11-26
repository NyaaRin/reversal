// 0x1802e04a0  FUN_1802e04a0
// size=38 thunk=false
// signature: undefined FUN_1802e04a0()
// status: ok


void FUN_1802e04a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    FUN_18001bc60(param_2 + 0x78);
  }
  return;
}


