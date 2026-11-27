// 0x1802e6a3a  FUN_1802e6a3a
// size=38 thunk=false
// signature: undefined FUN_1802e6a3a()
// status: ok


void FUN_1802e6a3a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    FUN_1800f5670(param_2 + 0x40);
  }
  return;
}


