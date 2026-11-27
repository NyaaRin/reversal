// 0x1802e2505  FUN_1802e2505
// size=43 thunk=false
// signature: undefined FUN_1802e2505()
// status: ok


void FUN_1802e2505(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffdfff;
    FUN_18021b1b0(param_2 + 0x78);
  }
  return;
}


