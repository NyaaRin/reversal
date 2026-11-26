// 0x180306140  FUN_180306140
// size=38 thunk=false
// signature: undefined FUN_180306140()
// status: ok


void FUN_180306140(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    FUN_18020c610(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


