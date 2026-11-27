// 0x1802eadec  FUN_1802eadec
// size=41 thunk=false
// signature: undefined FUN_1802eadec()
// status: ok


void FUN_1802eadec(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_18021e290(param_2 + 0x128);
  }
  return;
}


