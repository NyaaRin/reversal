// 0x1802fc320  FUN_1802fc320
// size=38 thunk=false
// signature: undefined FUN_1802fc320()
// status: ok


void FUN_1802fc320(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18021b270(param_2 + 0x48);
  }
  return;
}


