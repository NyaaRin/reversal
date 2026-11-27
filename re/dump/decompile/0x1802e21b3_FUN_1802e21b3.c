// 0x1802e21b3  FUN_1802e21b3
// size=38 thunk=false
// signature: undefined FUN_1802e21b3()
// status: ok


void FUN_1802e21b3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    FUN_18021b5a0(param_2 + 0x78);
  }
  return;
}


