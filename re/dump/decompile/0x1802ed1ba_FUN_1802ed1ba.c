// 0x1802ed1ba  FUN_1802ed1ba
// size=41 thunk=false
// signature: undefined FUN_1802ed1ba()
// status: ok


void FUN_1802ed1ba(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 8) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffff7;
    FUN_18022b660(param_2 + 0x80);
  }
  return;
}


