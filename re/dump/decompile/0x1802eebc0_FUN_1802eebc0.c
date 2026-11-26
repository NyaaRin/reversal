// 0x1802eebc0  FUN_1802eebc0
// size=41 thunk=false
// signature: undefined FUN_1802eebc0()
// status: ok


void FUN_1802eebc0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    FUN_18014ddf0(*(undefined8 *)(param_2 + 0xc0));
  }
  return;
}


