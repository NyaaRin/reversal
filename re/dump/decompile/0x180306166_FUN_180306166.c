// 0x180306166  FUN_180306166
// size=38 thunk=false
// signature: undefined FUN_180306166()
// status: ok


void FUN_180306166(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    FUN_18020c610(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}


