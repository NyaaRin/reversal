// 0x1802f9ace  FUN_1802f9ace
// size=41 thunk=false
// signature: undefined FUN_1802f9ace()
// status: ok


void FUN_1802f9ace(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 4) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xfffffffb;
    FUN_180209db0(param_2 + 0x228);
  }
  return;
}


