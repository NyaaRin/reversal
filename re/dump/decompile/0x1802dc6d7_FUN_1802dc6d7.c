// 0x1802dc6d7  FUN_1802dc6d7
// size=46 thunk=false
// signature: undefined FUN_1802dc6d7()
// status: ok


void FUN_1802dc6d7(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;
    FUN_180028f00(param_2 + 0xd0);
  }
  return;
}


