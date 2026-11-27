// 0x1802eb9f0  FUN_1802eb9f0
// size=38 thunk=false
// signature: undefined FUN_1802eb9f0()
// status: ok


void FUN_1802eb9f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18020d5c0(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}


