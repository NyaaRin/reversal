// 0x1802e2cfa  FUN_1802e2cfa
// size=38 thunk=false
// signature: undefined FUN_1802e2cfa()
// status: ok


void FUN_1802e2cfa(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    FUN_180209d90(param_2 + 0x48);
  }
  return;
}


