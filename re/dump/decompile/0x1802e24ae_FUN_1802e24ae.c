// 0x1802e24ae  FUN_1802e24ae
// size=43 thunk=false
// signature: undefined FUN_1802e24ae()
// status: ok


void FUN_1802e24ae(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;
    FUN_18021b5a0(param_2 + 0x78);
  }
  return;
}


