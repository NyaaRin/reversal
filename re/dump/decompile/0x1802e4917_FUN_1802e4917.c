// 0x1802e4917  FUN_1802e4917
// size=41 thunk=false
// signature: undefined FUN_1802e4917()
// status: ok


void FUN_1802e4917(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


