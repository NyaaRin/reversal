// 0x1802fc650  FUN_1802fc650
// size=38 thunk=false
// signature: undefined FUN_1802fc650()
// status: ok


void FUN_1802fc650(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b0d0(param_2 + 0x48);
  }
  return;
}


