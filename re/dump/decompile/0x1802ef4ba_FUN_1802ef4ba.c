// 0x1802ef4ba  FUN_1802ef4ba
// size=38 thunk=false
// signature: undefined FUN_1802ef4ba()
// status: ok


void FUN_1802ef4ba(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    FUN_1800668e0(param_2 + 0x58);
  }
  return;
}


