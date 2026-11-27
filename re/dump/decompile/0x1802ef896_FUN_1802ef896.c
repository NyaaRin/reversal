// 0x1802ef896  FUN_1802ef896
// size=38 thunk=false
// signature: undefined FUN_1802ef896()
// status: ok


void FUN_1802ef896(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    FUN_1800668e0(param_2 + 0x30);
  }
  return;
}


