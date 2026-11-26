// 0x1802dc6b1  FUN_1802dc6b1
// size=38 thunk=false
// signature: undefined FUN_1802dc6b1()
// status: ok


void FUN_1802dc6b1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x40) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffbf;
    FUN_180028f00(param_2 + 0x70);
  }
  return;
}


