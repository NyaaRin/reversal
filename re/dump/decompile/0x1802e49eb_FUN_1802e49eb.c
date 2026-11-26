// 0x1802e49eb  FUN_1802e49eb
// size=46 thunk=false
// signature: undefined FUN_1802e49eb()
// status: ok


void FUN_1802e49eb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x80) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffff7f;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x98));
  }
  return;
}


