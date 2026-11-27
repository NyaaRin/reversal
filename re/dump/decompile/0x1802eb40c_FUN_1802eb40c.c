// 0x1802eb40c  FUN_1802eb40c
// size=46 thunk=false
// signature: undefined FUN_1802eb40c()
// status: ok


void FUN_1802eb40c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x1a8));
  }
  return;
}


