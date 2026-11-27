// 0x1802e4279  FUN_1802e4279
// size=38 thunk=false
// signature: undefined FUN_1802e4279()
// status: ok


void FUN_1802e4279(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    FUN_18001bc60(param_2 + 0x48);
  }
  return;
}


