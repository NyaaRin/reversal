// 0x1802de96e  FUN_1802de96e
// size=46 thunk=false
// signature: undefined FUN_1802de96e()
// status: ok


void FUN_1802de96e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));
  }
  return;
}


