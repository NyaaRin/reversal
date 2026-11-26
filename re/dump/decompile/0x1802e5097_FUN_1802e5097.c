// 0x1802e5097  FUN_1802e5097
// size=38 thunk=false
// signature: undefined FUN_1802e5097()
// status: ok


void FUN_1802e5097(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 4) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}


