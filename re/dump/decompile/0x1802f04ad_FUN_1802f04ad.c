// 0x1802f04ad  FUN_1802f04ad
// size=46 thunk=false
// signature: undefined FUN_1802f04ad()
// status: ok


void FUN_1802f04ad(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x400) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffbff;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0xa0));
  }
  return;
}


