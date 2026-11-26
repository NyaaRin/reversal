// 0x1802e4810  FUN_1802e4810
// size=38 thunk=false
// signature: undefined FUN_1802e4810()
// status: ok


void FUN_1802e4810(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


