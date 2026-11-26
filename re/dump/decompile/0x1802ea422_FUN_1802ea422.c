// 0x1802ea422  FUN_1802ea422
// size=38 thunk=false
// signature: undefined FUN_1802ea422()
// status: ok


void FUN_1802ea422(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}


