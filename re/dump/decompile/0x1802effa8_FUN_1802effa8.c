// 0x1802effa8  FUN_1802effa8
// size=38 thunk=false
// signature: undefined FUN_1802effa8()
// status: ok


void FUN_1802effa8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


