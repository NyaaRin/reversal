// 0x1802ef5ee  FUN_1802ef5ee
// size=38 thunk=false
// signature: undefined FUN_1802ef5ee()
// status: ok


void FUN_1802ef5ee(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    thunk_FUN_18021e290(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}


