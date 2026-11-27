// 0x1802e23a9  FUN_1802e23a9
// size=43 thunk=false
// signature: undefined FUN_1802e23a9()
// status: ok


void FUN_1802e23a9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x200) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffdff;
    FUN_18021b270(param_2 + 0x78);
  }
  return;
}


