// 0x1802f00bd  FUN_1802f00bd
// size=41 thunk=false
// signature: undefined FUN_1802f00bd()
// status: ok


void FUN_1802f00bd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xc0));
  }
  return;
}


