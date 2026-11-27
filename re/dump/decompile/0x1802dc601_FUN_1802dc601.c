// 0x1802dc601  FUN_1802dc601
// size=41 thunk=false
// signature: undefined FUN_1802dc601()
// status: ok


void FUN_1802dc601(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    FUN_180028f00(param_2 + 0xd0);
  }
  return;
}


