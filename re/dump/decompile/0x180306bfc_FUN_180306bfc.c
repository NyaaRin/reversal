// 0x180306bfc  FUN_180306bfc
// size=38 thunk=false
// signature: undefined FUN_180306bfc()
// status: ok


void FUN_180306bfc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    FUN_18020c610(param_2 + 0x78);
  }
  return;
}


