// 0x1802f02cc  FUN_1802f02cc
// size=41 thunk=false
// signature: undefined FUN_1802f02cc()
// status: ok


void FUN_1802f02cc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_18021b0b0(param_2 + 0x90);
  }
  return;
}


