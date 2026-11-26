// 0x1802f7e22  FUN_1802f7e22
// size=38 thunk=false
// signature: undefined FUN_1802f7e22()
// status: ok


void FUN_1802f7e22(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}


