// 0x1802dc5db  FUN_1802dc5db
// size=38 thunk=false
// signature: undefined FUN_1802dc5db()
// status: ok


void FUN_1802dc5db(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    FUN_180028f00(param_2 + 0x70);
  }
  return;
}


