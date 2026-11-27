// 0x1802eb25e  FUN_1802eb25e
// size=46 thunk=false
// signature: undefined FUN_1802eb25e()
// status: ok


void FUN_1802eb25e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x200) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffdff;
    FUN_1800668e0(param_2 + 0x1d0);
  }
  return;
}


