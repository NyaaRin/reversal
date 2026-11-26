// 0x1802dc7c1  FUN_1802dc7c1
// size=46 thunk=false
// signature: undefined FUN_1802dc7c1()
// status: ok


void FUN_1802dc7c1(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x800) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffff7ff;
    FUN_180028f00(param_2 + 0xd0);
  }
  return;
}


