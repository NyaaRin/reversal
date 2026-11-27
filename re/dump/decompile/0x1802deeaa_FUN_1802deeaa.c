// 0x1802deeaa  FUN_1802deeaa
// size=38 thunk=false
// signature: undefined FUN_1802deeaa()
// status: ok


void FUN_1802deeaa(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    FUN_180066900(param_2 + 0x70);
  }
  return;
}


