// 0x1802ead0c  FUN_1802ead0c
// size=46 thunk=false
// signature: undefined FUN_1802ead0c()
// status: ok


void FUN_1802ead0c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x168));
  }
  return;
}


