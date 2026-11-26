// 0x1802ef7c8  FUN_1802ef7c8
// size=38 thunk=false
// signature: undefined FUN_1802ef7c8()
// status: ok


void FUN_1802ef7c8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_1800668e0(param_2 + 0x50);
  }
  return;
}


