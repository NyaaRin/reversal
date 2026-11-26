// 0x1802e082f  FUN_1802e082f
// size=47 thunk=false
// signature: undefined FUN_1802e082f()
// status: ok


void FUN_1802e082f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x90) & 2) != 0) {
    *(uint *)(param_2 + 0x90) = *(uint *)(param_2 + 0x90) & 0xfffffffd;
    FUN_18001bc60(param_2 + 0xa8);
  }
  return;
}


