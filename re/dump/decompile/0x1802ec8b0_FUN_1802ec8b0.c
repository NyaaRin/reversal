// 0x1802ec8b0  FUN_1802ec8b0
// size=41 thunk=false
// signature: undefined FUN_1802ec8b0()
// status: ok


void FUN_1802ec8b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    FUN_18020a5a0(*(undefined8 *)(param_2 + 0xf0));
  }
  return;
}


