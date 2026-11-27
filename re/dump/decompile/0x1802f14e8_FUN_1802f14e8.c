// 0x1802f14e8  FUN_1802f14e8
// size=41 thunk=false
// signature: undefined FUN_1802f14e8()
// status: ok


void FUN_1802f14e8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_18021b450(param_2 + 0xc0);
  }
  return;
}


