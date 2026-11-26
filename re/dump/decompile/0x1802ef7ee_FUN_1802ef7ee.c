// 0x1802ef7ee  FUN_1802ef7ee
// size=41 thunk=false
// signature: undefined FUN_1802ef7ee()
// status: ok


void FUN_1802ef7ee(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    FUN_1800668e0(param_2 + 0xe0);
  }
  return;
}


