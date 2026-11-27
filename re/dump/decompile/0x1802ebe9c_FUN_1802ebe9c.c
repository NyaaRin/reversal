// 0x1802ebe9c  FUN_1802ebe9c
// size=38 thunk=false
// signature: undefined FUN_1802ebe9c()
// status: ok


void FUN_1802ebe9c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


