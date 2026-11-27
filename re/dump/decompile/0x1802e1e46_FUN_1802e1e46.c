// 0x1802e1e46  FUN_1802e1e46
// size=38 thunk=false
// signature: undefined FUN_1802e1e46()
// status: ok


void FUN_1802e1e46(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    FUN_18001bc60(param_2 + 0x38);
  }
  return;
}


