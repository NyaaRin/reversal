// 0x1802ebf58  FUN_1802ebf58
// size=41 thunk=false
// signature: undefined FUN_1802ebf58()
// status: ok


void FUN_1802ebf58(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x158));
  }
  return;
}


