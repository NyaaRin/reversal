// 0x1802da4ed  FUN_1802da4ed
// size=38 thunk=false
// signature: undefined FUN_1802da4ed()
// status: ok


void FUN_1802da4ed(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    FUN_180020a30(param_2 + 0x30);
  }
  return;
}


