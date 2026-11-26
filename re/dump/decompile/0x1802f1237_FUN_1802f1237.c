// 0x1802f1237  FUN_1802f1237
// size=41 thunk=false
// signature: undefined FUN_1802f1237()
// status: ok


void FUN_1802f1237(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 8) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffff7;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x138));
  }
  return;
}


