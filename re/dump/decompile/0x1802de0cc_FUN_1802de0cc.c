// 0x1802de0cc  FUN_1802de0cc
// size=38 thunk=false
// signature: undefined FUN_1802de0cc()
// status: ok


void FUN_1802de0cc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800668e0(*(undefined8 *)(param_2 + 0x70));
  }
  return;
}


