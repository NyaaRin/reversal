// 0x1802dc73d  FUN_1802dc73d
// size=43 thunk=false
// signature: undefined FUN_1802dc73d()
// status: ok


void FUN_1802dc73d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x100) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffeff;
    thunk_FUN_18021d530(param_2 + 0x70);
  }
  return;
}


