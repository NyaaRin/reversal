// 0x1802e2661  FUN_1802e2661
// size=43 thunk=false
// signature: undefined FUN_1802e2661()
// status: ok


void FUN_1802e2661(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffdffff;
    FUN_18021b470(param_2 + 0x78);
  }
  return;
}


