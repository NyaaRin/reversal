// 0x1802ea956  FUN_1802ea956
// size=38 thunk=false
// signature: undefined FUN_1802ea956()
// status: ok


void FUN_1802ea956(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}


