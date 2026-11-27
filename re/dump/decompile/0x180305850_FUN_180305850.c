// 0x180305850  FUN_180305850
// size=41 thunk=false
// signature: undefined FUN_180305850()
// status: ok


void FUN_180305850(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_18021b1b0(param_2 + 0x88);
  }
  return;
}


