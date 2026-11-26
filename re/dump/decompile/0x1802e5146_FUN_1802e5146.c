// 0x1802e5146  FUN_1802e5146
// size=38 thunk=false
// signature: undefined FUN_1802e5146()
// status: ok


void FUN_1802e5146(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffffef;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}


