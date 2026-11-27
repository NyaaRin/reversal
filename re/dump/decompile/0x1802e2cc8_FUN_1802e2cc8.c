// 0x1802e2cc8  FUN_1802e2cc8
// size=38 thunk=false
// signature: undefined FUN_1802e2cc8()
// status: ok


void FUN_1802e2cc8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    FUN_180209d90(param_2 + 0x48);
  }
  return;
}


