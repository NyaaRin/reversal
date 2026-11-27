// 0x1802eb230  FUN_1802eb230
// size=46 thunk=false
// signature: undefined FUN_1802eb230()
// status: ok


void FUN_1802eb230(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;
    FUN_1800668e0(param_2 + 0xc0);
  }
  return;
}


