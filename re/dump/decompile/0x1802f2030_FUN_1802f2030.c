// 0x1802f2030  FUN_1802f2030
// size=38 thunk=false
// signature: undefined FUN_1802f2030()
// status: ok


void FUN_1802f2030(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b0b0(param_2 + 0x78);
  }
  return;
}


