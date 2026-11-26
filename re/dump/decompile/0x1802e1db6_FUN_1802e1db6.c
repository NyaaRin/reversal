// 0x1802e1db6  FUN_1802e1db6
// size=38 thunk=false
// signature: undefined FUN_1802e1db6()
// status: ok


void FUN_1802e1db6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x38) & 2) != 0) {
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffd;
    FUN_18001bc60(param_2 + 0x20);
  }
  return;
}


