// 0x1802e2dcc  FUN_1802e2dcc
// size=43 thunk=false
// signature: undefined FUN_1802e2dcc()
// status: ok


void FUN_1802e2dcc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x200) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffdff;
    FUN_180209d90(param_2 + 0x48);
  }
  return;
}


