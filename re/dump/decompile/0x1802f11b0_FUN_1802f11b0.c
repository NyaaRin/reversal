// 0x1802f11b0  FUN_1802f11b0
// size=41 thunk=false
// signature: undefined FUN_1802f11b0()
// status: ok


void FUN_1802f11b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x130));
  }
  return;
}


