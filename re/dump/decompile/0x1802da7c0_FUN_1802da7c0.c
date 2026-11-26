// 0x1802da7c0  FUN_1802da7c0
// size=41 thunk=false
// signature: undefined FUN_1802da7c0()
// status: ok


void FUN_1802da7c0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    FUN_180022e80(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}


