// 0x1802fd4ad  FUN_1802fd4ad
// size=38 thunk=false
// signature: undefined FUN_1802fd4ad()
// status: ok


void FUN_1802fd4ad(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180209d90(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


