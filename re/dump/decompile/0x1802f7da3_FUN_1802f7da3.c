// 0x1802f7da3  FUN_1802f7da3
// size=41 thunk=false
// signature: undefined FUN_1802f7da3()
// status: ok


void FUN_1802f7da3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    thunk_FUN_18021e290(param_2 + 0xa0);
  }
  return;
}


