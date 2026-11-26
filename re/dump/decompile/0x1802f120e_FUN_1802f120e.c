// 0x1802f120e  FUN_1802f120e
// size=41 thunk=false
// signature: undefined FUN_1802f120e()
// status: ok


void FUN_1802f120e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 4) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x138));
  }
  return;
}


