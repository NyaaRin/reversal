// 0x1802dc796  FUN_1802dc796
// size=43 thunk=false
// signature: undefined FUN_1802dc796()
// status: ok


void FUN_1802dc796(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x400) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffbff;
    FUN_180028f00(param_2 + 0x70);
  }
  return;
}


