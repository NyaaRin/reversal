// 0x1802eb7d0  FUN_1802eb7d0
// size=41 thunk=false
// signature: undefined FUN_1802eb7d0()
// status: ok


void FUN_1802eb7d0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    thunk_FUN_18020d5c0(*(undefined8 *)(param_2 + 0xe8));
  }
  return;
}


