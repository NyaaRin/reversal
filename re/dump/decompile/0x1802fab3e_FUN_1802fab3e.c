// 0x1802fab3e  FUN_1802fab3e
// size=41 thunk=false
// signature: undefined FUN_1802fab3e()
// status: ok


void FUN_1802fab3e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
    FUN_18001bc60(param_2 + 0x108);
  }
  return;
}


