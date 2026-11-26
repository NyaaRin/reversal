// 0x1802e0cd2  FUN_1802e0cd2
// size=38 thunk=false
// signature: undefined FUN_1802e0cd2()
// status: ok


void FUN_1802e0cd2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 2) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffd;
    FUN_18001bc60(param_2 + 0x30);
  }
  return;
}


